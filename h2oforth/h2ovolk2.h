#ifndef H2OVOLK2
#define H2OVOLK2

/* The "volksFORTH" ( Forth-83 ) FORTH, for C64, ATARI-ST, CP/M, PC */

/* Primitives */

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_C64_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_ST_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_CPM_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_PC_FORTH)
void volkForth83(void) {
#if defined (__DEBUG__)
	printf("volkForth83\n");
#endif
}

void volkBSlashBlk(void) {
#if defined (__DEBUG__)
	printf("volkBSlashBlk\n");
#endif
}

void volkDisplay(void) {
#if defined (__DEBUG__)
	printf("volkDisplay\n");
#endif
}

void volkKeyboard(void) {
#if defined (__DEBUG__)
	printf("volkKeyboard\n");
#endif
}

void volkNumCr(void) {
#if defined (__DEBUG__)
	printf("volkNumCr\n");
#endif
}

void volkNumBs(void) {
#if defined (__DEBUG__)
	printf("volkNumBs\n");
#endif
}

void volkCurOff(void) {
#if defined (__DEBUG__)
	printf("volkCurOff\n");
#endif
}

void volkCurOn(void) {
#if defined (__DEBUG__)
	printf("volkCurOn\n");
#endif
}

void volkRestart(void) {
#if defined (__DEBUG__)
	printf("volkRestart\n");
#endif
}

void volkTickCold(void) {
#if defined (__DEBUG__)
	printf("volkTickCold\n");
#endif
}

void volkTickRestart(void) {
#if defined (__DEBUG__)
	printf("volkTickRestart\n");
#endif
}

void volkExpect(void) {
#if defined (__DEBUG__)
	printf("volkExpect\n");
#endif
}

void volkDecode(void) {
#if defined (__DEBUG__)
	printf("volkDecode\n");
#endif
}

void volkKeyQ(void) {
#if defined (__DEBUG__)
	printf("volkKeyQ\n");
#endif
}

void volkKey(void) {
#if defined (__DEBUG__)
	printf("volkKey\n");
#endif
}

void volkInputColon(void) {
#if defined (__DEBUG__)
	printf("volkInputColon\n");
#endif
}

void volkCol(void) {
#if defined (__DEBUG__)
	printf("volkCol\n");
#endif
}

void volkRow(void) {
#if defined (__DEBUG__)
	printf("volkRow\n");
#endif
}

void volkAtQ(void) {
#if defined (__DEBUG__)
	printf("volkAtQ\n");
#endif
}

void volkAt(void) {
#if defined (__DEBUG__)
	printf("volkAt\n");
#endif
}

void volkPage(void) {
#if defined (__DEBUG__)
	printf("volkPage\n");
#endif
}

void volkDel(void) {
#if defined (__DEBUG__)
	printf("volkDel\n");
#endif
}

void volkType(void) {
#if defined (__DEBUG__)
	printf("volkType\n");
#endif
}

void volkCr(void) {
#if defined (__DEBUG__)
	printf("volkCr\n");
#endif
}

void volkEmit(void) {
#if defined (__DEBUG__)
	printf("volkEmit\n");
#endif
}

void volkOutputColon(void) {
#if defined (__DEBUG__)
	printf("volkOutputColon\n");
#endif
}

void volkZForget(void) {
#if defined (__DEBUG__)
	printf("volkZForget\n");
#endif
}

void volkClear(void) {
#if defined (__DEBUG__)
	printf("volkClear\n");
#endif
}

void volkCustomRemove(void) {
#if defined (__DEBUG__)
	printf("volkCustomRemove\n");
#endif
}

void volkAllBuffers(void) {
#if defined (__DEBUG__)
	printf("volkAllBuffers\n");
#endif
}

void volkConvey(void) {
#if defined (__DEBUG__)
	printf("volkConvey\n");
#endif
}

void volkCopy(void) {
#if defined (__DEBUG__)
	printf("volkCopy\n");
#endif
}

void volkUpdate(void) {
#if defined (__DEBUG__)
	printf("volkUpdate\n");
#endif
}

void volkBlock(void) {
#if defined (__DEBUG__)
	printf("volkBlock\n");
#endif
}

void volkBuffer(void) {
#if defined (__DEBUG__)
	printf("volkBuffer\n");
#endif
}

void volkZBlock(void) {
#if defined (__DEBUG__)
	printf("volkZBlock\n");
#endif
}

void volkZBuffer(void) {
#if defined (__DEBUG__)
	printf("volkZBuffer\n");
#endif
}

void volkCoreQ(void) {
#if defined (__DEBUG__)
	printf("volkCoreQ\n");
#endif
}

void volkFile(void) {
#if defined (__DEBUG__)
	printf("volkFile\n");
#endif
}

void volkUnlock(void) {
#if defined (__DEBUG__)
	printf("volkUnlock\n");
#endif
}

void volkLock(void) {
#if defined (__DEBUG__)
	printf("volkLock\n");
#endif
}

void volkPause(void) {
#if defined (__DEBUG__)
	printf("volkPause\n");
#endif
}

void volkList(void) {
#if defined (__DEBUG__)
	printf("volkList\n");
#endif
}

void volkLSlashS(void) {
#if defined (__DEBUG__)
	printf("volkLSlashS\n");
#endif
}

void volkCSlashL(void) {
#if defined (__DEBUG__)
	printf("volkCSlashL\n");
#endif
}

void volkDotS(void) {
#if defined (__DEBUG__)
	printf("volkDotS\n");
#endif
}

void volkUDot(void) {
#if defined (__DEBUG__)
	printf("volkUDot\n");
#endif
}

void volkDot(void) {
#if defined (__DEBUG__)
	printf("volkDot\n");
#endif
}

void volkDColon(void) {
#if defined (__DEBUG__)
	printf("volkDColon\n");
#endif
}

void volkUDotR(void) {
#if defined (__DEBUG__)
	printf("volkUDotR\n");
#endif
}

void volkDotR(void) {
#if defined (__DEBUG__)
	printf("volkDotR\n");
#endif
}

void volkDDotR(void) {
#if defined (__DEBUG__)
	printf("volkDDotR\n");
#endif
}

void volkNumS(void) {
#if defined (__DEBUG__)
	printf("volkNumS\n");
#endif
}

void volkNum(void) {
#if defined (__DEBUG__)
	printf("volkNum\n");
#endif
}

void volkSign(void) {
#if defined (__DEBUG__)
	printf("volkSign\n");
#endif
}

void volkNumGreater(void) {
#if defined (__DEBUG__)
	printf("volkNumGreater\n");
#endif
}

void volkLessNum(void) {
#if defined (__DEBUG__)
	printf("volkLessNum\n");
#endif
}

void volkHold(void) {
#if defined (__DEBUG__)
	printf("volkHold\n");
#endif
}

void volkSpaces(void) {
#if defined (__DEBUG__)
	printf("volkSpaces\n");
#endif
}

void volkSpace(void) {
#if defined (__DEBUG__)
	printf("volkSpace\n");
#endif
}

void volkTrailing(void) {
#if defined (__DEBUG__)
	printf("volkTrailing\n");
#endif
}

void volkBl(void) {
#if defined (__DEBUG__)
	printf("volkBl\n");
#endif
}

void volkErrorQuote(void) {
#if defined (__DEBUG__)
	printf("volkErrorQuote\n");
#endif
}

void volkAbortQuote(void) {
#if defined (__DEBUG__)
	printf("volkAbortQuote\n");
#endif
}

void volkZAbortQuote(void) {
#if defined (__DEBUG__)
	printf("volkZAbortQuote\n");
#endif
}

void volkZError(void) {
#if defined (__DEBUG__)
	printf("volkZError\n");
#endif
}

void volkQuit(void) {
#if defined (__DEBUG__)
	printf("volkQuit\n");
#endif
}

void volkTickQuit(void) {
#if defined (__DEBUG__)
	printf("volkTickQuit\n");
#endif
}

void volkZQuit(void) {
#if defined (__DEBUG__)
	printf("volkZQuit\n");
#endif
}

void volkDepth(void) {
#if defined (__DEBUG__)
	printf("volkDepth\n");
#endif
}

void volkRDepth(void) {
#if defined (__DEBUG__)
	printf("volkRDepth\n");
#endif
}

void volkTo(void) {
#if defined (__DEBUG__)
	printf("volkTo\n");
#endif
}

void volkPlusThru(void) {
#if defined (__DEBUG__)
	printf("volkPlusThru\n");
#endif
}

void volkThru(void) {
#if defined (__DEBUG__)
	printf("volkThru\n");
#endif
}

void volkPlusLoad(void) {
#if defined (__DEBUG__)
	printf("volkPlusLoad\n");
#endif
}

void volkLoad(void) {
#if defined (__DEBUG__)
	printf("volkLoad\n");
#endif
}

void volkPush(void) {
#if defined (__DEBUG__)
	printf("volkPush\n");
#endif
}

void volkDotStatus(void) {
#if defined (__DEBUG__)
	printf("volkDotStatus\n");
#endif
}

void volkQStack(void) {
#if defined (__DEBUG__)
	printf("volkQStack\n");
#endif
}

void volkIs(void) {
#if defined (__DEBUG__)
	printf("volkIs\n");
#endif
}

void volkZIs(void) {
#if defined (__DEBUG__)
	printf("volkZIs\n");
#endif
}

void volkDefer(void) {
#if defined (__DEBUG__)
	printf("volkDefer\n");
#endif
}

void volkRightBracket(void) {
#if defined (__DEBUG__)
	printf("volkRightBracket\n");
#endif
}

void volkLeftBracket(void) {
#if defined (__DEBUG__)
	printf("volkLeftBracket\n");
#endif
}

void volkInterpret(void) {
#if defined (__DEBUG__)
	printf("volkInterpret\n");
#endif
}

void volkNoDotExtensions(void) {
#if defined (__DEBUG__)
	printf("volkNoDotExtensions\n");
#endif
}

void volkNotFound(void) {
#if defined (__DEBUG__)
	printf("volkNotFound\n");
#endif
}

void volkXTick(void) {
#if defined (__DEBUG__)
	printf("volkXTick\n");
#endif
}

void volkXCompile(void) {
#if defined (__DEBUG__)
	printf("volkXCompile\n");
#endif
}

void volkFind(void) {
#if defined (__DEBUG__)
	printf("volkFind\n");
#endif
}

void volkZFind(void) {
#if defined (__DEBUG__)
	printf("volkZFind\n");
#endif
}

void volkWords(void) {
#if defined (__DEBUG__)
	printf("volkWords\n");
#endif
}

void volkOrder(void) {
#if defined (__DEBUG__)
	printf("volkOrder\n");
#endif
}

void volkDefinitions(void) {
#if defined (__DEBUG__)
	printf("volkDefinitions\n");
#endif
}

void volkOnlyForth(void) {
#if defined (__DEBUG__)
	printf("volkOnlyForth\n");
#endif
}

