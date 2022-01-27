#ifndef H2ORSC2
#define H2ORSC2

/* The "RSC-FORTH" ( figFORTH ) FORTH */

/* Primitives */

void rscNum(void) {
#if defined (__DEBUG__)
	printf("rscNum\n");
#endif
}

void rscTask(void) {
#if defined (__DEBUG__)
	printf("rscTask\n");
#endif
}

void rscAdmp(void) {
#if defined (__DEBUG__)
	printf("rscAdmp\n");
#endif
}

void rscSemicolonDump(void) {
#if defined (__DEBUG__)
	printf("rscSemicolonDump\n");
#endif
}

void rscFormat(void) {
#if defined (__DEBUG__)
	printf("rscFormat\n");
#endif
}

void rscFmTrk(void) {
#if defined (__DEBUG__)
	printf("rscFmTrk\n");
#endif
}

void rscBankExecute(void) {
#if defined (__DEBUG__)
	printf("rscBankExecute\n");
#endif
}

void rscBankEecStore(void) {
#if defined (__DEBUG__)
	printf("rscBankEecStore\n");
#endif
}

void rscBankCFetch(void) {
#if defined (__DEBUG__)
	printf("rscBankCFetch\n");
#endif
}

void rscBankCStore(void) {
#if defined (__DEBUG__)
	printf("rscBankCStore\n");
#endif
}

void rscEecStore(void) {
#if defined (__DEBUG__)
	printf("rscEecStore\n");
#endif
}

void rscCaseColon(void) {
#if defined (__DEBUG__)
	printf("rscCaseColon\n");
#endif
}

void rscMemTop(void) {
#if defined (__DEBUG__)
	printf("rscMemTop\n");
#endif
}

void rscScdr(void) {
#if defined (__DEBUG__)
	printf("rscScdr\n");
#endif
}

void rscScsr(void) {
#if defined (__DEBUG__)
	printf("rscScsr\n");
#endif
}

void rscSccr(void) {
#if defined (__DEBUG__)
	printf("rscSccr\n");
#endif
}

void rscMcr(void) {
#if defined (__DEBUG__)
	printf("rscMcr\n");
#endif
}

void rscIer(void) {
#if defined (__DEBUG__)
	printf("rscIer\n");
#endif
}

void rscIfr(void) {
#if defined (__DEBUG__)
	printf("rscIfr\n");
#endif
}

void rscPg(void) {
#if defined (__DEBUG__)
	printf("rscPg\n");
#endif
}

void rscPf(void) {
#if defined (__DEBUG__)
	printf("rscPf\n");
#endif
}

void rscPe(void) {
#if defined (__DEBUG__)
	printf("rscPe\n");
#endif
}

void rscPd(void) {
#if defined (__DEBUG__)
	printf("rscPd\n");
#endif
}

void rscPc(void) {
#if defined (__DEBUG__)
	printf("rscPc\n");
#endif
}

void rscPb(void) {
#if defined (__DEBUG__)
	printf("rscPb\n");
#endif
}

void rscPa(void) {
#if defined (__DEBUG__)
	printf("rscPa\n");
#endif
}

void rscNmiVec(void) {
#if defined (__DEBUG__)
	printf("rscNmiVec\n");
#endif
}

void rscIrqVec(void) {
#if defined (__DEBUG__)
	printf("rscIrqVec\n");
#endif
}

void rscIntVec(void) {
#if defined (__DEBUG__)
	printf("rscIntVec\n");
#endif
}

void rscIntFlg(void) {
#if defined (__DEBUG__)
	printf("rscIntFlg\n");
#endif
}

void rscCCommaCon(void) {
#if defined (__DEBUG__)
	printf("rscCCommaCon\n");
#endif
}

void rscDotS(void) {
#if defined (__DEBUG__)
	printf("rscDotS\n");
#endif
}

void rscMon(void) {
#if defined (__DEBUG__)
	printf("rscMon\n");
#endif
}

void rscVlist(void) {
#if defined (__DEBUG__)
	printf("rscVlist\n");
#endif
}

