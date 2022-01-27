#ifndef H2OCAM2
#define H2OCAM2

/* The "CamelForth" FORTH */

/* Primitives */

void camelExit(void) {
#if defined (__DEBUG__)
	printf("camelExit\n");
#endif
}

void camelExecute(void) {
#if defined (__DEBUG__)
	printf("camelExecute\n");
#endif
}

void camelLit(void) {
#if defined (__DEBUG__)
	printf("camelLit\n");
#endif
}

void camelDup(void) {
#if defined (__DEBUG__)
	printf("camelDup\n");
#endif
}

void camelQDup(void) {
#if defined (__DEBUG__)
	printf("camelQDup\n");
#endif
}

void camelDrop(void) {
#if defined (__DEBUG__)
	printf("camelDrop\n");
#endif
}

void camelSwap(void) {
#if defined (__DEBUG__)
	printf("camelSwap\n");
#endif
}

void camelOver(void) {
#if defined (__DEBUG__)
	printf("camelOver\n");
#endif
}

void camelRot(void) {
#if defined (__DEBUG__)
	printf("camelRot\n");
#endif
}

void camelNip(void) {
#if defined (__DEBUG__)
	printf("camelNip\n");
#endif
}

void camelTuck(void) {
#if defined (__DEBUG__)
	printf("camelTuck\n");
#endif
}

void camelToR(void) {
#if defined (__DEBUG__)
	printf("camelToR\n");
#endif
}

void camelRFrom(void) {
#if defined (__DEBUG__)
	printf("camelRFrom\n");
#endif
}

void camelRFetch(void) {
#if defined (__DEBUG__)
	printf("camelRFetch\n");
#endif
}

void camelSPFetch(void) {
#if defined (__DEBUG__)
	printf("camelSPFetch\n");
#endif
}

void camelSPStore(void) {
#if defined (__DEBUG__)
	printf("camelSPStore\n");
#endif
}

void camelRPfetch(void) {
#if defined (__DEBUG__)
	printf("camelRPfetch\n");
#endif
}

void camelRPStore(void) {
#if defined (__DEBUG__)
	printf("camelRPStore\n");
#endif
}

void camelFetch(void) {
#if defined (__DEBUG__)
	printf("camelFetch\n");
#endif
}

void camelStore(void) {
#if defined (__DEBUG__)
	printf("camelStore\n");
#endif
}

void camelCFetch(void) {
#if defined (__DEBUG__)
	printf("camelCFetch\n");
#endif
}

void camelCStore(void) {
#if defined (__DEBUG__)
	printf("camelCStore\n");
#endif
}

void camelIFetch(void) {
#if defined (__DEBUG__)
	printf("camelIFetch\n");
#endif
}

void camelIStore(void) {
#if defined (__DEBUG__)
	printf("camelIStore\n");
#endif
}

void camelICFetch(void) {
#if defined (__DEBUG__)
	printf("camelICFetch\n");
#endif
}

void camelICStore(void) {
#if defined (__DEBUG__)
	printf("camelICStore\n");
#endif
}

void camelHFetch(void) {
#if defined (__DEBUG__)
	printf("camelHFetch\n");
#endif
}

void camelHStore(void) {
#if defined (__DEBUG__)
	printf("camelHStore\n");
#endif
}

void camelHCFetch(void) {
#if defined (__DEBUG__)
	printf("camelHCFetch\n");
#endif
}

void camelHCStore(void) {
#if defined (__DEBUG__)
	printf("camelHCStore\n");
#endif
}

void camelPlus(void) {
#if defined (__DEBUG__)
	printf("camelPlus\n");
#endif
}

void camelPlusStore(void) {
#if defined (__DEBUG__)
	printf("camelPlusStore\n");
#endif
}

void camelMPlus(void) {
#if defined (__DEBUG__)
	printf("camelMPlus\n");
#endif
}

void camelMinus(void) {
#if defined (__DEBUG__)
	printf("camelMinus\n");
#endif
}

void camelMult(void) {
#if defined (__DEBUG__)
	printf("camelMult\n");
#endif
}

void camelDiv(void) {
#if defined (__DEBUG__)
	printf("camelDiv\n");
#endif
}

void camelAnd(void) {
#if defined (__DEBUG__)
	printf("camelAnd\n");
#endif
}

void camelOr(void) {
#if defined (__DEBUG__)
	printf("camelOr\n");
#endif
}

void camelXor(void) {
#if defined (__DEBUG__)
	printf("camelXor\n");
#endif
}

