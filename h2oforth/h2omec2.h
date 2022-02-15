#ifndef H2OMEC2
#define H2OMEC2

/* The "Mecrisp 2.0.7 for msp430g2553" FORTH */

/* Primitives */

 /* Mecrisp Core */
void mecrispHookKeyQ(void) {
	DEBUG_WORD("mecrispHookKeyQ")
}

void mecrispHookKey(void) {
	DEBUG_WORD("mecrispHookKey")
}

void mecrispHookEmitQ(void) {
	DEBUG_WORD("mecrispHookEmitQ")
}

void mecrispHookEmit(void) {
	DEBUG_WORD("mecrispHookEmit")
}

void mecrispKeyQ(void) {
	DEBUG_WORD("mecrispKeyQ")
}

void mecrispKey(void) {
	DEBUG_WORD("mecrispKey")
}

void mecrispEmitQ(void) {
	DEBUG_WORD("mecrispEmitQ")
}

void mecrispEmit(void) {
	DEBUG_WORD("mecrispEmit")
}

void mecrispHexDot(void) {
	DEBUG_WORD("mecrispHexDot")
}

void mecrispCr(void) {
	DEBUG_WORD("mecrispCr")
}

void mecrispBl(void) {
	DEBUG_WORD("mecrispBl")
}

void mecrispSpace(void) {
	DEBUG_WORD("mecrispSpace")
}

void mecrispSpaces(void) {
	DEBUG_WORD("mecrispSpaces")
}

void mecrispWords(void) {
	DEBUG_WORD("mecrispWords")
}

void mecrispDotS(void) {
	DEBUG_WORD("mecrispDotS")
}

void mecrispHDotS(void) {
	DEBUG_WORD("mecrispHDotS")
}

void mecrispUDotS(void) {
	DEBUG_WORD("mecrispUDotS")
}

void mecrispDotRs(void) {
	DEBUG_WORD("mecrispDotRs")
}

void mecrispTwoNip(void) {
	DEBUG_WORD("mecrispTwoNip")
}

void mecrispTwoDrop(void) {
	DEBUG_WORD("mecrispTwoDrop")
}

void mecrispTwoMinusRot(void) {
	DEBUG_WORD("mecrispTwoMinusRot")
}

void mecrispTwoRot(void) {
	DEBUG_WORD("mecrispTwoRot")
}

void mecrispTwoTuck(void) {
	DEBUG_WORD("mecrispTwoTuck")
}

void mecrispTwoSwap(void) {
	DEBUG_WORD("mecrispTwoSwap")
}

void mecrispTwoOver(void) {
	DEBUG_WORD("mecrispTwoOver")
}

void mecrispTwoDup(void) {
	DEBUG_WORD("mecrispTwoDup")
}

void mecrispTwoToR(void) {
	DEBUG_WORD("mecrispTwoToR")
}

void mecrispTwoRFrom(void) {
	DEBUG_WORD("mecrispTwoRFrom")
}

void mecrispTwoRFetch(void) {
	DEBUG_WORD("mecrispTwoRFetch")
}

void mecrispTwoRDrop(void) {
	DEBUG_WORD("mecrispTwoRDrop")
}

void mecrispDepth(void) {
	DEBUG_WORD("mecrispDepth")
}

void mecrispPick(void) {
	DEBUG_WORD("mecrispPick")
}

void mecrispNip(void) {
	DEBUG_WORD("mecrispNip")
}

void mecrispDrop(void) {
	DEBUG_WORD("mecrispDrop")
}

void mecrispRot(void) {
	DEBUG_WORD("mecrispRot")
}

void mecrispMinusRot(void) {
	DEBUG_WORD("mecrispMinusRot")
}

void mecrispSwap(void) {
	DEBUG_WORD("mecrispSwap")
}

void mecrispTuck(void) {
	DEBUG_WORD("mecrispTuck")
}

void mecrispOver(void) {
	DEBUG_WORD("mecrispOver")
}

