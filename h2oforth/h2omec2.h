#ifndef H2OMEC2
#define H2OMEC2

/* The "Mecrisp 2.0.7 for msp430g2553" FORTH */

/* Primitives */

 /* Mecrisp Core */
void mecrispHookKeyQ(void) {
	SMSG_DEBUG("mecrispHookKeyQ")
}

void mecrispHookKey(void) {
	SMSG_DEBUG("mecrispHookKey")
}

void mecrispHookEmitQ(void) {
	SMSG_DEBUG("mecrispHookEmitQ")
}

void mecrispHookEmit(void) {
	SMSG_DEBUG("mecrispHookEmit")
}

void mecrispKeyQ(void) {
	SMSG_DEBUG("mecrispKeyQ")
}

void mecrispKey(void) {
	SMSG_DEBUG("mecrispKey")
}

void mecrispEmitQ(void) {
	SMSG_DEBUG("mecrispEmitQ")
}

void mecrispEmit(void) {
	SMSG_DEBUG("mecrispEmit")
}

void mecrispHexDot(void) {
	SMSG_DEBUG("mecrispHexDot")
}

void mecrispCr(void) {
	SMSG_DEBUG("mecrispCr")
}

void mecrispBl(void) {
	SMSG_DEBUG("mecrispBl")
}

void mecrispSpace(void) {
	SMSG_DEBUG("mecrispSpace")
}

void mecrispSpaces(void) {
	SMSG_DEBUG("mecrispSpaces")
}

void mecrispWords(void) {
	SMSG_DEBUG("mecrispWords")
}

void mecrispDotS(void) {
	SMSG_DEBUG("mecrispDotS")
}

void mecrispHDotS(void) {
	SMSG_DEBUG("mecrispHDotS")
}

void mecrispUDotS(void) {
	SMSG_DEBUG("mecrispUDotS")
}

void mecrispDotRs(void) {
	SMSG_DEBUG("mecrispDotRs")
}

void mecrispTwoNip(void) {
	SMSG_DEBUG("mecrispTwoNip")
}

void mecrispTwoDrop(void) {
	SMSG_DEBUG("mecrispTwoDrop")
}

void mecrispTwoMinusRot(void) {
	SMSG_DEBUG("mecrispTwoMinusRot")
}

void mecrispTwoRot(void) {
	SMSG_DEBUG("mecrispTwoRot")
}

void mecrispTwoTuck(void) {
	SMSG_DEBUG("mecrispTwoTuck")
}

void mecrispTwoSwap(void) {
	SMSG_DEBUG("mecrispTwoSwap")
}

void mecrispTwoOver(void) {
	SMSG_DEBUG("mecrispTwoOver")
}

void mecrispTwoDup(void) {
	SMSG_DEBUG("mecrispTwoDup")
}

void mecrispTwoToR(void) {
	SMSG_DEBUG("mecrispTwoToR")
}

void mecrispTwoRFrom(void) {
	SMSG_DEBUG("mecrispTwoRFrom")
}

void mecrispTwoRFetch(void) {
	SMSG_DEBUG("mecrispTwoRFetch")
}

void mecrispTwoRDrop(void) {
	SMSG_DEBUG("mecrispTwoRDrop")
}

void mecrispDepth(void) {
	SMSG_DEBUG("mecrispDepth")
}

void mecrispPick(void) {
	SMSG_DEBUG("mecrispPick")
}

void mecrispNip(void) {
	SMSG_DEBUG("mecrispNip")
}

void mecrispDrop(void) {
	SMSG_DEBUG("mecrispDrop")
}

void mecrispRot(void) {
	SMSG_DEBUG("mecrispRot")
}

void mecrispMinusRot(void) {
	SMSG_DEBUG("mecrispMinusRot")
}

void mecrispSwap(void) {
	SMSG_DEBUG("mecrispSwap")
}

void mecrispTuck(void) {
	SMSG_DEBUG("mecrispTuck")
}

void mecrispOver(void) {
	SMSG_DEBUG("mecrispOver")
}

