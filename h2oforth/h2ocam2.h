#ifndef H2OCAM2
#define H2OCAM2

/* The "CamelForth" FORTH */

/* Primitives */

void camelExit(void) {
	SMSG_DEBUG("camelExit")
}

void camelExecute(void) {
	SMSG_DEBUG("camelExecute")
}

void camelLit(void) {
	SMSG_DEBUG("camelLit")
}

void camelDup(void) {
	SMSG_DEBUG("camelDup")
}

void camelQDup(void) {
	SMSG_DEBUG("camelQDup")
}

void camelDrop(void) {
	SMSG_DEBUG("camelDrop")
}

void camelSwap(void) {
	SMSG_DEBUG("camelSwap")
}

void camelOver(void) {
	SMSG_DEBUG("camelOver")
}

void camelRot(void) {
	SMSG_DEBUG("camelRot")
}

void camelNip(void) {
	SMSG_DEBUG("camelNip")
}

void camelTuck(void) {
	SMSG_DEBUG("camelTuck")
}

void camelToR(void) {
	SMSG_DEBUG("camelToR")
}

void camelRFrom(void) {
	SMSG_DEBUG("camelRFrom")
}

void camelRFetch(void) {
	SMSG_DEBUG("camelRFetch")
}

void camelSPFetch(void) {
	SMSG_DEBUG("camelSPFetch")
}

void camelSPStore(void) {
	SMSG_DEBUG("camelSPStore")
}

void camelRPfetch(void) {
	SMSG_DEBUG("camelRPfetch")
}

void camelRPStore(void) {
	SMSG_DEBUG("camelRPStore")
}

void camelFetch(void) {
	SMSG_DEBUG("camelFetch")
}

void camelStore(void) {
	SMSG_DEBUG("camelStore")
}

void camelCFetch(void) {
	SMSG_DEBUG("camelCFetch")
}

void camelCStore(void) {
	SMSG_DEBUG("camelCStore")
}

void camelIFetch(void) {
	SMSG_DEBUG("camelIFetch")
}

void camelIStore(void) {
	SMSG_DEBUG("camelIStore")
}

void camelICFetch(void) {
	SMSG_DEBUG("camelICFetch")
}

void camelICStore(void) {
	SMSG_DEBUG("camelICStore")
}

void camelHFetch(void) {
	SMSG_DEBUG("camelHFetch")
}

void camelHStore(void) {
	SMSG_DEBUG("camelHStore")
}

void camelHCFetch(void) {
	SMSG_DEBUG("camelHCFetch")
}

void camelHCStore(void) {
	SMSG_DEBUG("camelHCStore")
}

void camelPlus(void) {
	SMSG_DEBUG("camelPlus")
}

void camelPlusStore(void) {
	SMSG_DEBUG("camelPlusStore")
}

void camelMPlus(void) {
	SMSG_DEBUG("camelMPlus")
}

void camelMinus(void) {
	SMSG_DEBUG("camelMinus")
}

void camelMult(void) {
	SMSG_DEBUG("camelMult")
}

void camelDiv(void) {
	SMSG_DEBUG("camelDiv")
}

void camelAnd(void) {
	SMSG_DEBUG("camelAnd")
}

void camelOr(void) {
	SMSG_DEBUG("camelOr")
}

void camelXor(void) {
	SMSG_DEBUG("camelXor")
}

void camelInvert(void) {
	SMSG_DEBUG("camelInvert")
}

void camelNegate(void) {
	SMSG_DEBUG("camelNegate")
}

void camelOnePlus(void) {
	SMSG_DEBUG("camelOnePlus")
}

void camelOneMinus(void) {
	SMSG_DEBUG("camelOneMinus")
}

void camelSwapBytes(void) {
	SMSG_DEBUG("camelSwapBytes")
}

void camelTwoStar(void) {
	SMSG_DEBUG("camelTwoStar")
}

void camelTwoSlash(void) {
	SMSG_DEBUG("camelTwoSlash")
}

