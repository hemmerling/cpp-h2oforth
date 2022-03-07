#ifndef H2OCAM2
#define H2OCAM2

/* The "CamelForth" FORTH */

/* Primitives */

void camelExit(void) {
	PSMSG_DEBUG("camelExit")
}

void camelExecute(void) {
	PSMSG_DEBUG("camelExecute")
}

void camelLit(void) {
	PSMSG_DEBUG("camelLit")
}

void camelDup(void) {
	PSMSG_DEBUG("camelDup")
}

void camelQDup(void) {
	PSMSG_DEBUG("camelQDup")
}

void camelDrop(void) {
	PSMSG_DEBUG("camelDrop")
}

void camelSwap(void) {
	PSMSG_DEBUG("camelSwap")
}

void camelOver(void) {
	PSMSG_DEBUG("camelOver")
}

void camelRot(void) {
	PSMSG_DEBUG("camelRot")
}

void camelNip(void) {
	PSMSG_DEBUG("camelNip")
}

void camelTuck(void) {
	PSMSG_DEBUG("camelTuck")
}

void camelToR(void) {
	PSMSG_DEBUG("camelToR")
}

void camelRFrom(void) {
	PSMSG_DEBUG("camelRFrom")
}

void camelRFetch(void) {
	PSMSG_DEBUG("camelRFetch")
}

void camelSPFetch(void) {
	PSMSG_DEBUG("camelSPFetch")
}

void camelSPStore(void) {
	PSMSG_DEBUG("camelSPStore")
}

void camelRPfetch(void) {
	PSMSG_DEBUG("camelRPfetch")
}

void camelRPStore(void) {
	PSMSG_DEBUG("camelRPStore")
}

void camelFetch(void) {
	PSMSG_DEBUG("camelFetch")
}

void camelStore(void) {
	PSMSG_DEBUG("camelStore")
}

void camelCFetch(void) {
	PSMSG_DEBUG("camelCFetch")
}

void camelCStore(void) {
	PSMSG_DEBUG("camelCStore")
}

void camelIFetch(void) {
	PSMSG_DEBUG("camelIFetch")
}

void camelIStore(void) {
	PSMSG_DEBUG("camelIStore")
}

void camelICFetch(void) {
	PSMSG_DEBUG("camelICFetch")
}

void camelICStore(void) {
	PSMSG_DEBUG("camelICStore")
}

void camelHFetch(void) {
	PSMSG_DEBUG("camelHFetch")
}

void camelHStore(void) {
	PSMSG_DEBUG("camelHStore")
}

void camelHCFetch(void) {
	PSMSG_DEBUG("camelHCFetch")
}

void camelHCStore(void) {
	PSMSG_DEBUG("camelHCStore")
}

void camelPlus(void) {
	PSMSG_DEBUG("camelPlus")
}

void camelPlusStore(void) {
	PSMSG_DEBUG("camelPlusStore")
}

void camelMPlus(void) {
	PSMSG_DEBUG("camelMPlus")
}

void camelMinus(void) {
	PSMSG_DEBUG("camelMinus")
}

void camelMult(void) {
	PSMSG_DEBUG("camelMult")
}

void camelDiv(void) {
	PSMSG_DEBUG("camelDiv")
}

void camelAnd(void) {
	PSMSG_DEBUG("camelAnd")
}

void camelOr(void) {
	PSMSG_DEBUG("camelOr")
}

void camelXor(void) {
	PSMSG_DEBUG("camelXor")
}

void camelInvert(void) {
	PSMSG_DEBUG("camelInvert")
}

void camelNegate(void) {
	PSMSG_DEBUG("camelNegate")
}

void camelOnePlus(void) {
	PSMSG_DEBUG("camelOnePlus")
}

void camelOneMinus(void) {
	PSMSG_DEBUG("camelOneMinus")
}

void camelSwapBytes(void) {
	PSMSG_DEBUG("camelSwapBytes")
}

void camelTwoStar(void) {
	PSMSG_DEBUG("camelTwoStar")
}

