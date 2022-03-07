#ifndef H2OMEC2
#define H2OMEC2

/* The "Mecrisp 2.0.7 for msp430g2553" FORTH */

/* Primitives */

 /* Mecrisp Core */
void mecrispHookKeyQ(void) {
	PSMSG_DEBUG("mecrispHookKeyQ")
}

void mecrispHookKey(void) {
	PSMSG_DEBUG("mecrispHookKey")
}

void mecrispHookEmitQ(void) {
	PSMSG_DEBUG("mecrispHookEmitQ")
}

void mecrispHookEmit(void) {
	PSMSG_DEBUG("mecrispHookEmit")
}

void mecrispKeyQ(void) {
	PSMSG_DEBUG("mecrispKeyQ")
}

void mecrispKey(void) {
	PSMSG_DEBUG("mecrispKey")
}

void mecrispEmitQ(void) {
	PSMSG_DEBUG("mecrispEmitQ")
}

void mecrispEmit(void) {
	PSMSG_DEBUG("mecrispEmit")
}

void mecrispHexDot(void) {
	PSMSG_DEBUG("mecrispHexDot")
}

void mecrispCr(void) {
	PSMSG_DEBUG("mecrispCr")
}

void mecrispBl(void) {
	PSMSG_DEBUG("mecrispBl")
}

void mecrispSpace(void) {
	PSMSG_DEBUG("mecrispSpace")
}

void mecrispSpaces(void) {
	PSMSG_DEBUG("mecrispSpaces")
}

void mecrispWords(void) {
	PSMSG_DEBUG("mecrispWords")
}

void mecrispDotS(void) {
	PSMSG_DEBUG("mecrispDotS")
}

void mecrispHDotS(void) {
	PSMSG_DEBUG("mecrispHDotS")
}

void mecrispUDotS(void) {
	PSMSG_DEBUG("mecrispUDotS")
}

void mecrispDotRs(void) {
	PSMSG_DEBUG("mecrispDotRs")
}

void mecrispTwoNip(void) {
	PSMSG_DEBUG("mecrispTwoNip")
}

void mecrispTwoDrop(void) {
	PSMSG_DEBUG("mecrispTwoDrop")
}

void mecrispTwoMinusRot(void) {
	PSMSG_DEBUG("mecrispTwoMinusRot")
}

void mecrispTwoRot(void) {
	PSMSG_DEBUG("mecrispTwoRot")
}

void mecrispTwoTuck(void) {
	PSMSG_DEBUG("mecrispTwoTuck")
}

void mecrispTwoSwap(void) {
	PSMSG_DEBUG("mecrispTwoSwap")
}

void mecrispTwoOver(void) {
	PSMSG_DEBUG("mecrispTwoOver")
}

void mecrispTwoDup(void) {
	PSMSG_DEBUG("mecrispTwoDup")
}

void mecrispTwoToR(void) {
	PSMSG_DEBUG("mecrispTwoToR")
}

void mecrispTwoRFrom(void) {
	PSMSG_DEBUG("mecrispTwoRFrom")
}

void mecrispTwoRFetch(void) {
	PSMSG_DEBUG("mecrispTwoRFetch")
}

void mecrispTwoRDrop(void) {
	PSMSG_DEBUG("mecrispTwoRDrop")
}

void mecrispDepth(void) {
	PSMSG_DEBUG("mecrispDepth")
}

void mecrispPick(void) {
	PSMSG_DEBUG("mecrispPick")
}

void mecrispNip(void) {
	PSMSG_DEBUG("mecrispNip")
}

void mecrispDrop(void) {
	PSMSG_DEBUG("mecrispDrop")
}

void mecrispRot(void) {
	PSMSG_DEBUG("mecrispRot")
}

void mecrispMinusRot(void) {
	PSMSG_DEBUG("mecrispMinusRot")
}

void mecrispSwap(void) {
	PSMSG_DEBUG("mecrispSwap")
}

void mecrispTuck(void) {
	PSMSG_DEBUG("mecrispTuck")
}

void mecrispOver(void) {
	PSMSG_DEBUG("mecrispOver")
}

