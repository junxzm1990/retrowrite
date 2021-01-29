#include <stdlib.h>
#include <stdio.h>
#include <dlfcn.h>
#include <string.h>

typedef int (*funcptr)(void);

int hello(void){
	printf("Hello\n");
	return 0;
}

int main(){

	void* soHandle = dlopen("./asm.so", RTLD_GLOBAL | RTLD_NOW);

	void** jx_func = (void**)dlsym(soHandle, "jx_func");
	
	printf("Address of symbol %p and value %x\n", jx_func, (funcptr)(*jx_func));

	void* ptr[1];
	ptr[0] = (void*)hello;

	memcpy(jx_func, ptr, sizeof(void*));

	printf("Address of symbol %qx and value %qx\n", jx_func, (funcptr)(*jx_func));

	funcptr DPLCreateLibrary = (funcptr)dlsym(soHandle, "DPLCreateLibrary");
	
	DPLCreateLibrary();
}




