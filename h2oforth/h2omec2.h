#ifndef H2OMEC2
#define H2OMEC2

/* The "Mecrisp 2.0.7 for msp430g2553" FORTH */

/* Primitives */

 /* Mecrisp Core */
void mecrispHookKeyQ(void) {
	MESSSAGE_DEBUG("mecrispHookKeyQ")
}

void mecrispHookKey(void) {
	MESSSAGE_DEBUG("mecrispHookKey")
}

void mecrispHookEmitQ(void) {
	MESSSAGE_DEBUG("mecrispHookEmitQ")
}

void mecrispHookEmit(void) {
	MESSSAGE_DEBUG("mecrispHookEmit")
}

void mecrispKeyQ(void) {
	MESSSAGE_DEBUG("mecrispKeyQ")
}

void mecrispKey(void) {
	MESSSAGE_DEBUG("mecrispKey")
}

void mecrispEmitQ(void) {
	MESSSAGE_DEBUG("mecrispEmitQ")
}

void mecrispEmit(void) {
	MESSSAGE_DEBUG("mecrispEmit")
}

void mecrispHexDot(void) {
	MESSSAGE_DEBUG("mecrispHexDot")
}

void mecrispCr(void) {
	MESSSAGE_DEBUG("mecrispCr")
}

void mecrispBl(void) {
	MESSSAGE_DEBUG("mecrispBl")
}

void mecrispSpace(void) {
	MESSSAGE_DEBUG("mecrispSpace")
}

void mecrispSpaces(void) {
	MESSSAGE_DEBUG("mecrispSpaces")
}

void mecrispWords(void) {
	MESSSAGE_DEBUG("mecrispWords")
}

void mecrispDotS(void) {
	MESSSAGE_DEBUG("mecrispDotS")
}

void mecrispHDotS(void) {
	MESSSAGE_DEBUG("mecrispHDotS")
}

void mecrispUDotS(void) {
	MESSSAGE_DEBUG("mecrispUDotS")
}

void mecrispDotRs(void) {
	MESSSAGE_DEBUG("mecrispDotRs")
}

void mecrispTwoNip(void) {
	MESSSAGE_DEBUG("mecrispTwoNip")
}

void mecrispTwoDrop(void) {
	MESSSAGE_DEBUG("mecrispTwoDrop")
}

void mecrispTwoMinusRot(void) {
	MESSSAGE_DEBUG("mecrispTwoMinusRot")
}

void mecrispTwoRot(void) {
	MESSSAGE_DEBUG("mecrispTwoRot")
}

void mecrispTwoTuck(void) {
	MESSSAGE_DEBUG("mecrispTwoTuck")
}

void mecrispTwoSwap(void) {
	MESSSAGE_DEBUG("mecrispTwoSwap")
}

void mecrispTwoOver(void) {
	MESSSAGE_DEBUG("mecrispTwoOver")
}

void mecrispTwoDup(void) {
	MESSSAGE_DEBUG("mecrispTwoDup")
}

void mecrispTwoToR(void) {
	MESSSAGE_DEBUG("mecrispTwoToR")
}

void mecrispTwoRFrom(void) {
	MESSSAGE_DEBUG("mecrispTwoRFrom")
}

void mecrispTwoRFetch(void) {
	MESSSAGE_DEBUG("mecrispTwoRFetch")
}

void mecrispTwoRDrop(void) {
	MESSSAGE_DEBUG("mecrispTwoRDrop")
}

void mecrispDepth(void) {
	MESSSAGE_DEBUG("mecrispDepth")
}

void mecrispPick(void) {
	MESSSAGE_DEBUG("mecrispPick")
}

void mecrispNip(void) {
	MESSSAGE_DEBUG("mecrispNip")
}

void mecrispDrop(void) {
	MESSSAGE_DEBUG("mecrispDrop")
}

void mecrispRot(void) {
	MESSSAGE_DEBUG("mecrispRot")
}

void mecrispMinusRot(void) {
	MESSSAGE_DEBUG("mecrispMinusRot")
}

void mecrispSwap(void) {
	MESSSAGE_DEBUG("mecrispSwap")
}

void mecrispTuck(void) {
	MESSSAGE_DEBUG("mecrispTuck")
}

void mecrispOver(void) {
	MESSSAGE_DEBUG("mecrispOver")
}