void rscIndex(void) {
#if defined (__DEBUG__)
	printf("rscIndex\n");
#endif
}

void rscList(void) {
#if defined (__DEBUG__)
	printf("rscList\n");
#endif
}

void rscQ(void) {
#if defined (__DEBUG__)
	printf("rscQ\n");
#endif
}

void rscDot(void) {
#if defined (__DEBUG__)
	printf("rscDot\n");
#endif
}

void rscDotR(void) {
#if defined (__DEBUG__)
	printf("rscDotR\n");
#endif
}

void rscDDot(void) {
#if defined (__DEBUG__)
	printf("rscDDot\n");
#endif
}

void rscDDotR(void) {
#if defined (__DEBUG__)
	printf("rscDDotR\n");
#endif
}

void rscNumS(void) {
#if defined (__DEBUG__)
	printf("rscNumS\n");
#endif
}

void rscSign(void) {
#if defined (__DEBUG__)
	printf("rscSign\n");
#endif
}

void rscNumGreater(void) {
#if defined (__DEBUG__)
	printf("rscNumGreater\n");
#endif
}

void rscLessNum(void) {
#if defined (__DEBUG__)
	printf("rscLessNum\n");
#endif
}

void rscSpaces(void) {
#if defined (__DEBUG__)
	printf("rscSpaces\n");
#endif
}

void rscWhile(void) {
#if defined (__DEBUG__)
	printf("rscWhile\n");
#endif
}

void rscElse(void) {
#if defined (__DEBUG__)
	printf("rscElse\n");
#endif
}

void rscIf(void) {
#if defined (__DEBUG__)
	printf("rscIf\n");
#endif
}

void rscRepeat(void) {
#if defined (__DEBUG__)
	printf("rscRepeat\n");
#endif
}

void rscAgain(void) {
#if defined (__DEBUG__)
	printf("rscAgain\n");
#endif
}

void rscEnd(void) {
#if defined (__DEBUG__)
	printf("rscEnd\n");
#endif
}

void rscUntil(void) {
#if defined (__DEBUG__)
	printf("rscUntil\n");
#endif
}

void rscPlusLoop(void) {
#if defined (__DEBUG__)
	printf("rscPlusLoop\n");
#endif
}

void rscLoop(void) {
#if defined (__DEBUG__)
	printf("rscLoop\n");
#endif
}

void rscDo(void) {
#if defined (__DEBUG__)
	printf("rscDo\n");
#endif
}

void rscThen(void) {
#if defined (__DEBUG__)
	printf("rscThen\n");
#endif
}

void rscEndIf(void) {
#if defined (__DEBUG__)
	printf("rscEndIf\n");
#endif
}

void rscBegin(void) {
#if defined (__DEBUG__)
	printf("rscBegin\n");
#endif
}

void rscForget(void) {
#if defined (__DEBUG__)
	printf("rscForget\n");
#endif
}

void rscAutostart(void) {
#if defined (__DEBUG__)
	printf("rscAutostart\n");
#endif
}

void rscQKernel(void) {
#if defined (__DEBUG__)
	printf("rscQKernel\n");
#endif
}

void rscHWord(void) {
#if defined (__DEBUG__)
	printf("rscHWord\n");
#endif
}

void rscHSlashC(void) {
#if defined (__DEBUG__)
	printf("rscHSlashC\n");
#endif
}

void rscTick(void) {
#if defined (__DEBUG__)
	printf("rscTick\n");
#endif
}

void rscSeek(void) {
#if defined (__DEBUG__)
	printf("rscSeek\n");
#endif
}

void rscInit(void) {
#if defined (__DEBUG__)
	printf("rscInit\n");
#endif
}

void rscDWrite(void) {
#if defined (__DEBUG__)
	printf("rscDWrite\n");
#endif
}

void rscDRead(void) {
#if defined (__DEBUG__)
	printf("rscDRead\n");
#endif
}

void rscSelect(void) {
#if defined (__DEBUG__)
	printf("rscSelect\n");
#endif
}

void rscDisk(void) {
#if defined (__DEBUG__)
	printf("rscDisk\n");
#endif
}