void camelLShift(void) {
	SMSG_DEBUG("camelLShift")
}

void camelRShift(void) {
	SMSG_DEBUG("camelRShift")
}

void camelZeroEqual(void) {
	SMSG_DEBUG("camelZeroEqual")
}

void camelZeroLess(void) {
	SMSG_DEBUG("camelZeroLess")
}

void camelEqual(void) {
	SMSG_DEBUG("camelEqual")
}

void camelNotEqual(void) {
	SMSG_DEBUG("camelNotEqual")
}

void camelLess(void) {
	SMSG_DEBUG("camelLess")
}

void camelGreater(void) {
	SMSG_DEBUG("camelGreater")
}

void camelULess(void) {
	SMSG_DEBUG("camelULess")
}

void camelUGreater(void) {
	SMSG_DEBUG("camelUGreater")
}

void camelUBranch(void) {
	SMSG_DEBUG("camelUBranch")
}

void camelBranch(void) {
	SMSG_DEBUG("camelBranch")
}

void camelQBranch(void) {
	SMSG_DEBUG("camelQBranch")
}

void camelZPlusLoop(void) {
	SMSG_DEBUG("camelZPlusLoop")
}

void camelZLoop(void) {
	SMSG_DEBUG("camelZLoop")
}

void camelZdo(void) {
	SMSG_DEBUG("camelZdo")
}

void camelI(void) {
	SMSG_DEBUG("camelI")
}

void camelJ(void) {
	SMSG_DEBUG("camelJ")
}

void camelUnLoop(void) {
	SMSG_DEBUG("camelUnLoop")
}

void camelUmStar(void) {
	SMSG_DEBUG("camelUmStar")
}

void camelUmSlashMod(void) {
	SMSG_DEBUG("camelUmSlashMod")
}

void camelFill(void) {
	SMSG_DEBUG("camelFill")
}

void camelCMove(void) {
	SMSG_DEBUG("camelCMove")
}

void camelCMoveUp(void) {
	SMSG_DEBUG("camelCMoveUp")
}

void camelIToD(void) {
	SMSG_DEBUG("camelIToD")
}

void camelSkip(void) {
	SMSG_DEBUG("camelSkip")
}

void camelScan(void) {
	SMSG_DEBUG("camelScan")
}

void camelSEqual(void) {
	SMSG_DEBUG("camelSEqual")
}

void camelNEqual(void) {
	SMSG_DEBUG("camelNEqual")
}

void camelKey(void) {
	SMSG_DEBUG("camelKey")
}

void camelEmit(void) {
	SMSG_DEBUG("camelEmit")
}

void camelKeyQ(void) {
	SMSG_DEBUG("camelKeyQ")
}

void camelDotHH(void) {
	SMSG_DEBUG("camelDotHH")
}

void camelDotHHH(void) {
	SMSG_DEBUG("camelDotHHH")
}

void camelDotS(void) {
	SMSG_DEBUG("camelDotS")
}

void camelDump(void) {
	SMSG_DEBUG("camelDump")
}

void camelBye(void) {
	SMSG_DEBUG("camelBye")
}

/* High level words */

void camelU0(void) {
	SMSG_DEBUG("camelU0")
}

void camelToIN(void) {
	SMSG_DEBUG("camelToIN")
}

void camelBase(void) {
	SMSG_DEBUG("camelBase")
}

void camelState(void) {
	SMSG_DEBUG("camelState")
}

void camelDp(void) {
	SMSG_DEBUG("camelDp")
}

void camelTickSource(void) {
	SMSG_DEBUG("camelTickSource")
}

void camelLatest(void) {
	SMSG_DEBUG("camelLatest")
}

void camelHp(void) {
	SMSG_DEBUG("camelHp")
}

void camelLp(void) {
	SMSG_DEBUG("camelLp")
}

void camelIdp(void) {
	SMSG_DEBUG("camelIdp")
}