void mecrispQDup(void) {
	MESSSAGE_DEBUG("mecrispQDup")
}

void mecrispDup(void) {
	MESSSAGE_DEBUG("mecrispDup")
}

void mecrispToR(void) {
	MESSSAGE_DEBUG("mecrispToR")
}

void mecrispRFrom(void) {
	MESSSAGE_DEBUG("mecrispRFrom")
}

void mecrispRFetch(void) {
	MESSSAGE_DEBUG("mecrispRFetch")
}

void mecrispRDrop(void) {
	MESSSAGE_DEBUG("mecrispRDrop")
}

void mecrispRDepth(void) {
	MESSSAGE_DEBUG("mecrispRDepth")
}

void mecrispRPick(void) {
	MESSSAGE_DEBUG("mecrispRPick")
}

void mecrispSPFetch(void) {
	MESSSAGE_DEBUG("mecrispSPFetch")
}

void mecrispSPStore(void) {
	MESSSAGE_DEBUG("mecrispSPStore")
}

void mecrispRPFetch(void) {
	MESSSAGE_DEBUG("mecrispRPFetch")
}

void mecrispRPStore(void) {
	MESSSAGE_DEBUG("mecrispRPStore")
}

void mecrispReverseHalf(void) {
	MESSSAGE_DEBUG("mecrispReverseHalf")
}

void mecrispARShift(void) {
	MESSSAGE_DEBUG("mecrispARShift")
}

void mecrispRShift(void) {
	MESSSAGE_DEBUG("mecrispRShift")
}

void mecrispLShift(void) {
	MESSSAGE_DEBUG("mecrispLShift")
}

void mecrispShR(void) {
	MESSSAGE_DEBUG("mecrispShR")
}

void mecrispShL(void) {
	MESSSAGE_DEBUG("mecrispShL")
}

void mecrispRoR(void) {
	MESSSAGE_DEBUG("mecrispRoR")
}

void mecrispRoL(void) {
	MESSSAGE_DEBUG("mecrispRoL")
}

void mecrispBic(void) {
	MESSSAGE_DEBUG("mecrispBic")
}

void mecrispNot(void) {
	MESSSAGE_DEBUG("mecrispNot")
}

void mecrispXor(void) {
	MESSSAGE_DEBUG("mecrispXor")
}

void mecrispOr(void) {
	MESSSAGE_DEBUG("mecrispOr")
}

void mecrispAnd(void) {
	MESSSAGE_DEBUG("mecrispAnd")
}

void mecrispTrue(void) {
	MESSSAGE_DEBUG("mecrispTrue")
}

void mecrispFalse(void) {
	MESSSAGE_DEBUG("mecrispFalse")
}

void mecrispClz(void) {
	MESSSAGE_DEBUG("mecrispClz")
}

void mecrispDotDigit(void) {
	MESSSAGE_DEBUG("mecrispDotDigit")
}

void mecrispDigit(void) {
	MESSSAGE_DEBUG("mecrispDigit")
}

void mecrispHold(void) {
	MESSSAGE_DEBUG("mecrispHold")
}

void mecrispSign(void) {
	MESSSAGE_DEBUG("mecrispSign")
}

void mecrispNumS(void) {
	MESSSAGE_DEBUG("mecrispNumS")
}

void mecrispNum(void) {
	MESSSAGE_DEBUG("mecrispNum")
}

void mecrispNumGreater(void) {
	MESSSAGE_DEBUG("mecrispNumGreater")
}

void mecrispLessNum(void) {
	MESSSAGE_DEBUG("mecrispLessNum")
}

void mecrispUDot(void) {
	MESSSAGE_DEBUG("mecrispUDot")
}

void mecrispDot(void) {
	MESSSAGE_DEBUG("mecrispDot")
}

void mecrispUDDot(void) {
	MESSSAGE_DEBUG("mecrispUDDot")
}

void mecrispDDot(void) {
	MESSSAGE_DEBUG("mecrispDDot")
}

void mecrispFSlash(void) {
	MESSSAGE_DEBUG("mecrispFSlash")
}

void mecrispFStar(void) {
	MESSSAGE_DEBUG("mecrispFStar")
}

void mecrispHoldLess(void) {
	MESSSAGE_DEBUG("mecrispHoldLess")
}

void mecrispFNumS(void) {
	MESSSAGE_DEBUG("mecrispFNumS")
}