void camelInvert(void) {
#if defined (__DEBUG__)
	printf("camelInvert\n");
#endif
}

void camelNegate(void) {
#if defined (__DEBUG__)
	printf("camelNegate\n");
#endif
}

void camelOnePlus(void) {
#if defined (__DEBUG__)
	printf("camelOnePlus\n");
#endif
}

void camelOneMinus(void) {
#if defined (__DEBUG__)
	printf("camelOneMinus\n");
#endif
}

void camelSwapBytes(void) {
#if defined (__DEBUG__)
	printf("camelSwapBytes\n");
#endif
}

void camelTwoStar(void) {
#if defined (__DEBUG__)
	printf("camelTwoStar\n");
#endif
}

void camelTwoSlash(void) {
#if defined (__DEBUG__)
	printf("camelTwoSlash\n");
#endif
}

void camelLShift(void) {
#if defined (__DEBUG__)
	printf("camelLShift\n");
#endif
}

void camelRShift(void) {
#if defined (__DEBUG__)
	printf("camelRShift\n");
#endif
}

void camelZeroEqual(void) {
#if defined (__DEBUG__)
	printf("camelZeroEqual\n");
#endif
}

void camelZeroLess(void) {
#if defined (__DEBUG__)
	printf("camelZeroLess\n");
#endif
}

void camelEqual(void) {
#if defined (__DEBUG__)
	printf("camelEqual\n");
#endif
}

void camelNotEqual(void) {
#if defined (__DEBUG__)
	printf("camelNotEqual\n");
#endif
}

void camelLess(void) {
#if defined (__DEBUG__)
	printf("camelLess\n");
#endif
}

void camelGreater(void) {
#if defined (__DEBUG__)
	printf("camelGreater\n");
#endif
}

void camelULess(void) {
#if defined (__DEBUG__)
	printf("camelULess\n");
#endif
}

void camelUGreater(void) {
#if defined (__DEBUG__)
	printf("camelUGreater\n");
#endif
}

void camelUBranch(void) {
#if defined (__DEBUG__)
	printf("camelUBranch\n");
#endif
}

void camelBranch(void) {
#if defined (__DEBUG__)
	printf("camelBranch\n");
#endif
}

void camelQBranch(void) {
#if defined (__DEBUG__)
	printf("camelQBranch\n");
#endif
}

void camelZPlusLoop(void) {
#if defined (__DEBUG__)
	printf("camelZPlusLoop\n");
#endif
}

void camelZLoop(void) {
#if defined (__DEBUG__)
	printf("camelZLoop\n");
#endif
}

void camelZdo(void) {
#if defined (__DEBUG__)
	printf("camelZdo\n");
#endif
}

void camelI(void) {
#if defined (__DEBUG__)
	printf("camelI\n");
#endif
}

void camelJ(void) {
#if defined (__DEBUG__)
	printf("camelJ\n");
#endif
}

void camelUnLoop(void) {
#if defined (__DEBUG__)
	printf("camelUnLoop\n");
#endif
}

void camelUmStar(void) {
#if defined (__DEBUG__)
	printf("camelUmStar\n");
#endif
}

void camelUmSlashMod(void) {
#if defined (__DEBUG__)
	printf("camelUmSlashMod\n");
#endif
}

void camelFill(void) {
#if defined (__DEBUG__)
	printf("camelFill\n");
#endif
}

void camelCMove(void) {
#if defined (__DEBUG__)
	printf("camelCMove\n");
#endif
}

void camelCMoveUp(void) {
#if defined (__DEBUG__)
	printf("camelCMoveUp\n");
#endif
}

void camelIToD(void) {
#if defined (__DEBUG__)
	printf("camelIToD\n");
#endif
}

void camelSkip(void) {
#if defined (__DEBUG__)
	printf("camelSkip\n");
#endif
}

void camelScan(void) {
#if defined (__DEBUG__)
	printf("camelScan\n");
#endif
}

void camelSEqual(void) {
#if defined (__DEBUG__)
	printf("camelSEqual\n");
#endif
}

void camelNEqual(void) {
#if defined (__DEBUG__)
	printf("camelNEqual\n");
#endif
}

void camelKey(void) {
#if defined (__DEBUG__)
	printf("camelKey\n");
#endif
}

void camelEmit(void) {
#if defined (__DEBUG__)
	printf("camelEmit\n");
#endif
}