void rscRSlashW(void) {
#if defined (__DEBUG__)
	printf("rscRSlashW\n");
#endif
}

void rscBSlashScr(void) {
#if defined (__DEBUG__)
	printf("rscBSlashScr\n");
#endif
}

void rscBSlashBuf(void) {
#if defined (__DEBUG__)
	printf("rscBSlashBuf\n");
#endif
}

void rscMinusBCD(void) {
#if defined (__DEBUG__)
	printf("rscMinusBCD\n");
#endif
}

void rscTo(void) {
#if defined (__DEBUG__)
	printf("rscTo\n");
#endif
}

void rscLoad(void) {
#if defined (__DEBUG__)
	printf("rscLoad\n");
#endif
}

void rscMessage(void) {
#if defined (__DEBUG__)
	printf("rscMessage\n");
#endif
}

void rscToLine(void) {
#if defined (__DEBUG__)
	printf("rscToLine\n");
#endif
}

void rscDotLine(void) {
#if defined (__DEBUG__)
	printf("rscDotLine\n");
#endif
}

void rscYLine(void) {
#if defined (__DEBUG__)
	printf("rscYLine\n");
#endif
}

void rscDump(void) {
#if defined (__DEBUG__)
	printf("rscDump\n");
#endif
}

void rscFlush(void) {
#if defined (__DEBUG__)
	printf("rscFlush\n");
#endif
}

void rscBlock(void) {
#if defined (__DEBUG__)
	printf("rscBlock\n");
#endif
}

void rscBuffer(void) {
#if defined (__DEBUG__)
	printf("rscBuffer\n");
#endif
}

void rscEmptyBuffers(void) {
#if defined (__DEBUG__)
	printf("rscEmptyBuffers\n");
#endif
}

void rscUpdate(void) {
#if defined (__DEBUG__)
	printf("rscUpdate\n");
#endif
}

void rscPlusBuf(void) {
#if defined (__DEBUG__)
	printf("rscPlusBuf\n");
#endif
}

void rscMSlashMod(void) {
#if defined (__DEBUG__)
	printf("rscMSlashMod\n");
#endif
}

void rscStarSlash(void) {
#if defined (__DEBUG__)
	printf("rscStarSlash\n");
#endif
}

void rscStarSlashMod(void) {
#if defined (__DEBUG__)
	printf("rscStarSlashMod\n");
#endif
}

void rscMod(void) {
#if defined (__DEBUG__)
	printf("rscMod\n");
#endif
}

void rscSlash(void) {
#if defined (__DEBUG__)
	printf("rscSlash\n");
#endif
}

void rscSlashMod(void) {
#if defined (__DEBUG__)
	printf("rscSlashMod\n");
#endif
}

void rscStar(void) {
#if defined (__DEBUG__)
	printf("rscStar\n");
#endif
}

void rscMSlash(void) {
#if defined (__DEBUG__)
	printf("rscMSlash\n");
#endif
}

void rscMStar(void) {
#if defined (__DEBUG__)
	printf("rscMStar\n");
#endif
}

void rscMax(void) {
#if defined (__DEBUG__)
	printf("rscMax\n");
#endif
}

void rscMin(void) {
#if defined (__DEBUG__)
	printf("rscMin\n");
#endif
}

void rscDAbs(void) {
#if defined (__DEBUG__)
	printf("rscDAbs\n");
#endif
}

void rscAbs(void) {
#if defined (__DEBUG__)
	printf("rscAbs\n");
#endif
}

void rscDPlusMinus(void) {
#if defined (__DEBUG__)
	printf("rscAbsrscDPlusMinus\n");
#endif
}

void rscPlusMinus(void) {
#if defined (__DEBUG__)
	printf("rscPlusMinus\n");
#endif
}

void rscSToD(void) {
#if defined (__DEBUG__)
	printf("rscSToD\n");
#endif
}

void rscCold(void) {
#if defined (__DEBUG__)
	printf("rscCold\n");
#endif
}

void rscAbort(void) {
#if defined (__DEBUG__)
	printf("rscAbort\n");
#endif
}