void mecrispFNum(void) {
	MESSSAGE_DEBUG("mecrispFNum")
}

void mecrispFDot(void) {
	MESSSAGE_DEBUG("mecrispFDot")
}

void mecrisp(void) {
	MESSSAGE_DEBUG("mecrisp")
}

void mecrispNumber(void) {
	MESSSAGE_DEBUG("mecrispNumber")
}

void mecrispSlashStar(void) {
	MESSSAGE_DEBUG("mecrispSlashStar")
}

void mecrispUStarSlash(void) {
	MESSSAGE_DEBUG("mecrispUStarSlash")
}

void mecrispStarSlashMod(void) {
	MESSSAGE_DEBUG("mecrispStarSlashMod")
}

void mecrispMSlashMod(void) {
	MESSSAGE_DEBUG("mecrispMSlashMod")
}

void mecrispMStar(void) {
	MESSSAGE_DEBUG("mecrispMStar")
}

void mecrispUMSlashMod(void) {
	MESSSAGE_DEBUG("mecrispUMSlashMod")
}

void mecrispUDSlashMod(void) {
	MESSSAGE_DEBUG("mecrispUDSlashMod")
}

void mecrispUDMStar(void) {
	MESSSAGE_DEBUG("mecrispUDMStar")
}

void mecrispD2Slash(void) {
	MESSSAGE_DEBUG("mecrispD2Slash")
}

void mecrispD2Star(void) {
	MESSSAGE_DEBUG("mecrispD2Star")
}

void mecrispDShR(void) {
	MESSSAGE_DEBUG("mecrispDShR")
}

void mecrispDShL(void) {
	MESSSAGE_DEBUG("mecrispDShL")
}

void mecrispDAbs(void) {
	MESSSAGE_DEBUG("mecrispDAbs")
}

void mecrispDNegate(void) {
	MESSSAGE_DEBUG("mecrispDNegate")
}

void mecrispDMinus(void) {
	MESSSAGE_DEBUG("mecrispDMinus")
}

void mecrispDPlus(void) {
	MESSSAGE_DEBUG("mecrispDPlus")
}

void mecrispSToD(void) {
	MESSSAGE_DEBUG("mecrispSToD")
}

void mecrispDuGreater(void) {
	MESSSAGE_DEBUG("mecrispDuGreater")
}

void mecrispDuLess(void) {
	MESSSAGE_DEBUG("mecrispDuLess")
}

void mecrispDGreater(void) {
	MESSSAGE_DEBUG("mecrispDGreater")
}

void mecrispDLess(void) {
	MESSSAGE_DEBUG("mecrispDLess")
}

void mecrispD0Less(void) {
	MESSSAGE_DEBUG("mecrispD0Less")
}

void mecrispD0Equal(void) {
	MESSSAGE_DEBUG("mecrispD0Equal")
}

void mecrispD0Unequal(void) {
	MESSSAGE_DEBUG("mecrispD0Unequal")
}

void mecrispDEqual(void) {
	MESSSAGE_DEBUG("mecrispDEqual")
}

void mecrispUMStar(void) {
	MESSSAGE_DEBUG("mecrispUMStar")
}

void mecrispUSlashMod(void) {
	MESSSAGE_DEBUG("mecrispUSlashMod")
}

void mecrispSlashMod(void) {
	MESSSAGE_DEBUG("mecrispSlashMod")
}

void mecrispMod(void) {
	MESSSAGE_DEBUG("mecrispMod")
}

void mecrispSlash(void) {
	MESSSAGE_DEBUG("mecrispSlash")
}

void mecrispStar(void) {
	MESSSAGE_DEBUG("mecrispStar")
}

void mecrispCompare(void) {
	MESSSAGE_DEBUG("mecrispCompare")
}

void mecrispSkipString(void) {
	MESSSAGE_DEBUG("mecrispSkipString")
}

void mecrispCType(void) {
	MESSSAGE_DEBUG("mecrispCType")
}

void mecrispType(void) {
	MESSSAGE_DEBUG("mecrispType")
}

void mecrispSQuote(void) {
	MESSSAGE_DEBUG("mecrispSQuote")
}

void mecrispCQuote(void) {
	MESSSAGE_DEBUG("mecrispCQuote")
}

void mecrispDotQuote(void) {
	MESSSAGE_DEBUG("mecrispDotQuote")
}