void camelKeyQ(void) {
#if defined (__DEBUG__)
	printf("camelKeyQ\n");
#endif
}

void camelDotHH(void) {
#if defined (__DEBUG__)
	printf("camelDotHH\n");
#endif
}

void camelDotHHH(void) {
#if defined (__DEBUG__)
	printf("camelDotHHH\n");
#endif
}

void camelDotS(void) {
#if defined (__DEBUG__)
	printf("camelDotS\n");
#endif
}

void camelDump(void) {
#if defined (__DEBUG__)
	printf("camelDump\n");
#endif
}

void camelBye(void) {
#if defined (__DEBUG__)
	printf("camelBye\n");
#endif
}

/* High level words */

void camelU0(void) {
#if defined (__DEBUG__)
	printf("camelU0\n");
#endif
}

void camelToIN(void) {
#if defined (__DEBUG__)
	printf("camelToIN\n");
#endif
}

void camelBase(void) {
#if defined (__DEBUG__)
	printf("camelBase\n");
#endif
}

void camelState(void) {
#if defined (__DEBUG__)
	printf("camelState\n");
#endif
}

void camelDp(void) {
#if defined (__DEBUG__)
	printf("camelDp\n");
#endif
}

void camelTickSource(void) {
#if defined (__DEBUG__)
	printf("camelTickSource\n");
#endif
}

void camelLatest(void) {
#if defined (__DEBUG__)
	printf("camelLatest\n");
#endif
}

void camelHp(void) {
#if defined (__DEBUG__)
	printf("camelHp\n");
#endif
}

void camelLp(void) {
#if defined (__DEBUG__)
	printf("camelLp\n");
#endif
}

void camelIdp(void) {
#if defined (__DEBUG__)
	printf("camelIdp\n");
#endif
}

void camelNewest(void) {
#if defined (__DEBUG__)
	printf("camelNewest\n");
#endif
}

void camelUInit(void) {
#if defined (__DEBUG__)
	printf("camelUInit\n");
#endif
}

void camelNInit(void) {
#if defined (__DEBUG__)
	printf("camelNInit\n");
#endif
}

void camelPad(void) {
#if defined (__DEBUG__)
	printf("camelPad\n");
#endif
}

void camelL0(void) {
#if defined (__DEBUG__)
	printf("camelL0\n");
#endif
}

void camelS0(void) {
#if defined (__DEBUG__)
	printf("camelS0\n");
#endif
}

void camelR0(void) {
#if defined (__DEBUG__)
	printf("camelR0\n");
#endif
}

void camelTib(void) {
#if defined (__DEBUG__)
	printf("camelTib\n");
#endif
}

void camelTibSize(void) {
#if defined (__DEBUG__)
	printf("camelTibSize\n");
#endif
}

void camelZero(void) {
#if defined (__DEBUG__)
	printf("camelZero\n");
#endif
}

void camelOne(void) {
#if defined (__DEBUG__)
	printf("camelOne\n");
#endif
}

void camelTwo(void) {
#if defined (__DEBUG__)
	printf("camelTwo\n");
#endif
}

void camelThree(void) {
#if defined (__DEBUG__)
	printf("camelThree\n");
#endif
}

void camelMinusOne(void) {
#if defined (__DEBUG__)
	printf("camelMinusOne\n");
#endif
}

void camelCell(void) {
#if defined (__DEBUG__)
	printf("camelCell\n");
#endif
}

void camelHere(void) {
#if defined (__DEBUG__)
	printf("camelHere\n");
#endif
}

void camelAllot(void) {
#if defined (__DEBUG__)
	printf("camelAllot\n");
#endif
}

void camelComma(void) {
#if defined (__DEBUG__)
	printf("camelComma\n");
#endif
}

void camelCComma(void) {
#if defined (__DEBUG__)
	printf("camelCComma\n");
#endif
}

void camelAligned(void) {
#if defined (__DEBUG__)
	printf("camelAligned\n");
#endif
}

void camelAlign(void) {
#if defined (__DEBUG__)
	printf("camelAlign\n");
#endif
}

void camelCellPlus(void) {
#if defined (__DEBUG__)
	printf("camelCellPlus\n");
#endif
}

void camelCharPlus(void) {
#if defined (__DEBUG__)
	printf("camelCharPlus\n");
#endif
}

void camelToBody(void) {
#if defined (__DEBUG__)
	printf("camelToBody\n");
#endif
}

void camelCommaXt(void) {
#if defined (__DEBUG__)
	printf("camelCommaXt\n");
#endif
}

