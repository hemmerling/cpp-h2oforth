#ifndef H2OMEC2
#define H2OMEC2

/* The "Mecrisp 2.0.7 for msp430g2553" FORTH */

/* Primitives */

 /* Mecrisp Core */
void mecrispHookKeyQ(void) { 
#if defined (__DEBUG__)
	printf("mecrispHookKeyQ\n");
#endif
}

void mecrispHookKey(void) { 
#if defined (__DEBUG__)
	printf("mecrispHookKey\n");
#endif
}

void mecrispHookEmitQ(void) { 
#if defined (__DEBUG__)
	printf("mecrispHookEmitQ\n");
#endif
}

void mecrispHookEmit(void) { 
#if defined (__DEBUG__)
	printf("mecrispHookEmit\n");
#endif
}

void mecrispKeyQ(void) { 
#if defined (__DEBUG__)
	printf("mecrispKeyQ\n");
#endif
}

void mecrispKey(void) { 
#if defined (__DEBUG__)
	printf("mecrispKey\n");
#endif
}

void mecrispEmitQ(void) { 
#if defined (__DEBUG__)
	printf("mecrispEmitQ\n");
#endif
}

void mecrispEmit(void) { 
#if defined (__DEBUG__)
	printf("mecrispEmit\n");
#endif
}

void mecrispHexDot(void) { 
#if defined (__DEBUG__)
	printf("mecrispHexDot\n");
#endif
}

void mecrispCr(void) { 
#if defined (__DEBUG__)
	printf("mecrispCr\n");
#endif
}

void mecrispBl(void) { 
#if defined (__DEBUG__)
	printf("mecrispBl\n");
#endif
}

void mecrispSpace(void) { 
#if defined (__DEBUG__)
	printf("mecrispSpace\n");
#endif
}

void mecrispSpaces(void) { 
#if defined (__DEBUG__)
	printf("mecrispSpaces\n");
#endif
}

void mecrispWords(void) { 
#if defined (__DEBUG__)
	printf("mecrispWords\n");
#endif
}

void mecrispDotS(void) { 
#if defined (__DEBUG__)
	printf("mecrispDotS\n");
#endif
}

void mecrispHDotS(void) { 
#if defined (__DEBUG__)
	printf("mecrispHDotS\n");
#endif
}

void mecrispUDotS(void) { 
#if defined (__DEBUG__)
	printf("mecrispUDotS\n");
#endif
}

void mecrispDotRs(void) { 
#if defined (__DEBUG__)
	printf("mecrispDotRs\n");
#endif
}

void mecrispTwoNip(void) { 
#if defined (__DEBUG__)
	printf("mecrispTwoNip\n");
#endif
}

void mecrispTwoDrop(void) { 
#if defined (__DEBUG__)
	printf("mecrispTwoDrop\n");
#endif
}

void mecrispTwoMinusRot(void) { 
#if defined (__DEBUG__)
	printf("mecrispTwoMinusRot\n");
#endif
}

void mecrispTwoRot(void) { 
#if defined (__DEBUG__)
	printf("mecrispTwoRot\n");
#endif
}

void mecrispTwoTuck(void) { 
#if defined (__DEBUG__)
	printf("mecrispTwoTuck\n");
#endif
}

void mecrispTwoSwap(void) { 
#if defined (__DEBUG__)
	printf("mecrispTwoSwap\n");
#endif
}

void mecrispTwoOver(void) { 
#if defined (__DEBUG__)
	printf("mecrispTwoOver\n");
#endif
}

void mecrispTwoDup(void) { 
#if defined (__DEBUG__)
	printf("mecrispTwoDup\n");
#endif
}

void mecrispTwoToR(void) { 
#if defined (__DEBUG__)
	printf("mecrispTwoToR\n");
#endif
}

void mecrispTwoRFrom(void) { 
#if defined (__DEBUG__)
	printf("mecrispTwoRFrom\n");
#endif
}

void mecrispTwoRFetch(void) { 
#if defined (__DEBUG__)
	printf("mecrispTwoRFetch\n");
#endif
}

void mecrispTwoRDrop(void) { 
#if defined (__DEBUG__)
	printf("mecrispTwoRDrop\n");
#endif
}

void mecrispDepth(void) { 
#if defined (__DEBUG__)
	printf("mecrispDepth\n");
#endif
}

void mecrispPick(void) { 
#if defined (__DEBUG__)
	printf("mecrispPick\n");
#endif
}

void mecrispNip(void) { 
#if defined (__DEBUG__)
	printf("mecrispNip\n");
#endif
}

void mecrispDrop(void) { 
#if defined (__DEBUG__)
	printf("mecrispDrop\n");
#endif
}

void mecrispRot(void) { 
#if defined (__DEBUG__)
	printf("mecrispRot\n");
#endif
}

void mecrispMinusRot(void) { 
#if defined (__DEBUG__)
	printf("mecrispMinusRot\n");
#endif
}

void mecrispSwap(void) { 
#if defined (__DEBUG__)
	printf("mecrispSwap\n");
#endif
}

void mecrispTuck(void) { 
#if defined (__DEBUG__)
	printf("mecrispTuck\n");
#endif
}

void mecrispOver(void) { 
#if defined (__DEBUG__)
	printf("mecrispOver\n");
#endif
}

void mecrispQDup(void) { 
#if defined (__DEBUG__)
	printf("mecrispQDup\n");
#endif
}