void volkOnly(void) {
#if defined (__DEBUG__)
	printf("volkOnly\n");
#endif
}

void volkForth(void) {
#if defined (__DEBUG__)
	printf("volkForth\n");
#endif
}

void volkVocabulary(void) {
#if defined (__DEBUG__)
	printf("volkVocabulary\n");
#endif
}

void volkToss(void) {
#if defined (__DEBUG__)
	printf("volkToss\n");
#endif
}

void volkAlso(void) {
#if defined (__DEBUG__)
	printf("volkAlso\n");
#endif
}

void volkUAllot(void) {
#if defined (__DEBUG__)
	printf("volkUAllot\n");
#endif
}

void volkVariable(void) {
#if defined (__DEBUG__)
	printf("volkVariable\n");
#endif
}

void volkConstant(void) {
#if defined (__DEBUG__)
	printf("volkConstant\n");
#endif
}

void volkSemicolon(void) {
#if defined (__DEBUG__)
	printf("volkSemicolon\n");
#endif
}

void volkColon(void) {
#if defined (__DEBUG__)
	printf("volkColon\n");
#endif
}

void volkCreateColon(void) {
#if defined (__DEBUG__)
	printf("volkCreateColon\n");
#endif
}

void volkDotName(void) {
#if defined (__DEBUG__)
	printf("volkDotName\n");
#endif
}

void volkToBody(void) {
#if defined (__DEBUG__)
	printf("volkToBody\n");
#endif
}

void volkNameFrom(void) {
#if defined (__DEBUG__)
	printf("volkNameFrom\n");
#endif
}

void volkToName(void) {
#if defined (__DEBUG__)
	printf("volkToName\n");
#endif
}

void volkNFaq(void) {
#if defined (__DEBUG__)
	printf("volkNFaq\n");
#endif
}

void volkCreate(void) {
#if defined (__DEBUG__)
	printf("volkCreate\n");
#endif
}

void volkWarning(void) {
#if defined (__DEBUG__)
	printf("volkWarning\n");
#endif
}

void volkVerticalBar(void) {
#if defined (__DEBUG__)
	printf("volkVerticalBar\n");
#endif
}

void volkQHead(void) {
#if defined (__DEBUG__)
	printf("volkQHead\n");
#endif
}

void volkDoes(void) {
#if defined (__DEBUG__)
	printf("volkDoes\n");
#endif
}

void volkHeapQ(void) {
#if defined (__DEBUG__)
	printf("volkHeapQ\n");
#endif
}

void volkHeap(void) {
#if defined (__DEBUG__)
	printf("volkHeap\n");
#endif
}

void volkHallot(void) {
#if defined (__DEBUG__)
	printf("volkHallot\n");
#endif
}

void volkClearStack(void) {
#if defined (__DEBUG__)
	printf("volkClearStack\n");
#endif
}

void volkRestrict(void) {
#if defined (__DEBUG__)
	printf("volkRestrict\n");
#endif
}

void volkImmediate(void) {
#if defined (__DEBUG__)
	printf("volkImmediate\n");
#endif
}

void volkRecursive(void) {
#if defined (__DEBUG__)
	printf("volkRecursive\n");
#endif
}

void volkReveal(void) {
#if defined (__DEBUG__)
	printf("volkReveal\n");
#endif
}

void volkHide(void) {
#if defined (__DEBUG__)
	printf("volkHide\n");
#endif
}

void volkLast(void) {
#if defined (__DEBUG__)
	printf("volkLast\n");
#endif
}

void volkNumber(void) {
#if defined (__DEBUG__)
	printf("volkNumber\n");
#endif
}

void volkNumberQ(void) {
#if defined (__DEBUG__)
	printf("volkNumberQ\n");
#endif
}

void volkConvert(void) {
#if defined (__DEBUG__)
	printf("volkConvert\n");
#endif
}

void volkAccumulate(void) {
#if defined (__DEBUG__)
	printf("volkAccumulate\n");
#endif
}

void volkDecimal(void) {
#if defined (__DEBUG__)
	printf("volkDecimal\n");
#endif
}

void volkBackslashNeeds(void) {
#if defined (__DEBUG__)
	printf("volkBackslashNeeds\n");
#endif
}

void volkBackslashBackslash(void) {
#if defined (__DEBUG__)
	printf("volkBackslashBackslash\n");
#endif
}

void volkBackslash(void) {
#if defined (__DEBUG__)
	printf("volkBackslash\n");
#endif
}

void volkDotParen(void) {
#if defined (__DEBUG__)
	printf("volkDotParen\n");
#endif
}

void volkParen(void) {
#if defined (__DEBUG__)
	printf("volkParen\n");
#endif
}

void volkDotQuote(void) {
#if defined (__DEBUG__)
	printf("volkDotQuote\n");
#endif
}

void volkParenDotQuote(void) {
#if defined (__DEBUG__)
	printf("volkParenDotQuote\n");
#endif
}

void volkQuote(void) {
#if defined (__DEBUG__)
	printf("volkQuote\n");
#endif
}

void volkParenQuote(void) {
#if defined (__DEBUG__)
	printf("volkParenQuote\n");
#endif
}

void volkQuoteLit(void) {
#if defined (__DEBUG__)
	printf("volkQuoteLit\n");
#endif
}

void volkAscii(void) {
#if defined (__DEBUG__)
	printf("volkAscii\n");
#endif
}

void volkState(void) {
#if defined (__DEBUG__)
	printf("volkState\n");
#endif
}

void volkName(void) {
#if defined (__DEBUG__)
	printf("volkName\n");
#endif
}

void volkParse(void) {
#if defined (__DEBUG__)
	printf("volkParse\n");
#endif
}

void volkWord(void) {
#if defined (__DEBUG__)
	printf("volkWord\n");
#endif
}

void volkSource(void) {
#if defined (__DEBUG__)
	printf("volkSource\n");
#endif
}

void volkCapital(void) {
#if defined (__DEBUG__)
	printf("volkCapital\n");
#endif
}

void volkSlashString(void) {
#if defined (__DEBUG__)
	printf("volkSlashString\n");
#endif
}

void volkSkip(void) {
#if defined (__DEBUG__)
	printf("volkSkip\n");
#endif
}

void volkScan(void) {
#if defined (__DEBUG__)
	printf("volkScan\n");
#endif
}

void volkQuery(void) {
#if defined (__DEBUG__)
	printf("volkQuery\n");
#endif
}

void volkTib(void) {
#if defined (__DEBUG__)
	printf("volkTib\n");
#endif
}

void volkSpan(void) {
#if defined (__DEBUG__)
	printf("volkSpan\n");
#endif
}

void volkBlk(void) {
#if defined (__DEBUG__)
	printf("volkBlk\n");
#endif
}

void volkToIn(void) {
#if defined (__DEBUG__)
	printf("volkToIn\n");
#endif
}

void volkToTib(void) {
#if defined (__DEBUG__)
	printf("volkToTib\n");
#endif
}

void volkNumTib(void) {
#if defined (__DEBUG__)
	printf("volkNumTib\n");
#endif
}

void volkCompile(void) {
#if defined (__DEBUG__)
	printf("volkCompile\n");
#endif
}

void volkCComma(void) {
#if defined (__DEBUG__)
	printf("volkCComma\n");
#endif
}

void volkComma(void) {
#if defined (__DEBUG__)
	printf("volkComma\n");
#endif
}

void volkAllot(void) {
#if defined (__DEBUG__)
	printf("volkAllot\n");
#endif
}

void volkPad(void) {
#if defined (__DEBUG__)
	printf("volkPad\n");
#endif
}

void volkHere(void) {
#if defined (__DEBUG__)
	printf("volkHere\n");
#endif
}

void volkFill(void) {
#if defined (__DEBUG__)
	printf("volkFill\n");
#endif
}

void volkErase(void) {
#if defined (__DEBUG__)
	printf("volkErase\n");
#endif
}

void volkCount(void) {
#if defined (__DEBUG__)
	printf("volkCount\n");
#endif
}

void volkPlace(void) {
#if defined (__DEBUG__)
	printf("volkPlace\n");
#endif
}

void volkMove(void) {
#if defined (__DEBUG__)
	printf("volkMove\n");
#endif
}

void volkCMoveTo(void) {
#if defined (__DEBUG__)
	printf("volkCMoveTo\n");
#endif
}

void volkCMove(void) {
#if defined (__DEBUG__)
	printf("volkCMove\n");
#endif
}

void volkUdSlashMod(void) {
#if defined (__DEBUG__)
	printf("volkUdSlashMod\n");
#endif
}

void volkUSlashMod(void) {
#if defined (__DEBUG__)
	printf("volkUSlashMod\n");
#endif
}

void volkStarSlash(void) {
#if defined (__DEBUG__)
	printf("volkStarSlash\n");
#endif
}

void volkStarSlashMod(void) {
#if defined (__DEBUG__)
	printf("volkStarSlashMod\n");
#endif
}

void volkMod(void) {
#if defined (__DEBUG__)
	printf("volkMod\n");
#endif
}

void volkSlash(void) {
#if defined (__DEBUG__)
	printf("volkSlash\n");
#endif
}

void volkSlashMod(void) {
#if defined (__DEBUG__)
	printf("volkSlashMod\n");
#endif
}

void volkTwoSlash(void) {
#if defined (__DEBUG__)
	printf("volkTwoSlash\n");
#endif
}

void volkMSlashMod(void) {
#if defined (__DEBUG__)
	printf("volkMSlashMod\n");
#endif
}

void volkUmSlashMod(void) {
#if defined (__DEBUG__)
	printf("volkUmSlashMod\n");
#endif
}

void volkTwoStar(void) {
#if defined (__DEBUG__)
	printf("volkTwoStar\n");
#endif
}

void volkStar(void) {
#if defined (__DEBUG__)
	printf("volkStar\n");
#endif
}

void volkMStar(void) {
#if defined (__DEBUG__)
	printf("volkMStar\n");
#endif
}

void volkUmStar(void) {
#if defined (__DEBUG__)
	printf("volkUmStar\n");
#endif
}

void volkLeave(void) {
#if defined (__DEBUG__)
	printf("volkLeave\n");
#endif
}

void volkLoop(void) {
#if defined (__DEBUG__)
	printf("volkLoop\n");
#endif
}

void volkQDo(void) {
#if defined (__DEBUG__)
	printf("volkQDo\n");
#endif
}

void volkDo(void) {
#if defined (__DEBUG__)
	printf("volkDo\n");
#endif
}

void volkUntil(void) {
#if defined (__DEBUG__)
	printf("volkUntil\n");
#endif
}

void volkRepeat(void) {
#if defined (__DEBUG__)
	printf("volkRepeat\n");
#endif
}

void volkWhile(void) {
#if defined (__DEBUG__)
	printf("volkWhile\n");
#endif
}

void volkBegin(void) {
#if defined (__DEBUG__)
	printf("volkBegin\n");
#endif
}

void volkElse(void) {
#if defined (__DEBUG__)
	printf("volkElse\n");
#endif
}

