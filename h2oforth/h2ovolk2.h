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
	PSMSG_DEBUG("volkForth83")
}

void volkBSlashBlk(void) {
	PSMSG_DEBUG("volkBSlashBlk")
}

void volkDisplay(void) {
	PSMSG_DEBUG("volkDisplay")
}

void volkKeyboard(void) {
	PSMSG_DEBUG("volkKeyboard")
}

void volkNumCr(void) {
	PSMSG_DEBUG("volkNumCr")
}

void volkNumBs(void) {
	PSMSG_DEBUG("volkNumBs")
}

void volkCurOff(void) {
	PSMSG_DEBUG("volkCurOff")
}

void volkCurOn(void) {
	PSMSG_DEBUG("volkCurOn")
}

void volkRestart(void) {
	PSMSG_DEBUG("volkRestart")
}

void volkTickCold(void) {
	PSMSG_DEBUG("volkTickCold")
}

void volkTickRestart(void) {
	PSMSG_DEBUG("volkTickRestart")
}

void volkExpect(void) {
	PSMSG_DEBUG("volkExpect")
}

void volkDecode(void) {
	PSMSG_DEBUG("volkDecode")
}

void volkKeyQ(void) {
	PSMSG_DEBUG("volkKeyQ")
}

void volkKey(void) {
	PSMSG_DEBUG("volkKey")
}

void volkInputColon(void) {
	PSMSG_DEBUG("volkInputColon")
}

void volkCol(void) {
	PSMSG_DEBUG("volkCol")
}

void volkRow(void) {
	PSMSG_DEBUG("volkRow")
}

void volkAtQ(void) {
	PSMSG_DEBUG("volkAtQ")
}

void volkAt(void) {
	PSMSG_DEBUG("volkAt")
}

void volkPage(void) {
	PSMSG_DEBUG("volkPage")
}

void volkDel(void) {
	PSMSG_DEBUG("volkDel")
}

void volkType(void) {
	PSMSG_DEBUG("volkType")
}

void volkCr(void) {
	PSMSG_DEBUG("volkCr")
}

void volkEmit(void) {
	PSMSG_DEBUG("volkEmit")
}

void volkOutputColon(void) {
	PSMSG_DEBUG("volkOutputColon")
}

void volkZForget(void) {
	PSMSG_DEBUG("volkZForget")
}

void volkClear(void) {
	PSMSG_DEBUG("volkClear")
}

void volkCustomRemove(void) {
	PSMSG_DEBUG("volkCustomRemove")
}

void volkAllBuffers(void) {
	PSMSG_DEBUG("volkAllBuffers")
}

void volkConvey(void) {
	PSMSG_DEBUG("volkConvey")
}

void volkCopy(void) {
	PSMSG_DEBUG("volkCopy")
}

void volkUpdate(void) {
	PSMSG_DEBUG("volkUpdate")
}

void volkBlock(void) {
	PSMSG_DEBUG("volkBlock")
}

void volkBuffer(void) {
	PSMSG_DEBUG("volkBuffer")
}

void volkZBlock(void) {
	PSMSG_DEBUG("volkZBlock")
}

void volkZBuffer(void) {
	PSMSG_DEBUG("volkZBuffer")
}

void volkCoreQ(void) {
	PSMSG_DEBUG("volkCoreQ")
}

void volkFile(void) {
	PSMSG_DEBUG("volkFile")
}

void volkUnlock(void) {
	PSMSG_DEBUG("volkUnlock")
}

void volkLock(void) {
	PSMSG_DEBUG("volkLock")
}

void volkPause(void) {
	PSMSG_DEBUG("volkPause")
}

void volkList(void) {
	PSMSG_DEBUG("volkList")
}

void volkLSlashS(void) {
	PSMSG_DEBUG("volkLSlashS")
}

void volkCSlashL(void) {
	PSMSG_DEBUG("volkCSlashL")
}

void volkDotS(void) {
	PSMSG_DEBUG("volkDotS")
}

void volkUDot(void) {
	PSMSG_DEBUG("volkUDot")
}

void volkDot(void) {
	PSMSG_DEBUG("volkDot")
}

void volkDColon(void) {
	PSMSG_DEBUG("volkDColon")
}

void volkUDotR(void) {
	PSMSG_DEBUG("volkUDotR")
}

void volkDotR(void) {
	PSMSG_DEBUG("volkDotR")
}

void volkDDotR(void) {
	PSMSG_DEBUG("volkDDotR")
}

void volkNumS(void) {
	PSMSG_DEBUG("volkNumS")
}

void volkNum(void) {
	PSMSG_DEBUG("volkNum")
}

void volkSign(void) {
	PSMSG_DEBUG("volkSign")
}

void volkNumGreater(void) {
	PSMSG_DEBUG("volkNumGreater")
}

void volkLessNum(void) {
	PSMSG_DEBUG("volkLessNum")
}

void volkHold(void) {
	PSMSG_DEBUG("volkHold")
}

void volkSpaces(void) {
	PSMSG_DEBUG("volkSpaces")
}

void volkSpace(void) {
	PSMSG_DEBUG("volkSpace")
}

void volkTrailing(void) {
	PSMSG_DEBUG("volkTrailing")
}

void volkBl(void) {
	PSMSG_DEBUG("volkBl")
}

void volkErrorQuote(void) {
	PSMSG_DEBUG("volkErrorQuote")
}

void volkAbortQuote(void) {
	PSMSG_DEBUG("volkAbortQuote")
}

void volkZAbortQuote(void) {
	PSMSG_DEBUG("volkZAbortQuote")
}

void volkZError(void) {
	PSMSG_DEBUG("volkZError")
}

void volkQuit(void) {
	PSMSG_DEBUG("volkQuit")
}

void volkTickQuit(void) {
	PSMSG_DEBUG("volkTickQuit")
}

void volkZQuit(void) {
	PSMSG_DEBUG("volkZQuit")
}

void volkDepth(void) {
	PSMSG_DEBUG("volkDepth")
}

void volkRDepth(void) {
	PSMSG_DEBUG("volkRDepth")
}

void volkTo(void) {
	PSMSG_DEBUG("volkTo")
}

void volkPlusThru(void) {
	PSMSG_DEBUG("volkPlusThru")
}

void volkThru(void) {
	PSMSG_DEBUG("volkThru")
}

void volkPlusLoad(void) {
	PSMSG_DEBUG("volkPlusLoad")
}

void volkLoad(void) {
	PSMSG_DEBUG("volkLoad")
}

void volkPush(void) {
	PSMSG_DEBUG("volkPush")
}

void volkDotStatus(void) {
	PSMSG_DEBUG("volkDotStatus")
}

void volkQStack(void) {
	PSMSG_DEBUG("volkQStack")
}

void volkIs(void) {
	PSMSG_DEBUG("volkIs")
}

void volkZIs(void) {
	PSMSG_DEBUG("volkZIs")
}

void volkDefer(void) {
	PSMSG_DEBUG("volkDefer")
}

void volkRightBracket(void) {
	PSMSG_DEBUG("volkRightBracket")
}

void volkLeftBracket(void) {
	PSMSG_DEBUG("volkLeftBracket")
}

void volkInterpret(void) {
	PSMSG_DEBUG("volkInterpret")
}

void volkNoDotExtensions(void) {
	PSMSG_DEBUG("volkNoDotExtensions")
}

void volkNotFound(void) {
	PSMSG_DEBUG("volkNotFound")
}

void volkXTick(void) {
	PSMSG_DEBUG("volkXTick")
}

void volkXCompile(void) {
	PSMSG_DEBUG("volkXCompile")
}

void volkFind(void) {
	PSMSG_DEBUG("volkFind")
}

void volkZFind(void) {
	PSMSG_DEBUG("volkZFind")
}

void volkWords(void) {
	PSMSG_DEBUG("volkWords")
}

void volkOrder(void) {
	PSMSG_DEBUG("volkOrder")
}

void volkDefinitions(void) {
	PSMSG_DEBUG("volkDefinitions")
}

void volkOnlyForth(void) {
	PSMSG_DEBUG("volkOnlyForth")
}

void volkOnly(void) {
	PSMSG_DEBUG("volkOnly")
}

void volkForth(void) {
	PSMSG_DEBUG("volkForth")
}

void volkVocabulary(void) {
	PSMSG_DEBUG("volkVocabulary")
}