void mecrispQDup(void) {
	DEBUG_WORD("mecrispQDup")
}

void mecrispDup(void) {
	DEBUG_WORD("mecrispDup")
}

void mecrispToR(void) {
	DEBUG_WORD("mecrispToR")
}

void mecrispRFrom(void) {
	DEBUG_WORD("mecrispRFrom")
}

void mecrispRFetch(void) {
	DEBUG_WORD("mecrispRFetch")
}

void mecrispRDrop(void) {
	DEBUG_WORD("mecrispRDrop")
}

void mecrispRDepth(void) {
	DEBUG_WORD("mecrispRDepth")
}

void mecrispRPick(void) {
	DEBUG_WORD("mecrispRPick")
}

void mecrispSPFetch(void) {
	DEBUG_WORD("mecrispSPFetch")
}

void mecrispSPStore(void) {
	DEBUG_WORD("mecrispSPStore")
}

void mecrispRPFetch(void) {
	DEBUG_WORD("mecrispRPFetch")
}

void mecrispRPStore(void) {
	DEBUG_WORD("mecrispRPStore")
}

void mecrispReverseHalf(void) {
	DEBUG_WORD("mecrispReverseHalf")
}

void mecrispARShift(void) {
	DEBUG_WORD("mecrispARShift")
}

void mecrispRShift(void) {
	DEBUG_WORD("mecrispRShift")
}

void mecrispLShift(void) {
	DEBUG_WORD("mecrispLShift")
}

void mecrispShR(void) {
	DEBUG_WORD("mecrispShR")
}

void mecrispShL(void) {
	DEBUG_WORD("mecrispShL")
}

void mecrispRoR(void) {
	DEBUG_WORD("mecrispRoR")
}

void mecrispRoL(void) {
	DEBUG_WORD("mecrispRoL")
}

void mecrispBic(void) {
	DEBUG_WORD("mecrispBic")
}

void mecrispNot(void) {
	DEBUG_WORD("mecrispNot")
}

void mecrispXor(void) {
	DEBUG_WORD("mecrispXor")
}

void mecrispOr(void) {
	DEBUG_WORD("mecrispOr")
}

void mecrispAnd(void) {
	DEBUG_WORD("mecrispAnd")
}

void mecrispTrue(void) {
	DEBUG_WORD("mecrispTrue")
}

void mecrispFalse(void) {
	DEBUG_WORD("mecrispFalse")
}

void mecrispClz(void) {
	DEBUG_WORD("mecrispClz")
}

void mecrispDotDigit(void) {
	DEBUG_WORD("mecrispDotDigit")
}

void mecrispDigit(void) {
	DEBUG_WORD("mecrispDigit")
}

void mecrispHold(void) {
	DEBUG_WORD("mecrispHold")
}

void mecrispSign(void) {
	DEBUG_WORD("mecrispSign")
}

void mecrispNumS(void) {
	DEBUG_WORD("mecrispNumS")
}

void mecrispNum(void) {
	DEBUG_WORD("mecrispNum")
}

void mecrispNumGreater(void) {
	DEBUG_WORD("mecrispNumGreater")
}

void mecrispLessNum(void) {
	DEBUG_WORD("mecrispLessNum")
}

void mecrispUDot(void) {
	DEBUG_WORD("mecrispUDot")
}

void mecrispDot(void) {
	DEBUG_WORD("mecrispDot")
}

void mecrispUDDot(void) {
	DEBUG_WORD("mecrispUDDot")
}

void mecrispDDot(void) {
	DEBUG_WORD("mecrispDDot")
}

void mecrispFSlash(void) {
	DEBUG_WORD("mecrispFSlash")
}

void mecrispFStar(void) {
	DEBUG_WORD("mecrispFStar")
}

void mecrispHoldLess(void) {
	DEBUG_WORD("mecrispHoldLess")
}

void mecrispFNumS(void) {
	DEBUG_WORD("mecrispFNumS")
}