void mecrispParen(void) {
	MESSSAGE_DEBUG("mecrispParen")
}

void mecrispCount(void) {
	MESSSAGE_DEBUG("mecrispCount")
}

void mecrispBackslash(void) {
	MESSSAGE_DEBUG("mecrispBackslash")
}

void mecrispMin(void) {
	MESSSAGE_DEBUG("mecrispMin")
}

void mecrispMax(void) {
	MESSSAGE_DEBUG("mecrispMax")
}

void mecrispUMin(void) {
	MESSSAGE_DEBUG("mecrispUMin")
}

void mecrispUMax(void) {
	MESSSAGE_DEBUG("mecrispUMax")
}

void mecrispTwoMinus(void) {
	MESSSAGE_DEBUG("mecrispTwoMinus")
}

void mecrispOneMinus(void) {
	MESSSAGE_DEBUG("mecrispOneMinus")
}

void mecrispTwoPlus(void) {
	MESSSAGE_DEBUG("mecrispTwoPlus")
}

void mecrispOnePlus(void) {
	MESSSAGE_DEBUG("mecrispOnePlus")
}

void mecrispEven(void) {
	MESSSAGE_DEBUG("mecrispEven")
}

void mecrispTwoStar(void) {
	MESSSAGE_DEBUG("mecrispTwoStar")
}

void mecrispTwoSlash(void) {
	MESSSAGE_DEBUG("mecrispTwoSlash")
}

void mecrispAbs(void) {
	MESSSAGE_DEBUG("mecrispAbs")
}

void mecrispNegate(void) {
	MESSSAGE_DEBUG("mecrispNegate")
}

void mecrispMinus(void) {
	MESSSAGE_DEBUG("mecrispMinus")
}

void mecrispPlus(void) {
	MESSSAGE_DEBUG("mecrispPlus")
}

void mecrispBinary(void) {
	MESSSAGE_DEBUG("mecrispBinary")
}

void mecrispDecimal(void) {
	MESSSAGE_DEBUG("mecrispDecimal")
}

void mecrispHex(void) {
	MESSSAGE_DEBUG("mecrispHex")
}

void mecrispBase(void) {
	MESSSAGE_DEBUG("mecrispBase")
}

void mecrispCells(void) {
	MESSSAGE_DEBUG("mecrispCells")
}

void mecrispCellPlus(void) {
	MESSSAGE_DEBUG("mecrispCellPlus")
}

void mecrispMove(void) {
	MESSSAGE_DEBUG("mecrispMove")
}

void mecrispFill(void) {
	MESSSAGE_DEBUG("mecrispFill")
}

void mecrispCBitFetch(void) {
	MESSSAGE_DEBUG("mecrispCBitFetch")
}

void mecrispBitFetch(void) {
	MESSSAGE_DEBUG("mecrispBitFetch")
}

void mecrispCXorStore(void) {
	MESSSAGE_DEBUG("mecrispCXorStore")
}

void mecrispXorStore(void) {
	MESSSAGE_DEBUG("mecrispXorStore")
}

void mecrispCBicStore(void) {
	MESSSAGE_DEBUG("mecrispXorStore")
}

void mecrispBicStore(void) {
	MESSSAGE_DEBUG("mecrispBicStore")
}

void mecrispCBisStore(void) {
	MESSSAGE_DEBUG("mecrispCBisStore")
}

void mecrispBisStore(void) {
	MESSSAGE_DEBUG("mecrispBisStore")
}

void mecrispTwoConstant(void) {
	MESSSAGE_DEBUG("mecrispTwoConstant")
}

void mecrispConstant(void) {
	MESSSAGE_DEBUG("mecrispConstant")
}

void mecrispTwoVariable(void) {
	MESSSAGE_DEBUG("mecrispTwoVariable")
}

void mecrispVariable(void) {
	MESSSAGE_DEBUG("mecrispVariable")
}

void mecrispNVariable(void) {
	MESSSAGE_DEBUG("mecrispNVariable")
}

void mecrispBufferColon(void) {
	MESSSAGE_DEBUG("mecrispBufferColon")
}

void mecrispPlusStore(void) {
	MESSSAGE_DEBUG("mecrispPlusStore")
}

void mecrispCPlusStore(void) {
	MESSSAGE_DEBUG("mecrispCPlusStore")
}

void mecrispTwoStore(void) {
	MESSSAGE_DEBUG("mecrispTwoStore")
}