void mecrispQDup(void) {
	SMSG_DEBUG("mecrispQDup")
}

void mecrispDup(void) {
	SMSG_DEBUG("mecrispDup")
}

void mecrispToR(void) {
	SMSG_DEBUG("mecrispToR")
}

void mecrispRFrom(void) {
	SMSG_DEBUG("mecrispRFrom")
}

void mecrispRFetch(void) {
	SMSG_DEBUG("mecrispRFetch")
}

void mecrispRDrop(void) {
	SMSG_DEBUG("mecrispRDrop")
}

void mecrispRDepth(void) {
	SMSG_DEBUG("mecrispRDepth")
}

void mecrispRPick(void) {
	SMSG_DEBUG("mecrispRPick")
}

void mecrispSPFetch(void) {
	SMSG_DEBUG("mecrispSPFetch")
}

void mecrispSPStore(void) {
	SMSG_DEBUG("mecrispSPStore")
}

void mecrispRPFetch(void) {
	SMSG_DEBUG("mecrispRPFetch")
}

void mecrispRPStore(void) {
	SMSG_DEBUG("mecrispRPStore")
}

void mecrispReverseHalf(void) {
	SMSG_DEBUG("mecrispReverseHalf")
}

void mecrispARShift(void) {
	SMSG_DEBUG("mecrispARShift")
}

void mecrispRShift(void) {
	SMSG_DEBUG("mecrispRShift")
}

void mecrispLShift(void) {
	SMSG_DEBUG("mecrispLShift")
}

void mecrispShR(void) {
	SMSG_DEBUG("mecrispShR")
}

void mecrispShL(void) {
	SMSG_DEBUG("mecrispShL")
}

void mecrispRoR(void) {
	SMSG_DEBUG("mecrispRoR")
}

void mecrispRoL(void) {
	SMSG_DEBUG("mecrispRoL")
}

void mecrispBic(void) {
	SMSG_DEBUG("mecrispBic")
}

void mecrispNot(void) {
	SMSG_DEBUG("mecrispNot")
}

void mecrispXor(void) {
	SMSG_DEBUG("mecrispXor")
}

void mecrispOr(void) {
	SMSG_DEBUG("mecrispOr")
}

void mecrispAnd(void) {
	SMSG_DEBUG("mecrispAnd")
}

void mecrispTrue(void) {
	SMSG_DEBUG("mecrispTrue")
}

void mecrispFalse(void) {
	SMSG_DEBUG("mecrispFalse")
}

void mecrispClz(void) {
	SMSG_DEBUG("mecrispClz")
}

void mecrispDotDigit(void) {
	SMSG_DEBUG("mecrispDotDigit")
}

void mecrispDigit(void) {
	SMSG_DEBUG("mecrispDigit")
}

void mecrispHold(void) {
	SMSG_DEBUG("mecrispHold")
}

void mecrispSign(void) {
	SMSG_DEBUG("mecrispSign")
}

void mecrispNumS(void) {
	SMSG_DEBUG("mecrispNumS")
}

void mecrispNum(void) {
	SMSG_DEBUG("mecrispNum")
}

void mecrispNumGreater(void) {
	SMSG_DEBUG("mecrispNumGreater")
}

void mecrispLessNum(void) {
	SMSG_DEBUG("mecrispLessNum")
}

void mecrispUDot(void) {
	SMSG_DEBUG("mecrispUDot")
}

void mecrispDot(void) {
	SMSG_DEBUG("mecrispDot")
}

void mecrispUDDot(void) {
	SMSG_DEBUG("mecrispUDDot")
}

void mecrispDDot(void) {
	SMSG_DEBUG("mecrispDDot")
}

void mecrispFSlash(void) {
	SMSG_DEBUG("mecrispFSlash")
}

void mecrispFStar(void) {
	SMSG_DEBUG("mecrispFStar")
}

void mecrispHoldLess(void) {
	SMSG_DEBUG("mecrispHoldLess")
}

void mecrispFNumS(void) {
	SMSG_DEBUG("mecrispFNumS")
}