void rscQuit(void) {
#if defined (__DEBUG__)
	printf("rscQuit\n");
#endif
}

void rscParen(void) {
#if defined (__DEBUG__)
	printf("rscParen\n");
#endif
}

void rscDefinitions(void) {
#if defined (__DEBUG__)
	printf("rscDefinitions\n");
#endif
}

void rscAssembler(void) {
#if defined (__DEBUG__)
	printf("rscAssembler\n");
#endif
}

void rscForth(void) {
#if defined (__DEBUG__)
	printf("rscForth\n");
#endif
}

void rscVocabulary(void) {
#if defined (__DEBUG__)
	printf("rscVocabulary\n");
#endif
}

void rscImmediate(void) {
#if defined (__DEBUG__)
	printf("rscImmediate\n");
#endif
}

void rscInterpret(void) {
#if defined (__DEBUG__)
	printf("rscInterpret\n");
#endif
}

void rscQStack(void) {
#if defined (__DEBUG__)
	printf("rscQStack\n");
#endif
}

void rscDLiteral(void) {
#if defined (__DEBUG__)
	printf("rscDLiteral\n");
#endif
}

void rscLiteral(void) {
#if defined (__DEBUG__)
	printf("rscLiteral\n");
#endif
}

void rscXCompile(void) {
#if defined (__DEBUG__)
	printf("rscXCompile\n");
#endif
}

void rscCreate(void) {
#if defined (__DEBUG__)
	printf("rscCreate\n");
#endif
}

void rscIDDot(void) {
#if defined (__DEBUG__)
	printf("rscIDDot\n");
#endif
}

void rscError(void) {
#if defined (__DEBUG__)
	printf("rscError\n");
#endif
}

void rscYAbort(void) {
#if defined (__DEBUG__)
	printf("rscYAbort\n");
#endif
}

void rscFind(void) {
#if defined (__DEBUG__)
	printf("rscFind\n");
#endif
}

void rscNumber(void) {
#if defined (__DEBUG__)
	printf("rscNumber\n");
#endif
}

void rscYNumber(void) {
#if defined (__DEBUG__)
	printf("rscYNumber\n");
#endif
}

void rscWord(void) {
#if defined (__DEBUG__)
	printf("rscWord\n");
#endif
}

void rscHold(void) {
#if defined (__DEBUG__)
	printf("rscHold\n");
#endif
}

void rscBlanks(void) {
#if defined (__DEBUG__)
	printf("rscBlanks\n");
#endif
}

void rscErase(void) {
#if defined (__DEBUG__)
	printf("rscErase\n");
#endif
}

void rscFill(void) {
#if defined (__DEBUG__)
	printf("rscFill\n");
#endif
}

void rscEmptySpace(void) {
#if defined (__DEBUG__)
	printf("rscEmptySpace\n");
#endif
}

void rscQuery(void) {
#if defined (__DEBUG__)
	printf("rscQuery\n");
#endif
}

void rscExpect(void) {
#if defined (__DEBUG__)
	printf("rscExpect\n");
#endif
}

void rscDotQuote(void) {
#if defined (__DEBUG__)
	printf("rscDotQuote\n");
#endif
}

void rscYDotQuote(void) {
#if defined (__DEBUG__)
	printf("rscYDotQuote\n");
#endif
}

void rscTrailing(void) {
#if defined (__DEBUG__)
	printf("rscTrailing\n");
#endif
}

void rscType(void) {
#if defined (__DEBUG__)
	printf("rscType\n");
#endif
}

void rscCount(void) {
#if defined (__DEBUG__)
	printf("rscCount\n");
#endif
}

void rscDoes(void) {
#if defined (__DEBUG__)
	printf("rscDoes\n");
#endif
}

void rscBuilds(void) {
#if defined (__DEBUG__)
	printf("rscBuilds\n");
#endif
}

void rscSemicolonCode(void) {
#if defined (__DEBUG__)
	printf("rscSemicolonCode\n");
#endif
}

void rscYSemicolonCode(void) {
#if defined (__DEBUG__)
	printf("rscYSemicolonCode\n");
#endif
}