void volkThen(void) {
#if defined (__DEBUG__)
	printf("volkThen\n");
#endif
}

void volkIf(void) {
#if defined (__DEBUG__)
	printf("volkIf\n");
#endif
}

void volkQPairs(void) {
#if defined (__DEBUG__)
	printf("volkQPairs\n");
#endif
}

void volkFromResolve(void) {
#if defined (__DEBUG__)
	printf("volkFromResolve\n");
#endif
}

void volkFromMark(void) {
#if defined (__DEBUG__)
	printf("volkFromMark\n");
#endif
}

void volkToResolve(void) {
#if defined (__DEBUG__)
	printf("volkToResolve\n");
#endif
}

void volkToMark(void) {
#if defined (__DEBUG__)
	printf("volkToMark\n");
#endif
}

void volkQBranch(void) {
#if defined (__DEBUG__)
	printf("volkQBranch\n");
#endif
}

void volkBranch(void) {
#if defined (__DEBUG__)
	printf("volkBranch\n");
#endif
}

void volkJ(void) {
#if defined (__DEBUG__)
	printf("volkJ\n");
#endif
}

void volkI(void) {
#if defined (__DEBUG__)
	printf("volkI\n");
#endif
}

void volkZPlusLoop(void) {
#if defined (__DEBUG__)
	printf("volkZPlusLoop\n");
#endif
}

void volkZLoop(void) {
#if defined (__DEBUG__)
	printf("volkZLoop\n");
#endif
}

void volkEndLoop(void) {
#if defined (__DEBUG__)
	printf("volkEndLoop\n");
#endif
}

void volkBounds(void) {
#if defined (__DEBUG__)
	printf("volkBounds\n");
#endif
}

void volkZQDo(void) {
#if defined (__DEBUG__)
	printf("volkZQDo\n");
#endif
}

void volkZDo(void) {
#if defined (__DEBUG__)
	printf("volkZDo\n");
#endif
}

void volkAbs(void) {
#if defined (__DEBUG__)
	printf("volkAbs\n");
#endif
}

void volkDAbs(void) {
#if defined (__DEBUG__)
	printf("volkDAbs\n");
#endif
}

void volkUGreater(void) {
#if defined (__DEBUG__)
	printf("volkUGreater\n");
#endif
}

void volkZeroUnequal(void) {
#if defined (__DEBUG__)
	printf("volkZeroUnequal\n");
#endif
}

void volkZeroGreater(void) {
#if defined (__DEBUG__)
	printf("volkZeroGreater\n");
#endif
}

void volkGreater(void) {
#if defined (__DEBUG__)
	printf("volkGreater\n");
#endif
}

void volkULess(void) {
#if defined (__DEBUG__)
	printf("volkULess\n");
#endif
}

void volkLess(void) {
#if defined (__DEBUG__)
	printf("volkLess\n");
#endif
}

void volkZeroEqual(void) {
#if defined (__DEBUG__)
	printf("volkZeroEqual\n");
#endif
}

void volkLiteral(void) {
#if defined (__DEBUG__)
	printf("volkLiteral\n");
#endif
}

void volkLit(void) {
#if defined (__DEBUG__)
	printf("volkLit\n");
#endif
}

void volkOff(void) {
#if defined (__DEBUG__)
	printf("volkOff\n");
#endif
}

void volkFour(void) {
#if defined (__DEBUG__)
	printf("volkFour\n");
#endif
}

void volkThree(void) {
#if defined (__DEBUG__)
	printf("volkThree\n");
#endif
}

void volkTwo(void) {
#if defined (__DEBUG__)
	printf("volkTwo\n");
#endif
}

void volkOne(void) {
#if defined (__DEBUG__)
	printf("volkOne\n");
#endif
}

void volkZero(void) {
#if defined (__DEBUG__)
	printf("volkZero\n");
#endif
}

void volkMinusOne(void) {
#if defined (__DEBUG__)
	printf("volkMinusOne\n");
#endif
}

void volkFalse(void) {
#if defined (__DEBUG__)
	printf("volkFalse\n");
#endif
}

void volkTrue(void) {
#if defined (__DEBUG__)
	printf("volkTrue\n");
#endif
}

void volkTwoMinus(void) {
#if defined (__DEBUG__)
	printf("volkTwoMinus\n");
#endif
}

void volkOneMinus(void) {
#if defined (__DEBUG__)
	printf("volkOneMinus\n");
#endif
}

void volkThreePlus(void) {
#if defined (__DEBUG__)
	printf("volkThreePlus\n");
#endif
}

void volkTwoPlus(void) {
#if defined (__DEBUG__)
	printf("volkTwoPlus\n");
#endif
}

void volkOnePlus(void) {
#if defined (__DEBUG__)
	printf("volkOnePlus\n");
#endif
}

void volkDPlus(void) {
#if defined (__DEBUG__)
	printf("volkDPlus\n");
#endif
}

void volkDNegate(void) {
#if defined (__DEBUG__)
	printf("volkDNegate\n");
#endif
}

void volkNegate(void) {
#if defined (__DEBUG__)
	printf("volkNegate\n");
#endif
}

void volkNot(void) {
#if defined (__DEBUG__)
	printf("volkNot\n");
#endif
}

void volkMinus(void) {
#if defined (__DEBUG__)
	printf("volkMinus\n");
#endif
}

void volkXOR(void) {
#if defined (__DEBUG__)
	printf("volkXOR\n");
#endif
}

void volkAnd(void) {
#if defined (__DEBUG__)
	printf("volkAnd\n");
#endif
}

void volkOr(void) {
#if defined (__DEBUG__)
	printf("volkOr\n");
#endif
}

void volkPlus(void) {
#if defined (__DEBUG__)
	printf("volkPlus\n");
#endif
}

void volkTwoDup(void) {
#if defined (__DEBUG__)
	printf("volkTwoDup\n");
#endif
}

void volkTwoSwap(void) {
#if defined (__DEBUG__)
	printf("volkTwoSwap\n");
#endif
}

void volkRoll(void) {
#if defined (__DEBUG__)
	printf("volkRoll\n");
#endif
}

void volkPick(void) {
#if defined (__DEBUG__)
	printf("volkPick\n");
#endif
}

void volkUnder(void) {
#if defined (__DEBUG__)
	printf("volkUnder\n");
#endif
}

void volkNip(void) {
#if defined (__DEBUG__)
	printf("volkNip\n");
#endif
}

void volkMinusRot(void) {
#if defined (__DEBUG__)
	printf("volkMinusRot\n");
#endif
}

void volkRot(void) {
#if defined (__DEBUG__)
	printf("volkRot\n");
#endif
}

void volkOver(void) {
#if defined (__DEBUG__)
	printf("volkOver\n");
#endif
}

void volkQDup(void) {
#if defined (__DEBUG__)
	printf("volkQDup\n");
#endif
}

void volkDup(void) {
#if defined (__DEBUG__)
	printf("volkDup\n");
#endif
}

void volkSwap(void) {
#if defined (__DEBUG__)
	printf("volkSwap\n");
#endif
}

void volkDrop(void) {
#if defined (__DEBUG__)
	printf("volkDrop\n");
#endif
}

void volkPlusStore(void) {
#if defined (__DEBUG__)
	printf("volkPlusStore\n");
#endif
}

void volkStore(void) {
#if defined (__DEBUG__)
	printf("volkStore\n");
#endif
}

void volkFetch(void) {
#if defined (__DEBUG__)
	printf("volkFetch\n");
#endif
}

void volkCToggle(void) {
#if defined (__DEBUG__)
	printf("volkCToggle\n");
#endif
}

void volkCStore(void) {
#if defined (__DEBUG__)
	printf("volkCStore\n");
#endif
}

void volkCFetch(void) {
#if defined (__DEBUG__)
	printf("volkCFetch\n");
#endif
}

void volkPerform(void) {
#if defined (__DEBUG__)
	printf("volkPerform\n");
#endif
}

void volkExecute(void) {
#if defined (__DEBUG__)
	printf("volkExecute\n");
#endif
}

void volkQExit(void) {
#if defined (__DEBUG__)
	printf("volkQExit\n");
#endif
}

void volkUnnest(void) {
#if defined (__DEBUG__)
	printf("volkUnnest\n");
#endif
}

void volkExit(void) {
#if defined (__DEBUG__)
	printf("volkExit\n");
#endif
}

void volkRDrop(void) {
#if defined (__DEBUG__)
	printf("volkRDrop\n");
#endif
}

void volkRFetch(void) {
#if defined (__DEBUG__)
	printf("volkRFetch\n");
#endif
}

void volkRFrom(void) {
#if defined (__DEBUG__)
	printf("volkRFrom\n");
#endif
}

void volkToR(void) {
#if defined (__DEBUG__)
	printf("volkToR\n");
#endif
}

void volkRPStore(void) {
#if defined (__DEBUG__)
	printf("volkRPStore\n");
#endif
}

void volkRPFetch(void) {
#if defined (__DEBUG__)
	printf("volkRPFetch\n");
#endif
}

void volkUPStore(void) {
#if defined (__DEBUG__)
	printf("volkUPStore\n");
#endif
}

void volkUPFetch(void) {
#if defined (__DEBUG__)
	printf("volkUPFetch\n");
#endif
}

void volkSPStore(void) {
#if defined (__DEBUG__)
	printf("volkSPStore\n");
#endif
}

void volkSPFetch(void) {
#if defined (__DEBUG__)
	printf("volkSPFetch\n");
#endif
}

void volkUdp(void) {
#if defined (__DEBUG__)
	printf("volkUdp\n");
#endif
}

void volkVocLink(void) {
#if defined (__DEBUG__)
	printf("volkVocLink\n");
#endif
}

void volkErrorhandler(void) {
#if defined (__DEBUG__)
	printf("volkErrorhandler\n");
#endif
}

void volkInput(void) {
#if defined (__DEBUG__)
	printf("volkInput\n");
#endif
}

void volkOutput(void) {
#if defined (__DEBUG__)
	printf("volkOutput\n");
#endif
}

void volkBase(void) {
#if defined (__DEBUG__)
	printf("volkBase\n");
#endif
}

void volkOffset(void) {
#if defined (__DEBUG__)
	printf("volkOffset\n");
#endif
}

void volkDP(void) {
#if defined (__DEBUG__)
	printf("volkDP\n");
#endif
}

void volkR0(void) {
#if defined (__DEBUG__)
	printf("volkR0\n");
#endif
}

void volkS0(void) {
#if defined (__DEBUG__)
	printf("volkS0\n");
#endif
}

void volkOrigin(void) {
#if defined (__DEBUG__)
	printf("volkOrigin\n");
#endif
}

void volkNoop(void) {
#if defined (__DEBUG__)
	printf("volkNoop\n");
#endif
}

void volkRecover(void) {
#if defined (__DEBUG__)
	printf("volkRecover\n");
#endif
}

