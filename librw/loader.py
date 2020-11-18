#!/usr/bin/env python

import argparse
from collections import defaultdict

from elftools.elf.elffile import ELFFile
from elftools.elf.sections import SymbolTableSection
from elftools.elf.relocation import RelocationSection

from .container import Container, Function, DataSection
from .disasm import disasm_bytes

from .rw import Rewriter

class Loader():
    def __init__(self, fname):
        self.fd = open(fname, 'rb')
        self.elffile = ELFFile(self.fd)
        self.container = Container()
        self.dup_symbols = dict()

    def is_pie(self):
        base_address = next(seg for seg in self.elffile.iter_segments() 
                                        if seg['p_type'] == "PT_LOAD")['p_vaddr']
        return self.elffile['e_type'] == 'ET_DYN' and base_address == 0


    def load_functions(self, fnlist):
        section = self.elffile.get_section_by_name(".text")
        data = section.data()
        base = section['sh_addr']
        for faddr, fvalue in fnlist.items():
            section_offset = faddr - base
            bytes = data[section_offset:section_offset + fvalue["sz"]]

            function = Function(fvalue["name"], faddr, fvalue["sz"], bytes,
                                fvalue["bind"])
            self.container.add_function(function)

    def load_data_sections(self, seclist, section_filter=lambda x: True):
        for sec in [sec for sec in seclist if section_filter(sec)]:
            sval = seclist[sec]
            section = self.elffile.get_section_by_name(sec)
            data = section.data()
            more = bytearray()


            #well, let's hope the first entry in init_array and fini_array are always "frame_dummy" and "__do_global_dtors_aux"  
            if sec == ".init_array" or sec == ".fini_array":
                if len(data) > 8:
                    data = data[8:]
                else:
                    data = b''
                more.extend(data)

            else:
                more.extend(data)
                if len(more) < sval['sz']:
                    more.extend([0x0 for _ in range(0, sval['sz'] - len(more))])

            bytes = more

        
            if sec == ".init_array" or sec == ".fini_array":
                ds = DataSection(sec, sval["base"] + 8, sval["sz"] - 8, bytes, sval['align'])
            else:
                ds = DataSection(sec, sval["base"], sval["sz"], bytes, sval['align'])

            self.container.add_section(ds)

        # Find if there is a plt section
        for sec in seclist:
            if sec == '.plt':
                self.container.plt_base = seclist[sec]['base']
            if sec == ".plt.got":
                section = self.elffile.get_section_by_name(sec)
                data = section.data()
                entries = list(
                    disasm_bytes(section.data(), seclist[sec]['base']))
                self.container.gotplt_base = seclist[sec]['base']
                self.container.gotplt_sz = seclist[sec]['sz']
                self.container.gotplt_entries = entries

    def load_relocations(self, relocs):
        for reloc_section, relocations in relocs.items():
            section = reloc_section[5:]

            if reloc_section == ".rela.plt":
                self.container.add_plt_information(relocations)

            if section in self.container.sections:
                self.container.sections[section].add_relocations(relocations)
            else:
                print("[*] Relocations for a section that's not loaded:",
                      reloc_section)
                self.container.add_relocations(section, relocations)

    #added by JX
    def adjust_sym_name(self, symbol):

        if symbol['st_size'] == 0:
            return symbol.name 

        if symbol.name in Rewriter.GCC_FUNCTIONS:
            return symbol.name 
        
        if symbol['st_info']['bind'] == "STB_GLOBAL":
            return symbol.name  

        if symbol.name not in self.dup_symbols:
            return symbol.name  

        if len(self.dup_symbols[symbol.name]) > 1:
            return symbol.name + "_"+ str(hex(symbol['st_value']))
        else:
            return symbol.name  

    def load_dup_symbols(self):
        symbol_tables = [
            sec for sec in self.elffile.iter_sections()
            if isinstance(sec, SymbolTableSection)
        ]

        function_list = dict()

        for section in symbol_tables:
            if not isinstance(section, SymbolTableSection):
                continue

            if section['sh_entsize'] == 0:
                continue

            for symbol in section.iter_symbols():
                if symbol['st_other']['visibility'] == "STV_HIDDEN":
                    continue

                    
                if symbol.name not in self.dup_symbols:
                    self.dup_symbols[symbol.name] = set()

                self.dup_symbols[symbol.name].add(symbol['st_value'])
        #end by JX


    def reloc_list_from_symtab(self):
        relocs = defaultdict(list)

        for section in self.elffile.iter_sections():
            if not isinstance(section, RelocationSection):
                continue

            symtable = self.elffile.get_section(section['sh_link'])

            for rel in section.iter_relocations():
                symbol = None
                if rel['r_info_sym'] != 0:
                    symbol = symtable.get_symbol(rel['r_info_sym'])

                if symbol:
                    if symbol['st_name'] == 0:
                        symsec = self.elffile.get_section(symbol['st_shndx'])
                        symbol_name = symsec.name
                    else:
                        symbol_name = self.adjust_sym_name(symbol)

                else:
                    symbol = dict(st_value=None)
                    symbol_name = None

                reloc_i = {
                    'name': symbol_name,
                    'st_value': symbol['st_value'],
                    'offset': rel['r_offset'],
                    'addend': rel['r_addend'],
                    'type': rel['r_info_type'],
                    'r_info_sym': rel['r_info_sym'],
                }

                relocs[section.name].append(reloc_i)

        return relocs

    def flist_from_symtab(self):
        symbol_tables = [
            sec for sec in self.elffile.iter_sections()
            if isinstance(sec, SymbolTableSection)
        ]

        function_list = dict()

        for section in symbol_tables:
            if not isinstance(section, SymbolTableSection):
                continue

            if section['sh_entsize'] == 0:
                continue

            for symbol in section.iter_symbols():
                if symbol['st_other']['visibility'] == "STV_HIDDEN":
                    continue

                if (symbol['st_info']['type'] == 'STT_FUNC'
                        and symbol['st_shndx'] != 'SHN_UNDEF'):

                    function_list[symbol['st_value']] = {
                        'name': self.adjust_sym_name(symbol), 
                        #JX changed the name; needs to make sure the symbols and relocations are consistent
                        'sz': symbol['st_size'],
                        'visibility': symbol['st_other']['visibility'],
                        'bind': symbol['st_info']['bind'],
                    }

        return function_list



    # keep track of the list of alias symbols at the same address
    # added by JX
    def aliaslist_from_symtab(self):
        symbol_tables = [
            sec for sec in self.elffile.iter_sections()
            if isinstance(sec, SymbolTableSection)
        ]

        alias_list = dict()

        for section in symbol_tables:
            if not isinstance(section, SymbolTableSection):
                continue

            if section['sh_entsize'] == 0:
                continue

            #let's aggressively consider all aliases
            for symbol in section.iter_symbols():
                #if symbol['st_other']['visibility'] == "STV_HIDDEN":
                #   continue

                #if symbol['st_shndx'] == 'SHN_UNDEF':
                #   continue

                if symbol['st_value'] not in alias_list:
                    alias_list[symbol['st_value']] = set()
                
                if len(symbol.name):
                    alias_list[symbol['st_value']].add(self.adjust_sym_name(symbol))
                    #JX changed the name; needs to make sure the symbols and relocations are consistent

        return alias_list


    #obtain the list of TLS symbols (they are very special)
    def tlslist_from_symtable(self):

        symbol_tables = [
            sec for sec in self.elffile.iter_sections()
            if isinstance(sec, SymbolTableSection)
        ]

        tlslist = dict()

        for section in symbol_tables:

            if section['sh_entsize'] == 0:
                continue

            #let's aggressively consider all aliases
            for symbol in section.iter_symbols():
                if symbol['st_info']['type'] == "STT_TLS":
                    tlslist[symbol.name] = symbol

        return tlslist

    def load_aliases(self, alist):
        self.container.add_aliases(alist)

    def load_tls(self, tls_list):
        self.container.add_tlslist(tls_list)

    #end by JX

    def slist_from_symtab(self):
        sections = dict()
        for section in self.elffile.iter_sections():
            sections[section.name] = {
                'base': section['sh_addr'],
                'sz': section['sh_size'],
                'offset': section['sh_offset'],
                'align': section['sh_addralign'],
            }

        return sections

    def load_globals_from_glist(self, glist):
        self.container.add_globals(glist)

    def global_data_list_from_symtab(self):
        symbol_tables = [
            sec for sec in self.elffile.iter_sections()
            if isinstance(sec, SymbolTableSection)
        ]

        global_list = defaultdict(list)

        for section in symbol_tables:
            if not isinstance(section, SymbolTableSection):
                continue

            if section['sh_entsize'] == 0:
                continue

            for symbol in section.iter_symbols():
                # XXX: HACK
                if "@@GLIBC" in symbol.name:
                    continue
                if symbol['st_other']['visibility'] == "STV_HIDDEN":
                    continue
                if symbol['st_size'] == 0:
                    continue

                if (symbol['st_info']['type'] == 'STT_OBJECT'
                        and symbol['st_shndx'] != 'SHN_UNDEF'):
                    global_list[symbol['st_value']].append({
                        'name':
                        self.adjust_sym_name(symbol),
                        #JX changed the name; needs to make sure the symbols and relocations are consistent
                        'sz':
                        symbol['st_size'],
                        'visibility': symbol['st_other']['visibility'],
                        'bind': symbol['st_info']['bind'],    
                    })

        return global_list


if __name__ == "__main__":
    from .rw import Rewriter

    argp = argparse.ArgumentParser()

    argp.add_argument("bin", type=str, help="Input binary to load")
    argp.add_argument(
        "--flist", type=str, help="Load function list from .json file")

    args = argp.parse_args()

    loader = Loader(args.bin)

    flist = loader.flist_from_symtab()
    loader.load_functions(flist)

    slist = loader.slist_from_symtab()
    loader.load_data_sections(slist, lambda x: x in Rewriter.DATASECTIONS)

    reloc_list = loader.reloc_list_from_symtab()
    loader.load_relocations(reloc_list)

    global_list = loader.global_data_list_from_symtab()
    loader.load_globals_from_glist(global_list)