void rscDecimal(void) {
#if defined (__DEBUG__)
	printf("rscDecimal\n");
#endif
}

void rscHex(void) {
#if defined (__DEBUG__)
	printf("rscHex\n");
#endif
}

void rscSmudge(void) {
#if defined (__DEBUG__)
	printf("rscSmudge\n");
#endif
}

void rscRightBracket(void) {
#if defined (__DEBUG__)
	printf("rscRightBracket\n");
#endif
}

void rscLeftBracket(void) {
#if defined (__DEBUG__)
	printf("rscLeftBracket\n");
#endif
}

void rscCompile(void) {
#if defined (__DEBUG__)
	printf("rscCompile\n");
#endif
}

void rscQCsp(void) {
#if defined (__DEBUG__)
	printf("rscQCsp\n");
#endif
}

void rscQPairs(void) {
#if defined (__DEBUG__)
	printf("rscQPairs\n");
#endif
}

void rscQExec(void) {
#if defined (__DEBUG__)
	printf("rscQExec\n");
#endif
}

void rscQComp(void) {
#if defined (__DEBUG__)
	printf("rscQComp\n");
#endif
}

void rscQError(void) {
#if defined (__DEBUG__)
	printf("rscQError\n");
#endif
}

void rscStoreCsp(void) {
#if defined (__DEBUG__)
	printf("rscStoreCsp\n");
#endif
}

void rscPfaptr(void) {
#if defined (__DEBUG__)
	printf("rscPfaptr\n");
#endif
}

void rscNfa(void) {
#if defined (__DEBUG__)
	printf("rscNfa\n");
#endif
}

void rscCfa(void) {
#if defined (__DEBUG__)
	printf("rscCfa\n");
#endif
}

void rscLfa(void) {
#if defined (__DEBUG__)
	printf("rscLfa\n");
#endif
}

void rscLatest(void) {
#if defined (__DEBUG__)
	printf("rscLatest\n");
#endif
}

void rscTraverse(void) {
#if defined (__DEBUG__)
	printf("rscTraverse\n");
#endif
}

void rscMinusDup(void) {
#if defined (__DEBUG__)
	printf("rscMinusDup\n");
#endif
}

void rscSpace(void) {
#if defined (__DEBUG__)
	printf("rscSpace\n");
#endif
}

void rscPick(void) {
#if defined (__DEBUG__)
	printf("rscPick\n");
#endif
}

void rscRot(void) {
#if defined (__DEBUG__)
	printf("rscRot\n");
#endif
}

void rscGreater(void) {
#if defined (__DEBUG__)
	printf("rscGreater\n");
#endif
}

void rscLess(void) {
#if defined (__DEBUG__)
	printf("rscLess\n");
#endif
}

void rscULess(void) {
#if defined (__DEBUG__)
	printf("rscULess\n");
#endif
}

void rscEqual(void) {
#if defined (__DEBUG__)
	printf("rscEqual\n");
#endif
}

void rscMinus(void) {
#if defined (__DEBUG__)
	printf("rscMinus\n");
#endif
}

void rscCComma(void) {
#if defined (__DEBUG__)
	printf("rscCComma\n");
#endif
}

void rscComma(void) {
#if defined (__DEBUG__)
	printf("rscComma\n");
#endif
}

void rscAllot(void) {
#if defined (__DEBUG__)
	printf("rscAllot\n");
#endif
}

void rscHere(void) {
#if defined (__DEBUG__)
	printf("rscHere\n");
#endif
}

void rscCommaSlash(void) {
#if defined (__DEBUG__)
	printf("rscCommaSlash\n");
#endif
}

void rscAllotSlash(void) {
#if defined (__DEBUG__)
	printf("rscAllotSlash\n");
#endif
}

void rscHereSlash(void) {
#if defined (__DEBUG__)
	printf("rscHereSlash\n");
#endif
}

void rscDPSlash(void) {
#if defined (__DEBUG__)
	printf("rscDPSlash\n");
#endif
}