void volkEndTrace(void) {
#if defined (__DEBUG__)
	printf("volkEndTrace\n");
#endif
}

void volkZeroLess(void) {
#if defined (__DEBUG__)
	printf("volkZeroLess\n");
#endif
}

void volkEqual(void) {
#if defined (__DEBUG__)
	printf("volkEqual\n");
#endif
}

void volkExtend(void) {
#if defined (__DEBUG__)
	printf("volkExtend\n");
#endif
}

void volkUMin(void) {
#if defined (__DEBUG__)
	printf("volkUMin\n");
#endif
}

void volkUMax(void) {
#if defined (__DEBUG__)
	printf("volkUMax\n");
#endif
}

void volkMax(void) {
#if defined (__DEBUG__)
	printf("volkMax\n");
#endif
}

void volkMin(void) {
#if defined (__DEBUG__)
	printf("volkMin\n");
#endif
}

void volkDLess(void) {
#if defined (__DEBUG__)
	printf("volkDLess\n");
#endif
}

void volkDEqual(void) {
#if defined (__DEBUG__)
	printf("volkDEqual\n");
#endif
}

void volkCaseQ(void) {
#if defined (__DEBUG__)
	printf("volkDEqual\n");
#endif
}

void volkDZeroEqual(void) {
#if defined (__DEBUG__)
	printf("volkDZeroEqual\n");
#endif
}

void volkUWithin(void) {
#if defined (__DEBUG__)
	printf("volkUWithin\n");
#endif
}

void volkDigitQ(void) {
#if defined (__DEBUG__)
	printf("volkDigitQ\n");
#endif
}

void volkCold(void) {
#if defined (__DEBUG__)
	printf("volkCold\n");
#endif
}

void volkCommaQuote(void) {
#if defined (__DEBUG__)
	printf("volkCommaQuote\n");
#endif
}

void volkNullStringQ(void) {
#if defined (__DEBUG__)
	printf("volkNullStringQ\n");
#endif
}

void volkDpl(void) {
#if defined (__DEBUG__)
	printf("volkDpl\n");
#endif
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_ST_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_CPM_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_PC_FORTH)
void volkListing(void) {
#if defined (__DEBUG__)
	printf("volkListing\n");
#endif
}

void volkDocument(void) {
#if defined (__DEBUG__)
	printf("volkDocument\n");
#endif
}

void volkPThru(void) {
#if defined (__DEBUG__)
	printf("volkPThru\n");
#endif
}

void volkPrint(void) {
#if defined (__DEBUG__)
	printf("volkPrint\n");
#endif
}

void volkPrinter(void) {
#if defined (__DEBUG__)
	printf("volkPrinter\n");
#endif
}

void volkDump(void) {
#if defined (__DEBUG__)
	printf("volkDump\n");
#endif
}

void volkTools(void) {
#if defined (__DEBUG__)
	printf("volkTools\n");
#endif
}

void volkToolsDotFb(void) {
#if defined (__DEBUG__)
	printf("volkToolsDotFb\n");
#endif
}

void volkBye(void) {
#if defined (__DEBUG__)
	printf("volkBye\n");
#endif
}

void volkView(void) {
#if defined (__DEBUG__)
	printf("volkView\n");
#endif
}

void volkL(void) {
#if defined (__DEBUG__)
	printf("volkL\n");
#endif
}

void volkV(void) {
#if defined (__DEBUG__)
	printf("volkV\n");
#endif
}

void volkDelete(void) {
#if defined (__DEBUG__)
	printf("volkDelete\n");
#endif
}

void volkCaps(void) {
#if defined (__DEBUG__)
	printf("volkCaps\n");
#endif
}

void volkCColon(void) {
#if defined (__DEBUG__)
	printf("volkCColon\n");
#endif
}

void volkBColon(void) {
#if defined (__DEBUG__)
	printf("volkBColon\n");
#endif
}

void volkAColon(void) {
#if defined (__DEBUG__)
	printf("volkAColon\n");
#endif
}

void volkDir(void) {
#if defined (__DEBUG__)
	printf("volkDir\n");
#endif
}

void volkMore(void) {
#if defined (__DEBUG__)
	printf("volkDir\n");
#endif
}

void volkFiles(void) {
#if defined (__DEBUG__)
	printf("volkFiles\n");
#endif
}

void volkInclude(void) {
#if defined (__DEBUG__)
	printf("volkInclude\n");
#endif
}

void volkLoadFrom(void) {
#if defined (__DEBUG__)
	printf("volkLoadFrom\n");
#endif
}

void volkFrom(void) {
#if defined (__DEBUG__)
	printf("volkLoadFrom\n");
#endif
}

void volkMakefile(void) {
#if defined (__DEBUG__)
	printf("volkMakefile\n");
#endif
}

void volkUse(void) {
#if defined (__DEBUG__)
	printf("volkUse\n");
#endif
}

void volkMake(void) {
#if defined (__DEBUG__)
	printf("volkMake\n");
#endif
}

void volkAssign(void) {
#if defined (__DEBUG__)
	printf("volkAssign\n");
#endif
}

void volkClose(void) {
#if defined (__DEBUG__)
	printf("volkClose\n");
#endif
}

void volkOpen(void) {
#if defined (__DEBUG__)
	printf("volkOpen\n");
#endif
}

void volkFileQ(void) {
#if defined (__DEBUG__)
	printf("volkFileQ\n");
#endif
}

void volkCapacity(void) {
#if defined (__DEBUG__)
	printf("volkCapacity\n");
#endif
}

void volkNumEsc(void) {
#if defined (__DEBUG__)
	printf("volkNumEsc\n");
#endif
}

void volkNumLf(void) {
#if defined (__DEBUG__)
	printf("volkNumLf\n");
#endif
}

void volkQCr(void) {
#if defined (__DEBUG__)
	printf("volkQCr\n");
#endif
}

void volkStopQ(void) {
#if defined (__DEBUG__)
	printf("volkStopQ\n");
#endif
}

void volkSave(void) {
#if defined (__DEBUG__)
	printf("volkSave\n");
#endif
}

void volkEmpty(void) {
#if defined (__DEBUG__)
	printf("volkEmpty\n");
#endif
}

void volkForget(void) {
#if defined (__DEBUG__)
	printf("volkForget\n");
#endif
}

void volkIsFileFetch(void) {
#if defined (__DEBUG__)
	printf("volkIsFileFetch\n");
#endif
}

void volkDDot(void) {
#if defined (__DEBUG__)
	printf("volkDDot\n");
#endif
}

void volkRNum(void) {
#if defined (__DEBUG__)
	printf("volkRNum\n");
#endif
}

void volkScr(void) {
#if defined (__DEBUG__)
	printf("volkScr\n");
#endif
}

void volkAbort(void) {
#if defined (__DEBUG__)
	printf("volkAbort\n");
#endif
}

void volkTickAbort(void) {
#if defined (__DEBUG__)
	printf("volkTickAbort\n");
#endif
}

void volkStandardISlashO(void) {
#if defined (__DEBUG__)
	printf("volkStandardISlashO\n");
#endif
}

void volkZLoad(void) {
#if defined (__DEBUG__)
	printf("volkZLoad\n");
#endif
}

void volkContext(void) {
#if defined (__DEBUG__)
	printf("volkContext\n");
#endif
}

void volkCurrent(void) {
#if defined (__DEBUG__)
	printf("volkCurrent\n");
#endif
}

void volkVp(void) {
#if defined (__DEBUG__)
	printf("volkVp\n");
#endif
}

void volkAlias(void) {
#if defined (__DEBUG__)
	printf("volkAlias\n");
#endif
}

void volkUser(void) {
#if defined (__DEBUG__)
	printf("volkUser\n");
#endif
}

void volkMakeView(void) {
#if defined (__DEBUG__)
	printf("volkMakeView\n");
#endif
}

void volkHAlign(void) {
#if defined (__DEBUG__)
	printf("volkHAlign\n");
#endif
}

void volkAlign(void) {
#if defined (__DEBUG__)
	printf("volkAlign\n");
#endif
}

void volkLoadFile(void) {
#if defined (__DEBUG__)
	printf("volkLoadFile\n");
#endif
}

void volkEven(void) {
#if defined (__DEBUG__)
	printf("volkEven\n");
#endif
}

void volkOn(void) {
#if defined (__DEBUG__)
	printf("volkOn\n");
#endif
}

void volkFourMinus(void) {
#if defined (__DEBUG__)
	printf("volkFourMinus\n");
#endif
}

void volkFourPlus(void) {
#if defined (__DEBUG__)
	printf("volkFourPlus\n");
#endif
}

void volkTwoStore(void) {
#if defined (__DEBUG__)
	printf("volkTwoStore\n");
#endif
}

void volkTwoFetch(void) {
#if defined (__DEBUG__)
	printf("volkTwoFetch\n");
#endif
}

void volkMinusRoll(void) {
#if defined (__DEBUG__)
	printf("volkMinusRoll\n");
#endif
}

void volkSaveSystem(void) {
#if defined (__DEBUG__)
	printf("volkDebug\n");
#endif
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_C64_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_CPM_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_PC_FORTH)
void volkAssembler(void) {
#if defined (__DEBUG__)
	printf("volkAssembler\n");
#endif
}

void volkBSlashBuf(void) {
#if defined (__DEBUG__)
	printf("volkBSlashBuf\n");
#endif
}

void volkPrev(void) {
#if defined (__DEBUG__)
	printf("volkPrev\n");
#endif
}

void volkTick(void) {
#if defined (__DEBUG__)
	printf("volkTick\n");
#endif
}

void volkHex(void) {
#if defined (__DEBUG__)
	printf("volkHex\n");
#endif
}

void volkCLit(void) {
#if defined (__DEBUG__)
	printf("volkCLit\n");
#endif
}

void volkTwoDrop(void) {
#if defined (__DEBUG__)
	printf("volkTwoDrop\n");
#endif
}

void volkRSlashW(void) {
#if defined (__DEBUG__)
	printf("volkRSlashW\n");
#endif
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_C64_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_ST_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_PC_FORTH)
void volkToDrive(void) {
#if defined (__DEBUG__)
	printf("volkToDrive\n");
#endif
}

void volkLDump(void) {
#if defined (__DEBUG__)
	printf("volkLDump\n");
#endif
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_C64_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_ST_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_CPM_FORTH)
void volkDrvInit(void) {
#if defined (__DEBUG__)
	printf("volkDrvInit\n");
#endif
}

void volkConStore(void) {
#if defined (__DEBUG__)
	printf("volkConStore\n");
#endif
}

void volkGetKey(void) {
#if defined (__DEBUG__)
	printf("volkGetKey\n");
#endif
}

void volkFreeBuffer(void) {
#if defined (__DEBUG__)
	printf("volkFreeBuffer\n");
#endif
}

void volkAllotBuffer(void) {
#if defined (__DEBUG__)
	printf("volkAllotBuffer\n");
#endif
}

void volkFirst(void) {
#if defined (__DEBUG__)
	printf("volkFirst\n");
#endif
}

