#ifndef H2OCAM2
#define H2OCAM2

/* The "CamelForth" FORTH */

/* Primitives */

void camelExit(void) {
	DEBUG_WORD("camelExit")
}

void camelExecute(void) {
	DEBUG_WORD("camelExecute")
}

void camelLit(void) {
	DEBUG_WORD("camelLit")
}

void camelDup(void) {
	DEBUG_WORD("camelDup")
}

void camelQDup(void) {
	DEBUG_WORD("camelQDup")
}

void camelDrop(void) {
	DEBUG_WORD("camelDrop")
}

void camelSwap(void) {
	DEBUG_WORD("camelSwap")
}

void camelOver(void) {
	DEBUG_WORD("camelOver")
}

void camelRot(void) {
	DEBUG_WORD("camelRot")
}

void camelNip(void) {
	DEBUG_WORD("camelNip")
}

void camelTuck(void) {
	DEBUG_WORD("camelTuck")
}

void camelToR(void) {
	DEBUG_WORD("camelToR")
}

void camelRFrom(void) {
	DEBUG_WORD("camelRFrom")
}

void camelRFetch(void) {
	DEBUG_WORD("camelRFetch")
}

void camelSPFetch(void) {
	DEBUG_WORD("camelSPFetch")
}

void camelSPStore(void) {
	DEBUG_WORD("camelSPStore")
}

void camelRPfetch(void) {
	DEBUG_WORD("camelRPfetch")
}

void camelRPStore(void) {
	DEBUG_WORD("camelRPStore")
}

void camelFetch(void) {
	DEBUG_WORD("camelFetch")
}

void camelStore(void) {
	DEBUG_WORD("camelStore")
}

void camelCFetch(void) {
	DEBUG_WORD("camelCFetch")
}

void camelCStore(void) {
	DEBUG_WORD("camelCStore")
}

void camelIFetch(void) {
	DEBUG_WORD("camelIFetch")
}

void camelIStore(void) {
	DEBUG_WORD("camelIStore")
}

void camelICFetch(void) {
	DEBUG_WORD("camelICFetch")
}

void camelICStore(void) {
	DEBUG_WORD("camelICStore")
}

void camelHFetch(void) {
	DEBUG_WORD("camelHFetch")
}

void camelHStore(void) {
	DEBUG_WORD("camelHStore")
}

void camelHCFetch(void) {
	DEBUG_WORD("camelHCFetch")
}

void camelHCStore(void) {
	DEBUG_WORD("camelHCStore")
}

void camelPlus(void) {
	DEBUG_WORD("camelPlus")
}

void camelPlusStore(void) {
	DEBUG_WORD("camelPlusStore")
}

void camelMPlus(void) {
	DEBUG_WORD("camelMPlus")
}

void camelMinus(void) {
	DEBUG_WORD("camelMinus")
}

void camelMult(void) {
	DEBUG_WORD("camelMult")
}

void camelDiv(void) {
	DEBUG_WORD("camelDiv")
}

void camelAnd(void) {
	DEBUG_WORD("camelAnd")
}

void camelOr(void) {
	DEBUG_WORD("camelOr")
}

void camelXor(void) {
	DEBUG_WORD("camelXor")
}

void camelInvert(void) {
	DEBUG_WORD("camelInvert")
}

void camelNegate(void) {
	DEBUG_WORD("camelNegate")
}

void camelOnePlus(void) {
	DEBUG_WORD("camelOnePlus")
}

void camelOneMinus(void) {
	DEBUG_WORD("camelOneMinus")
}

void camelSwapBytes(void) {
	DEBUG_WORD("camelSwapBytes")
}

void camelTwoStar(void) {
	DEBUG_WORD("camelTwoStar")
}

void camelTwoSlash(void) {
	DEBUG_WORD("camelTwoSlash")
}

void camelLShift(void) {
	DEBUG_WORD("camelLShift")
}

void camelRShift(void) {
	DEBUG_WORD("camelRShift")
}

void camelZeroEqual(void) {
	DEBUG_WORD("camelZeroEqual")
}

void camelZeroLess(void) {
	DEBUG_WORD("camelZeroLess")
}

void camelEqual(void) {
	DEBUG_WORD("camelEqual")
}

void camelNotEqual(void) {
	DEBUG_WORD("camelNotEqual")
}

void camelLess(void) {
	DEBUG_WORD("camelLess")
}

void camelGreater(void) {
	DEBUG_WORD("camelGreater")
}

void camelULess(void) {
	DEBUG_WORD("camelULess")
}

void camelUGreater(void) {
	DEBUG_WORD("camelUGreater")
}

void camelUBranch(void) {
	DEBUG_WORD("camelUBranch")
}

void camelBranch(void) {
	DEBUG_WORD("camelBranch")
}