void rscTwoMinus(void) {
#if defined (__DEBUG__)
	printf("rscTwoMinus\n");
#endif
}

void rscOneMinus(void) {
#if defined (__DEBUG__)
	printf("rscOneMinus\n");
#endif
}

void rscTwoPlus(void) {
#if defined (__DEBUG__)
	printf("rscTwoPlus\n");
#endif
}

void rscOnePlus(void) {
#if defined (__DEBUG__)
	printf("rscOnePlus\n");
#endif
}

void rscPad(void) {
#if defined (__DEBUG__)
	printf("rscPad\n");
#endif
}

void rscLimit(void) {
#if defined (__DEBUG__)
	printf("rscLimit\n");
#endif
}

void rscFirst(void) {
#if defined (__DEBUG__)
	printf("rscFirst\n");
#endif
}

void rscCSlashL(void) {
#if defined (__DEBUG__)
	printf("rscCSlashL\n");
#endif
}

void rscKhz(void) {
#if defined (__DEBUG__)
	printf("rscKhz\n");
#endif
}

void rscMode(void) {
#if defined (__DEBUG__)
	printf("rscMode\n");
#endif
}

void rscCsp(void) {
#if defined (__DEBUG__)
	printf("rscCsp\n");
#endif
}

void rscState(void) {
#if defined (__DEBUG__)
	printf("rscState\n");
#endif
}

void rscCurrent(void) {
#if defined (__DEBUG__)
	printf("rscCurrent\n");
#endif
}

void rscContext(void) {
#if defined (__DEBUG__)
	printf("rscContext\n");
#endif
}

void rscScr(void) {
#if defined (__DEBUG__)
	printf("rscScr\n");
#endif
}

void rscBlk(void) {
#if defined (__DEBUG__)
	printf("rscBlk\n");
#endif
}

void rscPrev(void) {
#if defined (__DEBUG__)
	printf("rscPrev\n");
#endif
}

void rscUse(void) {
#if defined (__DEBUG__)
	printf("rscUse\n");
#endif
}

void rscUAbort(void) {
#if defined (__DEBUG__)
	printf("rscUAbort\n");
#endif
}

void rscVocLink(void) {
#if defined (__DEBUG__)
	printf("rscVocLink\n");
#endif
}

void rscHeaderless(void) {
#if defined (__DEBUG__)
	printf("rscHeaderless\n");
#endif
}

void rscDP(void) {
#if defined (__DEBUG__)
	printf("rscDP\n");
#endif
}

void rscFence(void) {
#if defined (__DEBUG__)
	printf("rscFence\n");
#endif
}

void rscWarning(void) {
#if defined (__DEBUG__)
	printf("rscWarning\n");
#endif
}

void rscWidth(void) {
#if defined (__DEBUG__)
	printf("rscWidth\n");
#endif
}

void rscOffset(void) {
#if defined (__DEBUG__)
	printf("rscOffset\n");
#endif
}

void rscULimit(void) {
#if defined (__DEBUG__)
	printf("rscULimit\n");
#endif
}

void rscUFirst(void) {
#if defined (__DEBUG__)
	printf("rscUFirst\n");
#endif
}

void rscBSlashSide(void) {
#if defined (__DEBUG__)
	printf("rscBSlashSide\n");
#endif
}

void rscCylinder(void) {
#if defined (__DEBUG__)
	printf("rscCylinder\n");
#endif
}

void rscDiskNo(void) {
#if defined (__DEBUG__)
	printf("rscDiskNo\n");
#endif
}

void rscHld(void) {
#if defined (__DEBUG__)
	printf("rscHld\n");
#endif
}

void rscDpl(void) {
#if defined (__DEBUG__)
	printf("rscDpl\n");
#endif
}

void rscIn(void) {
#if defined (__DEBUG__)
	printf("rscIn\n");
#endif
}

void rscCldSlashWrm(void) {
#if defined (__DEBUG__)
	printf("rscCldSlashWrm\n");
#endif
}

void rscBase(void) {
#if defined (__DEBUG__)
	printf("rscBase\n");
#endif
}