void mecrispQDup(void) {
	PSMSG_DEBUG("mecrispQDup")
}

void mecrispDup(void) {
	PSMSG_DEBUG("mecrispDup")
}

void mecrispToR(void) {
	PSMSG_DEBUG("mecrispToR")
}

void mecrispRFrom(void) {
	PSMSG_DEBUG("mecrispRFrom")
}

void mecrispRFetch(void) {
	PSMSG_DEBUG("mecrispRFetch")
}

void mecrispRDrop(void) {
	PSMSG_DEBUG("mecrispRDrop")
}

void mecrispRDepth(void) {
	PSMSG_DEBUG("mecrispRDepth")
}

void mecrispRPick(void) {
	PSMSG_DEBUG("mecrispRPick")
}

void mecrispSPFetch(void) {
	PSMSG_DEBUG("mecrispSPFetch")
}

void mecrispSPStore(void) {
	PSMSG_DEBUG("mecrispSPStore")
}

void mecrispRPFetch(void) {
	PSMSG_DEBUG("mecrispRPFetch")
}

void mecrispRPStore(void) {
	PSMSG_DEBUG("mecrispRPStore")
}

void mecrispReverseHalf(void) {
	PSMSG_DEBUG("mecrispReverseHalf")
}

void mecrispARShift(void) {
	PSMSG_DEBUG("mecrispARShift")
}

void mecrispRShift(void) {
	PSMSG_DEBUG("mecrispRShift")
}

void mecrispLShift(void) {
	PSMSG_DEBUG("mecrispLShift")
}

void mecrispShR(void) {
	PSMSG_DEBUG("mecrispShR")
}

void mecrispShL(void) {
	PSMSG_DEBUG("mecrispShL")
}

void mecrispRoR(void) {
	PSMSG_DEBUG("mecrispRoR")
}

void mecrispRoL(void) {
	PSMSG_DEBUG("mecrispRoL")
}

void mecrispBic(void) {
	PSMSG_DEBUG("mecrispBic")
}

void mecrispNot(void) {
	PSMSG_DEBUG("mecrispNot")
}

void mecrispXor(void) {
	PSMSG_DEBUG("mecrispXor")
}

void mecrispOr(void) {
	PSMSG_DEBUG("mecrispOr")
}

void mecrispAnd(void) {
	PSMSG_DEBUG("mecrispAnd")
}

void mecrispTrue(void) {
	PSMSG_DEBUG("mecrispTrue")
}

void mecrispFalse(void) {
	PSMSG_DEBUG("mecrispFalse")
}

void mecrispClz(void) {
	PSMSG_DEBUG("mecrispClz")
}

void mecrispDotDigit(void) {
	PSMSG_DEBUG("mecrispDotDigit")
}

void mecrispDigit(void) {
	PSMSG_DEBUG("mecrispDigit")
}

void mecrispHold(void) {
	PSMSG_DEBUG("mecrispHold")
}

void mecrispSign(void) {
	PSMSG_DEBUG("mecrispSign")
}

void mecrispNumS(void) {
	PSMSG_DEBUG("mecrispNumS")
}

void mecrispNum(void) {
	PSMSG_DEBUG("mecrispNum")
}

void mecrispNumGreater(void) {
	PSMSG_DEBUG("mecrispNumGreater")
}

void mecrispLessNum(void) {
	PSMSG_DEBUG("mecrispLessNum")
}

void mecrispUDot(void) {
	PSMSG_DEBUG("mecrispUDot")
}

void mecrispDot(void) {
	PSMSG_DEBUG("mecrispDot")
}

void mecrispUDDot(void) {
	PSMSG_DEBUG("mecrispUDDot")
}

void mecrispDDot(void) {
	PSMSG_DEBUG("mecrispDDot")
}

void mecrispFSlash(void) {
	PSMSG_DEBUG("mecrispFSlash")
}

void mecrispFStar(void) {
	PSMSG_DEBUG("mecrispFStar")
}

void mecrispHoldLess(void) {
	PSMSG_DEBUG("mecrispHoldLess")
}

void mecrispFNumS(void) {
	PSMSG_DEBUG("mecrispFNumS")
}

