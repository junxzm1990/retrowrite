// Foxit Quick PDF Library
// Linux Edition
// Version 18.11

// Copyright © 1999 - 2020 Foxit Software

// FoxitQPLLinuxCPP1811.cpp
// C++ import class
// http://www.debenu.com/

#include "FoxitQPLLinuxCPP1811.h"
#include "dlfcn.h"
#include <string>

bool FoxitQPLLinuxCPP1811::LibraryLoaded()
{
	return !loadError;
}

void* FoxitQPLLinuxCPP1811::AttachFunction(const char* funcName, bool ignoreError)
{
	void* address = dlsym(soHandle, funcName);
	if ((address == 0) && (!ignoreError))
	{
		loadError = true;
	}
	return address;
}

FoxitQPLLinuxCPP1811::FoxitQPLLinuxCPP1811(const std::wstring& LinuxFileName)
{
	loadError = false;
	instanceID = 0;
	std::wstring LinuxDirectory;

	std::string narrowFileName(LinuxFileName.begin(), LinuxFileName.end());

	soHandle = dlopen(narrowFileName.c_str(), RTLD_LOCAL | RTLD_LAZY);

	if (soHandle > 0) {
		FoxitQPLAddArcToPath = (FoxitQPLFuncType30)AttachFunction("DPLAddArcToPath");
		FoxitQPLAddBoxToPath = (FoxitQPLFuncType31)AttachFunction("DPLAddBoxToPath");
		FoxitQPLAddCJKFont = (FoxitQPLFuncType72)AttachFunction("DPLAddCJKFont");
		FoxitQPLAddCurveToPath = (FoxitQPLFuncType33)AttachFunction("DPLAddCurveToPath");
		FoxitQPLAddEmbeddedFile = (FoxitQPLFuncType133)AttachFunction("DPLAddEmbeddedFile");
		FoxitQPLAddFileAttachment = (FoxitQPLFuncType129)AttachFunction("DPLAddFileAttachment");
		FoxitQPLAddFormFieldChoiceSub = (FoxitQPLFuncType117)AttachFunction("DPLAddFormFieldChoiceSub");
		FoxitQPLAddFormFieldSub = (FoxitQPLFuncType111)AttachFunction("DPLAddFormFieldSub");
		FoxitQPLAddFormFont = (FoxitQPLFuncType72)AttachFunction("DPLAddFormFont");
		FoxitQPLAddFreeTextAnnotation = (FoxitQPLFuncType50)AttachFunction("DPLAddFreeTextAnnotation");
		FoxitQPLAddFreeTextAnnotationEx = (FoxitQPLFuncType51)AttachFunction("DPLAddFreeTextAnnotationEx");
		FoxitQPLAddGlobalJavaScript = (FoxitQPLFuncType133)AttachFunction("DPLAddGlobalJavaScript");
		FoxitQPLAddImageFromFile = (FoxitQPLFuncType129)AttachFunction("DPLAddImageFromFile");
		FoxitQPLAddImageFromFileOffset = (FoxitQPLFuncType131)AttachFunction("DPLAddImageFromFileOffset");
		FoxitQPLAddImageFromString = (FoxitQPLFuncType25)AttachFunction("DPLAddImageFromString");
		FoxitQPLAddLGIDictToPage = (FoxitQPLFuncType121)AttachFunction("DPLAddLGIDictToPage");
		FoxitQPLAddLineToPath = (FoxitQPLFuncType29)AttachFunction("DPLAddLineToPath");
		FoxitQPLAddLinkToDestination = (FoxitQPLFuncType44)AttachFunction("DPLAddLinkToDestination");
		FoxitQPLAddLinkToEmbeddedFile = (FoxitQPLFuncType47)AttachFunction("DPLAddLinkToEmbeddedFile");
		FoxitQPLAddLinkToFile = (FoxitQPLFuncType49)AttachFunction("DPLAddLinkToFile");
		FoxitQPLAddLinkToFileDest = (FoxitQPLFuncType53)AttachFunction("DPLAddLinkToFileDest");
		FoxitQPLAddLinkToFileEx = (FoxitQPLFuncType52)AttachFunction("DPLAddLinkToFileEx");
		FoxitQPLAddLinkToJavaScript = (FoxitQPLFuncType48)AttachFunction("DPLAddLinkToJavaScript");
		FoxitQPLAddLinkToLocalFile = (FoxitQPLFuncType48)AttachFunction("DPLAddLinkToLocalFile");
		FoxitQPLAddLinkToPage = (FoxitQPLFuncType43)AttachFunction("DPLAddLinkToPage");
		FoxitQPLAddLinkToWeb = (FoxitQPLFuncType48)AttachFunction("DPLAddLinkToWeb");
		FoxitQPLAddNoteAnnotation = (FoxitQPLFuncType61)AttachFunction("DPLAddNoteAnnotation");
		FoxitQPLAddOpenTypeFontFromFile = (FoxitQPLFuncType129)AttachFunction("DPLAddOpenTypeFontFromFile");
		FoxitQPLAddOpenTypeFontFromString = (FoxitQPLFuncType25)AttachFunction("DPLAddOpenTypeFontFromString");
		FoxitQPLAddPageLabels = (FoxitQPLFuncType108)AttachFunction("DPLAddPageLabels");
		FoxitQPLAddPageMatrix = (FoxitQPLFuncType31)AttachFunction("DPLAddPageMatrix");
		FoxitQPLAddPagePieceInfo = (FoxitQPLFuncType134)AttachFunction("DPLAddPagePieceInfo");
		FoxitQPLAddPagePieceInfoDirect = (FoxitQPLFuncType140)AttachFunction("DPLAddPagePieceInfoDirect");
		FoxitQPLAddRGBSeparationColor = (FoxitQPLFuncType128)AttachFunction("DPLAddRGBSeparationColor");
		FoxitQPLAddRelativeLinkToFile = (FoxitQPLFuncType49)AttachFunction("DPLAddRelativeLinkToFile");
		FoxitQPLAddRelativeLinkToFileDest = (FoxitQPLFuncType53)AttachFunction("DPLAddRelativeLinkToFileDest");
		FoxitQPLAddRelativeLinkToFileEx = (FoxitQPLFuncType52)AttachFunction("DPLAddRelativeLinkToFileEx");
		FoxitQPLAddRelativeLinkToLocalFile = (FoxitQPLFuncType48)AttachFunction("DPLAddRelativeLinkToLocalFile");
		FoxitQPLAddSVGAnnotationFromFile = (FoxitQPLFuncType48)AttachFunction("DPLAddSVGAnnotationFromFile");
		FoxitQPLAddSWFAnnotationFromFile = (FoxitQPLFuncType54)AttachFunction("DPLAddSWFAnnotationFromFile");
		FoxitQPLAddSeparationColor = (FoxitQPLFuncType127)AttachFunction("DPLAddSeparationColor");
		FoxitQPLAddSignProcessOverlayText = (FoxitQPLFuncType83)AttachFunction("DPLAddSignProcessOverlayText");
		FoxitQPLAddStampAnnotation = (FoxitQPLFuncType46)AttachFunction("DPLAddStampAnnotation");
		FoxitQPLAddStampAnnotationFromImage = (FoxitQPLFuncType55)AttachFunction("DPLAddStampAnnotationFromImage");
		FoxitQPLAddStampAnnotationFromImageID = (FoxitQPLFuncType46)AttachFunction("DPLAddStampAnnotationFromImageID");
		FoxitQPLAddStandardFont = (FoxitQPLFuncType72)AttachFunction("DPLAddStandardFont");
		FoxitQPLAddSubsettedFont = (FoxitQPLFuncType132)AttachFunction("DPLAddSubsettedFont");
		FoxitQPLAddTextMarkupAnnotation = (FoxitQPLFuncType80)AttachFunction("DPLAddTextMarkupAnnotation");
		FoxitQPLAddToBuffer = (FoxitQPLFuncType24)AttachFunction("DPLAddToBuffer");
		FoxitQPLAddToFileList = (FoxitQPLFuncType133)AttachFunction("DPLAddToFileList");
		FoxitQPLAddTrueTypeFont = (FoxitQPLFuncType129)AttachFunction("DPLAddTrueTypeFont");
		FoxitQPLAddTrueTypeFontFromFile = (FoxitQPLFuncType121)AttachFunction("DPLAddTrueTypeFontFromFile");
		FoxitQPLAddTrueTypeFontFromString = (FoxitQPLFuncType23)AttachFunction("DPLAddTrueTypeFontFromString");
		FoxitQPLAddTrueTypeFontFromStringEx = (FoxitQPLFuncType25)AttachFunction("DPLAddTrueTypeFontFromStringEx");
		FoxitQPLAddTrueTypeSubsettedFont = (FoxitQPLFuncType134)AttachFunction("DPLAddTrueTypeSubsettedFont");
		FoxitQPLAddTrueTypeSubsettedFontFromFile = (FoxitQPLFuncType134)AttachFunction("DPLAddTrueTypeSubsettedFontFromFile");
		FoxitQPLAddTrueTypeSubsettedFontFromString = (FoxitQPLFuncType27)AttachFunction("DPLAddTrueTypeSubsettedFontFromString");
		FoxitQPLAddType1Font = (FoxitQPLFuncType121)AttachFunction("DPLAddType1Font");
		FoxitQPLAddU3DAnnotationFromFile = (FoxitQPLFuncType48)AttachFunction("DPLAddU3DAnnotationFromFile");
		FoxitQPLAnalyseFile = (FoxitQPLFuncType133)AttachFunction("DPLAnalyseFile");
		FoxitQPLAnnotationCount = (FoxitQPLFuncType22)AttachFunction("DPLAnnotationCount");
		FoxitQPLAnsiStringResultLength = (FoxitQPLFuncType22)AttachFunction("DPLAnsiStringResultLength");
		FoxitQPLAppendSpace = (FoxitQPLFuncType28)AttachFunction("DPLAppendSpace");
		FoxitQPLAppendTableColumns = (FoxitQPLFuncType85)AttachFunction("DPLAppendTableColumns");
		FoxitQPLAppendTableRows = (FoxitQPLFuncType85)AttachFunction("DPLAppendTableRows");
		FoxitQPLAppendText = (FoxitQPLFuncType121)AttachFunction("DPLAppendText");
		FoxitQPLAppendToFile = (FoxitQPLFuncType121)AttachFunction("DPLAppendToFile");
		FoxitQPLAppendToString = (FoxitQPLFuncType3)AttachFunction("DPLAppendToString");
		FoxitQPLApplyStyle = (FoxitQPLFuncType121)AttachFunction("DPLApplyStyle");
		FoxitQPLAttachAnnotToForm = (FoxitQPLFuncType72)AttachFunction("DPLAttachAnnotToForm");
		FoxitQPLBalanceContentStream = (FoxitQPLFuncType22)AttachFunction("DPLBalanceContentStream");
		FoxitQPLBalancePageTree = (FoxitQPLFuncType72)AttachFunction("DPLBalancePageTree");
		FoxitQPLBeginPageUpdate = (FoxitQPLFuncType22)AttachFunction("DPLBeginPageUpdate");
		FoxitQPLCapturePage = (FoxitQPLFuncType72)AttachFunction("DPLCapturePage");
		FoxitQPLCapturePageEx = (FoxitQPLFuncType85)AttachFunction("DPLCapturePageEx");
		FoxitQPLCharWidth = (FoxitQPLFuncType72)AttachFunction("DPLCharWidth");
		FoxitQPLCheckFileCompliance = (FoxitQPLFuncType135)AttachFunction("DPLCheckFileCompliance");
		FoxitQPLCheckObjects = (FoxitQPLFuncType22)AttachFunction("DPLCheckObjects");
		FoxitQPLCheckPageAnnots = (FoxitQPLFuncType22)AttachFunction("DPLCheckPageAnnots");
		FoxitQPLCheckPassword = (FoxitQPLFuncType121)AttachFunction("DPLCheckPassword");
		FoxitQPLClearFileList = (FoxitQPLFuncType121)AttachFunction("DPLClearFileList");
		FoxitQPLClearImage = (FoxitQPLFuncType72)AttachFunction("DPLClearImage");
		FoxitQPLClearPageLabels = (FoxitQPLFuncType22)AttachFunction("DPLClearPageLabels");
		FoxitQPLClearTextFormatting = (FoxitQPLFuncType22)AttachFunction("DPLClearTextFormatting");
		FoxitQPLCloneOutlineAction = (FoxitQPLFuncType72)AttachFunction("DPLCloneOutlineAction");
		FoxitQPLClonePages = (FoxitQPLFuncType92)AttachFunction("DPLClonePages");
		FoxitQPLCloseOutline = (FoxitQPLFuncType72)AttachFunction("DPLCloseOutline");
		FoxitQPLClosePath = (FoxitQPLFuncType22)AttachFunction("DPLClosePath");
		FoxitQPLCombineContentStreams = (FoxitQPLFuncType22)AttachFunction("DPLCombineContentStreams");
		FoxitQPLCompareOutlines = (FoxitQPLFuncType85)AttachFunction("DPLCompareOutlines");
		FoxitQPLCompressContent = (FoxitQPLFuncType22)AttachFunction("DPLCompressContent");
		FoxitQPLCompressFonts = (FoxitQPLFuncType72)AttachFunction("DPLCompressFonts");
		FoxitQPLCompressImages = (FoxitQPLFuncType72)AttachFunction("DPLCompressImages");
		FoxitQPLCompressPage = (FoxitQPLFuncType22)AttachFunction("DPLCompressPage");
		FoxitQPLContentStreamCount = (FoxitQPLFuncType22)AttachFunction("DPLContentStreamCount");
		FoxitQPLContentStreamSafe = (FoxitQPLFuncType22)AttachFunction("DPLContentStreamSafe");
		FoxitQPLCopyPageRanges = (FoxitQPLFuncType111)AttachFunction("DPLCopyPageRanges");
		FoxitQPLCopyPageRangesEx = (FoxitQPLFuncType114)AttachFunction("DPLCopyPageRangesEx");
		FoxitQPLCreateBuffer = (FoxitQPLFuncType3)AttachFunction("DPLCreateBuffer");
		FoxitQPLCreateLibrary = (FoxitQPLFuncType21)AttachFunction("DPLCreateLibrary");
		FoxitQPLCreateNewObject = (FoxitQPLFuncType22)AttachFunction("DPLCreateNewObject");
		FoxitQPLCreateTable = (FoxitQPLFuncType85)AttachFunction("DPLCreateTable");
		FoxitQPLDAAppendFile = (FoxitQPLFuncType72)AttachFunction("DPLDAAppendFile");
		FoxitQPLDACapturePage = (FoxitQPLFuncType85)AttachFunction("DPLDACapturePage");
		FoxitQPLDACapturePageEx = (FoxitQPLFuncType92)AttachFunction("DPLDACapturePageEx");
		FoxitQPLDACloseFile = (FoxitQPLFuncType72)AttachFunction("DPLDACloseFile");
		FoxitQPLDADrawCapturedPage = (FoxitQPLFuncType94)AttachFunction("DPLDADrawCapturedPage");
		FoxitQPLDADrawRotatedCapturedPage = (FoxitQPLFuncType95)AttachFunction("DPLDADrawRotatedCapturedPage");
		FoxitQPLDAEmbedFileStreams = (FoxitQPLFuncType111)AttachFunction("DPLDAEmbedFileStreams");
		FoxitQPLDAExtractPageText = (FoxitQPLFuncType149)AttachFunction("DPLDAExtractPageText");
		FoxitQPLDAExtractPageTextBlocks = (FoxitQPLFuncType92)AttachFunction("DPLDAExtractPageTextBlocks");
		FoxitQPLDAFindPage = (FoxitQPLFuncType85)AttachFunction("DPLDAFindPage");
		FoxitQPLDAGetAnnotationCount = (FoxitQPLFuncType85)AttachFunction("DPLDAGetAnnotationCount");
		FoxitQPLDAGetFormFieldCount = (FoxitQPLFuncType72)AttachFunction("DPLDAGetFormFieldCount");
		FoxitQPLDAGetFormFieldTitle = (FoxitQPLFuncType148)AttachFunction("DPLDAGetFormFieldTitle");
		FoxitQPLDAGetFormFieldValue = (FoxitQPLFuncType148)AttachFunction("DPLDAGetFormFieldValue");
		FoxitQPLDAGetImageDataToString = (FoxitQPLFuncType5)AttachFunction("DPLDAGetImageDataToString");
		FoxitQPLDAGetImageDblProperty = (FoxitQPLFuncType18)AttachFunction("DPLDAGetImageDblProperty");
		FoxitQPLDAGetImageIntProperty = (FoxitQPLFuncType97)AttachFunction("DPLDAGetImageIntProperty");
		FoxitQPLDAGetImageListCount = (FoxitQPLFuncType85)AttachFunction("DPLDAGetImageListCount");
		FoxitQPLDAGetInformation = (FoxitQPLFuncType151)AttachFunction("DPLDAGetInformation");
		FoxitQPLDAGetObjectCount = (FoxitQPLFuncType72)AttachFunction("DPLDAGetObjectCount");
		FoxitQPLDAGetObjectToString = (FoxitQPLFuncType4)AttachFunction("DPLDAGetObjectToString");
		FoxitQPLDAGetPageBox = (FoxitQPLFuncType18)AttachFunction("DPLDAGetPageBox");
		FoxitQPLDAGetPageContentToString = (FoxitQPLFuncType4)AttachFunction("DPLDAGetPageContentToString");
		FoxitQPLDAGetPageCount = (FoxitQPLFuncType72)AttachFunction("DPLDAGetPageCount");
		FoxitQPLDAGetPageHeight = (FoxitQPLFuncType16)AttachFunction("DPLDAGetPageHeight");
		FoxitQPLDAGetPageImageList = (FoxitQPLFuncType85)AttachFunction("DPLDAGetPageImageList");
		FoxitQPLDAGetPageLayout = (FoxitQPLFuncType72)AttachFunction("DPLDAGetPageLayout");
		FoxitQPLDAGetPageMode = (FoxitQPLFuncType72)AttachFunction("DPLDAGetPageMode");
		FoxitQPLDAGetPageWidth = (FoxitQPLFuncType16)AttachFunction("DPLDAGetPageWidth");
		FoxitQPLDAGetTextBlockAsString = (FoxitQPLFuncType148)AttachFunction("DPLDAGetTextBlockAsString");
		FoxitQPLDAGetTextBlockBound = (FoxitQPLFuncType17)AttachFunction("DPLDAGetTextBlockBound");
		FoxitQPLDAGetTextBlockCharWidth = (FoxitQPLFuncType17)AttachFunction("DPLDAGetTextBlockCharWidth");
		FoxitQPLDAGetTextBlockColor = (FoxitQPLFuncType17)AttachFunction("DPLDAGetTextBlockColor");
		FoxitQPLDAGetTextBlockColorType = (FoxitQPLFuncType85)AttachFunction("DPLDAGetTextBlockColorType");
		FoxitQPLDAGetTextBlockCount = (FoxitQPLFuncType72)AttachFunction("DPLDAGetTextBlockCount");
		FoxitQPLDAGetTextBlockFontName = (FoxitQPLFuncType148)AttachFunction("DPLDAGetTextBlockFontName");
		FoxitQPLDAGetTextBlockFontSize = (FoxitQPLFuncType16)AttachFunction("DPLDAGetTextBlockFontSize");
		FoxitQPLDAGetTextBlockText = (FoxitQPLFuncType148)AttachFunction("DPLDAGetTextBlockText");
		FoxitQPLDAHasPageBox = (FoxitQPLFuncType92)AttachFunction("DPLDAHasPageBox");
		FoxitQPLDAHidePage = (FoxitQPLFuncType85)AttachFunction("DPLDAHidePage");
		FoxitQPLDAMovePage = (FoxitQPLFuncType97)AttachFunction("DPLDAMovePage");
		FoxitQPLDANewPage = (FoxitQPLFuncType72)AttachFunction("DPLDANewPage");
		FoxitQPLDANewPages = (FoxitQPLFuncType85)AttachFunction("DPLDANewPages");
		FoxitQPLDANormalizePage = (FoxitQPLFuncType92)AttachFunction("DPLDANormalizePage");
		FoxitQPLDAOpenFile = (FoxitQPLFuncType133)AttachFunction("DPLDAOpenFile");
		FoxitQPLDAOpenFileReadOnly = (FoxitQPLFuncType133)AttachFunction("DPLDAOpenFileReadOnly");
		FoxitQPLDAPageRotation = (FoxitQPLFuncType85)AttachFunction("DPLDAPageRotation");
		FoxitQPLDAReleaseImageList = (FoxitQPLFuncType85)AttachFunction("DPLDAReleaseImageList");
		FoxitQPLDAReleaseTextBlocks = (FoxitQPLFuncType72)AttachFunction("DPLDAReleaseTextBlocks");
		FoxitQPLDARemoveUsageRights = (FoxitQPLFuncType72)AttachFunction("DPLDARemoveUsageRights");
		FoxitQPLDARenderPageToFile = (FoxitQPLFuncType96)AttachFunction("DPLDARenderPageToFile");
		FoxitQPLDARenderPageToString = (FoxitQPLFuncType6)AttachFunction("DPLDARenderPageToString");
		FoxitQPLDARotatePage = (FoxitQPLFuncType97)AttachFunction("DPLDARotatePage");
		FoxitQPLDASaveAsFile = (FoxitQPLFuncType111)AttachFunction("DPLDASaveAsFile");
		FoxitQPLDASaveImageDataToFile = (FoxitQPLFuncType108)AttachFunction("DPLDASaveImageDataToFile");
		FoxitQPLDASetInformation = (FoxitQPLFuncType117)AttachFunction("DPLDASetInformation");
		FoxitQPLDASetPageBox = (FoxitQPLFuncType94)AttachFunction("DPLDASetPageBox");
		FoxitQPLDASetPageLayout = (FoxitQPLFuncType85)AttachFunction("DPLDASetPageLayout");
		FoxitQPLDASetPageMode = (FoxitQPLFuncType85)AttachFunction("DPLDASetPageMode");
		FoxitQPLDASetPageSize = (FoxitQPLFuncType87)AttachFunction("DPLDASetPageSize");
		FoxitQPLDASetRenderArea = (FoxitQPLFuncType31)AttachFunction("DPLDASetRenderArea");
		FoxitQPLDASetTextExtractionArea = (FoxitQPLFuncType31)AttachFunction("DPLDASetTextExtractionArea");
		FoxitQPLDASetTextExtractionOptions = (FoxitQPLFuncType85)AttachFunction("DPLDASetTextExtractionOptions");
		FoxitQPLDASetTextExtractionScaling = (FoxitQPLFuncType78)AttachFunction("DPLDASetTextExtractionScaling");
		FoxitQPLDASetTextExtractionWordGap = (FoxitQPLFuncType28)AttachFunction("DPLDASetTextExtractionWordGap");
		FoxitQPLDAShiftedHeader = (FoxitQPLFuncType72)AttachFunction("DPLDAShiftedHeader");
		FoxitQPLDecrypt = (FoxitQPLFuncType22)AttachFunction("DPLDecrypt");
		FoxitQPLDecryptFile = (FoxitQPLFuncType136)AttachFunction("DPLDecryptFile");
		FoxitQPLDeleteAnalysis = (FoxitQPLFuncType72)AttachFunction("DPLDeleteAnalysis");
		FoxitQPLDeleteAnnotation = (FoxitQPLFuncType72)AttachFunction("DPLDeleteAnnotation");
		FoxitQPLDeleteContentStream = (FoxitQPLFuncType22)AttachFunction("DPLDeleteContentStream");
		FoxitQPLDeleteFormField = (FoxitQPLFuncType72)AttachFunction("DPLDeleteFormField");
		FoxitQPLDeleteOptionalContentGroup = (FoxitQPLFuncType72)AttachFunction("DPLDeleteOptionalContentGroup");
		FoxitQPLDeletePageLGIDict = (FoxitQPLFuncType72)AttachFunction("DPLDeletePageLGIDict");
		FoxitQPLDeletePages = (FoxitQPLFuncType85)AttachFunction("DPLDeletePages");
		FoxitQPLDocJavaScriptAction = (FoxitQPLFuncType133)AttachFunction("DPLDocJavaScriptAction");
		FoxitQPLDocumentCount = (FoxitQPLFuncType22)AttachFunction("DPLDocumentCount");
		FoxitQPLDrawArc = (FoxitQPLFuncType39)AttachFunction("DPLDrawArc");
		FoxitQPLDrawBarcode = (FoxitQPLFuncType50)AttachFunction("DPLDrawBarcode");
		FoxitQPLDrawBox = (FoxitQPLFuncType42)AttachFunction("DPLDrawBox");
		FoxitQPLDrawCapturedPage = (FoxitQPLFuncType80)AttachFunction("DPLDrawCapturedPage");
		FoxitQPLDrawCapturedPageMatrix = (FoxitQPLFuncType82)AttachFunction("DPLDrawCapturedPageMatrix");
		FoxitQPLDrawCircle = (FoxitQPLFuncType56)AttachFunction("DPLDrawCircle");
		FoxitQPLDrawDataMatrixSymbol = (FoxitQPLFuncType59)AttachFunction("DPLDrawDataMatrixSymbol");
		FoxitQPLDrawEllipse = (FoxitQPLFuncType42)AttachFunction("DPLDrawEllipse");
		FoxitQPLDrawEllipticArc = (FoxitQPLFuncType36)AttachFunction("DPLDrawEllipticArc");
		FoxitQPLDrawHTMLText = (FoxitQPLFuncType57)AttachFunction("DPLDrawHTMLText");
		FoxitQPLDrawHTMLTextBox = (FoxitQPLFuncType144)AttachFunction("DPLDrawHTMLTextBox");
		FoxitQPLDrawHTMLTextBoxMatrix = (FoxitQPLFuncType145)AttachFunction("DPLDrawHTMLTextBoxMatrix");
		FoxitQPLDrawHTMLTextMatrix = (FoxitQPLFuncType70)AttachFunction("DPLDrawHTMLTextMatrix");
		FoxitQPLDrawImage = (FoxitQPLFuncType31)AttachFunction("DPLDrawImage");
		FoxitQPLDrawImageMatrix = (FoxitQPLFuncType33)AttachFunction("DPLDrawImageMatrix");
		FoxitQPLDrawIntelligentMailBarcode = (FoxitQPLFuncType37)AttachFunction("DPLDrawIntelligentMailBarcode");
		FoxitQPLDrawLine = (FoxitQPLFuncType31)AttachFunction("DPLDrawLine");
		FoxitQPLDrawMultiLineText = (FoxitQPLFuncType66)AttachFunction("DPLDrawMultiLineText");
		FoxitQPLDrawPDF417Symbol = (FoxitQPLFuncType63)AttachFunction("DPLDrawPDF417Symbol");
		FoxitQPLDrawPDF417SymbolEx = (FoxitQPLFuncType65)AttachFunction("DPLDrawPDF417SymbolEx");
		FoxitQPLDrawPath = (FoxitQPLFuncType72)AttachFunction("DPLDrawPath");
		FoxitQPLDrawPathEvenOdd = (FoxitQPLFuncType72)AttachFunction("DPLDrawPathEvenOdd");
		FoxitQPLDrawPostScriptXObject = (FoxitQPLFuncType72)AttachFunction("DPLDrawPostScriptXObject");
		FoxitQPLDrawQRCode = (FoxitQPLFuncType58)AttachFunction("DPLDrawQRCode");
		FoxitQPLDrawRotatedBox = (FoxitQPLFuncType38)AttachFunction("DPLDrawRotatedBox");
		FoxitQPLDrawRotatedCapturedPage = (FoxitQPLFuncType81)AttachFunction("DPLDrawRotatedCapturedPage");
		FoxitQPLDrawRotatedImage = (FoxitQPLFuncType32)AttachFunction("DPLDrawRotatedImage");
		FoxitQPLDrawRotatedMultiLineText = (FoxitQPLFuncType60)AttachFunction("DPLDrawRotatedMultiLineText");
		FoxitQPLDrawRotatedText = (FoxitQPLFuncType57)AttachFunction("DPLDrawRotatedText");
		FoxitQPLDrawRotatedTextBox = (FoxitQPLFuncType40)AttachFunction("DPLDrawRotatedTextBox");
		FoxitQPLDrawRotatedTextBoxEx = (FoxitQPLFuncType41)AttachFunction("DPLDrawRotatedTextBoxEx");
		FoxitQPLDrawRoundedBox = (FoxitQPLFuncType38)AttachFunction("DPLDrawRoundedBox");
		FoxitQPLDrawRoundedRotatedBox = (FoxitQPLFuncType35)AttachFunction("DPLDrawRoundedRotatedBox");
		FoxitQPLDrawScaledImage = (FoxitQPLFuncType30)AttachFunction("DPLDrawScaledImage");
		FoxitQPLDrawSpacedText = (FoxitQPLFuncType57)AttachFunction("DPLDrawSpacedText");
		FoxitQPLDrawTableRows = (FoxitQPLFuncType15)AttachFunction("DPLDrawTableRows");
		FoxitQPLDrawText = (FoxitQPLFuncType62)AttachFunction("DPLDrawText");
		FoxitQPLDrawTextArc = (FoxitQPLFuncType48)AttachFunction("DPLDrawTextArc");
		FoxitQPLDrawTextBox = (FoxitQPLFuncType48)AttachFunction("DPLDrawTextBox");
		FoxitQPLDrawTextBoxMatrix = (FoxitQPLFuncType64)AttachFunction("DPLDrawTextBoxMatrix");
		FoxitQPLDrawWrappedText = (FoxitQPLFuncType57)AttachFunction("DPLDrawWrappedText");
		FoxitQPLEditableContentStream = (FoxitQPLFuncType22)AttachFunction("DPLEditableContentStream");
		FoxitQPLEmbedFile = (FoxitQPLFuncType136)AttachFunction("DPLEmbedFile");
		FoxitQPLEmbedRelatedFile = (FoxitQPLFuncType140)AttachFunction("DPLEmbedRelatedFile");
		FoxitQPLEmbeddedFileCount = (FoxitQPLFuncType22)AttachFunction("DPLEmbeddedFileCount");
		FoxitQPLEncapsulateContentStream = (FoxitQPLFuncType22)AttachFunction("DPLEncapsulateContentStream");
		FoxitQPLEncodePermissions = (FoxitQPLFuncType107)AttachFunction("DPLEncodePermissions");
		FoxitQPLEncrypt = (FoxitQPLFuncType135)AttachFunction("DPLEncrypt");
		FoxitQPLEncryptFile = (FoxitQPLFuncType141)AttachFunction("DPLEncryptFile");
		FoxitQPLEncryptWithFingerprint = (FoxitQPLFuncType121)AttachFunction("DPLEncryptWithFingerprint");
		FoxitQPLEncryptionAlgorithm = (FoxitQPLFuncType22)AttachFunction("DPLEncryptionAlgorithm");
		FoxitQPLEncryptionStatus = (FoxitQPLFuncType22)AttachFunction("DPLEncryptionStatus");
		FoxitQPLEncryptionStrength = (FoxitQPLFuncType22)AttachFunction("DPLEncryptionStrength");
		FoxitQPLEndPageUpdate = (FoxitQPLFuncType22)AttachFunction("DPLEndPageUpdate");
		FoxitQPLEndSignProcessToFile = (FoxitQPLFuncType111)AttachFunction("DPLEndSignProcessToFile");
		FoxitQPLEndSignProcessToString = (FoxitQPLFuncType3)AttachFunction("DPLEndSignProcessToString");
		FoxitQPLExtractFilePageContentToString = (FoxitQPLFuncType10)AttachFunction("DPLExtractFilePageContentToString");
		FoxitQPLExtractFilePageText = (FoxitQPLFuncType155)AttachFunction("DPLExtractFilePageText");
		FoxitQPLExtractFilePageTextBlocks = (FoxitQPLFuncType135)AttachFunction("DPLExtractFilePageTextBlocks");
		FoxitQPLExtractFilePages = (FoxitQPLFuncType139)AttachFunction("DPLExtractFilePages");
		FoxitQPLExtractFilePagesEx = (FoxitQPLFuncType140)AttachFunction("DPLExtractFilePagesEx");
		FoxitQPLExtractPageRanges = (FoxitQPLFuncType121)AttachFunction("DPLExtractPageRanges");
		FoxitQPLExtractPageTextBlocks = (FoxitQPLFuncType72)AttachFunction("DPLExtractPageTextBlocks");
		FoxitQPLExtractPages = (FoxitQPLFuncType85)AttachFunction("DPLExtractPages");
		FoxitQPLFileListCount = (FoxitQPLFuncType121)AttachFunction("DPLFileListCount");
		FoxitQPLFileListItem = (FoxitQPLFuncType153)AttachFunction("DPLFileListItem");
		FoxitQPLFindFonts = (FoxitQPLFuncType22)AttachFunction("DPLFindFonts");
		FoxitQPLFindFormFieldByTitle = (FoxitQPLFuncType121)AttachFunction("DPLFindFormFieldByTitle");
		FoxitQPLFindImages = (FoxitQPLFuncType22)AttachFunction("DPLFindImages");
		FoxitQPLFitImage = (FoxitQPLFuncType45)AttachFunction("DPLFitImage");
		FoxitQPLFitRotatedTextBox = (FoxitQPLFuncType40)AttachFunction("DPLFitRotatedTextBox");
		FoxitQPLFitTextBox = (FoxitQPLFuncType48)AttachFunction("DPLFitTextBox");
		FoxitQPLFlattenAllFormFields = (FoxitQPLFuncType72)AttachFunction("DPLFlattenAllFormFields");
		FoxitQPLFlattenAnnot = (FoxitQPLFuncType85)AttachFunction("DPLFlattenAnnot");
		FoxitQPLFlattenFormField = (FoxitQPLFuncType72)AttachFunction("DPLFlattenFormField");
		FoxitQPLFontCount = (FoxitQPLFuncType22)AttachFunction("DPLFontCount");
		FoxitQPLFontFamily = (FoxitQPLFuncType143)AttachFunction("DPLFontFamily");
		FoxitQPLFontHasKerning = (FoxitQPLFuncType22)AttachFunction("DPLFontHasKerning");
		FoxitQPLFontName = (FoxitQPLFuncType143)AttachFunction("DPLFontName");
		FoxitQPLFontReference = (FoxitQPLFuncType143)AttachFunction("DPLFontReference");
		FoxitQPLFontSize = (FoxitQPLFuncType22)AttachFunction("DPLFontSize");
		FoxitQPLFontType = (FoxitQPLFuncType22)AttachFunction("DPLFontType");
		FoxitQPLFormFieldCount = (FoxitQPLFuncType22)AttachFunction("DPLFormFieldCount");
		FoxitQPLFormFieldHasParent = (FoxitQPLFuncType72)AttachFunction("DPLFormFieldHasParent");
		FoxitQPLFormFieldJavaScriptAction = (FoxitQPLFuncType117)AttachFunction("DPLFormFieldJavaScriptAction");
		FoxitQPLFormFieldWebLinkAction = (FoxitQPLFuncType117)AttachFunction("DPLFormFieldWebLinkAction");
		FoxitQPLGetActionDest = (FoxitQPLFuncType72)AttachFunction("DPLGetActionDest");
		FoxitQPLGetActionType = (FoxitQPLFuncType147)AttachFunction("DPLGetActionType");
		FoxitQPLGetActionURL = (FoxitQPLFuncType147)AttachFunction("DPLGetActionURL");
		FoxitQPLGetAnalysisInfo = (FoxitQPLFuncType148)AttachFunction("DPLGetAnalysisInfo");
		FoxitQPLGetAnnotActionID = (FoxitQPLFuncType72)AttachFunction("DPLGetAnnotActionID");
		FoxitQPLGetAnnotDblProperty = (FoxitQPLFuncType16)AttachFunction("DPLGetAnnotDblProperty");
		FoxitQPLGetAnnotDest = (FoxitQPLFuncType72)AttachFunction("DPLGetAnnotDest");
		FoxitQPLGetAnnotEmbeddedFileName = (FoxitQPLFuncType148)AttachFunction("DPLGetAnnotEmbeddedFileName");
		FoxitQPLGetAnnotEmbeddedFileToFile = (FoxitQPLFuncType109)AttachFunction("DPLGetAnnotEmbeddedFileToFile");
		FoxitQPLGetAnnotEmbeddedFileToString = (FoxitQPLFuncType4)AttachFunction("DPLGetAnnotEmbeddedFileToString");
		FoxitQPLGetAnnotIntProperty = (FoxitQPLFuncType85)AttachFunction("DPLGetAnnotIntProperty");
		FoxitQPLGetAnnotQuadCount = (FoxitQPLFuncType72)AttachFunction("DPLGetAnnotQuadCount");
		FoxitQPLGetAnnotQuadPoints = (FoxitQPLFuncType17)AttachFunction("DPLGetAnnotQuadPoints");
		FoxitQPLGetAnnotSoundToFile = (FoxitQPLFuncType109)AttachFunction("DPLGetAnnotSoundToFile");
		FoxitQPLGetAnnotSoundToString = (FoxitQPLFuncType4)AttachFunction("DPLGetAnnotSoundToString");
		FoxitQPLGetAnnotStrProperty = (FoxitQPLFuncType148)AttachFunction("DPLGetAnnotStrProperty");
		FoxitQPLGetBarcodeWidth = (FoxitQPLFuncType13)AttachFunction("DPLGetBarcodeWidth");
		FoxitQPLGetBaseURL = (FoxitQPLFuncType143)AttachFunction("DPLGetBaseURL");
		FoxitQPLGetCSDictEPSG = (FoxitQPLFuncType72)AttachFunction("DPLGetCSDictEPSG");
		FoxitQPLGetCSDictType = (FoxitQPLFuncType72)AttachFunction("DPLGetCSDictType");
		FoxitQPLGetCSDictWKT = (FoxitQPLFuncType147)AttachFunction("DPLGetCSDictWKT");
		FoxitQPLGetCatalogInformation = (FoxitQPLFuncType152)AttachFunction("DPLGetCatalogInformation");
		FoxitQPLGetContentStreamToString = (FoxitQPLFuncType1)AttachFunction("DPLGetContentStreamToString");
		FoxitQPLGetCustomInformation = (FoxitQPLFuncType152)AttachFunction("DPLGetCustomInformation");
		FoxitQPLGetCustomKeys = (FoxitQPLFuncType147)AttachFunction("DPLGetCustomKeys");
		FoxitQPLGetDestName = (FoxitQPLFuncType147)AttachFunction("DPLGetDestName");
		FoxitQPLGetDestPage = (FoxitQPLFuncType72)AttachFunction("DPLGetDestPage");
		FoxitQPLGetDestType = (FoxitQPLFuncType72)AttachFunction("DPLGetDestType");
		FoxitQPLGetDestValue = (FoxitQPLFuncType16)AttachFunction("DPLGetDestValue");
		FoxitQPLGetDocJavaScript = (FoxitQPLFuncType152)AttachFunction("DPLGetDocJavaScript");
		FoxitQPLGetDocumentFileName = (FoxitQPLFuncType143)AttachFunction("DPLGetDocumentFileName");
		FoxitQPLGetDocumentFileSize = (FoxitQPLFuncType22)AttachFunction("DPLGetDocumentFileSize");
		FoxitQPLGetDocumentID = (FoxitQPLFuncType72)AttachFunction("DPLGetDocumentID");
		FoxitQPLGetDocumentIdentifier = (FoxitQPLFuncType148)AttachFunction("DPLGetDocumentIdentifier");
		FoxitQPLGetDocumentMetadata = (FoxitQPLFuncType143)AttachFunction("DPLGetDocumentMetadata");
		FoxitQPLGetDocumentRepaired = (FoxitQPLFuncType22)AttachFunction("DPLGetDocumentRepaired");
		FoxitQPLGetDocumentResourceList = (FoxitQPLFuncType143)AttachFunction("DPLGetDocumentResourceList");
		FoxitQPLGetEmbeddedFileContentToFile = (FoxitQPLFuncType111)AttachFunction("DPLGetEmbeddedFileContentToFile");
		FoxitQPLGetEmbeddedFileContentToString = (FoxitQPLFuncType3)AttachFunction("DPLGetEmbeddedFileContentToString");
		FoxitQPLGetEmbeddedFileID = (FoxitQPLFuncType72)AttachFunction("DPLGetEmbeddedFileID");
		FoxitQPLGetEmbeddedFileIntProperty = (FoxitQPLFuncType85)AttachFunction("DPLGetEmbeddedFileIntProperty");
		FoxitQPLGetEmbeddedFileStrProperty = (FoxitQPLFuncType148)AttachFunction("DPLGetEmbeddedFileStrProperty");
		FoxitQPLGetEncryptionFingerprint = (FoxitQPLFuncType143)AttachFunction("DPLGetEncryptionFingerprint");
		FoxitQPLGetFileMetadata = (FoxitQPLFuncType154)AttachFunction("DPLGetFileMetadata");
		FoxitQPLGetFirstChildOutline = (FoxitQPLFuncType72)AttachFunction("DPLGetFirstChildOutline");
		FoxitQPLGetFirstOutline = (FoxitQPLFuncType22)AttachFunction("DPLGetFirstOutline");
		FoxitQPLGetFontCharacterCodesToString = (FoxitQPLFuncType7)AttachFunction("DPLGetFontCharacterCodesToString");
		FoxitQPLGetFontEncoding = (FoxitQPLFuncType22)AttachFunction("DPLGetFontEncoding");
		FoxitQPLGetFontFlags = (FoxitQPLFuncType72)AttachFunction("DPLGetFontFlags");
		FoxitQPLGetFontID = (FoxitQPLFuncType72)AttachFunction("DPLGetFontID");
		FoxitQPLGetFontIsEmbedded = (FoxitQPLFuncType22)AttachFunction("DPLGetFontIsEmbedded");
		FoxitQPLGetFontIsSubsetted = (FoxitQPLFuncType22)AttachFunction("DPLGetFontIsSubsetted");
		FoxitQPLGetFontMetrics = (FoxitQPLFuncType72)AttachFunction("DPLGetFontMetrics");
		FoxitQPLGetFontObjectNumber = (FoxitQPLFuncType22)AttachFunction("DPLGetFontObjectNumber");
		FoxitQPLGetFormFieldActionID = (FoxitQPLFuncType111)AttachFunction("DPLGetFormFieldActionID");
		FoxitQPLGetFormFieldAlignment = (FoxitQPLFuncType72)AttachFunction("DPLGetFormFieldAlignment");
		FoxitQPLGetFormFieldAnnotFlags = (FoxitQPLFuncType72)AttachFunction("DPLGetFormFieldAnnotFlags");
		FoxitQPLGetFormFieldBackgroundColor = (FoxitQPLFuncType16)AttachFunction("DPLGetFormFieldBackgroundColor");
		FoxitQPLGetFormFieldBackgroundColorType = (FoxitQPLFuncType72)AttachFunction("DPLGetFormFieldBackgroundColorType");
		FoxitQPLGetFormFieldBorderColor = (FoxitQPLFuncType16)AttachFunction("DPLGetFormFieldBorderColor");
		FoxitQPLGetFormFieldBorderColorType = (FoxitQPLFuncType72)AttachFunction("DPLGetFormFieldBorderColorType");
		FoxitQPLGetFormFieldBorderProperty = (FoxitQPLFuncType16)AttachFunction("DPLGetFormFieldBorderProperty");
		FoxitQPLGetFormFieldBorderStyle = (FoxitQPLFuncType72)AttachFunction("DPLGetFormFieldBorderStyle");
		FoxitQPLGetFormFieldBound = (FoxitQPLFuncType16)AttachFunction("DPLGetFormFieldBound");
		FoxitQPLGetFormFieldCaption = (FoxitQPLFuncType147)AttachFunction("DPLGetFormFieldCaption");
		FoxitQPLGetFormFieldCaptionEx = (FoxitQPLFuncType148)AttachFunction("DPLGetFormFieldCaptionEx");
		FoxitQPLGetFormFieldCheckStyle = (FoxitQPLFuncType72)AttachFunction("DPLGetFormFieldCheckStyle");
		FoxitQPLGetFormFieldChildTitle = (FoxitQPLFuncType147)AttachFunction("DPLGetFormFieldChildTitle");
		FoxitQPLGetFormFieldChoiceType = (FoxitQPLFuncType72)AttachFunction("DPLGetFormFieldChoiceType");
		FoxitQPLGetFormFieldColor = (FoxitQPLFuncType16)AttachFunction("DPLGetFormFieldColor");
		FoxitQPLGetFormFieldComb = (FoxitQPLFuncType72)AttachFunction("DPLGetFormFieldComb");
		FoxitQPLGetFormFieldDefaultValue = (FoxitQPLFuncType147)AttachFunction("DPLGetFormFieldDefaultValue");
		FoxitQPLGetFormFieldDescription = (FoxitQPLFuncType147)AttachFunction("DPLGetFormFieldDescription");
		FoxitQPLGetFormFieldFlags = (FoxitQPLFuncType72)AttachFunction("DPLGetFormFieldFlags");
		FoxitQPLGetFormFieldFontName = (FoxitQPLFuncType147)AttachFunction("DPLGetFormFieldFontName");
		FoxitQPLGetFormFieldJavaScript = (FoxitQPLFuncType151)AttachFunction("DPLGetFormFieldJavaScript");
		FoxitQPLGetFormFieldKidCount = (FoxitQPLFuncType72)AttachFunction("DPLGetFormFieldKidCount");
		FoxitQPLGetFormFieldKidTempIndex = (FoxitQPLFuncType85)AttachFunction("DPLGetFormFieldKidTempIndex");
		FoxitQPLGetFormFieldMaxLen = (FoxitQPLFuncType72)AttachFunction("DPLGetFormFieldMaxLen");
		FoxitQPLGetFormFieldNoExport = (FoxitQPLFuncType72)AttachFunction("DPLGetFormFieldNoExport");
		FoxitQPLGetFormFieldPage = (FoxitQPLFuncType72)AttachFunction("DPLGetFormFieldPage");
		FoxitQPLGetFormFieldPrintable = (FoxitQPLFuncType72)AttachFunction("DPLGetFormFieldPrintable");
		FoxitQPLGetFormFieldReadOnly = (FoxitQPLFuncType72)AttachFunction("DPLGetFormFieldReadOnly");
		FoxitQPLGetFormFieldRequired = (FoxitQPLFuncType72)AttachFunction("DPLGetFormFieldRequired");
		FoxitQPLGetFormFieldRichTextString = (FoxitQPLFuncType151)AttachFunction("DPLGetFormFieldRichTextString");
		FoxitQPLGetFormFieldRotation = (FoxitQPLFuncType72)AttachFunction("DPLGetFormFieldRotation");
		FoxitQPLGetFormFieldSubCount = (FoxitQPLFuncType72)AttachFunction("DPLGetFormFieldSubCount");
		FoxitQPLGetFormFieldSubDisplayName = (FoxitQPLFuncType148)AttachFunction("DPLGetFormFieldSubDisplayName");
		FoxitQPLGetFormFieldSubName = (FoxitQPLFuncType148)AttachFunction("DPLGetFormFieldSubName");
		FoxitQPLGetFormFieldSubmitActionString = (FoxitQPLFuncType151)AttachFunction("DPLGetFormFieldSubmitActionString");
		FoxitQPLGetFormFieldTabOrder = (FoxitQPLFuncType72)AttachFunction("DPLGetFormFieldTabOrder");
		FoxitQPLGetFormFieldTabOrderEx = (FoxitQPLFuncType85)AttachFunction("DPLGetFormFieldTabOrderEx");
		FoxitQPLGetFormFieldTextFlags = (FoxitQPLFuncType85)AttachFunction("DPLGetFormFieldTextFlags");
		FoxitQPLGetFormFieldTextSize = (FoxitQPLFuncType14)AttachFunction("DPLGetFormFieldTextSize");
		FoxitQPLGetFormFieldTitle = (FoxitQPLFuncType147)AttachFunction("DPLGetFormFieldTitle");
		FoxitQPLGetFormFieldType = (FoxitQPLFuncType72)AttachFunction("DPLGetFormFieldType");
		FoxitQPLGetFormFieldValue = (FoxitQPLFuncType147)AttachFunction("DPLGetFormFieldValue");
		FoxitQPLGetFormFieldValueByTitle = (FoxitQPLFuncType152)AttachFunction("DPLGetFormFieldValueByTitle");
		FoxitQPLGetFormFieldVisible = (FoxitQPLFuncType72)AttachFunction("DPLGetFormFieldVisible");
		FoxitQPLGetFormFieldWebLink = (FoxitQPLFuncType151)AttachFunction("DPLGetFormFieldWebLink");
		FoxitQPLGetFormFontCount = (FoxitQPLFuncType22)AttachFunction("DPLGetFormFontCount");
		FoxitQPLGetFormFontName = (FoxitQPLFuncType147)AttachFunction("DPLGetFormFontName");
		FoxitQPLGetGlobalJavaScript = (FoxitQPLFuncType152)AttachFunction("DPLGetGlobalJavaScript");
		FoxitQPLGetGlobalMeasurementUnits = (FoxitQPLFuncType22)AttachFunction("DPLGetGlobalMeasurementUnits");
		FoxitQPLGetGlobalOrigin = (FoxitQPLFuncType22)AttachFunction("DPLGetGlobalOrigin");
		FoxitQPLGetGlobalScale = (FoxitQPLFuncType11)AttachFunction("DPLGetGlobalScale");
		FoxitQPLGetHTMLTextHeight = (FoxitQPLFuncType12)AttachFunction("DPLGetHTMLTextHeight");
		FoxitQPLGetHTMLTextLineCount = (FoxitQPLFuncType69)AttachFunction("DPLGetHTMLTextLineCount");
		FoxitQPLGetHTMLTextWidth = (FoxitQPLFuncType12)AttachFunction("DPLGetHTMLTextWidth");
		FoxitQPLGetImageID = (FoxitQPLFuncType72)AttachFunction("DPLGetImageID");
		FoxitQPLGetImageListCount = (FoxitQPLFuncType72)AttachFunction("DPLGetImageListCount");
		FoxitQPLGetImageListItemDataToString = (FoxitQPLFuncType5)AttachFunction("DPLGetImageListItemDataToString");
		FoxitQPLGetImageListItemDblProperty = (FoxitQPLFuncType17)AttachFunction("DPLGetImageListItemDblProperty");
		FoxitQPLGetImageListItemFormatDesc = (FoxitQPLFuncType149)AttachFunction("DPLGetImageListItemFormatDesc");
		FoxitQPLGetImageListItemIntProperty = (FoxitQPLFuncType92)AttachFunction("DPLGetImageListItemIntProperty");
		FoxitQPLGetImageMeasureDict = (FoxitQPLFuncType22)AttachFunction("DPLGetImageMeasureDict");
		FoxitQPLGetImagePageCount = (FoxitQPLFuncType121)AttachFunction("DPLGetImagePageCount");
		FoxitQPLGetImagePageCountFromString = (FoxitQPLFuncType23)AttachFunction("DPLGetImagePageCountFromString");
		FoxitQPLGetImagePtDataDict = (FoxitQPLFuncType22)AttachFunction("DPLGetImagePtDataDict");
		FoxitQPLGetInformation = (FoxitQPLFuncType147)AttachFunction("DPLGetInformation");
		FoxitQPLGetInstalledFontsByCharset = (FoxitQPLFuncType148)AttachFunction("DPLGetInstalledFontsByCharset");
		FoxitQPLGetInstalledFontsByCodePage = (FoxitQPLFuncType148)AttachFunction("DPLGetInstalledFontsByCodePage");
		FoxitQPLGetKerning = (FoxitQPLFuncType121)AttachFunction("DPLGetKerning");
		FoxitQPLGetMaxObjectNumber = (FoxitQPLFuncType22)AttachFunction("DPLGetMaxObjectNumber");
		FoxitQPLGetMeasureDictBoundsCount = (FoxitQPLFuncType72)AttachFunction("DPLGetMeasureDictBoundsCount");
		FoxitQPLGetMeasureDictBoundsItem = (FoxitQPLFuncType16)AttachFunction("DPLGetMeasureDictBoundsItem");
		FoxitQPLGetMeasureDictCoordinateSystem = (FoxitQPLFuncType72)AttachFunction("DPLGetMeasureDictCoordinateSystem");
		FoxitQPLGetMeasureDictDCSDict = (FoxitQPLFuncType72)AttachFunction("DPLGetMeasureDictDCSDict");
		FoxitQPLGetMeasureDictGCSDict = (FoxitQPLFuncType72)AttachFunction("DPLGetMeasureDictGCSDict");
		FoxitQPLGetMeasureDictGPTSCount = (FoxitQPLFuncType72)AttachFunction("DPLGetMeasureDictGPTSCount");
		FoxitQPLGetMeasureDictGPTSItem = (FoxitQPLFuncType16)AttachFunction("DPLGetMeasureDictGPTSItem");
		FoxitQPLGetMeasureDictLPTSCount = (FoxitQPLFuncType72)AttachFunction("DPLGetMeasureDictLPTSCount");
		FoxitQPLGetMeasureDictLPTSItem = (FoxitQPLFuncType16)AttachFunction("DPLGetMeasureDictLPTSItem");
		FoxitQPLGetMeasureDictPDU = (FoxitQPLFuncType85)AttachFunction("DPLGetMeasureDictPDU");
		FoxitQPLGetMeasurementUnits = (FoxitQPLFuncType22)AttachFunction("DPLGetMeasurementUnits");
		FoxitQPLGetNamedDestination = (FoxitQPLFuncType121)AttachFunction("DPLGetNamedDestination");
		FoxitQPLGetNeedAppearances = (FoxitQPLFuncType22)AttachFunction("DPLGetNeedAppearances");
		FoxitQPLGetNextOutline = (FoxitQPLFuncType72)AttachFunction("DPLGetNextOutline");
		FoxitQPLGetObjectCount = (FoxitQPLFuncType22)AttachFunction("DPLGetObjectCount");
		FoxitQPLGetObjectDecodeError = (FoxitQPLFuncType72)AttachFunction("DPLGetObjectDecodeError");
		FoxitQPLGetObjectToString = (FoxitQPLFuncType3)AttachFunction("DPLGetObjectToString");
		FoxitQPLGetOpenActionDestination = (FoxitQPLFuncType22)AttachFunction("DPLGetOpenActionDestination");
		FoxitQPLGetOpenActionJavaScript = (FoxitQPLFuncType143)AttachFunction("DPLGetOpenActionJavaScript");
		FoxitQPLGetOptionalContentConfigCount = (FoxitQPLFuncType22)AttachFunction("DPLGetOptionalContentConfigCount");
		FoxitQPLGetOptionalContentConfigLocked = (FoxitQPLFuncType85)AttachFunction("DPLGetOptionalContentConfigLocked");
		FoxitQPLGetOptionalContentConfigOrderCount = (FoxitQPLFuncType72)AttachFunction("DPLGetOptionalContentConfigOrderCount");
		FoxitQPLGetOptionalContentConfigOrderItemID = (FoxitQPLFuncType85)AttachFunction("DPLGetOptionalContentConfigOrderItemID");
		FoxitQPLGetOptionalContentConfigOrderItemLabel = (FoxitQPLFuncType148)AttachFunction("DPLGetOptionalContentConfigOrderItemLabel");
		FoxitQPLGetOptionalContentConfigOrderItemLevel = (FoxitQPLFuncType85)AttachFunction("DPLGetOptionalContentConfigOrderItemLevel");
		FoxitQPLGetOptionalContentConfigOrderItemType = (FoxitQPLFuncType85)AttachFunction("DPLGetOptionalContentConfigOrderItemType");
		FoxitQPLGetOptionalContentConfigState = (FoxitQPLFuncType85)AttachFunction("DPLGetOptionalContentConfigState");
		FoxitQPLGetOptionalContentGroupID = (FoxitQPLFuncType72)AttachFunction("DPLGetOptionalContentGroupID");
		FoxitQPLGetOptionalContentGroupName = (FoxitQPLFuncType147)AttachFunction("DPLGetOptionalContentGroupName");
		FoxitQPLGetOptionalContentGroupPrintable = (FoxitQPLFuncType72)AttachFunction("DPLGetOptionalContentGroupPrintable");
		FoxitQPLGetOptionalContentGroupVisible = (FoxitQPLFuncType72)AttachFunction("DPLGetOptionalContentGroupVisible");
		FoxitQPLGetOrigin = (FoxitQPLFuncType22)AttachFunction("DPLGetOrigin");
		FoxitQPLGetOutlineActionID = (FoxitQPLFuncType72)AttachFunction("DPLGetOutlineActionID");
		FoxitQPLGetOutlineColor = (FoxitQPLFuncType16)AttachFunction("DPLGetOutlineColor");
		FoxitQPLGetOutlineDest = (FoxitQPLFuncType72)AttachFunction("DPLGetOutlineDest");
		FoxitQPLGetOutlineID = (FoxitQPLFuncType72)AttachFunction("DPLGetOutlineID");
		FoxitQPLGetOutlineJavaScript = (FoxitQPLFuncType147)AttachFunction("DPLGetOutlineJavaScript");
		FoxitQPLGetOutlineObjectNumber = (FoxitQPLFuncType72)AttachFunction("DPLGetOutlineObjectNumber");
		FoxitQPLGetOutlineOpenFile = (FoxitQPLFuncType147)AttachFunction("DPLGetOutlineOpenFile");
		FoxitQPLGetOutlinePage = (FoxitQPLFuncType72)AttachFunction("DPLGetOutlinePage");
		FoxitQPLGetOutlineStyle = (FoxitQPLFuncType72)AttachFunction("DPLGetOutlineStyle");
		FoxitQPLGetOutlineWebLink = (FoxitQPLFuncType147)AttachFunction("DPLGetOutlineWebLink");
		FoxitQPLGetPDF417SymbolHeight = (FoxitQPLFuncType20)AttachFunction("DPLGetPDF417SymbolHeight");
		FoxitQPLGetPDF417SymbolWidth = (FoxitQPLFuncType20)AttachFunction("DPLGetPDF417SymbolWidth");
		FoxitQPLGetPageBox = (FoxitQPLFuncType16)AttachFunction("DPLGetPageBox");
		FoxitQPLGetPageColorSpaces = (FoxitQPLFuncType147)AttachFunction("DPLGetPageColorSpaces");
		FoxitQPLGetPageContentToString = (FoxitQPLFuncType1)AttachFunction("DPLGetPageContentToString");
		FoxitQPLGetPageImageList = (FoxitQPLFuncType72)AttachFunction("DPLGetPageImageList");
		FoxitQPLGetPageJavaScript = (FoxitQPLFuncType152)AttachFunction("DPLGetPageJavaScript");
		FoxitQPLGetPageLGIDictContent = (FoxitQPLFuncType147)AttachFunction("DPLGetPageLGIDictContent");
		FoxitQPLGetPageLGIDictCount = (FoxitQPLFuncType22)AttachFunction("DPLGetPageLGIDictCount");
		FoxitQPLGetPageLabel = (FoxitQPLFuncType147)AttachFunction("DPLGetPageLabel");
		FoxitQPLGetPageLayout = (FoxitQPLFuncType22)AttachFunction("DPLGetPageLayout");
		FoxitQPLGetPageMetricsToString = (FoxitQPLFuncType5)AttachFunction("DPLGetPageMetricsToString");
		FoxitQPLGetPageMode = (FoxitQPLFuncType22)AttachFunction("DPLGetPageMode");
		FoxitQPLGetPageText = (FoxitQPLFuncType147)AttachFunction("DPLGetPageText");
		FoxitQPLGetPageUserUnit = (FoxitQPLFuncType11)AttachFunction("DPLGetPageUserUnit");
		FoxitQPLGetPageViewPortCount = (FoxitQPLFuncType22)AttachFunction("DPLGetPageViewPortCount");
		FoxitQPLGetPageViewPortID = (FoxitQPLFuncType72)AttachFunction("DPLGetPageViewPortID");
		FoxitQPLGetParentOutline = (FoxitQPLFuncType72)AttachFunction("DPLGetParentOutline");
		FoxitQPLGetPrevOutline = (FoxitQPLFuncType72)AttachFunction("DPLGetPrevOutline");
		FoxitQPLGetPrintPreviewBitmapToString = (FoxitQPLFuncType9)AttachFunction("DPLGetPrintPreviewBitmapToString");
		FoxitQPLGetRenderScale = (FoxitQPLFuncType11)AttachFunction("DPLGetRenderScale");
		FoxitQPLGetScale = (FoxitQPLFuncType11)AttachFunction("DPLGetScale");
		FoxitQPLGetSignProcessByteRange = (FoxitQPLFuncType85)AttachFunction("DPLGetSignProcessByteRange");
		FoxitQPLGetSignProcessResult = (FoxitQPLFuncType72)AttachFunction("DPLGetSignProcessResult");
		FoxitQPLGetStringListCount = (FoxitQPLFuncType72)AttachFunction("DPLGetStringListCount");
		FoxitQPLGetStringListItem = (FoxitQPLFuncType148)AttachFunction("DPLGetStringListItem");
		FoxitQPLGetTabOrderMode = (FoxitQPLFuncType143)AttachFunction("DPLGetTabOrderMode");
		FoxitQPLGetTableCellDblProperty = (FoxitQPLFuncType18)AttachFunction("DPLGetTableCellDblProperty");
		FoxitQPLGetTableCellIntProperty = (FoxitQPLFuncType97)AttachFunction("DPLGetTableCellIntProperty");
		FoxitQPLGetTableCellStrProperty = (FoxitQPLFuncType150)AttachFunction("DPLGetTableCellStrProperty");
		FoxitQPLGetTableColumnCount = (FoxitQPLFuncType72)AttachFunction("DPLGetTableColumnCount");
		FoxitQPLGetTableLastDrawnRow = (FoxitQPLFuncType72)AttachFunction("DPLGetTableLastDrawnRow");
		FoxitQPLGetTableRowCount = (FoxitQPLFuncType72)AttachFunction("DPLGetTableRowCount");
		FoxitQPLGetTempPath = (FoxitQPLFuncType143)AttachFunction("DPLGetTempPath");
		FoxitQPLGetTextAscent = (FoxitQPLFuncType11)AttachFunction("DPLGetTextAscent");
		FoxitQPLGetTextBlockAsString = (FoxitQPLFuncType148)AttachFunction("DPLGetTextBlockAsString");
		FoxitQPLGetTextBlockBound = (FoxitQPLFuncType17)AttachFunction("DPLGetTextBlockBound");
		FoxitQPLGetTextBlockCharWidth = (FoxitQPLFuncType17)AttachFunction("DPLGetTextBlockCharWidth");
		FoxitQPLGetTextBlockColor = (FoxitQPLFuncType17)AttachFunction("DPLGetTextBlockColor");
		FoxitQPLGetTextBlockColorType = (FoxitQPLFuncType85)AttachFunction("DPLGetTextBlockColorType");
		FoxitQPLGetTextBlockCount = (FoxitQPLFuncType72)AttachFunction("DPLGetTextBlockCount");
		FoxitQPLGetTextBlockFontName = (FoxitQPLFuncType148)AttachFunction("DPLGetTextBlockFontName");
		FoxitQPLGetTextBlockFontSize = (FoxitQPLFuncType16)AttachFunction("DPLGetTextBlockFontSize");
		FoxitQPLGetTextBlockText = (FoxitQPLFuncType148)AttachFunction("DPLGetTextBlockText");
		FoxitQPLGetTextBound = (FoxitQPLFuncType14)AttachFunction("DPLGetTextBound");
		FoxitQPLGetTextDescent = (FoxitQPLFuncType11)AttachFunction("DPLGetTextDescent");
		FoxitQPLGetTextHeight = (FoxitQPLFuncType11)AttachFunction("DPLGetTextHeight");
		FoxitQPLGetTextSize = (FoxitQPLFuncType11)AttachFunction("DPLGetTextSize");
		FoxitQPLGetTextWidth = (FoxitQPLFuncType19)AttachFunction("DPLGetTextWidth");
		FoxitQPLGetUnicodeCharactersFromEncoding = (FoxitQPLFuncType147)AttachFunction("DPLGetUnicodeCharactersFromEncoding");
		FoxitQPLGetViewPortBBox = (FoxitQPLFuncType16)AttachFunction("DPLGetViewPortBBox");
		FoxitQPLGetViewPortMeasureDict = (FoxitQPLFuncType72)AttachFunction("DPLGetViewPortMeasureDict");
		FoxitQPLGetViewPortName = (FoxitQPLFuncType147)AttachFunction("DPLGetViewPortName");
		FoxitQPLGetViewPortPtDataDict = (FoxitQPLFuncType72)AttachFunction("DPLGetViewPortPtDataDict");
		FoxitQPLGetViewerPreferences = (FoxitQPLFuncType72)AttachFunction("DPLGetViewerPreferences");
		FoxitQPLGetWrappedText = (FoxitQPLFuncType146)AttachFunction("DPLGetWrappedText");
		FoxitQPLGetWrappedTextBreakString = (FoxitQPLFuncType146)AttachFunction("DPLGetWrappedTextBreakString");
		FoxitQPLGetWrappedTextHeight = (FoxitQPLFuncType12)AttachFunction("DPLGetWrappedTextHeight");
		FoxitQPLGetWrappedTextLineCount = (FoxitQPLFuncType69)AttachFunction("DPLGetWrappedTextLineCount");
		FoxitQPLGetXFAFormFieldCount = (FoxitQPLFuncType22)AttachFunction("DPLGetXFAFormFieldCount");
		FoxitQPLGetXFAFormFieldName = (FoxitQPLFuncType147)AttachFunction("DPLGetXFAFormFieldName");
		FoxitQPLGetXFAFormFieldNames = (FoxitQPLFuncType152)AttachFunction("DPLGetXFAFormFieldNames");
		FoxitQPLGetXFAFormFieldValue = (FoxitQPLFuncType152)AttachFunction("DPLGetXFAFormFieldValue");
		FoxitQPLGetXFAToString = (FoxitQPLFuncType3)AttachFunction("DPLGetXFAToString");
		FoxitQPLGlobalJavaScriptCount = (FoxitQPLFuncType22)AttachFunction("DPLGlobalJavaScriptCount");
		FoxitQPLGlobalJavaScriptPackageName = (FoxitQPLFuncType147)AttachFunction("DPLGlobalJavaScriptPackageName");
		FoxitQPLHasFontResources = (FoxitQPLFuncType22)AttachFunction("DPLHasFontResources");
		FoxitQPLHasPageBox = (FoxitQPLFuncType72)AttachFunction("DPLHasPageBox");
		FoxitQPLHidePage = (FoxitQPLFuncType22)AttachFunction("DPLHidePage");
		FoxitQPLImageCount = (FoxitQPLFuncType22)AttachFunction("DPLImageCount");
		FoxitQPLImageFillColor = (FoxitQPLFuncType22)AttachFunction("DPLImageFillColor");
		FoxitQPLImageHeight = (FoxitQPLFuncType22)AttachFunction("DPLImageHeight");
		FoxitQPLImageHorizontalResolution = (FoxitQPLFuncType22)AttachFunction("DPLImageHorizontalResolution");
		FoxitQPLImageResolutionUnits = (FoxitQPLFuncType22)AttachFunction("DPLImageResolutionUnits");
		FoxitQPLImageType = (FoxitQPLFuncType22)AttachFunction("DPLImageType");
		FoxitQPLImageVerticalResolution = (FoxitQPLFuncType22)AttachFunction("DPLImageVerticalResolution");
		FoxitQPLImageWidth = (FoxitQPLFuncType22)AttachFunction("DPLImageWidth");
		FoxitQPLImportEMFFromFile = (FoxitQPLFuncType130)AttachFunction("DPLImportEMFFromFile");
		FoxitQPLInsertPages = (FoxitQPLFuncType85)AttachFunction("DPLInsertPages");
		FoxitQPLInsertTableColumns = (FoxitQPLFuncType92)AttachFunction("DPLInsertTableColumns");
		FoxitQPLInsertTableRows = (FoxitQPLFuncType92)AttachFunction("DPLInsertTableRows");
		FoxitQPLIsAnnotFormField = (FoxitQPLFuncType72)AttachFunction("DPLIsAnnotFormField");
		FoxitQPLIsLinearized = (FoxitQPLFuncType22)AttachFunction("DPLIsLinearized");
		FoxitQPLIsTaggedPDF = (FoxitQPLFuncType22)AttachFunction("DPLIsTaggedPDF");
		FoxitQPLLastErrorCode = (FoxitQPLFuncType22)AttachFunction("DPLLastErrorCode");
		FoxitQPLLastRenderError = (FoxitQPLFuncType143)AttachFunction("DPLLastRenderError");
		FoxitQPLLibraryVersion = (FoxitQPLFuncType143)AttachFunction("DPLLibraryVersion");
		FoxitQPLLibraryVersionEx = (FoxitQPLFuncType143)AttachFunction("DPLLibraryVersionEx");
		FoxitQPLLicenseInfo = (FoxitQPLFuncType143)AttachFunction("DPLLicenseInfo");
		FoxitQPLLinearizeFile = (FoxitQPLFuncType137)AttachFunction("DPLLinearizeFile");
		FoxitQPLLoadFromFile = (FoxitQPLFuncType133)AttachFunction("DPLLoadFromFile");
		FoxitQPLLoadFromString = (FoxitQPLFuncType26)AttachFunction("DPLLoadFromString");
		FoxitQPLLoadState = (FoxitQPLFuncType22)AttachFunction("DPLLoadState");
		FoxitQPLMergeDocument = (FoxitQPLFuncType72)AttachFunction("DPLMergeDocument");
		FoxitQPLMergeFileList = (FoxitQPLFuncType133)AttachFunction("DPLMergeFileList");
		FoxitQPLMergeFileListFast = (FoxitQPLFuncType133)AttachFunction("DPLMergeFileListFast");
		FoxitQPLMergeFiles = (FoxitQPLFuncType136)AttachFunction("DPLMergeFiles");
		FoxitQPLMergeTableCells = (FoxitQPLFuncType99)AttachFunction("DPLMergeTableCells");
		FoxitQPLMoveContentStream = (FoxitQPLFuncType85)AttachFunction("DPLMoveContentStream");
		FoxitQPLMoveOutlineAfter = (FoxitQPLFuncType85)AttachFunction("DPLMoveOutlineAfter");
		FoxitQPLMoveOutlineBefore = (FoxitQPLFuncType85)AttachFunction("DPLMoveOutlineBefore");
		FoxitQPLMovePage = (FoxitQPLFuncType72)AttachFunction("DPLMovePage");
		FoxitQPLMovePath = (FoxitQPLFuncType29)AttachFunction("DPLMovePath");
		FoxitQPLMultiplyScale = (FoxitQPLFuncType28)AttachFunction("DPLMultiplyScale");
		FoxitQPLNewCMYKAxialShader = (FoxitQPLFuncType125)AttachFunction("DPLNewCMYKAxialShader");
		FoxitQPLNewChildFormField = (FoxitQPLFuncType114)AttachFunction("DPLNewChildFormField");
		FoxitQPLNewContentStream = (FoxitQPLFuncType22)AttachFunction("DPLNewContentStream");
		FoxitQPLNewDestination = (FoxitQPLFuncType94)AttachFunction("DPLNewDestination");
		FoxitQPLNewDocument = (FoxitQPLFuncType22)AttachFunction("DPLNewDocument");
		FoxitQPLNewFormField = (FoxitQPLFuncType129)AttachFunction("DPLNewFormField");
		FoxitQPLNewNamedDestination = (FoxitQPLFuncType129)AttachFunction("DPLNewNamedDestination");
		FoxitQPLNewOptionalContentGroup = (FoxitQPLFuncType121)AttachFunction("DPLNewOptionalContentGroup");
		FoxitQPLNewOutline = (FoxitQPLFuncType115)AttachFunction("DPLNewOutline");
		FoxitQPLNewPage = (FoxitQPLFuncType22)AttachFunction("DPLNewPage");
		FoxitQPLNewPages = (FoxitQPLFuncType72)AttachFunction("DPLNewPages");
		FoxitQPLNewPostScriptXObject = (FoxitQPLFuncType121)AttachFunction("DPLNewPostScriptXObject");
		FoxitQPLNewRGBAxialShader = (FoxitQPLFuncType126)AttachFunction("DPLNewRGBAxialShader");
		FoxitQPLNewSignProcessFromFile = (FoxitQPLFuncType133)AttachFunction("DPLNewSignProcessFromFile");
		FoxitQPLNewSignProcessFromString = (FoxitQPLFuncType26)AttachFunction("DPLNewSignProcessFromString");
		FoxitQPLNewStaticOutline = (FoxitQPLFuncType111)AttachFunction("DPLNewStaticOutline");
		FoxitQPLNewTilingPatternFromCapturedPage = (FoxitQPLFuncType129)AttachFunction("DPLNewTilingPatternFromCapturedPage");
		FoxitQPLNoEmbedFontListAdd = (FoxitQPLFuncType121)AttachFunction("DPLNoEmbedFontListAdd");
		FoxitQPLNoEmbedFontListCount = (FoxitQPLFuncType22)AttachFunction("DPLNoEmbedFontListCount");
		FoxitQPLNoEmbedFontListGet = (FoxitQPLFuncType147)AttachFunction("DPLNoEmbedFontListGet");
		FoxitQPLNoEmbedFontListRemoveAll = (FoxitQPLFuncType22)AttachFunction("DPLNoEmbedFontListRemoveAll");
		FoxitQPLNoEmbedFontListRemoveIndex = (FoxitQPLFuncType72)AttachFunction("DPLNoEmbedFontListRemoveIndex");
		FoxitQPLNoEmbedFontListRemoveName = (FoxitQPLFuncType121)AttachFunction("DPLNoEmbedFontListRemoveName");
		FoxitQPLNormalizePage = (FoxitQPLFuncType72)AttachFunction("DPLNormalizePage");
		FoxitQPLOpenOutline = (FoxitQPLFuncType72)AttachFunction("DPLOpenOutline");
		FoxitQPLOptionalContentGroupCount = (FoxitQPLFuncType22)AttachFunction("DPLOptionalContentGroupCount");
		FoxitQPLOutlineCount = (FoxitQPLFuncType22)AttachFunction("DPLOutlineCount");
		FoxitQPLOutlineTitle = (FoxitQPLFuncType147)AttachFunction("DPLOutlineTitle");
		FoxitQPLPageCount = (FoxitQPLFuncType22)AttachFunction("DPLPageCount");
		FoxitQPLPageHasFontResources = (FoxitQPLFuncType72)AttachFunction("DPLPageHasFontResources");
		FoxitQPLPageHeight = (FoxitQPLFuncType11)AttachFunction("DPLPageHeight");
		FoxitQPLPageJavaScriptAction = (FoxitQPLFuncType133)AttachFunction("DPLPageJavaScriptAction");
		FoxitQPLPageRotation = (FoxitQPLFuncType22)AttachFunction("DPLPageRotation");
		FoxitQPLPageWidth = (FoxitQPLFuncType11)AttachFunction("DPLPageWidth");
		FoxitQPLReduceSize = (FoxitQPLFuncType72)AttachFunction("DPLReduceSize");
		FoxitQPLReleaseBuffer = (FoxitQPLFuncType23)AttachFunction("DPLReleaseBuffer");
		FoxitQPLReleaseImage = (FoxitQPLFuncType72)AttachFunction("DPLReleaseImage");
		FoxitQPLReleaseImageList = (FoxitQPLFuncType72)AttachFunction("DPLReleaseImageList");
		FoxitQPLReleaseLibrary = (FoxitQPLFuncType22)AttachFunction("DPLReleaseLibrary");
		FoxitQPLReleaseSignProcess = (FoxitQPLFuncType72)AttachFunction("DPLReleaseSignProcess");
		FoxitQPLReleaseStringList = (FoxitQPLFuncType72)AttachFunction("DPLReleaseStringList");
		FoxitQPLReleaseTextBlocks = (FoxitQPLFuncType72)AttachFunction("DPLReleaseTextBlocks");
		FoxitQPLRemoveAppearanceStream = (FoxitQPLFuncType72)AttachFunction("DPLRemoveAppearanceStream");
		FoxitQPLRemoveCustomInformation = (FoxitQPLFuncType121)AttachFunction("DPLRemoveCustomInformation");
		FoxitQPLRemoveDocument = (FoxitQPLFuncType72)AttachFunction("DPLRemoveDocument");
		FoxitQPLRemoveEmbeddedFile = (FoxitQPLFuncType72)AttachFunction("DPLRemoveEmbeddedFile");
		FoxitQPLRemoveFormFieldBackgroundColor = (FoxitQPLFuncType72)AttachFunction("DPLRemoveFormFieldBackgroundColor");
		FoxitQPLRemoveFormFieldBorderColor = (FoxitQPLFuncType72)AttachFunction("DPLRemoveFormFieldBorderColor");
		FoxitQPLRemoveFormFieldChoiceSub = (FoxitQPLFuncType111)AttachFunction("DPLRemoveFormFieldChoiceSub");
		FoxitQPLRemoveGlobalJavaScript = (FoxitQPLFuncType121)AttachFunction("DPLRemoveGlobalJavaScript");
		FoxitQPLRemoveOpenAction = (FoxitQPLFuncType22)AttachFunction("DPLRemoveOpenAction");
		FoxitQPLRemoveOutline = (FoxitQPLFuncType72)AttachFunction("DPLRemoveOutline");
		FoxitQPLRemovePageBox = (FoxitQPLFuncType72)AttachFunction("DPLRemovePageBox");
		FoxitQPLRemoveSharedContentStreams = (FoxitQPLFuncType22)AttachFunction("DPLRemoveSharedContentStreams");
		FoxitQPLRemoveStyle = (FoxitQPLFuncType121)AttachFunction("DPLRemoveStyle");
		FoxitQPLRemoveUsageRights = (FoxitQPLFuncType22)AttachFunction("DPLRemoveUsageRights");
		FoxitQPLRemoveXFAEntries = (FoxitQPLFuncType72)AttachFunction("DPLRemoveXFAEntries");
		FoxitQPLRenderAsMultipageTIFFToFile = (FoxitQPLFuncType71)AttachFunction("DPLRenderAsMultipageTIFFToFile");
		FoxitQPLRenderDocumentToFile = (FoxitQPLFuncType67)AttachFunction("DPLRenderDocumentToFile");
		FoxitQPLRenderPageToFile = (FoxitQPLFuncType68)AttachFunction("DPLRenderPageToFile");
		FoxitQPLRenderPageToString = (FoxitQPLFuncType2)AttachFunction("DPLRenderPageToString");
		FoxitQPLReplaceFonts = (FoxitQPLFuncType72)AttachFunction("DPLReplaceFonts");
		FoxitQPLReplaceImage = (FoxitQPLFuncType85)AttachFunction("DPLReplaceImage");
		FoxitQPLReplaceTag = (FoxitQPLFuncType133)AttachFunction("DPLReplaceTag");
		FoxitQPLRetrieveCustomDataToFile = (FoxitQPLFuncType134)AttachFunction("DPLRetrieveCustomDataToFile");
		FoxitQPLRetrieveCustomDataToString = (FoxitQPLFuncType8)AttachFunction("DPLRetrieveCustomDataToString");
		FoxitQPLReverseImage = (FoxitQPLFuncType72)AttachFunction("DPLReverseImage");
		FoxitQPLRotatePage = (FoxitQPLFuncType72)AttachFunction("DPLRotatePage");
		FoxitQPLSaveFontToFile = (FoxitQPLFuncType121)AttachFunction("DPLSaveFontToFile");
		FoxitQPLSaveImageListItemDataToFile = (FoxitQPLFuncType108)AttachFunction("DPLSaveImageListItemDataToFile");
		FoxitQPLSaveImageToFile = (FoxitQPLFuncType121)AttachFunction("DPLSaveImageToFile");
		FoxitQPLSaveImageToString = (FoxitQPLFuncType1)AttachFunction("DPLSaveImageToString");
		FoxitQPLSaveState = (FoxitQPLFuncType22)AttachFunction("DPLSaveState");
		FoxitQPLSaveStyle = (FoxitQPLFuncType121)AttachFunction("DPLSaveStyle");
		FoxitQPLSaveToFile = (FoxitQPLFuncType121)AttachFunction("DPLSaveToFile");
		FoxitQPLSaveToString = (FoxitQPLFuncType1)AttachFunction("DPLSaveToString");
		FoxitQPLSecurityInfo = (FoxitQPLFuncType72)AttachFunction("DPLSecurityInfo");
		FoxitQPLSelectContentStream = (FoxitQPLFuncType72)AttachFunction("DPLSelectContentStream");
		FoxitQPLSelectDocument = (FoxitQPLFuncType72)AttachFunction("DPLSelectDocument");
		FoxitQPLSelectFont = (FoxitQPLFuncType72)AttachFunction("DPLSelectFont");
		FoxitQPLSelectImage = (FoxitQPLFuncType72)AttachFunction("DPLSelectImage");
		FoxitQPLSelectPage = (FoxitQPLFuncType72)AttachFunction("DPLSelectPage");
		FoxitQPLSelectedDocument = (FoxitQPLFuncType22)AttachFunction("DPLSelectedDocument");
		FoxitQPLSelectedFont = (FoxitQPLFuncType22)AttachFunction("DPLSelectedFont");
		FoxitQPLSelectedImage = (FoxitQPLFuncType22)AttachFunction("DPLSelectedImage");
		FoxitQPLSelectedPage = (FoxitQPLFuncType22)AttachFunction("DPLSelectedPage");
		FoxitQPLSetActionURL = (FoxitQPLFuncType111)AttachFunction("DPLSetActionURL");
		FoxitQPLSetAnnotBorderColor = (FoxitQPLFuncType79)AttachFunction("DPLSetAnnotBorderColor");
		FoxitQPLSetAnnotBorderStyle = (FoxitQPLFuncType84)AttachFunction("DPLSetAnnotBorderStyle");
		FoxitQPLSetAnnotContents = (FoxitQPLFuncType111)AttachFunction("DPLSetAnnotContents");
		FoxitQPLSetAnnotDblProperty = (FoxitQPLFuncType86)AttachFunction("DPLSetAnnotDblProperty");
		FoxitQPLSetAnnotDest = (FoxitQPLFuncType85)AttachFunction("DPLSetAnnotDest");
		FoxitQPLSetAnnotIntProperty = (FoxitQPLFuncType92)AttachFunction("DPLSetAnnotIntProperty");
		FoxitQPLSetAnnotOptional = (FoxitQPLFuncType85)AttachFunction("DPLSetAnnotOptional");
		FoxitQPLSetAnnotQuadPoints = (FoxitQPLFuncType90)AttachFunction("DPLSetAnnotQuadPoints");
		FoxitQPLSetAnnotRect = (FoxitQPLFuncType80)AttachFunction("DPLSetAnnotRect");
		FoxitQPLSetAnnotStrProperty = (FoxitQPLFuncType109)AttachFunction("DPLSetAnnotStrProperty");
		FoxitQPLSetAnsiMode = (FoxitQPLFuncType72)AttachFunction("DPLSetAnsiMode");
		FoxitQPLSetAppendInputFromString = (FoxitQPLFuncType23)AttachFunction("DPLSetAppendInputFromString");
		FoxitQPLSetBaseURL = (FoxitQPLFuncType121)AttachFunction("DPLSetBaseURL");
		FoxitQPLSetBlendMode = (FoxitQPLFuncType72)AttachFunction("DPLSetBlendMode");
		FoxitQPLSetBreakString = (FoxitQPLFuncType121)AttachFunction("DPLSetBreakString");
		FoxitQPLSetCSDictEPSG = (FoxitQPLFuncType85)AttachFunction("DPLSetCSDictEPSG");
		FoxitQPLSetCSDictType = (FoxitQPLFuncType85)AttachFunction("DPLSetCSDictType");
		FoxitQPLSetCSDictWKT = (FoxitQPLFuncType111)AttachFunction("DPLSetCSDictWKT");
		FoxitQPLSetCapturedPageOptional = (FoxitQPLFuncType85)AttachFunction("DPLSetCapturedPageOptional");
		FoxitQPLSetCapturedPageTransparencyGroup = (FoxitQPLFuncType97)AttachFunction("DPLSetCapturedPageTransparencyGroup");
		FoxitQPLSetCatalogInformation = (FoxitQPLFuncType133)AttachFunction("DPLSetCatalogInformation");
		FoxitQPLSetCharWidth = (FoxitQPLFuncType85)AttachFunction("DPLSetCharWidth");
		FoxitQPLSetClippingPath = (FoxitQPLFuncType22)AttachFunction("DPLSetClippingPath");
		FoxitQPLSetClippingPathEvenOdd = (FoxitQPLFuncType22)AttachFunction("DPLSetClippingPathEvenOdd");
		FoxitQPLSetCompatibility = (FoxitQPLFuncType85)AttachFunction("DPLSetCompatibility");
		FoxitQPLSetContentStreamFromString = (FoxitQPLFuncType23)AttachFunction("DPLSetContentStreamFromString");
		FoxitQPLSetContentStreamOptional = (FoxitQPLFuncType72)AttachFunction("DPLSetContentStreamOptional");
		FoxitQPLSetCropBox = (FoxitQPLFuncType31)AttachFunction("DPLSetCropBox");
		FoxitQPLSetCustomInformation = (FoxitQPLFuncType133)AttachFunction("DPLSetCustomInformation");
		FoxitQPLSetCustomLineDash = (FoxitQPLFuncType123)AttachFunction("DPLSetCustomLineDash");
		FoxitQPLSetDestProperties = (FoxitQPLFuncType94)AttachFunction("DPLSetDestProperties");
		FoxitQPLSetDestValue = (FoxitQPLFuncType86)AttachFunction("DPLSetDestValue");
		FoxitQPLSetDocumentMetadata = (FoxitQPLFuncType121)AttachFunction("DPLSetDocumentMetadata");
		FoxitQPLSetEmbeddedFileStrProperty = (FoxitQPLFuncType109)AttachFunction("DPLSetEmbeddedFileStrProperty");
		FoxitQPLSetFillColor = (FoxitQPLFuncType30)AttachFunction("DPLSetFillColor");
		FoxitQPLSetFillColorCMYK = (FoxitQPLFuncType31)AttachFunction("DPLSetFillColorCMYK");
		FoxitQPLSetFillColorSep = (FoxitQPLFuncType123)AttachFunction("DPLSetFillColorSep");
		FoxitQPLSetFillShader = (FoxitQPLFuncType121)AttachFunction("DPLSetFillShader");
		FoxitQPLSetFillTilingPattern = (FoxitQPLFuncType121)AttachFunction("DPLSetFillTilingPattern");
		FoxitQPLSetFindImagesMode = (FoxitQPLFuncType72)AttachFunction("DPLSetFindImagesMode");
		FoxitQPLSetFontEncoding = (FoxitQPLFuncType72)AttachFunction("DPLSetFontEncoding");
		FoxitQPLSetFontFlags = (FoxitQPLFuncType107)AttachFunction("DPLSetFontFlags");
		FoxitQPLSetFormFieldAlignment = (FoxitQPLFuncType85)AttachFunction("DPLSetFormFieldAlignment");
		FoxitQPLSetFormFieldAnnotFlags = (FoxitQPLFuncType85)AttachFunction("DPLSetFormFieldAnnotFlags");
		FoxitQPLSetFormFieldAppearanceFromString = (FoxitQPLFuncType75)AttachFunction("DPLSetFormFieldAppearanceFromString");
		FoxitQPLSetFormFieldBackgroundColor = (FoxitQPLFuncType79)AttachFunction("DPLSetFormFieldBackgroundColor");
		FoxitQPLSetFormFieldBackgroundColorCMYK = (FoxitQPLFuncType80)AttachFunction("DPLSetFormFieldBackgroundColorCMYK");
		FoxitQPLSetFormFieldBackgroundColorGray = (FoxitQPLFuncType77)AttachFunction("DPLSetFormFieldBackgroundColorGray");
		FoxitQPLSetFormFieldBackgroundColorSep = (FoxitQPLFuncType113)AttachFunction("DPLSetFormFieldBackgroundColorSep");
		FoxitQPLSetFormFieldBorderColor = (FoxitQPLFuncType79)AttachFunction("DPLSetFormFieldBorderColor");
		FoxitQPLSetFormFieldBorderColorCMYK = (FoxitQPLFuncType80)AttachFunction("DPLSetFormFieldBorderColorCMYK");
		FoxitQPLSetFormFieldBorderColorGray = (FoxitQPLFuncType77)AttachFunction("DPLSetFormFieldBorderColorGray");
		FoxitQPLSetFormFieldBorderColorSep = (FoxitQPLFuncType113)AttachFunction("DPLSetFormFieldBorderColorSep");
		FoxitQPLSetFormFieldBorderStyle = (FoxitQPLFuncType84)AttachFunction("DPLSetFormFieldBorderStyle");
		FoxitQPLSetFormFieldBounds = (FoxitQPLFuncType80)AttachFunction("DPLSetFormFieldBounds");
		FoxitQPLSetFormFieldCalcOrder = (FoxitQPLFuncType85)AttachFunction("DPLSetFormFieldCalcOrder");
		FoxitQPLSetFormFieldCaption = (FoxitQPLFuncType111)AttachFunction("DPLSetFormFieldCaption");
		FoxitQPLSetFormFieldCheckStyle = (FoxitQPLFuncType92)AttachFunction("DPLSetFormFieldCheckStyle");
		FoxitQPLSetFormFieldChildTitle = (FoxitQPLFuncType111)AttachFunction("DPLSetFormFieldChildTitle");
		FoxitQPLSetFormFieldChoiceSub = (FoxitQPLFuncType110)AttachFunction("DPLSetFormFieldChoiceSub");
		FoxitQPLSetFormFieldChoiceType = (FoxitQPLFuncType85)AttachFunction("DPLSetFormFieldChoiceType");
		FoxitQPLSetFormFieldColor = (FoxitQPLFuncType79)AttachFunction("DPLSetFormFieldColor");
		FoxitQPLSetFormFieldColorCMYK = (FoxitQPLFuncType80)AttachFunction("DPLSetFormFieldColorCMYK");
		FoxitQPLSetFormFieldColorSep = (FoxitQPLFuncType113)AttachFunction("DPLSetFormFieldColorSep");
		FoxitQPLSetFormFieldComb = (FoxitQPLFuncType85)AttachFunction("DPLSetFormFieldComb");
		FoxitQPLSetFormFieldCustomDict = (FoxitQPLFuncType119)AttachFunction("DPLSetFormFieldCustomDict");
		FoxitQPLSetFormFieldDefaultValue = (FoxitQPLFuncType111)AttachFunction("DPLSetFormFieldDefaultValue");
		FoxitQPLSetFormFieldDefaultValueEx = (FoxitQPLFuncType114)AttachFunction("DPLSetFormFieldDefaultValueEx");
		FoxitQPLSetFormFieldDescription = (FoxitQPLFuncType111)AttachFunction("DPLSetFormFieldDescription");
		FoxitQPLSetFormFieldFlags = (FoxitQPLFuncType85)AttachFunction("DPLSetFormFieldFlags");
		FoxitQPLSetFormFieldFont = (FoxitQPLFuncType85)AttachFunction("DPLSetFormFieldFont");
		FoxitQPLSetFormFieldFormatMode = (FoxitQPLFuncType72)AttachFunction("DPLSetFormFieldFormatMode");
		FoxitQPLSetFormFieldHighlightMode = (FoxitQPLFuncType85)AttachFunction("DPLSetFormFieldHighlightMode");
		FoxitQPLSetFormFieldIcon = (FoxitQPLFuncType92)AttachFunction("DPLSetFormFieldIcon");
		FoxitQPLSetFormFieldIconStyle = (FoxitQPLFuncType103)AttachFunction("DPLSetFormFieldIconStyle");
		FoxitQPLSetFormFieldLockAction = (FoxitQPLFuncType110)AttachFunction("DPLSetFormFieldLockAction");
		FoxitQPLSetFormFieldMaxLen = (FoxitQPLFuncType85)AttachFunction("DPLSetFormFieldMaxLen");
		FoxitQPLSetFormFieldMetadata = (FoxitQPLFuncType111)AttachFunction("DPLSetFormFieldMetadata");
		FoxitQPLSetFormFieldNoExport = (FoxitQPLFuncType85)AttachFunction("DPLSetFormFieldNoExport");
		FoxitQPLSetFormFieldOptional = (FoxitQPLFuncType85)AttachFunction("DPLSetFormFieldOptional");
		FoxitQPLSetFormFieldPage = (FoxitQPLFuncType85)AttachFunction("DPLSetFormFieldPage");
		FoxitQPLSetFormFieldPrintable = (FoxitQPLFuncType85)AttachFunction("DPLSetFormFieldPrintable");
		FoxitQPLSetFormFieldReadOnly = (FoxitQPLFuncType85)AttachFunction("DPLSetFormFieldReadOnly");
		FoxitQPLSetFormFieldRequired = (FoxitQPLFuncType85)AttachFunction("DPLSetFormFieldRequired");
		FoxitQPLSetFormFieldResetAction = (FoxitQPLFuncType111)AttachFunction("DPLSetFormFieldResetAction");
		FoxitQPLSetFormFieldRichTextString = (FoxitQPLFuncType117)AttachFunction("DPLSetFormFieldRichTextString");
		FoxitQPLSetFormFieldRotation = (FoxitQPLFuncType85)AttachFunction("DPLSetFormFieldRotation");
		FoxitQPLSetFormFieldSignatureImage = (FoxitQPLFuncType92)AttachFunction("DPLSetFormFieldSignatureImage");
		FoxitQPLSetFormFieldStandardFont = (FoxitQPLFuncType85)AttachFunction("DPLSetFormFieldStandardFont");
		FoxitQPLSetFormFieldSubmitAction = (FoxitQPLFuncType117)AttachFunction("DPLSetFormFieldSubmitAction");
		FoxitQPLSetFormFieldSubmitActionEx = (FoxitQPLFuncType118)AttachFunction("DPLSetFormFieldSubmitActionEx");
		FoxitQPLSetFormFieldTabOrder = (FoxitQPLFuncType85)AttachFunction("DPLSetFormFieldTabOrder");
		FoxitQPLSetFormFieldTextFlags = (FoxitQPLFuncType103)AttachFunction("DPLSetFormFieldTextFlags");
		FoxitQPLSetFormFieldTextSize = (FoxitQPLFuncType77)AttachFunction("DPLSetFormFieldTextSize");
		FoxitQPLSetFormFieldTitle = (FoxitQPLFuncType111)AttachFunction("DPLSetFormFieldTitle");
		FoxitQPLSetFormFieldValue = (FoxitQPLFuncType111)AttachFunction("DPLSetFormFieldValue");
		FoxitQPLSetFormFieldValueByTitle = (FoxitQPLFuncType133)AttachFunction("DPLSetFormFieldValueByTitle");
		FoxitQPLSetFormFieldValueEx = (FoxitQPLFuncType114)AttachFunction("DPLSetFormFieldValueEx");
		FoxitQPLSetFormFieldVisible = (FoxitQPLFuncType85)AttachFunction("DPLSetFormFieldVisible");
		FoxitQPLSetGlobalMeasurementUnits = (FoxitQPLFuncType72)AttachFunction("DPLSetGlobalMeasurementUnits");
		FoxitQPLSetGlobalOrigin = (FoxitQPLFuncType72)AttachFunction("DPLSetGlobalOrigin");
		FoxitQPLSetGlobalScale = (FoxitQPLFuncType72)AttachFunction("DPLSetGlobalScale");
		FoxitQPLSetHTMLBoldFont = (FoxitQPLFuncType129)AttachFunction("DPLSetHTMLBoldFont");
		FoxitQPLSetHTMLBoldItalicFont = (FoxitQPLFuncType129)AttachFunction("DPLSetHTMLBoldItalicFont");
		FoxitQPLSetHTMLItalicFont = (FoxitQPLFuncType129)AttachFunction("DPLSetHTMLItalicFont");
		FoxitQPLSetHTMLNormalFont = (FoxitQPLFuncType129)AttachFunction("DPLSetHTMLNormalFont");
		FoxitQPLSetHeaderCommentsFromString = (FoxitQPLFuncType23)AttachFunction("DPLSetHeaderCommentsFromString");
		FoxitQPLSetImageAsMask = (FoxitQPLFuncType72)AttachFunction("DPLSetImageAsMask");
		FoxitQPLSetImageMask = (FoxitQPLFuncType33)AttachFunction("DPLSetImageMask");
		FoxitQPLSetImageMaskCMYK = (FoxitQPLFuncType34)AttachFunction("DPLSetImageMaskCMYK");
		FoxitQPLSetImageMaskFromImage = (FoxitQPLFuncType72)AttachFunction("DPLSetImageMaskFromImage");
		FoxitQPLSetImageOptional = (FoxitQPLFuncType72)AttachFunction("DPLSetImageOptional");
		FoxitQPLSetImageResolution = (FoxitQPLFuncType92)AttachFunction("DPLSetImageResolution");
		FoxitQPLSetInformation = (FoxitQPLFuncType111)AttachFunction("DPLSetInformation");
		FoxitQPLSetJPEGQuality = (FoxitQPLFuncType72)AttachFunction("DPLSetJPEGQuality");
		FoxitQPLSetJavaScriptMode = (FoxitQPLFuncType72)AttachFunction("DPLSetJavaScriptMode");
		FoxitQPLSetKerning = (FoxitQPLFuncType129)AttachFunction("DPLSetKerning");
		FoxitQPLSetLineCap = (FoxitQPLFuncType72)AttachFunction("DPLSetLineCap");
		FoxitQPLSetLineColor = (FoxitQPLFuncType30)AttachFunction("DPLSetLineColor");
		FoxitQPLSetLineColorCMYK = (FoxitQPLFuncType31)AttachFunction("DPLSetLineColorCMYK");
		FoxitQPLSetLineColorSep = (FoxitQPLFuncType123)AttachFunction("DPLSetLineColorSep");
		FoxitQPLSetLineDash = (FoxitQPLFuncType29)AttachFunction("DPLSetLineDash");
		FoxitQPLSetLineDashEx = (FoxitQPLFuncType121)AttachFunction("DPLSetLineDashEx");
		FoxitQPLSetLineJoin = (FoxitQPLFuncType72)AttachFunction("DPLSetLineJoin");
		FoxitQPLSetLineShader = (FoxitQPLFuncType121)AttachFunction("DPLSetLineShader");
		FoxitQPLSetLineWidth = (FoxitQPLFuncType28)AttachFunction("DPLSetLineWidth");
		FoxitQPLSetMarkupAnnotStyle = (FoxitQPLFuncType80)AttachFunction("DPLSetMarkupAnnotStyle");
		FoxitQPLSetMeasureDictBoundsCount = (FoxitQPLFuncType85)AttachFunction("DPLSetMeasureDictBoundsCount");
		FoxitQPLSetMeasureDictBoundsItem = (FoxitQPLFuncType86)AttachFunction("DPLSetMeasureDictBoundsItem");
		FoxitQPLSetMeasureDictCoordinateSystem = (FoxitQPLFuncType85)AttachFunction("DPLSetMeasureDictCoordinateSystem");
		FoxitQPLSetMeasureDictGPTSCount = (FoxitQPLFuncType85)AttachFunction("DPLSetMeasureDictGPTSCount");
		FoxitQPLSetMeasureDictGPTSItem = (FoxitQPLFuncType86)AttachFunction("DPLSetMeasureDictGPTSItem");
		FoxitQPLSetMeasureDictLPTSCount = (FoxitQPLFuncType85)AttachFunction("DPLSetMeasureDictLPTSCount");
		FoxitQPLSetMeasureDictLPTSItem = (FoxitQPLFuncType86)AttachFunction("DPLSetMeasureDictLPTSItem");
		FoxitQPLSetMeasureDictPDU = (FoxitQPLFuncType97)AttachFunction("DPLSetMeasureDictPDU");
		FoxitQPLSetMeasurementUnits = (FoxitQPLFuncType72)AttachFunction("DPLSetMeasurementUnits");
		FoxitQPLSetNeedAppearances = (FoxitQPLFuncType72)AttachFunction("DPLSetNeedAppearances");
		FoxitQPLSetObjectFromString = (FoxitQPLFuncType73)AttachFunction("DPLSetObjectFromString");
		FoxitQPLSetOpenActionDestination = (FoxitQPLFuncType85)AttachFunction("DPLSetOpenActionDestination");
		FoxitQPLSetOpenActionDestinationFull = (FoxitQPLFuncType94)AttachFunction("DPLSetOpenActionDestinationFull");
		FoxitQPLSetOpenActionJavaScript = (FoxitQPLFuncType121)AttachFunction("DPLSetOpenActionJavaScript");
		FoxitQPLSetOpenActionMenu = (FoxitQPLFuncType121)AttachFunction("DPLSetOpenActionMenu");
		FoxitQPLSetOptionalContentConfigLocked = (FoxitQPLFuncType92)AttachFunction("DPLSetOptionalContentConfigLocked");
		FoxitQPLSetOptionalContentConfigState = (FoxitQPLFuncType92)AttachFunction("DPLSetOptionalContentConfigState");
		FoxitQPLSetOptionalContentGroupName = (FoxitQPLFuncType111)AttachFunction("DPLSetOptionalContentGroupName");
		FoxitQPLSetOptionalContentGroupPrintable = (FoxitQPLFuncType85)AttachFunction("DPLSetOptionalContentGroupPrintable");
		FoxitQPLSetOptionalContentGroupVisible = (FoxitQPLFuncType85)AttachFunction("DPLSetOptionalContentGroupVisible");
		FoxitQPLSetOrigin = (FoxitQPLFuncType72)AttachFunction("DPLSetOrigin");
		FoxitQPLSetOutlineColor = (FoxitQPLFuncType79)AttachFunction("DPLSetOutlineColor");
		FoxitQPLSetOutlineDestination = (FoxitQPLFuncType86)AttachFunction("DPLSetOutlineDestination");
		FoxitQPLSetOutlineDestinationFull = (FoxitQPLFuncType98)AttachFunction("DPLSetOutlineDestinationFull");
		FoxitQPLSetOutlineDestinationZoom = (FoxitQPLFuncType91)AttachFunction("DPLSetOutlineDestinationZoom");
		FoxitQPLSetOutlineJavaScript = (FoxitQPLFuncType111)AttachFunction("DPLSetOutlineJavaScript");
		FoxitQPLSetOutlineNamedDestination = (FoxitQPLFuncType111)AttachFunction("DPLSetOutlineNamedDestination");
		FoxitQPLSetOutlineOpenFile = (FoxitQPLFuncType111)AttachFunction("DPLSetOutlineOpenFile");
		FoxitQPLSetOutlineRemoteDestination = (FoxitQPLFuncType116)AttachFunction("DPLSetOutlineRemoteDestination");
		FoxitQPLSetOutlineStyle = (FoxitQPLFuncType92)AttachFunction("DPLSetOutlineStyle");
		FoxitQPLSetOutlineTitle = (FoxitQPLFuncType111)AttachFunction("DPLSetOutlineTitle");
		FoxitQPLSetOutlineWebLink = (FoxitQPLFuncType111)AttachFunction("DPLSetOutlineWebLink");
		FoxitQPLSetOverprint = (FoxitQPLFuncType92)AttachFunction("DPLSetOverprint");
		FoxitQPLSetPDFAMode = (FoxitQPLFuncType72)AttachFunction("DPLSetPDFAMode");
		FoxitQPLSetPNGTransparencyColor = (FoxitQPLFuncType92)AttachFunction("DPLSetPNGTransparencyColor");
		FoxitQPLSetPageActionMenu = (FoxitQPLFuncType121)AttachFunction("DPLSetPageActionMenu");
		FoxitQPLSetPageBox = (FoxitQPLFuncType80)AttachFunction("DPLSetPageBox");
		FoxitQPLSetPageContentFromString = (FoxitQPLFuncType23)AttachFunction("DPLSetPageContentFromString");
		FoxitQPLSetPageDimensions = (FoxitQPLFuncType29)AttachFunction("DPLSetPageDimensions");
		FoxitQPLSetPageLayout = (FoxitQPLFuncType72)AttachFunction("DPLSetPageLayout");
		FoxitQPLSetPageMetadata = (FoxitQPLFuncType121)AttachFunction("DPLSetPageMetadata");
		FoxitQPLSetPageMode = (FoxitQPLFuncType72)AttachFunction("DPLSetPageMode");
		FoxitQPLSetPageSize = (FoxitQPLFuncType121)AttachFunction("DPLSetPageSize");
		FoxitQPLSetPageThumbnail = (FoxitQPLFuncType22)AttachFunction("DPLSetPageThumbnail");
		FoxitQPLSetPageTransparencyGroup = (FoxitQPLFuncType92)AttachFunction("DPLSetPageTransparencyGroup");
		FoxitQPLSetPageUserUnit = (FoxitQPLFuncType28)AttachFunction("DPLSetPageUserUnit");
		FoxitQPLSetPrecision = (FoxitQPLFuncType72)AttachFunction("DPLSetPrecision");
		FoxitQPLSetRenderArea = (FoxitQPLFuncType31)AttachFunction("DPLSetRenderArea");
		FoxitQPLSetRenderCropType = (FoxitQPLFuncType72)AttachFunction("DPLSetRenderCropType");
		FoxitQPLSetRenderOptions = (FoxitQPLFuncType85)AttachFunction("DPLSetRenderOptions");
		FoxitQPLSetRenderScale = (FoxitQPLFuncType28)AttachFunction("DPLSetRenderScale");
		FoxitQPLSetScale = (FoxitQPLFuncType28)AttachFunction("DPLSetScale");
		FoxitQPLSetSigFlags = (FoxitQPLFuncType72)AttachFunction("DPLSetSigFlags");
		FoxitQPLSetSignProcessAppearanceFromString = (FoxitQPLFuncType112)AttachFunction("DPLSetSignProcessAppearanceFromString");
		FoxitQPLSetSignProcessCustomDict = (FoxitQPLFuncType118)AttachFunction("DPLSetSignProcessCustomDict");
		FoxitQPLSetSignProcessCustomSubFilter = (FoxitQPLFuncType111)AttachFunction("DPLSetSignProcessCustomSubFilter");
		FoxitQPLSetSignProcessField = (FoxitQPLFuncType111)AttachFunction("DPLSetSignProcessField");
		FoxitQPLSetSignProcessFieldBounds = (FoxitQPLFuncType80)AttachFunction("DPLSetSignProcessFieldBounds");
		FoxitQPLSetSignProcessFieldImageFromFile = (FoxitQPLFuncType114)AttachFunction("DPLSetSignProcessFieldImageFromFile");
		FoxitQPLSetSignProcessFieldImageFromString = (FoxitQPLFuncType74)AttachFunction("DPLSetSignProcessFieldImageFromString");
		FoxitQPLSetSignProcessFieldLocked = (FoxitQPLFuncType85)AttachFunction("DPLSetSignProcessFieldLocked");
		FoxitQPLSetSignProcessFieldMetadata = (FoxitQPLFuncType111)AttachFunction("DPLSetSignProcessFieldMetadata");
		FoxitQPLSetSignProcessFieldPage = (FoxitQPLFuncType85)AttachFunction("DPLSetSignProcessFieldPage");
		FoxitQPLSetSignProcessImageLayer = (FoxitQPLFuncType111)AttachFunction("DPLSetSignProcessImageLayer");
		FoxitQPLSetSignProcessInfo = (FoxitQPLFuncType120)AttachFunction("DPLSetSignProcessInfo");
		FoxitQPLSetSignProcessKeyset = (FoxitQPLFuncType85)AttachFunction("DPLSetSignProcessKeyset");
		FoxitQPLSetSignProcessOptions = (FoxitQPLFuncType92)AttachFunction("DPLSetSignProcessOptions");
		FoxitQPLSetSignProcessPFXFromFile = (FoxitQPLFuncType117)AttachFunction("DPLSetSignProcessPFXFromFile");
		FoxitQPLSetSignProcessPFXFromString = (FoxitQPLFuncType76)AttachFunction("DPLSetSignProcessPFXFromString");
		FoxitQPLSetSignProcessPassthrough = (FoxitQPLFuncType85)AttachFunction("DPLSetSignProcessPassthrough");
		FoxitQPLSetSignProcessSubFilter = (FoxitQPLFuncType85)AttachFunction("DPLSetSignProcessSubFilter");
		FoxitQPLSetTabOrderMode = (FoxitQPLFuncType121)AttachFunction("DPLSetTabOrderMode");
		FoxitQPLSetTableBorderColor = (FoxitQPLFuncType88)AttachFunction("DPLSetTableBorderColor");
		FoxitQPLSetTableBorderColorCMYK = (FoxitQPLFuncType89)AttachFunction("DPLSetTableBorderColorCMYK");
		FoxitQPLSetTableBorderWidth = (FoxitQPLFuncType86)AttachFunction("DPLSetTableBorderWidth");
		FoxitQPLSetTableCellAlignment = (FoxitQPLFuncType103)AttachFunction("DPLSetTableCellAlignment");
		FoxitQPLSetTableCellBackgroundColor = (FoxitQPLFuncType101)AttachFunction("DPLSetTableCellBackgroundColor");
		FoxitQPLSetTableCellBackgroundColorCMYK = (FoxitQPLFuncType102)AttachFunction("DPLSetTableCellBackgroundColorCMYK");
		FoxitQPLSetTableCellBorderColor = (FoxitQPLFuncType105)AttachFunction("DPLSetTableCellBorderColor");
		FoxitQPLSetTableCellBorderColorCMYK = (FoxitQPLFuncType106)AttachFunction("DPLSetTableCellBorderColorCMYK");
		FoxitQPLSetTableCellBorderWidth = (FoxitQPLFuncType104)AttachFunction("DPLSetTableCellBorderWidth");
		FoxitQPLSetTableCellContent = (FoxitQPLFuncType108)AttachFunction("DPLSetTableCellContent");
		FoxitQPLSetTableCellPadding = (FoxitQPLFuncType104)AttachFunction("DPLSetTableCellPadding");
		FoxitQPLSetTableCellTextColor = (FoxitQPLFuncType101)AttachFunction("DPLSetTableCellTextColor");
		FoxitQPLSetTableCellTextColorCMYK = (FoxitQPLFuncType102)AttachFunction("DPLSetTableCellTextColorCMYK");
		FoxitQPLSetTableCellTextSize = (FoxitQPLFuncType100)AttachFunction("DPLSetTableCellTextSize");
		FoxitQPLSetTableColumnWidth = (FoxitQPLFuncType93)AttachFunction("DPLSetTableColumnWidth");
		FoxitQPLSetTableRowHeight = (FoxitQPLFuncType93)AttachFunction("DPLSetTableRowHeight");
		FoxitQPLSetTableThinBorders = (FoxitQPLFuncType88)AttachFunction("DPLSetTableThinBorders");
		FoxitQPLSetTableThinBordersCMYK = (FoxitQPLFuncType89)AttachFunction("DPLSetTableThinBordersCMYK");
		FoxitQPLSetTempFile = (FoxitQPLFuncType121)AttachFunction("DPLSetTempFile");
		FoxitQPLSetTempPath = (FoxitQPLFuncType121)AttachFunction("DPLSetTempPath");
		FoxitQPLSetTextAlign = (FoxitQPLFuncType72)AttachFunction("DPLSetTextAlign");
		FoxitQPLSetTextCharSpacing = (FoxitQPLFuncType28)AttachFunction("DPLSetTextCharSpacing");
		FoxitQPLSetTextColor = (FoxitQPLFuncType30)AttachFunction("DPLSetTextColor");
		FoxitQPLSetTextColorCMYK = (FoxitQPLFuncType31)AttachFunction("DPLSetTextColorCMYK");
		FoxitQPLSetTextColorSep = (FoxitQPLFuncType123)AttachFunction("DPLSetTextColorSep");
		FoxitQPLSetTextExtractionArea = (FoxitQPLFuncType31)AttachFunction("DPLSetTextExtractionArea");
		FoxitQPLSetTextExtractionOptions = (FoxitQPLFuncType85)AttachFunction("DPLSetTextExtractionOptions");
		FoxitQPLSetTextExtractionScaling = (FoxitQPLFuncType78)AttachFunction("DPLSetTextExtractionScaling");
		FoxitQPLSetTextExtractionWordGap = (FoxitQPLFuncType28)AttachFunction("DPLSetTextExtractionWordGap");
		FoxitQPLSetTextHighlight = (FoxitQPLFuncType72)AttachFunction("DPLSetTextHighlight");
		FoxitQPLSetTextHighlightColor = (FoxitQPLFuncType30)AttachFunction("DPLSetTextHighlightColor");
		FoxitQPLSetTextHighlightColorCMYK = (FoxitQPLFuncType31)AttachFunction("DPLSetTextHighlightColorCMYK");
		FoxitQPLSetTextHighlightColorSep = (FoxitQPLFuncType123)AttachFunction("DPLSetTextHighlightColorSep");
		FoxitQPLSetTextMode = (FoxitQPLFuncType72)AttachFunction("DPLSetTextMode");
		FoxitQPLSetTextRise = (FoxitQPLFuncType28)AttachFunction("DPLSetTextRise");
		FoxitQPLSetTextScaling = (FoxitQPLFuncType28)AttachFunction("DPLSetTextScaling");
		FoxitQPLSetTextShader = (FoxitQPLFuncType121)AttachFunction("DPLSetTextShader");
		FoxitQPLSetTextSize = (FoxitQPLFuncType28)AttachFunction("DPLSetTextSize");
		FoxitQPLSetTextSpacing = (FoxitQPLFuncType28)AttachFunction("DPLSetTextSpacing");
		FoxitQPLSetTextUnderline = (FoxitQPLFuncType72)AttachFunction("DPLSetTextUnderline");
		FoxitQPLSetTextUnderlineColor = (FoxitQPLFuncType30)AttachFunction("DPLSetTextUnderlineColor");
		FoxitQPLSetTextUnderlineColorCMYK = (FoxitQPLFuncType31)AttachFunction("DPLSetTextUnderlineColorCMYK");
		FoxitQPLSetTextUnderlineColorSep = (FoxitQPLFuncType123)AttachFunction("DPLSetTextUnderlineColorSep");
		FoxitQPLSetTextUnderlineCustomDash = (FoxitQPLFuncType123)AttachFunction("DPLSetTextUnderlineCustomDash");
		FoxitQPLSetTextUnderlineDash = (FoxitQPLFuncType29)AttachFunction("DPLSetTextUnderlineDash");
		FoxitQPLSetTextUnderlineDistance = (FoxitQPLFuncType28)AttachFunction("DPLSetTextUnderlineDistance");
		FoxitQPLSetTextUnderlineWidth = (FoxitQPLFuncType28)AttachFunction("DPLSetTextUnderlineWidth");
		FoxitQPLSetTextWordSpacing = (FoxitQPLFuncType28)AttachFunction("DPLSetTextWordSpacing");
		FoxitQPLSetTransparency = (FoxitQPLFuncType72)AttachFunction("DPLSetTransparency");
		FoxitQPLSetUpdateMode = (FoxitQPLFuncType72)AttachFunction("DPLSetUpdateMode");
		FoxitQPLSetViewerPreferences = (FoxitQPLFuncType85)AttachFunction("DPLSetViewerPreferences");
		FoxitQPLSetXFAFormFieldAccess = (FoxitQPLFuncType129)AttachFunction("DPLSetXFAFormFieldAccess");
		FoxitQPLSetXFAFormFieldBorderColor = (FoxitQPLFuncType124)AttachFunction("DPLSetXFAFormFieldBorderColor");
		FoxitQPLSetXFAFormFieldBorderPresence = (FoxitQPLFuncType129)AttachFunction("DPLSetXFAFormFieldBorderPresence");
		FoxitQPLSetXFAFormFieldBorderWidth = (FoxitQPLFuncType123)AttachFunction("DPLSetXFAFormFieldBorderWidth");
		FoxitQPLSetXFAFormFieldValue = (FoxitQPLFuncType133)AttachFunction("DPLSetXFAFormFieldValue");
		FoxitQPLSetXFAFromString = (FoxitQPLFuncType25)AttachFunction("DPLSetXFAFromString");
		FoxitQPLSignFile = (FoxitQPLFuncType142)AttachFunction("DPLSignFile");
		FoxitQPLSplitPageText = (FoxitQPLFuncType72)AttachFunction("DPLSplitPageText");
		FoxitQPLStartPath = (FoxitQPLFuncType29)AttachFunction("DPLStartPath");
		FoxitQPLStoreCustomDataFromFile = (FoxitQPLFuncType135)AttachFunction("DPLStoreCustomDataFromFile");
		FoxitQPLStoreCustomDataFromString = (FoxitQPLFuncType122)AttachFunction("DPLStoreCustomDataFromString");
		FoxitQPLStringResultLength = (FoxitQPLFuncType22)AttachFunction("DPLStringResultLength");
		FoxitQPLTestTempPath = (FoxitQPLFuncType22)AttachFunction("DPLTestTempPath");
		FoxitQPLTransformFile = (FoxitQPLFuncType138)AttachFunction("DPLTransformFile");
		FoxitQPLUnlockKey = (FoxitQPLFuncType121)AttachFunction("DPLUnlockKey");
		FoxitQPLUnlocked = (FoxitQPLFuncType22)AttachFunction("DPLUnlocked");
		FoxitQPLUpdateAndFlattenFormField = (FoxitQPLFuncType72)AttachFunction("DPLUpdateAndFlattenFormField");
		FoxitQPLUpdateAppearanceStream = (FoxitQPLFuncType72)AttachFunction("DPLUpdateAppearanceStream");
		FoxitQPLUpdateTrueTypeSubsettedFont = (FoxitQPLFuncType121)AttachFunction("DPLUpdateTrueTypeSubsettedFont");
		FoxitQPLUseKerning = (FoxitQPLFuncType72)AttachFunction("DPLUseKerning");
		FoxitQPLUseUnsafeContentStreams = (FoxitQPLFuncType72)AttachFunction("DPLUseUnsafeContentStreams");
		if (!loadError)
		{
			instanceID = FoxitQPLCreateLibrary();
		}
	}
	else
	{
		loadError = true;
	}
}

FoxitQPLLinuxCPP1811::~FoxitQPLLinuxCPP1811()
{
	if (instanceID > 0)
	{
		FoxitQPLReleaseLibrary(instanceID);
	}
	if (soHandle > 0)
	{
		dlclose(soHandle);
		soHandle = 0;
	}
}

char* FoxitQPLLinuxCPP1811::StringParm(const std::string& strParm, int& sb)
{
	char* sp;
	int pl;
	if (strParm.find("\0") == std::string::npos)
	{
		sp = (char*)strParm.c_str();
		sb = 0;
	} else
	{
		sb = 1;
		pl = (int)strParm.length();
		sp = FoxitQPLCreateBuffer(instanceID, pl);
		FoxitQPLAddToBuffer(instanceID, sp, (char*)strParm.c_str(), pl);
	}
	return sp;
}

wchar_t* FoxitQPLLinuxCPP1811::WideStringParm(const std::wstring& strParm)
{
	wchar_t* sp;
	int length = (int)strParm.length();
	if (length == 0)
	{
		sp = NULL;
	}
	else
	{
		wchar_t wordArray[length];
		for (int charX = 0; charX < length; charX++)
		{
			wordArray[charX] = (wchar_t)(strParm[charX]);
		}
		sp = (wchar_t*)FoxitQPLCreateBuffer(instanceID, length * 4);
		FoxitQPLAddToBuffer(instanceID, (char*)sp, (char*)wordArray, length * 4);
	}
	return sp;
}

std::wstring FoxitQPLLinuxCPP1811::WideStringResult(wchar_t* chars, int length)
{
	wchar_t* result = chars;
	std::wstring resultStr = std::wstring(length, 33);
	for (int x = 0; x < length; x++)
	{
		const wchar_t* pointer = resultStr.c_str();
		pointer += x;
		*((wchar_t *)pointer) = *result;
		result += 1;
	}
	return resultStr;
}

int FoxitQPLLinuxCPP1811::AddArcToPath(double CenterX, double CenterY, double TotalAngle)
{
	if (loadError) return 0;
	return FoxitQPLAddArcToPath(instanceID, CenterX, CenterY, TotalAngle);
}

int FoxitQPLLinuxCPP1811::AddBoxToPath(double Left, double Top, double Width, double Height)
{
	if (loadError) return 0;
	return FoxitQPLAddBoxToPath(instanceID, Left, Top, Width, Height);
}

int FoxitQPLLinuxCPP1811::AddCJKFont(int CJKFontID)
{
	if (loadError) return 0;
	return FoxitQPLAddCJKFont(instanceID, CJKFontID);
}

int FoxitQPLLinuxCPP1811::AddCurveToPath(double CtAX, double CtAY, double CtBX, double CtBY, double EndX, double EndY)
{
	if (loadError) return 0;
	return FoxitQPLAddCurveToPath(instanceID, CtAX, CtAY, CtBX, CtBY, EndX, 
		EndY);
}

int FoxitQPLLinuxCPP1811::AddEmbeddedFile(const std::wstring& FileName, const std::wstring& MIMEType)
{
	if (loadError) return 0;
	return FoxitQPLAddEmbeddedFile(instanceID, WideStringParm(FileName), 
		WideStringParm(MIMEType));
}

int FoxitQPLLinuxCPP1811::AddFileAttachment(const std::wstring& Title, int EmbeddedFileID)
{
	if (loadError) return 0;
	return FoxitQPLAddFileAttachment(instanceID, WideStringParm(Title), 
		EmbeddedFileID);
}

int FoxitQPLLinuxCPP1811::AddFormFieldChoiceSub(int Index, const std::wstring& SubName, const std::wstring& DisplayName)
{
	if (loadError) return 0;
	return FoxitQPLAddFormFieldChoiceSub(instanceID, Index, 
		WideStringParm(SubName), WideStringParm(DisplayName));
}

int FoxitQPLLinuxCPP1811::AddFormFieldSub(int Index, const std::wstring& SubName)
{
	if (loadError) return 0;
	return FoxitQPLAddFormFieldSub(instanceID, Index, 
		WideStringParm(SubName));
}

int FoxitQPLLinuxCPP1811::AddFormFont(int FontID)
{
	if (loadError) return 0;
	return FoxitQPLAddFormFont(instanceID, FontID);
}

int FoxitQPLLinuxCPP1811::AddFreeTextAnnotation(double Left, double Top, double Width, double Height, const std::wstring& Text, int Angle, int Options)
{
	if (loadError) return 0;
	return FoxitQPLAddFreeTextAnnotation(instanceID, Left, Top, Width, 
		Height, WideStringParm(Text), Angle, Options);
}

int FoxitQPLLinuxCPP1811::AddFreeTextAnnotationEx(double Left, double Top, double Width, double Height, const std::wstring& Text, int Angle, int Options, int Transparency)
{
	if (loadError) return 0;
	return FoxitQPLAddFreeTextAnnotationEx(instanceID, Left, Top, Width, 
		Height, WideStringParm(Text), Angle, Options, Transparency);
}

int FoxitQPLLinuxCPP1811::AddGlobalJavaScript(const std::wstring& PackageName, const std::wstring& JavaScript)
{
	if (loadError) return 0;
	return FoxitQPLAddGlobalJavaScript(instanceID, 
		WideStringParm(PackageName), WideStringParm(JavaScript));
}

int FoxitQPLLinuxCPP1811::AddImageFromFile(const std::wstring& FileName, int Options)
{
	if (loadError) return 0;
	return FoxitQPLAddImageFromFile(instanceID, WideStringParm(FileName), 
		Options);
}

int FoxitQPLLinuxCPP1811::AddImageFromFileOffset(const std::wstring& FileName, int Offset, int DataLength, int Options)
{
	if (loadError) return 0;
	return FoxitQPLAddImageFromFileOffset(instanceID, 
		WideStringParm(FileName), Offset, DataLength, Options);
}

int FoxitQPLLinuxCPP1811::AddImageFromString(const std::string& Source, int Options)
{
	if (loadError) return 0;
	int sb1;
	char* sp1 = StringParm(Source, sb1);
	int result;
	result = FoxitQPLAddImageFromString(instanceID, sp1, Options);
	if (sb1 == 1) FoxitQPLReleaseBuffer(instanceID, sp1);
	return result;
}

int FoxitQPLLinuxCPP1811::AddLGIDictToPage(const std::wstring& DictContent)
{
	if (loadError) return 0;
	return FoxitQPLAddLGIDictToPage(instanceID, WideStringParm(DictContent));
}

int FoxitQPLLinuxCPP1811::AddLineToPath(double EndX, double EndY)
{
	if (loadError) return 0;
	return FoxitQPLAddLineToPath(instanceID, EndX, EndY);
}

int FoxitQPLLinuxCPP1811::AddLinkToDestination(double Left, double Top, double Width, double Height, int DestID, int Options)
{
	if (loadError) return 0;
	return FoxitQPLAddLinkToDestination(instanceID, Left, Top, Width, Height, 
		DestID, Options);
}

int FoxitQPLLinuxCPP1811::AddLinkToEmbeddedFile(double Left, double Top, double Width, double Height, int EmbeddedFileID, const std::wstring& Title, const std::wstring& Contents, int IconType, int Transpareny)
{
	if (loadError) return 0;
	return FoxitQPLAddLinkToEmbeddedFile(instanceID, Left, Top, Width, 
		Height, EmbeddedFileID, WideStringParm(Title), WideStringParm(Contents), 
		IconType, Transpareny);
}

int FoxitQPLLinuxCPP1811::AddLinkToFile(double Left, double Top, double Width, double Height, const std::wstring& FileName, int Page, double Position, int NewWindow, int Options)
{
	if (loadError) return 0;
	return FoxitQPLAddLinkToFile(instanceID, Left, Top, Width, Height, 
		WideStringParm(FileName), Page, Position, NewWindow, Options);
}

int FoxitQPLLinuxCPP1811::AddLinkToFileDest(double Left, double Top, double Width, double Height, const std::wstring& FileName, const std::wstring& NamedDest, double Position, int NewWindow, int Options)
{
	if (loadError) return 0;
	return FoxitQPLAddLinkToFileDest(instanceID, Left, Top, Width, Height, 
		WideStringParm(FileName), WideStringParm(NamedDest), Position, 
		NewWindow, Options);
}

int FoxitQPLLinuxCPP1811::AddLinkToFileEx(double Left, double Top, double Width, double Height, const std::wstring& FileName, int DestPage, int NewWindow, int Options, int Zoom, int DestType, double DestLeft, double DestTop, double DestRight, double DestBottom)
{
	if (loadError) return 0;
	return FoxitQPLAddLinkToFileEx(instanceID, Left, Top, Width, Height, 
		WideStringParm(FileName), DestPage, NewWindow, Options, Zoom, DestType, 
		DestLeft, DestTop, DestRight, DestBottom);
}

int FoxitQPLLinuxCPP1811::AddLinkToJavaScript(double Left, double Top, double Width, double Height, const std::wstring& JavaScript, int Options)
{
	if (loadError) return 0;
	return FoxitQPLAddLinkToJavaScript(instanceID, Left, Top, Width, Height, 
		WideStringParm(JavaScript), Options);
}

int FoxitQPLLinuxCPP1811::AddLinkToLocalFile(double Left, double Top, double Width, double Height, const std::wstring& FileName, int Options)
{
	if (loadError) return 0;
	return FoxitQPLAddLinkToLocalFile(instanceID, Left, Top, Width, Height, 
		WideStringParm(FileName), Options);
}

int FoxitQPLLinuxCPP1811::AddLinkToPage(double Left, double Top, double Width, double Height, int Page, double Position, int Options)
{
	if (loadError) return 0;
	return FoxitQPLAddLinkToPage(instanceID, Left, Top, Width, Height, Page, 
		Position, Options);
}

int FoxitQPLLinuxCPP1811::AddLinkToWeb(double Left, double Top, double Width, double Height, const std::wstring& Link, int Options)
{
	if (loadError) return 0;
	return FoxitQPLAddLinkToWeb(instanceID, Left, Top, Width, Height, 
		WideStringParm(Link), Options);
}

int FoxitQPLLinuxCPP1811::AddNoteAnnotation(double Left, double Top, int AnnotType, double PopupLeft, double PopupTop, double PopupWidth, double PopupHeight, const std::wstring& Title, const std::wstring& Contents, double Red, double Green, double Blue, int Open)
{
	if (loadError) return 0;
	return FoxitQPLAddNoteAnnotation(instanceID, Left, Top, AnnotType, 
		PopupLeft, PopupTop, PopupWidth, PopupHeight, WideStringParm(Title), 
		WideStringParm(Contents), Red, Green, Blue, Open);
}

int FoxitQPLLinuxCPP1811::AddOpenTypeFontFromFile(const std::wstring& FileName, int Options)
{
	if (loadError) return 0;
	return FoxitQPLAddOpenTypeFontFromFile(instanceID, 
		WideStringParm(FileName), Options);
}

int FoxitQPLLinuxCPP1811::AddOpenTypeFontFromString(const std::string& Source, int Options)
{
	if (loadError) return 0;
	int sb1;
	char* sp1 = StringParm(Source, sb1);
	int result;
	result = FoxitQPLAddOpenTypeFontFromString(instanceID, sp1, Options);
	if (sb1 == 1) FoxitQPLReleaseBuffer(instanceID, sp1);
	return result;
}

int FoxitQPLLinuxCPP1811::AddPageLabels(int Start, int Style, int Offset, const std::wstring& Prefix)
{
	if (loadError) return 0;
	return FoxitQPLAddPageLabels(instanceID, Start, Style, Offset, 
		WideStringParm(Prefix));
}

int FoxitQPLLinuxCPP1811::AddPageMatrix(double xscale, double yscale, double xoffset, double yoffset)
{
	if (loadError) return 0;
	return FoxitQPLAddPageMatrix(instanceID, xscale, yscale, xoffset, 
		yoffset);
}

int FoxitQPLLinuxCPP1811::AddPagePieceInfo(const std::wstring& Key, const std::wstring& ModDate, int Options)
{
	if (loadError) return 0;
	return FoxitQPLAddPagePieceInfo(instanceID, WideStringParm(Key), 
		WideStringParm(ModDate), Options);
}

int FoxitQPLLinuxCPP1811::AddPagePieceInfoDirect(const std::wstring& Key1, const std::wstring& Key2, const std::wstring& StrValue, const std::wstring& ModDate, int Options)
{
	if (loadError) return 0;
	return FoxitQPLAddPagePieceInfoDirect(instanceID, WideStringParm(Key1), 
		WideStringParm(Key2), WideStringParm(StrValue), WideStringParm(ModDate), 
		Options);
}

int FoxitQPLLinuxCPP1811::AddRGBSeparationColor(const std::wstring& ColorName, double Red, double Green, double Blue, int Options)
{
	if (loadError) return 0;
	return FoxitQPLAddRGBSeparationColor(instanceID, 
		WideStringParm(ColorName), Red, Green, Blue, Options);
}

int FoxitQPLLinuxCPP1811::AddRelativeLinkToFile(double Left, double Top, double Width, double Height, const std::wstring& FileName, int Page, double Position, int NewWindow, int Options)
{
	if (loadError) return 0;
	return FoxitQPLAddRelativeLinkToFile(instanceID, Left, Top, Width, 
		Height, WideStringParm(FileName), Page, Position, NewWindow, Options);
}

int FoxitQPLLinuxCPP1811::AddRelativeLinkToFileDest(double Left, double Top, double Width, double Height, const std::wstring& FileName, const std::wstring& NamedDest, double Position, int NewWindow, int Options)
{
	if (loadError) return 0;
	return FoxitQPLAddRelativeLinkToFileDest(instanceID, Left, Top, Width, 
		Height, WideStringParm(FileName), WideStringParm(NamedDest), Position, 
		NewWindow, Options);
}

int FoxitQPLLinuxCPP1811::AddRelativeLinkToFileEx(double Left, double Top, double Width, double Height, const std::wstring& FileName, int DestPage, int NewWindow, int Options, int Zoom, int DestType, double DestLeft, double DestTop, double DestRight, double DestBottom)
{
	if (loadError) return 0;
	return FoxitQPLAddRelativeLinkToFileEx(instanceID, Left, Top, Width, 
		Height, WideStringParm(FileName), DestPage, NewWindow, Options, Zoom, 
		DestType, DestLeft, DestTop, DestRight, DestBottom);
}

int FoxitQPLLinuxCPP1811::AddRelativeLinkToLocalFile(double Left, double Top, double Width, double Height, const std::wstring& FileName, int Options)
{
	if (loadError) return 0;
	return FoxitQPLAddRelativeLinkToLocalFile(instanceID, Left, Top, Width, 
		Height, WideStringParm(FileName), Options);
}

int FoxitQPLLinuxCPP1811::AddSVGAnnotationFromFile(double Left, double Top, double Width, double Height, const std::wstring& FileName, int Options)
{
	if (loadError) return 0;
	return FoxitQPLAddSVGAnnotationFromFile(instanceID, Left, Top, Width, 
		Height, WideStringParm(FileName), Options);
}

int FoxitQPLLinuxCPP1811::AddSWFAnnotationFromFile(double Left, double Top, double Width, double Height, const std::wstring& FileName, const std::wstring& Title, int Options)
{
	if (loadError) return 0;
	return FoxitQPLAddSWFAnnotationFromFile(instanceID, Left, Top, Width, 
		Height, WideStringParm(FileName), WideStringParm(Title), Options);
}

int FoxitQPLLinuxCPP1811::AddSeparationColor(const std::wstring& ColorName, double C, double M, double Y, double K, int Options)
{
	if (loadError) return 0;
	return FoxitQPLAddSeparationColor(instanceID, WideStringParm(ColorName), 
		C, M, Y, K, Options);
}

int FoxitQPLLinuxCPP1811::AddSignProcessOverlayText(int SignProcessID, double XPos, double YPos, double TextSize, const std::wstring& LayerName, const std::wstring& OverlayText)
{
	if (loadError) return 0;
	return FoxitQPLAddSignProcessOverlayText(instanceID, SignProcessID, XPos, 
		YPos, TextSize, WideStringParm(LayerName), WideStringParm(OverlayText));
}

int FoxitQPLLinuxCPP1811::AddStampAnnotation(double Left, double Top, double Width, double Height, int StampType, const std::wstring& Title, const std::wstring& Contents, double Red, double Green, double Blue, int Options)
{
	if (loadError) return 0;
	return FoxitQPLAddStampAnnotation(instanceID, Left, Top, Width, Height, 
		StampType, WideStringParm(Title), WideStringParm(Contents), Red, Green, 
		Blue, Options);
}

int FoxitQPLLinuxCPP1811::AddStampAnnotationFromImage(double Left, double Top, double Width, double Height, const std::wstring& FileName, const std::wstring& Title, const std::wstring& Contents, double Red, double Green, double Blue, int Options)
{
	if (loadError) return 0;
	return FoxitQPLAddStampAnnotationFromImage(instanceID, Left, Top, Width, 
		Height, WideStringParm(FileName), WideStringParm(Title), 
		WideStringParm(Contents), Red, Green, Blue, Options);
}

int FoxitQPLLinuxCPP1811::AddStampAnnotationFromImageID(double Left, double Top, double Width, double Height, int ImageID, const std::wstring& Title, const std::wstring& Contents, double Red, double Green, double Blue, int Options)
{
	if (loadError) return 0;
	return FoxitQPLAddStampAnnotationFromImageID(instanceID, Left, Top, 
		Width, Height, ImageID, WideStringParm(Title), WideStringParm(Contents), 
		Red, Green, Blue, Options);
}

int FoxitQPLLinuxCPP1811::AddStandardFont(int StandardFontID)
{
	if (loadError) return 0;
	return FoxitQPLAddStandardFont(instanceID, StandardFontID);
}

int FoxitQPLLinuxCPP1811::AddSubsettedFont(const std::wstring& FontName, int CharsetIndex, const std::wstring& SubsetChars)
{
	if (loadError) return 0;
	return FoxitQPLAddSubsettedFont(instanceID, WideStringParm(FontName), 
		CharsetIndex, WideStringParm(SubsetChars));
}

int FoxitQPLLinuxCPP1811::AddTextMarkupAnnotation(int MarkupType, double Left, double Top, double Width, double Height)
{
	if (loadError) return 0;
	return FoxitQPLAddTextMarkupAnnotation(instanceID, MarkupType, Left, Top, 
		Width, Height);
}

int FoxitQPLLinuxCPP1811::AddToFileList(const std::wstring& ListName, const std::wstring& FileName)
{
	if (loadError) return 0;
	return FoxitQPLAddToFileList(instanceID, WideStringParm(ListName), 
		WideStringParm(FileName));
}

int FoxitQPLLinuxCPP1811::AddTrueTypeFont(const std::wstring& FontName, int Embed)
{
	if (loadError) return 0;
	return FoxitQPLAddTrueTypeFont(instanceID, WideStringParm(FontName), 
		Embed);
}

int FoxitQPLLinuxCPP1811::AddTrueTypeFontFromFile(const std::wstring& FileName)
{
	if (loadError) return 0;
	return FoxitQPLAddTrueTypeFontFromFile(instanceID, 
		WideStringParm(FileName));
}

int FoxitQPLLinuxCPP1811::AddTrueTypeFontFromString(const std::string& Source)
{
	if (loadError) return 0;
	int sb1;
	char* sp1 = StringParm(Source, sb1);
	int result;
	result = FoxitQPLAddTrueTypeFontFromString(instanceID, sp1);
	if (sb1 == 1) FoxitQPLReleaseBuffer(instanceID, sp1);
	return result;
}

int FoxitQPLLinuxCPP1811::AddTrueTypeFontFromStringEx(const std::string& Source, int Options)
{
	if (loadError) return 0;
	int sb1;
	char* sp1 = StringParm(Source, sb1);
	int result;
	result = FoxitQPLAddTrueTypeFontFromStringEx(instanceID, sp1, Options);
	if (sb1 == 1) FoxitQPLReleaseBuffer(instanceID, sp1);
	return result;
}

int FoxitQPLLinuxCPP1811::AddTrueTypeSubsettedFont(const std::wstring& FontName, const std::wstring& SubsetChars, int Options)
{
	if (loadError) return 0;
	return FoxitQPLAddTrueTypeSubsettedFont(instanceID, 
		WideStringParm(FontName), WideStringParm(SubsetChars), Options);
}

int FoxitQPLLinuxCPP1811::AddTrueTypeSubsettedFontFromFile(const std::wstring& FileName, const std::wstring& SubsetChars, int Options)
{
	if (loadError) return 0;
	return FoxitQPLAddTrueTypeSubsettedFontFromFile(instanceID, 
		WideStringParm(FileName), WideStringParm(SubsetChars), Options);
}

int FoxitQPLLinuxCPP1811::AddTrueTypeSubsettedFontFromString(const std::string& Source, const std::wstring& SubsetChars, int Options)
{
	if (loadError) return 0;
	int sb1;
	char* sp1 = StringParm(Source, sb1);
	int result;
	result = FoxitQPLAddTrueTypeSubsettedFontFromString(instanceID, sp1, 
		WideStringParm(SubsetChars), Options);
	if (sb1 == 1) FoxitQPLReleaseBuffer(instanceID, sp1);
	return result;
}

int FoxitQPLLinuxCPP1811::AddType1Font(const std::wstring& FileName)
{
	if (loadError) return 0;
	return FoxitQPLAddType1Font(instanceID, WideStringParm(FileName));
}

int FoxitQPLLinuxCPP1811::AddU3DAnnotationFromFile(double Left, double Top, double Width, double Height, const std::wstring& FileName, int Options)
{
	if (loadError) return 0;
	return FoxitQPLAddU3DAnnotationFromFile(instanceID, Left, Top, Width, 
		Height, WideStringParm(FileName), Options);
}

int FoxitQPLLinuxCPP1811::AnalyseFile(const std::wstring& InputFileName, const std::wstring& Password)
{
	if (loadError) return 0;
	return FoxitQPLAnalyseFile(instanceID, WideStringParm(InputFileName), 
		WideStringParm(Password));
}

int FoxitQPLLinuxCPP1811::AnnotationCount()
{
	if (loadError) return 0;
	return FoxitQPLAnnotationCount(instanceID);
}

int FoxitQPLLinuxCPP1811::AppendSpace(double RelativeSpace)
{
	if (loadError) return 0;
	return FoxitQPLAppendSpace(instanceID, RelativeSpace);
}

int FoxitQPLLinuxCPP1811::AppendTableColumns(int TableID, int NewColumnCount)
{
	if (loadError) return 0;
	return FoxitQPLAppendTableColumns(instanceID, TableID, NewColumnCount);
}

int FoxitQPLLinuxCPP1811::AppendTableRows(int TableID, int NewRowCount)
{
	if (loadError) return 0;
	return FoxitQPLAppendTableRows(instanceID, TableID, NewRowCount);
}

int FoxitQPLLinuxCPP1811::AppendText(const std::wstring& Text)
{
	if (loadError) return 0;
	return FoxitQPLAppendText(instanceID, WideStringParm(Text));
}

int FoxitQPLLinuxCPP1811::AppendToFile(const std::wstring& FileName)
{
	if (loadError) return 0;
	return FoxitQPLAppendToFile(instanceID, WideStringParm(FileName));
}

std::string FoxitQPLLinuxCPP1811::AppendToString(int AppendMode)
{
	if (loadError) return "";
	char* result;
	result = FoxitQPLAppendToString(instanceID, AppendMode);
	std::string resultStr(result, FoxitQPLAnsiStringResultLength(instanceID));
	return resultStr;
}

int FoxitQPLLinuxCPP1811::ApplyStyle(const std::wstring& StyleName)
{
	if (loadError) return 0;
	return FoxitQPLApplyStyle(instanceID, WideStringParm(StyleName));
}

int FoxitQPLLinuxCPP1811::AttachAnnotToForm(int Index)
{
	if (loadError) return 0;
	return FoxitQPLAttachAnnotToForm(instanceID, Index);
}

int FoxitQPLLinuxCPP1811::BalanceContentStream()
{
	if (loadError) return 0;
	return FoxitQPLBalanceContentStream(instanceID);
}

int FoxitQPLLinuxCPP1811::BalancePageTree(int Options)
{
	if (loadError) return 0;
	return FoxitQPLBalancePageTree(instanceID, Options);
}

int FoxitQPLLinuxCPP1811::BeginPageUpdate()
{
	if (loadError) return 0;
	return FoxitQPLBeginPageUpdate(instanceID);
}

int FoxitQPLLinuxCPP1811::CapturePage(int Page)
{
	if (loadError) return 0;
	return FoxitQPLCapturePage(instanceID, Page);
}

int FoxitQPLLinuxCPP1811::CapturePageEx(int Page, int Options)
{
	if (loadError) return 0;
	return FoxitQPLCapturePageEx(instanceID, Page, Options);
}

int FoxitQPLLinuxCPP1811::CharWidth(int CharCode)
{
	if (loadError) return 0;
	return FoxitQPLCharWidth(instanceID, CharCode);
}

int FoxitQPLLinuxCPP1811::CheckFileCompliance(const std::wstring& InputFileName, const std::wstring& Password, int ComplianceTest, int Options)
{
	if (loadError) return 0;
	return FoxitQPLCheckFileCompliance(instanceID, 
		WideStringParm(InputFileName), WideStringParm(Password), ComplianceTest, 
		Options);
}

int FoxitQPLLinuxCPP1811::CheckObjects()
{
	if (loadError) return 0;
	return FoxitQPLCheckObjects(instanceID);
}

int FoxitQPLLinuxCPP1811::CheckPageAnnots()
{
	if (loadError) return 0;
	return FoxitQPLCheckPageAnnots(instanceID);
}

int FoxitQPLLinuxCPP1811::CheckPassword(const std::wstring& Password)
{
	if (loadError) return 0;
	return FoxitQPLCheckPassword(instanceID, WideStringParm(Password));
}

int FoxitQPLLinuxCPP1811::ClearFileList(const std::wstring& ListName)
{
	if (loadError) return 0;
	return FoxitQPLClearFileList(instanceID, WideStringParm(ListName));
}

int FoxitQPLLinuxCPP1811::ClearImage(int ImageID)
{
	if (loadError) return 0;
	return FoxitQPLClearImage(instanceID, ImageID);
}

int FoxitQPLLinuxCPP1811::ClearPageLabels()
{
	if (loadError) return 0;
	return FoxitQPLClearPageLabels(instanceID);
}

int FoxitQPLLinuxCPP1811::ClearTextFormatting()
{
	if (loadError) return 0;
	return FoxitQPLClearTextFormatting(instanceID);
}

int FoxitQPLLinuxCPP1811::CloneOutlineAction(int OutlineID)
{
	if (loadError) return 0;
	return FoxitQPLCloneOutlineAction(instanceID, OutlineID);
}

int FoxitQPLLinuxCPP1811::ClonePages(int StartPage, int EndPage, int RepeatCount)
{
	if (loadError) return 0;
	return FoxitQPLClonePages(instanceID, StartPage, EndPage, RepeatCount);
}

int FoxitQPLLinuxCPP1811::CloseOutline(int OutlineID)
{
	if (loadError) return 0;
	return FoxitQPLCloseOutline(instanceID, OutlineID);
}

int FoxitQPLLinuxCPP1811::ClosePath()
{
	if (loadError) return 0;
	return FoxitQPLClosePath(instanceID);
}

int FoxitQPLLinuxCPP1811::CombineContentStreams()
{
	if (loadError) return 0;
	return FoxitQPLCombineContentStreams(instanceID);
}

int FoxitQPLLinuxCPP1811::CompareOutlines(int FirstOutlineID, int SecondOutlineID)
{
	if (loadError) return 0;
	return FoxitQPLCompareOutlines(instanceID, FirstOutlineID, 
		SecondOutlineID);
}

int FoxitQPLLinuxCPP1811::CompressContent()
{
	if (loadError) return 0;
	return FoxitQPLCompressContent(instanceID);
}

int FoxitQPLLinuxCPP1811::CompressFonts(int Compress)
{
	if (loadError) return 0;
	return FoxitQPLCompressFonts(instanceID, Compress);
}

int FoxitQPLLinuxCPP1811::CompressImages(int Compress)
{
	if (loadError) return 0;
	return FoxitQPLCompressImages(instanceID, Compress);
}

int FoxitQPLLinuxCPP1811::CompressPage()
{
	if (loadError) return 0;
	return FoxitQPLCompressPage(instanceID);
}

int FoxitQPLLinuxCPP1811::ContentStreamCount()
{
	if (loadError) return 0;
	return FoxitQPLContentStreamCount(instanceID);
}

int FoxitQPLLinuxCPP1811::ContentStreamSafe()
{
	if (loadError) return 0;
	return FoxitQPLContentStreamSafe(instanceID);
}

int FoxitQPLLinuxCPP1811::CopyPageRanges(int DocumentID, const std::wstring& RangeList)
{
	if (loadError) return 0;
	return FoxitQPLCopyPageRanges(instanceID, DocumentID, 
		WideStringParm(RangeList));
}

int FoxitQPLLinuxCPP1811::CopyPageRangesEx(int DocumentID, const std::wstring& RangeList, int Options)
{
	if (loadError) return 0;
	return FoxitQPLCopyPageRangesEx(instanceID, DocumentID, 
		WideStringParm(RangeList), Options);
}

int FoxitQPLLinuxCPP1811::CreateNewObject()
{
	if (loadError) return 0;
	return FoxitQPLCreateNewObject(instanceID);
}

int FoxitQPLLinuxCPP1811::CreateTable(int RowCount, int ColumnCount)
{
	if (loadError) return 0;
	return FoxitQPLCreateTable(instanceID, RowCount, ColumnCount);
}

int FoxitQPLLinuxCPP1811::DAAppendFile(int FileHandle)
{
	if (loadError) return 0;
	return FoxitQPLDAAppendFile(instanceID, FileHandle);
}

int FoxitQPLLinuxCPP1811::DACapturePage(int FileHandle, int PageRef)
{
	if (loadError) return 0;
	return FoxitQPLDACapturePage(instanceID, FileHandle, PageRef);
}

int FoxitQPLLinuxCPP1811::DACapturePageEx(int FileHandle, int PageRef, int Options)
{
	if (loadError) return 0;
	return FoxitQPLDACapturePageEx(instanceID, FileHandle, PageRef, Options);
}

int FoxitQPLLinuxCPP1811::DACloseFile(int FileHandle)
{
	if (loadError) return 0;
	return FoxitQPLDACloseFile(instanceID, FileHandle);
}

int FoxitQPLLinuxCPP1811::DADrawCapturedPage(int FileHandle, int DACaptureID, int DestPageRef, double Left, double Bottom, double Width, double Height)
{
	if (loadError) return 0;
	return FoxitQPLDADrawCapturedPage(instanceID, FileHandle, DACaptureID, 
		DestPageRef, Left, Bottom, Width, Height);
}

int FoxitQPLLinuxCPP1811::DADrawRotatedCapturedPage(int FileHandle, int DACaptureID, int DestPageRef, double Left, double Bottom, double Width, double Height, double Angle)
{
	if (loadError) return 0;
	return FoxitQPLDADrawRotatedCapturedPage(instanceID, FileHandle, 
		DACaptureID, DestPageRef, Left, Bottom, Width, Height, Angle);
}

int FoxitQPLLinuxCPP1811::DAEmbedFileStreams(int FileHandle, const std::wstring& RootPath)
{
	if (loadError) return 0;
	return FoxitQPLDAEmbedFileStreams(instanceID, FileHandle, 
		WideStringParm(RootPath));
}

std::wstring FoxitQPLLinuxCPP1811::DAExtractPageText(int FileHandle, int PageRef, int Options)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLDAExtractPageText(instanceID, FileHandle, PageRef, 
		Options);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

int FoxitQPLLinuxCPP1811::DAExtractPageTextBlocks(int FileHandle, int PageRef, int ExtractOptions)
{
	if (loadError) return 0;
	return FoxitQPLDAExtractPageTextBlocks(instanceID, FileHandle, PageRef, 
		ExtractOptions);
}

int FoxitQPLLinuxCPP1811::DAFindPage(int FileHandle, int Page)
{
	if (loadError) return 0;
	return FoxitQPLDAFindPage(instanceID, FileHandle, Page);
}

int FoxitQPLLinuxCPP1811::DAGetAnnotationCount(int FileHandle, int PageRef)
{
	if (loadError) return 0;
	return FoxitQPLDAGetAnnotationCount(instanceID, FileHandle, PageRef);
}

int FoxitQPLLinuxCPP1811::DAGetFormFieldCount(int FileHandle)
{
	if (loadError) return 0;
	return FoxitQPLDAGetFormFieldCount(instanceID, FileHandle);
}

std::wstring FoxitQPLLinuxCPP1811::DAGetFormFieldTitle(int FileHandle, int FieldIndex)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLDAGetFormFieldTitle(instanceID, FileHandle, FieldIndex);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

std::wstring FoxitQPLLinuxCPP1811::DAGetFormFieldValue(int FileHandle, int FieldIndex)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLDAGetFormFieldValue(instanceID, FileHandle, FieldIndex);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

std::string FoxitQPLLinuxCPP1811::DAGetImageDataToString(int FileHandle, int ImageListID, int ImageIndex)
{
	if (loadError) return "";
	char* result;
	result = FoxitQPLDAGetImageDataToString(instanceID, FileHandle, 
		ImageListID, ImageIndex);
	std::string resultStr(result, FoxitQPLAnsiStringResultLength(instanceID));
	return resultStr;
}

double FoxitQPLLinuxCPP1811::DAGetImageDblProperty(int FileHandle, int ImageListID, int ImageIndex, int PropertyID)
{
	if (loadError) return 0;
	return FoxitQPLDAGetImageDblProperty(instanceID, FileHandle, ImageListID, 
		ImageIndex, PropertyID);
}

int FoxitQPLLinuxCPP1811::DAGetImageIntProperty(int FileHandle, int ImageListID, int ImageIndex, int PropertyID)
{
	if (loadError) return 0;
	return FoxitQPLDAGetImageIntProperty(instanceID, FileHandle, ImageListID, 
		ImageIndex, PropertyID);
}

int FoxitQPLLinuxCPP1811::DAGetImageListCount(int FileHandle, int ImageListID)
{
	if (loadError) return 0;
	return FoxitQPLDAGetImageListCount(instanceID, FileHandle, ImageListID);
}

std::wstring FoxitQPLLinuxCPP1811::DAGetInformation(int FileHandle, const std::wstring& Key)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLDAGetInformation(instanceID, FileHandle, 
		WideStringParm(Key));
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

int FoxitQPLLinuxCPP1811::DAGetObjectCount(int FileHandle)
{
	if (loadError) return 0;
	return FoxitQPLDAGetObjectCount(instanceID, FileHandle);
}

std::string FoxitQPLLinuxCPP1811::DAGetObjectToString(int FileHandle, int ObjectNumber)
{
	if (loadError) return "";
	char* result;
	result = FoxitQPLDAGetObjectToString(instanceID, FileHandle, 
		ObjectNumber);
	std::string resultStr(result, FoxitQPLAnsiStringResultLength(instanceID));
	return resultStr;
}

double FoxitQPLLinuxCPP1811::DAGetPageBox(int FileHandle, int PageRef, int BoxIndex, int Dimension)
{
	if (loadError) return 0;
	return FoxitQPLDAGetPageBox(instanceID, FileHandle, PageRef, BoxIndex, 
		Dimension);
}

std::string FoxitQPLLinuxCPP1811::DAGetPageContentToString(int FileHandle, int PageRef)
{
	if (loadError) return "";
	char* result;
	result = FoxitQPLDAGetPageContentToString(instanceID, FileHandle, 
		PageRef);
	std::string resultStr(result, FoxitQPLAnsiStringResultLength(instanceID));
	return resultStr;
}

int FoxitQPLLinuxCPP1811::DAGetPageCount(int FileHandle)
{
	if (loadError) return 0;
	return FoxitQPLDAGetPageCount(instanceID, FileHandle);
}

double FoxitQPLLinuxCPP1811::DAGetPageHeight(int FileHandle, int PageRef)
{
	if (loadError) return 0;
	return FoxitQPLDAGetPageHeight(instanceID, FileHandle, PageRef);
}

int FoxitQPLLinuxCPP1811::DAGetPageImageList(int FileHandle, int PageRef)
{
	if (loadError) return 0;
	return FoxitQPLDAGetPageImageList(instanceID, FileHandle, PageRef);
}

int FoxitQPLLinuxCPP1811::DAGetPageLayout(int FileHandle)
{
	if (loadError) return 0;
	return FoxitQPLDAGetPageLayout(instanceID, FileHandle);
}

int FoxitQPLLinuxCPP1811::DAGetPageMode(int FileHandle)
{
	if (loadError) return 0;
	return FoxitQPLDAGetPageMode(instanceID, FileHandle);
}

double FoxitQPLLinuxCPP1811::DAGetPageWidth(int FileHandle, int PageRef)
{
	if (loadError) return 0;
	return FoxitQPLDAGetPageWidth(instanceID, FileHandle, PageRef);
}

std::wstring FoxitQPLLinuxCPP1811::DAGetTextBlockAsString(int TextBlockListID, int Index)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLDAGetTextBlockAsString(instanceID, TextBlockListID, 
		Index);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

double FoxitQPLLinuxCPP1811::DAGetTextBlockBound(int TextBlockListID, int Index, int BoundIndex)
{
	if (loadError) return 0;
	return FoxitQPLDAGetTextBlockBound(instanceID, TextBlockListID, Index, 
		BoundIndex);
}

double FoxitQPLLinuxCPP1811::DAGetTextBlockCharWidth(int TextBlockListID, int Index, int CharIndex)
{
	if (loadError) return 0;
	return FoxitQPLDAGetTextBlockCharWidth(instanceID, TextBlockListID, 
		Index, CharIndex);
}

double FoxitQPLLinuxCPP1811::DAGetTextBlockColor(int TextBlockListID, int Index, int ColorComponent)
{
	if (loadError) return 0;
	return FoxitQPLDAGetTextBlockColor(instanceID, TextBlockListID, Index, 
		ColorComponent);
}

int FoxitQPLLinuxCPP1811::DAGetTextBlockColorType(int TextBlockListID, int Index)
{
	if (loadError) return 0;
	return FoxitQPLDAGetTextBlockColorType(instanceID, TextBlockListID, 
		Index);
}

int FoxitQPLLinuxCPP1811::DAGetTextBlockCount(int TextBlockListID)
{
	if (loadError) return 0;
	return FoxitQPLDAGetTextBlockCount(instanceID, TextBlockListID);
}

std::wstring FoxitQPLLinuxCPP1811::DAGetTextBlockFontName(int TextBlockListID, int Index)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLDAGetTextBlockFontName(instanceID, TextBlockListID, 
		Index);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

double FoxitQPLLinuxCPP1811::DAGetTextBlockFontSize(int TextBlockListID, int Index)
{
	if (loadError) return 0;
	return FoxitQPLDAGetTextBlockFontSize(instanceID, TextBlockListID, Index);
}

std::wstring FoxitQPLLinuxCPP1811::DAGetTextBlockText(int TextBlockListID, int Index)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLDAGetTextBlockText(instanceID, TextBlockListID, Index);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

int FoxitQPLLinuxCPP1811::DAHasPageBox(int FileHandle, int PageRef, int BoxIndex)
{
	if (loadError) return 0;
	return FoxitQPLDAHasPageBox(instanceID, FileHandle, PageRef, BoxIndex);
}

int FoxitQPLLinuxCPP1811::DAHidePage(int FileHandle, int PageRef)
{
	if (loadError) return 0;
	return FoxitQPLDAHidePage(instanceID, FileHandle, PageRef);
}

int FoxitQPLLinuxCPP1811::DAMovePage(int FileHandle, int PageRef, int TargetPageRef, int Options)
{
	if (loadError) return 0;
	return FoxitQPLDAMovePage(instanceID, FileHandle, PageRef, TargetPageRef, 
		Options);
}

int FoxitQPLLinuxCPP1811::DANewPage(int FileHandle)
{
	if (loadError) return 0;
	return FoxitQPLDANewPage(instanceID, FileHandle);
}

int FoxitQPLLinuxCPP1811::DANewPages(int FileHandle, int PageCount)
{
	if (loadError) return 0;
	return FoxitQPLDANewPages(instanceID, FileHandle, PageCount);
}

int FoxitQPLLinuxCPP1811::DANormalizePage(int FileHandle, int PageRef, int NormalizeOptions)
{
	if (loadError) return 0;
	return FoxitQPLDANormalizePage(instanceID, FileHandle, PageRef, 
		NormalizeOptions);
}

int FoxitQPLLinuxCPP1811::DAOpenFile(const std::wstring& InputFileName, const std::wstring& Password)
{
	if (loadError) return 0;
	return FoxitQPLDAOpenFile(instanceID, WideStringParm(InputFileName), 
		WideStringParm(Password));
}

int FoxitQPLLinuxCPP1811::DAOpenFileReadOnly(const std::wstring& InputFileName, const std::wstring& Password)
{
	if (loadError) return 0;
	return FoxitQPLDAOpenFileReadOnly(instanceID, 
		WideStringParm(InputFileName), WideStringParm(Password));
}

int FoxitQPLLinuxCPP1811::DAPageRotation(int FileHandle, int PageRef)
{
	if (loadError) return 0;
	return FoxitQPLDAPageRotation(instanceID, FileHandle, PageRef);
}

int FoxitQPLLinuxCPP1811::DAReleaseImageList(int FileHandle, int ImageListID)
{
	if (loadError) return 0;
	return FoxitQPLDAReleaseImageList(instanceID, FileHandle, ImageListID);
}

int FoxitQPLLinuxCPP1811::DAReleaseTextBlocks(int TextBlockListID)
{
	if (loadError) return 0;
	return FoxitQPLDAReleaseTextBlocks(instanceID, TextBlockListID);
}

int FoxitQPLLinuxCPP1811::DARemoveUsageRights(int FileHandle)
{
	if (loadError) return 0;
	return FoxitQPLDARemoveUsageRights(instanceID, FileHandle);
}

int FoxitQPLLinuxCPP1811::DARenderPageToFile(int FileHandle, int PageRef, int Options, double DPI, const std::wstring& FileName)
{
	if (loadError) return 0;
	return FoxitQPLDARenderPageToFile(instanceID, FileHandle, PageRef, 
		Options, DPI, WideStringParm(FileName));
}

std::string FoxitQPLLinuxCPP1811::DARenderPageToString(int FileHandle, int PageRef, int Options, double DPI)
{
	if (loadError) return "";
	char* result;
	result = FoxitQPLDARenderPageToString(instanceID, FileHandle, PageRef, 
		Options, DPI);
	std::string resultStr(result, FoxitQPLAnsiStringResultLength(instanceID));
	return resultStr;
}

int FoxitQPLLinuxCPP1811::DARotatePage(int FileHandle, int PageRef, int Angle, int Options)
{
	if (loadError) return 0;
	return FoxitQPLDARotatePage(instanceID, FileHandle, PageRef, Angle, 
		Options);
}

int FoxitQPLLinuxCPP1811::DASaveAsFile(int FileHandle, const std::wstring& OutputFileName)
{
	if (loadError) return 0;
	return FoxitQPLDASaveAsFile(instanceID, FileHandle, 
		WideStringParm(OutputFileName));
}

int FoxitQPLLinuxCPP1811::DASaveImageDataToFile(int FileHandle, int ImageListID, int ImageIndex, const std::wstring& ImageFileName)
{
	if (loadError) return 0;
	return FoxitQPLDASaveImageDataToFile(instanceID, FileHandle, ImageListID, 
		ImageIndex, WideStringParm(ImageFileName));
}

int FoxitQPLLinuxCPP1811::DASetInformation(int FileHandle, const std::wstring& Key, const std::wstring& NewValue)
{
	if (loadError) return 0;
	return FoxitQPLDASetInformation(instanceID, FileHandle, 
		WideStringParm(Key), WideStringParm(NewValue));
}

int FoxitQPLLinuxCPP1811::DASetPageBox(int FileHandle, int PageRef, int BoxIndex, double X1, double Y1, double X2, double Y2)
{
	if (loadError) return 0;
	return FoxitQPLDASetPageBox(instanceID, FileHandle, PageRef, BoxIndex, 
		X1, Y1, X2, Y2);
}

int FoxitQPLLinuxCPP1811::DASetPageLayout(int FileHandle, int NewPageLayout)
{
	if (loadError) return 0;
	return FoxitQPLDASetPageLayout(instanceID, FileHandle, NewPageLayout);
}

int FoxitQPLLinuxCPP1811::DASetPageMode(int FileHandle, int NewPageMode)
{
	if (loadError) return 0;
	return FoxitQPLDASetPageMode(instanceID, FileHandle, NewPageMode);
}

int FoxitQPLLinuxCPP1811::DASetPageSize(int FileHandle, int PageRef, double Width, double Height)
{
	if (loadError) return 0;
	return FoxitQPLDASetPageSize(instanceID, FileHandle, PageRef, Width, 
		Height);
}

int FoxitQPLLinuxCPP1811::DASetRenderArea(double Left, double Top, double Width, double Height)
{
	if (loadError) return 0;
	return FoxitQPLDASetRenderArea(instanceID, Left, Top, Width, Height);
}

int FoxitQPLLinuxCPP1811::DASetTextExtractionArea(double Left, double Top, double Width, double Height)
{
	if (loadError) return 0;
	return FoxitQPLDASetTextExtractionArea(instanceID, Left, Top, Width, 
		Height);
}

int FoxitQPLLinuxCPP1811::DASetTextExtractionOptions(int OptionID, int NewValue)
{
	if (loadError) return 0;
	return FoxitQPLDASetTextExtractionOptions(instanceID, OptionID, NewValue);
}

int FoxitQPLLinuxCPP1811::DASetTextExtractionScaling(int Options, double Horizontal, double Vertical)
{
	if (loadError) return 0;
	return FoxitQPLDASetTextExtractionScaling(instanceID, Options, 
		Horizontal, Vertical);
}

int FoxitQPLLinuxCPP1811::DASetTextExtractionWordGap(double NewWordGap)
{
	if (loadError) return 0;
	return FoxitQPLDASetTextExtractionWordGap(instanceID, NewWordGap);
}

int FoxitQPLLinuxCPP1811::DAShiftedHeader(int FileHandle)
{
	if (loadError) return 0;
	return FoxitQPLDAShiftedHeader(instanceID, FileHandle);
}

int FoxitQPLLinuxCPP1811::Decrypt()
{
	if (loadError) return 0;
	return FoxitQPLDecrypt(instanceID);
}

int FoxitQPLLinuxCPP1811::DecryptFile(const std::wstring& InputFileName, const std::wstring& OutputFileName, const std::wstring& Password)
{
	if (loadError) return 0;
	return FoxitQPLDecryptFile(instanceID, WideStringParm(InputFileName), 
		WideStringParm(OutputFileName), WideStringParm(Password));
}

int FoxitQPLLinuxCPP1811::DeleteAnalysis(int AnalysisID)
{
	if (loadError) return 0;
	return FoxitQPLDeleteAnalysis(instanceID, AnalysisID);
}

int FoxitQPLLinuxCPP1811::DeleteAnnotation(int Index)
{
	if (loadError) return 0;
	return FoxitQPLDeleteAnnotation(instanceID, Index);
}

int FoxitQPLLinuxCPP1811::DeleteContentStream()
{
	if (loadError) return 0;
	return FoxitQPLDeleteContentStream(instanceID);
}

int FoxitQPLLinuxCPP1811::DeleteFormField(int Index)
{
	if (loadError) return 0;
	return FoxitQPLDeleteFormField(instanceID, Index);
}

int FoxitQPLLinuxCPP1811::DeleteOptionalContentGroup(int OptionalContentGroupID)
{
	if (loadError) return 0;
	return FoxitQPLDeleteOptionalContentGroup(instanceID, 
		OptionalContentGroupID);
}

int FoxitQPLLinuxCPP1811::DeletePageLGIDict(int DictIndex)
{
	if (loadError) return 0;
	return FoxitQPLDeletePageLGIDict(instanceID, DictIndex);
}

int FoxitQPLLinuxCPP1811::DeletePages(int StartPage, int PageCount)
{
	if (loadError) return 0;
	return FoxitQPLDeletePages(instanceID, StartPage, PageCount);
}

int FoxitQPLLinuxCPP1811::DocJavaScriptAction(const std::wstring& ActionType, const std::wstring& JavaScript)
{
	if (loadError) return 0;
	return FoxitQPLDocJavaScriptAction(instanceID, 
		WideStringParm(ActionType), WideStringParm(JavaScript));
}

int FoxitQPLLinuxCPP1811::DocumentCount()
{
	if (loadError) return 0;
	return FoxitQPLDocumentCount(instanceID);
}

int FoxitQPLLinuxCPP1811::DrawArc(double XPos, double YPos, double Radius, double StartAngle, double EndAngle, int Pie, int DrawOptions)
{
	if (loadError) return 0;
	return FoxitQPLDrawArc(instanceID, XPos, YPos, Radius, StartAngle, 
		EndAngle, Pie, DrawOptions);
}

int FoxitQPLLinuxCPP1811::DrawBarcode(double Left, double Top, double Width, double Height, const std::wstring& Text, int Barcode, int Options)
{
	if (loadError) return 0;
	return FoxitQPLDrawBarcode(instanceID, Left, Top, Width, Height, 
		WideStringParm(Text), Barcode, Options);
}

int FoxitQPLLinuxCPP1811::DrawBox(double Left, double Top, double Width, double Height, int DrawOptions)
{
	if (loadError) return 0;
	return FoxitQPLDrawBox(instanceID, Left, Top, Width, Height, DrawOptions);
}

int FoxitQPLLinuxCPP1811::DrawCapturedPage(int CaptureID, double Left, double Top, double Width, double Height)
{
	if (loadError) return 0;
	return FoxitQPLDrawCapturedPage(instanceID, CaptureID, Left, Top, Width, 
		Height);
}

int FoxitQPLLinuxCPP1811::DrawCapturedPageMatrix(int CaptureID, double M11, double M12, double M21, double M22, double MDX, double MDY)
{
	if (loadError) return 0;
	return FoxitQPLDrawCapturedPageMatrix(instanceID, CaptureID, M11, M12, 
		M21, M22, MDX, MDY);
}

int FoxitQPLLinuxCPP1811::DrawCircle(double XPos, double YPos, double Radius, int DrawOptions)
{
	if (loadError) return 0;
	return FoxitQPLDrawCircle(instanceID, XPos, YPos, Radius, DrawOptions);
}

int FoxitQPLLinuxCPP1811::DrawDataMatrixSymbol(double Left, double Top, double ModuleSize, const std::wstring& Text, int Encoding, int SymbolSize, int Options)
{
	if (loadError) return 0;
	return FoxitQPLDrawDataMatrixSymbol(instanceID, Left, Top, ModuleSize, 
		WideStringParm(Text), Encoding, SymbolSize, Options);
}

int FoxitQPLLinuxCPP1811::DrawEllipse(double XPos, double YPos, double Width, double Height, int DrawOptions)
{
	if (loadError) return 0;
	return FoxitQPLDrawEllipse(instanceID, XPos, YPos, Width, Height, 
		DrawOptions);
}

int FoxitQPLLinuxCPP1811::DrawEllipticArc(double XPos, double YPos, double Width, double Height, double StartAngle, double EndAngle, int Pie, int DrawOptions)
{
	if (loadError) return 0;
	return FoxitQPLDrawEllipticArc(instanceID, XPos, YPos, Width, Height, 
		StartAngle, EndAngle, Pie, DrawOptions);
}

int FoxitQPLLinuxCPP1811::DrawHTMLText(double Left, double Top, double Width, const std::wstring& HTMLText)
{
	if (loadError) return 0;
	return FoxitQPLDrawHTMLText(instanceID, Left, Top, Width, 
		WideStringParm(HTMLText));
}

std::wstring FoxitQPLLinuxCPP1811::DrawHTMLTextBox(double Left, double Top, double Width, double Height, const std::wstring& HTMLText)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLDrawHTMLTextBox(instanceID, Left, Top, Width, Height, 
		WideStringParm(HTMLText));
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

std::wstring FoxitQPLLinuxCPP1811::DrawHTMLTextBoxMatrix(double Width, double Height, const std::wstring& HTMLText, double M11, double M12, double M21, double M22, double MDX, double MDY)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLDrawHTMLTextBoxMatrix(instanceID, Width, Height, 
		WideStringParm(HTMLText), M11, M12, M21, M22, MDX, MDY);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

int FoxitQPLLinuxCPP1811::DrawHTMLTextMatrix(double Width, const std::wstring& HTMLText, double M11, double M12, double M21, double M22, double MDX, double MDY)
{
	if (loadError) return 0;
	return FoxitQPLDrawHTMLTextMatrix(instanceID, Width, 
		WideStringParm(HTMLText), M11, M12, M21, M22, MDX, MDY);
}

int FoxitQPLLinuxCPP1811::DrawImage(double Left, double Top, double Width, double Height)
{
	if (loadError) return 0;
	return FoxitQPLDrawImage(instanceID, Left, Top, Width, Height);
}

int FoxitQPLLinuxCPP1811::DrawImageMatrix(double M11, double M12, double M21, double M22, double MDX, double MDY)
{
	if (loadError) return 0;
	return FoxitQPLDrawImageMatrix(instanceID, M11, M12, M21, M22, MDX, MDY);
}

int FoxitQPLLinuxCPP1811::DrawIntelligentMailBarcode(double Left, double Top, double BarWidth, double FullBarHeight, double TrackerHeight, double SpaceWidth, const std::wstring& BarcodeData, int Options)
{
	if (loadError) return 0;
	return FoxitQPLDrawIntelligentMailBarcode(instanceID, Left, Top, 
		BarWidth, FullBarHeight, TrackerHeight, SpaceWidth, 
		WideStringParm(BarcodeData), Options);
}

int FoxitQPLLinuxCPP1811::DrawLine(double StartX, double StartY, double EndX, double EndY)
{
	if (loadError) return 0;
	return FoxitQPLDrawLine(instanceID, StartX, StartY, EndX, EndY);
}

int FoxitQPLLinuxCPP1811::DrawMultiLineText(double XPos, double YPos, const std::wstring& Delimiter, const std::wstring& Text)
{
	if (loadError) return 0;
	return FoxitQPLDrawMultiLineText(instanceID, XPos, YPos, 
		WideStringParm(Delimiter), WideStringParm(Text));
}

int FoxitQPLLinuxCPP1811::DrawPDF417Symbol(double Left, double Top, const std::wstring& Text, int Options)
{
	if (loadError) return 0;
	return FoxitQPLDrawPDF417Symbol(instanceID, Left, Top, 
		WideStringParm(Text), Options);
}

int FoxitQPLLinuxCPP1811::DrawPDF417SymbolEx(double Left, double Top, const std::wstring& Text, int Options, int FixedColumns, int FixedRows, int ErrorLevel, double ModuleSize, double HeightWidthRatio)
{
	if (loadError) return 0;
	return FoxitQPLDrawPDF417SymbolEx(instanceID, Left, Top, 
		WideStringParm(Text), Options, FixedColumns, FixedRows, ErrorLevel, 
		ModuleSize, HeightWidthRatio);
}

int FoxitQPLLinuxCPP1811::DrawPath(int PathOptions)
{
	if (loadError) return 0;
	return FoxitQPLDrawPath(instanceID, PathOptions);
}

int FoxitQPLLinuxCPP1811::DrawPathEvenOdd(int PathOptions)
{
	if (loadError) return 0;
	return FoxitQPLDrawPathEvenOdd(instanceID, PathOptions);
}

int FoxitQPLLinuxCPP1811::DrawPostScriptXObject(int PSRef)
{
	if (loadError) return 0;
	return FoxitQPLDrawPostScriptXObject(instanceID, PSRef);
}

int FoxitQPLLinuxCPP1811::DrawQRCode(double Left, double Top, double SymbolSize, const std::wstring& Text, int EncodeOptions, int DrawOptions)
{
	if (loadError) return 0;
	return FoxitQPLDrawQRCode(instanceID, Left, Top, SymbolSize, 
		WideStringParm(Text), EncodeOptions, DrawOptions);
}

int FoxitQPLLinuxCPP1811::DrawRotatedBox(double Left, double Bottom, double Width, double Height, double Angle, int DrawOptions)
{
	if (loadError) return 0;
	return FoxitQPLDrawRotatedBox(instanceID, Left, Bottom, Width, Height, 
		Angle, DrawOptions);
}

int FoxitQPLLinuxCPP1811::DrawRotatedCapturedPage(int CaptureID, double Left, double Bottom, double Width, double Height, double Angle)
{
	if (loadError) return 0;
	return FoxitQPLDrawRotatedCapturedPage(instanceID, CaptureID, Left, 
		Bottom, Width, Height, Angle);
}

int FoxitQPLLinuxCPP1811::DrawRotatedImage(double Left, double Bottom, double Width, double Height, double Angle)
{
	if (loadError) return 0;
	return FoxitQPLDrawRotatedImage(instanceID, Left, Bottom, Width, Height, 
		Angle);
}

int FoxitQPLLinuxCPP1811::DrawRotatedMultiLineText(double XPos, double YPos, double Angle, const std::wstring& Delimiter, const std::wstring& Text)
{
	if (loadError) return 0;
	return FoxitQPLDrawRotatedMultiLineText(instanceID, XPos, YPos, Angle, 
		WideStringParm(Delimiter), WideStringParm(Text));
}

int FoxitQPLLinuxCPP1811::DrawRotatedText(double XPos, double YPos, double Angle, const std::wstring& Text)
{
	if (loadError) return 0;
	return FoxitQPLDrawRotatedText(instanceID, XPos, YPos, Angle, 
		WideStringParm(Text));
}

int FoxitQPLLinuxCPP1811::DrawRotatedTextBox(double Left, double Top, double Width, double Height, double Angle, const std::wstring& Text, int Options)
{
	if (loadError) return 0;
	return FoxitQPLDrawRotatedTextBox(instanceID, Left, Top, Width, Height, 
		Angle, WideStringParm(Text), Options);
}

int FoxitQPLLinuxCPP1811::DrawRotatedTextBoxEx(double Left, double Top, double Width, double Height, double Angle, const std::wstring& Text, int Options, int Border, int Radius, int DrawOptions)
{
	if (loadError) return 0;
	return FoxitQPLDrawRotatedTextBoxEx(instanceID, Left, Top, Width, Height, 
		Angle, WideStringParm(Text), Options, Border, Radius, DrawOptions);
}

int FoxitQPLLinuxCPP1811::DrawRoundedBox(double Left, double Top, double Width, double Height, double Radius, int DrawOptions)
{
	if (loadError) return 0;
	return FoxitQPLDrawRoundedBox(instanceID, Left, Top, Width, Height, 
		Radius, DrawOptions);
}

int FoxitQPLLinuxCPP1811::DrawRoundedRotatedBox(double Left, double Bottom, double Width, double Height, double Radius, double Angle, int DrawOptions)
{
	if (loadError) return 0;
	return FoxitQPLDrawRoundedRotatedBox(instanceID, Left, Bottom, Width, 
		Height, Radius, Angle, DrawOptions);
}

int FoxitQPLLinuxCPP1811::DrawScaledImage(double Left, double Top, double Scale)
{
	if (loadError) return 0;
	return FoxitQPLDrawScaledImage(instanceID, Left, Top, Scale);
}

int FoxitQPLLinuxCPP1811::DrawSpacedText(double XPos, double YPos, double Spacing, const std::wstring& Text)
{
	if (loadError) return 0;
	return FoxitQPLDrawSpacedText(instanceID, XPos, YPos, Spacing, 
		WideStringParm(Text));
}

double FoxitQPLLinuxCPP1811::DrawTableRows(int TableID, double Left, double Top, double Height, int FirstRow, int LastRow)
{
	if (loadError) return 0;
	return FoxitQPLDrawTableRows(instanceID, TableID, Left, Top, Height, 
		FirstRow, LastRow);
}

int FoxitQPLLinuxCPP1811::DrawText(double XPos, double YPos, const std::wstring& Text)
{
	if (loadError) return 0;
	return FoxitQPLDrawText(instanceID, XPos, YPos, WideStringParm(Text));
}

int FoxitQPLLinuxCPP1811::DrawTextArc(double XPos, double YPos, double Radius, double Angle, const std::wstring& Text, int DrawOptions)
{
	if (loadError) return 0;
	return FoxitQPLDrawTextArc(instanceID, XPos, YPos, Radius, Angle, 
		WideStringParm(Text), DrawOptions);
}

int FoxitQPLLinuxCPP1811::DrawTextBox(double Left, double Top, double Width, double Height, const std::wstring& Text, int Options)
{
	if (loadError) return 0;
	return FoxitQPLDrawTextBox(instanceID, Left, Top, Width, Height, 
		WideStringParm(Text), Options);
}

int FoxitQPLLinuxCPP1811::DrawTextBoxMatrix(double Width, double Height, const std::wstring& Text, int Options, double M11, double M12, double M21, double M22, double MDX, double MDY)
{
	if (loadError) return 0;
	return FoxitQPLDrawTextBoxMatrix(instanceID, Width, Height, 
		WideStringParm(Text), Options, M11, M12, M21, M22, MDX, MDY);
}

int FoxitQPLLinuxCPP1811::DrawWrappedText(double XPos, double YPos, double Width, const std::wstring& Text)
{
	if (loadError) return 0;
	return FoxitQPLDrawWrappedText(instanceID, XPos, YPos, Width, 
		WideStringParm(Text));
}

int FoxitQPLLinuxCPP1811::EditableContentStream()
{
	if (loadError) return 0;
	return FoxitQPLEditableContentStream(instanceID);
}

int FoxitQPLLinuxCPP1811::EmbedFile(const std::wstring& Title, const std::wstring& FileName, const std::wstring& MIMEType)
{
	if (loadError) return 0;
	return FoxitQPLEmbedFile(instanceID, WideStringParm(Title), 
		WideStringParm(FileName), WideStringParm(MIMEType));
}

int FoxitQPLLinuxCPP1811::EmbedRelatedFile(const std::wstring& Title, const std::wstring& FileName, const std::wstring& MIMEType, const std::wstring& AFRelationship, int Options)
{
	if (loadError) return 0;
	return FoxitQPLEmbedRelatedFile(instanceID, WideStringParm(Title), 
		WideStringParm(FileName), WideStringParm(MIMEType), 
		WideStringParm(AFRelationship), Options);
}

int FoxitQPLLinuxCPP1811::EmbeddedFileCount()
{
	if (loadError) return 0;
	return FoxitQPLEmbeddedFileCount(instanceID);
}

int FoxitQPLLinuxCPP1811::EncapsulateContentStream()
{
	if (loadError) return 0;
	return FoxitQPLEncapsulateContentStream(instanceID);
}

int FoxitQPLLinuxCPP1811::EncodePermissions(int CanPrint, int CanCopy, int CanChange, int CanAddNotes, int CanFillFields, int CanCopyAccess, int CanAssemble, int CanPrintFull)
{
	if (loadError) return 0;
	return FoxitQPLEncodePermissions(instanceID, CanPrint, CanCopy, 
		CanChange, CanAddNotes, CanFillFields, CanCopyAccess, CanAssemble, 
		CanPrintFull);
}

int FoxitQPLLinuxCPP1811::Encrypt(const std::wstring& Owner, const std::wstring& User, int Strength, int Permissions)
{
	if (loadError) return 0;
	return FoxitQPLEncrypt(instanceID, WideStringParm(Owner), 
		WideStringParm(User), Strength, Permissions);
}

int FoxitQPLLinuxCPP1811::EncryptFile(const std::wstring& InputFileName, const std::wstring& OutputFileName, const std::wstring& Owner, const std::wstring& User, int Strength, int Permissions)
{
	if (loadError) return 0;
	return FoxitQPLEncryptFile(instanceID, WideStringParm(InputFileName), 
		WideStringParm(OutputFileName), WideStringParm(Owner), 
		WideStringParm(User), Strength, Permissions);
}

int FoxitQPLLinuxCPP1811::EncryptWithFingerprint(const std::wstring& Fingerprint)
{
	if (loadError) return 0;
	return FoxitQPLEncryptWithFingerprint(instanceID, 
		WideStringParm(Fingerprint));
}

int FoxitQPLLinuxCPP1811::EncryptionAlgorithm()
{
	if (loadError) return 0;
	return FoxitQPLEncryptionAlgorithm(instanceID);
}

int FoxitQPLLinuxCPP1811::EncryptionStatus()
{
	if (loadError) return 0;
	return FoxitQPLEncryptionStatus(instanceID);
}

int FoxitQPLLinuxCPP1811::EncryptionStrength()
{
	if (loadError) return 0;
	return FoxitQPLEncryptionStrength(instanceID);
}

int FoxitQPLLinuxCPP1811::EndPageUpdate()
{
	if (loadError) return 0;
	return FoxitQPLEndPageUpdate(instanceID);
}

int FoxitQPLLinuxCPP1811::EndSignProcessToFile(int SignProcessID, const std::wstring& OutputFile)
{
	if (loadError) return 0;
	return FoxitQPLEndSignProcessToFile(instanceID, SignProcessID, 
		WideStringParm(OutputFile));
}

std::string FoxitQPLLinuxCPP1811::EndSignProcessToString(int SignProcessID)
{
	if (loadError) return "";
	char* result;
	result = FoxitQPLEndSignProcessToString(instanceID, SignProcessID);
	std::string resultStr(result, FoxitQPLAnsiStringResultLength(instanceID));
	return resultStr;
}

std::string FoxitQPLLinuxCPP1811::ExtractFilePageContentToString(const std::wstring& InputFileName, const std::wstring& Password, int Page)
{
	if (loadError) return "";
	char* result;
	result = FoxitQPLExtractFilePageContentToString(instanceID, 
		WideStringParm(InputFileName), WideStringParm(Password), Page);
	std::string resultStr(result, FoxitQPLAnsiStringResultLength(instanceID));
	return resultStr;
}

std::wstring FoxitQPLLinuxCPP1811::ExtractFilePageText(const std::wstring& InputFileName, const std::wstring& Password, int Page, int Options)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLExtractFilePageText(instanceID, 
		WideStringParm(InputFileName), WideStringParm(Password), Page, Options);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

int FoxitQPLLinuxCPP1811::ExtractFilePageTextBlocks(const std::wstring& InputFileName, const std::wstring& Password, int Page, int Options)
{
	if (loadError) return 0;
	return FoxitQPLExtractFilePageTextBlocks(instanceID, 
		WideStringParm(InputFileName), WideStringParm(Password), Page, Options);
}

int FoxitQPLLinuxCPP1811::ExtractFilePages(const std::wstring& InputFileName, const std::wstring& Password, const std::wstring& OutputFileName, const std::wstring& RangeList)
{
	if (loadError) return 0;
	return FoxitQPLExtractFilePages(instanceID, 
		WideStringParm(InputFileName), WideStringParm(Password), 
		WideStringParm(OutputFileName), WideStringParm(RangeList));
}

int FoxitQPLLinuxCPP1811::ExtractFilePagesEx(const std::wstring& InputFileName, const std::wstring& Password, const std::wstring& OutputFileName, const std::wstring& RangeList, int Options)
{
	if (loadError) return 0;
	return FoxitQPLExtractFilePagesEx(instanceID, 
		WideStringParm(InputFileName), WideStringParm(Password), 
		WideStringParm(OutputFileName), WideStringParm(RangeList), Options);
}

int FoxitQPLLinuxCPP1811::ExtractPageRanges(const std::wstring& RangeList)
{
	if (loadError) return 0;
	return FoxitQPLExtractPageRanges(instanceID, WideStringParm(RangeList));
}

int FoxitQPLLinuxCPP1811::ExtractPageTextBlocks(int ExtractOptions)
{
	if (loadError) return 0;
	return FoxitQPLExtractPageTextBlocks(instanceID, ExtractOptions);
}

int FoxitQPLLinuxCPP1811::ExtractPages(int StartPage, int PageCount)
{
	if (loadError) return 0;
	return FoxitQPLExtractPages(instanceID, StartPage, PageCount);
}

int FoxitQPLLinuxCPP1811::FileListCount(const std::wstring& ListName)
{
	if (loadError) return 0;
	return FoxitQPLFileListCount(instanceID, WideStringParm(ListName));
}

std::wstring FoxitQPLLinuxCPP1811::FileListItem(const std::wstring& ListName, int Index)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLFileListItem(instanceID, WideStringParm(ListName), 
		Index);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

int FoxitQPLLinuxCPP1811::FindFonts()
{
	if (loadError) return 0;
	return FoxitQPLFindFonts(instanceID);
}

int FoxitQPLLinuxCPP1811::FindFormFieldByTitle(const std::wstring& Title)
{
	if (loadError) return 0;
	return FoxitQPLFindFormFieldByTitle(instanceID, WideStringParm(Title));
}

int FoxitQPLLinuxCPP1811::FindImages()
{
	if (loadError) return 0;
	return FoxitQPLFindImages(instanceID);
}

int FoxitQPLLinuxCPP1811::FitImage(double Left, double Top, double Width, double Height, int HAlign, int VAlign, int Rotate)
{
	if (loadError) return 0;
	return FoxitQPLFitImage(instanceID, Left, Top, Width, Height, HAlign, 
		VAlign, Rotate);
}

int FoxitQPLLinuxCPP1811::FitRotatedTextBox(double Left, double Top, double Width, double Height, double Angle, const std::wstring& Text, int Options)
{
	if (loadError) return 0;
	return FoxitQPLFitRotatedTextBox(instanceID, Left, Top, Width, Height, 
		Angle, WideStringParm(Text), Options);
}

int FoxitQPLLinuxCPP1811::FitTextBox(double Left, double Top, double Width, double Height, const std::wstring& Text, int Options)
{
	if (loadError) return 0;
	return FoxitQPLFitTextBox(instanceID, Left, Top, Width, Height, 
		WideStringParm(Text), Options);
}

int FoxitQPLLinuxCPP1811::FlattenAllFormFields(int Options)
{
	if (loadError) return 0;
	return FoxitQPLFlattenAllFormFields(instanceID, Options);
}

int FoxitQPLLinuxCPP1811::FlattenAnnot(int Index, int Options)
{
	if (loadError) return 0;
	return FoxitQPLFlattenAnnot(instanceID, Index, Options);
}

int FoxitQPLLinuxCPP1811::FlattenFormField(int Index)
{
	if (loadError) return 0;
	return FoxitQPLFlattenFormField(instanceID, Index);
}

int FoxitQPLLinuxCPP1811::FontCount()
{
	if (loadError) return 0;
	return FoxitQPLFontCount(instanceID);
}

std::wstring FoxitQPLLinuxCPP1811::FontFamily()
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLFontFamily(instanceID);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

int FoxitQPLLinuxCPP1811::FontHasKerning()
{
	if (loadError) return 0;
	return FoxitQPLFontHasKerning(instanceID);
}

std::wstring FoxitQPLLinuxCPP1811::FontName()
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLFontName(instanceID);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

std::wstring FoxitQPLLinuxCPP1811::FontReference()
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLFontReference(instanceID);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

int FoxitQPLLinuxCPP1811::FontSize()
{
	if (loadError) return 0;
	return FoxitQPLFontSize(instanceID);
}

int FoxitQPLLinuxCPP1811::FontType()
{
	if (loadError) return 0;
	return FoxitQPLFontType(instanceID);
}

int FoxitQPLLinuxCPP1811::FormFieldCount()
{
	if (loadError) return 0;
	return FoxitQPLFormFieldCount(instanceID);
}

int FoxitQPLLinuxCPP1811::FormFieldHasParent(int Index)
{
	if (loadError) return 0;
	return FoxitQPLFormFieldHasParent(instanceID, Index);
}

int FoxitQPLLinuxCPP1811::FormFieldJavaScriptAction(int Index, const std::wstring& ActionType, const std::wstring& JavaScript)
{
	if (loadError) return 0;
	return FoxitQPLFormFieldJavaScriptAction(instanceID, Index, 
		WideStringParm(ActionType), WideStringParm(JavaScript));
}

int FoxitQPLLinuxCPP1811::FormFieldWebLinkAction(int Index, const std::wstring& ActionType, const std::wstring& Link)
{
	if (loadError) return 0;
	return FoxitQPLFormFieldWebLinkAction(instanceID, Index, 
		WideStringParm(ActionType), WideStringParm(Link));
}

int FoxitQPLLinuxCPP1811::GetActionDest(int ActionID)
{
	if (loadError) return 0;
	return FoxitQPLGetActionDest(instanceID, ActionID);
}

std::wstring FoxitQPLLinuxCPP1811::GetActionType(int ActionID)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetActionType(instanceID, ActionID);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

std::wstring FoxitQPLLinuxCPP1811::GetActionURL(int ActionID)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetActionURL(instanceID, ActionID);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

std::wstring FoxitQPLLinuxCPP1811::GetAnalysisInfo(int AnalysisID, int AnalysisItem)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetAnalysisInfo(instanceID, AnalysisID, AnalysisItem);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

int FoxitQPLLinuxCPP1811::GetAnnotActionID(int Index)
{
	if (loadError) return 0;
	return FoxitQPLGetAnnotActionID(instanceID, Index);
}

double FoxitQPLLinuxCPP1811::GetAnnotDblProperty(int Index, int Tag)
{
	if (loadError) return 0;
	return FoxitQPLGetAnnotDblProperty(instanceID, Index, Tag);
}

int FoxitQPLLinuxCPP1811::GetAnnotDest(int Index)
{
	if (loadError) return 0;
	return FoxitQPLGetAnnotDest(instanceID, Index);
}

std::wstring FoxitQPLLinuxCPP1811::GetAnnotEmbeddedFileName(int Index, int Options)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetAnnotEmbeddedFileName(instanceID, Index, Options);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

int FoxitQPLLinuxCPP1811::GetAnnotEmbeddedFileToFile(int Index, int Options, const std::wstring& FileName)
{
	if (loadError) return 0;
	return FoxitQPLGetAnnotEmbeddedFileToFile(instanceID, Index, Options, 
		WideStringParm(FileName));
}

std::string FoxitQPLLinuxCPP1811::GetAnnotEmbeddedFileToString(int Index, int Options)
{
	if (loadError) return "";
	char* result;
	result = FoxitQPLGetAnnotEmbeddedFileToString(instanceID, Index, Options);
	std::string resultStr(result, FoxitQPLAnsiStringResultLength(instanceID));
	return resultStr;
}

int FoxitQPLLinuxCPP1811::GetAnnotIntProperty(int Index, int Tag)
{
	if (loadError) return 0;
	return FoxitQPLGetAnnotIntProperty(instanceID, Index, Tag);
}

int FoxitQPLLinuxCPP1811::GetAnnotQuadCount(int Index)
{
	if (loadError) return 0;
	return FoxitQPLGetAnnotQuadCount(instanceID, Index);
}

double FoxitQPLLinuxCPP1811::GetAnnotQuadPoints(int Index, int QuadNumber, int PointNumber)
{
	if (loadError) return 0;
	return FoxitQPLGetAnnotQuadPoints(instanceID, Index, QuadNumber, 
		PointNumber);
}

int FoxitQPLLinuxCPP1811::GetAnnotSoundToFile(int Index, int Options, const std::wstring& SoundFileName)
{
	if (loadError) return 0;
	return FoxitQPLGetAnnotSoundToFile(instanceID, Index, Options, 
		WideStringParm(SoundFileName));
}

std::string FoxitQPLLinuxCPP1811::GetAnnotSoundToString(int Index, int Options)
{
	if (loadError) return "";
	char* result;
	result = FoxitQPLGetAnnotSoundToString(instanceID, Index, Options);
	std::string resultStr(result, FoxitQPLAnsiStringResultLength(instanceID));
	return resultStr;
}

std::wstring FoxitQPLLinuxCPP1811::GetAnnotStrProperty(int Index, int Tag)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetAnnotStrProperty(instanceID, Index, Tag);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

double FoxitQPLLinuxCPP1811::GetBarcodeWidth(double NominalWidth, const std::wstring& Text, int Barcode)
{
	if (loadError) return 0;
	return FoxitQPLGetBarcodeWidth(instanceID, NominalWidth, 
		WideStringParm(Text), Barcode);
}

std::wstring FoxitQPLLinuxCPP1811::GetBaseURL()
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetBaseURL(instanceID);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

int FoxitQPLLinuxCPP1811::GetCSDictEPSG(int CSDictID)
{
	if (loadError) return 0;
	return FoxitQPLGetCSDictEPSG(instanceID, CSDictID);
}

int FoxitQPLLinuxCPP1811::GetCSDictType(int CSDictID)
{
	if (loadError) return 0;
	return FoxitQPLGetCSDictType(instanceID, CSDictID);
}

std::wstring FoxitQPLLinuxCPP1811::GetCSDictWKT(int CSDictID)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetCSDictWKT(instanceID, CSDictID);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

std::wstring FoxitQPLLinuxCPP1811::GetCatalogInformation(const std::wstring& Key)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetCatalogInformation(instanceID, WideStringParm(Key));
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

std::string FoxitQPLLinuxCPP1811::GetContentStreamToString()
{
	if (loadError) return "";
	char* result;
	result = FoxitQPLGetContentStreamToString(instanceID);
	std::string resultStr(result, FoxitQPLAnsiStringResultLength(instanceID));
	return resultStr;
}

std::wstring FoxitQPLLinuxCPP1811::GetCustomInformation(const std::wstring& Key)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetCustomInformation(instanceID, WideStringParm(Key));
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

std::wstring FoxitQPLLinuxCPP1811::GetCustomKeys(int Location)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetCustomKeys(instanceID, Location);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

std::wstring FoxitQPLLinuxCPP1811::GetDestName(int DestID)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetDestName(instanceID, DestID);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

int FoxitQPLLinuxCPP1811::GetDestPage(int DestID)
{
	if (loadError) return 0;
	return FoxitQPLGetDestPage(instanceID, DestID);
}

int FoxitQPLLinuxCPP1811::GetDestType(int DestID)
{
	if (loadError) return 0;
	return FoxitQPLGetDestType(instanceID, DestID);
}

double FoxitQPLLinuxCPP1811::GetDestValue(int DestID, int ValueKey)
{
	if (loadError) return 0;
	return FoxitQPLGetDestValue(instanceID, DestID, ValueKey);
}

std::wstring FoxitQPLLinuxCPP1811::GetDocJavaScript(const std::wstring& ActionType)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetDocJavaScript(instanceID, WideStringParm(ActionType));
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

std::wstring FoxitQPLLinuxCPP1811::GetDocumentFileName()
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetDocumentFileName(instanceID);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

int FoxitQPLLinuxCPP1811::GetDocumentFileSize()
{
	if (loadError) return 0;
	return FoxitQPLGetDocumentFileSize(instanceID);
}

int FoxitQPLLinuxCPP1811::GetDocumentID(int Index)
{
	if (loadError) return 0;
	return FoxitQPLGetDocumentID(instanceID, Index);
}

std::wstring FoxitQPLLinuxCPP1811::GetDocumentIdentifier(int Part, int Options)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetDocumentIdentifier(instanceID, Part, Options);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

std::wstring FoxitQPLLinuxCPP1811::GetDocumentMetadata()
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetDocumentMetadata(instanceID);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

int FoxitQPLLinuxCPP1811::GetDocumentRepaired()
{
	if (loadError) return 0;
	return FoxitQPLGetDocumentRepaired(instanceID);
}

std::wstring FoxitQPLLinuxCPP1811::GetDocumentResourceList()
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetDocumentResourceList(instanceID);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

int FoxitQPLLinuxCPP1811::GetEmbeddedFileContentToFile(int Index, const std::wstring& FileName)
{
	if (loadError) return 0;
	return FoxitQPLGetEmbeddedFileContentToFile(instanceID, Index, 
		WideStringParm(FileName));
}

std::string FoxitQPLLinuxCPP1811::GetEmbeddedFileContentToString(int Index)
{
	if (loadError) return "";
	char* result;
	result = FoxitQPLGetEmbeddedFileContentToString(instanceID, Index);
	std::string resultStr(result, FoxitQPLAnsiStringResultLength(instanceID));
	return resultStr;
}

int FoxitQPLLinuxCPP1811::GetEmbeddedFileID(int Index)
{
	if (loadError) return 0;
	return FoxitQPLGetEmbeddedFileID(instanceID, Index);
}

int FoxitQPLLinuxCPP1811::GetEmbeddedFileIntProperty(int Index, int Tag)
{
	if (loadError) return 0;
	return FoxitQPLGetEmbeddedFileIntProperty(instanceID, Index, Tag);
}

std::wstring FoxitQPLLinuxCPP1811::GetEmbeddedFileStrProperty(int Index, int Tag)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetEmbeddedFileStrProperty(instanceID, Index, Tag);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

std::wstring FoxitQPLLinuxCPP1811::GetEncryptionFingerprint()
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetEncryptionFingerprint(instanceID);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

std::wstring FoxitQPLLinuxCPP1811::GetFileMetadata(const std::wstring& InputFileName, const std::wstring& Password)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetFileMetadata(instanceID, 
		WideStringParm(InputFileName), WideStringParm(Password));
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

int FoxitQPLLinuxCPP1811::GetFirstChildOutline(int OutlineID)
{
	if (loadError) return 0;
	return FoxitQPLGetFirstChildOutline(instanceID, OutlineID);
}

int FoxitQPLLinuxCPP1811::GetFirstOutline()
{
	if (loadError) return 0;
	return FoxitQPLGetFirstOutline(instanceID);
}

std::string FoxitQPLLinuxCPP1811::GetFontCharacterCodesToString(const std::wstring& InputText)
{
	if (loadError) return "";
	char* result;
	result = FoxitQPLGetFontCharacterCodesToString(instanceID, 
		WideStringParm(InputText));
	std::string resultStr(result, FoxitQPLAnsiStringResultLength(instanceID));
	return resultStr;
}

int FoxitQPLLinuxCPP1811::GetFontEncoding()
{
	if (loadError) return 0;
	return FoxitQPLGetFontEncoding(instanceID);
}

int FoxitQPLLinuxCPP1811::GetFontFlags(int FontFlagItemID)
{
	if (loadError) return 0;
	return FoxitQPLGetFontFlags(instanceID, FontFlagItemID);
}

int FoxitQPLLinuxCPP1811::GetFontID(int Index)
{
	if (loadError) return 0;
	return FoxitQPLGetFontID(instanceID, Index);
}

int FoxitQPLLinuxCPP1811::GetFontIsEmbedded()
{
	if (loadError) return 0;
	return FoxitQPLGetFontIsEmbedded(instanceID);
}

int FoxitQPLLinuxCPP1811::GetFontIsSubsetted()
{
	if (loadError) return 0;
	return FoxitQPLGetFontIsSubsetted(instanceID);
}

int FoxitQPLLinuxCPP1811::GetFontMetrics(int MetricType)
{
	if (loadError) return 0;
	return FoxitQPLGetFontMetrics(instanceID, MetricType);
}

int FoxitQPLLinuxCPP1811::GetFontObjectNumber()
{
	if (loadError) return 0;
	return FoxitQPLGetFontObjectNumber(instanceID);
}

int FoxitQPLLinuxCPP1811::GetFormFieldActionID(int Index, const std::wstring& TriggerEvent)
{
	if (loadError) return 0;
	return FoxitQPLGetFormFieldActionID(instanceID, Index, 
		WideStringParm(TriggerEvent));
}

int FoxitQPLLinuxCPP1811::GetFormFieldAlignment(int Index)
{
	if (loadError) return 0;
	return FoxitQPLGetFormFieldAlignment(instanceID, Index);
}

int FoxitQPLLinuxCPP1811::GetFormFieldAnnotFlags(int Index)
{
	if (loadError) return 0;
	return FoxitQPLGetFormFieldAnnotFlags(instanceID, Index);
}

double FoxitQPLLinuxCPP1811::GetFormFieldBackgroundColor(int Index, int ColorComponent)
{
	if (loadError) return 0;
	return FoxitQPLGetFormFieldBackgroundColor(instanceID, Index, 
		ColorComponent);
}

int FoxitQPLLinuxCPP1811::GetFormFieldBackgroundColorType(int Index)
{
	if (loadError) return 0;
	return FoxitQPLGetFormFieldBackgroundColorType(instanceID, Index);
}

double FoxitQPLLinuxCPP1811::GetFormFieldBorderColor(int Index, int ColorComponent)
{
	if (loadError) return 0;
	return FoxitQPLGetFormFieldBorderColor(instanceID, Index, ColorComponent);
}

int FoxitQPLLinuxCPP1811::GetFormFieldBorderColorType(int Index)
{
	if (loadError) return 0;
	return FoxitQPLGetFormFieldBorderColorType(instanceID, Index);
}

double FoxitQPLLinuxCPP1811::GetFormFieldBorderProperty(int Index, int PropKey)
{
	if (loadError) return 0;
	return FoxitQPLGetFormFieldBorderProperty(instanceID, Index, PropKey);
}

int FoxitQPLLinuxCPP1811::GetFormFieldBorderStyle(int Index)
{
	if (loadError) return 0;
	return FoxitQPLGetFormFieldBorderStyle(instanceID, Index);
}

double FoxitQPLLinuxCPP1811::GetFormFieldBound(int Index, int Edge)
{
	if (loadError) return 0;
	return FoxitQPLGetFormFieldBound(instanceID, Index, Edge);
}

std::wstring FoxitQPLLinuxCPP1811::GetFormFieldCaption(int Index)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetFormFieldCaption(instanceID, Index);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

std::wstring FoxitQPLLinuxCPP1811::GetFormFieldCaptionEx(int Index, int StringType)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetFormFieldCaptionEx(instanceID, Index, StringType);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

int FoxitQPLLinuxCPP1811::GetFormFieldCheckStyle(int Index)
{
	if (loadError) return 0;
	return FoxitQPLGetFormFieldCheckStyle(instanceID, Index);
}

std::wstring FoxitQPLLinuxCPP1811::GetFormFieldChildTitle(int Index)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetFormFieldChildTitle(instanceID, Index);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

int FoxitQPLLinuxCPP1811::GetFormFieldChoiceType(int Index)
{
	if (loadError) return 0;
	return FoxitQPLGetFormFieldChoiceType(instanceID, Index);
}

double FoxitQPLLinuxCPP1811::GetFormFieldColor(int Index, int ColorComponent)
{
	if (loadError) return 0;
	return FoxitQPLGetFormFieldColor(instanceID, Index, ColorComponent);
}

int FoxitQPLLinuxCPP1811::GetFormFieldComb(int Index)
{
	if (loadError) return 0;
	return FoxitQPLGetFormFieldComb(instanceID, Index);
}

std::wstring FoxitQPLLinuxCPP1811::GetFormFieldDefaultValue(int Index)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetFormFieldDefaultValue(instanceID, Index);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

std::wstring FoxitQPLLinuxCPP1811::GetFormFieldDescription(int Index)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetFormFieldDescription(instanceID, Index);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

int FoxitQPLLinuxCPP1811::GetFormFieldFlags(int Index)
{
	if (loadError) return 0;
	return FoxitQPLGetFormFieldFlags(instanceID, Index);
}

std::wstring FoxitQPLLinuxCPP1811::GetFormFieldFontName(int Index)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetFormFieldFontName(instanceID, Index);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

std::wstring FoxitQPLLinuxCPP1811::GetFormFieldJavaScript(int Index, const std::wstring& ActionType)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetFormFieldJavaScript(instanceID, Index, 
		WideStringParm(ActionType));
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

int FoxitQPLLinuxCPP1811::GetFormFieldKidCount(int Index)
{
	if (loadError) return 0;
	return FoxitQPLGetFormFieldKidCount(instanceID, Index);
}

int FoxitQPLLinuxCPP1811::GetFormFieldKidTempIndex(int Index, int SubIndex)
{
	if (loadError) return 0;
	return FoxitQPLGetFormFieldKidTempIndex(instanceID, Index, SubIndex);
}

int FoxitQPLLinuxCPP1811::GetFormFieldMaxLen(int Index)
{
	if (loadError) return 0;
	return FoxitQPLGetFormFieldMaxLen(instanceID, Index);
}

int FoxitQPLLinuxCPP1811::GetFormFieldNoExport(int Index)
{
	if (loadError) return 0;
	return FoxitQPLGetFormFieldNoExport(instanceID, Index);
}

int FoxitQPLLinuxCPP1811::GetFormFieldPage(int Index)
{
	if (loadError) return 0;
	return FoxitQPLGetFormFieldPage(instanceID, Index);
}

int FoxitQPLLinuxCPP1811::GetFormFieldPrintable(int Index)
{
	if (loadError) return 0;
	return FoxitQPLGetFormFieldPrintable(instanceID, Index);
}

int FoxitQPLLinuxCPP1811::GetFormFieldReadOnly(int Index)
{
	if (loadError) return 0;
	return FoxitQPLGetFormFieldReadOnly(instanceID, Index);
}

int FoxitQPLLinuxCPP1811::GetFormFieldRequired(int Index)
{
	if (loadError) return 0;
	return FoxitQPLGetFormFieldRequired(instanceID, Index);
}

std::wstring FoxitQPLLinuxCPP1811::GetFormFieldRichTextString(int Index, const std::wstring& Key)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetFormFieldRichTextString(instanceID, Index, 
		WideStringParm(Key));
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

int FoxitQPLLinuxCPP1811::GetFormFieldRotation(int Index)
{
	if (loadError) return 0;
	return FoxitQPLGetFormFieldRotation(instanceID, Index);
}

int FoxitQPLLinuxCPP1811::GetFormFieldSubCount(int Index)
{
	if (loadError) return 0;
	return FoxitQPLGetFormFieldSubCount(instanceID, Index);
}

std::wstring FoxitQPLLinuxCPP1811::GetFormFieldSubDisplayName(int Index, int SubIndex)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetFormFieldSubDisplayName(instanceID, Index, SubIndex);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

std::wstring FoxitQPLLinuxCPP1811::GetFormFieldSubName(int Index, int SubIndex)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetFormFieldSubName(instanceID, Index, SubIndex);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

std::wstring FoxitQPLLinuxCPP1811::GetFormFieldSubmitActionString(int Index, const std::wstring& ActionType)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetFormFieldSubmitActionString(instanceID, Index, 
		WideStringParm(ActionType));
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

int FoxitQPLLinuxCPP1811::GetFormFieldTabOrder(int Index)
{
	if (loadError) return 0;
	return FoxitQPLGetFormFieldTabOrder(instanceID, Index);
}

int FoxitQPLLinuxCPP1811::GetFormFieldTabOrderEx(int Index, int Options)
{
	if (loadError) return 0;
	return FoxitQPLGetFormFieldTabOrderEx(instanceID, Index, Options);
}

int FoxitQPLLinuxCPP1811::GetFormFieldTextFlags(int Index, int ValueKey)
{
	if (loadError) return 0;
	return FoxitQPLGetFormFieldTextFlags(instanceID, Index, ValueKey);
}

double FoxitQPLLinuxCPP1811::GetFormFieldTextSize(int Index)
{
	if (loadError) return 0;
	return FoxitQPLGetFormFieldTextSize(instanceID, Index);
}

std::wstring FoxitQPLLinuxCPP1811::GetFormFieldTitle(int Index)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetFormFieldTitle(instanceID, Index);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

int FoxitQPLLinuxCPP1811::GetFormFieldType(int Index)
{
	if (loadError) return 0;
	return FoxitQPLGetFormFieldType(instanceID, Index);
}

std::wstring FoxitQPLLinuxCPP1811::GetFormFieldValue(int Index)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetFormFieldValue(instanceID, Index);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

std::wstring FoxitQPLLinuxCPP1811::GetFormFieldValueByTitle(const std::wstring& Title)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetFormFieldValueByTitle(instanceID, 
		WideStringParm(Title));
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

int FoxitQPLLinuxCPP1811::GetFormFieldVisible(int Index)
{
	if (loadError) return 0;
	return FoxitQPLGetFormFieldVisible(instanceID, Index);
}

std::wstring FoxitQPLLinuxCPP1811::GetFormFieldWebLink(int Index, const std::wstring& ActionType)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetFormFieldWebLink(instanceID, Index, 
		WideStringParm(ActionType));
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

int FoxitQPLLinuxCPP1811::GetFormFontCount()
{
	if (loadError) return 0;
	return FoxitQPLGetFormFontCount(instanceID);
}

std::wstring FoxitQPLLinuxCPP1811::GetFormFontName(int FontIndex)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetFormFontName(instanceID, FontIndex);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

std::wstring FoxitQPLLinuxCPP1811::GetGlobalJavaScript(const std::wstring& PackageName)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetGlobalJavaScript(instanceID, 
		WideStringParm(PackageName));
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

int FoxitQPLLinuxCPP1811::GetGlobalMeasurementUnits()
{
	if (loadError) return 0;
	return FoxitQPLGetGlobalMeasurementUnits(instanceID);
}

int FoxitQPLLinuxCPP1811::GetGlobalOrigin()
{
	if (loadError) return 0;
	return FoxitQPLGetGlobalOrigin(instanceID);
}

double FoxitQPLLinuxCPP1811::GetGlobalScale()
{
	if (loadError) return 0;
	return FoxitQPLGetGlobalScale(instanceID);
}

double FoxitQPLLinuxCPP1811::GetHTMLTextHeight(double Width, const std::wstring& HTMLText)
{
	if (loadError) return 0;
	return FoxitQPLGetHTMLTextHeight(instanceID, Width, 
		WideStringParm(HTMLText));
}

int FoxitQPLLinuxCPP1811::GetHTMLTextLineCount(double Width, const std::wstring& HTMLText)
{
	if (loadError) return 0;
	return FoxitQPLGetHTMLTextLineCount(instanceID, Width, 
		WideStringParm(HTMLText));
}

double FoxitQPLLinuxCPP1811::GetHTMLTextWidth(double MaxWidth, const std::wstring& HTMLText)
{
	if (loadError) return 0;
	return FoxitQPLGetHTMLTextWidth(instanceID, MaxWidth, 
		WideStringParm(HTMLText));
}

int FoxitQPLLinuxCPP1811::GetImageID(int Index)
{
	if (loadError) return 0;
	return FoxitQPLGetImageID(instanceID, Index);
}

int FoxitQPLLinuxCPP1811::GetImageListCount(int ImageListID)
{
	if (loadError) return 0;
	return FoxitQPLGetImageListCount(instanceID, ImageListID);
}

std::string FoxitQPLLinuxCPP1811::GetImageListItemDataToString(int ImageListID, int ImageIndex, int Options)
{
	if (loadError) return "";
	char* result;
	result = FoxitQPLGetImageListItemDataToString(instanceID, ImageListID, 
		ImageIndex, Options);
	std::string resultStr(result, FoxitQPLAnsiStringResultLength(instanceID));
	return resultStr;
}

double FoxitQPLLinuxCPP1811::GetImageListItemDblProperty(int ImageListID, int ImageIndex, int PropertyID)
{
	if (loadError) return 0;
	return FoxitQPLGetImageListItemDblProperty(instanceID, ImageListID, 
		ImageIndex, PropertyID);
}

std::wstring FoxitQPLLinuxCPP1811::GetImageListItemFormatDesc(int ImageListID, int ImageIndex, int Options)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetImageListItemFormatDesc(instanceID, ImageListID, 
		ImageIndex, Options);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

int FoxitQPLLinuxCPP1811::GetImageListItemIntProperty(int ImageListID, int ImageIndex, int PropertyID)
{
	if (loadError) return 0;
	return FoxitQPLGetImageListItemIntProperty(instanceID, ImageListID, 
		ImageIndex, PropertyID);
}

int FoxitQPLLinuxCPP1811::GetImageMeasureDict()
{
	if (loadError) return 0;
	return FoxitQPLGetImageMeasureDict(instanceID);
}

int FoxitQPLLinuxCPP1811::GetImagePageCount(const std::wstring& FileName)
{
	if (loadError) return 0;
	return FoxitQPLGetImagePageCount(instanceID, WideStringParm(FileName));
}

int FoxitQPLLinuxCPP1811::GetImagePageCountFromString(const std::string& Source)
{
	if (loadError) return 0;
	int sb1;
	char* sp1 = StringParm(Source, sb1);
	int result;
	result = FoxitQPLGetImagePageCountFromString(instanceID, sp1);
	if (sb1 == 1) FoxitQPLReleaseBuffer(instanceID, sp1);
	return result;
}

int FoxitQPLLinuxCPP1811::GetImagePtDataDict()
{
	if (loadError) return 0;
	return FoxitQPLGetImagePtDataDict(instanceID);
}

std::wstring FoxitQPLLinuxCPP1811::GetInformation(int Key)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetInformation(instanceID, Key);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

std::wstring FoxitQPLLinuxCPP1811::GetInstalledFontsByCharset(int CharsetIndex, int Options)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetInstalledFontsByCharset(instanceID, CharsetIndex, 
		Options);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

std::wstring FoxitQPLLinuxCPP1811::GetInstalledFontsByCodePage(int CodePage, int Options)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetInstalledFontsByCodePage(instanceID, CodePage, 
		Options);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

int FoxitQPLLinuxCPP1811::GetKerning(const std::wstring& CharPair)
{
	if (loadError) return 0;
	return FoxitQPLGetKerning(instanceID, WideStringParm(CharPair));
}

int FoxitQPLLinuxCPP1811::GetMaxObjectNumber()
{
	if (loadError) return 0;
	return FoxitQPLGetMaxObjectNumber(instanceID);
}

int FoxitQPLLinuxCPP1811::GetMeasureDictBoundsCount(int MeasureDictID)
{
	if (loadError) return 0;
	return FoxitQPLGetMeasureDictBoundsCount(instanceID, MeasureDictID);
}

double FoxitQPLLinuxCPP1811::GetMeasureDictBoundsItem(int MeasureDictID, int ItemIndex)
{
	if (loadError) return 0;
	return FoxitQPLGetMeasureDictBoundsItem(instanceID, MeasureDictID, 
		ItemIndex);
}

int FoxitQPLLinuxCPP1811::GetMeasureDictCoordinateSystem(int MeasureDictID)
{
	if (loadError) return 0;
	return FoxitQPLGetMeasureDictCoordinateSystem(instanceID, MeasureDictID);
}

int FoxitQPLLinuxCPP1811::GetMeasureDictDCSDict(int MeasureDictID)
{
	if (loadError) return 0;
	return FoxitQPLGetMeasureDictDCSDict(instanceID, MeasureDictID);
}

int FoxitQPLLinuxCPP1811::GetMeasureDictGCSDict(int MeasureDictID)
{
	if (loadError) return 0;
	return FoxitQPLGetMeasureDictGCSDict(instanceID, MeasureDictID);
}

int FoxitQPLLinuxCPP1811::GetMeasureDictGPTSCount(int MeasureDictID)
{
	if (loadError) return 0;
	return FoxitQPLGetMeasureDictGPTSCount(instanceID, MeasureDictID);
}

double FoxitQPLLinuxCPP1811::GetMeasureDictGPTSItem(int MeasureDictID, int ItemIndex)
{
	if (loadError) return 0;
	return FoxitQPLGetMeasureDictGPTSItem(instanceID, MeasureDictID, 
		ItemIndex);
}

int FoxitQPLLinuxCPP1811::GetMeasureDictLPTSCount(int MeasureDictID)
{
	if (loadError) return 0;
	return FoxitQPLGetMeasureDictLPTSCount(instanceID, MeasureDictID);
}

double FoxitQPLLinuxCPP1811::GetMeasureDictLPTSItem(int MeasureDictID, int ItemIndex)
{
	if (loadError) return 0;
	return FoxitQPLGetMeasureDictLPTSItem(instanceID, MeasureDictID, 
		ItemIndex);
}

int FoxitQPLLinuxCPP1811::GetMeasureDictPDU(int MeasureDictID, int UnitIndex)
{
	if (loadError) return 0;
	return FoxitQPLGetMeasureDictPDU(instanceID, MeasureDictID, UnitIndex);
}

int FoxitQPLLinuxCPP1811::GetMeasurementUnits()
{
	if (loadError) return 0;
	return FoxitQPLGetMeasurementUnits(instanceID);
}

int FoxitQPLLinuxCPP1811::GetNamedDestination(const std::wstring& DestName)
{
	if (loadError) return 0;
	return FoxitQPLGetNamedDestination(instanceID, WideStringParm(DestName));
}

int FoxitQPLLinuxCPP1811::GetNeedAppearances()
{
	if (loadError) return 0;
	return FoxitQPLGetNeedAppearances(instanceID);
}

int FoxitQPLLinuxCPP1811::GetNextOutline(int OutlineID)
{
	if (loadError) return 0;
	return FoxitQPLGetNextOutline(instanceID, OutlineID);
}

int FoxitQPLLinuxCPP1811::GetObjectCount()
{
	if (loadError) return 0;
	return FoxitQPLGetObjectCount(instanceID);
}

int FoxitQPLLinuxCPP1811::GetObjectDecodeError(int ObjectNumber)
{
	if (loadError) return 0;
	return FoxitQPLGetObjectDecodeError(instanceID, ObjectNumber);
}

std::string FoxitQPLLinuxCPP1811::GetObjectToString(int ObjectNumber)
{
	if (loadError) return "";
	char* result;
	result = FoxitQPLGetObjectToString(instanceID, ObjectNumber);
	std::string resultStr(result, FoxitQPLAnsiStringResultLength(instanceID));
	return resultStr;
}

int FoxitQPLLinuxCPP1811::GetOpenActionDestination()
{
	if (loadError) return 0;
	return FoxitQPLGetOpenActionDestination(instanceID);
}

std::wstring FoxitQPLLinuxCPP1811::GetOpenActionJavaScript()
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetOpenActionJavaScript(instanceID);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

int FoxitQPLLinuxCPP1811::GetOptionalContentConfigCount()
{
	if (loadError) return 0;
	return FoxitQPLGetOptionalContentConfigCount(instanceID);
}

int FoxitQPLLinuxCPP1811::GetOptionalContentConfigLocked(int OptionalContentConfigID, int OptionalContentGroupID)
{
	if (loadError) return 0;
	return FoxitQPLGetOptionalContentConfigLocked(instanceID, 
		OptionalContentConfigID, OptionalContentGroupID);
}

int FoxitQPLLinuxCPP1811::GetOptionalContentConfigOrderCount(int OptionalContentConfigID)
{
	if (loadError) return 0;
	return FoxitQPLGetOptionalContentConfigOrderCount(instanceID, 
		OptionalContentConfigID);
}

int FoxitQPLLinuxCPP1811::GetOptionalContentConfigOrderItemID(int OptionalContentConfigID, int ItemIndex)
{
	if (loadError) return 0;
	return FoxitQPLGetOptionalContentConfigOrderItemID(instanceID, 
		OptionalContentConfigID, ItemIndex);
}

std::wstring FoxitQPLLinuxCPP1811::GetOptionalContentConfigOrderItemLabel(int OptionalContentConfigID, int ItemIndex)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetOptionalContentConfigOrderItemLabel(instanceID, 
		OptionalContentConfigID, ItemIndex);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

int FoxitQPLLinuxCPP1811::GetOptionalContentConfigOrderItemLevel(int OptionalContentConfigID, int ItemIndex)
{
	if (loadError) return 0;
	return FoxitQPLGetOptionalContentConfigOrderItemLevel(instanceID, 
		OptionalContentConfigID, ItemIndex);
}

int FoxitQPLLinuxCPP1811::GetOptionalContentConfigOrderItemType(int OptionalContentConfigID, int ItemIndex)
{
	if (loadError) return 0;
	return FoxitQPLGetOptionalContentConfigOrderItemType(instanceID, 
		OptionalContentConfigID, ItemIndex);
}

int FoxitQPLLinuxCPP1811::GetOptionalContentConfigState(int OptionalContentConfigID, int OptionalContentGroupID)
{
	if (loadError) return 0;
	return FoxitQPLGetOptionalContentConfigState(instanceID, 
		OptionalContentConfigID, OptionalContentGroupID);
}

int FoxitQPLLinuxCPP1811::GetOptionalContentGroupID(int Index)
{
	if (loadError) return 0;
	return FoxitQPLGetOptionalContentGroupID(instanceID, Index);
}

std::wstring FoxitQPLLinuxCPP1811::GetOptionalContentGroupName(int OptionalContentGroupID)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetOptionalContentGroupName(instanceID, 
		OptionalContentGroupID);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

int FoxitQPLLinuxCPP1811::GetOptionalContentGroupPrintable(int OptionalContentGroupID)
{
	if (loadError) return 0;
	return FoxitQPLGetOptionalContentGroupPrintable(instanceID, 
		OptionalContentGroupID);
}

int FoxitQPLLinuxCPP1811::GetOptionalContentGroupVisible(int OptionalContentGroupID)
{
	if (loadError) return 0;
	return FoxitQPLGetOptionalContentGroupVisible(instanceID, 
		OptionalContentGroupID);
}

int FoxitQPLLinuxCPP1811::GetOrigin()
{
	if (loadError) return 0;
	return FoxitQPLGetOrigin(instanceID);
}

int FoxitQPLLinuxCPP1811::GetOutlineActionID(int OutlineID)
{
	if (loadError) return 0;
	return FoxitQPLGetOutlineActionID(instanceID, OutlineID);
}

double FoxitQPLLinuxCPP1811::GetOutlineColor(int OutlineID, int ColorComponent)
{
	if (loadError) return 0;
	return FoxitQPLGetOutlineColor(instanceID, OutlineID, ColorComponent);
}

int FoxitQPLLinuxCPP1811::GetOutlineDest(int OutlineID)
{
	if (loadError) return 0;
	return FoxitQPLGetOutlineDest(instanceID, OutlineID);
}

int FoxitQPLLinuxCPP1811::GetOutlineID(int Index)
{
	if (loadError) return 0;
	return FoxitQPLGetOutlineID(instanceID, Index);
}

std::wstring FoxitQPLLinuxCPP1811::GetOutlineJavaScript(int OutlineID)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetOutlineJavaScript(instanceID, OutlineID);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

int FoxitQPLLinuxCPP1811::GetOutlineObjectNumber(int OutlineID)
{
	if (loadError) return 0;
	return FoxitQPLGetOutlineObjectNumber(instanceID, OutlineID);
}

std::wstring FoxitQPLLinuxCPP1811::GetOutlineOpenFile(int OutlineID)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetOutlineOpenFile(instanceID, OutlineID);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

int FoxitQPLLinuxCPP1811::GetOutlinePage(int OutlineID)
{
	if (loadError) return 0;
	return FoxitQPLGetOutlinePage(instanceID, OutlineID);
}

int FoxitQPLLinuxCPP1811::GetOutlineStyle(int OutlineID)
{
	if (loadError) return 0;
	return FoxitQPLGetOutlineStyle(instanceID, OutlineID);
}

std::wstring FoxitQPLLinuxCPP1811::GetOutlineWebLink(int OutlineID)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetOutlineWebLink(instanceID, OutlineID);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

double FoxitQPLLinuxCPP1811::GetPDF417SymbolHeight(const std::wstring& Text, int Options, int FixedColumns, int FixedRows, int ErrorLevel, double ModuleSize, double HeightWidthRatio)
{
	if (loadError) return 0;
	return FoxitQPLGetPDF417SymbolHeight(instanceID, WideStringParm(Text), 
		Options, FixedColumns, FixedRows, ErrorLevel, ModuleSize, 
		HeightWidthRatio);
}

double FoxitQPLLinuxCPP1811::GetPDF417SymbolWidth(const std::wstring& Text, int Options, int FixedColumns, int FixedRows, int ErrorLevel, double ModuleSize, double HeightWidthRatio)
{
	if (loadError) return 0;
	return FoxitQPLGetPDF417SymbolWidth(instanceID, WideStringParm(Text), 
		Options, FixedColumns, FixedRows, ErrorLevel, ModuleSize, 
		HeightWidthRatio);
}

double FoxitQPLLinuxCPP1811::GetPageBox(int BoxType, int Dimension)
{
	if (loadError) return 0;
	return FoxitQPLGetPageBox(instanceID, BoxType, Dimension);
}

std::wstring FoxitQPLLinuxCPP1811::GetPageColorSpaces(int Options)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetPageColorSpaces(instanceID, Options);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

std::string FoxitQPLLinuxCPP1811::GetPageContentToString()
{
	if (loadError) return "";
	char* result;
	result = FoxitQPLGetPageContentToString(instanceID);
	std::string resultStr(result, FoxitQPLAnsiStringResultLength(instanceID));
	return resultStr;
}

int FoxitQPLLinuxCPP1811::GetPageImageList(int Options)
{
	if (loadError) return 0;
	return FoxitQPLGetPageImageList(instanceID, Options);
}

std::wstring FoxitQPLLinuxCPP1811::GetPageJavaScript(const std::wstring& ActionType)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetPageJavaScript(instanceID, 
		WideStringParm(ActionType));
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

std::wstring FoxitQPLLinuxCPP1811::GetPageLGIDictContent(int DictIndex)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetPageLGIDictContent(instanceID, DictIndex);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

int FoxitQPLLinuxCPP1811::GetPageLGIDictCount()
{
	if (loadError) return 0;
	return FoxitQPLGetPageLGIDictCount(instanceID);
}

std::wstring FoxitQPLLinuxCPP1811::GetPageLabel(int Page)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetPageLabel(instanceID, Page);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

int FoxitQPLLinuxCPP1811::GetPageLayout()
{
	if (loadError) return 0;
	return FoxitQPLGetPageLayout(instanceID);
}

std::string FoxitQPLLinuxCPP1811::GetPageMetricsToString(int StartPage, int EndPage, int Options)
{
	if (loadError) return "";
	char* result;
	result = FoxitQPLGetPageMetricsToString(instanceID, StartPage, EndPage, 
		Options);
	std::string resultStr(result, FoxitQPLAnsiStringResultLength(instanceID));
	return resultStr;
}

int FoxitQPLLinuxCPP1811::GetPageMode()
{
	if (loadError) return 0;
	return FoxitQPLGetPageMode(instanceID);
}

std::wstring FoxitQPLLinuxCPP1811::GetPageText(int ExtractOptions)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetPageText(instanceID, ExtractOptions);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

double FoxitQPLLinuxCPP1811::GetPageUserUnit()
{
	if (loadError) return 0;
	return FoxitQPLGetPageUserUnit(instanceID);
}

int FoxitQPLLinuxCPP1811::GetPageViewPortCount()
{
	if (loadError) return 0;
	return FoxitQPLGetPageViewPortCount(instanceID);
}

int FoxitQPLLinuxCPP1811::GetPageViewPortID(int Index)
{
	if (loadError) return 0;
	return FoxitQPLGetPageViewPortID(instanceID, Index);
}

int FoxitQPLLinuxCPP1811::GetParentOutline(int OutlineID)
{
	if (loadError) return 0;
	return FoxitQPLGetParentOutline(instanceID, OutlineID);
}

int FoxitQPLLinuxCPP1811::GetPrevOutline(int OutlineID)
{
	if (loadError) return 0;
	return FoxitQPLGetPrevOutline(instanceID, OutlineID);
}

std::string FoxitQPLLinuxCPP1811::GetPrintPreviewBitmapToString(const std::wstring& PrinterName, int PreviewPage, int PrintOptions, int MaxDimension, int PreviewOptions)
{
	if (loadError) return "";
	char* result;
	result = FoxitQPLGetPrintPreviewBitmapToString(instanceID, 
		WideStringParm(PrinterName), PreviewPage, PrintOptions, MaxDimension, 
		PreviewOptions);
	std::string resultStr(result, FoxitQPLAnsiStringResultLength(instanceID));
	return resultStr;
}

double FoxitQPLLinuxCPP1811::GetRenderScale()
{
	if (loadError) return 0;
	return FoxitQPLGetRenderScale(instanceID);
}

double FoxitQPLLinuxCPP1811::GetScale()
{
	if (loadError) return 0;
	return FoxitQPLGetScale(instanceID);
}

int FoxitQPLLinuxCPP1811::GetSignProcessByteRange(int SignProcessID, int ArrayPosition)
{
	if (loadError) return 0;
	return FoxitQPLGetSignProcessByteRange(instanceID, SignProcessID, 
		ArrayPosition);
}

int FoxitQPLLinuxCPP1811::GetSignProcessResult(int SignProcessID)
{
	if (loadError) return 0;
	return FoxitQPLGetSignProcessResult(instanceID, SignProcessID);
}

int FoxitQPLLinuxCPP1811::GetStringListCount(int StringListID)
{
	if (loadError) return 0;
	return FoxitQPLGetStringListCount(instanceID, StringListID);
}

std::wstring FoxitQPLLinuxCPP1811::GetStringListItem(int StringListID, int ItemIndex)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetStringListItem(instanceID, StringListID, ItemIndex);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

std::wstring FoxitQPLLinuxCPP1811::GetTabOrderMode()
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetTabOrderMode(instanceID);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

double FoxitQPLLinuxCPP1811::GetTableCellDblProperty(int TableID, int RowNumber, int ColumnNumber, int Tag)
{
	if (loadError) return 0;
	return FoxitQPLGetTableCellDblProperty(instanceID, TableID, RowNumber, 
		ColumnNumber, Tag);
}

int FoxitQPLLinuxCPP1811::GetTableCellIntProperty(int TableID, int RowNumber, int ColumnNumber, int Tag)
{
	if (loadError) return 0;
	return FoxitQPLGetTableCellIntProperty(instanceID, TableID, RowNumber, 
		ColumnNumber, Tag);
}

std::wstring FoxitQPLLinuxCPP1811::GetTableCellStrProperty(int TableID, int RowNumber, int ColumnNumber, int Tag)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetTableCellStrProperty(instanceID, TableID, RowNumber, 
		ColumnNumber, Tag);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

int FoxitQPLLinuxCPP1811::GetTableColumnCount(int TableID)
{
	if (loadError) return 0;
	return FoxitQPLGetTableColumnCount(instanceID, TableID);
}

int FoxitQPLLinuxCPP1811::GetTableLastDrawnRow(int TableID)
{
	if (loadError) return 0;
	return FoxitQPLGetTableLastDrawnRow(instanceID, TableID);
}

int FoxitQPLLinuxCPP1811::GetTableRowCount(int TableID)
{
	if (loadError) return 0;
	return FoxitQPLGetTableRowCount(instanceID, TableID);
}

std::wstring FoxitQPLLinuxCPP1811::GetTempPath()
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetTempPath(instanceID);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

double FoxitQPLLinuxCPP1811::GetTextAscent()
{
	if (loadError) return 0;
	return FoxitQPLGetTextAscent(instanceID);
}

std::wstring FoxitQPLLinuxCPP1811::GetTextBlockAsString(int TextBlockListID, int Index)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetTextBlockAsString(instanceID, TextBlockListID, Index);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

double FoxitQPLLinuxCPP1811::GetTextBlockBound(int TextBlockListID, int Index, int BoundIndex)
{
	if (loadError) return 0;
	return FoxitQPLGetTextBlockBound(instanceID, TextBlockListID, Index, 
		BoundIndex);
}

double FoxitQPLLinuxCPP1811::GetTextBlockCharWidth(int TextBlockListID, int Index, int CharIndex)
{
	if (loadError) return 0;
	return FoxitQPLGetTextBlockCharWidth(instanceID, TextBlockListID, Index, 
		CharIndex);
}

double FoxitQPLLinuxCPP1811::GetTextBlockColor(int TextBlockListID, int Index, int ColorComponent)
{
	if (loadError) return 0;
	return FoxitQPLGetTextBlockColor(instanceID, TextBlockListID, Index, 
		ColorComponent);
}

int FoxitQPLLinuxCPP1811::GetTextBlockColorType(int TextBlockListID, int Index)
{
	if (loadError) return 0;
	return FoxitQPLGetTextBlockColorType(instanceID, TextBlockListID, Index);
}

int FoxitQPLLinuxCPP1811::GetTextBlockCount(int TextBlockListID)
{
	if (loadError) return 0;
	return FoxitQPLGetTextBlockCount(instanceID, TextBlockListID);
}

std::wstring FoxitQPLLinuxCPP1811::GetTextBlockFontName(int TextBlockListID, int Index)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetTextBlockFontName(instanceID, TextBlockListID, Index);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

double FoxitQPLLinuxCPP1811::GetTextBlockFontSize(int TextBlockListID, int Index)
{
	if (loadError) return 0;
	return FoxitQPLGetTextBlockFontSize(instanceID, TextBlockListID, Index);
}

std::wstring FoxitQPLLinuxCPP1811::GetTextBlockText(int TextBlockListID, int Index)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetTextBlockText(instanceID, TextBlockListID, Index);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

double FoxitQPLLinuxCPP1811::GetTextBound(int Edge)
{
	if (loadError) return 0;
	return FoxitQPLGetTextBound(instanceID, Edge);
}

double FoxitQPLLinuxCPP1811::GetTextDescent()
{
	if (loadError) return 0;
	return FoxitQPLGetTextDescent(instanceID);
}

double FoxitQPLLinuxCPP1811::GetTextHeight()
{
	if (loadError) return 0;
	return FoxitQPLGetTextHeight(instanceID);
}

double FoxitQPLLinuxCPP1811::GetTextSize()
{
	if (loadError) return 0;
	return FoxitQPLGetTextSize(instanceID);
}

double FoxitQPLLinuxCPP1811::GetTextWidth(const std::wstring& Text)
{
	if (loadError) return 0;
	return FoxitQPLGetTextWidth(instanceID, WideStringParm(Text));
}

std::wstring FoxitQPLLinuxCPP1811::GetUnicodeCharactersFromEncoding(int Encoding)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetUnicodeCharactersFromEncoding(instanceID, Encoding);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

double FoxitQPLLinuxCPP1811::GetViewPortBBox(int ViewPortID, int Dimension)
{
	if (loadError) return 0;
	return FoxitQPLGetViewPortBBox(instanceID, ViewPortID, Dimension);
}

int FoxitQPLLinuxCPP1811::GetViewPortMeasureDict(int ViewPortID)
{
	if (loadError) return 0;
	return FoxitQPLGetViewPortMeasureDict(instanceID, ViewPortID);
}

std::wstring FoxitQPLLinuxCPP1811::GetViewPortName(int ViewPortID)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetViewPortName(instanceID, ViewPortID);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

int FoxitQPLLinuxCPP1811::GetViewPortPtDataDict(int ViewPortID)
{
	if (loadError) return 0;
	return FoxitQPLGetViewPortPtDataDict(instanceID, ViewPortID);
}

int FoxitQPLLinuxCPP1811::GetViewerPreferences(int Option)
{
	if (loadError) return 0;
	return FoxitQPLGetViewerPreferences(instanceID, Option);
}

std::wstring FoxitQPLLinuxCPP1811::GetWrappedText(double Width, const std::wstring& Delimiter, const std::wstring& Text)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetWrappedText(instanceID, Width, 
		WideStringParm(Delimiter), WideStringParm(Text));
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

std::wstring FoxitQPLLinuxCPP1811::GetWrappedTextBreakString(double Width, const std::wstring& Delimiter, const std::wstring& Text)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetWrappedTextBreakString(instanceID, Width, 
		WideStringParm(Delimiter), WideStringParm(Text));
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

double FoxitQPLLinuxCPP1811::GetWrappedTextHeight(double Width, const std::wstring& Text)
{
	if (loadError) return 0;
	return FoxitQPLGetWrappedTextHeight(instanceID, Width, 
		WideStringParm(Text));
}

int FoxitQPLLinuxCPP1811::GetWrappedTextLineCount(double Width, const std::wstring& Text)
{
	if (loadError) return 0;
	return FoxitQPLGetWrappedTextLineCount(instanceID, Width, 
		WideStringParm(Text));
}

int FoxitQPLLinuxCPP1811::GetXFAFormFieldCount()
{
	if (loadError) return 0;
	return FoxitQPLGetXFAFormFieldCount(instanceID);
}

std::wstring FoxitQPLLinuxCPP1811::GetXFAFormFieldName(int Index)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetXFAFormFieldName(instanceID, Index);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

std::wstring FoxitQPLLinuxCPP1811::GetXFAFormFieldNames(const std::wstring& Delimiter)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetXFAFormFieldNames(instanceID, 
		WideStringParm(Delimiter));
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

std::wstring FoxitQPLLinuxCPP1811::GetXFAFormFieldValue(const std::wstring& XFAFieldName)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGetXFAFormFieldValue(instanceID, 
		WideStringParm(XFAFieldName));
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

std::string FoxitQPLLinuxCPP1811::GetXFAToString(int Options)
{
	if (loadError) return "";
	char* result;
	result = FoxitQPLGetXFAToString(instanceID, Options);
	std::string resultStr(result, FoxitQPLAnsiStringResultLength(instanceID));
	return resultStr;
}

int FoxitQPLLinuxCPP1811::GlobalJavaScriptCount()
{
	if (loadError) return 0;
	return FoxitQPLGlobalJavaScriptCount(instanceID);
}

std::wstring FoxitQPLLinuxCPP1811::GlobalJavaScriptPackageName(int Index)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLGlobalJavaScriptPackageName(instanceID, Index);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

int FoxitQPLLinuxCPP1811::HasFontResources()
{
	if (loadError) return 0;
	return FoxitQPLHasFontResources(instanceID);
}

int FoxitQPLLinuxCPP1811::HasPageBox(int BoxType)
{
	if (loadError) return 0;
	return FoxitQPLHasPageBox(instanceID, BoxType);
}

int FoxitQPLLinuxCPP1811::HidePage()
{
	if (loadError) return 0;
	return FoxitQPLHidePage(instanceID);
}

int FoxitQPLLinuxCPP1811::ImageCount()
{
	if (loadError) return 0;
	return FoxitQPLImageCount(instanceID);
}

int FoxitQPLLinuxCPP1811::ImageFillColor()
{
	if (loadError) return 0;
	return FoxitQPLImageFillColor(instanceID);
}

int FoxitQPLLinuxCPP1811::ImageHeight()
{
	if (loadError) return 0;
	return FoxitQPLImageHeight(instanceID);
}

int FoxitQPLLinuxCPP1811::ImageHorizontalResolution()
{
	if (loadError) return 0;
	return FoxitQPLImageHorizontalResolution(instanceID);
}

int FoxitQPLLinuxCPP1811::ImageResolutionUnits()
{
	if (loadError) return 0;
	return FoxitQPLImageResolutionUnits(instanceID);
}

int FoxitQPLLinuxCPP1811::ImageType()
{
	if (loadError) return 0;
	return FoxitQPLImageType(instanceID);
}

int FoxitQPLLinuxCPP1811::ImageVerticalResolution()
{
	if (loadError) return 0;
	return FoxitQPLImageVerticalResolution(instanceID);
}

int FoxitQPLLinuxCPP1811::ImageWidth()
{
	if (loadError) return 0;
	return FoxitQPLImageWidth(instanceID);
}

int FoxitQPLLinuxCPP1811::ImportEMFFromFile(const std::wstring& FileName, int FontOptions, int GeneralOptions)
{
	if (loadError) return 0;
	return FoxitQPLImportEMFFromFile(instanceID, WideStringParm(FileName), 
		FontOptions, GeneralOptions);
}

int FoxitQPLLinuxCPP1811::InsertPages(int StartPage, int PageCount)
{
	if (loadError) return 0;
	return FoxitQPLInsertPages(instanceID, StartPage, PageCount);
}

int FoxitQPLLinuxCPP1811::InsertTableColumns(int TableID, int Position, int NewColumnCount)
{
	if (loadError) return 0;
	return FoxitQPLInsertTableColumns(instanceID, TableID, Position, 
		NewColumnCount);
}

int FoxitQPLLinuxCPP1811::InsertTableRows(int TableID, int Position, int NewRowCount)
{
	if (loadError) return 0;
	return FoxitQPLInsertTableRows(instanceID, TableID, Position, 
		NewRowCount);
}

int FoxitQPLLinuxCPP1811::IsAnnotFormField(int Index)
{
	if (loadError) return 0;
	return FoxitQPLIsAnnotFormField(instanceID, Index);
}

int FoxitQPLLinuxCPP1811::IsLinearized()
{
	if (loadError) return 0;
	return FoxitQPLIsLinearized(instanceID);
}

int FoxitQPLLinuxCPP1811::IsTaggedPDF()
{
	if (loadError) return 0;
	return FoxitQPLIsTaggedPDF(instanceID);
}

int FoxitQPLLinuxCPP1811::LastErrorCode()
{
	if (loadError) return 0;
	return FoxitQPLLastErrorCode(instanceID);
}

std::wstring FoxitQPLLinuxCPP1811::LastRenderError()
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLLastRenderError(instanceID);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

std::wstring FoxitQPLLinuxCPP1811::LibraryVersion()
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLLibraryVersion(instanceID);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

std::wstring FoxitQPLLinuxCPP1811::LibraryVersionEx()
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLLibraryVersionEx(instanceID);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

std::wstring FoxitQPLLinuxCPP1811::LicenseInfo()
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLLicenseInfo(instanceID);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

int FoxitQPLLinuxCPP1811::LinearizeFile(const std::wstring& InputFileName, const std::wstring& Password, const std::wstring& OutputFileName, int Options)
{
	if (loadError) return 0;
	return FoxitQPLLinearizeFile(instanceID, WideStringParm(InputFileName), 
		WideStringParm(Password), WideStringParm(OutputFileName), Options);
}

int FoxitQPLLinuxCPP1811::LoadFromFile(const std::wstring& FileName, const std::wstring& Password)
{
	if (loadError) return 0;
	return FoxitQPLLoadFromFile(instanceID, WideStringParm(FileName), 
		WideStringParm(Password));
}

int FoxitQPLLinuxCPP1811::LoadFromString(const std::string& Source, const std::wstring& Password)
{
	if (loadError) return 0;
	int sb1;
	char* sp1 = StringParm(Source, sb1);
	int result;
	result = FoxitQPLLoadFromString(instanceID, sp1, 
		WideStringParm(Password));
	if (sb1 == 1) FoxitQPLReleaseBuffer(instanceID, sp1);
	return result;
}

int FoxitQPLLinuxCPP1811::LoadState()
{
	if (loadError) return 0;
	return FoxitQPLLoadState(instanceID);
}

int FoxitQPLLinuxCPP1811::MergeDocument(int DocumentID)
{
	if (loadError) return 0;
	return FoxitQPLMergeDocument(instanceID, DocumentID);
}

int FoxitQPLLinuxCPP1811::MergeFileList(const std::wstring& ListName, const std::wstring& OutputFileName)
{
	if (loadError) return 0;
	return FoxitQPLMergeFileList(instanceID, WideStringParm(ListName), 
		WideStringParm(OutputFileName));
}

int FoxitQPLLinuxCPP1811::MergeFileListFast(const std::wstring& ListName, const std::wstring& OutputFileName)
{
	if (loadError) return 0;
	return FoxitQPLMergeFileListFast(instanceID, WideStringParm(ListName), 
		WideStringParm(OutputFileName));
}

int FoxitQPLLinuxCPP1811::MergeFiles(const std::wstring& FirstFileName, const std::wstring& SecondFileName, const std::wstring& OutputFileName)
{
	if (loadError) return 0;
	return FoxitQPLMergeFiles(instanceID, WideStringParm(FirstFileName), 
		WideStringParm(SecondFileName), WideStringParm(OutputFileName));
}

int FoxitQPLLinuxCPP1811::MergeTableCells(int TableID, int FirstRow, int FirstColumn, int LastRow, int LastColumn)
{
	if (loadError) return 0;
	return FoxitQPLMergeTableCells(instanceID, TableID, FirstRow, 
		FirstColumn, LastRow, LastColumn);
}

int FoxitQPLLinuxCPP1811::MoveContentStream(int FromPosition, int ToPosition)
{
	if (loadError) return 0;
	return FoxitQPLMoveContentStream(instanceID, FromPosition, ToPosition);
}

int FoxitQPLLinuxCPP1811::MoveOutlineAfter(int OutlineID, int SiblingID)
{
	if (loadError) return 0;
	return FoxitQPLMoveOutlineAfter(instanceID, OutlineID, SiblingID);
}

int FoxitQPLLinuxCPP1811::MoveOutlineBefore(int OutlineID, int SiblingID)
{
	if (loadError) return 0;
	return FoxitQPLMoveOutlineBefore(instanceID, OutlineID, SiblingID);
}

int FoxitQPLLinuxCPP1811::MovePage(int NewPosition)
{
	if (loadError) return 0;
	return FoxitQPLMovePage(instanceID, NewPosition);
}

int FoxitQPLLinuxCPP1811::MovePath(double NewX, double NewY)
{
	if (loadError) return 0;
	return FoxitQPLMovePath(instanceID, NewX, NewY);
}

int FoxitQPLLinuxCPP1811::MultiplyScale(double MultScaleBy)
{
	if (loadError) return 0;
	return FoxitQPLMultiplyScale(instanceID, MultScaleBy);
}

int FoxitQPLLinuxCPP1811::NewCMYKAxialShader(const std::wstring& ShaderName, double StartX, double StartY, double StartCyan, double StartMagenta, double StartYellow, double StartBlack, double EndX, double EndY, double EndCyan, double EndMagenta, double EndYellow, double EndBlack, int Extend)
{
	if (loadError) return 0;
	return FoxitQPLNewCMYKAxialShader(instanceID, WideStringParm(ShaderName), 
		StartX, StartY, StartCyan, StartMagenta, StartYellow, StartBlack, EndX, 
		EndY, EndCyan, EndMagenta, EndYellow, EndBlack, Extend);
}

int FoxitQPLLinuxCPP1811::NewChildFormField(int Index, const std::wstring& Title, int FieldType)
{
	if (loadError) return 0;
	return FoxitQPLNewChildFormField(instanceID, Index, 
		WideStringParm(Title), FieldType);
}

int FoxitQPLLinuxCPP1811::NewContentStream()
{
	if (loadError) return 0;
	return FoxitQPLNewContentStream(instanceID);
}

int FoxitQPLLinuxCPP1811::NewDestination(int DestPage, int Zoom, int DestType, double Left, double Top, double Right, double Bottom)
{
	if (loadError) return 0;
	return FoxitQPLNewDestination(instanceID, DestPage, Zoom, DestType, Left, 
		Top, Right, Bottom);
}

int FoxitQPLLinuxCPP1811::NewDocument()
{
	if (loadError) return 0;
	return FoxitQPLNewDocument(instanceID);
}

int FoxitQPLLinuxCPP1811::NewFormField(const std::wstring& Title, int FieldType)
{
	if (loadError) return 0;
	return FoxitQPLNewFormField(instanceID, WideStringParm(Title), FieldType);
}

int FoxitQPLLinuxCPP1811::NewNamedDestination(const std::wstring& DestName, int DestID)
{
	if (loadError) return 0;
	return FoxitQPLNewNamedDestination(instanceID, WideStringParm(DestName), 
		DestID);
}

int FoxitQPLLinuxCPP1811::NewOptionalContentGroup(const std::wstring& GroupName)
{
	if (loadError) return 0;
	return FoxitQPLNewOptionalContentGroup(instanceID, 
		WideStringParm(GroupName));
}

int FoxitQPLLinuxCPP1811::NewOutline(int Parent, const std::wstring& Title, int DestPage, double DestPosition)
{
	if (loadError) return 0;
	return FoxitQPLNewOutline(instanceID, Parent, WideStringParm(Title), 
		DestPage, DestPosition);
}

int FoxitQPLLinuxCPP1811::NewPage()
{
	if (loadError) return 0;
	return FoxitQPLNewPage(instanceID);
}

int FoxitQPLLinuxCPP1811::NewPages(int PageCount)
{
	if (loadError) return 0;
	return FoxitQPLNewPages(instanceID, PageCount);
}

int FoxitQPLLinuxCPP1811::NewPostScriptXObject(const std::wstring& PS)
{
	if (loadError) return 0;
	return FoxitQPLNewPostScriptXObject(instanceID, WideStringParm(PS));
}

int FoxitQPLLinuxCPP1811::NewRGBAxialShader(const std::wstring& ShaderName, double StartX, double StartY, double StartRed, double StartGreen, double StartBlue, double EndX, double EndY, double EndRed, double EndGreen, double EndBlue, int Extend)
{
	if (loadError) return 0;
	return FoxitQPLNewRGBAxialShader(instanceID, WideStringParm(ShaderName), 
		StartX, StartY, StartRed, StartGreen, StartBlue, EndX, EndY, EndRed, 
		EndGreen, EndBlue, Extend);
}

int FoxitQPLLinuxCPP1811::NewSignProcessFromFile(const std::wstring& InputFile, const std::wstring& Password)
{
	if (loadError) return 0;
	return FoxitQPLNewSignProcessFromFile(instanceID, 
		WideStringParm(InputFile), WideStringParm(Password));
}

int FoxitQPLLinuxCPP1811::NewSignProcessFromString(const std::string& Source, const std::wstring& Password)
{
	if (loadError) return 0;
	int sb1;
	char* sp1 = StringParm(Source, sb1);
	int result;
	result = FoxitQPLNewSignProcessFromString(instanceID, sp1, 
		WideStringParm(Password));
	if (sb1 == 1) FoxitQPLReleaseBuffer(instanceID, sp1);
	return result;
}

int FoxitQPLLinuxCPP1811::NewStaticOutline(int Parent, const std::wstring& Title)
{
	if (loadError) return 0;
	return FoxitQPLNewStaticOutline(instanceID, Parent, 
		WideStringParm(Title));
}

int FoxitQPLLinuxCPP1811::NewTilingPatternFromCapturedPage(const std::wstring& PatternName, int CaptureID)
{
	if (loadError) return 0;
	return FoxitQPLNewTilingPatternFromCapturedPage(instanceID, 
		WideStringParm(PatternName), CaptureID);
}

int FoxitQPLLinuxCPP1811::NoEmbedFontListAdd(const std::wstring& FontName)
{
	if (loadError) return 0;
	return FoxitQPLNoEmbedFontListAdd(instanceID, WideStringParm(FontName));
}

int FoxitQPLLinuxCPP1811::NoEmbedFontListCount()
{
	if (loadError) return 0;
	return FoxitQPLNoEmbedFontListCount(instanceID);
}

std::wstring FoxitQPLLinuxCPP1811::NoEmbedFontListGet(int Index)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLNoEmbedFontListGet(instanceID, Index);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

int FoxitQPLLinuxCPP1811::NoEmbedFontListRemoveAll()
{
	if (loadError) return 0;
	return FoxitQPLNoEmbedFontListRemoveAll(instanceID);
}

int FoxitQPLLinuxCPP1811::NoEmbedFontListRemoveIndex(int Index)
{
	if (loadError) return 0;
	return FoxitQPLNoEmbedFontListRemoveIndex(instanceID, Index);
}

int FoxitQPLLinuxCPP1811::NoEmbedFontListRemoveName(const std::wstring& FontName)
{
	if (loadError) return 0;
	return FoxitQPLNoEmbedFontListRemoveName(instanceID, 
		WideStringParm(FontName));
}

int FoxitQPLLinuxCPP1811::NormalizePage(int NormalizeOptions)
{
	if (loadError) return 0;
	return FoxitQPLNormalizePage(instanceID, NormalizeOptions);
}

int FoxitQPLLinuxCPP1811::OpenOutline(int OutlineID)
{
	if (loadError) return 0;
	return FoxitQPLOpenOutline(instanceID, OutlineID);
}

int FoxitQPLLinuxCPP1811::OptionalContentGroupCount()
{
	if (loadError) return 0;
	return FoxitQPLOptionalContentGroupCount(instanceID);
}

int FoxitQPLLinuxCPP1811::OutlineCount()
{
	if (loadError) return 0;
	return FoxitQPLOutlineCount(instanceID);
}

std::wstring FoxitQPLLinuxCPP1811::OutlineTitle(int OutlineID)
{
	if (loadError) return L"";
	wchar_t* result;
	result = FoxitQPLOutlineTitle(instanceID, OutlineID);
	std::wstring resultStr = WideStringResult(result, FoxitQPLStringResultLength(instanceID));
	return resultStr;
}

int FoxitQPLLinuxCPP1811::PageCount()
{
	if (loadError) return 0;
	return FoxitQPLPageCount(instanceID);
}

int FoxitQPLLinuxCPP1811::PageHasFontResources(int PageNumber)
{
	if (loadError) return 0;
	return FoxitQPLPageHasFontResources(instanceID, PageNumber);
}

double FoxitQPLLinuxCPP1811::PageHeight()
{
	if (loadError) return 0;
	return FoxitQPLPageHeight(instanceID);
}

int FoxitQPLLinuxCPP1811::PageJavaScriptAction(const std::wstring& ActionType, const std::wstring& JavaScript)
{
	if (loadError) return 0;
	return FoxitQPLPageJavaScriptAction(instanceID, 
		WideStringParm(ActionType), WideStringParm(JavaScript));
}

int FoxitQPLLinuxCPP1811::PageRotation()
{
	if (loadError) return 0;
	return FoxitQPLPageRotation(instanceID);
}

double FoxitQPLLinuxCPP1811::PageWidth()
{
	if (loadError) return 0;
	return FoxitQPLPageWidth(instanceID);
}

int FoxitQPLLinuxCPP1811::ReduceSize(int Options)
{
	if (loadError) return 0;
	return FoxitQPLReduceSize(instanceID, Options);
}

int FoxitQPLLinuxCPP1811::ReleaseImage(int ImageID)
{
	if (loadError) return 0;
	return FoxitQPLReleaseImage(instanceID, ImageID);
}

int FoxitQPLLinuxCPP1811::ReleaseImageList(int ImageListID)
{
	if (loadError) return 0;
	return FoxitQPLReleaseImageList(instanceID, ImageListID);
}

int FoxitQPLLinuxCPP1811::ReleaseSignProcess(int SignProcessID)
{
	if (loadError) return 0;
	return FoxitQPLReleaseSignProcess(instanceID, SignProcessID);
}

int FoxitQPLLinuxCPP1811::ReleaseStringList(int StringListID)
{
	if (loadError) return 0;
	return FoxitQPLReleaseStringList(instanceID, StringListID);
}

int FoxitQPLLinuxCPP1811::ReleaseTextBlocks(int TextBlockListID)
{
	if (loadError) return 0;
	return FoxitQPLReleaseTextBlocks(instanceID, TextBlockListID);
}

int FoxitQPLLinuxCPP1811::RemoveAppearanceStream(int Index)
{
	if (loadError) return 0;
	return FoxitQPLRemoveAppearanceStream(instanceID, Index);
}

int FoxitQPLLinuxCPP1811::RemoveCustomInformation(const std::wstring& Key)
{
	if (loadError) return 0;
	return FoxitQPLRemoveCustomInformation(instanceID, WideStringParm(Key));
}

int FoxitQPLLinuxCPP1811::RemoveDocument(int DocumentID)
{
	if (loadError) return 0;
	return FoxitQPLRemoveDocument(instanceID, DocumentID);
}

int FoxitQPLLinuxCPP1811::RemoveEmbeddedFile(int Index)
{
	if (loadError) return 0;
	return FoxitQPLRemoveEmbeddedFile(instanceID, Index);
}

int FoxitQPLLinuxCPP1811::RemoveFormFieldBackgroundColor(int Index)
{
	if (loadError) return 0;
	return FoxitQPLRemoveFormFieldBackgroundColor(instanceID, Index);
}

int FoxitQPLLinuxCPP1811::RemoveFormFieldBorderColor(int Index)
{
	if (loadError) return 0;
	return FoxitQPLRemoveFormFieldBorderColor(instanceID, Index);
}

int FoxitQPLLinuxCPP1811::RemoveFormFieldChoiceSub(int Index, const std::wstring& SubName)
{
	if (loadError) return 0;
	return FoxitQPLRemoveFormFieldChoiceSub(instanceID, Index, 
		WideStringParm(SubName));
}

int FoxitQPLLinuxCPP1811::RemoveGlobalJavaScript(const std::wstring& PackageName)
{
	if (loadError) return 0;
	return FoxitQPLRemoveGlobalJavaScript(instanceID, 
		WideStringParm(PackageName));
}

int FoxitQPLLinuxCPP1811::RemoveOpenAction()
{
	if (loadError) return 0;
	return FoxitQPLRemoveOpenAction(instanceID);
}

int FoxitQPLLinuxCPP1811::RemoveOutline(int OutlineID)
{
	if (loadError) return 0;
	return FoxitQPLRemoveOutline(instanceID, OutlineID);
}

int FoxitQPLLinuxCPP1811::RemovePageBox(int BoxType)
{
	if (loadError) return 0;
	return FoxitQPLRemovePageBox(instanceID, BoxType);
}

int FoxitQPLLinuxCPP1811::RemoveSharedContentStreams()
{
	if (loadError) return 0;
	return FoxitQPLRemoveSharedContentStreams(instanceID);
}

int FoxitQPLLinuxCPP1811::RemoveStyle(const std::wstring& StyleName)
{
	if (loadError) return 0;
	return FoxitQPLRemoveStyle(instanceID, WideStringParm(StyleName));
}

int FoxitQPLLinuxCPP1811::RemoveUsageRights()
{
	if (loadError) return 0;
	return FoxitQPLRemoveUsageRights(instanceID);
}

int FoxitQPLLinuxCPP1811::RemoveXFAEntries(int Options)
{
	if (loadError) return 0;
	return FoxitQPLRemoveXFAEntries(instanceID, Options);
}

int FoxitQPLLinuxCPP1811::RenderAsMultipageTIFFToFile(double DPI, const std::wstring& PageRanges, int ImageOptions, int OutputOptions, const std::wstring& FileName)
{
	if (loadError) return 0;
	return FoxitQPLRenderAsMultipageTIFFToFile(instanceID, DPI, 
		WideStringParm(PageRanges), ImageOptions, OutputOptions, 
		WideStringParm(FileName));
}

int FoxitQPLLinuxCPP1811::RenderDocumentToFile(double DPI, int StartPage, int EndPage, int Options, const std::wstring& FileName)
{
	if (loadError) return 0;
	return FoxitQPLRenderDocumentToFile(instanceID, DPI, StartPage, EndPage, 
		Options, WideStringParm(FileName));
}

int FoxitQPLLinuxCPP1811::RenderPageToFile(double DPI, int Page, int Options, const std::wstring& FileName)
{
	if (loadError) return 0;
	return FoxitQPLRenderPageToFile(instanceID, DPI, Page, Options, 
		WideStringParm(FileName));
}

std::string FoxitQPLLinuxCPP1811::RenderPageToString(double DPI, int Page, int Options)
{
	if (loadError) return "";
	char* result;
	result = FoxitQPLRenderPageToString(instanceID, DPI, Page, Options);
	std::string resultStr(result, FoxitQPLAnsiStringResultLength(instanceID));
	return resultStr;
}

int FoxitQPLLinuxCPP1811::ReplaceFonts(int Options)
{
	if (loadError) return 0;
	return FoxitQPLReplaceFonts(instanceID, Options);
}

int FoxitQPLLinuxCPP1811::ReplaceImage(int OriginalImageID, int NewImageID)
{
	if (loadError) return 0;
	return FoxitQPLReplaceImage(instanceID, OriginalImageID, NewImageID);
}

int FoxitQPLLinuxCPP1811::ReplaceTag(const std::wstring& Tag, const std::wstring& NewValue)
{
	if (loadError) return 0;
	return FoxitQPLReplaceTag(instanceID, WideStringParm(Tag), 
		WideStringParm(NewValue));
}

int FoxitQPLLinuxCPP1811::RetrieveCustomDataToFile(const std::wstring& Key, const std::wstring& FileName, int Location)
{
	if (loadError) return 0;
	return FoxitQPLRetrieveCustomDataToFile(instanceID, WideStringParm(Key), 
		WideStringParm(FileName), Location);
}

std::string FoxitQPLLinuxCPP1811::RetrieveCustomDataToString(const std::wstring& Key, int Location)
{
	if (loadError) return "";
	char* result;
	result = FoxitQPLRetrieveCustomDataToString(instanceID, 
		WideStringParm(Key), Location);
	std::string resultStr(result, FoxitQPLAnsiStringResultLength(instanceID));
	return resultStr;
}

int FoxitQPLLinuxCPP1811::ReverseImage(int Reset)
{
	if (loadError) return 0;
	return FoxitQPLReverseImage(instanceID, Reset);
}

int FoxitQPLLinuxCPP1811::RotatePage(int PageRotation)
{
	if (loadError) return 0;
	return FoxitQPLRotatePage(instanceID, PageRotation);
}

int FoxitQPLLinuxCPP1811::SaveFontToFile(const std::wstring& FileName)
{
	if (loadError) return 0;
	return FoxitQPLSaveFontToFile(instanceID, WideStringParm(FileName));
}

int FoxitQPLLinuxCPP1811::SaveImageListItemDataToFile(int ImageListID, int ImageIndex, int Options, const std::wstring& ImageFileName)
{
	if (loadError) return 0;
	return FoxitQPLSaveImageListItemDataToFile(instanceID, ImageListID, 
		ImageIndex, Options, WideStringParm(ImageFileName));
}

int FoxitQPLLinuxCPP1811::SaveImageToFile(const std::wstring& FileName)
{
	if (loadError) return 0;
	return FoxitQPLSaveImageToFile(instanceID, WideStringParm(FileName));
}

std::string FoxitQPLLinuxCPP1811::SaveImageToString()
{
	if (loadError) return "";
	char* result;
	result = FoxitQPLSaveImageToString(instanceID);
	std::string resultStr(result, FoxitQPLAnsiStringResultLength(instanceID));
	return resultStr;
}

int FoxitQPLLinuxCPP1811::SaveState()
{
	if (loadError) return 0;
	return FoxitQPLSaveState(instanceID);
}

int FoxitQPLLinuxCPP1811::SaveStyle(const std::wstring& StyleName)
{
	if (loadError) return 0;
	return FoxitQPLSaveStyle(instanceID, WideStringParm(StyleName));
}

int FoxitQPLLinuxCPP1811::SaveToFile(const std::wstring& FileName)
{
	if (loadError) return 0;
	return FoxitQPLSaveToFile(instanceID, WideStringParm(FileName));
}

std::string FoxitQPLLinuxCPP1811::SaveToString()
{
	if (loadError) return "";
	char* result;
	result = FoxitQPLSaveToString(instanceID);
	std::string resultStr(result, FoxitQPLAnsiStringResultLength(instanceID));
	return resultStr;
}

int FoxitQPLLinuxCPP1811::SecurityInfo(int SecurityItem)
{
	if (loadError) return 0;
	return FoxitQPLSecurityInfo(instanceID, SecurityItem);
}

int FoxitQPLLinuxCPP1811::SelectContentStream(int NewIndex)
{
	if (loadError) return 0;
	return FoxitQPLSelectContentStream(instanceID, NewIndex);
}

int FoxitQPLLinuxCPP1811::SelectDocument(int DocumentID)
{
	if (loadError) return 0;
	return FoxitQPLSelectDocument(instanceID, DocumentID);
}

int FoxitQPLLinuxCPP1811::SelectFont(int FontID)
{
	if (loadError) return 0;
	return FoxitQPLSelectFont(instanceID, FontID);
}

int FoxitQPLLinuxCPP1811::SelectImage(int ImageID)
{
	if (loadError) return 0;
	return FoxitQPLSelectImage(instanceID, ImageID);
}

int FoxitQPLLinuxCPP1811::SelectPage(int PageNumber)
{
	if (loadError) return 0;
	return FoxitQPLSelectPage(instanceID, PageNumber);
}

int FoxitQPLLinuxCPP1811::SelectedDocument()
{
	if (loadError) return 0;
	return FoxitQPLSelectedDocument(instanceID);
}

int FoxitQPLLinuxCPP1811::SelectedFont()
{
	if (loadError) return 0;
	return FoxitQPLSelectedFont(instanceID);
}

int FoxitQPLLinuxCPP1811::SelectedImage()
{
	if (loadError) return 0;
	return FoxitQPLSelectedImage(instanceID);
}

int FoxitQPLLinuxCPP1811::SelectedPage()
{
	if (loadError) return 0;
	return FoxitQPLSelectedPage(instanceID);
}

int FoxitQPLLinuxCPP1811::SetActionURL(int ActionID, const std::wstring& NewURL)
{
	if (loadError) return 0;
	return FoxitQPLSetActionURL(instanceID, ActionID, WideStringParm(NewURL));
}

int FoxitQPLLinuxCPP1811::SetAnnotBorderColor(int Index, double Red, double Green, double Blue)
{
	if (loadError) return 0;
	return FoxitQPLSetAnnotBorderColor(instanceID, Index, Red, Green, Blue);
}

int FoxitQPLLinuxCPP1811::SetAnnotBorderStyle(int Index, double Width, int Style, double DashOn, double DashOff)
{
	if (loadError) return 0;
	return FoxitQPLSetAnnotBorderStyle(instanceID, Index, Width, Style, 
		DashOn, DashOff);
}

int FoxitQPLLinuxCPP1811::SetAnnotContents(int Index, const std::wstring& NewContents)
{
	if (loadError) return 0;
	return FoxitQPLSetAnnotContents(instanceID, Index, 
		WideStringParm(NewContents));
}

int FoxitQPLLinuxCPP1811::SetAnnotDblProperty(int Index, int Tag, double NewValue)
{
	if (loadError) return 0;
	return FoxitQPLSetAnnotDblProperty(instanceID, Index, Tag, NewValue);
}

int FoxitQPLLinuxCPP1811::SetAnnotDest(int Index, int DestID)
{
	if (loadError) return 0;
	return FoxitQPLSetAnnotDest(instanceID, Index, DestID);
}

int FoxitQPLLinuxCPP1811::SetAnnotIntProperty(int Index, int Tag, int NewValue)
{
	if (loadError) return 0;
	return FoxitQPLSetAnnotIntProperty(instanceID, Index, Tag, NewValue);
}

int FoxitQPLLinuxCPP1811::SetAnnotOptional(int Index, int OptionalContentGroupID)
{
	if (loadError) return 0;
	return FoxitQPLSetAnnotOptional(instanceID, Index, 
		OptionalContentGroupID);
}

int FoxitQPLLinuxCPP1811::SetAnnotQuadPoints(int Index, int QuadNumber, double X1, double Y1, double X2, double Y2, double X3, double Y3, double X4, double Y4)
{
	if (loadError) return 0;
	return FoxitQPLSetAnnotQuadPoints(instanceID, Index, QuadNumber, X1, Y1, 
		X2, Y2, X3, Y3, X4, Y4);
}

int FoxitQPLLinuxCPP1811::SetAnnotRect(int Index, double Left, double Top, double Width, double Height)
{
	if (loadError) return 0;
	return FoxitQPLSetAnnotRect(instanceID, Index, Left, Top, Width, Height);
}

int FoxitQPLLinuxCPP1811::SetAnnotStrProperty(int Index, int Tag, const std::wstring& NewValue)
{
	if (loadError) return 0;
	return FoxitQPLSetAnnotStrProperty(instanceID, Index, Tag, 
		WideStringParm(NewValue));
}

int FoxitQPLLinuxCPP1811::SetAnsiMode(int NewAnsiMode)
{
	if (loadError) return 0;
	return FoxitQPLSetAnsiMode(instanceID, NewAnsiMode);
}

int FoxitQPLLinuxCPP1811::SetAppendInputFromString(const std::string& Source)
{
	if (loadError) return 0;
	int sb1;
	char* sp1 = StringParm(Source, sb1);
	int result;
	result = FoxitQPLSetAppendInputFromString(instanceID, sp1);
	if (sb1 == 1) FoxitQPLReleaseBuffer(instanceID, sp1);
	return result;
}

int FoxitQPLLinuxCPP1811::SetBaseURL(const std::wstring& NewBaseURL)
{
	if (loadError) return 0;
	return FoxitQPLSetBaseURL(instanceID, WideStringParm(NewBaseURL));
}

int FoxitQPLLinuxCPP1811::SetBlendMode(int BlendMode)
{
	if (loadError) return 0;
	return FoxitQPLSetBlendMode(instanceID, BlendMode);
}

int FoxitQPLLinuxCPP1811::SetBreakString(const std::wstring& NewBreakString)
{
	if (loadError) return 0;
	return FoxitQPLSetBreakString(instanceID, WideStringParm(NewBreakString));
}

int FoxitQPLLinuxCPP1811::SetCSDictEPSG(int CSDictID, int NewEPSG)
{
	if (loadError) return 0;
	return FoxitQPLSetCSDictEPSG(instanceID, CSDictID, NewEPSG);
}

int FoxitQPLLinuxCPP1811::SetCSDictType(int CSDictID, int NewDictType)
{
	if (loadError) return 0;
	return FoxitQPLSetCSDictType(instanceID, CSDictID, NewDictType);
}

int FoxitQPLLinuxCPP1811::SetCSDictWKT(int CSDictID, const std::wstring& NewWKT)
{
	if (loadError) return 0;
	return FoxitQPLSetCSDictWKT(instanceID, CSDictID, WideStringParm(NewWKT));
}

int FoxitQPLLinuxCPP1811::SetCapturedPageOptional(int CaptureID, int OptionalContentGroupID)
{
	if (loadError) return 0;
	return FoxitQPLSetCapturedPageOptional(instanceID, CaptureID, 
		OptionalContentGroupID);
}

int FoxitQPLLinuxCPP1811::SetCapturedPageTransparencyGroup(int CaptureID, int CS, int Isolate, int Knockout)
{
	if (loadError) return 0;
	return FoxitQPLSetCapturedPageTransparencyGroup(instanceID, CaptureID, 
		CS, Isolate, Knockout);
}

int FoxitQPLLinuxCPP1811::SetCatalogInformation(const std::wstring& Key, const std::wstring& NewValue)
{
	if (loadError) return 0;
	return FoxitQPLSetCatalogInformation(instanceID, WideStringParm(Key), 
		WideStringParm(NewValue));
}

int FoxitQPLLinuxCPP1811::SetCharWidth(int CharCode, int NewWidth)
{
	if (loadError) return 0;
	return FoxitQPLSetCharWidth(instanceID, CharCode, NewWidth);
}

int FoxitQPLLinuxCPP1811::SetClippingPath()
{
	if (loadError) return 0;
	return FoxitQPLSetClippingPath(instanceID);
}

int FoxitQPLLinuxCPP1811::SetClippingPathEvenOdd()
{
	if (loadError) return 0;
	return FoxitQPLSetClippingPathEvenOdd(instanceID);
}

int FoxitQPLLinuxCPP1811::SetCompatibility(int CompatibilityItem, int CompatibilityMode)
{
	if (loadError) return 0;
	return FoxitQPLSetCompatibility(instanceID, CompatibilityItem, 
		CompatibilityMode);
}

int FoxitQPLLinuxCPP1811::SetContentStreamFromString(const std::string& Source)
{
	if (loadError) return 0;
	int sb1;
	char* sp1 = StringParm(Source, sb1);
	int result;
	result = FoxitQPLSetContentStreamFromString(instanceID, sp1);
	if (sb1 == 1) FoxitQPLReleaseBuffer(instanceID, sp1);
	return result;
}

int FoxitQPLLinuxCPP1811::SetContentStreamOptional(int OptionalContentGroupID)
{
	if (loadError) return 0;
	return FoxitQPLSetContentStreamOptional(instanceID, 
		OptionalContentGroupID);
}

int FoxitQPLLinuxCPP1811::SetCropBox(double Left, double Top, double Width, double Height)
{
	if (loadError) return 0;
	return FoxitQPLSetCropBox(instanceID, Left, Top, Width, Height);
}

int FoxitQPLLinuxCPP1811::SetCustomInformation(const std::wstring& Key, const std::wstring& NewValue)
{
	if (loadError) return 0;
	return FoxitQPLSetCustomInformation(instanceID, WideStringParm(Key), 
		WideStringParm(NewValue));
}

int FoxitQPLLinuxCPP1811::SetCustomLineDash(const std::wstring& DashPattern, double DashPhase)
{
	if (loadError) return 0;
	return FoxitQPLSetCustomLineDash(instanceID, WideStringParm(DashPattern), 
		DashPhase);
}

int FoxitQPLLinuxCPP1811::SetDestProperties(int DestID, int Zoom, int DestType, double Left, double Top, double Right, double Bottom)
{
	if (loadError) return 0;
	return FoxitQPLSetDestProperties(instanceID, DestID, Zoom, DestType, 
		Left, Top, Right, Bottom);
}

int FoxitQPLLinuxCPP1811::SetDestValue(int DestID, int ValueKey, double NewValue)
{
	if (loadError) return 0;
	return FoxitQPLSetDestValue(instanceID, DestID, ValueKey, NewValue);
}

int FoxitQPLLinuxCPP1811::SetDocumentMetadata(const std::wstring& XMP)
{
	if (loadError) return 0;
	return FoxitQPLSetDocumentMetadata(instanceID, WideStringParm(XMP));
}

int FoxitQPLLinuxCPP1811::SetEmbeddedFileStrProperty(int Index, int Tag, const std::wstring& NewValue)
{
	if (loadError) return 0;
	return FoxitQPLSetEmbeddedFileStrProperty(instanceID, Index, Tag, 
		WideStringParm(NewValue));
}

int FoxitQPLLinuxCPP1811::SetFillColor(double Red, double Green, double Blue)
{
	if (loadError) return 0;
	return FoxitQPLSetFillColor(instanceID, Red, Green, Blue);
}

int FoxitQPLLinuxCPP1811::SetFillColorCMYK(double C, double M, double Y, double K)
{
	if (loadError) return 0;
	return FoxitQPLSetFillColorCMYK(instanceID, C, M, Y, K);
}

int FoxitQPLLinuxCPP1811::SetFillColorSep(const std::wstring& ColorName, double Tint)
{
	if (loadError) return 0;
	return FoxitQPLSetFillColorSep(instanceID, WideStringParm(ColorName), 
		Tint);
}

int FoxitQPLLinuxCPP1811::SetFillShader(const std::wstring& ShaderName)
{
	if (loadError) return 0;
	return FoxitQPLSetFillShader(instanceID, WideStringParm(ShaderName));
}

int FoxitQPLLinuxCPP1811::SetFillTilingPattern(const std::wstring& PatternName)
{
	if (loadError) return 0;
	return FoxitQPLSetFillTilingPattern(instanceID, 
		WideStringParm(PatternName));
}

int FoxitQPLLinuxCPP1811::SetFindImagesMode(int NewFindImagesMode)
{
	if (loadError) return 0;
	return FoxitQPLSetFindImagesMode(instanceID, NewFindImagesMode);
}

int FoxitQPLLinuxCPP1811::SetFontEncoding(int Encoding)
{
	if (loadError) return 0;
	return FoxitQPLSetFontEncoding(instanceID, Encoding);
}

int FoxitQPLLinuxCPP1811::SetFontFlags(int Fixed, int Serif, int Symbolic, int Script, int Italic, int AllCap, int SmallCap, int ForceBold)
{
	if (loadError) return 0;
	return FoxitQPLSetFontFlags(instanceID, Fixed, Serif, Symbolic, Script, 
		Italic, AllCap, SmallCap, ForceBold);
}

int FoxitQPLLinuxCPP1811::SetFormFieldAlignment(int Index, int Alignment)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldAlignment(instanceID, Index, Alignment);
}

int FoxitQPLLinuxCPP1811::SetFormFieldAnnotFlags(int Index, int NewFlags)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldAnnotFlags(instanceID, Index, NewFlags);
}

int FoxitQPLLinuxCPP1811::SetFormFieldAppearanceFromString(int Index, const std::string& Source, int FontID, const std::wstring& FontReference)
{
	if (loadError) return 0;
	int sb1;
	char* sp1 = StringParm(Source, sb1);
	int result;
	result = FoxitQPLSetFormFieldAppearanceFromString(instanceID, Index, sp1, 
		FontID, WideStringParm(FontReference));
	if (sb1 == 1) FoxitQPLReleaseBuffer(instanceID, sp1);
	return result;
}

int FoxitQPLLinuxCPP1811::SetFormFieldBackgroundColor(int Index, double Red, double Green, double Blue)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldBackgroundColor(instanceID, Index, Red, Green, 
		Blue);
}

int FoxitQPLLinuxCPP1811::SetFormFieldBackgroundColorCMYK(int Index, double C, double M, double Y, double K)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldBackgroundColorCMYK(instanceID, Index, C, M, 
		Y, K);
}

int FoxitQPLLinuxCPP1811::SetFormFieldBackgroundColorGray(int Index, double Gray)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldBackgroundColorGray(instanceID, Index, Gray);
}

int FoxitQPLLinuxCPP1811::SetFormFieldBackgroundColorSep(int Index, const std::wstring& ColorName, double Tint)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldBackgroundColorSep(instanceID, Index, 
		WideStringParm(ColorName), Tint);
}

int FoxitQPLLinuxCPP1811::SetFormFieldBorderColor(int Index, double Red, double Green, double Blue)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldBorderColor(instanceID, Index, Red, Green, 
		Blue);
}

int FoxitQPLLinuxCPP1811::SetFormFieldBorderColorCMYK(int Index, double C, double M, double Y, double K)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldBorderColorCMYK(instanceID, Index, C, M, Y, K);
}

int FoxitQPLLinuxCPP1811::SetFormFieldBorderColorGray(int Index, double Gray)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldBorderColorGray(instanceID, Index, Gray);
}

int FoxitQPLLinuxCPP1811::SetFormFieldBorderColorSep(int Index, const std::wstring& ColorName, double Tint)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldBorderColorSep(instanceID, Index, 
		WideStringParm(ColorName), Tint);
}

int FoxitQPLLinuxCPP1811::SetFormFieldBorderStyle(int Index, double Width, int Style, double DashOn, double DashOff)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldBorderStyle(instanceID, Index, Width, Style, 
		DashOn, DashOff);
}

int FoxitQPLLinuxCPP1811::SetFormFieldBounds(int Index, double Left, double Top, double Width, double Height)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldBounds(instanceID, Index, Left, Top, Width, 
		Height);
}

int FoxitQPLLinuxCPP1811::SetFormFieldCalcOrder(int Index, int Order)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldCalcOrder(instanceID, Index, Order);
}

int FoxitQPLLinuxCPP1811::SetFormFieldCaption(int Index, const std::wstring& NewCaption)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldCaption(instanceID, Index, 
		WideStringParm(NewCaption));
}

int FoxitQPLLinuxCPP1811::SetFormFieldCheckStyle(int Index, int CheckStyle, int Position)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldCheckStyle(instanceID, Index, CheckStyle, 
		Position);
}

int FoxitQPLLinuxCPP1811::SetFormFieldChildTitle(int Index, const std::wstring& NewTitle)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldChildTitle(instanceID, Index, 
		WideStringParm(NewTitle));
}

int FoxitQPLLinuxCPP1811::SetFormFieldChoiceSub(int Index, int SubIndex, const std::wstring& SubName, const std::wstring& DisplayName)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldChoiceSub(instanceID, Index, SubIndex, 
		WideStringParm(SubName), WideStringParm(DisplayName));
}

int FoxitQPLLinuxCPP1811::SetFormFieldChoiceType(int Index, int ChoiceType)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldChoiceType(instanceID, Index, ChoiceType);
}

int FoxitQPLLinuxCPP1811::SetFormFieldColor(int Index, double Red, double Green, double Blue)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldColor(instanceID, Index, Red, Green, Blue);
}

int FoxitQPLLinuxCPP1811::SetFormFieldColorCMYK(int Index, double C, double M, double Y, double K)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldColorCMYK(instanceID, Index, C, M, Y, K);
}

int FoxitQPLLinuxCPP1811::SetFormFieldColorSep(int Index, const std::wstring& ColorName, double Tint)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldColorSep(instanceID, Index, 
		WideStringParm(ColorName), Tint);
}

int FoxitQPLLinuxCPP1811::SetFormFieldComb(int Index, int Comb)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldComb(instanceID, Index, Comb);
}

int FoxitQPLLinuxCPP1811::SetFormFieldCustomDict(int Index, const std::wstring& Key, const std::wstring& NewValue, int StorageType, int Options)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldCustomDict(instanceID, Index, 
		WideStringParm(Key), WideStringParm(NewValue), StorageType, Options);
}

int FoxitQPLLinuxCPP1811::SetFormFieldDefaultValue(int Index, const std::wstring& NewDefaultValue)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldDefaultValue(instanceID, Index, 
		WideStringParm(NewDefaultValue));
}

int FoxitQPLLinuxCPP1811::SetFormFieldDefaultValueEx(int Index, const std::wstring& NewDefaultValue, int Options)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldDefaultValueEx(instanceID, Index, 
		WideStringParm(NewDefaultValue), Options);
}

int FoxitQPLLinuxCPP1811::SetFormFieldDescription(int Index, const std::wstring& NewDescription)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldDescription(instanceID, Index, 
		WideStringParm(NewDescription));
}

int FoxitQPLLinuxCPP1811::SetFormFieldFlags(int Index, int NewFlags)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldFlags(instanceID, Index, NewFlags);
}

int FoxitQPLLinuxCPP1811::SetFormFieldFont(int Index, int FontIndex)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldFont(instanceID, Index, FontIndex);
}

int FoxitQPLLinuxCPP1811::SetFormFieldFormatMode(int NewFormatMode)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldFormatMode(instanceID, NewFormatMode);
}

int FoxitQPLLinuxCPP1811::SetFormFieldHighlightMode(int Index, int NewMode)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldHighlightMode(instanceID, Index, NewMode);
}

int FoxitQPLLinuxCPP1811::SetFormFieldIcon(int Index, int IconType, int CaptureID)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldIcon(instanceID, Index, IconType, CaptureID);
}

int FoxitQPLLinuxCPP1811::SetFormFieldIconStyle(int Index, int Placement, int Scale, int ScaleType, int HorizontalShift, int VerticalShift)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldIconStyle(instanceID, Index, Placement, Scale, 
		ScaleType, HorizontalShift, VerticalShift);
}

int FoxitQPLLinuxCPP1811::SetFormFieldLockAction(int Index, int LockAction, const std::wstring& FieldList, const std::wstring& Delimiter)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldLockAction(instanceID, Index, LockAction, 
		WideStringParm(FieldList), WideStringParm(Delimiter));
}

int FoxitQPLLinuxCPP1811::SetFormFieldMaxLen(int Index, int NewMaxLen)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldMaxLen(instanceID, Index, NewMaxLen);
}

int FoxitQPLLinuxCPP1811::SetFormFieldMetadata(int Index, const std::wstring& XMP)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldMetadata(instanceID, Index, 
		WideStringParm(XMP));
}

int FoxitQPLLinuxCPP1811::SetFormFieldNoExport(int Index, int NoExport)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldNoExport(instanceID, Index, NoExport);
}

int FoxitQPLLinuxCPP1811::SetFormFieldOptional(int Index, int OptionalContentGroupID)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldOptional(instanceID, Index, 
		OptionalContentGroupID);
}

int FoxitQPLLinuxCPP1811::SetFormFieldPage(int Index, int NewPage)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldPage(instanceID, Index, NewPage);
}

int FoxitQPLLinuxCPP1811::SetFormFieldPrintable(int Index, int Printable)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldPrintable(instanceID, Index, Printable);
}

int FoxitQPLLinuxCPP1811::SetFormFieldReadOnly(int Index, int ReadOnly)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldReadOnly(instanceID, Index, ReadOnly);
}

int FoxitQPLLinuxCPP1811::SetFormFieldRequired(int Index, int Required)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldRequired(instanceID, Index, Required);
}

int FoxitQPLLinuxCPP1811::SetFormFieldResetAction(int Index, const std::wstring& ActionType)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldResetAction(instanceID, Index, 
		WideStringParm(ActionType));
}

int FoxitQPLLinuxCPP1811::SetFormFieldRichTextString(int Index, const std::wstring& Key, const std::wstring& NewValue)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldRichTextString(instanceID, Index, 
		WideStringParm(Key), WideStringParm(NewValue));
}

int FoxitQPLLinuxCPP1811::SetFormFieldRotation(int Index, int Angle)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldRotation(instanceID, Index, Angle);
}

int FoxitQPLLinuxCPP1811::SetFormFieldSignatureImage(int Index, int ImageID, int Options)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldSignatureImage(instanceID, Index, ImageID, 
		Options);
}

int FoxitQPLLinuxCPP1811::SetFormFieldStandardFont(int Index, int StandardFontID)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldStandardFont(instanceID, Index, 
		StandardFontID);
}

int FoxitQPLLinuxCPP1811::SetFormFieldSubmitAction(int Index, const std::wstring& ActionType, const std::wstring& Link)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldSubmitAction(instanceID, Index, 
		WideStringParm(ActionType), WideStringParm(Link));
}

int FoxitQPLLinuxCPP1811::SetFormFieldSubmitActionEx(int Index, const std::wstring& ActionType, const std::wstring& Link, int Flags)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldSubmitActionEx(instanceID, Index, 
		WideStringParm(ActionType), WideStringParm(Link), Flags);
}

int FoxitQPLLinuxCPP1811::SetFormFieldTabOrder(int Index, int Order)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldTabOrder(instanceID, Index, Order);
}

int FoxitQPLLinuxCPP1811::SetFormFieldTextFlags(int Index, int Multiline, int Password, int FileSelect, int DoNotSpellCheck, int DoNotScroll)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldTextFlags(instanceID, Index, Multiline, 
		Password, FileSelect, DoNotSpellCheck, DoNotScroll);
}

int FoxitQPLLinuxCPP1811::SetFormFieldTextSize(int Index, double NewTextSize)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldTextSize(instanceID, Index, NewTextSize);
}

int FoxitQPLLinuxCPP1811::SetFormFieldTitle(int Index, const std::wstring& NewTitle)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldTitle(instanceID, Index, 
		WideStringParm(NewTitle));
}

int FoxitQPLLinuxCPP1811::SetFormFieldValue(int Index, const std::wstring& NewValue)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldValue(instanceID, Index, 
		WideStringParm(NewValue));
}

int FoxitQPLLinuxCPP1811::SetFormFieldValueByTitle(const std::wstring& Title, const std::wstring& NewValue)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldValueByTitle(instanceID, 
		WideStringParm(Title), WideStringParm(NewValue));
}

int FoxitQPLLinuxCPP1811::SetFormFieldValueEx(int Index, const std::wstring& NewValue, int Options)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldValueEx(instanceID, Index, 
		WideStringParm(NewValue), Options);
}

int FoxitQPLLinuxCPP1811::SetFormFieldVisible(int Index, int Visible)
{
	if (loadError) return 0;
	return FoxitQPLSetFormFieldVisible(instanceID, Index, Visible);
}

int FoxitQPLLinuxCPP1811::SetGlobalMeasurementUnits(int MeasurementUnits)
{
	if (loadError) return 0;
	return FoxitQPLSetGlobalMeasurementUnits(instanceID, MeasurementUnits);
}

int FoxitQPLLinuxCPP1811::SetGlobalOrigin(int Origin)
{
	if (loadError) return 0;
	return FoxitQPLSetGlobalOrigin(instanceID, Origin);
}

int FoxitQPLLinuxCPP1811::SetGlobalScale(int NewScale)
{
	if (loadError) return 0;
	return FoxitQPLSetGlobalScale(instanceID, NewScale);
}

int FoxitQPLLinuxCPP1811::SetHTMLBoldFont(const std::wstring& FontSet, int FontID)
{
	if (loadError) return 0;
	return FoxitQPLSetHTMLBoldFont(instanceID, WideStringParm(FontSet), 
		FontID);
}

int FoxitQPLLinuxCPP1811::SetHTMLBoldItalicFont(const std::wstring& FontSet, int FontID)
{
	if (loadError) return 0;
	return FoxitQPLSetHTMLBoldItalicFont(instanceID, WideStringParm(FontSet), 
		FontID);
}

int FoxitQPLLinuxCPP1811::SetHTMLItalicFont(const std::wstring& FontSet, int FontID)
{
	if (loadError) return 0;
	return FoxitQPLSetHTMLItalicFont(instanceID, WideStringParm(FontSet), 
		FontID);
}

int FoxitQPLLinuxCPP1811::SetHTMLNormalFont(const std::wstring& FontSet, int FontID)
{
	if (loadError) return 0;
	return FoxitQPLSetHTMLNormalFont(instanceID, WideStringParm(FontSet), 
		FontID);
}

int FoxitQPLLinuxCPP1811::SetHeaderCommentsFromString(const std::string& Source)
{
	if (loadError) return 0;
	int sb1;
	char* sp1 = StringParm(Source, sb1);
	int result;
	result = FoxitQPLSetHeaderCommentsFromString(instanceID, sp1);
	if (sb1 == 1) FoxitQPLReleaseBuffer(instanceID, sp1);
	return result;
}

int FoxitQPLLinuxCPP1811::SetImageAsMask(int MaskType)
{
	if (loadError) return 0;
	return FoxitQPLSetImageAsMask(instanceID, MaskType);
}

int FoxitQPLLinuxCPP1811::SetImageMask(double FromRed, double FromGreen, double FromBlue, double ToRed, double ToGreen, double ToBlue)
{
	if (loadError) return 0;
	return FoxitQPLSetImageMask(instanceID, FromRed, FromGreen, FromBlue, 
		ToRed, ToGreen, ToBlue);
}

int FoxitQPLLinuxCPP1811::SetImageMaskCMYK(double FromC, double FromM, double FromY, double FromK, double ToC, double ToM, double ToY, double ToK)
{
	if (loadError) return 0;
	return FoxitQPLSetImageMaskCMYK(instanceID, FromC, FromM, FromY, FromK, 
		ToC, ToM, ToY, ToK);
}

int FoxitQPLLinuxCPP1811::SetImageMaskFromImage(int ImageID)
{
	if (loadError) return 0;
	return FoxitQPLSetImageMaskFromImage(instanceID, ImageID);
}

int FoxitQPLLinuxCPP1811::SetImageOptional(int OptionalContentGroupID)
{
	if (loadError) return 0;
	return FoxitQPLSetImageOptional(instanceID, OptionalContentGroupID);
}

int FoxitQPLLinuxCPP1811::SetImageResolution(int Horizontal, int Vertical, int Units)
{
	if (loadError) return 0;
	return FoxitQPLSetImageResolution(instanceID, Horizontal, Vertical, 
		Units);
}

int FoxitQPLLinuxCPP1811::SetInformation(int Key, const std::wstring& NewValue)
{
	if (loadError) return 0;
	return FoxitQPLSetInformation(instanceID, Key, WideStringParm(NewValue));
}

int FoxitQPLLinuxCPP1811::SetJPEGQuality(int Quality)
{
	if (loadError) return 0;
	return FoxitQPLSetJPEGQuality(instanceID, Quality);
}

int FoxitQPLLinuxCPP1811::SetJavaScriptMode(int JSMode)
{
	if (loadError) return 0;
	return FoxitQPLSetJavaScriptMode(instanceID, JSMode);
}

int FoxitQPLLinuxCPP1811::SetKerning(const std::wstring& CharPair, int Adjustment)
{
	if (loadError) return 0;
	return FoxitQPLSetKerning(instanceID, WideStringParm(CharPair), 
		Adjustment);
}

int FoxitQPLLinuxCPP1811::SetLineCap(int LineCap)
{
	if (loadError) return 0;
	return FoxitQPLSetLineCap(instanceID, LineCap);
}

int FoxitQPLLinuxCPP1811::SetLineColor(double Red, double Green, double Blue)
{
	if (loadError) return 0;
	return FoxitQPLSetLineColor(instanceID, Red, Green, Blue);
}

int FoxitQPLLinuxCPP1811::SetLineColorCMYK(double C, double M, double Y, double K)
{
	if (loadError) return 0;
	return FoxitQPLSetLineColorCMYK(instanceID, C, M, Y, K);
}

int FoxitQPLLinuxCPP1811::SetLineColorSep(const std::wstring& ColorName, double Tint)
{
	if (loadError) return 0;
	return FoxitQPLSetLineColorSep(instanceID, WideStringParm(ColorName), 
		Tint);
}

int FoxitQPLLinuxCPP1811::SetLineDash(double DashOn, double DashOff)
{
	if (loadError) return 0;
	return FoxitQPLSetLineDash(instanceID, DashOn, DashOff);
}

int FoxitQPLLinuxCPP1811::SetLineDashEx(const std::wstring& DashValues)
{
	if (loadError) return 0;
	return FoxitQPLSetLineDashEx(instanceID, WideStringParm(DashValues));
}

int FoxitQPLLinuxCPP1811::SetLineJoin(int LineJoin)
{
	if (loadError) return 0;
	return FoxitQPLSetLineJoin(instanceID, LineJoin);
}

int FoxitQPLLinuxCPP1811::SetLineShader(const std::wstring& ShaderName)
{
	if (loadError) return 0;
	return FoxitQPLSetLineShader(instanceID, WideStringParm(ShaderName));
}

int FoxitQPLLinuxCPP1811::SetLineWidth(double LineWidth)
{
	if (loadError) return 0;
	return FoxitQPLSetLineWidth(instanceID, LineWidth);
}

int FoxitQPLLinuxCPP1811::SetMarkupAnnotStyle(int Index, double Red, double Green, double Blue, double Transparency)
{
	if (loadError) return 0;
	return FoxitQPLSetMarkupAnnotStyle(instanceID, Index, Red, Green, Blue, 
		Transparency);
}

int FoxitQPLLinuxCPP1811::SetMeasureDictBoundsCount(int MeasureDictID, int NewCount)
{
	if (loadError) return 0;
	return FoxitQPLSetMeasureDictBoundsCount(instanceID, MeasureDictID, 
		NewCount);
}

int FoxitQPLLinuxCPP1811::SetMeasureDictBoundsItem(int MeasureDictID, int ItemIndex, double NewValue)
{
	if (loadError) return 0;
	return FoxitQPLSetMeasureDictBoundsItem(instanceID, MeasureDictID, 
		ItemIndex, NewValue);
}

int FoxitQPLLinuxCPP1811::SetMeasureDictCoordinateSystem(int MeasureDictID, int CoordinateSystemID)
{
	if (loadError) return 0;
	return FoxitQPLSetMeasureDictCoordinateSystem(instanceID, MeasureDictID, 
		CoordinateSystemID);
}

int FoxitQPLLinuxCPP1811::SetMeasureDictGPTSCount(int MeasureDictID, int NewCount)
{
	if (loadError) return 0;
	return FoxitQPLSetMeasureDictGPTSCount(instanceID, MeasureDictID, 
		NewCount);
}

int FoxitQPLLinuxCPP1811::SetMeasureDictGPTSItem(int MeasureDictID, int ItemIndex, double NewValue)
{
	if (loadError) return 0;
	return FoxitQPLSetMeasureDictGPTSItem(instanceID, MeasureDictID, 
		ItemIndex, NewValue);
}

int FoxitQPLLinuxCPP1811::SetMeasureDictLPTSCount(int MeasureDictID, int NewCount)
{
	if (loadError) return 0;
	return FoxitQPLSetMeasureDictLPTSCount(instanceID, MeasureDictID, 
		NewCount);
}

int FoxitQPLLinuxCPP1811::SetMeasureDictLPTSItem(int MeasureDictID, int ItemIndex, double NewValue)
{
	if (loadError) return 0;
	return FoxitQPLSetMeasureDictLPTSItem(instanceID, MeasureDictID, 
		ItemIndex, NewValue);
}

int FoxitQPLLinuxCPP1811::SetMeasureDictPDU(int MeasureDictID, int LinearUnit, int AreaUnit, int AngularUnit)
{
	if (loadError) return 0;
	return FoxitQPLSetMeasureDictPDU(instanceID, MeasureDictID, LinearUnit, 
		AreaUnit, AngularUnit);
}

int FoxitQPLLinuxCPP1811::SetMeasurementUnits(int MeasurementUnits)
{
	if (loadError) return 0;
	return FoxitQPLSetMeasurementUnits(instanceID, MeasurementUnits);
}

int FoxitQPLLinuxCPP1811::SetNeedAppearances(int NewValue)
{
	if (loadError) return 0;
	return FoxitQPLSetNeedAppearances(instanceID, NewValue);
}

int FoxitQPLLinuxCPP1811::SetObjectFromString(int ObjectNumber, const std::string& Source)
{
	if (loadError) return 0;
	int sb1;
	char* sp1 = StringParm(Source, sb1);
	int result;
	result = FoxitQPLSetObjectFromString(instanceID, ObjectNumber, sp1);
	if (sb1 == 1) FoxitQPLReleaseBuffer(instanceID, sp1);
	return result;
}

int FoxitQPLLinuxCPP1811::SetOpenActionDestination(int OpenPage, int Zoom)
{
	if (loadError) return 0;
	return FoxitQPLSetOpenActionDestination(instanceID, OpenPage, Zoom);
}

int FoxitQPLLinuxCPP1811::SetOpenActionDestinationFull(int OpenPage, int Zoom, int DestType, double Left, double Top, double Right, double Bottom)
{
	if (loadError) return 0;
	return FoxitQPLSetOpenActionDestinationFull(instanceID, OpenPage, Zoom, 
		DestType, Left, Top, Right, Bottom);
}

int FoxitQPLLinuxCPP1811::SetOpenActionJavaScript(const std::wstring& JavaScript)
{
	if (loadError) return 0;
	return FoxitQPLSetOpenActionJavaScript(instanceID, 
		WideStringParm(JavaScript));
}

int FoxitQPLLinuxCPP1811::SetOpenActionMenu(const std::wstring& MenuItem)
{
	if (loadError) return 0;
	return FoxitQPLSetOpenActionMenu(instanceID, WideStringParm(MenuItem));
}

int FoxitQPLLinuxCPP1811::SetOptionalContentConfigLocked(int OptionalContentConfigID, int OptionalContentGroupID, int NewLocked)
{
	if (loadError) return 0;
	return FoxitQPLSetOptionalContentConfigLocked(instanceID, 
		OptionalContentConfigID, OptionalContentGroupID, NewLocked);
}

int FoxitQPLLinuxCPP1811::SetOptionalContentConfigState(int OptionalContentConfigID, int OptionalContentGroupID, int NewState)
{
	if (loadError) return 0;
	return FoxitQPLSetOptionalContentConfigState(instanceID, 
		OptionalContentConfigID, OptionalContentGroupID, NewState);
}

int FoxitQPLLinuxCPP1811::SetOptionalContentGroupName(int OptionalContentGroupID, const std::wstring& NewGroupName)
{
	if (loadError) return 0;
	return FoxitQPLSetOptionalContentGroupName(instanceID, 
		OptionalContentGroupID, WideStringParm(NewGroupName));
}

int FoxitQPLLinuxCPP1811::SetOptionalContentGroupPrintable(int OptionalContentGroupID, int Printable)
{
	if (loadError) return 0;
	return FoxitQPLSetOptionalContentGroupPrintable(instanceID, 
		OptionalContentGroupID, Printable);
}

int FoxitQPLLinuxCPP1811::SetOptionalContentGroupVisible(int OptionalContentGroupID, int Visible)
{
	if (loadError) return 0;
	return FoxitQPLSetOptionalContentGroupVisible(instanceID, 
		OptionalContentGroupID, Visible);
}

int FoxitQPLLinuxCPP1811::SetOrigin(int Origin)
{
	if (loadError) return 0;
	return FoxitQPLSetOrigin(instanceID, Origin);
}

int FoxitQPLLinuxCPP1811::SetOutlineColor(int OutlineID, double Red, double Green, double Blue)
{
	if (loadError) return 0;
	return FoxitQPLSetOutlineColor(instanceID, OutlineID, Red, Green, Blue);
}

int FoxitQPLLinuxCPP1811::SetOutlineDestination(int OutlineID, int DestPage, double DestPosition)
{
	if (loadError) return 0;
	return FoxitQPLSetOutlineDestination(instanceID, OutlineID, DestPage, 
		DestPosition);
}

int FoxitQPLLinuxCPP1811::SetOutlineDestinationFull(int OutlineID, int DestPage, int Zoom, int DestType, double Left, double Top, double Right, double Bottom)
{
	if (loadError) return 0;
	return FoxitQPLSetOutlineDestinationFull(instanceID, OutlineID, DestPage, 
		Zoom, DestType, Left, Top, Right, Bottom);
}

int FoxitQPLLinuxCPP1811::SetOutlineDestinationZoom(int OutlineID, int DestPage, double DestPosition, int Zoom)
{
	if (loadError) return 0;
	return FoxitQPLSetOutlineDestinationZoom(instanceID, OutlineID, DestPage, 
		DestPosition, Zoom);
}

int FoxitQPLLinuxCPP1811::SetOutlineJavaScript(int OutlineID, const std::wstring& JavaScript)
{
	if (loadError) return 0;
	return FoxitQPLSetOutlineJavaScript(instanceID, OutlineID, 
		WideStringParm(JavaScript));
}

int FoxitQPLLinuxCPP1811::SetOutlineNamedDestination(int OutlineID, const std::wstring& DestName)
{
	if (loadError) return 0;
	return FoxitQPLSetOutlineNamedDestination(instanceID, OutlineID, 
		WideStringParm(DestName));
}

int FoxitQPLLinuxCPP1811::SetOutlineOpenFile(int OutlineID, const std::wstring& FileName)
{
	if (loadError) return 0;
	return FoxitQPLSetOutlineOpenFile(instanceID, OutlineID, 
		WideStringParm(FileName));
}

int FoxitQPLLinuxCPP1811::SetOutlineRemoteDestination(int OutlineID, const std::wstring& FileName, int OpenPage, int Zoom, int DestType, double PntLeft, double PntTop, double PntRight, double PntBottom, int NewWindow)
{
	if (loadError) return 0;
	return FoxitQPLSetOutlineRemoteDestination(instanceID, OutlineID, 
		WideStringParm(FileName), OpenPage, Zoom, DestType, PntLeft, PntTop, 
		PntRight, PntBottom, NewWindow);
}

int FoxitQPLLinuxCPP1811::SetOutlineStyle(int OutlineID, int SetItalic, int SetBold)
{
	if (loadError) return 0;
	return FoxitQPLSetOutlineStyle(instanceID, OutlineID, SetItalic, SetBold);
}

int FoxitQPLLinuxCPP1811::SetOutlineTitle(int OutlineID, const std::wstring& NewTitle)
{
	if (loadError) return 0;
	return FoxitQPLSetOutlineTitle(instanceID, OutlineID, 
		WideStringParm(NewTitle));
}

int FoxitQPLLinuxCPP1811::SetOutlineWebLink(int OutlineID, const std::wstring& Link)
{
	if (loadError) return 0;
	return FoxitQPLSetOutlineWebLink(instanceID, OutlineID, 
		WideStringParm(Link));
}

int FoxitQPLLinuxCPP1811::SetOverprint(int StrokingOverprint, int OtherOverprint, int OverprintMode)
{
	if (loadError) return 0;
	return FoxitQPLSetOverprint(instanceID, StrokingOverprint, 
		OtherOverprint, OverprintMode);
}

int FoxitQPLLinuxCPP1811::SetPDFAMode(int NewMode)
{
	if (loadError) return 0;
	return FoxitQPLSetPDFAMode(instanceID, NewMode);
}

int FoxitQPLLinuxCPP1811::SetPNGTransparencyColor(int RedByte, int GreenByte, int BlueByte)
{
	if (loadError) return 0;
	return FoxitQPLSetPNGTransparencyColor(instanceID, RedByte, GreenByte, 
		BlueByte);
}

int FoxitQPLLinuxCPP1811::SetPageActionMenu(const std::wstring& MenuItem)
{
	if (loadError) return 0;
	return FoxitQPLSetPageActionMenu(instanceID, WideStringParm(MenuItem));
}

int FoxitQPLLinuxCPP1811::SetPageBox(int BoxType, double Left, double Top, double Width, double Height)
{
	if (loadError) return 0;
	return FoxitQPLSetPageBox(instanceID, BoxType, Left, Top, Width, Height);
}

int FoxitQPLLinuxCPP1811::SetPageContentFromString(const std::string& Source)
{
	if (loadError) return 0;
	int sb1;
	char* sp1 = StringParm(Source, sb1);
	int result;
	result = FoxitQPLSetPageContentFromString(instanceID, sp1);
	if (sb1 == 1) FoxitQPLReleaseBuffer(instanceID, sp1);
	return result;
}

int FoxitQPLLinuxCPP1811::SetPageDimensions(double NewPageWidth, double NewPageHeight)
{
	if (loadError) return 0;
	return FoxitQPLSetPageDimensions(instanceID, NewPageWidth, NewPageHeight);
}

int FoxitQPLLinuxCPP1811::SetPageLayout(int NewPageLayout)
{
	if (loadError) return 0;
	return FoxitQPLSetPageLayout(instanceID, NewPageLayout);
}

int FoxitQPLLinuxCPP1811::SetPageMetadata(const std::wstring& XMP)
{
	if (loadError) return 0;
	return FoxitQPLSetPageMetadata(instanceID, WideStringParm(XMP));
}

int FoxitQPLLinuxCPP1811::SetPageMode(int NewPageMode)
{
	if (loadError) return 0;
	return FoxitQPLSetPageMode(instanceID, NewPageMode);
}

int FoxitQPLLinuxCPP1811::SetPageSize(const std::wstring& PaperName)
{
	if (loadError) return 0;
	return FoxitQPLSetPageSize(instanceID, WideStringParm(PaperName));
}

int FoxitQPLLinuxCPP1811::SetPageThumbnail()
{
	if (loadError) return 0;
	return FoxitQPLSetPageThumbnail(instanceID);
}

int FoxitQPLLinuxCPP1811::SetPageTransparencyGroup(int CS, int Isolate, int Knockout)
{
	if (loadError) return 0;
	return FoxitQPLSetPageTransparencyGroup(instanceID, CS, Isolate, 
		Knockout);
}

int FoxitQPLLinuxCPP1811::SetPageUserUnit(double UserUnit)
{
	if (loadError) return 0;
	return FoxitQPLSetPageUserUnit(instanceID, UserUnit);
}

int FoxitQPLLinuxCPP1811::SetPrecision(int NewPrecision)
{
	if (loadError) return 0;
	return FoxitQPLSetPrecision(instanceID, NewPrecision);
}

int FoxitQPLLinuxCPP1811::SetRenderArea(double Left, double Top, double Width, double Height)
{
	if (loadError) return 0;
	return FoxitQPLSetRenderArea(instanceID, Left, Top, Width, Height);
}

int FoxitQPLLinuxCPP1811::SetRenderCropType(int NewCropType)
{
	if (loadError) return 0;
	return FoxitQPLSetRenderCropType(instanceID, NewCropType);
}

int FoxitQPLLinuxCPP1811::SetRenderOptions(int OptionID, int NewValue)
{
	if (loadError) return 0;
	return FoxitQPLSetRenderOptions(instanceID, OptionID, NewValue);
}

int FoxitQPLLinuxCPP1811::SetRenderScale(double NewScale)
{
	if (loadError) return 0;
	return FoxitQPLSetRenderScale(instanceID, NewScale);
}

int FoxitQPLLinuxCPP1811::SetScale(double NewScale)
{
	if (loadError) return 0;
	return FoxitQPLSetScale(instanceID, NewScale);
}

int FoxitQPLLinuxCPP1811::SetSigFlags(int NewSigFlags)
{
	if (loadError) return 0;
	return FoxitQPLSetSigFlags(instanceID, NewSigFlags);
}

int FoxitQPLLinuxCPP1811::SetSignProcessAppearanceFromString(int SignProcessID, const std::wstring& LayerName, const std::string& Source)
{
	if (loadError) return 0;
	int sb1;
	char* sp1 = StringParm(Source, sb1);
	int result;
	result = FoxitQPLSetSignProcessAppearanceFromString(instanceID, 
		SignProcessID, WideStringParm(LayerName), sp1);
	if (sb1 == 1) FoxitQPLReleaseBuffer(instanceID, sp1);
	return result;
}

int FoxitQPLLinuxCPP1811::SetSignProcessCustomDict(int SignProcessID, const std::wstring& Key, const std::wstring& NewValue, int StorageType)
{
	if (loadError) return 0;
	return FoxitQPLSetSignProcessCustomDict(instanceID, SignProcessID, 
		WideStringParm(Key), WideStringParm(NewValue), StorageType);
}

int FoxitQPLLinuxCPP1811::SetSignProcessCustomSubFilter(int SignProcessID, const std::wstring& SubFilterStr)
{
	if (loadError) return 0;
	return FoxitQPLSetSignProcessCustomSubFilter(instanceID, SignProcessID, 
		WideStringParm(SubFilterStr));
}

int FoxitQPLLinuxCPP1811::SetSignProcessField(int SignProcessID, const std::wstring& SignatureFieldName)
{
	if (loadError) return 0;
	return FoxitQPLSetSignProcessField(instanceID, SignProcessID, 
		WideStringParm(SignatureFieldName));
}

int FoxitQPLLinuxCPP1811::SetSignProcessFieldBounds(int SignProcessID, double Left, double Top, double Width, double Height)
{
	if (loadError) return 0;
	return FoxitQPLSetSignProcessFieldBounds(instanceID, SignProcessID, Left, 
		Top, Width, Height);
}

int FoxitQPLLinuxCPP1811::SetSignProcessFieldImageFromFile(int SignProcessID, const std::wstring& ImageFileName, int Options)
{
	if (loadError) return 0;
	return FoxitQPLSetSignProcessFieldImageFromFile(instanceID, 
		SignProcessID, WideStringParm(ImageFileName), Options);
}

int FoxitQPLLinuxCPP1811::SetSignProcessFieldImageFromString(int SignProcessID, const std::string& Source, int Options)
{
	if (loadError) return 0;
	int sb1;
	char* sp1 = StringParm(Source, sb1);
	int result;
	result = FoxitQPLSetSignProcessFieldImageFromString(instanceID, 
		SignProcessID, sp1, Options);
	if (sb1 == 1) FoxitQPLReleaseBuffer(instanceID, sp1);
	return result;
}

int FoxitQPLLinuxCPP1811::SetSignProcessFieldLocked(int SignProcessID, int LockFieldAfterSign)
{
	if (loadError) return 0;
	return FoxitQPLSetSignProcessFieldLocked(instanceID, SignProcessID, 
		LockFieldAfterSign);
}

int FoxitQPLLinuxCPP1811::SetSignProcessFieldMetadata(int SignProcessID, const std::wstring& XMP)
{
	if (loadError) return 0;
	return FoxitQPLSetSignProcessFieldMetadata(instanceID, SignProcessID, 
		WideStringParm(XMP));
}

int FoxitQPLLinuxCPP1811::SetSignProcessFieldPage(int SignProcessID, int SignaturePage)
{
	if (loadError) return 0;
	return FoxitQPLSetSignProcessFieldPage(instanceID, SignProcessID, 
		SignaturePage);
}

int FoxitQPLLinuxCPP1811::SetSignProcessImageLayer(int SignProcessID, const std::wstring& LayerName)
{
	if (loadError) return 0;
	return FoxitQPLSetSignProcessImageLayer(instanceID, SignProcessID, 
		WideStringParm(LayerName));
}

int FoxitQPLLinuxCPP1811::SetSignProcessInfo(int SignProcessID, const std::wstring& Reason, const std::wstring& Location, const std::wstring& ContactInfo)
{
	if (loadError) return 0;
	return FoxitQPLSetSignProcessInfo(instanceID, SignProcessID, 
		WideStringParm(Reason), WideStringParm(Location), 
		WideStringParm(ContactInfo));
}

int FoxitQPLLinuxCPP1811::SetSignProcessKeyset(int SignProcessID, int KeysetID)
{
	if (loadError) return 0;
	return FoxitQPLSetSignProcessKeyset(instanceID, SignProcessID, KeysetID);
}

int FoxitQPLLinuxCPP1811::SetSignProcessOptions(int SignProcessID, int OptionID, int OptionValue)
{
	if (loadError) return 0;
	return FoxitQPLSetSignProcessOptions(instanceID, SignProcessID, OptionID, 
		OptionValue);
}

int FoxitQPLLinuxCPP1811::SetSignProcessPFXFromFile(int SignProcessID, const std::wstring& PFXFileName, const std::wstring& PFXPassword)
{
	if (loadError) return 0;
	return FoxitQPLSetSignProcessPFXFromFile(instanceID, SignProcessID, 
		WideStringParm(PFXFileName), WideStringParm(PFXPassword));
}

int FoxitQPLLinuxCPP1811::SetSignProcessPFXFromString(int SignProcessID, const std::string& Source, const std::wstring& PFXPassword)
{
	if (loadError) return 0;
	int sb1;
	char* sp1 = StringParm(Source, sb1);
	int result;
	result = FoxitQPLSetSignProcessPFXFromString(instanceID, SignProcessID, 
		sp1, WideStringParm(PFXPassword));
	if (sb1 == 1) FoxitQPLReleaseBuffer(instanceID, sp1);
	return result;
}

int FoxitQPLLinuxCPP1811::SetSignProcessPassthrough(int SignProcessID, int SignatureLength)
{
	if (loadError) return 0;
	return FoxitQPLSetSignProcessPassthrough(instanceID, SignProcessID, 
		SignatureLength);
}

int FoxitQPLLinuxCPP1811::SetSignProcessSubFilter(int SignProcessID, int SubFilter)
{
	if (loadError) return 0;
	return FoxitQPLSetSignProcessSubFilter(instanceID, SignProcessID, 
		SubFilter);
}

int FoxitQPLLinuxCPP1811::SetTabOrderMode(const std::wstring& Mode)
{
	if (loadError) return 0;
	return FoxitQPLSetTabOrderMode(instanceID, WideStringParm(Mode));
}

int FoxitQPLLinuxCPP1811::SetTableBorderColor(int TableID, int BorderIndex, double Red, double Green, double Blue)
{
	if (loadError) return 0;
	return FoxitQPLSetTableBorderColor(instanceID, TableID, BorderIndex, Red, 
		Green, Blue);
}

int FoxitQPLLinuxCPP1811::SetTableBorderColorCMYK(int TableID, int BorderIndex, double C, double M, double Y, double K)
{
	if (loadError) return 0;
	return FoxitQPLSetTableBorderColorCMYK(instanceID, TableID, BorderIndex, 
		C, M, Y, K);
}

int FoxitQPLLinuxCPP1811::SetTableBorderWidth(int TableID, int BorderIndex, double NewWidth)
{
	if (loadError) return 0;
	return FoxitQPLSetTableBorderWidth(instanceID, TableID, BorderIndex, 
		NewWidth);
}

int FoxitQPLLinuxCPP1811::SetTableCellAlignment(int TableID, int FirstRow, int FirstColumn, int LastRow, int LastColumn, int NewCellAlignment)
{
	if (loadError) return 0;
	return FoxitQPLSetTableCellAlignment(instanceID, TableID, FirstRow, 
		FirstColumn, LastRow, LastColumn, NewCellAlignment);
}

int FoxitQPLLinuxCPP1811::SetTableCellBackgroundColor(int TableID, int FirstRow, int FirstColumn, int LastRow, int LastColumn, double Red, double Green, double Blue)
{
	if (loadError) return 0;
	return FoxitQPLSetTableCellBackgroundColor(instanceID, TableID, FirstRow, 
		FirstColumn, LastRow, LastColumn, Red, Green, Blue);
}

int FoxitQPLLinuxCPP1811::SetTableCellBackgroundColorCMYK(int TableID, int FirstRow, int FirstColumn, int LastRow, int LastColumn, double C, double M, double Y, double K)
{
	if (loadError) return 0;
	return FoxitQPLSetTableCellBackgroundColorCMYK(instanceID, TableID, 
		FirstRow, FirstColumn, LastRow, LastColumn, C, M, Y, K);
}

int FoxitQPLLinuxCPP1811::SetTableCellBorderColor(int TableID, int FirstRow, int FirstColumn, int LastRow, int LastColumn, int BorderIndex, double Red, double Green, double Blue)
{
	if (loadError) return 0;
	return FoxitQPLSetTableCellBorderColor(instanceID, TableID, FirstRow, 
		FirstColumn, LastRow, LastColumn, BorderIndex, Red, Green, Blue);
}

int FoxitQPLLinuxCPP1811::SetTableCellBorderColorCMYK(int TableID, int FirstRow, int FirstColumn, int LastRow, int LastColumn, int BorderIndex, double C, double M, double Y, double K)
{
	if (loadError) return 0;
	return FoxitQPLSetTableCellBorderColorCMYK(instanceID, TableID, FirstRow, 
		FirstColumn, LastRow, LastColumn, BorderIndex, C, M, Y, K);
}

int FoxitQPLLinuxCPP1811::SetTableCellBorderWidth(int TableID, int FirstRow, int FirstColumn, int LastRow, int LastColumn, int BorderIndex, double NewWidth)
{
	if (loadError) return 0;
	return FoxitQPLSetTableCellBorderWidth(instanceID, TableID, FirstRow, 
		FirstColumn, LastRow, LastColumn, BorderIndex, NewWidth);
}

int FoxitQPLLinuxCPP1811::SetTableCellContent(int TableID, int RowNumber, int ColumnNumber, const std::wstring& HTMLText)
{
	if (loadError) return 0;
	return FoxitQPLSetTableCellContent(instanceID, TableID, RowNumber, 
		ColumnNumber, WideStringParm(HTMLText));
}

int FoxitQPLLinuxCPP1811::SetTableCellPadding(int TableID, int FirstRow, int FirstColumn, int LastRow, int LastColumn, int BorderIndex, double NewPadding)
{
	if (loadError) return 0;
	return FoxitQPLSetTableCellPadding(instanceID, TableID, FirstRow, 
		FirstColumn, LastRow, LastColumn, BorderIndex, NewPadding);
}

int FoxitQPLLinuxCPP1811::SetTableCellTextColor(int TableID, int FirstRow, int FirstColumn, int LastRow, int LastColumn, double Red, double Green, double Blue)
{
	if (loadError) return 0;
	return FoxitQPLSetTableCellTextColor(instanceID, TableID, FirstRow, 
		FirstColumn, LastRow, LastColumn, Red, Green, Blue);
}

int FoxitQPLLinuxCPP1811::SetTableCellTextColorCMYK(int TableID, int FirstRow, int FirstColumn, int LastRow, int LastColumn, double C, double M, double Y, double K)
{
	if (loadError) return 0;
	return FoxitQPLSetTableCellTextColorCMYK(instanceID, TableID, FirstRow, 
		FirstColumn, LastRow, LastColumn, C, M, Y, K);
}

int FoxitQPLLinuxCPP1811::SetTableCellTextSize(int TableID, int FirstRow, int FirstColumn, int LastRow, int LastColumn, double NewTextSize)
{
	if (loadError) return 0;
	return FoxitQPLSetTableCellTextSize(instanceID, TableID, FirstRow, 
		FirstColumn, LastRow, LastColumn, NewTextSize);
}

int FoxitQPLLinuxCPP1811::SetTableColumnWidth(int TableID, int FirstColumn, int LastColumn, double NewWidth)
{
	if (loadError) return 0;
	return FoxitQPLSetTableColumnWidth(instanceID, TableID, FirstColumn, 
		LastColumn, NewWidth);
}

int FoxitQPLLinuxCPP1811::SetTableRowHeight(int TableID, int FirstRow, int LastRow, double NewHeight)
{
	if (loadError) return 0;
	return FoxitQPLSetTableRowHeight(instanceID, TableID, FirstRow, LastRow, 
		NewHeight);
}

int FoxitQPLLinuxCPP1811::SetTableThinBorders(int TableID, int ThinBorders, double Red, double Green, double Blue)
{
	if (loadError) return 0;
	return FoxitQPLSetTableThinBorders(instanceID, TableID, ThinBorders, Red, 
		Green, Blue);
}

int FoxitQPLLinuxCPP1811::SetTableThinBordersCMYK(int TableID, int ThinBorders, double C, double M, double Y, double K)
{
	if (loadError) return 0;
	return FoxitQPLSetTableThinBordersCMYK(instanceID, TableID, ThinBorders, 
		C, M, Y, K);
}

int FoxitQPLLinuxCPP1811::SetTempFile(const std::wstring& FileName)
{
	if (loadError) return 0;
	return FoxitQPLSetTempFile(instanceID, WideStringParm(FileName));
}

int FoxitQPLLinuxCPP1811::SetTempPath(const std::wstring& NewPath)
{
	if (loadError) return 0;
	return FoxitQPLSetTempPath(instanceID, WideStringParm(NewPath));
}

int FoxitQPLLinuxCPP1811::SetTextAlign(int TextAlign)
{
	if (loadError) return 0;
	return FoxitQPLSetTextAlign(instanceID, TextAlign);
}

int FoxitQPLLinuxCPP1811::SetTextCharSpacing(double CharSpacing)
{
	if (loadError) return 0;
	return FoxitQPLSetTextCharSpacing(instanceID, CharSpacing);
}

int FoxitQPLLinuxCPP1811::SetTextColor(double Red, double Green, double Blue)
{
	if (loadError) return 0;
	return FoxitQPLSetTextColor(instanceID, Red, Green, Blue);
}

int FoxitQPLLinuxCPP1811::SetTextColorCMYK(double C, double M, double Y, double K)
{
	if (loadError) return 0;
	return FoxitQPLSetTextColorCMYK(instanceID, C, M, Y, K);
}

int FoxitQPLLinuxCPP1811::SetTextColorSep(const std::wstring& ColorName, double Tint)
{
	if (loadError) return 0;
	return FoxitQPLSetTextColorSep(instanceID, WideStringParm(ColorName), 
		Tint);
}

int FoxitQPLLinuxCPP1811::SetTextExtractionArea(double Left, double Top, double Width, double Height)
{
	if (loadError) return 0;
	return FoxitQPLSetTextExtractionArea(instanceID, Left, Top, Width, 
		Height);
}

int FoxitQPLLinuxCPP1811::SetTextExtractionOptions(int OptionID, int NewValue)
{
	if (loadError) return 0;
	return FoxitQPLSetTextExtractionOptions(instanceID, OptionID, NewValue);
}

int FoxitQPLLinuxCPP1811::SetTextExtractionScaling(int Options, double Horizontal, double Vertical)
{
	if (loadError) return 0;
	return FoxitQPLSetTextExtractionScaling(instanceID, Options, Horizontal, 
		Vertical);
}

int FoxitQPLLinuxCPP1811::SetTextExtractionWordGap(double NewWordGap)
{
	if (loadError) return 0;
	return FoxitQPLSetTextExtractionWordGap(instanceID, NewWordGap);
}

int FoxitQPLLinuxCPP1811::SetTextHighlight(int Highlight)
{
	if (loadError) return 0;
	return FoxitQPLSetTextHighlight(instanceID, Highlight);
}

int FoxitQPLLinuxCPP1811::SetTextHighlightColor(double Red, double Green, double Blue)
{
	if (loadError) return 0;
	return FoxitQPLSetTextHighlightColor(instanceID, Red, Green, Blue);
}

int FoxitQPLLinuxCPP1811::SetTextHighlightColorCMYK(double C, double M, double Y, double K)
{
	if (loadError) return 0;
	return FoxitQPLSetTextHighlightColorCMYK(instanceID, C, M, Y, K);
}

int FoxitQPLLinuxCPP1811::SetTextHighlightColorSep(const std::wstring& ColorName, double Tint)
{
	if (loadError) return 0;
	return FoxitQPLSetTextHighlightColorSep(instanceID, 
		WideStringParm(ColorName), Tint);
}

int FoxitQPLLinuxCPP1811::SetTextMode(int TextMode)
{
	if (loadError) return 0;
	return FoxitQPLSetTextMode(instanceID, TextMode);
}

int FoxitQPLLinuxCPP1811::SetTextRise(double Rise)
{
	if (loadError) return 0;
	return FoxitQPLSetTextRise(instanceID, Rise);
}

int FoxitQPLLinuxCPP1811::SetTextScaling(double ScalePercentage)
{
	if (loadError) return 0;
	return FoxitQPLSetTextScaling(instanceID, ScalePercentage);
}

int FoxitQPLLinuxCPP1811::SetTextShader(const std::wstring& ShaderName)
{
	if (loadError) return 0;
	return FoxitQPLSetTextShader(instanceID, WideStringParm(ShaderName));
}

int FoxitQPLLinuxCPP1811::SetTextSize(double TextSize)
{
	if (loadError) return 0;
	return FoxitQPLSetTextSize(instanceID, TextSize);
}

int FoxitQPLLinuxCPP1811::SetTextSpacing(double Spacing)
{
	if (loadError) return 0;
	return FoxitQPLSetTextSpacing(instanceID, Spacing);
}

int FoxitQPLLinuxCPP1811::SetTextUnderline(int Underline)
{
	if (loadError) return 0;
	return FoxitQPLSetTextUnderline(instanceID, Underline);
}

int FoxitQPLLinuxCPP1811::SetTextUnderlineColor(double Red, double Green, double Blue)
{
	if (loadError) return 0;
	return FoxitQPLSetTextUnderlineColor(instanceID, Red, Green, Blue);
}

int FoxitQPLLinuxCPP1811::SetTextUnderlineColorCMYK(double C, double M, double Y, double K)
{
	if (loadError) return 0;
	return FoxitQPLSetTextUnderlineColorCMYK(instanceID, C, M, Y, K);
}

int FoxitQPLLinuxCPP1811::SetTextUnderlineColorSep(const std::wstring& ColorName, double Tint)
{
	if (loadError) return 0;
	return FoxitQPLSetTextUnderlineColorSep(instanceID, 
		WideStringParm(ColorName), Tint);
}

int FoxitQPLLinuxCPP1811::SetTextUnderlineCustomDash(const std::wstring& DashPattern, double DashPhase)
{
	if (loadError) return 0;
	return FoxitQPLSetTextUnderlineCustomDash(instanceID, 
		WideStringParm(DashPattern), DashPhase);
}

int FoxitQPLLinuxCPP1811::SetTextUnderlineDash(double DashOn, double DashOff)
{
	if (loadError) return 0;
	return FoxitQPLSetTextUnderlineDash(instanceID, DashOn, DashOff);
}

int FoxitQPLLinuxCPP1811::SetTextUnderlineDistance(double UnderlineDistance)
{
	if (loadError) return 0;
	return FoxitQPLSetTextUnderlineDistance(instanceID, UnderlineDistance);
}

int FoxitQPLLinuxCPP1811::SetTextUnderlineWidth(double UnderlineWidth)
{
	if (loadError) return 0;
	return FoxitQPLSetTextUnderlineWidth(instanceID, UnderlineWidth);
}

int FoxitQPLLinuxCPP1811::SetTextWordSpacing(double WordSpacing)
{
	if (loadError) return 0;
	return FoxitQPLSetTextWordSpacing(instanceID, WordSpacing);
}

int FoxitQPLLinuxCPP1811::SetTransparency(int Transparency)
{
	if (loadError) return 0;
	return FoxitQPLSetTransparency(instanceID, Transparency);
}

int FoxitQPLLinuxCPP1811::SetUpdateMode(int NewUpdateMode)
{
	if (loadError) return 0;
	return FoxitQPLSetUpdateMode(instanceID, NewUpdateMode);
}

int FoxitQPLLinuxCPP1811::SetViewerPreferences(int Option, int NewValue)
{
	if (loadError) return 0;
	return FoxitQPLSetViewerPreferences(instanceID, Option, NewValue);
}

int FoxitQPLLinuxCPP1811::SetXFAFormFieldAccess(const std::wstring& XFAFieldName, int NewAccess)
{
	if (loadError) return 0;
	return FoxitQPLSetXFAFormFieldAccess(instanceID, 
		WideStringParm(XFAFieldName), NewAccess);
}

int FoxitQPLLinuxCPP1811::SetXFAFormFieldBorderColor(const std::wstring& XFAFieldName, double Red, double Green, double Blue)
{
	if (loadError) return 0;
	return FoxitQPLSetXFAFormFieldBorderColor(instanceID, 
		WideStringParm(XFAFieldName), Red, Green, Blue);
}

int FoxitQPLLinuxCPP1811::SetXFAFormFieldBorderPresence(const std::wstring& XFAFieldName, int NewPresence)
{
	if (loadError) return 0;
	return FoxitQPLSetXFAFormFieldBorderPresence(instanceID, 
		WideStringParm(XFAFieldName), NewPresence);
}

int FoxitQPLLinuxCPP1811::SetXFAFormFieldBorderWidth(const std::wstring& XFAFieldName, double BorderWidth)
{
	if (loadError) return 0;
	return FoxitQPLSetXFAFormFieldBorderWidth(instanceID, 
		WideStringParm(XFAFieldName), BorderWidth);
}

int FoxitQPLLinuxCPP1811::SetXFAFormFieldValue(const std::wstring& XFAFieldName, const std::wstring& NewValue)
{
	if (loadError) return 0;
	return FoxitQPLSetXFAFormFieldValue(instanceID, 
		WideStringParm(XFAFieldName), WideStringParm(NewValue));
}

int FoxitQPLLinuxCPP1811::SetXFAFromString(const std::string& Source, int Options)
{
	if (loadError) return 0;
	int sb1;
	char* sp1 = StringParm(Source, sb1);
	int result;
	result = FoxitQPLSetXFAFromString(instanceID, sp1, Options);
	if (sb1 == 1) FoxitQPLReleaseBuffer(instanceID, sp1);
	return result;
}

int FoxitQPLLinuxCPP1811::SignFile(const std::wstring& InputFileName, const std::wstring& OpenPassword, const std::wstring& SignatureFieldName, const std::wstring& OutputFileName, const std::wstring& PFXFileName, const std::wstring& PFXPassword, const std::wstring& Reason, const std::wstring& Location, const std::wstring& ContactInfo)
{
	if (loadError) return 0;
	return FoxitQPLSignFile(instanceID, WideStringParm(InputFileName), 
		WideStringParm(OpenPassword), WideStringParm(SignatureFieldName), 
		WideStringParm(OutputFileName), WideStringParm(PFXFileName), 
		WideStringParm(PFXPassword), WideStringParm(Reason), 
		WideStringParm(Location), WideStringParm(ContactInfo));
}

int FoxitQPLLinuxCPP1811::SplitPageText(int Options)
{
	if (loadError) return 0;
	return FoxitQPLSplitPageText(instanceID, Options);
}

int FoxitQPLLinuxCPP1811::StartPath(double StartX, double StartY)
{
	if (loadError) return 0;
	return FoxitQPLStartPath(instanceID, StartX, StartY);
}

int FoxitQPLLinuxCPP1811::StoreCustomDataFromFile(const std::wstring& Key, const std::wstring& FileName, int Location, int Options)
{
	if (loadError) return 0;
	return FoxitQPLStoreCustomDataFromFile(instanceID, WideStringParm(Key), 
		WideStringParm(FileName), Location, Options);
}

int FoxitQPLLinuxCPP1811::StoreCustomDataFromString(const std::wstring& Key, const std::string& NewValue, int Location, int Options)
{
	if (loadError) return 0;
	int sb1;
	char* sp1 = StringParm(NewValue, sb1);
	int result;
	result = FoxitQPLStoreCustomDataFromString(instanceID, 
		WideStringParm(Key), sp1, Location, Options);
	if (sb1 == 1) FoxitQPLReleaseBuffer(instanceID, sp1);
	return result;
}

int FoxitQPLLinuxCPP1811::TestTempPath()
{
	if (loadError) return 0;
	return FoxitQPLTestTempPath(instanceID);
}

int FoxitQPLLinuxCPP1811::TransformFile(const std::wstring& InputFileName, const std::wstring& Password, const std::wstring& OutputFileName, int TransformType, int Options)
{
	if (loadError) return 0;
	return FoxitQPLTransformFile(instanceID, WideStringParm(InputFileName), 
		WideStringParm(Password), WideStringParm(OutputFileName), TransformType, 
		Options);
}

int FoxitQPLLinuxCPP1811::UnlockKey(const std::wstring& LicenseKey)
{
	if (loadError) return 0;
	return FoxitQPLUnlockKey(instanceID, WideStringParm(LicenseKey));
}

int FoxitQPLLinuxCPP1811::Unlocked()
{
	if (loadError) return 0;
	return FoxitQPLUnlocked(instanceID);
}

int FoxitQPLLinuxCPP1811::UpdateAndFlattenFormField(int Index)
{
	if (loadError) return 0;
	return FoxitQPLUpdateAndFlattenFormField(instanceID, Index);
}

int FoxitQPLLinuxCPP1811::UpdateAppearanceStream(int Index)
{
	if (loadError) return 0;
	return FoxitQPLUpdateAppearanceStream(instanceID, Index);
}

int FoxitQPLLinuxCPP1811::UpdateTrueTypeSubsettedFont(const std::wstring& SubsetChars)
{
	if (loadError) return 0;
	return FoxitQPLUpdateTrueTypeSubsettedFont(instanceID, 
		WideStringParm(SubsetChars));
}

int FoxitQPLLinuxCPP1811::UseKerning(int Kern)
{
	if (loadError) return 0;
	return FoxitQPLUseKerning(instanceID, Kern);
}

int FoxitQPLLinuxCPP1811::UseUnsafeContentStreams(int SafetyLevel)
{
	if (loadError) return 0;
	return FoxitQPLUseUnsafeContentStreams(instanceID, SafetyLevel);
}