void mecrispDup(void) { 
#if defined (__DEBUG__)
	printf("mecrispDup\n");
#endif
}

void mecrispToR(void) { 
#if defined (__DEBUG__)
	printf("mecrispToR\n");
#endif
}

void mecrispRFrom(void) { 
#if defined (__DEBUG__)
	printf("mecrispRFrom\n");
#endif
}

void mecrispRFetch(void) { 
#if defined (__DEBUG__)
	printf("mecrispRFetch\n");
#endif
}

void mecrispRDrop(void) { 
#if defined (__DEBUG__)
	printf("mecrispRDrop\n");
#endif
}

void mecrispRDepth(void) { 
#if defined (__DEBUG__)
	printf("mecrispRDepth\n");
#endif
}

void mecrispRPick(void) { 
#if defined (__DEBUG__)
	printf("mecrispRPick\n");
#endif
}

void mecrispSPFetch(void) { 
#if defined (__DEBUG__)
	printf("mecrispSPFetch\n");
#endif
}

void mecrispSPStore(void) { 
#if defined (__DEBUG__)
	printf("mecrispSPStore\n");
#endif
}

void mecrispRPFetch(void) { 
#if defined (__DEBUG__)
	printf("mecrispRPFetch\n");
#endif
}

void mecrispRPStore(void) { 
#if defined (__DEBUG__)
	printf("mecrispRPStore\n");
#endif
}

void mecrispReverseHalf(void) { 
#if defined (__DEBUG__)
	printf("mecrispReverseHalf\n");
#endif
}

void mecrispARShift(void) { 
#if defined (__DEBUG__)
	printf("mecrispARShift\n");
#endif
}

void mecrispRShift(void) { 
#if defined (__DEBUG__)
	printf("mecrispRShift\n");
#endif
}

void mecrispLShift(void) { 
#if defined (__DEBUG__)
	printf("mecrispLShift\n");
#endif
}

void mecrispShR(void) { 
#if defined (__DEBUG__)
	printf("mecrispShR\n");
#endif
}

void mecrispShL(void) { 
#if defined (__DEBUG__)
	printf("mecrispShL\n");
#endif
}

void mecrispRoR(void) { 
#if defined (__DEBUG__)
	printf("mecrispRoR\n");
#endif
}

void mecrispRoL(void) { 
#if defined (__DEBUG__)
	printf("mecrispRoL\n");
#endif
}

void mecrispBic(void) { 
#if defined (__DEBUG__)
	printf("mecrispBic\n");
#endif
}

void mecrispNot(void) { 
#if defined (__DEBUG__)
	printf("mecrispNot\n");
#endif
}

void mecrispXor(void) { 
#if defined (__DEBUG__)
	printf("mecrispXor\n");
#endif
}

void mecrispOr(void) { 
#if defined (__DEBUG__)
	printf("mecrispOr\n");
#endif
}

void mecrispAnd(void) { 
#if defined (__DEBUG__)
	printf("mecrispAnd\n");
#endif
}

void mecrispTrue(void) { 
#if defined (__DEBUG__)
	printf("mecrispTrue\n");
#endif
}

void mecrispFalse(void) { 
#if defined (__DEBUG__)
	printf("mecrispFalse\n");
#endif
}

void mecrispClz(void) { 
#if defined (__DEBUG__)
	printf("mecrispClz\n");
#endif
}

void mecrispDotDigit(void) { 
#if defined (__DEBUG__)
	printf("mecrispDotDigit\n");
#endif
}

void mecrispDigit(void) { 
#if defined (__DEBUG__)
	printf("mecrispDigit\n");
#endif
}

void mecrispHold(void) { 
#if defined (__DEBUG__)
	printf("mecrispHold\n");
#endif
}

void mecrispSign(void) { 
#if defined (__DEBUG__)
	printf("mecrispSign\n");
#endif
}

void mecrispNumS(void) { 
#if defined (__DEBUG__)
	printf("mecrispNumS\n");
#endif
}

void mecrispNum(void) { 
#if defined (__DEBUG__)
	printf("mecrispNum\n");
#endif
}

void mecrispNumGreater(void) { 
#if defined (__DEBUG__)
	printf("mecrispNumGreater\n");
#endif
}

void mecrispLessNum(void) { 
#if defined (__DEBUG__)
	printf("mecrispLessNum\n");
#endif
}

void mecrispUDot(void) { 
#if defined (__DEBUG__)
	printf("mecrispUDot\n");
#endif
}

void mecrispDot(void) { 
#if defined (__DEBUG__)
	printf("mecrispDot\n");
#endif
}

void mecrispUDDot(void) { 
#if defined (__DEBUG__)
	printf("mecrispUDDot\n");
#endif
}

void mecrispDDot(void) { 
#if defined (__DEBUG__)
	printf("mecrispDDot\n");
#endif
}

void mecrispFSlash(void) { 
#if defined (__DEBUG__)
	printf("mecrispFSlash\n");
#endif
}

void mecrispFStar(void) { 
#if defined (__DEBUG__)
	printf("mecrispFStar\n");
#endif
}

void mecrispHoldLess(void) { 
#if defined (__DEBUG__)
	printf("mecrispHoldLess\n");
#endif
}

void mecrispFNumS(void) { 
#if defined (__DEBUG__)
	printf("mecrispFNumS\n");
#endif
}