void mecrispFNum(void) {
	DEBUG_WORD("mecrispFNum")
}

void mecrispFDot(void) {
	DEBUG_WORD("mecrispFDot")
}

void mecrisp(void) {
	DEBUG_WORD("mecrisp")
}

void mecrispNumber(void) {
	DEBUG_WORD("mecrispNumber")
}

void mecrispSlashStar(void) {
	DEBUG_WORD("mecrispSlashStar")
}

void mecrispUStarSlash(void) {
	DEBUG_WORD("mecrispUStarSlash")
}

void mecrispStarSlashMod(void) {
	DEBUG_WORD("mecrispStarSlashMod")
}

void mecrispMSlashMod(void) {
	DEBUG_WORD("mecrispMSlashMod")
}

void mecrispMStar(void) {
	DEBUG_WORD("mecrispMStar")
}

void mecrispUMSlashMod(void) {
	DEBUG_WORD("mecrispUMSlashMod")
}

void mecrispUDSlashMod(void) {
	DEBUG_WORD("mecrispUDSlashMod")
}

void mecrispUDMStar(void) {
	DEBUG_WORD("mecrispUDMStar")
}

void mecrispD2Slash(void) {
	DEBUG_WORD("mecrispD2Slash")
}

void mecrispD2Star(void) {
	DEBUG_WORD("mecrispD2Star")
}

void mecrispDShR(void) {
	DEBUG_WORD("mecrispDShR")
}

void mecrispDShL(void) {
	DEBUG_WORD("mecrispDShL")
}

void mecrispDAbs(void) {
	DEBUG_WORD("mecrispDAbs")
}

void mecrispDNegate(void) {
	DEBUG_WORD("mecrispDNegate")
}

void mecrispDMinus(void) {
	DEBUG_WORD("mecrispDMinus")
}

void mecrispDPlus(void) {
	DEBUG_WORD("mecrispDPlus")
}

void mecrispSToD(void) {
	DEBUG_WORD("mecrispSToD")
}

void mecrispDuGreater(void) {
	DEBUG_WORD("mecrispDuGreater")
}

void mecrispDuLess(void) {
	DEBUG_WORD("mecrispDuLess")
}

void mecrispDGreater(void) {
	DEBUG_WORD("mecrispDGreater")
}

void mecrispDLess(void) {
	DEBUG_WORD("mecrispDLess")
}

void mecrispD0Less(void) {
	DEBUG_WORD("mecrispD0Less")
}

void mecrispD0Equal(void) {
	DEBUG_WORD("mecrispD0Equal")
}

void mecrispD0Unequal(void) {
	DEBUG_WORD("mecrispD0Unequal")
}

void mecrispDEqual(void) {
	DEBUG_WORD("mecrispDEqual")
}

void mecrispUMStar(void) {
	DEBUG_WORD("mecrispUMStar")
}

void mecrispUSlashMod(void) {
	DEBUG_WORD("mecrispUSlashMod")
}

void mecrispSlashMod(void) {
	DEBUG_WORD("mecrispSlashMod")
}

void mecrispMod(void) {
	DEBUG_WORD("mecrispMod")
}

void mecrispSlash(void) {
	DEBUG_WORD("mecrispSlash")
}

void mecrispStar(void) {
	DEBUG_WORD("mecrispStar")
}

void mecrispCompare(void) {
	DEBUG_WORD("mecrispCompare")
}

void mecrispSkipString(void) {
	DEBUG_WORD("mecrispSkipString")
}

void mecrispCType(void) {
	DEBUG_WORD("mecrispCType")
}

void mecrispType(void) {
	DEBUG_WORD("mecrispType")
}

void mecrispSQuote(void) {
	DEBUG_WORD("mecrispSQuote")
}

void mecrispCQuote(void) {
	DEBUG_WORD("mecrispCQuote")
}

void mecrispDotQuote(void) {
	DEBUG_WORD("mecrispDotQuote")
}