void camelQBranch(void) {
	DEBUG_WORD("camelQBranch")
}

void camelZPlusLoop(void) {
	DEBUG_WORD("camelZPlusLoop")
}

void camelZLoop(void) {
	DEBUG_WORD("camelZLoop")
}

void camelZdo(void) {
	DEBUG_WORD("camelZdo")
}

void camelI(void) {
	DEBUG_WORD("camelI")
}

void camelJ(void) {
	DEBUG_WORD("camelJ")
}

void camelUnLoop(void) {
	DEBUG_WORD("camelUnLoop")
}

void camelUmStar(void) {
	DEBUG_WORD("camelUmStar")
}

void camelUmSlashMod(void) {
	DEBUG_WORD("camelUmSlashMod")
}

void camelFill(void) {
	DEBUG_WORD("camelFill")
}

void camelCMove(void) {
	DEBUG_WORD("camelCMove")
}

void camelCMoveUp(void) {
	DEBUG_WORD("camelCMoveUp")
}

void camelIToD(void) {
	DEBUG_WORD("camelIToD")
}

void camelSkip(void) {
	DEBUG_WORD("camelSkip")
}

void camelScan(void) {
	DEBUG_WORD("camelScan")
}

void camelSEqual(void) {
	DEBUG_WORD("camelSEqual")
}

void camelNEqual(void) {
	DEBUG_WORD("camelNEqual")
}

void camelKey(void) {
	DEBUG_WORD("camelKey")
}

void camelEmit(void) {
	DEBUG_WORD("camelEmit")
}

void camelKeyQ(void) {
	DEBUG_WORD("camelKeyQ")
}

void camelDotHH(void) {
	DEBUG_WORD("camelDotHH")
}

void camelDotHHH(void) {
	DEBUG_WORD("camelDotHHH")
}

void camelDotS(void) {
	DEBUG_WORD("camelDotS")
}

void camelDump(void) {
	DEBUG_WORD("camelDump")
}

void camelBye(void) {
	DEBUG_WORD("camelBye")
}

/* High level words */

void camelU0(void) {
	DEBUG_WORD("camelU0")
}

void camelToIN(void) {
	DEBUG_WORD("camelToIN")
}

void camelBase(void) {
	DEBUG_WORD("camelBase")
}

void camelState(void) {
	DEBUG_WORD("camelState")
}

void camelDp(void) {
	DEBUG_WORD("camelDp")
}

void camelTickSource(void) {
	DEBUG_WORD("camelTickSource")
}

void camelLatest(void) {
	DEBUG_WORD("camelLatest")
}

void camelHp(void) {
	DEBUG_WORD("camelHp")
}

void camelLp(void) {
	DEBUG_WORD("camelLp")
}

void camelIdp(void) {
	DEBUG_WORD("camelIdp")
}

void camelNewest(void) {
	DEBUG_WORD("camelNewest")
}

void camelUInit(void) {
	DEBUG_WORD("camelUInit")
}

void camelNInit(void) {
	DEBUG_WORD("camelNInit")
}

void camelPad(void) {
	DEBUG_WORD("camelPad")
}

void camelL0(void) {
	DEBUG_WORD("camelL0")
}

void camelS0(void) {
	DEBUG_WORD("camelS0")
}

void camelR0(void) {
	DEBUG_WORD("camelR0")
}

void camelTib(void) {
	DEBUG_WORD("camelTib")
}

void camelTibSize(void) {
	DEBUG_WORD("camelTibSize")
}

void camelZero(void) {
	DEBUG_WORD("camelZero")
}

void camelOne(void) {
	DEBUG_WORD("camelOne")
}

void camelTwo(void) {
	DEBUG_WORD("camelTwo")
}

void camelThree(void) {
	DEBUG_WORD("camelThree")
}

void camelMinusOne(void) {
	DEBUG_WORD("camelMinusOne")
}

void camelCell(void) {
	DEBUG_WORD("camelCell")
}

void camelHere(void) {
	DEBUG_WORD("camelHere")
}

void camelAllot(void) {
	DEBUG_WORD("camelAllot")
}

void camelComma(void) {
	DEBUG_WORD("camelComma")
}

void camelCComma(void) {
	DEBUG_WORD("camelCComma")
}

void camelAligned(void) {
	DEBUG_WORD("camelAligned")
}

void camelAlign(void) {
	DEBUG_WORD("camelAlign")
}

void camelCellPlus(void) {
	DEBUG_WORD("camelCellPlus")
}

void camelCharPlus(void) {
	DEBUG_WORD("camelCharPlus")
}

void camelToBody(void) {
	DEBUG_WORD("camelToBody")
}

void camelCommaXt(void) {
	DEBUG_WORD("camelCommaXt")
}