void mecrispFNum(void) { 
#if defined (__DEBUG__)
	printf("mecrispFNum\n");
#endif
}

void mecrispFDot(void) { 
#if defined (__DEBUG__)
	printf("mecrispFDot\n");
#endif
}

void mecrisp(void) { 
#if defined (__DEBUG__)
	printf("mecrisp\n");
#endif
}

void mecrispNumber(void) { 
#if defined (__DEBUG__)
	printf("mecrispNumber\n");
#endif
}

void mecrispSlashStar(void) { 
#if defined (__DEBUG__)
	printf("mecrispSlashStar\n");
#endif
}

void mecrispUStarSlash(void) { 
#if defined (__DEBUG__)
	printf("mecrispUStarSlash\n");
#endif
}

void mecrispStarSlashMod(void) { 
#if defined (__DEBUG__)
	printf("mecrispStarSlashMod\n");
#endif
}

void mecrispMSlashMod(void) { 
#if defined (__DEBUG__)
	printf("mecrispMSlashMod\n");
#endif
}

void mecrispMStar(void) { 
#if defined (__DEBUG__)
	printf("mecrispMStar\n");
#endif
}

void mecrispUMSlashMod(void) { 
#if defined (__DEBUG__)
	printf("mecrispUMSlashMod\n");
#endif
}

void mecrispUDSlashMod(void) { 
#if defined (__DEBUG__)
	printf("mecrispUDSlashMod\n");
#endif
}

void mecrispUDMStar(void) { 
#if defined (__DEBUG__)
	printf("mecrispUDMStar\n");
#endif
}

void mecrispD2Slash(void) { 
#if defined (__DEBUG__)
	printf("mecrispD2Slash\n");
#endif
}

void mecrispD2Star(void) { 
#if defined (__DEBUG__)
	printf("mecrispD2Star\n");
#endif
}

void mecrispDShR(void) { 
#if defined (__DEBUG__)
	printf("mecrispDShR\n");
#endif
}

void mecrispDShL(void) { 
#if defined (__DEBUG__)
	printf("mecrispDShL\n");
#endif
}

void mecrispDAbs(void) { 
#if defined (__DEBUG__)
	printf("mecrispDAbs\n");
#endif
}

void mecrispDNegate(void) { 
#if defined (__DEBUG__)
	printf("mecrispDNegate\n");
#endif
}

void mecrispDMinus(void) { 
#if defined (__DEBUG__)
	printf("mecrispDMinus\n");
#endif
}

void mecrispDPlus(void) { 
#if defined (__DEBUG__)
	printf("mecrispDPlus\n");
#endif
}

void mecrispSToD(void) { 
#if defined (__DEBUG__)
	printf("mecrispSToD\n");
#endif
}

void mecrispDuGreater(void) { 
#if defined (__DEBUG__)
	printf("mecrispDuGreater\n");
#endif
}

void mecrispDuLess(void) { 
#if defined (__DEBUG__)
	printf("mecrispDuLess\n");
#endif
}

void mecrispDGreater(void) { 
#if defined (__DEBUG__)
	printf("mecrispDGreater\n");
#endif
}

void mecrispDLess(void) { 
#if defined (__DEBUG__)
	printf("mecrispDLess\n");
#endif
}

void mecrispD0Less(void) { 
#if defined (__DEBUG__)
	printf("mecrispD0Less\n");
#endif
}

void mecrispD0Equal(void) { 
#if defined (__DEBUG__)
	printf("mecrispD0Equal\n");
#endif
}

void mecrispD0Unequal(void) { 
#if defined (__DEBUG__)
	printf("mecrispD0Unequal\n");
#endif
}

void mecrispDEqual(void) { 
#if defined (__DEBUG__)
	printf("mecrispDEqual\n");
#endif
}

void mecrispUMStar(void) { 
#if defined (__DEBUG__)
	printf("mecrispUMStar\n");
#endif
}

void mecrispUSlashMod(void) { 
#if defined (__DEBUG__)
	printf("mecrispUSlashMod\n");
#endif
}

void mecrispSlashMod(void) { 
#if defined (__DEBUG__)
	printf("mecrispSlashMod\n");
#endif
}

void mecrispMod(void) { 
#if defined (__DEBUG__)
	printf("mecrispMod\n");
#endif
}

void mecrispSlash(void) { 
#if defined (__DEBUG__)
	printf("mecrispSlash\n");
#endif
}

void mecrispStar(void) { 
#if defined (__DEBUG__)
	printf("mecrispStar\n");
#endif
}

void mecrispCompare(void) { 
#if defined (__DEBUG__)
	printf("mecrispCompare\n");
#endif
}

void mecrispSkipString(void) { 
#if defined (__DEBUG__)
	printf("mecrispSkipString\n");
#endif
}

void mecrispCType(void) { 
#if defined (__DEBUG__)
	printf("mecrispCType\n");
#endif
}

void mecrispType(void) { 
#if defined (__DEBUG__)
	printf("mecrispType\n");
#endif
}

void mecrispSQuote(void) { 
#if defined (__DEBUG__)
	printf("mecrispSQuote\n");
#endif
}

void mecrispCQuote(void) { 
#if defined (__DEBUG__)
	printf("mecrispCQuote\n");
#endif
}

void mecrispDotQuote(void) { 
#if defined (__DEBUG__)
	printf("mecrispDotQuote\n");
#endif
}