void volkLimit(void) {
#if defined (__DEBUG__)
	printf("volkLimit\n");
#endif
}

void volkBuffers(void) {
#if defined (__DEBUG__)
	printf("volkBuffers\n");
#endif
}

void volkPlusLoop(void) {
#if defined (__DEBUG__)
	printf("volkPlusLoop\n");
#endif
}

void volkFlush(void) {
#if defined (__DEBUG__)
	printf("volkFlush\n");
#endif
}

void volkEmptyBuffers(void) {
#if defined (__DEBUG__)
	printf("volkEmptyBuffers\n");
#endif
}

void volkSaveBuffers(void) {
#if defined (__DEBUG__)
	printf("volkSaveBuffers\n");
#endif
}

#endif


#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_C64_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_ST_FORTH)
void volkIndex(void) {
#if defined (__DEBUG__)
	printf("volkIndex\n");
#endif
}

void volkDrvQ(void) {
#if defined (__DEBUG__)
	printf("volkDrvQ\n");
#endif
}

void volkToInterpret(void) {
#if defined (__DEBUG__)
	printf("volkToInterpret\n");
#endif
}

void volkCapitalize(void) {
#if defined (__DEBUG__)
	printf("volkCapitalize\n");
#endif
}

void volkBlkSlashDrv(void) {
#if defined (__DEBUG__)
	printf("volkBlkSlashDrv\n");
#endif
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_ST_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_CPM_FORTH)
void volkPrinterDotScr(void) {
#if defined (__DEBUG__)
	printf("volkPrinterDotScr\n");
#endif
}

void volkRelocateDotScr(void) {
#if defined (__DEBUG__)
	printf("volkRelocateDotScr\n");
#endif
}

void volkTraceTick(void) {
#if defined (__DEBUG__)
	printf("volkTraceTick\n");
#endif
}

void volkDebug(void) {
#if defined (__DEBUG__)
	printf("volkDebug\n");
#endif
}

void volkDotBlk(void) {
#if defined (__DEBUG__)
	printf("volkDotBlk\n");
#endif
}

void volkStartupDotScr(void) {
#if defined (__DEBUG__)
	printf("volkStartupDotScr\n");
#endif
}

void volkFileIntDotScr(void) {
#if defined (__DEBUG__)
	printf("volkFileIntDotScr\n");
#endif
}

void volkFilesQuote(void) {
#if defined (__DEBUG__)
	printf("volkFilesQuote\n");
#endif
}

void volkEof(void) {
#if defined (__DEBUG__)
	printf("volkEof\n");
#endif
}

void volkCurRite(void) {
#if defined (__DEBUG__)
	printf("volkCurRite\n");
#endif
}

void volkCurLeft(void) {
#if defined (__DEBUG__)
	printf("volkCurLeft\n");
#endif
}

void volkZWord(void) {
#if defined (__DEBUG__)
	printf("volkZWord\n");
#endif
}

void volkUP(void) {
#if defined (__DEBUG__)
	printf("volkUP\n");
#endif
}

void volkToolsDotScr(void) {
#if defined (__DEBUG__)
	printf("volkToolsDotScr\n");
#endif
}

void volkEditorDotScr(void) {
#if defined (__DEBUG__)
	printf("volkEditorDotScr\n");
#endif
}

void volkZView(void) {
#if defined (__DEBUG__)
	printf("volkZView\n");
#endif
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_CPM_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_PC_FORTH)
void volkRendezvous(void) {
#if defined (__DEBUG__)
	printf("volkRendezvous\n");
#endif
}

void volkTask(void) {
#if defined (__DEBUG__)
	printf("volkTask\n");
#endif
}

void volkWake(void) {
#if defined (__DEBUG__)
	printf("volkWake\n");
#endif
}

void volkSleep(void) {
#if defined (__DEBUG__)
	printf("volkSleep\n");
#endif
}

void volkActivate(void) {
#if defined (__DEBUG__)
	printf("volkActivate\n");
#endif
}

void volkPass(void) {
#if defined (__DEBUG__)
	printf("volkPass\n");
#endif
}

void volkMultiTask(void) {
#if defined (__DEBUG__)
	printf("volkMultiTask\n");
#endif
}

void volkSingleTask(void) {
#if defined (__DEBUG__)
	printf("volkSingleTask\n");
#endif
}

void volkStop(void) {
#if defined (__DEBUG__)
	printf("volkStop\n");
#endif
}

void volkFix(void) {
#if defined (__DEBUG__)
	printf("volkFix\n");
#endif
}

void volkNumDel(void) {
#if defined (__DEBUG__)
	printf("volkNumDel\n");
#endif
}

void volkCtrl(void) {
#if defined (__DEBUG__)
	printf("volkCtrl\n");
#endif
}

void volkUpdatedQ(void) {
#if defined (__DEBUG__)
	printf("volkUpdatedQ\n");
#endif
}

void volkEditor(void) {
#if defined (__DEBUG__)
	printf("volkEditor\n");
#endif
}

void volkBlank(void) {
#if defined (__DEBUG__)
	printf("volkBlank\n");
#endif
}

void volkZKey(void) {
#if defined (__DEBUG__)
	printf("volkZKey\n");
#endif
}

void volkZExpect(void) {
#if defined (__DEBUG__)
	printf("volkZExpect\n");
#endif
}

void volkZDecode(void) {
#if defined (__DEBUG__)
	printf("volkZDecode\n");
#endif
}

void volkZDel(void) {
#if defined (__DEBUG__)
	printf("volkZDel\n");
#endif
}

void volkZCr(void) {
#if defined (__DEBUG__)
	printf("volkZCr\n");
#endif
}

void volkZEmit(void) {
#if defined (__DEBUG__)
	printf("volkZEmit\n");
#endif
}

void volkZType(void) {
#if defined (__DEBUG__)
	printf("volkZType\n");
#endif
}

void volkZPage(void) {
#if defined (__DEBUG__)
	printf("volkZPage\n");
#endif
}

void volkZAtQ(void) {
#if defined (__DEBUG__)
	printf("volkZAtQ\n");
#endif
}

void volkZAt(void) {
#if defined (__DEBUG__)
	printf("volkZAt\n");
#endif
}

void volkCSlashCol(void) {
#if defined (__DEBUG__)
	printf("volkCSlashCol\n");
#endif
}

void volkCSlashRow(void) {
#if defined (__DEBUG__)
	printf("volkCSlashRow\n");
#endif
}

void volkLabel(void) {
#if defined (__DEBUG__)
	printf("volkLabel\n");
#endif
}

void volkToLabel(void) {
#if defined (__DEBUG__)
	printf("volkToLabel\n");
#endif
}

void volkSemicolonCode(void) {
#if defined (__DEBUG__)
	printf("volkSemicolonCode\n");
#endif
}

void volkCode(void) {
#if defined (__DEBUG__)
	printf("volkCode\n");
#endif
}

void volkSaveFile(void) {
#if defined (__DEBUG__)
	printf("volkSaveFile\n");
#endif
}

void volkDirect(void) {
#if defined (__DEBUG__)
	printf("volkDirect\n");
#endif
}

void volkZRSlashW(void) {
#if defined (__DEBUG__)
	printf("volkZRSlashW\n");
#endif
}

void volkNumBel(void) {
#if defined (__DEBUG__)
	printf("volkNumBel\n");
#endif
}

void volkNumTab(void) {
#if defined (__DEBUG__)
	printf("volkNumTab\n");
#endif
}

void volkDos(void) {
#if defined (__DEBUG__)
	printf("volkDos\n");
#endif
}

void volkEmptyBuf(void) {
#if defined (__DEBUG__)
	printf("volkEmptyBuf\n");
#endif
}

void volkZCoreQ(void) {
#if defined (__DEBUG__)
	printf("volkZCoreQ\n");
#endif
}

void volkFromFile(void) {
#if defined (__DEBUG__)
	printf("volkFromFile\n");
#endif
}

void volkIsFile(void) {
#if defined (__DEBUG__)
	printf("volkIsFile\n");
#endif
}

void volkPrompt(void) {
#if defined (__DEBUG__)
	printf("volkPrompt\n");
#endif
}

void volkZPrompt(void) {
#if defined (__DEBUG__)
	printf("volkZPrompt\n");
#endif
}

void volkParser(void) {
#if defined (__DEBUG__)
	printf("volkParser\n");
#endif
}

void volkRoot(void) {
#if defined (__DEBUG__)
	printf("volkRoot\n");
#endif
}

void volkBodyFrom(void) {
#if defined (__DEBUG__)
	printf("volkBodyFrom\n");
#endif
}

void volkZNameFrom(void) {
#if defined (__DEBUG__)
	printf("volkZNameFrom\n");
#endif
}

void volkZSemicolonCode(void) {
#if defined (__DEBUG__)
	printf("volkZSemicolonCode\n");
#endif
}

void volkUpper(void) {
#if defined (__DEBUG__)
	printf("volkUpper\n");
#endif
}

void volkFlip(void) {
#if defined (__DEBUG__)
	printf("volkFlip\n");
#endif
}

void volkZeroEqualExit(void) {
#if defined (__DEBUG__)
	printf("volkZeroEqualExit\n");
#endif
}

void volkRemove(void) {
#if defined (__DEBUG__)
	printf("volkRemove\n");
#endif
}

void volkZKeyQ(void) {
#if defined (__DEBUG__)
	printf("volkZKeyQ\n");
#endif
}

void volkTipp(void) {
#if defined (__DEBUG__)
	printf("volkTipp\n");
#endif
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_C64_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_CPM_FORTH)
void volkPrintableQ(void) {
#if defined (__DEBUG__)
	printf("volkPrintableQ\n");
#endif
}

void volkDiskErr(void) {
#if defined (__DEBUG__)
	printf("volkDiskErr\n");
#endif
}

void volkZDiskErr(void) {
#if defined (__DEBUG__)
	printf("volkZDiskErr\n");
#endif
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_C64_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_PC_FORTH)
void volkDrive(void) {
#if defined (__DEBUG__)
	printf("volkDrive\n");
#endif
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_ST_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_PC_FORTH)
void volkBell(void) {
#if defined (__DEBUG__)
	printf("volkBell\n");
#endif
}

void volkAbortZ(void) {
#if defined (__DEBUG__)
	printf("volkAbortZ\n");
#endif
}

void volkPath(void) {
#if defined (__DEBUG__)
	printf("volkPath\n");
#endif
}

void volkArguments(void) {
#if defined (__DEBUG__)
	printf("volkArguments\n");
#endif
}

void volkTwoOver(void) {
#if defined (__DEBUG__)
	printf("volkTwoOver\n");
#endif
}

void volkLFetch(void) {
#if defined (__DEBUG__)
	printf("volkLFetch\n");
#endif
}

void volkLStore(void) {
#if defined (__DEBUG__)
	printf("volkLStore\n");
#endif
}