void mecrispFNum(void) {
	SMSG_DEBUG("mecrispFNum")
}

void mecrispFDot(void) {
	SMSG_DEBUG("mecrispFDot")
}

void mecrisp(void) {
	SMSG_DEBUG("mecrisp")
}

void mecrispNumber(void) {
	SMSG_DEBUG("mecrispNumber")
}

void mecrispSlashStar(void) {
	SMSG_DEBUG("mecrispSlashStar")
}

void mecrispUStarSlash(void) {
	SMSG_DEBUG("mecrispUStarSlash")
}

void mecrispStarSlashMod(void) {
	SMSG_DEBUG("mecrispStarSlashMod")
}

void mecrispMSlashMod(void) {
	SMSG_DEBUG("mecrispMSlashMod")
}

void mecrispMStar(void) {
	SMSG_DEBUG("mecrispMStar")
}

void mecrispUMSlashMod(void) {
	SMSG_DEBUG("mecrispUMSlashMod")
}

void mecrispUDSlashMod(void) {
	SMSG_DEBUG("mecrispUDSlashMod")
}

void mecrispUDMStar(void) {
	SMSG_DEBUG("mecrispUDMStar")
}

void mecrispD2Slash(void) {
	SMSG_DEBUG("mecrispD2Slash")
}

void mecrispD2Star(void) {
	SMSG_DEBUG("mecrispD2Star")
}

void mecrispDShR(void) {
	SMSG_DEBUG("mecrispDShR")
}

void mecrispDShL(void) {
	SMSG_DEBUG("mecrispDShL")
}

void mecrispDAbs(void) {
	SMSG_DEBUG("mecrispDAbs")
}

void mecrispDNegate(void) {
	SMSG_DEBUG("mecrispDNegate")
}

void mecrispDMinus(void) {
	SMSG_DEBUG("mecrispDMinus")
}

void mecrispDPlus(void) {
	SMSG_DEBUG("mecrispDPlus")
}

void mecrispSToD(void) {
	SMSG_DEBUG("mecrispSToD")
}

void mecrispDuGreater(void) {
	SMSG_DEBUG("mecrispDuGreater")
}

void mecrispDuLess(void) {
	SMSG_DEBUG("mecrispDuLess")
}

void mecrispDGreater(void) {
	SMSG_DEBUG("mecrispDGreater")
}

void mecrispDLess(void) {
	SMSG_DEBUG("mecrispDLess")
}

void mecrispD0Less(void) {
	SMSG_DEBUG("mecrispD0Less")
}

void mecrispD0Equal(void) {
	SMSG_DEBUG("mecrispD0Equal")
}

void mecrispD0Unequal(void) {
	SMSG_DEBUG("mecrispD0Unequal")
}

void mecrispDEqual(void) {
	SMSG_DEBUG("mecrispDEqual")
}

void mecrispUMStar(void) {
	SMSG_DEBUG("mecrispUMStar")
}

void mecrispUSlashMod(void) {
	SMSG_DEBUG("mecrispUSlashMod")
}

void mecrispSlashMod(void) {
	SMSG_DEBUG("mecrispSlashMod")
}

void mecrispMod(void) {
	SMSG_DEBUG("mecrispMod")
}

void mecrispSlash(void) {
	SMSG_DEBUG("mecrispSlash")
}

void mecrispStar(void) {
	SMSG_DEBUG("mecrispStar")
}

void mecrispCompare(void) {
	SMSG_DEBUG("mecrispCompare")
}

void mecrispSkipString(void) {
	SMSG_DEBUG("mecrispSkipString")
}

void mecrispCType(void) {
	SMSG_DEBUG("mecrispCType")
}

void mecrispType(void) {
	SMSG_DEBUG("mecrispType")
}

void mecrispSQuote(void) {
	SMSG_DEBUG("mecrispSQuote")
}

void mecrispCQuote(void) {
	SMSG_DEBUG("mecrispCQuote")
}

void mecrispDotQuote(void) {
	SMSG_DEBUG("mecrispDotQuote")
}