void mecrispParen(void) { 
#if defined (__DEBUG__)
	printf("mecrispParen\n");
#endif
}

void mecrispCount(void) { 
#if defined (__DEBUG__)
	printf("mecrispCount\n");
#endif
}

void mecrispBackslash(void) { 
#if defined (__DEBUG__)
	printf("mecrispBackslash\n");
#endif
}

void mecrispMin(void) { 
#if defined (__DEBUG__)
	printf("mecrispMin\n");
#endif
}

void mecrispMax(void) { 
#if defined (__DEBUG__)
	printf("mecrispMax\n");
#endif
}

void mecrispUMin(void) { 
#if defined (__DEBUG__)
	printf("mecrispUMin\n");
#endif
}

void mecrispUMax(void) { 
#if defined (__DEBUG__)
	printf("mecrispUMax\n");
#endif
}

void mecrispTwoMinus(void) { 
#if defined (__DEBUG__)
	printf("mecrispTwoMinus\n");
#endif
}

void mecrispOneMinus(void) { 
#if defined (__DEBUG__)
	printf("mecrispOneMinus\n");
#endif
}

void mecrispTwoPlus(void) { 
#if defined (__DEBUG__)
	printf("mecrispTwoPlus\n");
#endif
}

void mecrispOnePlus(void) { 
#if defined (__DEBUG__)
	printf("mecrispOnePlus\n");
#endif
}

void mecrispEven(void) { 
#if defined (__DEBUG__)
	printf("mecrispEven\n");
#endif
}

void mecrispTwoStar(void) { 
#if defined (__DEBUG__)
	printf("mecrispTwoStar\n");
#endif
}

void mecrispTwoSlash(void) { 
#if defined (__DEBUG__)
	printf("mecrispTwoSlash\n");
#endif
}

void mecrispAbs(void) { 
#if defined (__DEBUG__)
	printf("mecrispAbs\n");
#endif
}

void mecrispNegate(void) { 
#if defined (__DEBUG__)
	printf("mecrispNegate\n");
#endif
}

void mecrispMinus(void) { 
#if defined (__DEBUG__)
	printf("mecrispMinus\n");
#endif
}

void mecrispPlus(void) { 
#if defined (__DEBUG__)
	printf("mecrispPlus\n");
#endif
}

void mecrispBinary(void) { 
#if defined (__DEBUG__)
	printf("mecrispBinary\n");
#endif
}

void mecrispDecimal(void) { 
#if defined (__DEBUG__)
	printf("mecrispDecimal\n");
#endif
}

void mecrispHex(void) { 
#if defined (__DEBUG__)
	printf("mecrispHex\n");
#endif
}

void mecrispBase(void) { 
#if defined (__DEBUG__)
	printf("mecrispBase\n");
#endif
}

void mecrispCells(void) { 
#if defined (__DEBUG__)
	printf("mecrispCells\n");
#endif
}

void mecrispCellPlus(void) { 
#if defined (__DEBUG__)
	printf("mecrispCellPlus\n");
#endif
}

void mecrispMove(void) { 
#if defined (__DEBUG__)
	printf("mecrispMove\n");
#endif
}

void mecrispFill(void) { 
#if defined (__DEBUG__)
	printf("mecrispFill\n");
#endif
}

void mecrispCBitFetch(void) { 
#if defined (__DEBUG__)
	printf("mecrispCBitFetch\n");
#endif
}

void mecrispBitFetch(void) { 
#if defined (__DEBUG__)
	printf("mecrispBitFetch\n");
#endif
}

void mecrispCXorStore(void) { 
#if defined (__DEBUG__)
	printf("mecrispCXorStore\n");
#endif
}

void mecrispXorStore(void) { 
#if defined (__DEBUG__)
	printf("mecrispXorStore\n");
#endif
}

void mecrispCBicStore(void) { 
#if defined (__DEBUG__)
	printf("mecrispXorStore\n");
#endif
}

void mecrispBicStore(void) { 
#if defined (__DEBUG__)
	printf("mecrispBicStore\n");
#endif
}

void mecrispCBisStore(void) { 
#if defined (__DEBUG__)
	printf("mecrispCBisStore\n");
#endif
}

void mecrispBisStore(void) { 
#if defined (__DEBUG__)
	printf("mecrispBisStore\n");
#endif
}

void mecrispTwoConstant(void) { 
#if defined (__DEBUG__)
	printf("mecrispTwoConstant\n");
#endif
}

void mecrispConstant(void) { 
#if defined (__DEBUG__)
	printf("mecrispConstant\n");
#endif
}

void mecrispTwoVariable(void) { 
#if defined (__DEBUG__)
	printf("mecrispTwoVariable\n");
#endif
}

void mecrispVariable(void) { 
#if defined (__DEBUG__)
	printf("mecrispVariable\n");
#endif
}

void mecrispNVariable(void) { 
#if defined (__DEBUG__)
	printf("mecrispNVariable\n");
#endif
}

void mecrispBufferColon(void) { 
#if defined (__DEBUG__)
	printf("mecrispBufferColon\n");
#endif
}

void mecrispPlusStore(void) { 
#if defined (__DEBUG__)
	printf("mecrispPlusStore\n");
#endif
}

void mecrispCPlusStore(void) { 
#if defined (__DEBUG__)
	printf("mecrispCPlusStore\n");
#endif
}