void volkLCStore(void) {
#if defined (__DEBUG__)
	printf("volkLCStore\n");
#endif
}

void volkNextLink(void) {
#if defined (__DEBUG__)
	printf("volkNextLink\n");
#endif
}

#endif


#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
   (H2O_FORTH_PRIMITIVES == VOLK_C64_FORTH)
void volkZ64(void) {
#if defined (__DEBUG__)
	printf("volkZ64\n");
#endif
}

void volkCZ(void) {
#if defined (__DEBUG__)
	printf("volkCZ\n");
#endif
}

void volkZ16(void) {
#if defined (__DEBUG__)
	printf("volkZ16\n");
#endif
}

void volkC64Init(void) {
#if defined (__DEBUG__)
	printf("volkC64Init\n");
#endif
}

void volkInitSystem(void) {
#if defined (__DEBUG__)
	printf("volkInitSystem\n");
#endif
}

void volkInkPot(void) {
#if defined (__DEBUG__)
	printf("volkInkPot\n");
#endif
}

void volkFIndex(void) {
#if defined (__DEBUG__)
	printf("volkFIndex\n");
#endif
}

void volkCBM1541RSlashW(void) {
#if defined (__DEBUG__)
	printf("volkCBM1541RSlashW\n");
#endif
}

void volkDiskClose(void) {
#if defined (__DEBUG__)
	printf("volkDiskClose\n");
#endif
}

void volkDiskOpen(void) {
#if defined (__DEBUG__)
	printf("volkDiskOpen\n");
#endif
}

void volkWriteSector(void) {
#if defined (__DEBUG__)
	printf("volkWriteSector\n");
#endif
}

void volkReadSector(void) {
#if defined (__DEBUG__)
	printf("volkReadSector\n");
#endif
}

void volkDErrorQ(void) {
#if defined (__DEBUG__)
	printf("volkDErrorQ\n");
#endif
}

void volkBusInput(void) {
#if defined (__DEBUG__)
	printf("volkBusInput\n");
#endif
}

void volkBusFetch(void) {
#if defined (__DEBUG__)
	printf("volkBusFetch\n");
#endif
}

void volkBusType(void) {
#if defined (__DEBUG__)
	printf("volkBusType\n");
#endif
}

void volkBusStore(void) {
#if defined (__DEBUG__)
	printf("volkBusStore\n");
#endif
}

void volkBusIn(void) {
#if defined (__DEBUG__)
	printf("volkBusIn\n");
#endif
}

void volkZBusIn(void) {
#if defined (__DEBUG__)
	printf("volkZBusIn\n");
#endif
}

void volkBusClose(void) {
#if defined (__DEBUG__)
	printf("volkBusClose\n");
#endif
}

void volkBusOpen(void) {
#if defined (__DEBUG__)
	printf("volkBusOpen\n");
#endif
}

void volkBusOff(void) {
#if defined (__DEBUG__)
	printf("volkBusOff\n");
#endif
}

void volkISlashO(void) {
#if defined (__DEBUG__)
	printf("volkISlashO\n");
#endif
}

void volkZDrv(void) {
#if defined (__DEBUG__)
	printf("volkZDrv\n");
#endif
}

void volkC64Type(void) {
#if defined (__DEBUG__)
	printf("volkC64Type\n");
#endif
}

void volkC64AtQ(void) {
#if defined (__DEBUG__)
	printf("volkC64AtQ\n");
#endif
}

void volkC64At(void) {
#if defined (__DEBUG__)
	printf("volkC64At\n");
#endif
}

void volkC64Page(void) {
#if defined (__DEBUG__)
	printf("volkC64Page\n");
#endif
}

void volkC64Del(void) {
#if defined (__DEBUG__)
	printf("volkC64Del\n");
#endif
}

void volkC64Cr(void) {
#if defined (__DEBUG__)
	printf("volkC64Cr\n");
#endif
}

void volkC64Emit(void) {
#if defined (__DEBUG__)
	printf("volkC64Emit\n");
#endif
}

void volkC64Expect(void) {
#if defined (__DEBUG__)
	printf("volkC64Expect\n");
#endif
}

void volkC64Decode(void) {
#if defined (__DEBUG__)
	printf("volkC64Decode\n");
#endif
}

void volkC64Key(void) {
#if defined (__DEBUG__)
	printf("volkC64Key\n");
#endif
}

void volkC64KeyQ(void) {
#if defined (__DEBUG__)
	printf("volkC64KeyQ\n");
#endif
}

void volkBlkMove(void) {
#if defined (__DEBUG__)
	printf("volkBlkMove\n");
#endif
}

void volkZCopy(void) {
#if defined (__DEBUG__)
	printf("volkZCopy\n");
#endif
}

void volkTickNumberQ(void) {
#if defined (__DEBUG__)
	printf("volkTickNumberQ\n");
#endif
}

void volkPrevious(void) {
#if defined (__DEBUG__)
	printf("volkPrevious\n");
#endif
}

void volkChar(void) {
#if defined (__DEBUG__)
	printf("volkChar\n");
#endif
}

void volkEndQ(void) {
#if defined (__DEBUG__)
	printf("volkEndQ\n");
#endif
}

void volkBasOn(void) {
#if defined (__DEBUG__)
	printf("volkBasOn\n");
#endif
}

void volkLogo(void) {
#if defined (__DEBUG__)
	printf("volkLogo\n");
#endif
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_ST_FORTH)
void volkPrintALL(void) {
#if defined (__DEBUG__)
	printf("volkPrintALL\n");
#endif
}

void volkRelocate(void) {
#if defined (__DEBUG__)
	printf("volkRelocate\n");
#endif
}

void volkIndexDotScr(void) {
#if defined (__DEBUG__)
	printf("volkIndexDotScr\n");
#endif
}

void volkTickEditFile(void) {
#if defined (__DEBUG__)
	printf("volkTickEditFile\n");
#endif
}

void volkTickRNum(void) {
#if defined (__DEBUG__)
	printf("volkTickRNum\n");
#endif
}

void volkTickScr(void) {
#if defined (__DEBUG__)
	printf("volkTickScr\n");
#endif
}

void volkEdWindowDotScr(void) {
#if defined (__DEBUG__)
	printf("volkEdWindowDotScr\n");
#endif
}

void volkGemBackslashVdiDotScr(void) {
#if defined (__DEBUG__)
	printf("volkGemBackslashVdiDotScr\n");
#endif
}

void volkGemBackslashSuperGemDotScr(void) {
#if defined (__DEBUG__)
	printf("volkGemBackslashSuperGemDotScr\n");
#endif
}

void volkEdiConDotScr(void) {
#if defined (__DEBUG__)
	printf("volkEdiConDotScr\n");
#endif
}

void volkGem(void) {
#if defined (__DEBUG__)
	printf("volkGem\n");
#endif
}

void volkGemBackslashBsicDotScr(void) {
#if defined (__DEBUG__)
	printf("volkGemBackslashBsicDotScr\n");
#endif
}

void volkGemBackslashAesDotScr(void) {
#if defined (__DEBUG__)
	printf("volkGemBackslashAesDotScr\n");
#endif
}

void volkMFree(void) {
#if defined (__DEBUG__)
	printf("volkMFree\n");
#endif
}

void volkMalloc(void) {
#if defined (__DEBUG__)
	printf("volkMalloc\n");
#endif
}

void volkAllocateDotScr(void) {
#if defined (__DEBUG__)
	printf("volkAllocateDotScr\n");
#endif
}

void volkZeroQuote(void) {
#if defined (__DEBUG__)
	printf("volkZeroQuote\n");
#endif
}

void volkCommaZeroQuote(void) {
#if defined (__DEBUG__)
	printf("volkCommaZeroQuote\n");
#endif
}

void volkZeroGreaterCQuote(void) {
#if defined (__DEBUG__)
	printf("volkZeroGreaterCQuote\n");
#endif
}

void volkCGreaterZeroQuote(void) {
#if defined (__DEBUG__)
	printf("volkCGreaterZeroQuote\n");
#endif
}

void volkDollarAdd(void) {
#if defined (__DEBUG__)
	printf("volkDollarAdd\n");
#endif
}

void volkDollarSum(void) {
#if defined (__DEBUG__)
	printf("volkDollarSum\n");
#endif
}

void volkSearch(void) {
#if defined (__DEBUG__)
	printf("volkSearch\n");
#endif
}

void volkCompareText(void) {
#if defined (__DEBUG__)
	printf("volkCompareText\n");
#endif
}

void volkringsDotScr(void) {
#if defined (__DEBUG__)
	printf("volkringsDotScr\n");
#endif
}

void volkAssembleDotScr(void) {
#if defined (__DEBUG__)
	printf("volkAssembleDotScr\n");
#endif
}

void volkBlak(void) {
#if defined (__DEBUG__)
	printf("volkBlak\n");
#endif
}

void volkCPush(void) {
#if defined (__DEBUG__)
	printf("volkCPush\n");
#endif
}

void volkAbsAddr(void) {
#if defined (__DEBUG__)
	printf("volkAbsAddr\n");
#endif
}

void volkDiversesDotScr(void) {
#if defined (__DEBUG__)
	printf("volkDiversesDotScr\n");
#endif
}

void volkForth83DotScr(void) {
#if defined (__DEBUG__)
	printf("volkForth83DotScr\n");
#endif
}

void volkRemoveQ(void) {
#if defined (__DEBUG__)
	printf("volkRemoveQ\n");
#endif
}

void volkMakeDir(void) {
	/* = volkMd */
#if defined (__DEBUG__)
	printf("volkMakeDir\n");
#endif
}

void volkZMore(void) {
#if defined (__DEBUG__)
	printf("volkZMore\n");
#endif
}

void volkDirekt(void) {
#if defined (__DEBUG__)
	printf("volkDirekt\n");
#endif
}

void volkSTRSlashW(void) {
#if defined (__DEBUG__)
	printf("volkSTRSlashW\n");
#endif
}

void volkRWAbs(void) {
#if defined (__DEBUG__)
	printf("volkRWAbs\n");
#endif
}

void volkDrv1(void) {
#if defined (__DEBUG__)
	printf("volkDrv1\n");
#endif
}

void volkDrv0(void) {
#if defined (__DEBUG__)
	printf("volkDrv0\n");
#endif
}

void volkZBlkSlashDrv(void) {
#if defined (__DEBUG__)
	printf("volkZBlkSlashDrv\n");
#endif
}

void volkStType(void) {
#if defined (__DEBUG__)
	printf("volkStType\n");
#endif
}

void volkStAtQ(void) {
#if defined (__DEBUG__)
	printf("volkStAtQ\n");
#endif
}

void volkStAt(void) {
#if defined (__DEBUG__)
	printf("volkStAt\n");
#endif
}

void volkStPage(void) {
#if defined (__DEBUG__)
	printf("volkStPage\n");
#endif
}

void volkStDel(void) {
#if defined (__DEBUG__)
	printf("volkStDel\n");
#endif
}