void volkToss(void) {
	PSMSG_DEBUG("volkToss")
}

void volkAlso(void) {
	PSMSG_DEBUG("volkAlso")
}

void volkUAllot(void) {
	PSMSG_DEBUG("volkUAllot")
}

void volkVariable(void) {
	PSMSG_DEBUG("volkVariable")
}

void volkConstant(void) {
	PSMSG_DEBUG("volkConstant")
}

void volkSemicolon(void) {
	PSMSG_DEBUG("volkSemicolon")
}

void volkColon(void) {
	PSMSG_DEBUG("volkColon")
}

void volkCreateColon(void) {
	PSMSG_DEBUG("volkCreateColon")
}

void volkDotName(void) {
	PSMSG_DEBUG("volkDotName")
}

void volkToBody(void) {
	PSMSG_DEBUG("volkToBody")
}

void volkNameFrom(void) {
	PSMSG_DEBUG("volkNameFrom")
}

void volkToName(void) {
	PSMSG_DEBUG("volkToName")
}

void volkNFaq(void) {
	PSMSG_DEBUG("volkNFaq")
}

void volkCreate(void) {
	PSMSG_DEBUG("volkCreate")
}

void volkWarning(void) {
	PSMSG_DEBUG("volkWarning")
}

void volkVerticalBar(void) {
	PSMSG_DEBUG("volkVerticalBar")
}

void volkQHead(void) {
	PSMSG_DEBUG("volkQHead")
}

void volkDoes(void) {
	PSMSG_DEBUG("volkDoes")
}

void volkHeapQ(void) {
	PSMSG_DEBUG("volkHeapQ")
}

void volkHeap(void) {
	PSMSG_DEBUG("volkHeap")
}

void volkHallot(void) {
	PSMSG_DEBUG("volkHallot")
}

void volkClearStack(void) {
	PSMSG_DEBUG("volkClearStack")
}

void volkRestrict(void) {
	PSMSG_DEBUG("volkRestrict")
}

void volkImmediate(void) {
	PSMSG_DEBUG("volkImmediate")
}

void volkRecursive(void) {
	PSMSG_DEBUG("volkRecursive")
}

void volkReveal(void) {
	PSMSG_DEBUG("volkReveal")
}

void volkHide(void) {
	PSMSG_DEBUG("volkHide")
}

void volkLast(void) {
	PSMSG_DEBUG("volkLast")
}

void volkNumber(void) {
	PSMSG_DEBUG("volkNumber")
}

void volkNumberQ(void) {
	PSMSG_DEBUG("volkNumberQ")
}

void volkConvert(void) {
	PSMSG_DEBUG("volkConvert")
}

void volkAccumulate(void) {
	PSMSG_DEBUG("volkAccumulate")
}

void volkDecimal(void) {
	PSMSG_DEBUG("volkDecimal")
}

void volkBackslashNeeds(void) {
	PSMSG_DEBUG("volkBackslashNeeds")
}

void volkBackslashBackslash(void) {
	PSMSG_DEBUG("volkBackslashBackslash")
}

void volkBackslash(void) {
	PSMSG_DEBUG("volkBackslash")
}

void volkDotParen(void) {
	PSMSG_DEBUG("volkDotParen")
}

void volkParen(void) {
	PSMSG_DEBUG("volkParen")
}

void volkDotQuote(void) {
	PSMSG_DEBUG("volkDotQuote")
}

void volkParenDotQuote(void) {
	PSMSG_DEBUG("volkParenDotQuote")
}

void volkQuote(void) {
	PSMSG_DEBUG("volkQuote")
}

void volkParenQuote(void) {
	PSMSG_DEBUG("volkParenQuote")
}

void volkQuoteLit(void) {
	PSMSG_DEBUG("volkQuoteLit")
}

void volkAscii(void) {
	PSMSG_DEBUG("volkAscii")
}

void volkState(void) {
	PSMSG_DEBUG("volkState")
}

void volkName(void) {
	PSMSG_DEBUG("volkName")
}

void volkParse(void) {
	PSMSG_DEBUG("volkParse")
}

void volkWord(void) {
	PSMSG_DEBUG("volkWord")
}

void volkSource(void) {
	PSMSG_DEBUG("volkSource")
}

void volkCapital(void) {
	PSMSG_DEBUG("volkCapital")
}

void volkSlashString(void) {
	PSMSG_DEBUG("volkSlashString")
}

void volkSkip(void) {
	PSMSG_DEBUG("volkSkip")
}

void volkScan(void) {
	PSMSG_DEBUG("volkScan")
}

void volkQuery(void) {
	PSMSG_DEBUG("volkQuery")
}

void volkTib(void) {
	PSMSG_DEBUG("volkTib")
}

void volkSpan(void) {
	PSMSG_DEBUG("volkSpan")
}

void volkBlk(void) {
	PSMSG_DEBUG("volkBlk")
}

void volkToIn(void) {
	PSMSG_DEBUG("volkToIn")
}

void volkToTib(void) {
	PSMSG_DEBUG("volkToTib")
}

void volkNumTib(void) {
	PSMSG_DEBUG("volkNumTib")
}

void volkCompile(void) {
	PSMSG_DEBUG("volkCompile")
}

void volkCComma(void) {
	PSMSG_DEBUG("volkCComma")
}

void volkComma(void) {
	PSMSG_DEBUG("volkComma")
}

void volkAllot(void) {
	PSMSG_DEBUG("volkAllot")
}

void volkPad(void) {
	PSMSG_DEBUG("volkPad")
}

void volkHere(void) {
	PSMSG_DEBUG("volkHere")
}

void volkFill(void) {
	PSMSG_DEBUG("volkFill")
}

void volkErase(void) {
	PSMSG_DEBUG("volkErase")
}

void volkCount(void) {
	PSMSG_DEBUG("volkCount")
}

void volkPlace(void) {
	PSMSG_DEBUG("volkPlace")
}

void volkMove(void) {
	PSMSG_DEBUG("volkMove")
}

void volkCMoveTo(void) {
	PSMSG_DEBUG("volkCMoveTo")
}

void volkCMove(void) {
	PSMSG_DEBUG("volkCMove")
}

void volkUdSlashMod(void) {
	PSMSG_DEBUG("volkUdSlashMod")
}

void volkUSlashMod(void) {
	PSMSG_DEBUG("volkUSlashMod")
}

void volkStarSlash(void) {
	PSMSG_DEBUG("volkStarSlash")
}

void volkStarSlashMod(void) {
	PSMSG_DEBUG("volkStarSlashMod")
}

void volkMod(void) {
	PSMSG_DEBUG("volkMod")
}

void volkSlash(void) {
	PSMSG_DEBUG("volkSlash")
}

void volkSlashMod(void) {
	PSMSG_DEBUG("volkSlashMod")
}

void volkTwoSlash(void) {
	PSMSG_DEBUG("volkTwoSlash")
}

void volkMSlashMod(void) {
	PSMSG_DEBUG("volkMSlashMod")
}

void volkUmSlashMod(void) {
	PSMSG_DEBUG("volkUmSlashMod")
}

void volkTwoStar(void) {
	PSMSG_DEBUG("volkTwoStar")
}

void volkStar(void) {
	PSMSG_DEBUG("volkStar")
}

void volkMStar(void) {
	PSMSG_DEBUG("volkMStar")
}

void volkUmStar(void) {
	PSMSG_DEBUG("volkUmStar")
}

void volkLeave(void) {
	PSMSG_DEBUG("volkLeave")
}

void volkLoop(void) {
	PSMSG_DEBUG("volkLoop")
}

void volkQDo(void) {
	PSMSG_DEBUG("volkQDo")
}

void volkDo(void) {
	PSMSG_DEBUG("volkDo")
}

void volkUntil(void) {
	PSMSG_DEBUG("volkUntil")
}

void volkRepeat(void) {
	PSMSG_DEBUG("volkRepeat")
}

void volkWhile(void) {
	PSMSG_DEBUG("volkWhile")
}

void volkBegin(void) {
	PSMSG_DEBUG("volkBegin")
}

void volkElse(void) {
	PSMSG_DEBUG("volkElse")
}

void volkThen(void) {
	PSMSG_DEBUG("volkThen")
}

void volkIf(void) {
	PSMSG_DEBUG("volkIf")
}

void volkQPairs(void) {
	PSMSG_DEBUG("volkQPairs")
}