void mecrispFNum(void) {
	PSMSG_DEBUG("mecrispFNum")
}

void mecrispFDot(void) {
	PSMSG_DEBUG("mecrispFDot")
}

void mecrisp(void) {
	PSMSG_DEBUG("mecrisp")
}

void mecrispNumber(void) {
	PSMSG_DEBUG("mecrispNumber")
}

void mecrispSlashStar(void) {
	PSMSG_DEBUG("mecrispSlashStar")
}

void mecrispUStarSlash(void) {
	PSMSG_DEBUG("mecrispUStarSlash")
}

void mecrispStarSlashMod(void) {
	PSMSG_DEBUG("mecrispStarSlashMod")
}

void mecrispMSlashMod(void) {
	PSMSG_DEBUG("mecrispMSlashMod")
}

void mecrispMStar(void) {
	PSMSG_DEBUG("mecrispMStar")
}

void mecrispUMSlashMod(void) {
	PSMSG_DEBUG("mecrispUMSlashMod")
}

void mecrispUDSlashMod(void) {
	PSMSG_DEBUG("mecrispUDSlashMod")
}

void mecrispUDMStar(void) {
	PSMSG_DEBUG("mecrispUDMStar")
}

void mecrispD2Slash(void) {
	PSMSG_DEBUG("mecrispD2Slash")
}

void mecrispD2Star(void) {
	PSMSG_DEBUG("mecrispD2Star")
}

void mecrispDShR(void) {
	PSMSG_DEBUG("mecrispDShR")
}

void mecrispDShL(void) {
	PSMSG_DEBUG("mecrispDShL")
}

void mecrispDAbs(void) {
	PSMSG_DEBUG("mecrispDAbs")
}

void mecrispDNegate(void) {
	PSMSG_DEBUG("mecrispDNegate")
}

void mecrispDMinus(void) {
	PSMSG_DEBUG("mecrispDMinus")
}

void mecrispDPlus(void) {
	PSMSG_DEBUG("mecrispDPlus")
}

void mecrispSToD(void) {
	PSMSG_DEBUG("mecrispSToD")
}

void mecrispDuGreater(void) {
	PSMSG_DEBUG("mecrispDuGreater")
}

void mecrispDuLess(void) {
	PSMSG_DEBUG("mecrispDuLess")
}

void mecrispDGreater(void) {
	PSMSG_DEBUG("mecrispDGreater")
}

void mecrispDLess(void) {
	PSMSG_DEBUG("mecrispDLess")
}

void mecrispD0Less(void) {
	PSMSG_DEBUG("mecrispD0Less")
}

void mecrispD0Equal(void) {
	PSMSG_DEBUG("mecrispD0Equal")
}

void mecrispD0Unequal(void) {
	PSMSG_DEBUG("mecrispD0Unequal")
}

void mecrispDEqual(void) {
	PSMSG_DEBUG("mecrispDEqual")
}

void mecrispUMStar(void) {
	PSMSG_DEBUG("mecrispUMStar")
}

void mecrispUSlashMod(void) {
	PSMSG_DEBUG("mecrispUSlashMod")
}

void mecrispSlashMod(void) {
	PSMSG_DEBUG("mecrispSlashMod")
}

void mecrispMod(void) {
	PSMSG_DEBUG("mecrispMod")
}

void mecrispSlash(void) {
	PSMSG_DEBUG("mecrispSlash")
}

void mecrispStar(void) {
	PSMSG_DEBUG("mecrispStar")
}

void mecrispCompare(void) {
	PSMSG_DEBUG("mecrispCompare")
}

void mecrispSkipString(void) {
	PSMSG_DEBUG("mecrispSkipString")
}

void mecrispCType(void) {
	PSMSG_DEBUG("mecrispCType")
}

void mecrispType(void) {
	PSMSG_DEBUG("mecrispType")
}

void mecrispSQuote(void) {
	PSMSG_DEBUG("mecrispSQuote")
}

void mecrispCQuote(void) {
	PSMSG_DEBUG("mecrispCQuote")
}

void mecrispDotQuote(void) {
	PSMSG_DEBUG("mecrispDotQuote")
}