void mecrispTwoStore(void) { 
#if defined (__DEBUG__)
	printf("mecrispTwoStore\n");
#endif
}

void mecrispTwoFetch(void) { 
#if defined (__DEBUG__)
	printf("mecrispTwoFetch\n");
#endif
}

void mecrispCStore(void) { 
#if defined (__DEBUG__)
	printf("mecrispCStore\n");
#endif
}

void mecrispCFetch(void) { 
#if defined (__DEBUG__)
	printf("mecrispCFetch\n");
#endif
}

void mecrispStore(void) { 
#if defined (__DEBUG__)
	printf("mecrispStore\n");
#endif
}

void mecrispFetch(void) { 
#if defined (__DEBUG__)
	printf("mecrispFetch\n");
#endif
}

void mecrispToIn(void) { 
#if defined (__DEBUG__)
	printf("mecrispToIn\n");
#endif
}

void mecrispCurrentSource(void) { 
#if defined (__DEBUG__)
	printf("mecrispCurrentSource\n");
#endif
}

void mecrispSource(void) { 
#if defined (__DEBUG__)
	printf("mecrispSource\n");
#endif
}

void mecrispSetSource(void) { 
#if defined (__DEBUG__)
	printf("mecrispSetSource\n");
#endif
}

void mecrispTib(void) { 
#if defined (__DEBUG__)
	printf("mecrispTib\n");
#endif
}

void mecrispQuery(void) { 
#if defined (__DEBUG__)
	printf("mecrispQuery\n");
#endif
}

void mecrispCExpect(void) { 
#if defined (__DEBUG__)
	printf("mecrispCExpect\n");
#endif
}

void mecrispForth(void) { 
#if defined (__DEBUG__)
	printf("mecrispForth\n");
#endif
}

void mecrispToken(void) { 
#if defined (__DEBUG__)
	printf("mecrispToken\n");
#endif
}

void mecrispParse(void) { 
#if defined (__DEBUG__)
	printf("mecrispParse\n");
#endif
}

void mecrispXTick(void) { 
#if defined (__DEBUG__)
	printf("mecrispXTick\n");
#endif
}

void mecrispTick(void) { 
#if defined (__DEBUG__)
	printf("mecrispTick\n");
#endif
}

void mecrispEvaluate(void) { 
#if defined (__DEBUG__)
	printf("mecrispEvaluate\n");
#endif
}

void mecrispInterpret(void) { 
#if defined (__DEBUG__)
	printf("mecrispInterpret\n");
#endif
}

void mecrispHookQuit(void) { 
#if defined (__DEBUG__)
	printf("mecrispHookQuit\n");
#endif
}

void mecrispQuit(void) { 
#if defined (__DEBUG__)
	printf("mecrispQuit\n");
#endif
}

void mecrispDictionaryStart(void) { 
#if defined (__DEBUG__)
	printf("mecrispDictionaryStart\n");
#endif
}

void mecrispDictionaryNext(void) { 
#if defined (__DEBUG__)
	printf("mecrispDictionaryNext\n");
#endif
}

void mecrispComma(void) { 
#if defined (__DEBUG__)
	printf("mecrispComma\n");
#endif
}

void mecrispCComma(void) { 
#if defined (__DEBUG__)
	printf("mecrispCComma\n");
#endif
}

void mecrispAlign(void) { 
#if defined (__DEBUG__)
	printf("mecrispAlign\n");
#endif
}

void mecrispAligned(void) { 
#if defined (__DEBUG__)
	printf("mecrispAligned\n");
#endif
}

void mecrispXChar(void) { 
#if defined (__DEBUG__)
	printf("mecrispXChar\n");
#endif
}

void mecrispChar(void) { 
#if defined (__DEBUG__)
	printf("mecrispChar\n");
#endif
}

void mecrispStringComma(void) { 
#if defined (__DEBUG__)
	printf("mecrispStringComma\n");
#endif
}

void mecrispLiteralComma(void) { 
#if defined (__DEBUG__)
	printf("mecrispLiteralComma\n");
#endif
}

void mecrispTwoLiteralComma(void) { 
#if defined (__DEBUG__)
	printf("mecrispTwoLiteralComma\n");
#endif
}

void mecrispInlineComma(void) { 
#if defined (__DEBUG__)
	printf("mecrispInlineComma\n");
#endif
}

void mecrispCallComma(void) { 
#if defined (__DEBUG__)
	printf("mecrispCallComma\n");
#endif
}

void mecrispRetComma(void) { 
#if defined (__DEBUG__)
	printf("mecrispRetComma\n");
#endif
}

void mecrispFlashVarHere(void) { 
#if defined (__DEBUG__)
	printf("mecrispFlashVarHere\n");
#endif
}

void mecrispHere(void) { 
#if defined (__DEBUG__)
	printf("mecrispHere\n");
#endif
}

void mecrispAllot(void) { 
#if defined (__DEBUG__)
	printf("mecrispAllot\n");
#endif
}

void mecrispYCreate(void) { 
#if defined (__DEBUG__)
	printf("mecrispYCreate\n");
#endif
}

void mecrispCompiletoRamQ(void) { 
#if defined (__DEBUG__)
	printf("mecrispCompiletoRamQ\n");
#endif
}

void mecrispCompiletoRam(void) { 
#if defined (__DEBUG__)
	printf("mecrispCompiletoRam\n");
#endif
}