void camelTwoSlash(void) {
	PSMSG_DEBUG("camelTwoSlash")
}

void camelLShift(void) {
	PSMSG_DEBUG("camelLShift")
}

void camelRShift(void) {
	PSMSG_DEBUG("camelRShift")
}

void camelZeroEqual(void) {
	PSMSG_DEBUG("camelZeroEqual")
}

void camelZeroLess(void) {
	PSMSG_DEBUG("camelZeroLess")
}

void camelEqual(void) {
	PSMSG_DEBUG("camelEqual")
}

void camelNotEqual(void) {
	PSMSG_DEBUG("camelNotEqual")
}

void camelLess(void) {
	PSMSG_DEBUG("camelLess")
}

void camelGreater(void) {
	PSMSG_DEBUG("camelGreater")
}

void camelULess(void) {
	PSMSG_DEBUG("camelULess")
}

void camelUGreater(void) {
	PSMSG_DEBUG("camelUGreater")
}

void camelUBranch(void) {
	PSMSG_DEBUG("camelUBranch")
}

void camelBranch(void) {
	PSMSG_DEBUG("camelBranch")
}

void camelQBranch(void) {
	PSMSG_DEBUG("camelQBranch")
}

void camelZPlusLoop(void) {
	PSMSG_DEBUG("camelZPlusLoop")
}

void camelZLoop(void) {
	PSMSG_DEBUG("camelZLoop")
}

void camelZdo(void) {
	PSMSG_DEBUG("camelZdo")
}

void camelI(void) {
	PSMSG_DEBUG("camelI")
}

void camelJ(void) {
	PSMSG_DEBUG("camelJ")
}

void camelUnLoop(void) {
	PSMSG_DEBUG("camelUnLoop")
}

void camelUmStar(void) {
	PSMSG_DEBUG("camelUmStar")
}

void camelUmSlashMod(void) {
	PSMSG_DEBUG("camelUmSlashMod")
}

void camelFill(void) {
	PSMSG_DEBUG("camelFill")
}

void camelCMove(void) {
	PSMSG_DEBUG("camelCMove")
}

void camelCMoveUp(void) {
	PSMSG_DEBUG("camelCMoveUp")
}

void camelIToD(void) {
	PSMSG_DEBUG("camelIToD")
}

void camelSkip(void) {
	PSMSG_DEBUG("camelSkip")
}

void camelScan(void) {
	PSMSG_DEBUG("camelScan")
}

void camelSEqual(void) {
	PSMSG_DEBUG("camelSEqual")
}

void camelNEqual(void) {
	PSMSG_DEBUG("camelNEqual")
}

void camelKey(void) {
	PSMSG_DEBUG("camelKey")
}

void camelEmit(void) {
	PSMSG_DEBUG("camelEmit")
}

void camelKeyQ(void) {
	PSMSG_DEBUG("camelKeyQ")
}

void camelDotHH(void) {
	PSMSG_DEBUG("camelDotHH")
}

void camelDotHHH(void) {
	PSMSG_DEBUG("camelDotHHH")
}

void camelDotS(void) {
	PSMSG_DEBUG("camelDotS")
}

void camelDump(void) {
	PSMSG_DEBUG("camelDump")
}

void camelBye(void) {
	PSMSG_DEBUG("camelBye")
}

/* High level words */

void camelU0(void) {
	PSMSG_DEBUG("camelU0")
}

void camelToIN(void) {
	PSMSG_DEBUG("camelToIN")
}

void camelBase(void) {
	PSMSG_DEBUG("camelBase")
}

void camelState(void) {
	PSMSG_DEBUG("camelState")
}

void camelDp(void) {
	PSMSG_DEBUG("camelDp")
}

void camelTickSource(void) {
	PSMSG_DEBUG("camelTickSource")
}

void camelLatest(void) {
	PSMSG_DEBUG("camelLatest")
}

void camelHp(void) {
	PSMSG_DEBUG("camelHp")
}

void camelLp(void) {
	PSMSG_DEBUG("camelLp")
}

void camelIdp(void) {
	PSMSG_DEBUG("camelIdp")
}