void mecrispParen(void) {
	PSMSG_DEBUG("mecrispParen")
}

void mecrispCount(void) {
	PSMSG_DEBUG("mecrispCount")
}

void mecrispBackslash(void) {
	PSMSG_DEBUG("mecrispBackslash")
}

void mecrispMin(void) {
	PSMSG_DEBUG("mecrispMin")
}

void mecrispMax(void) {
	PSMSG_DEBUG("mecrispMax")
}

void mecrispUMin(void) {
	PSMSG_DEBUG("mecrispUMin")
}

void mecrispUMax(void) {
	PSMSG_DEBUG("mecrispUMax")
}

void mecrispTwoMinus(void) {
	PSMSG_DEBUG("mecrispTwoMinus")
}

void mecrispOneMinus(void) {
	PSMSG_DEBUG("mecrispOneMinus")
}

void mecrispTwoPlus(void) {
	PSMSG_DEBUG("mecrispTwoPlus")
}

void mecrispOnePlus(void) {
	PSMSG_DEBUG("mecrispOnePlus")
}

void mecrispEven(void) {
	PSMSG_DEBUG("mecrispEven")
}

void mecrispTwoStar(void) {
	PSMSG_DEBUG("mecrispTwoStar")
}

void mecrispTwoSlash(void) {
	PSMSG_DEBUG("mecrispTwoSlash")
}

void mecrispAbs(void) {
	PSMSG_DEBUG("mecrispAbs")
}

void mecrispNegate(void) {
	PSMSG_DEBUG("mecrispNegate")
}

void mecrispMinus(void) {
	PSMSG_DEBUG("mecrispMinus")
}

void mecrispPlus(void) {
	PSMSG_DEBUG("mecrispPlus")
}

void mecrispBinary(void) {
	PSMSG_DEBUG("mecrispBinary")
}

void mecrispDecimal(void) {
	PSMSG_DEBUG("mecrispDecimal")
}

void mecrispHex(void) {
	PSMSG_DEBUG("mecrispHex")
}

void mecrispBase(void) {
	PSMSG_DEBUG("mecrispBase")
}

void mecrispCells(void) {
	PSMSG_DEBUG("mecrispCells")
}

void mecrispCellPlus(void) {
	PSMSG_DEBUG("mecrispCellPlus")
}

void mecrispMove(void) {
	PSMSG_DEBUG("mecrispMove")
}

void mecrispFill(void) {
	PSMSG_DEBUG("mecrispFill")
}

void mecrispCBitFetch(void) {
	PSMSG_DEBUG("mecrispCBitFetch")
}

void mecrispBitFetch(void) {
	PSMSG_DEBUG("mecrispBitFetch")
}

void mecrispCXorStore(void) {
	PSMSG_DEBUG("mecrispCXorStore")
}

void mecrispXorStore(void) {
	PSMSG_DEBUG("mecrispXorStore")
}

void mecrispCBicStore(void) {
	PSMSG_DEBUG("mecrispXorStore")
}

void mecrispBicStore(void) {
	PSMSG_DEBUG("mecrispBicStore")
}

void mecrispCBisStore(void) {
	PSMSG_DEBUG("mecrispCBisStore")
}

void mecrispBisStore(void) {
	PSMSG_DEBUG("mecrispBisStore")
}

void mecrispTwoConstant(void) {
	PSMSG_DEBUG("mecrispTwoConstant")
}

void mecrispConstant(void) {
	PSMSG_DEBUG("mecrispConstant")
}

void mecrispTwoVariable(void) {
	PSMSG_DEBUG("mecrispTwoVariable")
}

void mecrispVariable(void) {
	PSMSG_DEBUG("mecrispVariable")
}

void mecrispNVariable(void) {
	PSMSG_DEBUG("mecrispNVariable")
}

void mecrispBufferColon(void) {
	PSMSG_DEBUG("mecrispBufferColon")
}

void mecrispPlusStore(void) {
	PSMSG_DEBUG("mecrispPlusStore")
}

void mecrispCPlusStore(void) {
	PSMSG_DEBUG("mecrispCPlusStore")
}

void mecrispTwoStore(void) {
	PSMSG_DEBUG("mecrispTwoStore")
}