void volkFromResolve(void) {
	PSMSG_DEBUG("volkFromResolve")
}

void volkFromMark(void) {
	PSMSG_DEBUG("volkFromMark")
}

void volkToResolve(void) {
	PSMSG_DEBUG("volkToResolve")
}

void volkToMark(void) {
	PSMSG_DEBUG("volkToMark")
}

void volkQBranch(void) {
	PSMSG_DEBUG("volkQBranch")
}

void volkBranch(void) {
	PSMSG_DEBUG("volkBranch")
}

void volkJ(void) {
	PSMSG_DEBUG("volkJ")
}

void volkI(void) {
	PSMSG_DEBUG("volkI")
}

void volkZPlusLoop(void) {
	PSMSG_DEBUG("volkZPlusLoop")
}

void volkZLoop(void) {
	PSMSG_DEBUG("volkZLoop")
}

void volkEndLoop(void) {
	PSMSG_DEBUG("volkEndLoop")
}

void volkBounds(void) {
	PSMSG_DEBUG("volkBounds")
}

void volkZQDo(void) {
	PSMSG_DEBUG("volkZQDo")
}

void volkZDo(void) {
	PSMSG_DEBUG("volkZDo")
}

void volkAbs(void) {
	PSMSG_DEBUG("volkAbs")
}

void volkDAbs(void) {
	PSMSG_DEBUG("volkDAbs")
}

void volkUGreater(void) {
	PSMSG_DEBUG("volkUGreater")
}

void volkZeroUnequal(void) {
	PSMSG_DEBUG("volkZeroUnequal")
}

void volkZeroGreater(void) {
	PSMSG_DEBUG("volkZeroGreater")
}

void volkGreater(void) {
	PSMSG_DEBUG("volkGreater")
}

void volkULess(void) {
	PSMSG_DEBUG("volkULess")
}

void volkLess(void) {
	PSMSG_DEBUG("volkLess")
}

void volkZeroEqual(void) {
	PSMSG_DEBUG("volkZeroEqual")
}

void volkLiteral(void) {
	PSMSG_DEBUG("volkLiteral")
}

void volkLit(void) {
	PSMSG_DEBUG("volkLit")
}

void volkOff(void) {
	PSMSG_DEBUG("volkOff")
}

void volkFour(void) {
	PSMSG_DEBUG("volkFour")
}

void volkThree(void) {
	PSMSG_DEBUG("volkThree")
}

void volkTwo(void) {
	PSMSG_DEBUG("volkTwo")
}

void volkOne(void) {
	PSMSG_DEBUG("volkOne")
}

void volkZero(void) {
	PSMSG_DEBUG("volkZero")
}

void volkMinusOne(void) {
	PSMSG_DEBUG("volkMinusOne")
}

void volkFalse(void) {
	PSMSG_DEBUG("volkFalse")
}

void volkTrue(void) {
	PSMSG_DEBUG("volkTrue")
}

void volkTwoMinus(void) {
	PSMSG_DEBUG("volkTwoMinus")
}

void volkOneMinus(void) {
	PSMSG_DEBUG("volkOneMinus")
}

void volkThreePlus(void) {
	PSMSG_DEBUG("volkThreePlus")
}

void volkTwoPlus(void) {
	PSMSG_DEBUG("volkTwoPlus")
}

void volkOnePlus(void) {
	PSMSG_DEBUG("volkOnePlus")
}

void volkDPlus(void) {
	PSMSG_DEBUG("volkDPlus")
}

void volkDNegate(void) {
	PSMSG_DEBUG("volkDNegate")
}

void volkNegate(void) {
	PSMSG_DEBUG("volkNegate")
}

void volkNot(void) {
	PSMSG_DEBUG("volkNot")
}

void volkMinus(void) {
	PSMSG_DEBUG("volkMinus")
}

void volkXOR(void) {
	PSMSG_DEBUG("volkXOR")
}

void volkAnd(void) {
	PSMSG_DEBUG("volkAnd")
}

void volkOr(void) {
	PSMSG_DEBUG("volkOr")
}

void volkPlus(void) {
	PSMSG_DEBUG("volkPlus")
}

void volkTwoDup(void) {
	PSMSG_DEBUG("volkTwoDup")
}

void volkTwoSwap(void) {
	PSMSG_DEBUG("volkTwoSwap")
}

void volkRoll(void) {
	PSMSG_DEBUG("volkRoll")
}

void volkPick(void) {
	PSMSG_DEBUG("volkPick")
}

void volkUnder(void) {
	PSMSG_DEBUG("volkUnder")
}

void volkNip(void) {
	PSMSG_DEBUG("volkNip")
}

void volkMinusRot(void) {
	PSMSG_DEBUG("volkMinusRot")
}

void volkRot(void) {
	PSMSG_DEBUG("volkRot")
}

void volkOver(void) {
	PSMSG_DEBUG("volkOver")
}

void volkQDup(void) {
	PSMSG_DEBUG("volkQDup")
}

void volkDup(void) {
	PSMSG_DEBUG("volkDup")
}

void volkSwap(void) {
	PSMSG_DEBUG("volkSwap")
}

void volkDrop(void) {
	PSMSG_DEBUG("volkDrop")
}

void volkPlusStore(void) {
	PSMSG_DEBUG("volkPlusStore")
}

void volkStore(void) {
	PSMSG_DEBUG("volkStore")
}

void volkFetch(void) {
	PSMSG_DEBUG("volkFetch")
}

void volkCToggle(void) {
	PSMSG_DEBUG("volkCToggle")
}

void volkCStore(void) {
	PSMSG_DEBUG("volkCStore")
}

void volkCFetch(void) {
	PSMSG_DEBUG("volkCFetch")
}

void volkPerform(void) {
	PSMSG_DEBUG("volkPerform")
}

void volkExecute(void) {
	PSMSG_DEBUG("volkExecute")
}

void volkQExit(void) {
	PSMSG_DEBUG("volkQExit")
}

void volkUnnest(void) {
	PSMSG_DEBUG("volkUnnest")
}

void volkExit(void) {
	PSMSG_DEBUG("volkExit")
}

void volkRDrop(void) {
	PSMSG_DEBUG("volkRDrop")
}

void volkRFetch(void) {
	PSMSG_DEBUG("volkRFetch")
}

void volkRFrom(void) {
	PSMSG_DEBUG("volkRFrom")
}

void volkToR(void) {
	PSMSG_DEBUG("volkToR")
}

void volkRPStore(void) {
	PSMSG_DEBUG("volkRPStore")
}

void volkRPFetch(void) {
	PSMSG_DEBUG("volkRPFetch")
}

void volkUPStore(void) {
	PSMSG_DEBUG("volkUPStore")
}

void volkUPFetch(void) {
	PSMSG_DEBUG("volkUPFetch")
}

void volkSPStore(void) {
	PSMSG_DEBUG("volkSPStore")
}

void volkSPFetch(void) {
	PSMSG_DEBUG("volkSPFetch")
}

void volkUdp(void) {
	PSMSG_DEBUG("volkUdp")
}

void volkVocLink(void) {
	PSMSG_DEBUG("volkVocLink")
}

void volkErrorhandler(void) {
	PSMSG_DEBUG("volkErrorhandler")
}

void volkInput(void) {
	PSMSG_DEBUG("volkInput")
}

void volkOutput(void) {
	PSMSG_DEBUG("volkOutput")
}

void volkBase(void) {
	PSMSG_DEBUG("volkBase")
}

void volkOffset(void) {
	PSMSG_DEBUG("volkOffset")
}

void volkDP(void) {
	PSMSG_DEBUG("volkDP")
}

void volkR0(void) {
	PSMSG_DEBUG("volkR0")
}

void volkS0(void) {
	PSMSG_DEBUG("volkS0")
}

void volkOrigin(void) {
	PSMSG_DEBUG("volkOrigin")
}

void volkNoop(void) {
	PSMSG_DEBUG("volkNoop")
}

void volkRecover(void) {
	PSMSG_DEBUG("volkRecover")
}

void volkEndTrace(void) {
	PSMSG_DEBUG("volkEndTrace")
}

void volkZeroLess(void) {
	PSMSG_DEBUG("volkZeroLess")
}

void volkEqual(void) {
	PSMSG_DEBUG("volkEqual")
}

void volkExtend(void) {
	PSMSG_DEBUG("volkExtend")
}

void volkUMin(void) {
	PSMSG_DEBUG("volkUMin")
}