void mecrispParen(void) {
	SMSG_DEBUG("mecrispParen")
}

void mecrispCount(void) {
	SMSG_DEBUG("mecrispCount")
}

void mecrispBackslash(void) {
	SMSG_DEBUG("mecrispBackslash")
}

void mecrispMin(void) {
	SMSG_DEBUG("mecrispMin")
}

void mecrispMax(void) {
	SMSG_DEBUG("mecrispMax")
}

void mecrispUMin(void) {
	SMSG_DEBUG("mecrispUMin")
}

void mecrispUMax(void) {
	SMSG_DEBUG("mecrispUMax")
}

void mecrispTwoMinus(void) {
	SMSG_DEBUG("mecrispTwoMinus")
}

void mecrispOneMinus(void) {
	SMSG_DEBUG("mecrispOneMinus")
}

void mecrispTwoPlus(void) {
	SMSG_DEBUG("mecrispTwoPlus")
}

void mecrispOnePlus(void) {
	SMSG_DEBUG("mecrispOnePlus")
}

void mecrispEven(void) {
	SMSG_DEBUG("mecrispEven")
}

void mecrispTwoStar(void) {
	SMSG_DEBUG("mecrispTwoStar")
}

void mecrispTwoSlash(void) {
	SMSG_DEBUG("mecrispTwoSlash")
}

void mecrispAbs(void) {
	SMSG_DEBUG("mecrispAbs")
}

void mecrispNegate(void) {
	SMSG_DEBUG("mecrispNegate")
}

void mecrispMinus(void) {
	SMSG_DEBUG("mecrispMinus")
}

void mecrispPlus(void) {
	SMSG_DEBUG("mecrispPlus")
}

void mecrispBinary(void) {
	SMSG_DEBUG("mecrispBinary")
}

void mecrispDecimal(void) {
	SMSG_DEBUG("mecrispDecimal")
}

void mecrispHex(void) {
	SMSG_DEBUG("mecrispHex")
}

void mecrispBase(void) {
	SMSG_DEBUG("mecrispBase")
}

void mecrispCells(void) {
	SMSG_DEBUG("mecrispCells")
}

void mecrispCellPlus(void) {
	SMSG_DEBUG("mecrispCellPlus")
}

void mecrispMove(void) {
	SMSG_DEBUG("mecrispMove")
}

void mecrispFill(void) {
	SMSG_DEBUG("mecrispFill")
}

void mecrispCBitFetch(void) {
	SMSG_DEBUG("mecrispCBitFetch")
}

void mecrispBitFetch(void) {
	SMSG_DEBUG("mecrispBitFetch")
}

void mecrispCXorStore(void) {
	SMSG_DEBUG("mecrispCXorStore")
}

void mecrispXorStore(void) {
	SMSG_DEBUG("mecrispXorStore")
}

void mecrispCBicStore(void) {
	SMSG_DEBUG("mecrispXorStore")
}

void mecrispBicStore(void) {
	SMSG_DEBUG("mecrispBicStore")
}

void mecrispCBisStore(void) {
	SMSG_DEBUG("mecrispCBisStore")
}

void mecrispBisStore(void) {
	SMSG_DEBUG("mecrispBisStore")
}

void mecrispTwoConstant(void) {
	SMSG_DEBUG("mecrispTwoConstant")
}

void mecrispConstant(void) {
	SMSG_DEBUG("mecrispConstant")
}

void mecrispTwoVariable(void) {
	SMSG_DEBUG("mecrispTwoVariable")
}

void mecrispVariable(void) {
	SMSG_DEBUG("mecrispVariable")
}

void mecrispNVariable(void) {
	SMSG_DEBUG("mecrispNVariable")
}

void mecrispBufferColon(void) {
	SMSG_DEBUG("mecrispBufferColon")
}

void mecrispPlusStore(void) {
	SMSG_DEBUG("mecrispPlusStore")
}

void mecrispCPlusStore(void) {
	SMSG_DEBUG("mecrispCPlusStore")
}

void mecrispTwoStore(void) {
	SMSG_DEBUG("mecrispTwoStore")
}