void camelNewest(void) {
	PSMSG_DEBUG("camelNewest")
}

void camelUInit(void) {
	PSMSG_DEBUG("camelUInit")
}

void camelNInit(void) {
	PSMSG_DEBUG("camelNInit")
}

void camelPad(void) {
	PSMSG_DEBUG("camelPad")
}

void camelL0(void) {
	PSMSG_DEBUG("camelL0")
}

void camelS0(void) {
	PSMSG_DEBUG("camelS0")
}

void camelR0(void) {
	PSMSG_DEBUG("camelR0")
}

void camelTib(void) {
	PSMSG_DEBUG("camelTib")
}

void camelTibSize(void) {
	PSMSG_DEBUG("camelTibSize")
}

void camelZero(void) {
	PSMSG_DEBUG("camelZero")
}

void camelOne(void) {
	PSMSG_DEBUG("camelOne")
}

void camelTwo(void) {
	PSMSG_DEBUG("camelTwo")
}

void camelThree(void) {
	PSMSG_DEBUG("camelThree")
}

void camelMinusOne(void) {
	PSMSG_DEBUG("camelMinusOne")
}

void camelCell(void) {
	PSMSG_DEBUG("camelCell")
}

void camelHere(void) {
	PSMSG_DEBUG("camelHere")
}

void camelAllot(void) {
	PSMSG_DEBUG("camelAllot")
}

void camelComma(void) {
	PSMSG_DEBUG("camelComma")
}

void camelCComma(void) {
	PSMSG_DEBUG("camelCComma")
}

void camelAligned(void) {
	PSMSG_DEBUG("camelAligned")
}

void camelAlign(void) {
	PSMSG_DEBUG("camelAlign")
}

void camelCellPlus(void) {
	PSMSG_DEBUG("camelCellPlus")
}

void camelCharPlus(void) {
	PSMSG_DEBUG("camelCharPlus")
}

void camelToBody(void) {
	PSMSG_DEBUG("camelToBody")
}

void camelCommaXt(void) {
	PSMSG_DEBUG("camelCommaXt")
}

void camelStoreCF(void) {
	PSMSG_DEBUG("camelStoreCF")
}

void camelCommaCF(void) {
	PSMSG_DEBUG("camelCommaCF")
}

void camelStoreColon(void) {
	PSMSG_DEBUG("camelStoreColon")
}

void camelCommaExit(void) {
	PSMSG_DEBUG("camelCommaExit")
}

void camelCommaBranch(void) {
	PSMSG_DEBUG("camelCommaBranch")
}

void camelCommaDest(void) {
	PSMSG_DEBUG("camelCommaDest")
}

void camelStoreDest(void) {
	PSMSG_DEBUG("camelStoreDest")
}

void camelCommaNone(void) {
	PSMSG_DEBUG("camelCommaNone")
}

void camelTwoFetch(void) {
	PSMSG_DEBUG("camelTwoFetch")
}

void camelTwoStore(void) {
	PSMSG_DEBUG("camelTwoStore")
}

void camelTwoDrop(void) {
	PSMSG_DEBUG("camelTwoDrop")
}

void camelTwoDup(void) {
	PSMSG_DEBUG("camelTwoDup")
}

void camelTwoSwap(void) {
	PSMSG_DEBUG("camelTwoSwap")
}

void camelTwoOver(void) {
	PSMSG_DEBUG("camelTwoOver")
}

void camelSToD(void) {
	PSMSG_DEBUG("camelSToD")
}

void camelAbs(void) {
	PSMSG_DEBUG("camelAbs")
}

void camelDNegate(void) {
	PSMSG_DEBUG("camelDNegate")
}

void camelQDNegate(void) {
	PSMSG_DEBUG("camelQDNegate")
}

void camelDAbs(void) {
	PSMSG_DEBUG("camelDAbs")
}

void camelMStar(void) {
	PSMSG_DEBUG("camelMStar")
}

void camelSMSlashREM(void) {
	PSMSG_DEBUG("camelSMSlashREM")
}