void mecrispParen(void) {
	DEBUG_WORD("mecrispParen")
}

void mecrispCount(void) {
	DEBUG_WORD("mecrispCount")
}

void mecrispBackslash(void) {
	DEBUG_WORD("mecrispBackslash")
}

void mecrispMin(void) {
	DEBUG_WORD("mecrispMin")
}

void mecrispMax(void) {
	DEBUG_WORD("mecrispMax")
}

void mecrispUMin(void) {
	DEBUG_WORD("mecrispUMin")
}

void mecrispUMax(void) {
	DEBUG_WORD("mecrispUMax")
}

void mecrispTwoMinus(void) {
	DEBUG_WORD("mecrispTwoMinus")
}

void mecrispOneMinus(void) {
	DEBUG_WORD("mecrispOneMinus")
}

void mecrispTwoPlus(void) {
	DEBUG_WORD("mecrispTwoPlus")
}

void mecrispOnePlus(void) {
	DEBUG_WORD("mecrispOnePlus")
}

void mecrispEven(void) {
	DEBUG_WORD("mecrispEven")
}

void mecrispTwoStar(void) {
	DEBUG_WORD("mecrispTwoStar")
}

void mecrispTwoSlash(void) {
	DEBUG_WORD("mecrispTwoSlash")
}

void mecrispAbs(void) {
	DEBUG_WORD("mecrispAbs")
}

void mecrispNegate(void) {
	DEBUG_WORD("mecrispNegate")
}

void mecrispMinus(void) {
	DEBUG_WORD("mecrispMinus")
}

void mecrispPlus(void) {
	DEBUG_WORD("mecrispPlus")
}

void mecrispBinary(void) {
	DEBUG_WORD("mecrispBinary")
}

void mecrispDecimal(void) {
	DEBUG_WORD("mecrispDecimal")
}

void mecrispHex(void) {
	DEBUG_WORD("mecrispHex")
}

void mecrispBase(void) {
	DEBUG_WORD("mecrispBase")
}

void mecrispCells(void) {
	DEBUG_WORD("mecrispCells")
}

void mecrispCellPlus(void) {
	DEBUG_WORD("mecrispCellPlus")
}

void mecrispMove(void) {
	DEBUG_WORD("mecrispMove")
}

void mecrispFill(void) {
	DEBUG_WORD("mecrispFill")
}

void mecrispCBitFetch(void) {
	DEBUG_WORD("mecrispCBitFetch")
}

void mecrispBitFetch(void) {
	DEBUG_WORD("mecrispBitFetch")
}

void mecrispCXorStore(void) {
	DEBUG_WORD("mecrispCXorStore")
}

void mecrispXorStore(void) {
	DEBUG_WORD("mecrispXorStore")
}

void mecrispCBicStore(void) {
	DEBUG_WORD("mecrispXorStore")
}

void mecrispBicStore(void) {
	DEBUG_WORD("mecrispBicStore")
}

void mecrispCBisStore(void) {
	DEBUG_WORD("mecrispCBisStore")
}

void mecrispBisStore(void) {
	DEBUG_WORD("mecrispBisStore")
}

void mecrispTwoConstant(void) {
	DEBUG_WORD("mecrispTwoConstant")
}

void mecrispConstant(void) {
	DEBUG_WORD("mecrispConstant")
}

void mecrispTwoVariable(void) {
	DEBUG_WORD("mecrispTwoVariable")
}

void mecrispVariable(void) {
	DEBUG_WORD("mecrispVariable")
}

void mecrispNVariable(void) {
	DEBUG_WORD("mecrispNVariable")
}

void mecrispBufferColon(void) {
	DEBUG_WORD("mecrispBufferColon")
}

void mecrispPlusStore(void) {
	DEBUG_WORD("mecrispPlusStore")
}

void mecrispCPlusStore(void) {
	DEBUG_WORD("mecrispCPlusStore")
}

void mecrispTwoStore(void) {
	DEBUG_WORD("mecrispTwoStore")
}