void volkStCR(void) {
#if defined (__DEBUG__)
	printf("volkStCR\n");
#endif
}

void volkStEmit(void) {
#if defined (__DEBUG__)
	printf("volkStEmit\n");
#endif
}

void volkStExpect(void) {
#if defined (__DEBUG__)
	printf("volkStExpect\n");
#endif
}

void volkStDecode(void) {
#if defined (__DEBUG__)
	printf("volkStDecode\n");
#endif
}

void volkStKey(void) {
#if defined (__DEBUG__)
	printf("volkStKey\n");
#endif
}

void volkStKeyQ(void) {
#if defined (__DEBUG__)
	printf("volkStKeyQ\n");
#endif
}

void volkWrap(void) {
#if defined (__DEBUG__)
	printf("volkWrap\n");
#endif
}

void volkBConOut(void) {
#if defined (__DEBUG__)
	printf("volkBConOut\n");
#endif
}

void volkBConIn(void) {
#if defined (__DEBUG__)
	printf("volkBConIn\n");
#endif
}

void volkBcoStat(void) {
#if defined (__DEBUG__)
	printf("volkBcoStat\n");
#endif
}

void volkBconStat(void) {
#if defined (__DEBUG__)
	printf("volkBconStat\n");
#endif
}

void volkTwoVariable(void) {
#if defined (__DEBUG__)
	printf("volkTwoVariable\n");
#endif
}

void volkTwoConstant(void) {
#if defined (__DEBUG__)
	printf("volkTwoConstant\n");
#endif
}

void volkBlkFetch(void) {
#if defined (__DEBUG__)
	printf("volkBlkFetch\n");
#endif
}

void volkDStar(void) {
#if defined (__DEBUG__)
	printf("volkDStar\n");
#endif
}

void volkDMinus(void) {
#if defined (__DEBUG__)
	printf("volkDMinus\n");
#endif
}

void volkQuoteDrop(void) {
#if defined (__DEBUG__)
	printf("volkQuoteDrop\n");
#endif
}

void volkLNPlusStore(void) {
#if defined (__DEBUG__)
	printf("volkLNPlusStore\n");
#endif
}

void volkL2Store(void) {
#if defined (__DEBUG__)
	printf("volkL2Store\n");
#endif
}

void volkL2Fetch(void) {
#if defined (__DEBUG__)
	printf("volkL2Fetch\n");
#endif
}

void volkLCMove(void) {
#if defined (__DEBUG__)
	printf("volkLCMove\n");
#endif
}

void volkForthStart(void) {
#if defined (__DEBUG__)
	printf("volkForthStart\n");
#endif
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_CPM_FORTH)
void volkSpool(void) {
#if defined (__DEBUG__)
	printf("volkSpool\n");
#endif
}

void volkSpooler(void) {
#if defined (__DEBUG__)
	printf("volkSpooler\n");
#endif
}

void volkShadow(void) {
#if defined (__DEBUG__)
	printf("volkShadow\n");
#endif
}

void volkTasks(void) {
#if defined (__DEBUG__)
	printf("volkTasks\n");
#endif
}

void volkTickS(void) {
	/* "'S" => Capital "S" */
#if defined (__DEBUG__)
	printf("volkTasks\n");
#endif
}
void volkTaskerDotScr(void) {
#if defined (__DEBUG__)
	printf("volkTaskerDotScr\n");
#endif
}

void volkSee(void) {
#if defined (__DEBUG__)
	printf("volkSee\n");
#endif
}

void volkSeeDotScr(void) {
#if defined (__DEBUG__)
	printf("volkSeeDotScr\n");
#endif
}

void volkExternal(void) {
#if defined (__DEBUG__)
	printf("volkExternal\n");
#endif
}

void volkInternal(void) {
#if defined (__DEBUG__)
	printf("volkInternal\n");
#endif
}

void volkQAbortZ(void) {
#if defined (__DEBUG__)
	printf("volkQAbortZ\n");
#endif
}

void volkQEnough(void) {
#if defined (__DEBUG__)
	printf("volkQEnough\n");
#endif
}

void volkReplace(void) {
#if defined (__DEBUG__)
	printf("volkReplace\n");
#endif
}

void volkInsert(void) {
#if defined (__DEBUG__)
	printf("volkInsert\n");
#endif
}

void volkSaveSysDotScr(void) {
#if defined (__DEBUG__)
	printf("volkSaveSysDotScr\n");
#endif
}

void volkCopyDotScr(void) {
#if defined (__DEBUG__)
	printf("volkSaveSysDotScr\n");
#endif
}

void volkAnsi(void) {
#if defined (__DEBUG__)
	printf("volkAnsi\n");
#endif
}

void volkTerminalDotScr(void) {
#if defined (__DEBUG__)
	printf("volkTerminalDotScr\n");
#endif
}

void volkDumb(void) {
#if defined (__DEBUG__)
	printf("volkDumb\n");
#endif
}

void volkLocate(void) {
#if defined (__DEBUG__)
	printf("volkLocate\n");
#endif
}

void volkDark(void) {
#if defined (__DEBUG__)
	printf("volkDark\n");
#endif
}

void volkRvsOff(void) {
#if defined (__DEBUG__)
	printf("volkRvsOff\n");
#endif
}

void volkRvsOn(void) {
#if defined (__DEBUG__)
	printf("volkRvsOn\n");
#endif
}

void volkTerminalColon(void) {
#if defined (__DEBUG__)
	printf("volkTerminalColon\n");
#endif
}

void volkTermColon(void) {
#if defined (__DEBUG__)
	printf("volkTermColon\n");
#endif
}

void volkXinOutDotScr(void) {
#if defined (__DEBUG__)
	printf("volkXinOutDotScr\n");
#endif
}

void volkAss8080DotScr(void) {
#if defined (__DEBUG__)
	printf("volkAss8080DotScr\n");
#endif
}

void volkSourceDotScr(void) {
#if defined (__DEBUG__)
	printf("volkSourceDotScr\n");
#endif
}

void volkJColon(void) {
#if defined (__DEBUG__)
	printf("volkJColon\n");
#endif
}

void volkDriveColon(void) {
#if defined (__DEBUG__)
	printf("volkDriveColon\n");
#endif
}

void volkDirQuote(void) {
#if defined (__DEBUG__)
	printf("volkDirQuote\n");
#endif
}

void volkDotBuffers(void) {
#if defined (__DEBUG__)
	printf("volkDotBuffers\n");
#endif
}

void volkZMakeView(void) {
#if defined (__DEBUG__)
	printf("volkZMakeView\n");
#endif
}

void volkForthFiles(void) {
#if defined (__DEBUG__)
	printf("volkForthFiles\n");
#endif
}

void volkDotSize(void) {
#if defined (__DEBUG__)
	printf("volkDotSize\n");
#endif
}

void volkPostlude(void) {
#if defined (__DEBUG__)
	printf("volkPostlude\n");
#endif
}

void volkRecSlashBlk(void) {
#if defined (__DEBUG__)
	printf("volkRecSlashBlk\n");
#endif
}

void volkBSlashRec(void) {
#if defined (__DEBUG__)
	printf("volkBSlashRec\n");
#endif
}

void volkNumFf(void) {
#if defined (__DEBUG__)
	printf("volkNumFf\n");
#endif
}

void volkQuoteSearch(void) {
#if defined (__DEBUG__)
	printf("volkQuoteSearch\n");
#endif
}

void volkSaveDosBuffers(void) {
#if defined (__DEBUG__)
	printf("volkSaveDosBuffers\n");
#endif
}

void volkCreateZ(void) {
#if defined (__DEBUG__)
	printf("volkCreateZ\n");
#endif
}

void volkPlusToMark(void) {
#if defined (__DEBUG__)
	printf("volkPlusToMark\n");
#endif
}

void volkIPSave(void) {
#if defined (__DEBUG__)
	printf("volkIPSave\n");
#endif
}

void volkRP(void) {
#if defined (__DEBUG__)
	printf("volkRP\n");
#endif
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_PC_FORTH)
void volkPList(void) {
#if defined (__DEBUG__)
	printf("volkPList\n");
#endif
}

void volkPlusPrint(void) {
#if defined (__DEBUG__)
	printf("volkPlusPrint\n");
#endif
}

void volkGraphicsDotPrn(void) {
#if defined (__DEBUG__)
	printf("volkGraphicsDotPrn\n");
#endif
}

void volkEdit(void) {
#if defined (__DEBUG__)
	printf("volkEdit\n");
#endif
}

void volkED(void) {
#if defined (__DEBUG__)
	printf("volkED\n");
#endif
}

void volkEditorDotFb(void) {
#if defined (__DEBUG__)
	printf("volkEditorDotFb\n");
#endif
}

void volkTimes(void) {
#if defined (__DEBUG__)
	printf("volkTimes\n");
#endif
}

void volkOften(void) {
#if defined (__DEBUG__)
	printf("volkOften\n");
#endif
}

void volkTimeFetch(void) {
#if defined (__DEBUG__)
	printf("volkTimeFetch\n");
#endif
}

void volkDateFetch(void) {
#if defined (__DEBUG__)
	printf("volkDateFetch\n");
#endif
}

void volkMinutes(void) {
#if defined (__DEBUG__)
	printf("volkMinutes\n");
#endif
}

void volkSeconds(void) {
#if defined (__DEBUG__)
	printf("volkSeconds\n");
#endif
}

void volkWait(void) {
#if defined (__DEBUG__)
	printf("volkWait\n");
#endif
}

void volkTime(void) {
#if defined (__DEBUG__)
	printf("volkTime\n");
#endif
}

void volkTill(void) {
#if defined (__DEBUG__)
	printf("volkTill\n");
#endif
}

void volkTimeoutQ(void) {
#if defined (__DEBUG__)
	printf("volkTimeoutQ\n");
#endif
}

/* Ticks */
void volkTicks(void) {
#if defined (__DEBUG__)
	printf("volkTimeoutQ\n");
#endif
}

void volkTimerDotFb(void) {
#if defined (__DEBUG__)
	printf("volkTimerDotFb\n");
#endif
}

void volkTaskerDotFb(void) {
#if defined (__DEBUG__)
	printf("volkTaskerDotFb\n");
#endif
}

void volkCall(void) {
#if defined (__DEBUG__)
	printf("volkCall\n");
#endif
}

void volkMsdos(void) {
#if defined (__DEBUG__)
	printf("volkMsdos\n");
#endif
}

void volkFType(void) {
#if defined (__DEBUG__)
	printf("volkFType\n");
#endif
}

void volkFcopy(void) {
#if defined (__DEBUG__)
	printf("volkFcopy\n");
#endif
}

void volkRd(void) {
#if defined (__DEBUG__)
	printf("volkRd\n");
#endif
}

void volkCd(void) {
#if defined (__DEBUG__)
	printf("volkCd\n");
#endif
}

void volkMd(void) {
#if defined (__DEBUG__)
	printf("volkMd\n");
#endif
}