void mecrispTwoFetch(void) {
	SMSG_DEBUG("mecrispTwoFetch")
}

void mecrispCStore(void) {
	SMSG_DEBUG("mecrispCStore")
}

void mecrispCFetch(void) {
	SMSG_DEBUG("mecrispCFetch")
}

void mecrispStore(void) {
	SMSG_DEBUG("mecrispStore")
}

void mecrispFetch(void) {
	SMSG_DEBUG("mecrispFetch")
}

void mecrispToIn(void) {
	SMSG_DEBUG("mecrispToIn")
}

void mecrispCurrentSource(void) {
	SMSG_DEBUG("mecrispCurrentSource")
}

void mecrispSource(void) {
	SMSG_DEBUG("mecrispSource")
}

void mecrispSetSource(void) {
	SMSG_DEBUG("mecrispSetSource")
}

void mecrispTib(void) {
	SMSG_DEBUG("mecrispTib")
}

void mecrispQuery(void) {
	SMSG_DEBUG("mecrispQuery")
}

void mecrispCExpect(void) {
	SMSG_DEBUG("mecrispCExpect")
}

void mecrispForth(void) {
	SMSG_DEBUG("mecrispForth")
}

void mecrispToken(void) {
	SMSG_DEBUG("mecrispToken")
}

void mecrispParse(void) {
	SMSG_DEBUG("mecrispParse")
}

void mecrispXTick(void) {
	SMSG_DEBUG("mecrispXTick")
}

void mecrispTick(void) {
	SMSG_DEBUG("mecrispTick")
}

void mecrispEvaluate(void) {
	SMSG_DEBUG("mecrispEvaluate")
}

void mecrispInterpret(void) {
	SMSG_DEBUG("mecrispInterpret")
}

void mecrispHookQuit(void) {
	SMSG_DEBUG("mecrispHookQuit")
}

void mecrispQuit(void) {
	SMSG_DEBUG("mecrispQuit")
}

void mecrispDictionaryStart(void) {
	SMSG_DEBUG("mecrispDictionaryStart")
}

void mecrispDictionaryNext(void) {
	SMSG_DEBUG("mecrispDictionaryNext")
}

void mecrispComma(void) {
	SMSG_DEBUG("mecrispComma")
}

void mecrispCComma(void) {
	SMSG_DEBUG("mecrispCComma")
}

void mecrispAlign(void) {
	SMSG_DEBUG("mecrispAlign")
}

void mecrispAligned(void) {
	SMSG_DEBUG("mecrispAligned")
}

void mecrispXChar(void) {
	SMSG_DEBUG("mecrispXChar")
}

void mecrispChar(void) {
	SMSG_DEBUG("mecrispChar")
}

void mecrispStringComma(void) {
	SMSG_DEBUG("mecrispStringComma")
}

void mecrispLiteralComma(void) {
	SMSG_DEBUG("mecrispLiteralComma")
}

void mecrispTwoLiteralComma(void) {
	SMSG_DEBUG("mecrispTwoLiteralComma")
}

void mecrispInlineComma(void) {
	SMSG_DEBUG("mecrispInlineComma")
}

void mecrispCallComma(void) {
	SMSG_DEBUG("mecrispCallComma")
}

void mecrispRetComma(void) {
	SMSG_DEBUG("mecrispRetComma")
}

void mecrispFlashVarHere(void) {
	SMSG_DEBUG("mecrispFlashVarHere")
}

void mecrispHere(void) {
	SMSG_DEBUG("mecrispHere")
}

void mecrispAllot(void) {
	SMSG_DEBUG("mecrispAllot")
}

void mecrispYCreate(void) {
	SMSG_DEBUG("mecrispYCreate")
}

void mecrispCompiletoRamQ(void) {
	SMSG_DEBUG("mecrispCompiletoRamQ")
}

void mecrispCompiletoRam(void) {
	SMSG_DEBUG("mecrispCompiletoRam")
}

void mecrispCompileToFlash(void) {
	SMSG_DEBUG("mecrispCompileToFlash")
}