void volkUMax(void) {
	PSMSG_DEBUG("volkUMax")
}

void volkMax(void) {
	PSMSG_DEBUG("volkMax")
}

void volkMin(void) {
	PSMSG_DEBUG("volkMin")
}

void volkDLess(void) {
	PSMSG_DEBUG("volkDLess")
}

void volkDEqual(void) {
	PSMSG_DEBUG("volkDEqual")
}

void volkCaseQ(void) {
	PSMSG_DEBUG("volkDEqual")
}

void volkDZeroEqual(void) {
	PSMSG_DEBUG("volkDZeroEqual")
}

void volkUWithin(void) {
	PSMSG_DEBUG("volkUWithin")
}

void volkDigitQ(void) {
	PSMSG_DEBUG("volkDigitQ")
}

void volkCold(void) {
	PSMSG_DEBUG("volkCold")
}

void volkCommaQuote(void) {
	PSMSG_DEBUG("volkCommaQuote")
}

void volkNullStringQ(void) {
	PSMSG_DEBUG("volkNullStringQ")
}

void volkDpl(void) {
	PSMSG_DEBUG("volkDpl")
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_ST_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_CPM_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_PC_FORTH)
void volkListing(void) {
	PSMSG_DEBUG("volkListing")
}

void volkDocument(void) {
	PSMSG_DEBUG("volkDocument")
}

void volkPThru(void) {
	PSMSG_DEBUG("volkPThru")
}

void volkPrint(void) {
	PSMSG_DEBUG("volkPrint")
}

void volkPrinter(void) {
	PSMSG_DEBUG("volkPrinter")
}

void volkDump(void) {
	PSMSG_DEBUG("volkDump")
}

void volkTools(void) {
	PSMSG_DEBUG("volkTools")
}

void volkToolsDotFb(void) {
	PSMSG_DEBUG("volkToolsDotFb")
}

void volkBye(void) {
	PSMSG_DEBUG("volkBye")
}

void volkView(void) {
	PSMSG_DEBUG("volkView")
}

void volkL(void) {
	PSMSG_DEBUG("volkL")
}

void volkV(void) {
	PSMSG_DEBUG("volkV")
}

void volkDelete(void) {
	PSMSG_DEBUG("volkDelete")
}

void volkCaps(void) {
	PSMSG_DEBUG("volkCaps")
}

void volkCColon(void) {
	PSMSG_DEBUG("volkCColon")
}

void volkBColon(void) {
	PSMSG_DEBUG("volkBColon")
}

void volkAColon(void) {
	PSMSG_DEBUG("volkAColon")
}

void volkDir(void) {
	PSMSG_DEBUG("volkDir")
}

void volkMore(void) {
	PSMSG_DEBUG("volkDir")
}

void volkFiles(void) {
	PSMSG_DEBUG("volkFiles")
}

void volkInclude(void) {
	PSMSG_DEBUG("volkInclude")
}

void volkLoadFrom(void) {
	PSMSG_DEBUG("volkLoadFrom")
}

void volkFrom(void) {
	PSMSG_DEBUG("volkLoadFrom")
}

void volkMakefile(void) {
	PSMSG_DEBUG("volkMakefile")
}

void volkUse(void) {
	PSMSG_DEBUG("volkUse")
}

void volkMake(void) {
	PSMSG_DEBUG("volkMake")
}

void volkAssign(void) {
	PSMSG_DEBUG("volkAssign")
}

void volkClose(void) {
	PSMSG_DEBUG("volkClose")
}

void volkOpen(void) {
	PSMSG_DEBUG("volkOpen")
}

void volkFileQ(void) {
	PSMSG_DEBUG("volkFileQ")
}

void volkCapacity(void) {
	PSMSG_DEBUG("volkCapacity")
}

void volkNumEsc(void) {
	PSMSG_DEBUG("volkNumEsc")
}

void volkNumLf(void) {
	PSMSG_DEBUG("volkNumLf")
}

void volkQCr(void) {
	PSMSG_DEBUG("volkQCr")
}

void volkStopQ(void) {
	PSMSG_DEBUG("volkStopQ")
}

void volkSave(void) {
	PSMSG_DEBUG("volkSave")
}

void volkEmpty(void) {
	PSMSG_DEBUG("volkEmpty")
}

void volkForget(void) {
	PSMSG_DEBUG("volkForget")
}

void volkIsFileFetch(void) {
	PSMSG_DEBUG("volkIsFileFetch")
}

void volkDDot(void) {
	PSMSG_DEBUG("volkDDot")
}

void volkRNum(void) {
	PSMSG_DEBUG("volkRNum")
}

void volkScr(void) {
	PSMSG_DEBUG("volkScr")
}

void volkAbort(void) {
	PSMSG_DEBUG("volkAbort")
}

void volkTickAbort(void) {
	PSMSG_DEBUG("volkTickAbort")
}

void volkStandardISlashO(void) {
	PSMSG_DEBUG("volkStandardISlashO")
}

void volkZLoad(void) {
	PSMSG_DEBUG("volkZLoad")
}

void volkContext(void) {
	PSMSG_DEBUG("volkContext")
}

void volkCurrent(void) {
	PSMSG_DEBUG("volkCurrent")
}

void volkVp(void) {
	PSMSG_DEBUG("volkVp")
}

void volkAlias(void) {
	PSMSG_DEBUG("volkAlias")
}

void volkUser(void) {
	PSMSG_DEBUG("volkUser")
}

void volkMakeView(void) {
	PSMSG_DEBUG("volkMakeView")
}

void volkHAlign(void) {
	PSMSG_DEBUG("volkHAlign")
}

void volkAlign(void) {
	PSMSG_DEBUG("volkAlign")
}

void volkLoadFile(void) {
	PSMSG_DEBUG("volkLoadFile")
}

void volkEven(void) {
	PSMSG_DEBUG("volkEven")
}

void volkOn(void) {
	PSMSG_DEBUG("volkOn")
}

void volkFourMinus(void) {
	PSMSG_DEBUG("volkFourMinus")
}

void volkFourPlus(void) {
	PSMSG_DEBUG("volkFourPlus")
}

void volkTwoStore(void) {
	PSMSG_DEBUG("volkTwoStore")
}

void volkTwoFetch(void) {
	PSMSG_DEBUG("volkTwoFetch")
}

void volkMinusRoll(void) {
	PSMSG_DEBUG("volkMinusRoll")
}

void volkSaveSystem(void) {
	PSMSG_DEBUG("volkDebug")
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_C64_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_CPM_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_PC_FORTH)
void volkAssembler(void) {
	PSMSG_DEBUG("volkAssembler")
}

void volkBSlashBuf(void) {
	PSMSG_DEBUG("volkBSlashBuf")
}

void volkPrev(void) {
	PSMSG_DEBUG("volkPrev")
}

void volkTick(void) {
	PSMSG_DEBUG("volkTick")
}

void volkHex(void) {
	PSMSG_DEBUG("volkHex")
}

void volkCLit(void) {
	PSMSG_DEBUG("volkCLit")
}

void volkTwoDrop(void) {
	PSMSG_DEBUG("volkTwoDrop")
}

void volkRSlashW(void) {
	PSMSG_DEBUG("volkRSlashW")
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_C64_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_ST_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_PC_FORTH)
void volkToDrive(void) {
	PSMSG_DEBUG("volkToDrive")
}

void volkLDump(void) {
	PSMSG_DEBUG("volkLDump")
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_C64_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_ST_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_CPM_FORTH)
void volkDrvInit(void) {
	PSMSG_DEBUG("volkDrvInit")
}

void volkConStore(void) {
	PSMSG_DEBUG("volkConStore")
}

void volkGetKey(void) {
	PSMSG_DEBUG("volkGetKey")
}

void volkFreeBuffer(void) {
	PSMSG_DEBUG("volkFreeBuffer")
}

void volkAllotBuffer(void) {
	PSMSG_DEBUG("volkAllotBuffer")
}

void volkFirst(void) {
	PSMSG_DEBUG("volkFirst")
}

void volkLimit(void) {
	PSMSG_DEBUG("volkLimit")
}

void volkBuffers(void) {
	PSMSG_DEBUG("volkBuffers")
}

void volkPlusLoop(void) {
	PSMSG_DEBUG("volkPlusLoop")
}

void volkFlush(void) {
	PSMSG_DEBUG("volkFlush")
}