void mecrispTwoFetch(void) {
	DEBUG_WORD("mecrispTwoFetch")
}

void mecrispCStore(void) {
	DEBUG_WORD("mecrispCStore")
}

void mecrispCFetch(void) {
	DEBUG_WORD("mecrispCFetch")
}

void mecrispStore(void) {
	DEBUG_WORD("mecrispStore")
}

void mecrispFetch(void) {
	DEBUG_WORD("mecrispFetch")
}

void mecrispToIn(void) {
	DEBUG_WORD("mecrispToIn")
}

void mecrispCurrentSource(void) {
	DEBUG_WORD("mecrispCurrentSource")
}

void mecrispSource(void) {
	DEBUG_WORD("mecrispSource")
}

void mecrispSetSource(void) {
	DEBUG_WORD("mecrispSetSource")
}

void mecrispTib(void) {
	DEBUG_WORD("mecrispTib")
}

void mecrispQuery(void) {
	DEBUG_WORD("mecrispQuery")
}

void mecrispCExpect(void) {
	DEBUG_WORD("mecrispCExpect")
}

void mecrispForth(void) {
	DEBUG_WORD("mecrispForth")
}

void mecrispToken(void) {
	DEBUG_WORD("mecrispToken")
}

void mecrispParse(void) {
	DEBUG_WORD("mecrispParse")
}

void mecrispXTick(void) {
	DEBUG_WORD("mecrispXTick")
}

void mecrispTick(void) {
	DEBUG_WORD("mecrispTick")
}

void mecrispEvaluate(void) {
	DEBUG_WORD("mecrispEvaluate")
}

void mecrispInterpret(void) {
	DEBUG_WORD("mecrispInterpret")
}

void mecrispHookQuit(void) {
	DEBUG_WORD("mecrispHookQuit")
}

void mecrispQuit(void) {
	DEBUG_WORD("mecrispQuit")
}

void mecrispDictionaryStart(void) {
	DEBUG_WORD("mecrispDictionaryStart")
}

void mecrispDictionaryNext(void) {
	DEBUG_WORD("mecrispDictionaryNext")
}

void mecrispComma(void) {
	DEBUG_WORD("mecrispComma")
}

void mecrispCComma(void) {
	DEBUG_WORD("mecrispCComma")
}

void mecrispAlign(void) {
	DEBUG_WORD("mecrispAlign")
}

void mecrispAligned(void) {
	DEBUG_WORD("mecrispAligned")
}

void mecrispXChar(void) {
	DEBUG_WORD("mecrispXChar")
}

void mecrispChar(void) {
	DEBUG_WORD("mecrispChar")
}

void mecrispStringComma(void) {
	DEBUG_WORD("mecrispStringComma")
}

void mecrispLiteralComma(void) {
	DEBUG_WORD("mecrispLiteralComma")
}

void mecrispTwoLiteralComma(void) {
	DEBUG_WORD("mecrispTwoLiteralComma")
}

void mecrispInlineComma(void) {
	DEBUG_WORD("mecrispInlineComma")
}

void mecrispCallComma(void) {
	DEBUG_WORD("mecrispCallComma")
}

void mecrispRetComma(void) {
	DEBUG_WORD("mecrispRetComma")
}

void mecrispFlashVarHere(void) {
	DEBUG_WORD("mecrispFlashVarHere")
}

void mecrispHere(void) {
	DEBUG_WORD("mecrispHere")
}

void mecrispAllot(void) {
	DEBUG_WORD("mecrispAllot")
}

void mecrispYCreate(void) {
	DEBUG_WORD("mecrispYCreate")
}

void mecrispCompiletoRamQ(void) {
	DEBUG_WORD("mecrispCompiletoRamQ")
}

void mecrispCompiletoRam(void) {
	DEBUG_WORD("mecrispCompiletoRam")
}

void mecrispCompileToFlash(void) {
	DEBUG_WORD("mecrispCompileToFlash")
}