void mecrispTwoFetch(void) {
	MESSSAGE_DEBUG("mecrispTwoFetch")
}

void mecrispCStore(void) {
	MESSSAGE_DEBUG("mecrispCStore")
}

void mecrispCFetch(void) {
	MESSSAGE_DEBUG("mecrispCFetch")
}

void mecrispStore(void) {
	MESSSAGE_DEBUG("mecrispStore")
}

void mecrispFetch(void) {
	MESSSAGE_DEBUG("mecrispFetch")
}

void mecrispToIn(void) {
	MESSSAGE_DEBUG("mecrispToIn")
}

void mecrispCurrentSource(void) {
	MESSSAGE_DEBUG("mecrispCurrentSource")
}

void mecrispSource(void) {
	MESSSAGE_DEBUG("mecrispSource")
}

void mecrispSetSource(void) {
	MESSSAGE_DEBUG("mecrispSetSource")
}

void mecrispTib(void) {
	MESSSAGE_DEBUG("mecrispTib")
}

void mecrispQuery(void) {
	MESSSAGE_DEBUG("mecrispQuery")
}

void mecrispCExpect(void) {
	MESSSAGE_DEBUG("mecrispCExpect")
}

void mecrispForth(void) {
	MESSSAGE_DEBUG("mecrispForth")
}

void mecrispToken(void) {
	MESSSAGE_DEBUG("mecrispToken")
}

void mecrispParse(void) {
	MESSSAGE_DEBUG("mecrispParse")
}

void mecrispXTick(void) {
	MESSSAGE_DEBUG("mecrispXTick")
}

void mecrispTick(void) {
	MESSSAGE_DEBUG("mecrispTick")
}

void mecrispEvaluate(void) {
	MESSSAGE_DEBUG("mecrispEvaluate")
}

void mecrispInterpret(void) {
	MESSSAGE_DEBUG("mecrispInterpret")
}

void mecrispHookQuit(void) {
	MESSSAGE_DEBUG("mecrispHookQuit")
}

void mecrispQuit(void) {
	MESSSAGE_DEBUG("mecrispQuit")
}

void mecrispDictionaryStart(void) {
	MESSSAGE_DEBUG("mecrispDictionaryStart")
}

void mecrispDictionaryNext(void) {
	MESSSAGE_DEBUG("mecrispDictionaryNext")
}

void mecrispComma(void) {
	MESSSAGE_DEBUG("mecrispComma")
}

void mecrispCComma(void) {
	MESSSAGE_DEBUG("mecrispCComma")
}

void mecrispAlign(void) {
	MESSSAGE_DEBUG("mecrispAlign")
}

void mecrispAligned(void) {
	MESSSAGE_DEBUG("mecrispAligned")
}

void mecrispXChar(void) {
	MESSSAGE_DEBUG("mecrispXChar")
}

void mecrispChar(void) {
	MESSSAGE_DEBUG("mecrispChar")
}

void mecrispStringComma(void) {
	MESSSAGE_DEBUG("mecrispStringComma")
}

void mecrispLiteralComma(void) {
	MESSSAGE_DEBUG("mecrispLiteralComma")
}

void mecrispTwoLiteralComma(void) {
	MESSSAGE_DEBUG("mecrispTwoLiteralComma")
}

void mecrispInlineComma(void) {
	MESSSAGE_DEBUG("mecrispInlineComma")
}

void mecrispCallComma(void) {
	MESSSAGE_DEBUG("mecrispCallComma")
}

void mecrispRetComma(void) {
	MESSSAGE_DEBUG("mecrispRetComma")
}

void mecrispFlashVarHere(void) {
	MESSSAGE_DEBUG("mecrispFlashVarHere")
}

void mecrispHere(void) {
	MESSSAGE_DEBUG("mecrispHere")
}

void mecrispAllot(void) {
	MESSSAGE_DEBUG("mecrispAllot")
}

void mecrispYCreate(void) {
	MESSSAGE_DEBUG("mecrispYCreate")
}

void mecrispCompiletoRamQ(void) {
	MESSSAGE_DEBUG("mecrispCompiletoRamQ")
}

void mecrispCompiletoRam(void) {
	MESSSAGE_DEBUG("mecrispCompiletoRam")
}

void mecrispCompileToFlash(void) {
	MESSSAGE_DEBUG("mecrispCompileToFlash")
}