void camelStoreCF(void) {
#if defined (__DEBUG__)
	printf("camelStoreCF\n");
#endif
}

void camelCommaCF(void) {
#if defined (__DEBUG__)
	printf("camelCommaCF\n");
#endif
}

void camelStoreColon(void) {
#if defined (__DEBUG__)
	printf("camelStoreColon\n");
#endif
}

void camelCommaExit(void) {
#if defined (__DEBUG__)
	printf("camelCommaExit\n");
#endif
}

void camelCommaBranch(void) {
#if defined (__DEBUG__)
	printf("camelCommaBranch\n");
#endif
}

void camelCommaDest(void) {
#if defined (__DEBUG__)
	printf("camelCommaDest\n");
#endif
}

void camelStoreDest(void) {
#if defined (__DEBUG__)
	printf("camelStoreDest\n");
#endif
}

void camelCommaNone(void) {
#if defined (__DEBUG__)
	printf("camelCommaNone\n");
#endif
}

void camelTwoFetch(void) {
#if defined (__DEBUG__)
	printf("camelTwoFetch\n");
#endif
}

void camelTwoStore(void) {
#if defined (__DEBUG__)
	printf("camelTwoStore\n");
#endif
}

void camelTwoDrop(void) {
#if defined (__DEBUG__)
	printf("camelTwoDrop\n");
#endif
}

void camelTwoDup(void) {
#if defined (__DEBUG__)
	printf("camelTwoDup\n");
#endif
}

void camelTwoSwap(void) {
#if defined (__DEBUG__)
	printf("camelTwoSwap\n");
#endif
}

void camelTwoOver(void) {
#if defined (__DEBUG__)
	printf("camelTwoOver\n");
#endif
}

void camelSToD(void) {
#if defined (__DEBUG__)
	printf("camelSToD\n");
#endif
}

void camelAbs(void) {
#if defined (__DEBUG__)
	printf("camelAbs\n");
#endif
}

void camelDNegate(void) {
#if defined (__DEBUG__)
	printf("camelDNegate\n");
#endif
}

void camelQDNegate(void) {
#if defined (__DEBUG__)
	printf("camelQDNegate\n");
#endif
}

void camelDAbs(void) {
#if defined (__DEBUG__)
	printf("camelDAbs\n");
#endif
}

void camelMStar(void) {
#if defined (__DEBUG__)
	printf("camelMStar\n");
#endif
}

void camelSMSlashREM(void) {
#if defined (__DEBUG__)
	printf("camelSMSlashREM\n");
#endif
}

void camelFMSlashMod(void) {
#if defined (__DEBUG__)
	printf("camelFMSlashMod\n");
#endif
}

void camelSlashMod(void) {
#if defined (__DEBUG__)
	printf("camelSlashMod\n");
#endif
}

void camelMod(void) {
#if defined (__DEBUG__)
	printf("camelMod\n");
#endif
}

void camelStarSlashMod(void) {
#if defined (__DEBUG__)
	printf("camelStarSlashMod\n");
#endif
}

void camelStarSlash(void) {
#if defined (__DEBUG__)
	printf("camelStarSlash\n");
#endif
}

void camelMax(void) {
#if defined (__DEBUG__)
	printf("camelMax\n");
#endif
}

void camelMin(void) {
#if defined (__DEBUG__)
	printf("camelMin\n");
#endif
}

void camelUMax(void) {
#if defined (__DEBUG__)
	printf("camelUMax\n");
#endif
}

void camelUMin(void) {
#if defined (__DEBUG__)
	printf("camelUMin\n");
#endif
}

void camelCells(void) {
#if defined (__DEBUG__)
	printf("camelCells\n");
#endif
}

void camelCount(void) {
#if defined (__DEBUG__)
	printf("camelCount\n");
#endif
}

void camelCR(void) {
#if defined (__DEBUG__)
	printf("camelCR\n");
#endif
}

void camelSpace(void) {
#if defined (__DEBUG__)
	printf("camelSpace\n");
#endif
}

void camelSpaces(void) {
#if defined (__DEBUG__)
	printf("camelSpaces\n");
#endif
}

void camelAccept(void) {
#if defined (__DEBUG__)
	printf("camelAccept\n");
#endif
}

void camelType(void) {
#if defined (__DEBUG__)
	printf("camelType\n");
#endif
}

void camelUDSlashMod(void) {
#if defined (__DEBUG__)
	printf("camelUDSlashMod\n");
#endif
}