void rscURSlashW(void) {
#if defined (__DEBUG__)
	printf("rscURSlashW\n");
#endif
}

void rscUPad(void) {
#if defined (__DEBUG__)
	printf("rscUPad\n");
#endif
}

void rscUCSlashL(void) {
#if defined (__DEBUG__)
	printf("rscUCSlashL\n");
#endif
}

void rscR0(void) {
#if defined (__DEBUG__)
	printf("rscR0L\n");
#endif
}

void rscS0(void) {
#if defined (__DEBUG__)
	printf("rscS0\n");
#endif
}

void rscTib(void) {
#if defined (__DEBUG__)
	printf("rscTib\n");
#endif
}

void rscBl(void) {
#if defined (__DEBUG__)
	printf("rscBl\n");
#endif
}

void rscFour(void) {
#if defined (__DEBUG__)
	printf("rscFour\n");
#endif
}

void rscThree(void) {
#if defined (__DEBUG__)
	printf("rscThree\n");
#endif
}

void rscTwo(void) {
#if defined (__DEBUG__)
	printf("rscTwo\n");
#endif
}

void rscOne(void) {
#if defined (__DEBUG__)
	printf("rscOne\n");
#endif
}

void rscZero(void) {
#if defined (__DEBUG__)
	printf("rscZero\n");
#endif
}

void rscUser(void) {
#if defined (__DEBUG__)
	printf("rscUser\n");
#endif
}

void rscCode(void) {
#if defined (__DEBUG__)
	printf("rscCode\n");
#endif
}

void rscVariable(void) {
#if defined (__DEBUG__)
	printf("rscVariable\n");
#endif
}

void rscConstant(void) {
#if defined (__DEBUG__)
	printf("rscConstant\n");
#endif
}

void rscSemicolon(void) {
#if defined (__DEBUG__)
	printf("rscSemicolon\n");
#endif
}

void rscColon(void) {
#if defined (__DEBUG__)
	printf("rscColon\n");
#endif
}

void rscCStore(void) {
#if defined (__DEBUG__)
	printf("rscCStore\n");
#endif
}

void rscStore(void) {
#if defined (__DEBUG__)
	printf("rscStore\n");
#endif
}

void rscCFetch(void) {
#if defined (__DEBUG__)
	printf("rscCFetch\n");
#endif
}

void rscFetch(void) {
#if defined (__DEBUG__)
	printf("rscFetch\n");
#endif
}

void rscToggle(void) {
#if defined (__DEBUG__)
	printf("rscToggle\n");
#endif
}

void rscPlusStore(void) {
#if defined (__DEBUG__)
	printf("rscPlusStore\n");
#endif
}

void rscBounds(void) {
#if defined (__DEBUG__)
	printf("rscBounds\n");
#endif
}

void rscTwoDup(void) {
#if defined (__DEBUG__)
	printf("rscTwoDup\n");
#endif
}

void rscDup(void) {
#if defined (__DEBUG__)
	printf("rscDup\n");
#endif
}

void rscSwap(void) {
#if defined (__DEBUG__)
	printf("rscSwap\n");
#endif
}

void rscTwoDrop(void) {
#if defined (__DEBUG__)
	printf("rscTwoDrop\n");
#endif
}

void rscDrop(void) {
#if defined (__DEBUG__)
	printf("rscDrop\n");
#endif
}

void rscOver(void) {
#if defined (__DEBUG__)
	printf("rscOver\n");
#endif
}

void rscDNegate(void) {
#if defined (__DEBUG__)
	printf("rscDNegate\n");
#endif
}

void rscNegate(void) {
#if defined (__DEBUG__)
	printf("rscNegate\n");
#endif
}

void rscDPlus(void) {
#if defined (__DEBUG__)
	printf("rscDPlus\n");
#endif
}

void rscPlus(void) {
#if defined (__DEBUG__)
	printf("rscPlus\n");
#endif
}

void rscZeroLess(void) {
#if defined (__DEBUG__)
	printf("rscZeroLess\n");
#endif
}

void rscNot(void) {
#if defined (__DEBUG__)
	printf("rscNot\n");
#endif
}