void camelFMSlashMod(void) {
	PSMSG_DEBUG("camelFMSlashMod")
}

void camelSlashMod(void) {
	PSMSG_DEBUG("camelSlashMod")
}

void camelMod(void) {
	PSMSG_DEBUG("camelMod")
}

void camelStarSlashMod(void) {
	PSMSG_DEBUG("camelStarSlashMod")
}

void camelStarSlash(void) {
	PSMSG_DEBUG("camelStarSlash")
}

void camelMax(void) {
	PSMSG_DEBUG("camelMax")
}

void camelMin(void) {
	PSMSG_DEBUG("camelMin")
}

void camelUMax(void) {
	PSMSG_DEBUG("camelUMax")
}

void camelUMin(void) {
	PSMSG_DEBUG("camelUMin")
}

void camelCells(void) {
	PSMSG_DEBUG("camelCells")
}

void camelCount(void) {
	PSMSG_DEBUG("camelCount")
}

void camelCR(void) {
	PSMSG_DEBUG("camelCR")
}

void camelSpace(void) {
	PSMSG_DEBUG("camelSpace")
}

void camelSpaces(void) {
	PSMSG_DEBUG("camelSpaces")
}

void camelAccept(void) {
	PSMSG_DEBUG("camelAccept")
}

void camelType(void) {
	PSMSG_DEBUG("camelType")
}

void camelUDSlashMod(void) {
	PSMSG_DEBUG("camelUDSlashMod")
}

void camelUDStar(void) {
	PSMSG_DEBUG("camelUDStar")
}

void camelHold(void) {
	PSMSG_DEBUG("camelHold")
}

void camelLessNum(void) {
	PSMSG_DEBUG("camelLessNum")
}

void camelToDigit(void) {
	PSMSG_DEBUG("camelToDigit")
}

void camelNum(void) {
	PSMSG_DEBUG("camelNum")
}

void camelNums(void) {
	PSMSG_DEBUG("camelNums")
}

void camelNumGreater(void) {
	PSMSG_DEBUG("camelNumGreater")
}

void camelSign(void) {
	PSMSG_DEBUG("camelSign")
}

void camelUDot(void) {
	PSMSG_DEBUG("camelUDot")
}

void camelDot(void) {
	PSMSG_DEBUG("camelDot")
}

void camelDecimal(void) {
	PSMSG_DEBUG("camelDecimal")
}

void camelHex(void) {
	PSMSG_DEBUG("camelHex")
}

void camelSource(void) {
	PSMSG_DEBUG("camelSource")
}

void camelSlashString(void) {
	PSMSG_DEBUG("camelSlashString")
}

void camelToCounted(void) {
	PSMSG_DEBUG("camelToCounted")
}

void camelAdrToIN(void) {
	PSMSG_DEBUG("camelAdrToIN")
}

void camelParse(void) {
	PSMSG_DEBUG("camelParse")
}

void camelWord(void) {
	PSMSG_DEBUG("camelWord")
}

void camelZSQuote(void) {
	PSMSG_DEBUG("camelZSQuote")
}

void camelSQuote(void) {
	PSMSG_DEBUG("camelSQuote")
}

void camelDotQuote(void) {
	PSMSG_DEBUG("camelDotQuote")
}

void camelNFAToLFA(void) {
	PSMSG_DEBUG("camelNFAToLFA")
}

void camelNFAToCFA(void) {
	PSMSG_DEBUG("camelNFAToCFA")
}

void camelImmedQ(void) {
	PSMSG_DEBUG("camelImmedQ")
}

void camelFind(void) {
	PSMSG_DEBUG("camelFind")
}

void camelLiteral(void) {
	PSMSG_DEBUG("camelLiteral")
}

void camelDigitQ(void) {
	PSMSG_DEBUG("camelDigitQ")
}

void camelQSign(void) {
	PSMSG_DEBUG("camelQSign")
}

void camelToNumber(void) {
	PSMSG_DEBUG("camelToNumber")
}

void camelQNumber(void) {
	PSMSG_DEBUG("camelQNumber")
}