void volkEmptyBuffers(void) {
	PSMSG_DEBUG("volkEmptyBuffers")
}

void volkSaveBuffers(void) {
	PSMSG_DEBUG("volkSaveBuffers")
}

#endif


#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_C64_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_ST_FORTH)
void volkIndex(void) {
	PSMSG_DEBUG("volkIndex")
}

void volkDrvQ(void) {
	PSMSG_DEBUG("volkDrvQ")
}

void volkToInterpret(void) {
	PSMSG_DEBUG("volkToInterpret")
}

void volkCapitalize(void) {
	PSMSG_DEBUG("volkCapitalize")
}

void volkBlkSlashDrv(void) {
	PSMSG_DEBUG("volkBlkSlashDrv")
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_ST_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_CPM_FORTH)
void volkPrinterDotScr(void) {
	PSMSG_DEBUG("volkPrinterDotScr")
}

void volkRelocateDotScr(void) {
	PSMSG_DEBUG("volkRelocateDotScr")
}

void volkTraceTick(void) {
	PSMSG_DEBUG("volkTraceTick")
}

void volkDebug(void) {
	PSMSG_DEBUG("volkDebug")
}

void volkDotBlk(void) {
	PSMSG_DEBUG("volkDotBlk")
}

void volkStartupDotScr(void) {
	PSMSG_DEBUG("volkStartupDotScr")
}

void volkFileIntDotScr(void) {
	PSMSG_DEBUG("volkFileIntDotScr")
}

void volkFilesQuote(void) {
	PSMSG_DEBUG("volkFilesQuote")
}

void volkEof(void) {
	PSMSG_DEBUG("volkEof")
}

void volkCurRite(void) {
	PSMSG_DEBUG("volkCurRite")
}

void volkCurLeft(void) {
	PSMSG_DEBUG("volkCurLeft")
}

void volkZWord(void) {
	PSMSG_DEBUG("volkZWord")
}

void volkUP(void) {
	PSMSG_DEBUG("volkUP")
}

void volkToolsDotScr(void) {
	PSMSG_DEBUG("volkToolsDotScr")
}

void volkEditorDotScr(void) {
	PSMSG_DEBUG("volkEditorDotScr")
}

void volkZView(void) {
	PSMSG_DEBUG("volkZView")
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_CPM_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_PC_FORTH)
void volkRendezvous(void) {
	PSMSG_DEBUG("volkRendezvous")
}

void volkTask(void) {
	PSMSG_DEBUG("volkTask")
}

void volkWake(void) {
	PSMSG_DEBUG("volkWake")
}

void volkSleep(void) {
	PSMSG_DEBUG("volkSleep")
}

void volkActivate(void) {
	PSMSG_DEBUG("volkActivate")
}

void volkPass(void) {
	PSMSG_DEBUG("volkPass")
}

void volkMultiTask(void) {
	PSMSG_DEBUG("volkMultiTask")
}

void volkSingleTask(void) {
	PSMSG_DEBUG("volkSingleTask")
}

void volkStop(void) {
	PSMSG_DEBUG("volkStop")
}

void volkFix(void) {
	PSMSG_DEBUG("volkFix")
}

void volkNumDel(void) {
	PSMSG_DEBUG("volkNumDel")
}

void volkCtrl(void) {
	PSMSG_DEBUG("volkCtrl")
}

void volkUpdatedQ(void) {
	PSMSG_DEBUG("volkUpdatedQ")
}

void volkEditor(void) {
	PSMSG_DEBUG("volkEditor")
}

void volkBlank(void) {
	PSMSG_DEBUG("volkBlank")
}

void volkZKey(void) {
	PSMSG_DEBUG("volkZKey")
}

void volkZExpect(void) {
	PSMSG_DEBUG("volkZExpect")
}

void volkZDecode(void) {
	PSMSG_DEBUG("volkZDecode")
}

void volkZDel(void) {
	PSMSG_DEBUG("volkZDel")
}

void volkZCr(void) {
	PSMSG_DEBUG("volkZCr")
}

void volkZEmit(void) {
	PSMSG_DEBUG("volkZEmit")
}

void volkZType(void) {
	PSMSG_DEBUG("volkZType")
}

void volkZPage(void) {
	PSMSG_DEBUG("volkZPage")
}

void volkZAtQ(void) {
	PSMSG_DEBUG("volkZAtQ")
}

void volkZAt(void) {
	PSMSG_DEBUG("volkZAt")
}

void volkCSlashCol(void) {
	PSMSG_DEBUG("volkCSlashCol")
}

void volkCSlashRow(void) {
	PSMSG_DEBUG("volkCSlashRow")
}

void volkLabel(void) {
	PSMSG_DEBUG("volkLabel")
}

void volkToLabel(void) {
	PSMSG_DEBUG("volkToLabel")
}

void volkSemicolonCode(void) {
	PSMSG_DEBUG("volkSemicolonCode")
}

void volkCode(void) {
	PSMSG_DEBUG("volkCode")
}

void volkSaveFile(void) {
	PSMSG_DEBUG("volkSaveFile")
}

void volkDirect(void) {
	PSMSG_DEBUG("volkDirect")
}

void volkZRSlashW(void) {
	PSMSG_DEBUG("volkZRSlashW")
}

void volkNumBel(void) {
	PSMSG_DEBUG("volkNumBel")
}

void volkNumTab(void) {
	PSMSG_DEBUG("volkNumTab")
}

void volkDos(void) {
	PSMSG_DEBUG("volkDos")
}

void volkEmptyBuf(void) {
	PSMSG_DEBUG("volkEmptyBuf")
}

void volkZCoreQ(void) {
	PSMSG_DEBUG("volkZCoreQ")
}

void volkFromFile(void) {
	PSMSG_DEBUG("volkFromFile")
}

void volkIsFile(void) {
	PSMSG_DEBUG("volkIsFile")
}

void volkPrompt(void) {
	PSMSG_DEBUG("volkPrompt")
}

void volkZPrompt(void) {
	PSMSG_DEBUG("volkZPrompt")
}

void volkParser(void) {
	PSMSG_DEBUG("volkParser")
}

void volkRoot(void) {
	PSMSG_DEBUG("volkRoot")
}

void volkBodyFrom(void) {
	PSMSG_DEBUG("volkBodyFrom")
}

void volkZNameFrom(void) {
	PSMSG_DEBUG("volkZNameFrom")
}

void volkZSemicolonCode(void) {
	PSMSG_DEBUG("volkZSemicolonCode")
}

void volkUpper(void) {
	PSMSG_DEBUG("volkUpper")
}

void volkFlip(void) {
	PSMSG_DEBUG("volkFlip")
}

void volkZeroEqualExit(void) {
	PSMSG_DEBUG("volkZeroEqualExit")
}

void volkRemove(void) {
	PSMSG_DEBUG("volkRemove")
}

void volkZKeyQ(void) {
	PSMSG_DEBUG("volkZKeyQ")
}

void volkTipp(void) {
	PSMSG_DEBUG("volkTipp")
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_C64_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_CPM_FORTH)
void volkPrintableQ(void) {
	PSMSG_DEBUG("volkPrintableQ")
}

void volkDiskErr(void) {
	PSMSG_DEBUG("volkDiskErr")
}

void volkZDiskErr(void) {
	PSMSG_DEBUG("volkZDiskErr")
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_C64_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_PC_FORTH)
void volkDrive(void) {
	PSMSG_DEBUG("volkDrive")
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_ST_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_PC_FORTH)
void volkBell(void) {
	PSMSG_DEBUG("volkBell")
}

void volkAbortZ(void) {
	PSMSG_DEBUG("volkAbortZ")
}

void volkPath(void) {
	PSMSG_DEBUG("volkPath")
}

void volkArguments(void) {
	PSMSG_DEBUG("volkArguments")
}

void volkTwoOver(void) {
	PSMSG_DEBUG("volkTwoOver")
}

void volkLFetch(void) {
	PSMSG_DEBUG("volkLFetch")
}

void volkLStore(void) {
	PSMSG_DEBUG("volkLStore")
}

void volkLCStore(void) {
	PSMSG_DEBUG("volkLCStore")
}

void volkNextLink(void) {
	PSMSG_DEBUG("volkNextLink")
}

#endif


#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
   (H2O_FORTH_PRIMITIVES == VOLK_C64_FORTH)