void mecrispSmudge(void) {
	MESSSAGE_DEBUG("mecrispSmudge")
}

void mecrispCompileOnly(void) {
	MESSSAGE_DEBUG("mecrispCompileOnly")
}

void mecrispInline(void) {
	MESSSAGE_DEBUG("mecrispInline")
}

void mecrispImmediate(void) {
	MESSSAGE_DEBUG("mecrispImmediate")
}

void mecrispSetflags(void) {
	MESSSAGE_DEBUG("mecrispSetflags")
}

void mecrispFind(void) {
	MESSSAGE_DEBUG("mecrispFind")
}

void mecrispExecute(void) {
	MESSSAGE_DEBUG("mecrispExecute")
}

void mecrispRecurse(void) {
	MESSSAGE_DEBUG("mecrispRecurse")
}

void mecrispPostpone(void) {
	MESSSAGE_DEBUG("mecrispPostpone")
}

void mecrispDoes(void) {
	MESSSAGE_DEBUG("mecrispDoes")
}

void mecrispBuilds(void) {
	MESSSAGE_DEBUG("mecrispBuilds")
}

void mecrispCreate(void) {
	MESSSAGE_DEBUG("mecrispCreate")
}

void mecrispState(void) {
	MESSSAGE_DEBUG("mecrispState")
}

void mecrispRightBracket(void) {
	MESSSAGE_DEBUG("mecrispRightBracket")
}

void mecrispLeftBracket(void) {
	MESSSAGE_DEBUG("mecrispLeftBracket")
}

void mecrispSemicolon(void) {
	MESSSAGE_DEBUG("mecrispSemicolon")
}

void mecrispColon(void) {
	MESSSAGE_DEBUG("mecrispColon")
}

void mecrispZeroFoldable(void) {
	MESSSAGE_DEBUG("mecrispZeroFoldable")
}

void mecrispOneFoldable(void) {
	MESSSAGE_DEBUG("mecrispOneFoldable")
}

void mecrispTwoFoldable(void) {
	MESSSAGE_DEBUG("mecrispTwoFoldable")
}

void mecrispThreeFoldable(void) {
	MESSSAGE_DEBUG("mecrispThreeFoldable")
}

void mecrispFourFoldable(void) {
	MESSSAGE_DEBUG("mecrispFourFoldable")
}

void mecrispFiveFoldable(void) {
	MESSSAGE_DEBUG("mecrispFiveFoldable")
}

void mecrispSixFoldable(void) {
	MESSSAGE_DEBUG("mecrispSixFoldable")
}

void mecrispSevenFoldable(void) {
	MESSSAGE_DEBUG("mecrispSevenFoldable")
}

void mecrispJumpComma(void) {
	MESSSAGE_DEBUG("mecrispJumpComma")
}

void mecrispThen(void) {
	MESSSAGE_DEBUG("mecrispThen")
}

void mecrispElse(void) {
	MESSSAGE_DEBUG("mecrispElse")
}

void mecrispIf(void) {
	MESSSAGE_DEBUG("mecrispIf")
}

void mecrispAhead(void) {
	MESSSAGE_DEBUG("mecrispAhead")
}

void mecrispRepeat(void) {
	MESSSAGE_DEBUG("mecrispRepeat")
}

void mecrispWhile(void) {
	MESSSAGE_DEBUG("mecrispWhile")
}

void mecrispUntil(void) {
	MESSSAGE_DEBUG("mecrispUntil")
}

void mecrispAgain(void) {
	MESSSAGE_DEBUG("mecrispAgain")
}

void mecrispBegin(void) {
	MESSSAGE_DEBUG("mecrispBegin")
}

void mecrispExit(void) {
	MESSSAGE_DEBUG("mecrispExit")
}

void mecrispK(void) {
	MESSSAGE_DEBUG("mecrispK")
}

void mecrispJ(void) {
	MESSSAGE_DEBUG("mecrispJ")
}

void mecrispI(void) {
	MESSSAGE_DEBUG("mecrispI")
}

void mecrispUnLoop(void) {
	MESSSAGE_DEBUG("mecrispUnLoop")
}

void mecrispLeave(void) {
	MESSSAGE_DEBUG("mecrispLeave")
}

void mecrispPlusLoop(void) {
	MESSSAGE_DEBUG("mecrispPlusLoop")
}