void mecrispSmudge(void) {
	DEBUG_WORD("mecrispSmudge")
}

void mecrispCompileOnly(void) {
	DEBUG_WORD("mecrispCompileOnly")
}

void mecrispInline(void) {
	DEBUG_WORD("mecrispInline")
}

void mecrispImmediate(void) {
	DEBUG_WORD("mecrispImmediate")
}

void mecrispSetflags(void) {
	DEBUG_WORD("mecrispSetflags")
}

void mecrispFind(void) {
	DEBUG_WORD("mecrispFind")
}

void mecrispExecute(void) {
	DEBUG_WORD("mecrispExecute")
}

void mecrispRecurse(void) {
	DEBUG_WORD("mecrispRecurse")
}

void mecrispPostpone(void) {
	DEBUG_WORD("mecrispPostpone")
}

void mecrispDoes(void) {
	DEBUG_WORD("mecrispDoes")
}

void mecrispBuilds(void) {
	DEBUG_WORD("mecrispBuilds")
}

void mecrispCreate(void) {
	DEBUG_WORD("mecrispCreate")
}

void mecrispState(void) {
	DEBUG_WORD("mecrispState")
}

void mecrispRightBracket(void) {
	DEBUG_WORD("mecrispRightBracket")
}

void mecrispLeftBracket(void) {
	DEBUG_WORD("mecrispLeftBracket")
}

void mecrispSemicolon(void) {
	DEBUG_WORD("mecrispSemicolon")
}

void mecrispColon(void) {
	DEBUG_WORD("mecrispColon")
}

void mecrispZeroFoldable(void) {
	DEBUG_WORD("mecrispZeroFoldable")
}

void mecrispOneFoldable(void) {
	DEBUG_WORD("mecrispOneFoldable")
}

void mecrispTwoFoldable(void) {
	DEBUG_WORD("mecrispTwoFoldable")
}

void mecrispThreeFoldable(void) {
	DEBUG_WORD("mecrispThreeFoldable")
}

void mecrispFourFoldable(void) {
	DEBUG_WORD("mecrispFourFoldable")
}

void mecrispFiveFoldable(void) {
	DEBUG_WORD("mecrispFiveFoldable")
}

void mecrispSixFoldable(void) {
	DEBUG_WORD("mecrispSixFoldable")
}

void mecrispSevenFoldable(void) {
	DEBUG_WORD("mecrispSevenFoldable")
}

void mecrispJumpComma(void) {
	DEBUG_WORD("mecrispJumpComma")
}

void mecrispThen(void) {
	DEBUG_WORD("mecrispThen")
}

void mecrispElse(void) {
	DEBUG_WORD("mecrispElse")
}

void mecrispIf(void) {
	DEBUG_WORD("mecrispIf")
}

void mecrispAhead(void) {
	DEBUG_WORD("mecrispAhead")
}

void mecrispRepeat(void) {
	DEBUG_WORD("mecrispRepeat")
}

void mecrispWhile(void) {
	DEBUG_WORD("mecrispWhile")
}

void mecrispUntil(void) {
	DEBUG_WORD("mecrispUntil")
}

void mecrispAgain(void) {
	DEBUG_WORD("mecrispAgain")
}

void mecrispBegin(void) {
	DEBUG_WORD("mecrispBegin")
}

void mecrispExit(void) {
	DEBUG_WORD("mecrispExit")
}

void mecrispK(void) {
	DEBUG_WORD("mecrispK")
}

void mecrispJ(void) {
	DEBUG_WORD("mecrispJ")
}

void mecrispI(void) {
	DEBUG_WORD("mecrispI")
}

void mecrispUnLoop(void) {
	DEBUG_WORD("mecrispUnLoop")
}

void mecrispLeave(void) {
	DEBUG_WORD("mecrispLeave")
}

void mecrispPlusLoop(void) {
	DEBUG_WORD("mecrispPlusLoop")
}