void camelInterpret(void) {
	PSMSG_DEBUG("camelInterpret")
}

void camelEvaluate(void) {
	PSMSG_DEBUG("camelEvaluate")
}

void camelQuit(void) {
	PSMSG_DEBUG("camelQuit")
}

void camelAbort(void) {
	PSMSG_DEBUG("camelAbort")
}

void camelQAbort(void) {
	PSMSG_DEBUG("camelQAbort")
}

void camelAbortQuote(void) {
	PSMSG_DEBUG("camelAbortQuote")
}

void camelTick(void) {
	PSMSG_DEBUG("camelTick")
}

void camelChar(void) {
	PSMSG_DEBUG("camelChar")
}

void camelXChar(void) {
	PSMSG_DEBUG("camelXChar")
}

void camelParen(void) {
	PSMSG_DEBUG("camelParen")
}

void camelHeader(void) {
	PSMSG_DEBUG("camelHeader")
}

void camelBuilds(void) {
	PSMSG_DEBUG("camelBuilds")
}

void camelVariable(void) {
	PSMSG_DEBUG("camelVariable")
}

void camelConstant(void) {
	PSMSG_DEBUG("camelConstant")
}

void camelUser(void) {
	PSMSG_DEBUG("camelUser")
}

void camelCreate(void) {
	PSMSG_DEBUG("camelCreate")
}

void camelZDoes(void) {
	PSMSG_DEBUG("camelZDoes")
}

void camelRecurse(void) {
	PSMSG_DEBUG("camelRecurse")
}

void camelLeftBracket(void) {
	PSMSG_DEBUG("camelLeftBracket")
}

void camelRightBracket(void) {
	PSMSG_DEBUG("camelRightBracket")
}

void camelHide(void) {
	PSMSG_DEBUG("camelHide")
}

void camelReveal(void) {
	PSMSG_DEBUG("camelReveal")
}

void camelImmediate(void) {
	PSMSG_DEBUG("camelImmediate")
}

void camelColon(void) {
	PSMSG_DEBUG("camelColon")
}

void camelSemicolon(void) {
	PSMSG_DEBUG("camelSemicolon")
}

void camelXTick(void) {
	PSMSG_DEBUG("camelXTick")
}

void camelPostpone(void) {
	PSMSG_DEBUG("camelPostpone")
}

void camelCompile(void) {
	PSMSG_DEBUG("camelCompile")
}

void camelIf(void) {
	PSMSG_DEBUG("camelIf")
}

void camelThen(void) {
	PSMSG_DEBUG("camelThen")
}

void camelElse(void) {
	PSMSG_DEBUG("camelElse")
}

void camelBegin(void) {
	PSMSG_DEBUG("camelBegin")
}

void camelUntil(void) {
	PSMSG_DEBUG("camelUntil")
}

void camelAgain(void) {
	PSMSG_DEBUG("camelAgain")
}

void camelWhile(void) {
	PSMSG_DEBUG("camelWhile")
}

void camelRepeat(void) {
	PSMSG_DEBUG("camelRepeat")
}

void camelToL(void) {
	PSMSG_DEBUG("camelToL")
}

void camelLFrom(void) {
	PSMSG_DEBUG("camelLFrom")
}

void camelDo(void) {
	PSMSG_DEBUG("camelDo")
}

void camelEndLoop(void) {
	PSMSG_DEBUG("camelEndLoop")
}

void camelLoop(void) {
	PSMSG_DEBUG("camelLoop")
}

void camelPlusLoop(void) {
	PSMSG_DEBUG("camelPlusLoop")
}

void camelLeave(void) {
	PSMSG_DEBUG("camelLeave")
}

void camelWithin(void) {
	PSMSG_DEBUG("camelWithin")
}

void camelMove(void) {
	PSMSG_DEBUG("camelMove")
}

void camelDepth(void) {
	PSMSG_DEBUG("camelDepth")
}

void camelEnvironmentQ(void) {
	PSMSG_DEBUG("camelEnvironmentQ")
}

void camelMarker(void) {
	PSMSG_DEBUG("camelMarker")
}

#endif