void mecrispTwoFetch(void) {
	PSMSG_DEBUG("mecrispTwoFetch")
}

void mecrispCStore(void) {
	PSMSG_DEBUG("mecrispCStore")
}

void mecrispCFetch(void) {
	PSMSG_DEBUG("mecrispCFetch")
}

void mecrispStore(void) {
	PSMSG_DEBUG("mecrispStore")
}

void mecrispFetch(void) {
	PSMSG_DEBUG("mecrispFetch")
}

void mecrispToIn(void) {
	PSMSG_DEBUG("mecrispToIn")
}

void mecrispCurrentSource(void) {
	PSMSG_DEBUG("mecrispCurrentSource")
}

void mecrispSource(void) {
	PSMSG_DEBUG("mecrispSource")
}

void mecrispSetSource(void) {
	PSMSG_DEBUG("mecrispSetSource")
}

void mecrispTib(void) {
	PSMSG_DEBUG("mecrispTib")
}

void mecrispQuery(void) {
	PSMSG_DEBUG("mecrispQuery")
}

void mecrispCExpect(void) {
	PSMSG_DEBUG("mecrispCExpect")
}

void mecrispForth(void) {
	PSMSG_DEBUG("mecrispForth")
}

void mecrispToken(void) {
	PSMSG_DEBUG("mecrispToken")
}

void mecrispParse(void) {
	PSMSG_DEBUG("mecrispParse")
}

void mecrispXTick(void) {
	PSMSG_DEBUG("mecrispXTick")
}

void mecrispTick(void) {
	PSMSG_DEBUG("mecrispTick")
}

void mecrispEvaluate(void) {
	PSMSG_DEBUG("mecrispEvaluate")
}

void mecrispInterpret(void) {
	PSMSG_DEBUG("mecrispInterpret")
}

void mecrispHookQuit(void) {
	PSMSG_DEBUG("mecrispHookQuit")
}

void mecrispQuit(void) {
	PSMSG_DEBUG("mecrispQuit")
}

void mecrispDictionaryStart(void) {
	PSMSG_DEBUG("mecrispDictionaryStart")
}

void mecrispDictionaryNext(void) {
	PSMSG_DEBUG("mecrispDictionaryNext")
}

void mecrispComma(void) {
	PSMSG_DEBUG("mecrispComma")
}

void mecrispCComma(void) {
	PSMSG_DEBUG("mecrispCComma")
}

void mecrispAlign(void) {
	PSMSG_DEBUG("mecrispAlign")
}

void mecrispAligned(void) {
	PSMSG_DEBUG("mecrispAligned")
}

void mecrispXChar(void) {
	PSMSG_DEBUG("mecrispXChar")
}

void mecrispChar(void) {
	PSMSG_DEBUG("mecrispChar")
}

void mecrispStringComma(void) {
	PSMSG_DEBUG("mecrispStringComma")
}

void mecrispLiteralComma(void) {
	PSMSG_DEBUG("mecrispLiteralComma")
}

void mecrispTwoLiteralComma(void) {
	PSMSG_DEBUG("mecrispTwoLiteralComma")
}

void mecrispInlineComma(void) {
	PSMSG_DEBUG("mecrispInlineComma")
}

void mecrispCallComma(void) {
	PSMSG_DEBUG("mecrispCallComma")
}

void mecrispRetComma(void) {
	PSMSG_DEBUG("mecrispRetComma")
}

void mecrispFlashVarHere(void) {
	PSMSG_DEBUG("mecrispFlashVarHere")
}

void mecrispHere(void) {
	PSMSG_DEBUG("mecrispHere")
}

void mecrispAllot(void) {
	PSMSG_DEBUG("mecrispAllot")
}

void mecrispYCreate(void) {
	PSMSG_DEBUG("mecrispYCreate")
}

void mecrispCompiletoRamQ(void) {
	PSMSG_DEBUG("mecrispCompiletoRamQ")
}

void mecrispCompiletoRam(void) {
	PSMSG_DEBUG("mecrispCompiletoRam")
}

void mecrispCompileToFlash(void) {
	PSMSG_DEBUG("mecrispCompileToFlash")
}