void mecrispCompileToFlash(void) { 
#if defined (__DEBUG__)
	printf("mecrispCompileToFlash\n");
#endif
}

void mecrispSmudge(void) { 
#if defined (__DEBUG__)
	printf("mecrispSmudge\n");
#endif
}

void mecrispCompileOnly(void) { 
#if defined (__DEBUG__)
	printf("mecrispCompileOnly\n");
#endif
}

void mecrispInline(void) { 
#if defined (__DEBUG__)
	printf("mecrispInline\n");
#endif
}

void mecrispImmediate(void) { 
#if defined (__DEBUG__)
	printf("mecrispImmediate\n");
#endif
}

void mecrispSetflags(void) { 
#if defined (__DEBUG__)
	printf("mecrispSetflags\n");
#endif
}

void mecrispFind(void) { 
#if defined (__DEBUG__)
	printf("mecrispFind\n");
#endif
}

void mecrispExecute(void) { 
#if defined (__DEBUG__)
	printf("mecrispExecute\n");
#endif
}

void mecrispRecurse(void) { 
#if defined (__DEBUG__)
	printf("mecrispRecurse\n");
#endif
}

void mecrispPostpone(void) { 
#if defined (__DEBUG__)
	printf("mecrispPostpone\n");
#endif
}

void mecrispDoes(void) { 
#if defined (__DEBUG__)
	printf("mecrispDoes\n");
#endif
}

void mecrispBuilds(void) { 
#if defined (__DEBUG__)
	printf("mecrispBuilds\n");
#endif
}

void mecrispCreate(void) { 
#if defined (__DEBUG__)
	printf("mecrispCreate\n");
#endif
}

void mecrispState(void) { 
#if defined (__DEBUG__)
	printf("mecrispState\n");
#endif
}

void mecrispRightBracket(void) { 
#if defined (__DEBUG__)
	printf("mecrispRightBracket\n");
#endif
}

void mecrispLeftBracket(void) { 
#if defined (__DEBUG__)
	printf("mecrispLeftBracket\n");
#endif
}

void mecrispSemicolon(void) { 
#if defined (__DEBUG__)
	printf("mecrispSemicolon\n");
#endif
}

void mecrispColon(void) { 
#if defined (__DEBUG__)
	printf("mecrispColon\n");
#endif
}

void mecrispZeroFoldable(void) { 
#if defined (__DEBUG__)
	printf("mecrispZeroFoldable\n");
#endif
}

void mecrispOneFoldable(void) { 
#if defined (__DEBUG__)
	printf("mecrispOneFoldable\n");
#endif
}

void mecrispTwoFoldable(void) { 
#if defined (__DEBUG__)
	printf("mecrispTwoFoldable\n");
#endif
}

void mecrispThreeFoldable(void) { 
#if defined (__DEBUG__)
	printf("mecrispThreeFoldable\n");
#endif
}

void mecrispFourFoldable(void) { 
#if defined (__DEBUG__)
	printf("mecrispFourFoldable\n");
#endif
}

void mecrispFiveFoldable(void) { 
#if defined (__DEBUG__)
	printf("mecrispFiveFoldable\n");
#endif
}

void mecrispSixFoldable(void) { 
#if defined (__DEBUG__)
	printf("mecrispSixFoldable\n");
#endif
}

void mecrispSevenFoldable(void) { 
#if defined (__DEBUG__)
	printf("mecrispSevenFoldable\n");
#endif
}

void mecrispJumpComma(void) { 
#if defined (__DEBUG__)
	printf("mecrispJumpComma\n");
#endif
}

void mecrispThen(void) { 
#if defined (__DEBUG__)
	printf("mecrispThen\n");
#endif
}

void mecrispElse(void) { 
#if defined (__DEBUG__)
	printf("mecrispElse\n");
#endif
}

void mecrispIf(void) { 
#if defined (__DEBUG__)
	printf("mecrispIf\n");
#endif
}

void mecrispAhead(void) { 
#if defined (__DEBUG__)
	printf("mecrispAhead\n");
#endif
}

void mecrispRepeat(void) { 
#if defined (__DEBUG__)
	printf("mecrispRepeat\n");
#endif
}

void mecrispWhile(void) { 
#if defined (__DEBUG__)
	printf("mecrispWhile\n");
#endif
}

void mecrispUntil(void) { 
#if defined (__DEBUG__)
	printf("mecrispUntil\n");
#endif
}

void mecrispAgain(void) { 
#if defined (__DEBUG__)
	printf("mecrispAgain\n");
#endif
}

void mecrispBegin(void) { 
#if defined (__DEBUG__)
	printf("mecrispBegin\n");
#endif
}

void mecrispExit(void) { 
#if defined (__DEBUG__)
	printf("mecrispExit\n");
#endif
}

void mecrispK(void) { 
#if defined (__DEBUG__)
	printf("mecrispK\n");
#endif
}

void mecrispJ(void) { 
#if defined (__DEBUG__)
	printf("mecrispJ\n");
#endif
}

void mecrispI(void) { 
#if defined (__DEBUG__)
	printf("mecrispI\n");
#endif
}

void mecrispUnLoop(void) { 
#if defined (__DEBUG__)
	printf("mecrispUnLoop\n");
#endif
}

void mecrispLeave(void) { 
#if defined (__DEBUG__)
	printf("mecrispLeave\n");
#endif
}