void camelStoreCF(void) {
	DEBUG_WORD("camelStoreCF")
}

void camelCommaCF(void) {
	DEBUG_WORD("camelCommaCF")
}

void camelStoreColon(void) {
	DEBUG_WORD("camelStoreColon")
}

void camelCommaExit(void) {
	DEBUG_WORD("camelCommaExit")
}

void camelCommaBranch(void) {
	DEBUG_WORD("camelCommaBranch")
}

void camelCommaDest(void) {
	DEBUG_WORD("camelCommaDest")
}

void camelStoreDest(void) {
	DEBUG_WORD("camelStoreDest")
}

void camelCommaNone(void) {
	DEBUG_WORD("camelCommaNone")
}

void camelTwoFetch(void) {
	DEBUG_WORD("camelTwoFetch")
}

void camelTwoStore(void) {
	DEBUG_WORD("camelTwoStore")
}

void camelTwoDrop(void) {
	DEBUG_WORD("camelTwoDrop")
}

void camelTwoDup(void) {
	DEBUG_WORD("camelTwoDup")
}

void camelTwoSwap(void) {
	DEBUG_WORD("camelTwoSwap")
}

void camelTwoOver(void) {
	DEBUG_WORD("camelTwoOver")
}

void camelSToD(void) {
	DEBUG_WORD("camelSToD")
}

void camelAbs(void) {
	DEBUG_WORD("camelAbs")
}

void camelDNegate(void) {
	DEBUG_WORD("camelDNegate")
}

void camelQDNegate(void) {
	DEBUG_WORD("camelQDNegate")
}

void camelDAbs(void) {
	DEBUG_WORD("camelDAbs")
}

void camelMStar(void) {
	DEBUG_WORD("camelMStar")
}

void camelSMSlashREM(void) {
	DEBUG_WORD("camelSMSlashREM")
}

void camelFMSlashMod(void) {
	DEBUG_WORD("camelFMSlashMod")
}

void camelSlashMod(void) {
	DEBUG_WORD("camelSlashMod")
}

void camelMod(void) {
	DEBUG_WORD("camelMod")
}

void camelStarSlashMod(void) {
	DEBUG_WORD("camelStarSlashMod")
}

void camelStarSlash(void) {
	DEBUG_WORD("camelStarSlash")
}

void camelMax(void) {
	DEBUG_WORD("camelMax")
}

void camelMin(void) {
	DEBUG_WORD("camelMin")
}

void camelUMax(void) {
	DEBUG_WORD("camelUMax")
}

void camelUMin(void) {
	DEBUG_WORD("camelUMin")
}

void camelCells(void) {
	DEBUG_WORD("camelCells")
}

void camelCount(void) {
	DEBUG_WORD("camelCount")
}

void camelCR(void) {
	DEBUG_WORD("camelCR")
}

void camelSpace(void) {
	DEBUG_WORD("camelSpace")
}

void camelSpaces(void) {
	DEBUG_WORD("camelSpaces")
}

void camelAccept(void) {
	DEBUG_WORD("camelAccept")
}

void camelType(void) {
	DEBUG_WORD("camelType")
}

void camelUDSlashMod(void) {
	DEBUG_WORD("camelUDSlashMod")
}

void camelUDStar(void) {
	DEBUG_WORD("camelUDStar")
}

void camelHold(void) {
	DEBUG_WORD("camelHold")
}

void camelLessNum(void) {
	DEBUG_WORD("camelLessNum")
}

void camelToDigit(void) {
	DEBUG_WORD("camelToDigit")
}

void camelNum(void) {
	DEBUG_WORD("camelNum")
}

void camelNums(void) {
	DEBUG_WORD("camelNums")
}

void camelNumGreater(void) {
	DEBUG_WORD("camelNumGreater")
}

void camelSign(void) {
	DEBUG_WORD("camelSign")
}

void camelUDot(void) {
	DEBUG_WORD("camelUDot")
}

void camelDot(void) {
	DEBUG_WORD("camelDot")
}

void camelDecimal(void) {
	DEBUG_WORD("camelDecimal")
}

void camelHex(void) {
	DEBUG_WORD("camelHex")
}

void camelSource(void) {
	DEBUG_WORD("camelSource")
}

void camelSlashString(void) {
	DEBUG_WORD("camelSlashString")
}

void camelToCounted(void) {
	DEBUG_WORD("camelToCounted")
}

void camelAdrToIN(void) {
	DEBUG_WORD("camelAdrToIN")
}

void camelParse(void) {
	DEBUG_WORD("camelParse")
}

void camelWord(void) {
	DEBUG_WORD("camelWord")
}

void camelZSQuote(void) {
	DEBUG_WORD("camelZSQuote")
}