void camelNewest(void) {
	SMSG_DEBUG("camelNewest")
}

void camelUInit(void) {
	SMSG_DEBUG("camelUInit")
}

void camelNInit(void) {
	SMSG_DEBUG("camelNInit")
}

void camelPad(void) {
	SMSG_DEBUG("camelPad")
}

void camelL0(void) {
	SMSG_DEBUG("camelL0")
}

void camelS0(void) {
	SMSG_DEBUG("camelS0")
}

void camelR0(void) {
	SMSG_DEBUG("camelR0")
}

void camelTib(void) {
	SMSG_DEBUG("camelTib")
}

void camelTibSize(void) {
	SMSG_DEBUG("camelTibSize")
}

void camelZero(void) {
	SMSG_DEBUG("camelZero")
}

void camelOne(void) {
	SMSG_DEBUG("camelOne")
}

void camelTwo(void) {
	SMSG_DEBUG("camelTwo")
}

void camelThree(void) {
	SMSG_DEBUG("camelThree")
}

void camelMinusOne(void) {
	SMSG_DEBUG("camelMinusOne")
}

void camelCell(void) {
	SMSG_DEBUG("camelCell")
}

void camelHere(void) {
	SMSG_DEBUG("camelHere")
}

void camelAllot(void) {
	SMSG_DEBUG("camelAllot")
}

void camelComma(void) {
	SMSG_DEBUG("camelComma")
}

void camelCComma(void) {
	SMSG_DEBUG("camelCComma")
}

void camelAligned(void) {
	SMSG_DEBUG("camelAligned")
}

void camelAlign(void) {
	SMSG_DEBUG("camelAlign")
}

void camelCellPlus(void) {
	SMSG_DEBUG("camelCellPlus")
}

void camelCharPlus(void) {
	SMSG_DEBUG("camelCharPlus")
}

void camelToBody(void) {
	SMSG_DEBUG("camelToBody")
}

void camelCommaXt(void) {
	SMSG_DEBUG("camelCommaXt")
}

void camelStoreCF(void) {
	SMSG_DEBUG("camelStoreCF")
}

void camelCommaCF(void) {
	SMSG_DEBUG("camelCommaCF")
}

void camelStoreColon(void) {
	SMSG_DEBUG("camelStoreColon")
}

void camelCommaExit(void) {
	SMSG_DEBUG("camelCommaExit")
}

void camelCommaBranch(void) {
	SMSG_DEBUG("camelCommaBranch")
}

void camelCommaDest(void) {
	SMSG_DEBUG("camelCommaDest")
}

void camelStoreDest(void) {
	SMSG_DEBUG("camelStoreDest")
}

void camelCommaNone(void) {
	SMSG_DEBUG("camelCommaNone")
}

void camelTwoFetch(void) {
	SMSG_DEBUG("camelTwoFetch")
}

void camelTwoStore(void) {
	SMSG_DEBUG("camelTwoStore")
}

void camelTwoDrop(void) {
	SMSG_DEBUG("camelTwoDrop")
}

void camelTwoDup(void) {
	SMSG_DEBUG("camelTwoDup")
}

void camelTwoSwap(void) {
	SMSG_DEBUG("camelTwoSwap")
}

void camelTwoOver(void) {
	SMSG_DEBUG("camelTwoOver")
}

void camelSToD(void) {
	SMSG_DEBUG("camelSToD")
}

void camelAbs(void) {
	SMSG_DEBUG("camelAbs")
}

void camelDNegate(void) {
	SMSG_DEBUG("camelDNegate")
}

void camelQDNegate(void) {
	SMSG_DEBUG("camelQDNegate")
}

void camelDAbs(void) {
	SMSG_DEBUG("camelDAbs")
}

void camelMStar(void) {
	SMSG_DEBUG("camelMStar")
}

void camelSMSlashREM(void) {
	SMSG_DEBUG("camelSMSlashREM")
}