void mecrispPlusLoop(void) { 
#if defined (__DEBUG__)
	printf("mecrispPlusLoop\n");
#endif
}

void mecrispLoop(void) { 
#if defined (__DEBUG__)
	printf("mecrispLoop\n");
#endif
}

void mecrispQDo(void) { 
#if defined (__DEBUG__)
	printf("mecrispQDo\n");
#endif
}

void mecrispDo(void) { 
#if defined (__DEBUG__)
	printf("mecrispDo\n");
#endif
}

void mecrispCase(void) { 
#if defined (__DEBUG__)
	printf("mecrispCase\n");
#endif
}

void mecrispQOf(void) { 
#if defined (__DEBUG__)
	printf("mecrispQOf\n");
#endif
}

void mecrispOf(void) { 
#if defined (__DEBUG__)
	printf("mecrispOf\n");
#endif
}

void mecrispEndOf(void) { 
#if defined (__DEBUG__)
	printf("mecrispEndOf\n");
#endif
}

void mecrispEndCase(void) { 
#if defined (__DEBUG__)
	printf("mecrispEndCase\n");
#endif
}

void mecrispULessEqual(void) { 
#if defined (__DEBUG__)
	printf("mecrispULessEqual\n");
#endif
}

void mecrispUGreaterEqual(void) { 
#if defined (__DEBUG__)
	printf("mecrispUGreaterEqual\n");
#endif
}

void mecrispUGreater(void) { 
#if defined (__DEBUG__)
	printf("mecrispUGreater\n");
#endif
}

void mecrispULess(void) { 
#if defined (__DEBUG__)
	printf("mecrispULess\n");
#endif
}

void mecrispLessEqual(void) { 
#if defined (__DEBUG__)
	printf("mecrispLessEqual\n");
#endif
}

void mecrispGreaterEqual(void) { 
#if defined (__DEBUG__)
	printf("mecrispGreaterEqual\n");
#endif
}

void mecrispGreater(void) { 
#if defined (__DEBUG__)
	printf("mecrispGreater\n");
#endif
}

void mecrispLess(void) { 
#if defined (__DEBUG__)
	printf("mecrispLess\n");
#endif
}

void mecrispZeroLess(void) { 
#if defined (__DEBUG__)
	printf("mecrispZeroLess\n");
#endif
}

void mecrispZeroUnequal(void) { 
#if defined (__DEBUG__)
	printf("mecrispZeroUnequal\n");
#endif
}

void mecrispZeroEqual(void) { 
#if defined (__DEBUG__)
	printf("mecrispZeroEqual\n");
#endif
}

void mecrispUnequal(void) { 
#if defined (__DEBUG__)
	printf("mecrispUnequal\n");
#endif
}

void mecrispEqual(void) { 
#if defined (__DEBUG__)
	printf("mecrispEqual\n");
#endif
}

void mecrispDInt(void) { 
#if defined (__DEBUG__)
	printf("mecrispDInt\n");
#endif
}

void mecrispEInt(void) { 
#if defined (__DEBUG__)
	printf("mecrispEInt\n");
#endif
}

void mecrispEIntQ(void) { 
#if defined (__DEBUG__)
	printf("mecrispEIntQ\n");
#endif
}

void mecrispNop(void) { 
#if defined (__DEBUG__)
	printf("mecrispNop\n");
#endif
}

void mecrispReset(void) { 
#if defined (__DEBUG__)
	printf("mecrispReset\n");
#endif
}

void mecrispLpm0(void) { 
#if defined (__DEBUG__)
	printf("mecrispLpm0\n");
#endif
}

void mecrispLpm1(void) { 
#if defined (__DEBUG__)
	printf("mecrispLpm1\n");
#endif
}

void mecrispLpm2(void) { 
#if defined (__DEBUG__)
	printf("mecrispLpm2\n");
#endif
}

void mecrispLpm3(void) { 
#if defined (__DEBUG__)
	printf("mecrispLpm3\n");
#endif
}

void mecrispLpm4(void) { 
#if defined (__DEBUG__)
	printf("mecrispLpm4\n");
#endif
}

void mecrispWakeup(void) { 
#if defined (__DEBUG__)
	printf("mecrispWakeup\n");
#endif
}

void mecrispHookPause(void) { 
#if defined (__DEBUG__)
	printf("mecrispHookPause\n");
#endif
}

void mecrispPause(void) { 
#if defined (__DEBUG__)
	printf("mecrispPause\n");
#endif
}

void mecrispSerialKeyQ(void) { 
#if defined (__DEBUG__)
	printf("mecrispSerialKeyQ\n");
#endif
}

void mecrispSerialKey(void) { 
#if defined (__DEBUG__)
	printf("mecrispSerialKey\n");
#endif
}

void mecrispSerialEmitQ(void) { 
#if defined (__DEBUG__)
	printf("mecrispSerialEmitQ\n");
#endif
}

void mecrispSerialEmit(void) { 
#if defined (__DEBUG__)
	printf("mecrispSerialEmit\n");
#endif
}

void mecrispAdcVcc(void) { 
#if defined (__DEBUG__)
	printf("mecrispAdcVcc\n");
#endif
}

void mecrispAdc1Dot5(void) { 
#if defined (__DEBUG__)
	printf("mecrispAdc1Dot5\n");
#endif
}

void mecrispAnalog(void) { 
#if defined (__DEBUG__)
	printf("mecrispAnalog\n");
#endif
}