void camelUDStar(void) {
#if defined (__DEBUG__)
	printf("camelUDStar\n");
#endif
}

void camelHold(void) {
#if defined (__DEBUG__)
	printf("camelHold\n");
#endif
}

void camelLessNum(void) {
#if defined (__DEBUG__)
	printf("camelLessNum\n");
#endif
}

void camelToDigit(void) {
#if defined (__DEBUG__)
	printf("camelToDigit\n");
#endif
}

void camelNum(void) {
#if defined (__DEBUG__)
	printf("camelNum\n");
#endif
}

void camelNums(void) {
#if defined (__DEBUG__)
	printf("camelNums\n");
#endif
}

void camelNumGreater(void) {
#if defined (__DEBUG__)
	printf("camelNumGreater\n");
#endif
}

void camelSign(void) {
#if defined (__DEBUG__)
	printf("camelSign\n");
#endif
}

void camelUDot(void) {
#if defined (__DEBUG__)
	printf("camelUDot\n");
#endif
}

void camelDot(void) {
#if defined (__DEBUG__)
	printf("camelDot\n");
#endif
}

void camelDecimal(void) {
#if defined (__DEBUG__)
	printf("camelDecimal\n");
#endif
}

void camelHex(void) {
#if defined (__DEBUG__)
	printf("camelHex\n");
#endif
}

void camelSource(void) {
#if defined (__DEBUG__)
	printf("camelSource\n");
#endif
}

void camelSlashString(void) {
#if defined (__DEBUG__)
	printf("camelSlashString\n");
#endif
}

void camelToCounted(void) {
#if defined (__DEBUG__)
	printf("camelToCounted\n");
#endif
}

void camelAdrToIN(void) {
#if defined (__DEBUG__)
	printf("camelAdrToIN\n");
#endif
}

void camelParse(void) {
#if defined (__DEBUG__)
	printf("camelParse\n");
#endif
}

void camelWord(void) {
#if defined (__DEBUG__)
	printf("camelWord\n");
#endif
}

void camelZSQuote(void) {
#if defined (__DEBUG__)
	printf("camelZSQuote\n");
#endif
}

void camelSQuote(void) {
#if defined (__DEBUG__)
	printf("camelSQuote\n");
#endif
}

void camelDotQuote(void) {
#if defined (__DEBUG__)
	printf("camelDotQuote\n");
#endif
}

void camelNFAToLFA(void) {
#if defined (__DEBUG__)
	printf("camelNFAToLFA\n");
#endif
}

void camelNFAToCFA(void) {
#if defined (__DEBUG__)
	printf("camelNFAToCFA\n");
#endif
}

void camelImmedQ(void) {
#if defined (__DEBUG__)
	printf("camelImmedQ\n");
#endif
}

void camelFind(void) {
#if defined (__DEBUG__)
	printf("camelFind\n");
#endif
}

void camelLiteral(void) {
#if defined (__DEBUG__)
	printf("camelLiteral\n");
#endif
}

void camelDigitQ(void) {
#if defined (__DEBUG__)
	printf("camelDigitQ\n");
#endif
}

void camelQSign(void) {
#if defined (__DEBUG__)
	printf("camelQSign\n");
#endif
}

void camelToNumber(void) {
#if defined (__DEBUG__)
	printf("camelToNumber\n");
#endif
}

void camelQNumber(void) {
#if defined (__DEBUG__)
	printf("camelQNumber\n");
#endif
}

void camelInterpret(void) {
#if defined (__DEBUG__)
	printf("camelInterpret\n");
#endif
}

void camelEvaluate(void) {
#if defined (__DEBUG__)
	printf("camelEvaluate\n");
#endif
}

void camelQuit(void) {
#if defined (__DEBUG__)
	printf("camelQuit\n");
#endif
}

void camelAbort(void) {
#if defined (__DEBUG__)
	printf("camelAbort\n");
#endif
}

void camelQAbort(void) {
#if defined (__DEBUG__)
	printf("camelQAbort\n");
#endif
}

void camelAbortQuote(void) {
#if defined (__DEBUG__)
	printf("camelAbortQuote\n");
#endif
}

void camelTick(void) {
#if defined (__DEBUG__)
	printf("camelTick\n");
#endif
}

void camelChar(void) {
#if defined (__DEBUG__)
	printf("camelChar\n");
#endif
}

void camelXChar(void) {
#if defined (__DEBUG__)
	printf("camelXChar\n");
#endif
}