void camelSQuote(void) {
	DEBUG_WORD("camelSQuote")
}

void camelDotQuote(void) {
	DEBUG_WORD("camelDotQuote")
}

void camelNFAToLFA(void) {
	DEBUG_WORD("camelNFAToLFA")
}

void camelNFAToCFA(void) {
	DEBUG_WORD("camelNFAToCFA")
}

void camelImmedQ(void) {
	DEBUG_WORD("camelImmedQ")
}

void camelFind(void) {
	DEBUG_WORD("camelFind")
}

void camelLiteral(void) {
	DEBUG_WORD("camelLiteral")
}

void camelDigitQ(void) {
	DEBUG_WORD("camelDigitQ")
}

void camelQSign(void) {
	DEBUG_WORD("camelQSign")
}

void camelToNumber(void) {
	DEBUG_WORD("camelToNumber")
}

void camelQNumber(void) {
	DEBUG_WORD("camelQNumber")
}

void camelInterpret(void) {
	DEBUG_WORD("camelInterpret")
}

void camelEvaluate(void) {
	DEBUG_WORD("camelEvaluate")
}

void camelQuit(void) {
	DEBUG_WORD("camelQuit")
}

void camelAbort(void) {
	DEBUG_WORD("camelAbort")
}

void camelQAbort(void) {
	DEBUG_WORD("camelQAbort")
}

void camelAbortQuote(void) {
	DEBUG_WORD("camelAbortQuote")
}

void camelTick(void) {
	DEBUG_WORD("camelTick")
}

void camelChar(void) {
	DEBUG_WORD("camelChar")
}

void camelXChar(void) {
	DEBUG_WORD("camelXChar")
}

void camelParen(void) {
	DEBUG_WORD("camelParen")
}

void camelHeader(void) {
	DEBUG_WORD("camelHeader")
}

void camelBuilds(void) {
	DEBUG_WORD("camelBuilds")
}

void camelVariable(void) {
	DEBUG_WORD("camelVariable")
}

void camelConstant(void) {
	DEBUG_WORD("camelConstant")
}

void camelUser(void) {
	DEBUG_WORD("camelUser")
}

void camelCreate(void) {
	DEBUG_WORD("camelCreate")
}

void camelZDoes(void) {
	DEBUG_WORD("camelZDoes")
}

void camelRecurse(void) {
	DEBUG_WORD("camelRecurse")
}

void camelLeftBracket(void) {
	DEBUG_WORD("camelLeftBracket")
}

void camelRightBracket(void) {
	DEBUG_WORD("camelRightBracket")
}

void camelHide(void) {
	DEBUG_WORD("camelHide")
}

void camelReveal(void) {
	DEBUG_WORD("camelReveal")
}

void camelImmediate(void) {
	DEBUG_WORD("camelImmediate")
}

void camelColon(void) {
	DEBUG_WORD("camelColon")
}

void camelSemicolon(void) {
	DEBUG_WORD("camelSemicolon")
}

void camelXTick(void) {
	DEBUG_WORD("camelXTick")
}

void camelPostpone(void) {
	DEBUG_WORD("camelPostpone")
}

void camelCompile(void) {
	DEBUG_WORD("camelCompile")
}

void camelIf(void) {
	DEBUG_WORD("camelIf")
}

void camelThen(void) {
	DEBUG_WORD("camelThen")
}

void camelElse(void) {
	DEBUG_WORD("camelElse")
}

void camelBegin(void) {
	DEBUG_WORD("camelBegin")
}

void camelUntil(void) {
	DEBUG_WORD("camelUntil")
}

void camelAgain(void) {
	DEBUG_WORD("camelAgain")
}

void camelWhile(void) {
	DEBUG_WORD("camelWhile")
}

void camelRepeat(void) {
	DEBUG_WORD("camelRepeat")
}

void camelToL(void) {
	DEBUG_WORD("camelToL")
}

void camelLFrom(void) {
	DEBUG_WORD("camelLFrom")
}

void camelDo(void) {
	DEBUG_WORD("camelDo")
}

void camelEndLoop(void) {
	DEBUG_WORD("camelEndLoop")
}

void camelLoop(void) {
	DEBUG_WORD("camelLoop")
}

void camelPlusLoop(void) {
	DEBUG_WORD("camelPlusLoop")
}

void camelLeave(void) {
	DEBUG_WORD("camelLeave")
}

void camelWithin(void) {
	DEBUG_WORD("camelWithin")
}

void camelMove(void) {
	DEBUG_WORD("camelMove")
}

void camelDepth(void) {
	DEBUG_WORD("camelDepth")
}

void camelEnvironmentQ(void) {
	DEBUG_WORD("camelEnvironmentQ")
}

void camelMarker(void) {
	DEBUG_WORD("camelMarker")
}

#endif