void mecrispSmudge(void) {
	PSMSG_DEBUG("mecrispSmudge")
}

void mecrispCompileOnly(void) {
	PSMSG_DEBUG("mecrispCompileOnly")
}

void mecrispInline(void) {
	PSMSG_DEBUG("mecrispInline")
}

void mecrispImmediate(void) {
	PSMSG_DEBUG("mecrispImmediate")
}

void mecrispSetflags(void) {
	PSMSG_DEBUG("mecrispSetflags")
}

void mecrispFind(void) {
	PSMSG_DEBUG("mecrispFind")
}

void mecrispExecute(void) {
	PSMSG_DEBUG("mecrispExecute")
}

void mecrispRecurse(void) {
	PSMSG_DEBUG("mecrispRecurse")
}

void mecrispPostpone(void) {
	PSMSG_DEBUG("mecrispPostpone")
}

void mecrispDoes(void) {
	PSMSG_DEBUG("mecrispDoes")
}

void mecrispBuilds(void) {
	PSMSG_DEBUG("mecrispBuilds")
}

void mecrispCreate(void) {
	PSMSG_DEBUG("mecrispCreate")
}

void mecrispState(void) {
	PSMSG_DEBUG("mecrispState")
}

void mecrispRightBracket(void) {
	PSMSG_DEBUG("mecrispRightBracket")
}

void mecrispLeftBracket(void) {
	PSMSG_DEBUG("mecrispLeftBracket")
}

void mecrispSemicolon(void) {
	PSMSG_DEBUG("mecrispSemicolon")
}

void mecrispColon(void) {
	PSMSG_DEBUG("mecrispColon")
}

void mecrispZeroFoldable(void) {
	PSMSG_DEBUG("mecrispZeroFoldable")
}

void mecrispOneFoldable(void) {
	PSMSG_DEBUG("mecrispOneFoldable")
}

void mecrispTwoFoldable(void) {
	PSMSG_DEBUG("mecrispTwoFoldable")
}

void mecrispThreeFoldable(void) {
	PSMSG_DEBUG("mecrispThreeFoldable")
}

void mecrispFourFoldable(void) {
	PSMSG_DEBUG("mecrispFourFoldable")
}

void mecrispFiveFoldable(void) {
	PSMSG_DEBUG("mecrispFiveFoldable")
}

void mecrispSixFoldable(void) {
	PSMSG_DEBUG("mecrispSixFoldable")
}

void mecrispSevenFoldable(void) {
	PSMSG_DEBUG("mecrispSevenFoldable")
}

void mecrispJumpComma(void) {
	PSMSG_DEBUG("mecrispJumpComma")
}

void mecrispThen(void) {
	PSMSG_DEBUG("mecrispThen")
}

void mecrispElse(void) {
	PSMSG_DEBUG("mecrispElse")
}

void mecrispIf(void) {
	PSMSG_DEBUG("mecrispIf")
}

void mecrispAhead(void) {
	PSMSG_DEBUG("mecrispAhead")
}

void mecrispRepeat(void) {
	PSMSG_DEBUG("mecrispRepeat")
}

void mecrispWhile(void) {
	PSMSG_DEBUG("mecrispWhile")
}

void mecrispUntil(void) {
	PSMSG_DEBUG("mecrispUntil")
}

void mecrispAgain(void) {
	PSMSG_DEBUG("mecrispAgain")
}

void mecrispBegin(void) {
	PSMSG_DEBUG("mecrispBegin")
}

void mecrispExit(void) {
	PSMSG_DEBUG("mecrispExit")
}

void mecrispK(void) {
	PSMSG_DEBUG("mecrispK")
}

void mecrispJ(void) {
	PSMSG_DEBUG("mecrispJ")
}

void mecrispI(void) {
	PSMSG_DEBUG("mecrispI")
}

void mecrispUnLoop(void) {
	PSMSG_DEBUG("mecrispUnLoop")
}

void mecrispLeave(void) {
	PSMSG_DEBUG("mecrispLeave")
}

void mecrispPlusLoop(void) {
	PSMSG_DEBUG("mecrispPlusLoop")
}