void camelParen(void) {
#if defined (__DEBUG__)
	printf("camelParen\n");
#endif
}

void camelHeader(void) {
#if defined (__DEBUG__)
	printf("camelHeader\n");
#endif
}

void camelBuilds(void) {
#if defined (__DEBUG__)
	printf("camelBuilds\n");
#endif
}

void camelVariable(void) {
#if defined (__DEBUG__)
	printf("camelVariable\n");
#endif
}

void camelConstant(void) {
#if defined (__DEBUG__)
	printf("camelConstant\n");
#endif
}

void camelUser(void) {
#if defined (__DEBUG__)
	printf("camelUser\n");
#endif
}

void camelCreate(void) {
#if defined (__DEBUG__)
	printf("camelCreate\n");
#endif
}

void camelZDoes(void) {
#if defined (__DEBUG__)
	printf("camelZDoes\n");
#endif
}

void camelRecurse(void) {
#if defined (__DEBUG__)
	printf("camelRecurse\n");
#endif
}

void camelLeftBracket(void) {
#if defined (__DEBUG__)
	printf("camelLeftBracket\n");
#endif
}

void camelRightBracket(void) {
#if defined (__DEBUG__)
	printf("camelRightBracket\n");
#endif
}

void camelHide(void) {
#if defined (__DEBUG__)
	printf("camelHide\n");
#endif
}

void camelReveal(void) {
#if defined (__DEBUG__)
	printf("camelReveal\n");
#endif
}

void camelImmediate(void) {
#if defined (__DEBUG__)
	printf("camelImmediate\n");
#endif
}

void camelColon(void) {
#if defined (__DEBUG__)
	printf("camelColon\n");
#endif
}

void camelSemicolon(void) {
#if defined (__DEBUG__)
	printf("camelSemicolon\n");
#endif
}

void camelXTick(void) {
#if defined (__DEBUG__)
	printf("camelXTick\n");
#endif
}

void camelPostpone(void) {
#if defined (__DEBUG__)
	printf("camelPostpone\n");
#endif
}

void camelCompile(void) {
#if defined (__DEBUG__)
	printf("camelCompile\n");
#endif
}

void camelIf(void) {
#if defined (__DEBUG__)
	printf("camelIf\n");
#endif
}

void camelThen(void) {
#if defined (__DEBUG__)
	printf("camelThen\n");
#endif
}

void camelElse(void) {
#if defined (__DEBUG__)
	printf("camelElse\n");
#endif
}

void camelBegin(void) {
#if defined (__DEBUG__)
	printf("camelBegin\n");
#endif
}

void camelUntil(void) {
#if defined (__DEBUG__)
	printf("camelUntil\n");
#endif
}

void camelAgain(void) {
#if defined (__DEBUG__)
	printf("camelAgain\n");
#endif
}

void camelWhile(void) {
#if defined (__DEBUG__)
	printf("camelWhile\n");
#endif
}

void camelRepeat(void) {
#if defined (__DEBUG__)
	printf("camelRepeat\n");
#endif
}

void camelToL(void) {
#if defined (__DEBUG__)
	printf("camelToL\n");
#endif
}

void camelLFrom(void) {
#if defined (__DEBUG__)
	printf("camelLFrom\n");
#endif
}

void camelDo(void) {
#if defined (__DEBUG__)
	printf("camelDo\n");
#endif
}

void camelEndLoop(void) {
#if defined (__DEBUG__)
	printf("camelEndLoop\n");
#endif
}

void camelLoop(void) {
#if defined (__DEBUG__)
	printf("camelLoop\n");
#endif
}

void camelPlusLoop(void) {
#if defined (__DEBUG__)
	printf("camelPlusLoop\n");
#endif
}

void camelLeave(void) {
#if defined (__DEBUG__)
	printf("camelLeave\n");
#endif
}

void camelWithin(void) {
#if defined (__DEBUG__)
	printf("camelWithin\n");
#endif
}

void camelMove(void) {
#if defined (__DEBUG__)
	printf("camelMove\n");
#endif
}

void camelDepth(void) {
#if defined (__DEBUG__)
	printf("camelDepth\n");
#endif
}

void camelEnvironmentQ(void) {
#if defined (__DEBUG__)
	printf("camelEnvironmentQ\n");
#endif
}

void camelMarker(void) {
#if defined (__DEBUG__)
	printf("camelMarker\n");
#endif
}

#endif