void volkZ64(void) {
	PSMSG_DEBUG("volkZ64")
}

void volkCZ(void) {
	PSMSG_DEBUG("volkCZ")
}

void volkZ16(void) {
	PSMSG_DEBUG("volkZ16")
}

void volkC64Init(void) {
	PSMSG_DEBUG("volkC64Init")
}

void volkInitSystem(void) {
	PSMSG_DEBUG("volkInitSystem")
}

void volkInkPot(void) {
	PSMSG_DEBUG("volkInkPot")
}

void volkFIndex(void) {
	PSMSG_DEBUG("volkFIndex")
}

void volkCBM1541RSlashW(void) {
	PSMSG_DEBUG("volkCBM1541RSlashW")
}

void volkDiskClose(void) {
	PSMSG_DEBUG("volkDiskClose")
}

void volkDiskOpen(void) {
	PSMSG_DEBUG("volkDiskOpen")
}

void volkWriteSector(void) {
	PSMSG_DEBUG("volkWriteSector")
}

void volkReadSector(void) {
	PSMSG_DEBUG("volkReadSector")
}

void volkDErrorQ(void) {
	PSMSG_DEBUG("volkDErrorQ")
}

void volkBusInput(void) {
	PSMSG_DEBUG("volkBusInput")
}

void volkBusFetch(void) {
	PSMSG_DEBUG("volkBusFetch")
}

void volkBusType(void) {
	PSMSG_DEBUG("volkBusType")
}

void volkBusStore(void) {
	PSMSG_DEBUG("volkBusStore")
}

void volkBusIn(void) {
	PSMSG_DEBUG("volkBusIn")
}

void volkZBusIn(void) {
	PSMSG_DEBUG("volkZBusIn")
}

void volkBusClose(void) {
	PSMSG_DEBUG("volkBusClose")
}

void volkBusOpen(void) {
	PSMSG_DEBUG("volkBusOpen")
}

void volkBusOff(void) {
	PSMSG_DEBUG("volkBusOff")
}

void volkISlashO(void) {
	PSMSG_DEBUG("volkISlashO")
}

void volkZDrv(void) {
	PSMSG_DEBUG("volkZDrv")
}

void volkC64Type(void) {
	PSMSG_DEBUG("volkC64Type")
}

void volkC64AtQ(void) {
	PSMSG_DEBUG("volkC64AtQ")
}

void volkC64At(void) {
	PSMSG_DEBUG("volkC64At")
}

void volkC64Page(void) {
	PSMSG_DEBUG("volkC64Page")
}

void volkC64Del(void) {
	PSMSG_DEBUG("volkC64Del")
}

void volkC64Cr(void) {
	PSMSG_DEBUG("volkC64Cr")
}

void volkC64Emit(void) {
	PSMSG_DEBUG("volkC64Emit")
}

void volkC64Expect(void) {
	PSMSG_DEBUG("volkC64Expect")
}

void volkC64Decode(void) {
	PSMSG_DEBUG("volkC64Decode")
}

void volkC64Key(void) {
	PSMSG_DEBUG("volkC64Key")
}

void volkC64KeyQ(void) {
	PSMSG_DEBUG("volkC64KeyQ")
}

void volkBlkMove(void) {
	PSMSG_DEBUG("volkBlkMove")
}

void volkZCopy(void) {
	PSMSG_DEBUG("volkZCopy")
}

void volkTickNumberQ(void) {
	PSMSG_DEBUG("volkTickNumberQ")
}

void volkPrevious(void) {
	PSMSG_DEBUG("volkPrevious")
}

void volkChar(void) {
	PSMSG_DEBUG("volkChar")
}

void volkEndQ(void) {
	PSMSG_DEBUG("volkEndQ")
}

void volkBasOn(void) {
	PSMSG_DEBUG("volkBasOn")
}

void volkLogo(void) {
	PSMSG_DEBUG("volkLogo")
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_ST_FORTH)
void volkPrintALL(void) {
	PSMSG_DEBUG("volkPrintALL")
}

void volkRelocate(void) {
	PSMSG_DEBUG("volkRelocate")
}

void volkIndexDotScr(void) {
	PSMSG_DEBUG("volkIndexDotScr")
}

void volkTickEditFile(void) {
	PSMSG_DEBUG("volkTickEditFile")
}

void volkTickRNum(void) {
	PSMSG_DEBUG("volkTickRNum")
}

void volkTickScr(void) {
	PSMSG_DEBUG("volkTickScr")
}

void volkEdWindowDotScr(void) {
	PSMSG_DEBUG("volkEdWindowDotScr")
}

void volkGemBackslashVdiDotScr(void) {
	PSMSG_DEBUG("volkGemBackslashVdiDotScr")
}

void volkGemBackslashSuperGemDotScr(void) {
	PSMSG_DEBUG("volkGemBackslashSuperGemDotScr")
}

void volkEdiConDotScr(void) {
	PSMSG_DEBUG("volkEdiConDotScr")
}

void volkGem(void) {
	PSMSG_DEBUG("volkGem")
}

void volkGemBackslashBsicDotScr(void) {
	PSMSG_DEBUG("volkGemBackslashBsicDotScr")
}

void volkGemBackslashAesDotScr(void) {
	PSMSG_DEBUG("volkGemBackslashAesDotScr")
}

void volkMFree(void) {
	PSMSG_DEBUG("volkMFree")
}

void volkMalloc(void) {
	PSMSG_DEBUG("volkMalloc")
}

void volkAllocateDotScr(void) {
	PSMSG_DEBUG("volkAllocateDotScr")
}

void volkZeroQuote(void) {
	PSMSG_DEBUG("volkZeroQuote")
}

void volkCommaZeroQuote(void) {
	PSMSG_DEBUG("volkCommaZeroQuote")
}

void volkZeroGreaterCQuote(void) {
	PSMSG_DEBUG("volkZeroGreaterCQuote")
}

void volkCGreaterZeroQuote(void) {
	PSMSG_DEBUG("volkCGreaterZeroQuote")
}

void volkDollarAdd(void) {
	PSMSG_DEBUG("volkDollarAdd")
}

void volkDollarSum(void) {
	PSMSG_DEBUG("volkDollarSum")
}

void volkSearch(void) {
	PSMSG_DEBUG("volkSearch")
}

void volkCompareText(void) {
	PSMSG_DEBUG("volkCompareText")
}

void volkringsDotScr(void) {
	PSMSG_DEBUG("volkringsDotScr")
}

void volkAssembleDotScr(void) {
	PSMSG_DEBUG("volkAssembleDotScr")
}

void volkBlak(void) {
	PSMSG_DEBUG("volkBlak")
}

void volkCPush(void) {
	PSMSG_DEBUG("volkCPush")
}

void volkAbsAddr(void) {
	PSMSG_DEBUG("volkAbsAddr")
}

void volkDiversesDotScr(void) {
	PSMSG_DEBUG("volkDiversesDotScr")
}

void volkForth83DotScr(void) {
	PSMSG_DEBUG("volkForth83DotScr")
}

void volkRemoveQ(void) {
	PSMSG_DEBUG("volkRemoveQ")
}

void volkMakeDir(void) {
	/* = volkMd */
	PSMSG_DEBUG("volkMakeDir")
}

void volkZMore(void) {
	PSMSG_DEBUG("volkZMore")
}

void volkDirekt(void) {
	PSMSG_DEBUG("volkDirekt")
}

void volkSTRSlashW(void) {
	PSMSG_DEBUG("volkSTRSlashW")
}

void volkRWAbs(void) {
	PSMSG_DEBUG("volkRWAbs")
}

void volkDrv1(void) {
	PSMSG_DEBUG("volkDrv1")
}

void volkDrv0(void) {
	PSMSG_DEBUG("volkDrv0")
}

void volkZBlkSlashDrv(void) {
	PSMSG_DEBUG("volkZBlkSlashDrv")
}

void volkStType(void) {
	PSMSG_DEBUG("volkStType")
}

void volkStAtQ(void) {
	PSMSG_DEBUG("volkStAtQ")
}

void volkStAt(void) {
	PSMSG_DEBUG("volkStAt")
}

void volkStPage(void) {
	PSMSG_DEBUG("volkStPage")
}

void volkStDel(void) {
	PSMSG_DEBUG("volkStDel")
}

void volkStCR(void) {
	PSMSG_DEBUG("volkStCR")
}

void volkStEmit(void) {
	PSMSG_DEBUG("volkStEmit")
}