void mecrispLoop(void) {
	PSMSG_DEBUG("mecrispLoop")
}

void mecrispQDo(void) {
	PSMSG_DEBUG("mecrispQDo")
}

void mecrispDo(void) {
	PSMSG_DEBUG("mecrispDo")
}

void mecrispCase(void) {
	PSMSG_DEBUG("mecrispCase")
}

void mecrispQOf(void) {
	PSMSG_DEBUG("mecrispQOf")
}

void mecrispOf(void) {
	PSMSG_DEBUG("mecrispOf")
}

void mecrispEndOf(void) {
	PSMSG_DEBUG("mecrispEndOf")
}

void mecrispEndCase(void) {
	PSMSG_DEBUG("mecrispEndCase")
}

void mecrispULessEqual(void) {
	PSMSG_DEBUG("mecrispULessEqual")
}

void mecrispUGreaterEqual(void) {
	PSMSG_DEBUG("mecrispUGreaterEqual")
}

void mecrispUGreater(void) {
	PSMSG_DEBUG("mecrispUGreater")
}

void mecrispULess(void) {
	PSMSG_DEBUG("mecrispULess")
}

void mecrispLessEqual(void) {
	PSMSG_DEBUG("mecrispLessEqual")
}

void mecrispGreaterEqual(void) {
	PSMSG_DEBUG("mecrispGreaterEqual")
}

void mecrispGreater(void) {
	PSMSG_DEBUG("mecrispGreater")
}

void mecrispLess(void) {
	PSMSG_DEBUG("mecrispLess")
}

void mecrispZeroLess(void) {
	PSMSG_DEBUG("mecrispZeroLess")
}

void mecrispZeroUnequal(void) {
	PSMSG_DEBUG("mecrispZeroUnequal")
}

void mecrispZeroEqual(void) {
	PSMSG_DEBUG("mecrispZeroEqual")
}

void mecrispUnequal(void) {
	PSMSG_DEBUG("mecrispUnequal")
}

void mecrispEqual(void) {
	PSMSG_DEBUG("mecrispEqual")
}

void mecrispDInt(void) {
	PSMSG_DEBUG("mecrispDInt")
}

void mecrispEInt(void) {
	PSMSG_DEBUG("mecrispEInt")
}

void mecrispEIntQ(void) {
	PSMSG_DEBUG("mecrispEIntQ")
}

void mecrispNop(void) {
	PSMSG_DEBUG("mecrispNop")
}

void mecrispReset(void) {
	PSMSG_DEBUG("mecrispReset")
}

void mecrispLpm0(void) {
	PSMSG_DEBUG("mecrispLpm0")
}

void mecrispLpm1(void) {
	PSMSG_DEBUG("mecrispLpm1")
}

void mecrispLpm2(void) {
	PSMSG_DEBUG("mecrispLpm2")
}

void mecrispLpm3(void) {
	PSMSG_DEBUG("mecrispLpm3")
}

void mecrispLpm4(void) {
	PSMSG_DEBUG("mecrispLpm4")
}

void mecrispWakeup(void) {
	PSMSG_DEBUG("mecrispWakeup")
}

void mecrispHookPause(void) {
	PSMSG_DEBUG("mecrispHookPause")
}

void mecrispPause(void) {
	PSMSG_DEBUG("mecrispPause")
}

void mecrispSerialKeyQ(void) {
	PSMSG_DEBUG("mecrispSerialKeyQ")
}

void mecrispSerialKey(void) {
	PSMSG_DEBUG("mecrispSerialKey")
}

void mecrispSerialEmitQ(void) {
	PSMSG_DEBUG("mecrispSerialEmitQ")
}

void mecrispSerialEmit(void) {
	PSMSG_DEBUG("mecrispSerialEmit")
}

void mecrispAdcVcc(void) {
	PSMSG_DEBUG("mecrispAdcVcc")
}

void mecrispAdc1Dot5(void) {
	PSMSG_DEBUG("mecrispAdc1Dot5")
}

void mecrispAnalog(void) {
	PSMSG_DEBUG("mecrispAnalog")
}

void mecrispEraseFlashFrom(void) {
	PSMSG_DEBUG("mecrispEraseFlashFrom")
}