void volkRen(void) {
#if defined (__DEBUG__)
	printf("volkRen\n");
#endif
}

void volkDotPath(void) {
#if defined (__DEBUG__)
	printf("volkDotPath\n");
#endif
}

void volkEmptyFile(void) {
#if defined (__DEBUG__)
	printf("volkEmptyFile\n");
#endif
}

void volkKillfile(void) {
#if defined (__DEBUG__)
	printf("volkKillfile\n");
#endif
}

void volkQFile(void) {
#if defined (__DEBUG__)
	printf("volkQFile\n");
#endif
}

void volkUsedQ(void) {
#if defined (__DEBUG__)
	printf("volkUsedQ\n");
#endif
}

void volkDTA(void) {
#if defined (__DEBUG__)
	printf("volkDTA\n");
#endif
}

void volkFSwap(void) {
#if defined (__DEBUG__)
	printf("volkFSwap\n");
#endif
}

void volkDosDotFb(void) {
#if defined (__DEBUG__)
	printf("volkDosDotFb\n");
#endif
}

void volkZDotStatus(void) {
#if defined (__DEBUG__)
	printf("volkZDotStatus\n");
#endif
}

void volkDotSpace(void) {
#if defined (__DEBUG__)
	printf("volkDotSpace\n");
#endif
}

void volkDotScr(void) {
#if defined (__DEBUG__)
	printf("volkDotScr\n");
#endif
}

void volkDotDR(void) {
#if defined (__DEBUG__)
	printf("volkDotDR\n");
#endif
}

void volkZDotDrv(void) {
#if defined (__DEBUG__)
	printf("volkZDotDrv\n");
#endif
}

void volkDotSP(void) {
#if defined (__DEBUG__)
	printf("volkDotSP\n");
#endif
}

void volkDotBase(void) {
#if defined (__DEBUG__)
	printf("volkDotBase\n");
#endif
}

void volkScroll(void) {
#if defined (__DEBUG__)
	printf("volkScroll\n");
#endif
}

void volkBlankLine(void) {
#if defined (__DEBUG__)
	printf("volkBlankLine\n");
#endif
}

void volkBright(void) {
#if defined (__DEBUG__)
	printf("volkBright\n");
#endif
}

void volkUnderline(void) {
#if defined (__DEBUG__)
	printf("volkUnderline\n");
#endif
}

void volkInvers(void) {
#if defined (__DEBUG__)
	printf("volkInvers\n");
#endif
}

void volkNormal(void) {
#if defined (__DEBUG__)
	printf("volkNormal\n");
#endif
}

void volkSetPage(void) {
#if defined (__DEBUG__)
	printf("volkSetPage\n");
#endif
}

void volkCurShape(void) {
#if defined (__DEBUG__)
	printf("volkCurShape\n");
#endif
}

void volkCurStore(void) {
#if defined (__DEBUG__)
	printf("volkCurStore\n");
#endif
}

void volkCurAtQ(void) {
#if defined (__DEBUG__)
	printf("volkCurAtQ\n");
#endif
}

void volkFull(void) {
#if defined (__DEBUG__)
	printf("volkFull\n");
#endif
}

void volkWindow(void) {
#if defined (__DEBUG__)
	printf("volkWindow\n");
#endif
}

void volkCatt(void) {
#if defined (__DEBUG__)
	printf("volkCatt\n");
#endif
}

void volkZArea(void) {
#if defined (__DEBUG__)
	printf("volkZArea\n");
#endif
}

void volkTerminal(void) {
#if defined (__DEBUG__)
	printf("volkTerminal\n");
#endif
}

void volkAreaColon(void) {
#if defined (__DEBUG__)
	printf("volkAreaColon\n");
#endif
}

void volkStatus(void) {
#if defined (__DEBUG__)
	printf("volkStatus\n");
#endif
}

void volkArea(void) {
#if defined (__DEBUG__)
	printf("volkArea\n");
#endif
}

void volkMultiDotVid(void) {
#if defined (__DEBUG__)
	printf("volkMultiDotVid\n");
#endif
}

void volkDotIf(void) {
#if defined (__DEBUG__)
	printf("volkDotIf\n");
#endif
}

void volkDotElse(void) {
#if defined (__DEBUG__)
	printf("volkDotElse\n");
#endif
}

void volkDotThen(void) {
#if defined (__DEBUG__)
	printf("volkDotThen\n");
#endif
}

void volkQQuote(void) {
#if defined (__DEBUG__)
	printf("volkQQuote\n");
#endif
}

void volkToMonth(void) {
#if defined (__DEBUG__)
	printf("volkToMonth\n");
#endif
}

void volkAttach(void) {
#if defined (__DEBUG__)
	printf("volkAttach\n");
#endif
}

void volkAppend(void) {
#if defined (__DEBUG__)
	printf("volkAppend\n");
#endif
}

void volkRestoreVideo(void) {
#if defined (__DEBUG__)
	printf("volkRestoreVideo\n");
#endif
}

void volkSaveVideo(void) {
#if defined (__DEBUG__)
	printf("volkSaveVideo\n");
#endif
}

void volkVideoFetch(void) {
#if defined (__DEBUG__)
	printf("volkVideoFetch\n");
#endif
}

void volkCSlashDIS(void) {
#if defined (__DEBUG__)
	printf("volkCSlashDIS\n");
#endif
}

void volkLFree(void) {
#if defined (__DEBUG__)
	printf("volkLFree\n");
#endif
}

void volkLAllocate(void) {
#if defined (__DEBUG__)
	printf("volkLAllocate\n");
#endif
}

void volkAdr(void) {
#if defined (__DEBUG__)
	printf("volkAdr\n");
#endif
}

void volkUQ(void) {
#if defined (__DEBUG__)
	printf("volkUQ\n");
#endif
}

void volkTab(void) {
#if defined (__DEBUG__)
	printf("volkTab\n");
#endif
}

void volkDotField(void) {
#if defined (__DEBUG__)
	printf("volkDotField\n");
#endif
}

void volkToExpect(void) {
#if defined (__DEBUG__)
	printf("volkToExpect\n");
#endif
}

void volkStash(void) {
#if defined (__DEBUG__)
	printf("volkStash\n");
#endif
}

void volkCls(void) {
#if defined (__DEBUG__)
	printf("volkCls\n");
#endif
}

void volkTickName(void) {
#if defined (__DEBUG__)
	printf("volkTickName\n");
#endif
}

void volkSav(void) {
#if defined (__DEBUG__)
	printf("volkSav\n");
#endif
}

void volkExtendDotFb(void) {
#if defined (__DEBUG__)
	printf("volkExtendDotFb\n");
#endif
}

void volkEndCode(void) {
#if defined (__DEBUG__)
	printf("volkEndCode\n");
#endif
}

void volkASmDotFb(void) {
#if defined (__DEBUG__)
	printf("volkASmDotFb\n");
#endif
}

void volkVolks4THDotSys(void) {
#if defined (__DEBUG__)
	printf("volkvolks4THDotSys\n");
#endif
}

void volkHelp(void) {
#if defined (__DEBUG__)
	printf("volkHelp\n");
#endif
}

void volkLFSave(void) {
#if defined (__DEBUG__)
	printf("volkLFSave\n");
#endif
}

void volkHColon(void) {
#if defined (__DEBUG__)
	printf("volkHColon\n");
#endif
}

void volkGColon(void) {
#if defined (__DEBUG__)
	printf("volkGColon\n");
#endif
}

void volkFColon(void) {
#if defined (__DEBUG__)
	printf("volkFColon\n");
#endif
}

void volkEColon(void) {
#if defined (__DEBUG__)
	printf("volkEColon\n");
#endif
}

void volkDrv(void) {
#if defined (__DEBUG__)
	printf("volkDrv\n");
#endif
}

void volkPushFile(void) {
#if defined (__DEBUG__)
	printf("volkPushFile\n");
#endif
}

void volkXFCB(void) {
#if defined (__DEBUG__)
	printf("volkXFCB\n");
#endif
}

void volkKernelDotScr(void) {
#if defined (__DEBUG__)
	printf("volkKernelDotScr\n");
#endif
}

void volkAsciz(void) {
#if defined (__DEBUG__)
	printf("volkAsciz\n");
#endif
}

void volkToAsciz(void) {
#if defined (__DEBUG__)
	printf("volkToAsciz\n");
#endif
}

void volkCounted(void) {
#if defined (__DEBUG__)
	printf("volkCounted\n");
#endif
}

void volkPCStore(void) {
#if defined (__DEBUG__)
	printf("volkPCStore\n");
#endif
}

void volkPCFetch(void) {
#if defined (__DEBUG__)
	printf("volkPCFetch\n");
#endif
}

void volkListStore(void) {
#if defined (__DEBUG__)
	printf("volkListStore\n");
#endif
}

void volkCharOut(void) {
#if defined (__DEBUG__)
	printf("volkCharOut\n");
#endif
}

void volkEmptyKeys(void) {
#if defined (__DEBUG__)
	printf("volkEmptyKeys\n");
#endif
}

void volkZKeyFetch(void) {
#if defined (__DEBUG__)
	printf("volkZKeyFetch\n");
#endif
}

void volkLMove(void) {
#if defined (__DEBUG__)
	printf("volkLMove\n");
#endif
}

void volkLType(void) {
#if defined (__DEBUG__)
	printf("volkLType\n");
#endif
}

void volkLCFetch(void) {
#if defined (__DEBUG__)
	printf("volkLCFetch\n");
#endif
}

void volkReturnCode(void) {
#if defined (__DEBUG__)
	printf("volkReturnCode\n");
#endif
}

void volkTrim(void) {
#if defined (__DEBUG__)
	printf("volkTrim\n");
#endif
}

void volkQDiskError(void) {
#if defined (__DEBUG__)
	printf("volkQDiskError\n");
#endif
}

void volkErrorNum(void) {
#if defined (__DEBUG__)
	printf("volkErrorNum\n");
#endif
}

void volkVocs(void) {
#if defined (__DEBUG__)
	printf("volkVocs\n");
#endif
}

void volkLastTick(void) {
#if defined (__DEBUG__)
	printf("volkLastTick\n");
#endif
}

void volkHave(void) {
#if defined (__DEBUG__)
	printf("volkHave\n");
#endif
}

void volkZCapital(void) {
#if defined (__DEBUG__)
	printf("volkZCapital\n");
#endif
}

void volkStarLoop(void) {
#if defined (__DEBUG__)
	printf("volkStarLoop\n");
#endif
}

void volkBSlashSeg(void) {
#if defined (__DEBUG__)
	printf("volkBSlashSeg\n");
#endif
}

void volkDSFetch(void) {
#if defined (__DEBUG__)
	printf("volkDSFetch\n");
#endif
}

void volkFileLink(void) {
#if defined (__DEBUG__)
	printf("volkFileLink\n");
#endif
}

void volkAborted(void) {
#if defined (__DEBUG__)
	printf("volkAborted\n");
#endif
}

#endif

#endif