void mecrispLoop(void) {
	DEBUG_WORD("mecrispLoop")
}

void mecrispQDo(void) {
	DEBUG_WORD("mecrispQDo")
}

void mecrispDo(void) {
	DEBUG_WORD("mecrispDo")
}

void mecrispCase(void) {
	DEBUG_WORD("mecrispCase")
}

void mecrispQOf(void) {
	DEBUG_WORD("mecrispQOf")
}

void mecrispOf(void) {
	DEBUG_WORD("mecrispOf")
}

void mecrispEndOf(void) {
	DEBUG_WORD("mecrispEndOf")
}

void mecrispEndCase(void) {
	DEBUG_WORD("mecrispEndCase")
}

void mecrispULessEqual(void) {
	DEBUG_WORD("mecrispULessEqual")
}

void mecrispUGreaterEqual(void) {
	DEBUG_WORD("mecrispUGreaterEqual")
}

void mecrispUGreater(void) {
	DEBUG_WORD("mecrispUGreater")
}

void mecrispULess(void) {
	DEBUG_WORD("mecrispULess")
}

void mecrispLessEqual(void) {
	DEBUG_WORD("mecrispLessEqual")
}

void mecrispGreaterEqual(void) {
	DEBUG_WORD("mecrispGreaterEqual")
}

void mecrispGreater(void) {
	DEBUG_WORD("mecrispGreater")
}

void mecrispLess(void) {
	DEBUG_WORD("mecrispLess")
}

void mecrispZeroLess(void) {
	DEBUG_WORD("mecrispZeroLess")
}

void mecrispZeroUnequal(void) {
	DEBUG_WORD("mecrispZeroUnequal")
}

void mecrispZeroEqual(void) {
	DEBUG_WORD("mecrispZeroEqual")
}

void mecrispUnequal(void) {
	DEBUG_WORD("mecrispUnequal")
}

void mecrispEqual(void) {
	DEBUG_WORD("mecrispEqual")
}

void mecrispDInt(void) {
	DEBUG_WORD("mecrispDInt")
}

void mecrispEInt(void) {
	DEBUG_WORD("mecrispEInt")
}

void mecrispEIntQ(void) {
	DEBUG_WORD("mecrispEIntQ")
}

void mecrispNop(void) {
	DEBUG_WORD("mecrispNop")
}

void mecrispReset(void) {
	DEBUG_WORD("mecrispReset")
}

void mecrispLpm0(void) {
	DEBUG_WORD("mecrispLpm0")
}

void mecrispLpm1(void) {
	DEBUG_WORD("mecrispLpm1")
}

void mecrispLpm2(void) {
	DEBUG_WORD("mecrispLpm2")
}

void mecrispLpm3(void) {
	DEBUG_WORD("mecrispLpm3")
}

void mecrispLpm4(void) {
	DEBUG_WORD("mecrispLpm4")
}

void mecrispWakeup(void) {
	DEBUG_WORD("mecrispWakeup")
}

void mecrispHookPause(void) {
	DEBUG_WORD("mecrispHookPause")
}

void mecrispPause(void) {
	DEBUG_WORD("mecrispPause")
}

void mecrispSerialKeyQ(void) {
	DEBUG_WORD("mecrispSerialKeyQ")
}

void mecrispSerialKey(void) {
	DEBUG_WORD("mecrispSerialKey")
}

void mecrispSerialEmitQ(void) {
	DEBUG_WORD("mecrispSerialEmitQ")
}

void mecrispSerialEmit(void) {
	DEBUG_WORD("mecrispSerialEmit")
}

void mecrispAdcVcc(void) {
	DEBUG_WORD("mecrispAdcVcc")
}

void mecrispAdc1Dot5(void) {
	DEBUG_WORD("mecrispAdc1Dot5")
}

void mecrispAnalog(void) {
	DEBUG_WORD("mecrispAnalog")
}

void mecrispEraseFlashFrom(void) {
	DEBUG_WORD("mecrispEraseFlashFrom")
}