void mecrispLoop(void) {
	MESSSAGE_DEBUG("mecrispLoop")
}

void mecrispQDo(void) {
	MESSSAGE_DEBUG("mecrispQDo")
}

void mecrispDo(void) {
	MESSSAGE_DEBUG("mecrispDo")
}

void mecrispCase(void) {
	MESSSAGE_DEBUG("mecrispCase")
}

void mecrispQOf(void) {
	MESSSAGE_DEBUG("mecrispQOf")
}

void mecrispOf(void) {
	MESSSAGE_DEBUG("mecrispOf")
}

void mecrispEndOf(void) {
	MESSSAGE_DEBUG("mecrispEndOf")
}

void mecrispEndCase(void) {
	MESSSAGE_DEBUG("mecrispEndCase")
}

void mecrispULessEqual(void) {
	MESSSAGE_DEBUG("mecrispULessEqual")
}

void mecrispUGreaterEqual(void) {
	MESSSAGE_DEBUG("mecrispUGreaterEqual")
}

void mecrispUGreater(void) {
	MESSSAGE_DEBUG("mecrispUGreater")
}

void mecrispULess(void) {
	MESSSAGE_DEBUG("mecrispULess")
}

void mecrispLessEqual(void) {
	MESSSAGE_DEBUG("mecrispLessEqual")
}

void mecrispGreaterEqual(void) {
	MESSSAGE_DEBUG("mecrispGreaterEqual")
}

void mecrispGreater(void) {
	MESSSAGE_DEBUG("mecrispGreater")
}

void mecrispLess(void) {
	MESSSAGE_DEBUG("mecrispLess")
}

void mecrispZeroLess(void) {
	MESSSAGE_DEBUG("mecrispZeroLess")
}

void mecrispZeroUnequal(void) {
	MESSSAGE_DEBUG("mecrispZeroUnequal")
}

void mecrispZeroEqual(void) {
	MESSSAGE_DEBUG("mecrispZeroEqual")
}

void mecrispUnequal(void) {
	MESSSAGE_DEBUG("mecrispUnequal")
}

void mecrispEqual(void) {
	MESSSAGE_DEBUG("mecrispEqual")
}

void mecrispDInt(void) {
	MESSSAGE_DEBUG("mecrispDInt")
}

void mecrispEInt(void) {
	MESSSAGE_DEBUG("mecrispEInt")
}

void mecrispEIntQ(void) {
	MESSSAGE_DEBUG("mecrispEIntQ")
}

void mecrispNop(void) {
	MESSSAGE_DEBUG("mecrispNop")
}

void mecrispReset(void) {
	MESSSAGE_DEBUG("mecrispReset")
}

void mecrispLpm0(void) {
	MESSSAGE_DEBUG("mecrispLpm0")
}

void mecrispLpm1(void) {
	MESSSAGE_DEBUG("mecrispLpm1")
}

void mecrispLpm2(void) {
	MESSSAGE_DEBUG("mecrispLpm2")
}

void mecrispLpm3(void) {
	MESSSAGE_DEBUG("mecrispLpm3")
}

void mecrispLpm4(void) {
	MESSSAGE_DEBUG("mecrispLpm4")
}

void mecrispWakeup(void) {
	MESSSAGE_DEBUG("mecrispWakeup")
}

void mecrispHookPause(void) {
	MESSSAGE_DEBUG("mecrispHookPause")
}

void mecrispPause(void) {
	MESSSAGE_DEBUG("mecrispPause")
}

void mecrispSerialKeyQ(void) {
	MESSSAGE_DEBUG("mecrispSerialKeyQ")
}

void mecrispSerialKey(void) {
	MESSSAGE_DEBUG("mecrispSerialKey")
}

void mecrispSerialEmitQ(void) {
	MESSSAGE_DEBUG("mecrispSerialEmitQ")
}

void mecrispSerialEmit(void) {
	MESSSAGE_DEBUG("mecrispSerialEmit")
}

void mecrispAdcVcc(void) {
	MESSSAGE_DEBUG("mecrispAdcVcc")
}

void mecrispAdc1Dot5(void) {
	MESSSAGE_DEBUG("mecrispAdc1Dot5")
}

void mecrispAnalog(void) {
	MESSSAGE_DEBUG("mecrispAnalog")
}