void mecrispSmudge(void) {
	SMSG_DEBUG("mecrispSmudge")
}

void mecrispCompileOnly(void) {
	SMSG_DEBUG("mecrispCompileOnly")
}

void mecrispInline(void) {
	SMSG_DEBUG("mecrispInline")
}

void mecrispImmediate(void) {
	SMSG_DEBUG("mecrispImmediate")
}

void mecrispSetflags(void) {
	SMSG_DEBUG("mecrispSetflags")
}

void mecrispFind(void) {
	SMSG_DEBUG("mecrispFind")
}

void mecrispExecute(void) {
	SMSG_DEBUG("mecrispExecute")
}

void mecrispRecurse(void) {
	SMSG_DEBUG("mecrispRecurse")
}

void mecrispPostpone(void) {
	SMSG_DEBUG("mecrispPostpone")
}

void mecrispDoes(void) {
	SMSG_DEBUG("mecrispDoes")
}

void mecrispBuilds(void) {
	SMSG_DEBUG("mecrispBuilds")
}

void mecrispCreate(void) {
	SMSG_DEBUG("mecrispCreate")
}

void mecrispState(void) {
	SMSG_DEBUG("mecrispState")
}

void mecrispRightBracket(void) {
	SMSG_DEBUG("mecrispRightBracket")
}

void mecrispLeftBracket(void) {
	SMSG_DEBUG("mecrispLeftBracket")
}

void mecrispSemicolon(void) {
	SMSG_DEBUG("mecrispSemicolon")
}

void mecrispColon(void) {
	SMSG_DEBUG("mecrispColon")
}

void mecrispZeroFoldable(void) {
	SMSG_DEBUG("mecrispZeroFoldable")
}

void mecrispOneFoldable(void) {
	SMSG_DEBUG("mecrispOneFoldable")
}

void mecrispTwoFoldable(void) {
	SMSG_DEBUG("mecrispTwoFoldable")
}

void mecrispThreeFoldable(void) {
	SMSG_DEBUG("mecrispThreeFoldable")
}

void mecrispFourFoldable(void) {
	SMSG_DEBUG("mecrispFourFoldable")
}

void mecrispFiveFoldable(void) {
	SMSG_DEBUG("mecrispFiveFoldable")
}

void mecrispSixFoldable(void) {
	SMSG_DEBUG("mecrispSixFoldable")
}

void mecrispSevenFoldable(void) {
	SMSG_DEBUG("mecrispSevenFoldable")
}

void mecrispJumpComma(void) {
	SMSG_DEBUG("mecrispJumpComma")
}

void mecrispThen(void) {
	SMSG_DEBUG("mecrispThen")
}

void mecrispElse(void) {
	SMSG_DEBUG("mecrispElse")
}

void mecrispIf(void) {
	SMSG_DEBUG("mecrispIf")
}

void mecrispAhead(void) {
	SMSG_DEBUG("mecrispAhead")
}

void mecrispRepeat(void) {
	SMSG_DEBUG("mecrispRepeat")
}

void mecrispWhile(void) {
	SMSG_DEBUG("mecrispWhile")
}

void mecrispUntil(void) {
	SMSG_DEBUG("mecrispUntil")
}

void mecrispAgain(void) {
	SMSG_DEBUG("mecrispAgain")
}

void mecrispBegin(void) {
	SMSG_DEBUG("mecrispBegin")
}

void mecrispExit(void) {
	SMSG_DEBUG("mecrispExit")
}

void mecrispK(void) {
	SMSG_DEBUG("mecrispK")
}

void mecrispJ(void) {
	SMSG_DEBUG("mecrispJ")
}

void mecrispI(void) {
	SMSG_DEBUG("mecrispI")
}

void mecrispUnLoop(void) {
	SMSG_DEBUG("mecrispUnLoop")
}

void mecrispLeave(void) {
	SMSG_DEBUG("mecrispLeave")
}

void mecrispPlusLoop(void) {
	SMSG_DEBUG("mecrispPlusLoop")
}