void rscZeroEqual(void) {
#if defined (__DEBUG__)
	printf("rscZeroEqual\n");
#endif
}

void rscR(void) {
#if defined (__DEBUG__)
	printf("rscR\n");
#endif
}

void rscRFrom(void) {
#if defined (__DEBUG__)
	printf("rscRFrom\n");
#endif
}

void rscToR(void) {
#if defined (__DEBUG__)
	printf("rscToR\n");
#endif
}

void rscLeave(void) {
#if defined (__DEBUG__)
	printf("rscLeave\n");
#endif
}

void rscSemicolonS(void) {
#if defined (__DEBUG__)
	printf("rscSemicolonS\n");
#endif
}

void rscRPFetch(void) {
#if defined (__DEBUG__)
	printf("rscRPFetch\n");
#endif
}

void rscRPStore(void) {
#if defined (__DEBUG__)
	printf("rscRPStore\n");
#endif
}

void rscSPStore(void) {
#if defined (__DEBUG__)
	printf("rscSPStore\n");
#endif
}

void rscSPFetch(void) {
#if defined (__DEBUG__)
	printf("rscSPFetch\n");
#endif
}

void rscXor(void) {
#if defined (__DEBUG__)
	printf("rscXor\n");
#endif
}

void rscOr(void) {
#if defined (__DEBUG__)
	printf("rscOr\n");
#endif
}

void rscAnd(void) {
#if defined (__DEBUG__)
	printf("rscAnd\n");
#endif
}

void rscUSlash(void) {
#if defined (__DEBUG__)
	printf("rscUSlash\n");
#endif
}

void rscUStar(void) {
#if defined (__DEBUG__)
	printf("rscUStar\n");
#endif
}

void rscCMove(void) {
#if defined (__DEBUG__)
	printf("rscCMove\n");
#endif
}

void rscFinis(void) {
#if defined (__DEBUG__)
	printf("rscFinis\n");
#endif
}

void rscSource(void) {
#if defined (__DEBUG__)
	printf("rscSource\n");
#endif
}

void rscXOff(void) {
#if defined (__DEBUG__)
	printf("rscXOff\n");
#endif
}

void rscXon(void) {
#if defined (__DEBUG__)
	printf("rscXon\n");
#endif
}

void rscCr(void) {
#if defined (__DEBUG__)
	printf("rscCr\n");
#endif
}

void rscQTerminal(void) {
#if defined (__DEBUG__)
	printf("rscQTerminal\n");
#endif
}

void rscKey(void) {
#if defined (__DEBUG__)
	printf("rscKey\n");
#endif
}

void rscEmit(void) {
#if defined (__DEBUG__)
	printf("rscEmit\n");
#endif
}

void rscEnclose(void) {
#if defined (__DEBUG__)
	printf("rscEnclose\n");
#endif
}

void rscYFind(void) {
#if defined (__DEBUG__)
	printf("rscYFind\n");
#endif
}

void rscDigit(void) {
#if defined (__DEBUG__)
	printf("rscDigit\n");
#endif
}

void rscI(void) {
#if defined (__DEBUG__)
	printf("rscI\n");
#endif
}

void rscYDo(void) {
#if defined (__DEBUG__)
	printf("rscYDo\n");
#endif
}

void rscYPlusLoop(void) {
#if defined (__DEBUG__)
	printf("rscYPlusLoop\n");
#endif
}

void rscYLoop(void) {
#if defined (__DEBUG__)
	printf("rscYLoop\n");
#endif
}

void rscZeroBranch(void) {
#if defined (__DEBUG__)
	printf("rscZeroBranch\n");
#endif
}

void rscBranch(void) {
#if defined (__DEBUG__)
	printf("rscBranch\n");
#endif
}

void rscExecute(void) {
#if defined (__DEBUG__)
	printf("rscExecute\n");
#endif
}

void rscClit(void) {
#if defined (__DEBUG__)
	printf("rscClit\n");
#endif
}

void rscLit(void) {
#if defined (__DEBUG__)
	printf("rscLit\n");
#endif
}

#endif