void mecrispEraseFlashFrom(void) {
	MESSSAGE_DEBUG("mecrispEraseFlashFrom")
}

void mecrispEraseFlash(void) {
	MESSSAGE_DEBUG("mecrispEraseFlash")
}

void mecrispCFlashStore(void) {
	MESSSAGE_DEBUG("mecrispCFlashStore")
}

void mecrispFlashStore(void) {
	MESSSAGE_DEBUG("mecrispFlashStore")
}

void mecrispIrqPort1(void) {
	MESSSAGE_DEBUG("mecrispIrqPort1")
}

void mecrispIrqPort2(void) {
	MESSSAGE_DEBUG("mecrispIrqPort2")
}

void mecrispIrqAdc(void) {
	MESSSAGE_DEBUG("mecrispIrqAdc")
}

void mecrispIrqTimerA1(void) {
	MESSSAGE_DEBUG("mecrispIrqTimerA1")
}

void mecrispIrqTimerA0(void) {
	MESSSAGE_DEBUG("mecrispIrqTimerA0")
}

void mecrispIrqWatchdog(void) {
	MESSSAGE_DEBUG("mecrispIrqWatchdog")
}

void mecrispIrqTimerB1(void) {
	MESSSAGE_DEBUG("mecrispIrqTimerB1")
}

void mecrispIrqTimerB0(void) {
	MESSSAGE_DEBUG("mecrispIrqTimerB0")
}

void mecrispIrqComp(void) {
	MESSSAGE_DEBUG("mecrispIrqComp")
}

void mecrispIrqTx(void) {
	MESSSAGE_DEBUG("mecrispIrqTx")
}

void mecrispIrqRx(void) {
	MESSSAGE_DEBUG("mecrispIrqRx")
}

/* Flash Dictionary */

void mecrispList(void) {
	MESSSAGE_DEBUG("mecrispIrqRx")
}

void mecrispSearchFor(void) {
	MESSSAGE_DEBUG("mecrispSearchFor")
}

void mecrispSearchCalls(void) {
	MESSSAGE_DEBUG("mecrispSearchCalls")
}

void mecrispUses(void) {
	MESSSAGE_DEBUG("mecrispUses")
}

void mecrispNameDot(void) {
	MESSSAGE_DEBUG("mecrispNameDot")
}

void mecrispDisasmDollar(void) {
	MESSSAGE_DEBUG("mecrispDisasmDollar")
}

void mecrispDisasmFetch(void) {
	MESSSAGE_DEBUG("mecrispDisasmFetch")
}

void mecrispUDot4(void) {
	MESSSAGE_DEBUG("mecrispUDot4")
}

void mecrispUDotNs(void) {
	MESSSAGE_DEBUG("mecrispUDotNs")
}

void mecrispUDotH(void) {
	MESSSAGE_DEBUG("mecrispUDotH")
}

void mecrispRegisterDot(void) {
	MESSSAGE_DEBUG("mecrispRegisterDot")
}

void mecrispDisasmConst(void) {
	MESSSAGE_DEBUG("mecrispDisasmConst")
}

void mecrispDisasmJumps(void) {
	MESSSAGE_DEBUG("mecrispDisasmJumps")
}

void mecrispDisasmSource(void) {
	MESSSAGE_DEBUG("mecrispDisasmSource")
}

void mecrispDisasmDestination(void) {
	MESSSAGE_DEBUG("mecrispDisasmDestination")
}

void mecrispDisasmString(void) {
	MESSSAGE_DEBUG("mecrispDisasmString")
}

void mecrispDisasmSingle(void) {
	MESSSAGE_DEBUG("mecrispDisasmSingle")
}

void mecrispDisasmDouble(void) {
	MESSSAGE_DEBUG("mecrispDisasmDouble")
}

void mecrispDisasm(void) {
	MESSSAGE_DEBUG("mecrispDisasm")
}

void mecrispMemStamp(void) {
	MESSSAGE_DEBUG("mecrispMemStamp")
}

void mecrispDisasmStep(void) {
	MESSSAGE_DEBUG("mecrispDisasmStep")
}

void mecrispSeeC(void) {
	MESSSAGE_DEBUG("mecrispSeeC")
}

void mecrispSee(void) {
	MESSSAGE_DEBUG("mecrispSee")
}

void mecrispCornerStone(void) {
	MESSSAGE_DEBUG("mecrispCornerStone")
}

#endif