void mecrispLoop(void) {
	SMSG_DEBUG("mecrispLoop")
}

void mecrispQDo(void) {
	SMSG_DEBUG("mecrispQDo")
}

void mecrispDo(void) {
	SMSG_DEBUG("mecrispDo")
}

void mecrispCase(void) {
	SMSG_DEBUG("mecrispCase")
}

void mecrispQOf(void) {
	SMSG_DEBUG("mecrispQOf")
}

void mecrispOf(void) {
	SMSG_DEBUG("mecrispOf")
}

void mecrispEndOf(void) {
	SMSG_DEBUG("mecrispEndOf")
}

void mecrispEndCase(void) {
	SMSG_DEBUG("mecrispEndCase")
}

void mecrispULessEqual(void) {
	SMSG_DEBUG("mecrispULessEqual")
}

void mecrispUGreaterEqual(void) {
	SMSG_DEBUG("mecrispUGreaterEqual")
}

void mecrispUGreater(void) {
	SMSG_DEBUG("mecrispUGreater")
}

void mecrispULess(void) {
	SMSG_DEBUG("mecrispULess")
}

void mecrispLessEqual(void) {
	SMSG_DEBUG("mecrispLessEqual")
}

void mecrispGreaterEqual(void) {
	SMSG_DEBUG("mecrispGreaterEqual")
}

void mecrispGreater(void) {
	SMSG_DEBUG("mecrispGreater")
}

void mecrispLess(void) {
	SMSG_DEBUG("mecrispLess")
}

void mecrispZeroLess(void) {
	SMSG_DEBUG("mecrispZeroLess")
}

void mecrispZeroUnequal(void) {
	SMSG_DEBUG("mecrispZeroUnequal")
}

void mecrispZeroEqual(void) {
	SMSG_DEBUG("mecrispZeroEqual")
}

void mecrispUnequal(void) {
	SMSG_DEBUG("mecrispUnequal")
}

void mecrispEqual(void) {
	SMSG_DEBUG("mecrispEqual")
}

void mecrispDInt(void) {
	SMSG_DEBUG("mecrispDInt")
}

void mecrispEInt(void) {
	SMSG_DEBUG("mecrispEInt")
}

void mecrispEIntQ(void) {
	SMSG_DEBUG("mecrispEIntQ")
}

void mecrispNop(void) {
	SMSG_DEBUG("mecrispNop")
}

void mecrispReset(void) {
	SMSG_DEBUG("mecrispReset")
}

void mecrispLpm0(void) {
	SMSG_DEBUG("mecrispLpm0")
}

void mecrispLpm1(void) {
	SMSG_DEBUG("mecrispLpm1")
}

void mecrispLpm2(void) {
	SMSG_DEBUG("mecrispLpm2")
}

void mecrispLpm3(void) {
	SMSG_DEBUG("mecrispLpm3")
}

void mecrispLpm4(void) {
	SMSG_DEBUG("mecrispLpm4")
}

void mecrispWakeup(void) {
	SMSG_DEBUG("mecrispWakeup")
}

void mecrispHookPause(void) {
	SMSG_DEBUG("mecrispHookPause")
}

void mecrispPause(void) {
	SMSG_DEBUG("mecrispPause")
}

void mecrispSerialKeyQ(void) {
	SMSG_DEBUG("mecrispSerialKeyQ")
}

void mecrispSerialKey(void) {
	SMSG_DEBUG("mecrispSerialKey")
}

void mecrispSerialEmitQ(void) {
	SMSG_DEBUG("mecrispSerialEmitQ")
}

void mecrispSerialEmit(void) {
	SMSG_DEBUG("mecrispSerialEmit")
}

void mecrispAdcVcc(void) {
	SMSG_DEBUG("mecrispAdcVcc")
}

void mecrispAdc1Dot5(void) {
	SMSG_DEBUG("mecrispAdc1Dot5")
}

void mecrispAnalog(void) {
	SMSG_DEBUG("mecrispAnalog")
}

void mecrispEraseFlashFrom(void) {
	SMSG_DEBUG("mecrispEraseFlashFrom")
}