void mecrispEraseFlash(void) {
	PSMSG_DEBUG("mecrispEraseFlash")
}

void mecrispCFlashStore(void) {
	PSMSG_DEBUG("mecrispCFlashStore")
}

void mecrispFlashStore(void) {
	PSMSG_DEBUG("mecrispFlashStore")
}

void mecrispIrqPort1(void) {
	PSMSG_DEBUG("mecrispIrqPort1")
}

void mecrispIrqPort2(void) {
	PSMSG_DEBUG("mecrispIrqPort2")
}

void mecrispIrqAdc(void) {
	PSMSG_DEBUG("mecrispIrqAdc")
}

void mecrispIrqTimerA1(void) {
	PSMSG_DEBUG("mecrispIrqTimerA1")
}

void mecrispIrqTimerA0(void) {
	PSMSG_DEBUG("mecrispIrqTimerA0")
}

void mecrispIrqWatchdog(void) {
	PSMSG_DEBUG("mecrispIrqWatchdog")
}

void mecrispIrqTimerB1(void) {
	PSMSG_DEBUG("mecrispIrqTimerB1")
}

void mecrispIrqTimerB0(void) {
	PSMSG_DEBUG("mecrispIrqTimerB0")
}

void mecrispIrqComp(void) {
	PSMSG_DEBUG("mecrispIrqComp")
}

void mecrispIrqTx(void) {
	PSMSG_DEBUG("mecrispIrqTx")
}

void mecrispIrqRx(void) {
	PSMSG_DEBUG("mecrispIrqRx")
}

/* Flash Dictionary */

void mecrispList(void) {
	PSMSG_DEBUG("mecrispIrqRx")
}

void mecrispSearchFor(void) {
	PSMSG_DEBUG("mecrispSearchFor")
}

void mecrispSearchCalls(void) {
	PSMSG_DEBUG("mecrispSearchCalls")
}

void mecrispUses(void) {
	PSMSG_DEBUG("mecrispUses")
}

void mecrispNameDot(void) {
	PSMSG_DEBUG("mecrispNameDot")
}

void mecrispDisasmDollar(void) {
	PSMSG_DEBUG("mecrispDisasmDollar")
}

void mecrispDisasmFetch(void) {
	PSMSG_DEBUG("mecrispDisasmFetch")
}

void mecrispUDot4(void) {
	PSMSG_DEBUG("mecrispUDot4")
}

void mecrispUDotNs(void) {
	PSMSG_DEBUG("mecrispUDotNs")
}

void mecrispUDotH(void) {
	PSMSG_DEBUG("mecrispUDotH")
}

void mecrispRegisterDot(void) {
	PSMSG_DEBUG("mecrispRegisterDot")
}

void mecrispDisasmConst(void) {
	PSMSG_DEBUG("mecrispDisasmConst")
}

void mecrispDisasmJumps(void) {
	PSMSG_DEBUG("mecrispDisasmJumps")
}

void mecrispDisasmSource(void) {
	PSMSG_DEBUG("mecrispDisasmSource")
}

void mecrispDisasmDestination(void) {
	PSMSG_DEBUG("mecrispDisasmDestination")
}

void mecrispDisasmString(void) {
	PSMSG_DEBUG("mecrispDisasmString")
}

void mecrispDisasmSingle(void) {
	PSMSG_DEBUG("mecrispDisasmSingle")
}

void mecrispDisasmDouble(void) {
	PSMSG_DEBUG("mecrispDisasmDouble")
}

void mecrispDisasm(void) {
	PSMSG_DEBUG("mecrispDisasm")
}

void mecrispMemStamp(void) {
	PSMSG_DEBUG("mecrispMemStamp")
}

void mecrispDisasmStep(void) {
	PSMSG_DEBUG("mecrispDisasmStep")
}

void mecrispSeeC(void) {
	PSMSG_DEBUG("mecrispSeeC")
}

void mecrispSee(void) {
	PSMSG_DEBUG("mecrispSee")
}

void mecrispCornerStone(void) {
	PSMSG_DEBUG("mecrispCornerStone")
}

#endif