void camelFMSlashMod(void) {
	SMSG_DEBUG("camelFMSlashMod")
}

void camelSlashMod(void) {
	SMSG_DEBUG("camelSlashMod")
}

void camelMod(void) {
	SMSG_DEBUG("camelMod")
}

void camelStarSlashMod(void) {
	SMSG_DEBUG("camelStarSlashMod")
}

void camelStarSlash(void) {
	SMSG_DEBUG("camelStarSlash")
}

void camelMax(void) {
	SMSG_DEBUG("camelMax")
}

void camelMin(void) {
	SMSG_DEBUG("camelMin")
}

void camelUMax(void) {
	SMSG_DEBUG("camelUMax")
}

void camelUMin(void) {
	SMSG_DEBUG("camelUMin")
}

void camelCells(void) {
	SMSG_DEBUG("camelCells")
}

void camelCount(void) {
	SMSG_DEBUG("camelCount")
}

void camelCR(void) {
	SMSG_DEBUG("camelCR")
}

void camelSpace(void) {
	SMSG_DEBUG("camelSpace")
}

void camelSpaces(void) {
	SMSG_DEBUG("camelSpaces")
}

void camelAccept(void) {
	SMSG_DEBUG("camelAccept")
}

void camelType(void) {
	SMSG_DEBUG("camelType")
}

void camelUDSlashMod(void) {
	SMSG_DEBUG("camelUDSlashMod")
}

void camelUDStar(void) {
	SMSG_DEBUG("camelUDStar")
}

void camelHold(void) {
	SMSG_DEBUG("camelHold")
}

void camelLessNum(void) {
	SMSG_DEBUG("camelLessNum")
}

void camelToDigit(void) {
	SMSG_DEBUG("camelToDigit")
}

void camelNum(void) {
	SMSG_DEBUG("camelNum")
}

void camelNums(void) {
	SMSG_DEBUG("camelNums")
}

void camelNumGreater(void) {
	SMSG_DEBUG("camelNumGreater")
}

void camelSign(void) {
	SMSG_DEBUG("camelSign")
}

void camelUDot(void) {
	SMSG_DEBUG("camelUDot")
}

void camelDot(void) {
	SMSG_DEBUG("camelDot")
}

void camelDecimal(void) {
	SMSG_DEBUG("camelDecimal")
}

void camelHex(void) {
	SMSG_DEBUG("camelHex")
}

void camelSource(void) {
	SMSG_DEBUG("camelSource")
}

void camelSlashString(void) {
	SMSG_DEBUG("camelSlashString")
}

void camelToCounted(void) {
	SMSG_DEBUG("camelToCounted")
}

void camelAdrToIN(void) {
	SMSG_DEBUG("camelAdrToIN")
}

void camelParse(void) {
	SMSG_DEBUG("camelParse")
}

void camelWord(void) {
	SMSG_DEBUG("camelWord")
}

void camelZSQuote(void) {
	SMSG_DEBUG("camelZSQuote")
}

void camelSQuote(void) {
	SMSG_DEBUG("camelSQuote")
}

void camelDotQuote(void) {
	SMSG_DEBUG("camelDotQuote")
}

void camelNFAToLFA(void) {
	SMSG_DEBUG("camelNFAToLFA")
}

void camelNFAToCFA(void) {
	SMSG_DEBUG("camelNFAToCFA")
}

void camelImmedQ(void) {
	SMSG_DEBUG("camelImmedQ")
}

void camelFind(void) {
	SMSG_DEBUG("camelFind")
}

void camelLiteral(void) {
	SMSG_DEBUG("camelLiteral")
}

void camelDigitQ(void) {
	SMSG_DEBUG("camelDigitQ")
}

void camelQSign(void) {
	SMSG_DEBUG("camelQSign")
}

void camelToNumber(void) {
	SMSG_DEBUG("camelToNumber")
}

void camelQNumber(void) {
	SMSG_DEBUG("camelQNumber")
}