void mecrispEraseFlash(void) {
	SMSG_DEBUG("mecrispEraseFlash")
}

void mecrispCFlashStore(void) {
	SMSG_DEBUG("mecrispCFlashStore")
}

void mecrispFlashStore(void) {
	SMSG_DEBUG("mecrispFlashStore")
}

void mecrispIrqPort1(void) {
	SMSG_DEBUG("mecrispIrqPort1")
}

void mecrispIrqPort2(void) {
	SMSG_DEBUG("mecrispIrqPort2")
}

void mecrispIrqAdc(void) {
	SMSG_DEBUG("mecrispIrqAdc")
}

void mecrispIrqTimerA1(void) {
	SMSG_DEBUG("mecrispIrqTimerA1")
}

void mecrispIrqTimerA0(void) {
	SMSG_DEBUG("mecrispIrqTimerA0")
}

void mecrispIrqWatchdog(void) {
	SMSG_DEBUG("mecrispIrqWatchdog")
}

void mecrispIrqTimerB1(void) {
	SMSG_DEBUG("mecrispIrqTimerB1")
}

void mecrispIrqTimerB0(void) {
	SMSG_DEBUG("mecrispIrqTimerB0")
}

void mecrispIrqComp(void) {
	SMSG_DEBUG("mecrispIrqComp")
}

void mecrispIrqTx(void) {
	SMSG_DEBUG("mecrispIrqTx")
}

void mecrispIrqRx(void) {
	SMSG_DEBUG("mecrispIrqRx")
}

/* Flash Dictionary */

void mecrispList(void) {
	SMSG_DEBUG("mecrispIrqRx")
}

void mecrispSearchFor(void) {
	SMSG_DEBUG("mecrispSearchFor")
}

void mecrispSearchCalls(void) {
	SMSG_DEBUG("mecrispSearchCalls")
}

void mecrispUses(void) {
	SMSG_DEBUG("mecrispUses")
}

void mecrispNameDot(void) {
	SMSG_DEBUG("mecrispNameDot")
}

void mecrispDisasmDollar(void) {
	SMSG_DEBUG("mecrispDisasmDollar")
}

void mecrispDisasmFetch(void) {
	SMSG_DEBUG("mecrispDisasmFetch")
}

void mecrispUDot4(void) {
	SMSG_DEBUG("mecrispUDot4")
}

void mecrispUDotNs(void) {
	SMSG_DEBUG("mecrispUDotNs")
}

void mecrispUDotH(void) {
	SMSG_DEBUG("mecrispUDotH")
}

void mecrispRegisterDot(void) {
	SMSG_DEBUG("mecrispRegisterDot")
}

void mecrispDisasmConst(void) {
	SMSG_DEBUG("mecrispDisasmConst")
}

void mecrispDisasmJumps(void) {
	SMSG_DEBUG("mecrispDisasmJumps")
}

void mecrispDisasmSource(void) {
	SMSG_DEBUG("mecrispDisasmSource")
}

void mecrispDisasmDestination(void) {
	SMSG_DEBUG("mecrispDisasmDestination")
}

void mecrispDisasmString(void) {
	SMSG_DEBUG("mecrispDisasmString")
}

void mecrispDisasmSingle(void) {
	SMSG_DEBUG("mecrispDisasmSingle")
}

void mecrispDisasmDouble(void) {
	SMSG_DEBUG("mecrispDisasmDouble")
}

void mecrispDisasm(void) {
	SMSG_DEBUG("mecrispDisasm")
}

void mecrispMemStamp(void) {
	SMSG_DEBUG("mecrispMemStamp")
}

void mecrispDisasmStep(void) {
	SMSG_DEBUG("mecrispDisasmStep")
}

void mecrispSeeC(void) {
	SMSG_DEBUG("mecrispSeeC")
}

void mecrispSee(void) {
	SMSG_DEBUG("mecrispSee")
}

void mecrispCornerStone(void) {
	SMSG_DEBUG("mecrispCornerStone")
}

#endif