void mecrispEraseFlashFrom(void) { 
#if defined (__DEBUG__)
	printf("mecrispEraseFlashFrom\n");
#endif
}

void mecrispEraseFlash(void) { 
#if defined (__DEBUG__)
	printf("mecrispEraseFlash\n");
#endif
}

void mecrispCFlashStore(void) { 
#if defined (__DEBUG__)
	printf("mecrispCFlashStore\n");
#endif
}

void mecrispFlashStore(void) { 
#if defined (__DEBUG__)
	printf("mecrispFlashStore\n");
#endif
}

void mecrispIrqPort1(void) { 
#if defined (__DEBUG__)
	printf("mecrispIrqPort1\n");
#endif
}

void mecrispIrqPort2(void) { 
#if defined (__DEBUG__)
	printf("mecrispIrqPort2\n");
#endif
}

void mecrispIrqAdc(void) { 
#if defined (__DEBUG__)
	printf("mecrispIrqAdc\n");
#endif
}

void mecrispIrqTimerA1(void) { 
#if defined (__DEBUG__)
	printf("mecrispIrqTimerA1\n");
#endif
}

void mecrispIrqTimerA0(void) { 
#if defined (__DEBUG__)
	printf("mecrispIrqTimerA0\n");
#endif
}

void mecrispIrqWatchdog(void) { 
#if defined (__DEBUG__)
	printf("mecrispIrqWatchdog\n");
#endif
}

void mecrispIrqTimerB1(void) { 
#if defined (__DEBUG__)
	printf("mecrispIrqTimerB1\n");
#endif
}

void mecrispIrqTimerB0(void) { 
#if defined (__DEBUG__)
	printf("mecrispIrqTimerB0\n");
#endif
}

void mecrispIrqComp(void) { 
#if defined (__DEBUG__)
	printf("mecrispIrqComp\n");
#endif
}

void mecrispIrqTx(void) { 
#if defined (__DEBUG__)
	printf("mecrispIrqTx\n");
#endif
}

void mecrispIrqRx(void) { 
#if defined (__DEBUG__)
	printf("mecrispIrqRx\n");
#endif
}

/* Flash Dictionary */

void mecrispList(void) { 
#if defined (__DEBUG__)
	printf("mecrispIrqRx\n");
#endif
}

void mecrispSearchFor(void) { 
#if defined (__DEBUG__)
	printf("mecrispSearchFor\n");
#endif
}

void mecrispSearchCalls(void) { 
#if defined (__DEBUG__)
	printf("mecrispSearchCalls\n");
#endif
}

void mecrispUses(void) { 
#if defined (__DEBUG__)
	printf("mecrispUses\n");
#endif
}

void mecrispNameDot(void) { 
#if defined (__DEBUG__)
	printf("mecrispNameDot\n");
#endif
}

void mecrispDisasmDollar(void) { 
#if defined (__DEBUG__)
	printf("mecrispDisasmDollar\n");
#endif
}

void mecrispDisasmFetch(void) { 
#if defined (__DEBUG__)
	printf("mecrispDisasmFetch\n");
#endif
}

void mecrispUDot4(void) { 
#if defined (__DEBUG__)
	printf("mecrispUDot4\n");
#endif
}

void mecrispUDotNs(void) { 
#if defined (__DEBUG__)
	printf("mecrispUDotNs\n");
#endif
}

void mecrispUDotH(void) { 
#if defined (__DEBUG__)
	printf("mecrispUDotH\n");
#endif
}

void mecrispRegisterDot(void) { 
#if defined (__DEBUG__)
	printf("mecrispRegisterDot\n");
#endif
}

void mecrispDisasmConst(void) { 
#if defined (__DEBUG__)
	printf("mecrispDisasmConst\n");
#endif
}

void mecrispDisasmJumps(void) { 
#if defined (__DEBUG__)
	printf("mecrispDisasmJumps\n");
#endif
}

void mecrispDisasmSource(void) { 
#if defined (__DEBUG__)
	printf("mecrispDisasmSource\n");
#endif
}

void mecrispDisasmDestination(void) { 
#if defined (__DEBUG__)
	printf("mecrispDisasmDestination\n");
#endif
}

void mecrispDisasmString(void) { 
#if defined (__DEBUG__)
	printf("mecrispDisasmString\n");
#endif
}

void mecrispDisasmSingle(void) { 
#if defined (__DEBUG__)
	printf("mecrispDisasmSingle\n");
#endif
}

void mecrispDisasmDouble(void) { 
#if defined (__DEBUG__)
	printf("mecrispDisasmDouble\n");
#endif
}

void mecrispDisasm(void) { 
#if defined (__DEBUG__)
	printf("mecrispDisasm\n");
#endif
}

void mecrispMemStamp(void) { 
#if defined (__DEBUG__)
	printf("mecrispMemStamp\n");
#endif
}

void mecrispDisasmStep(void) { 
#if defined (__DEBUG__)
	printf("mecrispDisasmStep\n");
#endif
}

void mecrispSeeC(void) { 
#if defined (__DEBUG__)
	printf("mecrispSeeC\n");
#endif
}

void mecrispSee(void) { 
#if defined (__DEBUG__)
	printf("mecrispSee\n");
#endif
}

void mecrispCornerStone(void) { 
#if defined (__DEBUG__)
	printf("mecrispCornerStone\n");
#endif
}

#endif