void volkStExpect(void) {
	PSMSG_DEBUG("volkStExpect")
}

void volkStDecode(void) {
	PSMSG_DEBUG("volkStDecode")
}

void volkStKey(void) {
	PSMSG_DEBUG("volkStKey")
}

void volkStKeyQ(void) {
	PSMSG_DEBUG("volkStKeyQ")
}

void volkWrap(void) {
	PSMSG_DEBUG("volkWrap")
}

void volkBConOut(void) {
	PSMSG_DEBUG("volkBConOut")
}

void volkBConIn(void) {
	PSMSG_DEBUG("volkBConIn")
}

void volkBcoStat(void) {
	PSMSG_DEBUG("volkBcoStat")
}

void volkBconStat(void) {
	PSMSG_DEBUG("volkBconStat")
}

void volkTwoVariable(void) {
	PSMSG_DEBUG("volkTwoVariable")
}

void volkTwoConstant(void) {
	PSMSG_DEBUG("volkTwoConstant")
}

void volkBlkFetch(void) {
	PSMSG_DEBUG("volkBlkFetch")
}

void volkDStar(void) {
	PSMSG_DEBUG("volkDStar")
}

void volkDMinus(void) {
	PSMSG_DEBUG("volkDMinus")
}

void volkQuoteDrop(void) {
	PSMSG_DEBUG("volkQuoteDrop")
}

void volkLNPlusStore(void) {
	PSMSG_DEBUG("volkLNPlusStore")
}

void volkL2Store(void) {
	PSMSG_DEBUG("volkL2Store")
}

void volkL2Fetch(void) {
	PSMSG_DEBUG("volkL2Fetch")
}

void volkLCMove(void) {
	PSMSG_DEBUG("volkLCMove")
}

void volkForthStart(void) {
	PSMSG_DEBUG("volkForthStart")
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_CPM_FORTH)
void volkSpool(void) {
	PSMSG_DEBUG("volkSpool")
}

void volkSpooler(void) {
	PSMSG_DEBUG("volkSpooler")
}

void volkShadow(void) {
	PSMSG_DEBUG("volkShadow")
}

void volkTasks(void) {
	PSMSG_DEBUG("volkTasks")
}

void volkTickS(void) {
	/* "'S" => Capital "S" */
	PSMSG_DEBUG("volkTasks")
}
void volkTaskerDotScr(void) {
	PSMSG_DEBUG("volkTaskerDotScr")
}

void volkSee(void) {
	PSMSG_DEBUG("volkSee")
}

void volkSeeDotScr(void) {
	PSMSG_DEBUG("volkSeeDotScr")
}

void volkExternal(void) {
	PSMSG_DEBUG("volkExternal")
}

void volkInternal(void) {
	PSMSG_DEBUG("volkInternal")
}

void volkQAbortZ(void) {
	PSMSG_DEBUG("volkQAbortZ")
}

void volkQEnough(void) {
	PSMSG_DEBUG("volkQEnough")
}

void volkReplace(void) {
	PSMSG_DEBUG("volkReplace")
}

void volkInsert(void) {
	PSMSG_DEBUG("volkInsert")
}

void volkSaveSysDotScr(void) {
	PSMSG_DEBUG("volkSaveSysDotScr")
}

void volkCopyDotScr(void) {
	PSMSG_DEBUG("volkSaveSysDotScr")
}

void volkAnsi(void) {
	PSMSG_DEBUG("volkAnsi")
}

void volkTerminalDotScr(void) {
	PSMSG_DEBUG("volkTerminalDotScr")
}

void volkDumb(void) {
	PSMSG_DEBUG("volkDumb")
}

void volkLocate(void) {
	PSMSG_DEBUG("volkLocate")
}

void volkDark(void) {
	PSMSG_DEBUG("volkDark")
}

void volkRvsOff(void) {
	PSMSG_DEBUG("volkRvsOff")
}

void volkRvsOn(void) {
	PSMSG_DEBUG("volkRvsOn")
}

void volkTerminalColon(void) {
	PSMSG_DEBUG("volkTerminalColon")
}

void volkTermColon(void) {
	PSMSG_DEBUG("volkTermColon")
}

void volkXinOutDotScr(void) {
	PSMSG_DEBUG("volkXinOutDotScr")
}

void volkAss8080DotScr(void) {
	PSMSG_DEBUG("volkAss8080DotScr")
}

void volkSourceDotScr(void) {
	PSMSG_DEBUG("volkSourceDotScr")
}

void volkJColon(void) {
	PSMSG_DEBUG("volkJColon")
}

void volkDriveColon(void) {
	PSMSG_DEBUG("volkDriveColon")
}

void volkDirQuote(void) {
	PSMSG_DEBUG("volkDirQuote")
}

void volkDotBuffers(void) {
	PSMSG_DEBUG("volkDotBuffers")
}

void volkZMakeView(void) {
	PSMSG_DEBUG("volkZMakeView")
}

void volkForthFiles(void) {
	PSMSG_DEBUG("volkForthFiles")
}

void volkDotSize(void) {
	PSMSG_DEBUG("volkDotSize")
}

void volkPostlude(void) {
	PSMSG_DEBUG("volkPostlude")
}

void volkRecSlashBlk(void) {
	PSMSG_DEBUG("volkRecSlashBlk")
}

void volkBSlashRec(void) {
	PSMSG_DEBUG("volkBSlashRec")
}

void volkNumFf(void) {
	PSMSG_DEBUG("volkNumFf")
}

void volkQuoteSearch(void) {
	PSMSG_DEBUG("volkQuoteSearch")
}

void volkSaveDosBuffers(void) {
	PSMSG_DEBUG("volkSaveDosBuffers")
}

void volkCreateZ(void) {
	PSMSG_DEBUG("volkCreateZ")
}

void volkPlusToMark(void) {
	PSMSG_DEBUG("volkPlusToMark")
}

void volkIPSave(void) {
	PSMSG_DEBUG("volkIPSave")
}

void volkRP(void) {
	PSMSG_DEBUG("volkRP")
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_PC_FORTH)
void volkPList(void) {
	PSMSG_DEBUG("volkPList")
}

void volkPlusPrint(void) {
	PSMSG_DEBUG("volkPlusPrint")
}

void volkGraphicsDotPrn(void) {
	PSMSG_DEBUG("volkGraphicsDotPrn")
}

void volkEdit(void) {
	PSMSG_DEBUG("volkEdit")
}

void volkED(void) {
	PSMSG_DEBUG("volkED")
}

void volkEditorDotFb(void) {
	PSMSG_DEBUG("volkEditorDotFb")
}

void volkTimes(void) {
	PSMSG_DEBUG("volkTimes")
}

void volkOften(void) {
	PSMSG_DEBUG("volkOften")
}

void volkTimeFetch(void) {
	PSMSG_DEBUG("volkTimeFetch")
}

void volkDateFetch(void) {
	PSMSG_DEBUG("volkDateFetch")
}

void volkMinutes(void) {
	PSMSG_DEBUG("volkMinutes")
}

void volkSeconds(void) {
	PSMSG_DEBUG("volkSeconds")
}

void volkWait(void) {
	PSMSG_DEBUG("volkWait")
}

void volkTime(void) {
	PSMSG_DEBUG("volkTime")
}

void volkTill(void) {
	PSMSG_DEBUG("volkTill")
}

void volkTimeoutQ(void) {
	PSMSG_DEBUG("volkTimeoutQ")
}

/* Ticks */
void volkTicks(void) {
	PSMSG_DEBUG("volkTimeoutQ")
}

void volkTimerDotFb(void) {
	PSMSG_DEBUG("volkTimerDotFb")
}

void volkTaskerDotFb(void) {
	PSMSG_DEBUG("volkTaskerDotFb")
}

void volkCall(void) {
	PSMSG_DEBUG("volkCall")
}

void volkMsdos(void) {
	PSMSG_DEBUG("volkMsdos")
}

void volkFType(void) {
	PSMSG_DEBUG("volkFType")
}

void volkFcopy(void) {
	PSMSG_DEBUG("volkFcopy")
}

void volkRd(void) {
	PSMSG_DEBUG("volkRd")
}

void volkCd(void) {
	PSMSG_DEBUG("volkCd")
}

void volkMd(void) {
	PSMSG_DEBUG("volkMd")
}