void mecrispEraseFlash(void) {
	DEBUG_WORD("mecrispEraseFlash")
}

void mecrispCFlashStore(void) {
	DEBUG_WORD("mecrispCFlashStore")
}

void mecrispFlashStore(void) {
	DEBUG_WORD("mecrispFlashStore")
}

void mecrispIrqPort1(void) {
	DEBUG_WORD("mecrispIrqPort1")
}

void mecrispIrqPort2(void) {
	DEBUG_WORD("mecrispIrqPort2")
}

void mecrispIrqAdc(void) {
	DEBUG_WORD("mecrispIrqAdc")
}

void mecrispIrqTimerA1(void) {
	DEBUG_WORD("mecrispIrqTimerA1")
}

void mecrispIrqTimerA0(void) {
	DEBUG_WORD("mecrispIrqTimerA0")
}

void mecrispIrqWatchdog(void) {
	DEBUG_WORD("mecrispIrqWatchdog")
}

void mecrispIrqTimerB1(void) {
	DEBUG_WORD("mecrispIrqTimerB1")
}

void mecrispIrqTimerB0(void) {
	DEBUG_WORD("mecrispIrqTimerB0")
}

void mecrispIrqComp(void) {
	DEBUG_WORD("mecrispIrqComp")
}

void mecrispIrqTx(void) {
	DEBUG_WORD("mecrispIrqTx")
}

void mecrispIrqRx(void) {
	DEBUG_WORD("mecrispIrqRx")
}

/* Flash Dictionary */

void mecrispList(void) {
	DEBUG_WORD("mecrispIrqRx")
}

void mecrispSearchFor(void) {
	DEBUG_WORD("mecrispSearchFor")
}

void mecrispSearchCalls(void) {
	DEBUG_WORD("mecrispSearchCalls")
}

void mecrispUses(void) {
	DEBUG_WORD("mecrispUses")
}

void mecrispNameDot(void) {
	DEBUG_WORD("mecrispNameDot")
}

void mecrispDisasmDollar(void) {
	DEBUG_WORD("mecrispDisasmDollar")
}

void mecrispDisasmFetch(void) {
	DEBUG_WORD("mecrispDisasmFetch")
}

void mecrispUDot4(void) {
	DEBUG_WORD("mecrispUDot4")
}

void mecrispUDotNs(void) {
	DEBUG_WORD("mecrispUDotNs")
}

void mecrispUDotH(void) {
	DEBUG_WORD("mecrispUDotH")
}

void mecrispRegisterDot(void) {
	DEBUG_WORD("mecrispRegisterDot")
}

void mecrispDisasmConst(void) {
	DEBUG_WORD("mecrispDisasmConst")
}

void mecrispDisasmJumps(void) {
	DEBUG_WORD("mecrispDisasmJumps")
}

void mecrispDisasmSource(void) {
	DEBUG_WORD("mecrispDisasmSource")
}

void mecrispDisasmDestination(void) {
	DEBUG_WORD("mecrispDisasmDestination")
}

void mecrispDisasmString(void) {
	DEBUG_WORD("mecrispDisasmString")
}

void mecrispDisasmSingle(void) {
	DEBUG_WORD("mecrispDisasmSingle")
}

void mecrispDisasmDouble(void) {
	DEBUG_WORD("mecrispDisasmDouble")
}

void mecrispDisasm(void) {
	DEBUG_WORD("mecrispDisasm")
}

void mecrispMemStamp(void) {
	DEBUG_WORD("mecrispMemStamp")
}

void mecrispDisasmStep(void) {
	DEBUG_WORD("mecrispDisasmStep")
}

void mecrispSeeC(void) {
	DEBUG_WORD("mecrispSeeC")
}

void mecrispSee(void) {
	DEBUG_WORD("mecrispSee")
}

void mecrispCornerStone(void) {
	DEBUG_WORD("mecrispCornerStone")
}

#endif