void camelInterpret(void) {
	SMSG_DEBUG("camelInterpret")
}

void camelEvaluate(void) {
	SMSG_DEBUG("camelEvaluate")
}

void camelQuit(void) {
	SMSG_DEBUG("camelQuit")
}

void camelAbort(void) {
	SMSG_DEBUG("camelAbort")
}

void camelQAbort(void) {
	SMSG_DEBUG("camelQAbort")
}

void camelAbortQuote(void) {
	SMSG_DEBUG("camelAbortQuote")
}

void camelTick(void) {
	SMSG_DEBUG("camelTick")
}

void camelChar(void) {
	SMSG_DEBUG("camelChar")
}

void camelXChar(void) {
	SMSG_DEBUG("camelXChar")
}

void camelParen(void) {
	SMSG_DEBUG("camelParen")
}

void camelHeader(void) {
	SMSG_DEBUG("camelHeader")
}

void camelBuilds(void) {
	SMSG_DEBUG("camelBuilds")
}

void camelVariable(void) {
	SMSG_DEBUG("camelVariable")
}

void camelConstant(void) {
	SMSG_DEBUG("camelConstant")
}

void camelUser(void) {
	SMSG_DEBUG("camelUser")
}

void camelCreate(void) {
	SMSG_DEBUG("camelCreate")
}

void camelZDoes(void) {
	SMSG_DEBUG("camelZDoes")
}

void camelRecurse(void) {
	SMSG_DEBUG("camelRecurse")
}

void camelLeftBracket(void) {
	SMSG_DEBUG("camelLeftBracket")
}

void camelRightBracket(void) {
	SMSG_DEBUG("camelRightBracket")
}

void camelHide(void) {
	SMSG_DEBUG("camelHide")
}

void camelReveal(void) {
	SMSG_DEBUG("camelReveal")
}

void camelImmediate(void) {
	SMSG_DEBUG("camelImmediate")
}

void camelColon(void) {
	SMSG_DEBUG("camelColon")
}

void camelSemicolon(void) {
	SMSG_DEBUG("camelSemicolon")
}

void camelXTick(void) {
	SMSG_DEBUG("camelXTick")
}

void camelPostpone(void) {
	SMSG_DEBUG("camelPostpone")
}

void camelCompile(void) {
	SMSG_DEBUG("camelCompile")
}

void camelIf(void) {
	SMSG_DEBUG("camelIf")
}

void camelThen(void) {
	SMSG_DEBUG("camelThen")
}

void camelElse(void) {
	SMSG_DEBUG("camelElse")
}

void camelBegin(void) {
	SMSG_DEBUG("camelBegin")
}

void camelUntil(void) {
	SMSG_DEBUG("camelUntil")
}

void camelAgain(void) {
	SMSG_DEBUG("camelAgain")
}

void camelWhile(void) {
	SMSG_DEBUG("camelWhile")
}

void camelRepeat(void) {
	SMSG_DEBUG("camelRepeat")
}

void camelToL(void) {
	SMSG_DEBUG("camelToL")
}

void camelLFrom(void) {
	SMSG_DEBUG("camelLFrom")
}

void camelDo(void) {
	SMSG_DEBUG("camelDo")
}

void camelEndLoop(void) {
	SMSG_DEBUG("camelEndLoop")
}

void camelLoop(void) {
	SMSG_DEBUG("camelLoop")
}

void camelPlusLoop(void) {
	SMSG_DEBUG("camelPlusLoop")
}

void camelLeave(void) {
	SMSG_DEBUG("camelLeave")
}

void camelWithin(void) {
	SMSG_DEBUG("camelWithin")
}

void camelMove(void) {
	SMSG_DEBUG("camelMove")
}

void camelDepth(void) {
	SMSG_DEBUG("camelDepth")
}

void camelEnvironmentQ(void) {
	SMSG_DEBUG("camelEnvironmentQ")
}

void camelMarker(void) {
	SMSG_DEBUG("camelMarker")
}

#endif