void volkRen(void) {
	PSMSG_DEBUG("volkRen")
}

void volkDotPath(void) {
	PSMSG_DEBUG("volkDotPath")
}

void volkEmptyFile(void) {
	PSMSG_DEBUG("volkEmptyFile")
}

void volkKillfile(void) {
	PSMSG_DEBUG("volkKillfile")
}

void volkQFile(void) {
	PSMSG_DEBUG("volkQFile")
}

void volkUsedQ(void) {
	PSMSG_DEBUG("volkUsedQ")
}

void volkDTA(void) {
	PSMSG_DEBUG("volkDTA")
}

void volkFSwap(void) {
	PSMSG_DEBUG("volkFSwap")
}

void volkDosDotFb(void) {
	PSMSG_DEBUG("volkDosDotFb")
}

void volkZDotStatus(void) {
	PSMSG_DEBUG("volkZDotStatus")
}

void volkDotSpace(void) {
	PSMSG_DEBUG("volkDotSpace")
}

void volkDotScr(void) {
	PSMSG_DEBUG("volkDotScr")
}

void volkDotDR(void) {
	PSMSG_DEBUG("volkDotDR")
}

void volkZDotDrv(void) {
	PSMSG_DEBUG("volkZDotDrv")
}

void volkDotSP(void) {
	PSMSG_DEBUG("volkDotSP")
}

void volkDotBase(void) {
	PSMSG_DEBUG("volkDotBase")
}

void volkScroll(void) {
	PSMSG_DEBUG("volkScroll")
}

void volkBlankLine(void) {
	PSMSG_DEBUG("volkBlankLine")
}

void volkBright(void) {
	PSMSG_DEBUG("volkBright")
}

void volkUnderline(void) {
	PSMSG_DEBUG("volkUnderline")
}

void volkInvers(void) {
	PSMSG_DEBUG("volkInvers")
}

void volkNormal(void) {
	PSMSG_DEBUG("volkNormal")
}

void volkSetPage(void) {
	PSMSG_DEBUG("volkSetPage")
}

void volkCurShape(void) {
	PSMSG_DEBUG("volkCurShape")
}

void volkCurStore(void) {
	PSMSG_DEBUG("volkCurStore")
}

void volkCurAtQ(void) {
	PSMSG_DEBUG("volkCurAtQ")
}

void volkFull(void) {
	PSMSG_DEBUG("volkFull")
}

void volkWindow(void) {
	PSMSG_DEBUG("volkWindow")
}

void volkCatt(void) {
	PSMSG_DEBUG("volkCatt")
}

void volkZArea(void) {
	PSMSG_DEBUG("volkZArea")
}

void volkTerminal(void) {
	PSMSG_DEBUG("volkTerminal")
}

void volkAreaColon(void) {
	PSMSG_DEBUG("volkAreaColon")
}

void volkStatus(void) {
	PSMSG_DEBUG("volkStatus")
}

void volkArea(void) {
	PSMSG_DEBUG("volkArea")
}

void volkMultiDotVid(void) {
	PSMSG_DEBUG("volkMultiDotVid")
}

void volkDotIf(void) {
	PSMSG_DEBUG("volkDotIf")
}

void volkDotElse(void) {
	PSMSG_DEBUG("volkDotElse")
}

void volkDotThen(void) {
	PSMSG_DEBUG("volkDotThen")
}

void volkQQuote(void) {
	PSMSG_DEBUG("volkQQuote")
}

void volkToMonth(void) {
	PSMSG_DEBUG("volkToMonth")
}

void volkAttach(void) {
	PSMSG_DEBUG("volkAttach")
}

void volkAppend(void) {
	PSMSG_DEBUG("volkAppend")
}

void volkRestoreVideo(void) {
	PSMSG_DEBUG("volkRestoreVideo")
}

void volkSaveVideo(void) {
	PSMSG_DEBUG("volkSaveVideo")
}

void volkVideoFetch(void) {
	PSMSG_DEBUG("volkVideoFetch")
}

void volkCSlashDIS(void) {
	PSMSG_DEBUG("volkCSlashDIS")
}

void volkLFree(void) {
	PSMSG_DEBUG("volkLFree")
}

void volkLAllocate(void) {
	PSMSG_DEBUG("volkLAllocate")
}

void volkAdr(void) {
	PSMSG_DEBUG("volkAdr")
}

void volkUQ(void) {
	PSMSG_DEBUG("volkUQ")
}

void volkTab(void) {
	PSMSG_DEBUG("volkTab")
}

void volkDotField(void) {
	PSMSG_DEBUG("volkDotField")
}

void volkToExpect(void) {
	PSMSG_DEBUG("volkToExpect")
}

void volkStash(void) {
	PSMSG_DEBUG("volkStash")
}

void volkCls(void) {
	PSMSG_DEBUG("volkCls")
}

void volkTickName(void) {
	PSMSG_DEBUG("volkTickName")
}

void volkSav(void) {
	PSMSG_DEBUG("volkSav")
}

void volkExtendDotFb(void) {
	PSMSG_DEBUG("volkExtendDotFb")
}

void volkEndCode(void) {
	PSMSG_DEBUG("volkEndCode")
}

void volkASmDotFb(void) {
	PSMSG_DEBUG("volkASmDotFb")
}

void volkVolks4THDotSys(void) {
	PSMSG_DEBUG("volkvolks4THDotSys")
}

void volkHelp(void) {
	PSMSG_DEBUG("volkHelp")
}

void volkLFSave(void) {
	PSMSG_DEBUG("volkLFSave")
}

void volkHColon(void) {
	PSMSG_DEBUG("volkHColon")
}

void volkGColon(void) {
	PSMSG_DEBUG("volkGColon")
}

void volkFColon(void) {
	PSMSG_DEBUG("volkFColon")
}

void volkEColon(void) {
	PSMSG_DEBUG("volkEColon")
}

void volkDrv(void) {
	PSMSG_DEBUG("volkDrv")
}

void volkPushFile(void) {
	PSMSG_DEBUG("volkPushFile")
}

void volkXFCB(void) {
	PSMSG_DEBUG("volkXFCB")
}

void volkKernelDotScr(void) {
	PSMSG_DEBUG("volkKernelDotScr")
}

void volkAsciz(void) {
	PSMSG_DEBUG("volkAsciz")
}

void volkToAsciz(void) {
	PSMSG_DEBUG("volkToAsciz")
}

void volkCounted(void) {
	PSMSG_DEBUG("volkCounted")
}

void volkPCStore(void) {
	PSMSG_DEBUG("volkPCStore")
}

void volkPCFetch(void) {
	PSMSG_DEBUG("volkPCFetch")
}

void volkListStore(void) {
	PSMSG_DEBUG("volkListStore")
}

void volkCharOut(void) {
	PSMSG_DEBUG("volkCharOut")
}

void volkEmptyKeys(void) {
	PSMSG_DEBUG("volkEmptyKeys")
}

void volkZKeyFetch(void) {
	PSMSG_DEBUG("volkZKeyFetch")
}

void volkLMove(void) {
	PSMSG_DEBUG("volkLMove")
}

void volkLType(void) {
	PSMSG_DEBUG("volkLType")
}

void volkLCFetch(void) {
	PSMSG_DEBUG("volkLCFetch")
}

void volkReturnCode(void) {
	PSMSG_DEBUG("volkReturnCode")
}

void volkTrim(void) {
	PSMSG_DEBUG("volkTrim")
}

void volkQDiskError(void) {
	PSMSG_DEBUG("volkQDiskError")
}

void volkErrorNum(void) {
	PSMSG_DEBUG("volkErrorNum")
}

void volkVocs(void) {
	PSMSG_DEBUG("volkVocs")
}

void volkLastTick(void) {
	PSMSG_DEBUG("volkLastTick")
}

void volkHave(void) {
	PSMSG_DEBUG("volkHave")
}

void volkZCapital(void) {
	PSMSG_DEBUG("volkZCapital")
}

void volkStarLoop(void) {
	PSMSG_DEBUG("volkStarLoop")
}

void volkBSlashSeg(void) {
	PSMSG_DEBUG("volkBSlashSeg")
}

void volkDSFetch(void) {
	PSMSG_DEBUG("volkDSFetch")
}

void volkFileLink(void) {
	PSMSG_DEBUG("volkFileLink")
}

void volkAborted(void) {
	PSMSG_DEBUG("volkAborted")
}

#endif

#endif
