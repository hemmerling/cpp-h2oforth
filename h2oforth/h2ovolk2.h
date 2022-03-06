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
	MESSSAGE_DEBUG("volkForth83")
}

void volkBSlashBlk(void) {
	MESSSAGE_DEBUG("volkBSlashBlk")
}

void volkDisplay(void) {
	MESSSAGE_DEBUG("volkDisplay")
}

void volkKeyboard(void) {
	MESSSAGE_DEBUG("volkKeyboard")
}

void volkNumCr(void) {
	MESSSAGE_DEBUG("volkNumCr")
}

void volkNumBs(void) {
	MESSSAGE_DEBUG("volkNumBs")
}

void volkCurOff(void) {
	MESSSAGE_DEBUG("volkCurOff")
}

void volkCurOn(void) {
	MESSSAGE_DEBUG("volkCurOn")
}

void volkRestart(void) {
	MESSSAGE_DEBUG("volkRestart")
}

void volkTickCold(void) {
	MESSSAGE_DEBUG("volkTickCold")
}

void volkTickRestart(void) {
	MESSSAGE_DEBUG("volkTickRestart")
}

void volkExpect(void) {
	MESSSAGE_DEBUG("volkExpect")
}

void volkDecode(void) {
	MESSSAGE_DEBUG("volkDecode")
}

void volkKeyQ(void) {
	MESSSAGE_DEBUG("volkKeyQ")
}

void volkKey(void) {
	MESSSAGE_DEBUG("volkKey")
}

void volkInputColon(void) {
	MESSSAGE_DEBUG("volkInputColon")
}

void volkCol(void) {
	MESSSAGE_DEBUG("volkCol")
}

void volkRow(void) {
	MESSSAGE_DEBUG("volkRow")
}

void volkAtQ(void) {
	MESSSAGE_DEBUG("volkAtQ")
}

void volkAt(void) {
	MESSSAGE_DEBUG("volkAt")
}

void volkPage(void) {
	MESSSAGE_DEBUG("volkPage")
}

void volkDel(void) {
	MESSSAGE_DEBUG("volkDel")
}

void volkType(void) {
	MESSSAGE_DEBUG("volkType")
}

void volkCr(void) {
	MESSSAGE_DEBUG("volkCr")
}

void volkEmit(void) {
	MESSSAGE_DEBUG("volkEmit")
}

void volkOutputColon(void) {
	MESSSAGE_DEBUG("volkOutputColon")
}

void volkZForget(void) {
	MESSSAGE_DEBUG("volkZForget")
}

void volkClear(void) {
	MESSSAGE_DEBUG("volkClear")
}

void volkCustomRemove(void) {
	MESSSAGE_DEBUG("volkCustomRemove")
}

void volkAllBuffers(void) {
	MESSSAGE_DEBUG("volkAllBuffers")
}

void volkConvey(void) {
	MESSSAGE_DEBUG("volkConvey")
}

void volkCopy(void) {
	MESSSAGE_DEBUG("volkCopy")
}

void volkUpdate(void) {
	MESSSAGE_DEBUG("volkUpdate")
}

void volkBlock(void) {
	MESSSAGE_DEBUG("volkBlock")
}

void volkBuffer(void) {
	MESSSAGE_DEBUG("volkBuffer")
}

void volkZBlock(void) {
	MESSSAGE_DEBUG("volkZBlock")
}

void volkZBuffer(void) {
	MESSSAGE_DEBUG("volkZBuffer")
}

void volkCoreQ(void) {
	MESSSAGE_DEBUG("volkCoreQ")
}

void volkFile(void) {
	MESSSAGE_DEBUG("volkFile")
}

void volkUnlock(void) {
	MESSSAGE_DEBUG("volkUnlock")
}

void volkLock(void) {
	MESSSAGE_DEBUG("volkLock")
}

void volkPause(void) {
	MESSSAGE_DEBUG("volkPause")
}

void volkList(void) {
	MESSSAGE_DEBUG("volkList")
}

void volkLSlashS(void) {
	MESSSAGE_DEBUG("volkLSlashS")
}

void volkCSlashL(void) {
	MESSSAGE_DEBUG("volkCSlashL")
}

void volkDotS(void) {
	MESSSAGE_DEBUG("volkDotS")
}

void volkUDot(void) {
	MESSSAGE_DEBUG("volkUDot")
}

void volkDot(void) {
	MESSSAGE_DEBUG("volkDot")
}

void volkDColon(void) {
	MESSSAGE_DEBUG("volkDColon")
}

void volkUDotR(void) {
	MESSSAGE_DEBUG("volkUDotR")
}

void volkDotR(void) {
	MESSSAGE_DEBUG("volkDotR")
}

void volkDDotR(void) {
	MESSSAGE_DEBUG("volkDDotR")
}

void volkNumS(void) {
	MESSSAGE_DEBUG("volkNumS")
}

void volkNum(void) {
	MESSSAGE_DEBUG("volkNum")
}

void volkSign(void) {
	MESSSAGE_DEBUG("volkSign")
}

void volkNumGreater(void) {
	MESSSAGE_DEBUG("volkNumGreater")
}

void volkLessNum(void) {
	MESSSAGE_DEBUG("volkLessNum")
}

void volkHold(void) {
	MESSSAGE_DEBUG("volkHold")
}

void volkSpaces(void) {
	MESSSAGE_DEBUG("volkSpaces")
}

void volkSpace(void) {
	MESSSAGE_DEBUG("volkSpace")
}

void volkTrailing(void) {
	MESSSAGE_DEBUG("volkTrailing")
}

void volkBl(void) {
	MESSSAGE_DEBUG("volkBl")
}

void volkErrorQuote(void) {
	MESSSAGE_DEBUG("volkErrorQuote")
}

void volkAbortQuote(void) {
	MESSSAGE_DEBUG("volkAbortQuote")
}

void volkZAbortQuote(void) {
	MESSSAGE_DEBUG("volkZAbortQuote")
}

void volkZError(void) {
	MESSSAGE_DEBUG("volkZError")
}

void volkQuit(void) {
	MESSSAGE_DEBUG("volkQuit")
}

void volkTickQuit(void) {
	MESSSAGE_DEBUG("volkTickQuit")
}

void volkZQuit(void) {
	MESSSAGE_DEBUG("volkZQuit")
}

void volkDepth(void) {
	MESSSAGE_DEBUG("volkDepth")
}

void volkRDepth(void) {
	MESSSAGE_DEBUG("volkRDepth")
}

void volkTo(void) {
	MESSSAGE_DEBUG("volkTo")
}

void volkPlusThru(void) {
	MESSSAGE_DEBUG("volkPlusThru")
}

void volkThru(void) {
	MESSSAGE_DEBUG("volkThru")
}

void volkPlusLoad(void) {
	MESSSAGE_DEBUG("volkPlusLoad")
}

void volkLoad(void) {
	MESSSAGE_DEBUG("volkLoad")
}

void volkPush(void) {
	MESSSAGE_DEBUG("volkPush")
}

void volkDotStatus(void) {
	MESSSAGE_DEBUG("volkDotStatus")
}

void volkQStack(void) {
	MESSSAGE_DEBUG("volkQStack")
}

void volkIs(void) {
	MESSSAGE_DEBUG("volkIs")
}

void volkZIs(void) {
	MESSSAGE_DEBUG("volkZIs")
}

void volkDefer(void) {
	MESSSAGE_DEBUG("volkDefer")
}

void volkRightBracket(void) {
	MESSSAGE_DEBUG("volkRightBracket")
}

void volkLeftBracket(void) {
	MESSSAGE_DEBUG("volkLeftBracket")
}

void volkInterpret(void) {
	MESSSAGE_DEBUG("volkInterpret")
}

void volkNoDotExtensions(void) {
	MESSSAGE_DEBUG("volkNoDotExtensions")
}

void volkNotFound(void) {
	MESSSAGE_DEBUG("volkNotFound")
}

void volkXTick(void) {
	MESSSAGE_DEBUG("volkXTick")
}

void volkXCompile(void) {
	MESSSAGE_DEBUG("volkXCompile")
}

void volkFind(void) {
	MESSSAGE_DEBUG("volkFind")
}

void volkZFind(void) {
	MESSSAGE_DEBUG("volkZFind")
}

void volkWords(void) {
	MESSSAGE_DEBUG("volkWords")
}

void volkOrder(void) {
	MESSSAGE_DEBUG("volkOrder")
}

void volkDefinitions(void) {
	MESSSAGE_DEBUG("volkDefinitions")
}

void volkOnlyForth(void) {
	MESSSAGE_DEBUG("volkOnlyForth")
}

void volkOnly(void) {
	MESSSAGE_DEBUG("volkOnly")
}

void volkForth(void) {
	MESSSAGE_DEBUG("volkForth")
}

void volkVocabulary(void) {
	MESSSAGE_DEBUG("volkVocabulary")
}

void volkToss(void) {
	MESSSAGE_DEBUG("volkToss")
}

void volkAlso(void) {
	MESSSAGE_DEBUG("volkAlso")
}

void volkUAllot(void) {
	MESSSAGE_DEBUG("volkUAllot")
}

void volkVariable(void) {
	MESSSAGE_DEBUG("volkVariable")
}

void volkConstant(void) {
	MESSSAGE_DEBUG("volkConstant")
}

void volkSemicolon(void) {
	MESSSAGE_DEBUG("volkSemicolon")
}

void volkColon(void) {
	MESSSAGE_DEBUG("volkColon")
}

void volkCreateColon(void) {
	MESSSAGE_DEBUG("volkCreateColon")
}

void volkDotName(void) {
	MESSSAGE_DEBUG("volkDotName")
}

void volkToBody(void) {
	MESSSAGE_DEBUG("volkToBody")
}

void volkNameFrom(void) {
	MESSSAGE_DEBUG("volkNameFrom")
}

void volkToName(void) {
	MESSSAGE_DEBUG("volkToName")
}

void volkNFaq(void) {
	MESSSAGE_DEBUG("volkNFaq")
}

void volkCreate(void) {
	MESSSAGE_DEBUG("volkCreate")
}

void volkWarning(void) {
	MESSSAGE_DEBUG("volkWarning")
}

void volkVerticalBar(void) {
	MESSSAGE_DEBUG("volkVerticalBar")
}

void volkQHead(void) {
	MESSSAGE_DEBUG("volkQHead")
}

void volkDoes(void) {
	MESSSAGE_DEBUG("volkDoes")
}

void volkHeapQ(void) {
	MESSSAGE_DEBUG("volkHeapQ")
}

void volkHeap(void) {
	MESSSAGE_DEBUG("volkHeap")
}

void volkHallot(void) {
	MESSSAGE_DEBUG("volkHallot")
}

void volkClearStack(void) {
	MESSSAGE_DEBUG("volkClearStack")
}

void volkRestrict(void) {
	MESSSAGE_DEBUG("volkRestrict")
}

void volkImmediate(void) {
	MESSSAGE_DEBUG("volkImmediate")
}

void volkRecursive(void) {
	MESSSAGE_DEBUG("volkRecursive")
}

void volkReveal(void) {
	MESSSAGE_DEBUG("volkReveal")
}

void volkHide(void) {
	MESSSAGE_DEBUG("volkHide")
}

void volkLast(void) {
	MESSSAGE_DEBUG("volkLast")
}

void volkNumber(void) {
	MESSSAGE_DEBUG("volkNumber")
}

void volkNumberQ(void) {
	MESSSAGE_DEBUG("volkNumberQ")
}

void volkConvert(void) {
	MESSSAGE_DEBUG("volkConvert")
}

void volkAccumulate(void) {
	MESSSAGE_DEBUG("volkAccumulate")
}

void volkDecimal(void) {
	MESSSAGE_DEBUG("volkDecimal")
}

void volkBackslashNeeds(void) {
	MESSSAGE_DEBUG("volkBackslashNeeds")
}

void volkBackslashBackslash(void) {
	MESSSAGE_DEBUG("volkBackslashBackslash")
}

void volkBackslash(void) {
	MESSSAGE_DEBUG("volkBackslash")
}

void volkDotParen(void) {
	MESSSAGE_DEBUG("volkDotParen")
}

void volkParen(void) {
	MESSSAGE_DEBUG("volkParen")
}

void volkDotQuote(void) {
	MESSSAGE_DEBUG("volkDotQuote")
}

void volkParenDotQuote(void) {
	MESSSAGE_DEBUG("volkParenDotQuote")
}

void volkQuote(void) {
	MESSSAGE_DEBUG("volkQuote")
}

void volkParenQuote(void) {
	MESSSAGE_DEBUG("volkParenQuote")
}

void volkQuoteLit(void) {
	MESSSAGE_DEBUG("volkQuoteLit")
}

void volkAscii(void) {
	MESSSAGE_DEBUG("volkAscii")
}

void volkState(void) {
	MESSSAGE_DEBUG("volkState")
}

void volkName(void) {
	MESSSAGE_DEBUG("volkName")
}

void volkParse(void) {
	MESSSAGE_DEBUG("volkParse")
}

void volkWord(void) {
	MESSSAGE_DEBUG("volkWord")
}

void volkSource(void) {
	MESSSAGE_DEBUG("volkSource")
}

void volkCapital(void) {
	MESSSAGE_DEBUG("volkCapital")
}

void volkSlashString(void) {
	MESSSAGE_DEBUG("volkSlashString")
}

void volkSkip(void) {
	MESSSAGE_DEBUG("volkSkip")
}

void volkScan(void) {
	MESSSAGE_DEBUG("volkScan")
}

void volkQuery(void) {
	MESSSAGE_DEBUG("volkQuery")
}

void volkTib(void) {
	MESSSAGE_DEBUG("volkTib")
}

void volkSpan(void) {
	MESSSAGE_DEBUG("volkSpan")
}

void volkBlk(void) {
	MESSSAGE_DEBUG("volkBlk")
}

void volkToIn(void) {
	MESSSAGE_DEBUG("volkToIn")
}

void volkToTib(void) {
	MESSSAGE_DEBUG("volkToTib")
}

void volkNumTib(void) {
	MESSSAGE_DEBUG("volkNumTib")
}

void volkCompile(void) {
	MESSSAGE_DEBUG("volkCompile")
}

void volkCComma(void) {
	MESSSAGE_DEBUG("volkCComma")
}

void volkComma(void) {
	MESSSAGE_DEBUG("volkComma")
}

void volkAllot(void) {
	MESSSAGE_DEBUG("volkAllot")
}

void volkPad(void) {
	MESSSAGE_DEBUG("volkPad")
}

void volkHere(void) {
	MESSSAGE_DEBUG("volkHere")
}

void volkFill(void) {
	MESSSAGE_DEBUG("volkFill")
}

void volkErase(void) {
	MESSSAGE_DEBUG("volkErase")
}

void volkCount(void) {
	MESSSAGE_DEBUG("volkCount")
}

void volkPlace(void) {
	MESSSAGE_DEBUG("volkPlace")
}

void volkMove(void) {
	MESSSAGE_DEBUG("volkMove")
}

void volkCMoveTo(void) {
	MESSSAGE_DEBUG("volkCMoveTo")
}

void volkCMove(void) {
	MESSSAGE_DEBUG("volkCMove")
}

void volkUdSlashMod(void) {
	MESSSAGE_DEBUG("volkUdSlashMod")
}

void volkUSlashMod(void) {
	MESSSAGE_DEBUG("volkUSlashMod")
}

void volkStarSlash(void) {
	MESSSAGE_DEBUG("volkStarSlash")
}

void volkStarSlashMod(void) {
	MESSSAGE_DEBUG("volkStarSlashMod")
}

void volkMod(void) {
	MESSSAGE_DEBUG("volkMod")
}

void volkSlash(void) {
	MESSSAGE_DEBUG("volkSlash")
}

void volkSlashMod(void) {
	MESSSAGE_DEBUG("volkSlashMod")
}

void volkTwoSlash(void) {
	MESSSAGE_DEBUG("volkTwoSlash")
}

void volkMSlashMod(void) {
	MESSSAGE_DEBUG("volkMSlashMod")
}

void volkUmSlashMod(void) {
	MESSSAGE_DEBUG("volkUmSlashMod")
}

void volkTwoStar(void) {
	MESSSAGE_DEBUG("volkTwoStar")
}

void volkStar(void) {
	MESSSAGE_DEBUG("volkStar")
}

void volkMStar(void) {
	MESSSAGE_DEBUG("volkMStar")
}

void volkUmStar(void) {
	MESSSAGE_DEBUG("volkUmStar")
}

void volkLeave(void) {
	MESSSAGE_DEBUG("volkLeave")
}

void volkLoop(void) {
	MESSSAGE_DEBUG("volkLoop")
}

void volkQDo(void) {
	MESSSAGE_DEBUG("volkQDo")
}

void volkDo(void) {
	MESSSAGE_DEBUG("volkDo")
}

void volkUntil(void) {
	MESSSAGE_DEBUG("volkUntil")
}

void volkRepeat(void) {
	MESSSAGE_DEBUG("volkRepeat")
}

void volkWhile(void) {
	MESSSAGE_DEBUG("volkWhile")
}

void volkBegin(void) {
	MESSSAGE_DEBUG("volkBegin")
}

void volkElse(void) {
	MESSSAGE_DEBUG("volkElse")
}

void volkThen(void) {
	MESSSAGE_DEBUG("volkThen")
}

void volkIf(void) {
	MESSSAGE_DEBUG("volkIf")
}

void volkQPairs(void) {
	MESSSAGE_DEBUG("volkQPairs")
}

void volkFromResolve(void) {
	MESSSAGE_DEBUG("volkFromResolve")
}

void volkFromMark(void) {
	MESSSAGE_DEBUG("volkFromMark")
}

void volkToResolve(void) {
	MESSSAGE_DEBUG("volkToResolve")
}

void volkToMark(void) {
	MESSSAGE_DEBUG("volkToMark")
}

void volkQBranch(void) {
	MESSSAGE_DEBUG("volkQBranch")
}

void volkBranch(void) {
	MESSSAGE_DEBUG("volkBranch")
}

void volkJ(void) {
	MESSSAGE_DEBUG("volkJ")
}

void volkI(void) {
	MESSSAGE_DEBUG("volkI")
}

void volkZPlusLoop(void) {
	MESSSAGE_DEBUG("volkZPlusLoop")
}

void volkZLoop(void) {
	MESSSAGE_DEBUG("volkZLoop")
}

void volkEndLoop(void) {
	MESSSAGE_DEBUG("volkEndLoop")
}

void volkBounds(void) {
	MESSSAGE_DEBUG("volkBounds")
}

void volkZQDo(void) {
	MESSSAGE_DEBUG("volkZQDo")
}

void volkZDo(void) {
	MESSSAGE_DEBUG("volkZDo")
}

void volkAbs(void) {
	MESSSAGE_DEBUG("volkAbs")
}

void volkDAbs(void) {
	MESSSAGE_DEBUG("volkDAbs")
}

void volkUGreater(void) {
	MESSSAGE_DEBUG("volkUGreater")
}

void volkZeroUnequal(void) {
	MESSSAGE_DEBUG("volkZeroUnequal")
}

void volkZeroGreater(void) {
	MESSSAGE_DEBUG("volkZeroGreater")
}

void volkGreater(void) {
	MESSSAGE_DEBUG("volkGreater")
}

void volkULess(void) {
	MESSSAGE_DEBUG("volkULess")
}

void volkLess(void) {
	MESSSAGE_DEBUG("volkLess")
}

void volkZeroEqual(void) {
	MESSSAGE_DEBUG("volkZeroEqual")
}

void volkLiteral(void) {
	MESSSAGE_DEBUG("volkLiteral")
}

void volkLit(void) {
	MESSSAGE_DEBUG("volkLit")
}

void volkOff(void) {
	MESSSAGE_DEBUG("volkOff")
}

void volkFour(void) {
	MESSSAGE_DEBUG("volkFour")
}

void volkThree(void) {
	MESSSAGE_DEBUG("volkThree")
}

void volkTwo(void) {
	MESSSAGE_DEBUG("volkTwo")
}

void volkOne(void) {
	MESSSAGE_DEBUG("volkOne")
}

void volkZero(void) {
	MESSSAGE_DEBUG("volkZero")
}

void volkMinusOne(void) {
	MESSSAGE_DEBUG("volkMinusOne")
}

void volkFalse(void) {
	MESSSAGE_DEBUG("volkFalse")
}

void volkTrue(void) {
	MESSSAGE_DEBUG("volkTrue")
}

void volkTwoMinus(void) {
	MESSSAGE_DEBUG("volkTwoMinus")
}

void volkOneMinus(void) {
	MESSSAGE_DEBUG("volkOneMinus")
}

void volkThreePlus(void) {
	MESSSAGE_DEBUG("volkThreePlus")
}

void volkTwoPlus(void) {
	MESSSAGE_DEBUG("volkTwoPlus")
}

void volkOnePlus(void) {
	MESSSAGE_DEBUG("volkOnePlus")
}

void volkDPlus(void) {
	MESSSAGE_DEBUG("volkDPlus")
}

void volkDNegate(void) {
	MESSSAGE_DEBUG("volkDNegate")
}

void volkNegate(void) {
	MESSSAGE_DEBUG("volkNegate")
}

void volkNot(void) {
	MESSSAGE_DEBUG("volkNot")
}

void volkMinus(void) {
	MESSSAGE_DEBUG("volkMinus")
}

void volkXOR(void) {
	MESSSAGE_DEBUG("volkXOR")
}

void volkAnd(void) {
	MESSSAGE_DEBUG("volkAnd")
}

void volkOr(void) {
	MESSSAGE_DEBUG("volkOr")
}

void volkPlus(void) {
	MESSSAGE_DEBUG("volkPlus")
}

void volkTwoDup(void) {
	MESSSAGE_DEBUG("volkTwoDup")
}

void volkTwoSwap(void) {
	MESSSAGE_DEBUG("volkTwoSwap")
}

void volkRoll(void) {
	MESSSAGE_DEBUG("volkRoll")
}

void volkPick(void) {
	MESSSAGE_DEBUG("volkPick")
}

void volkUnder(void) {
	MESSSAGE_DEBUG("volkUnder")
}

void volkNip(void) {
	MESSSAGE_DEBUG("volkNip")
}

void volkMinusRot(void) {
	MESSSAGE_DEBUG("volkMinusRot")
}

void volkRot(void) {
	MESSSAGE_DEBUG("volkRot")
}

void volkOver(void) {
	MESSSAGE_DEBUG("volkOver")
}

void volkQDup(void) {
	MESSSAGE_DEBUG("volkQDup")
}

void volkDup(void) {
	MESSSAGE_DEBUG("volkDup")
}

void volkSwap(void) {
	MESSSAGE_DEBUG("volkSwap")
}

void volkDrop(void) {
	MESSSAGE_DEBUG("volkDrop")
}

void volkPlusStore(void) {
	MESSSAGE_DEBUG("volkPlusStore")
}

void volkStore(void) {
	MESSSAGE_DEBUG("volkStore")
}

void volkFetch(void) {
	MESSSAGE_DEBUG("volkFetch")
}

void volkCToggle(void) {
	MESSSAGE_DEBUG("volkCToggle")
}

void volkCStore(void) {
	MESSSAGE_DEBUG("volkCStore")
}

void volkCFetch(void) {
	MESSSAGE_DEBUG("volkCFetch")
}

void volkPerform(void) {
	MESSSAGE_DEBUG("volkPerform")
}

void volkExecute(void) {
	MESSSAGE_DEBUG("volkExecute")
}

void volkQExit(void) {
	MESSSAGE_DEBUG("volkQExit")
}

void volkUnnest(void) {
	MESSSAGE_DEBUG("volkUnnest")
}

void volkExit(void) {
	MESSSAGE_DEBUG("volkExit")
}

void volkRDrop(void) {
	MESSSAGE_DEBUG("volkRDrop")
}

void volkRFetch(void) {
	MESSSAGE_DEBUG("volkRFetch")
}

void volkRFrom(void) {
	MESSSAGE_DEBUG("volkRFrom")
}

void volkToR(void) {
	MESSSAGE_DEBUG("volkToR")
}

void volkRPStore(void) {
	MESSSAGE_DEBUG("volkRPStore")
}

void volkRPFetch(void) {
	MESSSAGE_DEBUG("volkRPFetch")
}

void volkUPStore(void) {
	MESSSAGE_DEBUG("volkUPStore")
}

void volkUPFetch(void) {
	MESSSAGE_DEBUG("volkUPFetch")
}

void volkSPStore(void) {
	MESSSAGE_DEBUG("volkSPStore")
}

void volkSPFetch(void) {
	MESSSAGE_DEBUG("volkSPFetch")
}

void volkUdp(void) {
	MESSSAGE_DEBUG("volkUdp")
}

void volkVocLink(void) {
	MESSSAGE_DEBUG("volkVocLink")
}

void volkErrorhandler(void) {
	MESSSAGE_DEBUG("volkErrorhandler")
}

void volkInput(void) {
	MESSSAGE_DEBUG("volkInput")
}

void volkOutput(void) {
	MESSSAGE_DEBUG("volkOutput")
}

void volkBase(void) {
	MESSSAGE_DEBUG("volkBase")
}

void volkOffset(void) {
	MESSSAGE_DEBUG("volkOffset")
}

void volkDP(void) {
	MESSSAGE_DEBUG("volkDP")
}

void volkR0(void) {
	MESSSAGE_DEBUG("volkR0")
}

void volkS0(void) {
	MESSSAGE_DEBUG("volkS0")
}

void volkOrigin(void) {
	MESSSAGE_DEBUG("volkOrigin")
}

void volkNoop(void) {
	MESSSAGE_DEBUG("volkNoop")
}

void volkRecover(void) {
	MESSSAGE_DEBUG("volkRecover")
}

void volkEndTrace(void) {
	MESSSAGE_DEBUG("volkEndTrace")
}

void volkZeroLess(void) {
	MESSSAGE_DEBUG("volkZeroLess")
}

void volkEqual(void) {
	MESSSAGE_DEBUG("volkEqual")
}

void volkExtend(void) {
	MESSSAGE_DEBUG("volkExtend")
}

void volkUMin(void) {
	MESSSAGE_DEBUG("volkUMin")
}

void volkUMax(void) {
	MESSSAGE_DEBUG("volkUMax")
}

void volkMax(void) {
	MESSSAGE_DEBUG("volkMax")
}

void volkMin(void) {
	MESSSAGE_DEBUG("volkMin")
}

void volkDLess(void) {
	MESSSAGE_DEBUG("volkDLess")
}

void volkDEqual(void) {
	MESSSAGE_DEBUG("volkDEqual")
}

void volkCaseQ(void) {
	MESSSAGE_DEBUG("volkDEqual")
}

void volkDZeroEqual(void) {
	MESSSAGE_DEBUG("volkDZeroEqual")
}

void volkUWithin(void) {
	MESSSAGE_DEBUG("volkUWithin")
}

void volkDigitQ(void) {
	MESSSAGE_DEBUG("volkDigitQ")
}

void volkCold(void) {
	MESSSAGE_DEBUG("volkCold")
}

void volkCommaQuote(void) {
	MESSSAGE_DEBUG("volkCommaQuote")
}

void volkNullStringQ(void) {
	MESSSAGE_DEBUG("volkNullStringQ")
}

void volkDpl(void) {
	MESSSAGE_DEBUG("volkDpl")
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_ST_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_CPM_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_PC_FORTH)
void volkListing(void) {
	MESSSAGE_DEBUG("volkListing")
}

void volkDocument(void) {
	MESSSAGE_DEBUG("volkDocument")
}

void volkPThru(void) {
	MESSSAGE_DEBUG("volkPThru")
}

void volkPrint(void) {
	MESSSAGE_DEBUG("volkPrint")
}

void volkPrinter(void) {
	MESSSAGE_DEBUG("volkPrinter")
}

void volkDump(void) {
	MESSSAGE_DEBUG("volkDump")
}

void volkTools(void) {
	MESSSAGE_DEBUG("volkTools")
}

void volkToolsDotFb(void) {
	MESSSAGE_DEBUG("volkToolsDotFb")
}

void volkBye(void) {
	MESSSAGE_DEBUG("volkBye")
}

void volkView(void) {
	MESSSAGE_DEBUG("volkView")
}

void volkL(void) {
	MESSSAGE_DEBUG("volkL")
}

void volkV(void) {
	MESSSAGE_DEBUG("volkV")
}

void volkDelete(void) {
	MESSSAGE_DEBUG("volkDelete")
}

void volkCaps(void) {
	MESSSAGE_DEBUG("volkCaps")
}

void volkCColon(void) {
	MESSSAGE_DEBUG("volkCColon")
}

void volkBColon(void) {
	MESSSAGE_DEBUG("volkBColon")
}

void volkAColon(void) {
	MESSSAGE_DEBUG("volkAColon")
}

void volkDir(void) {
	MESSSAGE_DEBUG("volkDir")
}

void volkMore(void) {
	MESSSAGE_DEBUG("volkDir")
}

void volkFiles(void) {
	MESSSAGE_DEBUG("volkFiles")
}

void volkInclude(void) {
	MESSSAGE_DEBUG("volkInclude")
}

void volkLoadFrom(void) {
	MESSSAGE_DEBUG("volkLoadFrom")
}

void volkFrom(void) {
	MESSSAGE_DEBUG("volkLoadFrom")
}

void volkMakefile(void) {
	MESSSAGE_DEBUG("volkMakefile")
}

void volkUse(void) {
	MESSSAGE_DEBUG("volkUse")
}

void volkMake(void) {
	MESSSAGE_DEBUG("volkMake")
}

void volkAssign(void) {
	MESSSAGE_DEBUG("volkAssign")
}

void volkClose(void) {
	MESSSAGE_DEBUG("volkClose")
}

void volkOpen(void) {
	MESSSAGE_DEBUG("volkOpen")
}

void volkFileQ(void) {
	MESSSAGE_DEBUG("volkFileQ")
}

void volkCapacity(void) {
	MESSSAGE_DEBUG("volkCapacity")
}

void volkNumEsc(void) {
	MESSSAGE_DEBUG("volkNumEsc")
}

void volkNumLf(void) {
	MESSSAGE_DEBUG("volkNumLf")
}

void volkQCr(void) {
	MESSSAGE_DEBUG("volkQCr")
}

void volkStopQ(void) {
	MESSSAGE_DEBUG("volkStopQ")
}

void volkSave(void) {
	MESSSAGE_DEBUG("volkSave")
}

void volkEmpty(void) {
	MESSSAGE_DEBUG("volkEmpty")
}

void volkForget(void) {
	MESSSAGE_DEBUG("volkForget")
}

void volkIsFileFetch(void) {
	MESSSAGE_DEBUG("volkIsFileFetch")
}

void volkDDot(void) {
	MESSSAGE_DEBUG("volkDDot")
}

void volkRNum(void) {
	MESSSAGE_DEBUG("volkRNum")
}

void volkScr(void) {
	MESSSAGE_DEBUG("volkScr")
}

void volkAbort(void) {
	MESSSAGE_DEBUG("volkAbort")
}

void volkTickAbort(void) {
	MESSSAGE_DEBUG("volkTickAbort")
}

void volkStandardISlashO(void) {
	MESSSAGE_DEBUG("volkStandardISlashO")
}

void volkZLoad(void) {
	MESSSAGE_DEBUG("volkZLoad")
}

void volkContext(void) {
	MESSSAGE_DEBUG("volkContext")
}

void volkCurrent(void) {
	MESSSAGE_DEBUG("volkCurrent")
}

void volkVp(void) {
	MESSSAGE_DEBUG("volkVp")
}

void volkAlias(void) {
	MESSSAGE_DEBUG("volkAlias")
}

void volkUser(void) {
	MESSSAGE_DEBUG("volkUser")
}

void volkMakeView(void) {
	MESSSAGE_DEBUG("volkMakeView")
}

void volkHAlign(void) {
	MESSSAGE_DEBUG("volkHAlign")
}

void volkAlign(void) {
	MESSSAGE_DEBUG("volkAlign")
}

void volkLoadFile(void) {
	MESSSAGE_DEBUG("volkLoadFile")
}

void volkEven(void) {
	MESSSAGE_DEBUG("volkEven")
}

void volkOn(void) {
	MESSSAGE_DEBUG("volkOn")
}

void volkFourMinus(void) {
	MESSSAGE_DEBUG("volkFourMinus")
}

void volkFourPlus(void) {
	MESSSAGE_DEBUG("volkFourPlus")
}

void volkTwoStore(void) {
	MESSSAGE_DEBUG("volkTwoStore")
}

void volkTwoFetch(void) {
	MESSSAGE_DEBUG("volkTwoFetch")
}

void volkMinusRoll(void) {
	MESSSAGE_DEBUG("volkMinusRoll")
}

void volkSaveSystem(void) {
	MESSSAGE_DEBUG("volkDebug")
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_C64_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_CPM_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_PC_FORTH)
void volkAssembler(void) {
	MESSSAGE_DEBUG("volkAssembler")
}

void volkBSlashBuf(void) {
	MESSSAGE_DEBUG("volkBSlashBuf")
}

void volkPrev(void) {
	MESSSAGE_DEBUG("volkPrev")
}

void volkTick(void) {
	MESSSAGE_DEBUG("volkTick")
}

void volkHex(void) {
	MESSSAGE_DEBUG("volkHex")
}

void volkCLit(void) {
	MESSSAGE_DEBUG("volkCLit")
}

void volkTwoDrop(void) {
	MESSSAGE_DEBUG("volkTwoDrop")
}

void volkRSlashW(void) {
	MESSSAGE_DEBUG("volkRSlashW")
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_C64_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_ST_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_PC_FORTH)
void volkToDrive(void) {
	MESSSAGE_DEBUG("volkToDrive")
}

void volkLDump(void) {
	MESSSAGE_DEBUG("volkLDump")
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_C64_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_ST_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_CPM_FORTH)
void volkDrvInit(void) {
	MESSSAGE_DEBUG("volkDrvInit")
}

void volkConStore(void) {
	MESSSAGE_DEBUG("volkConStore")
}

void volkGetKey(void) {
	MESSSAGE_DEBUG("volkGetKey")
}

void volkFreeBuffer(void) {
	MESSSAGE_DEBUG("volkFreeBuffer")
}

void volkAllotBuffer(void) {
	MESSSAGE_DEBUG("volkAllotBuffer")
}

void volkFirst(void) {
	MESSSAGE_DEBUG("volkFirst")
}

void volkLimit(void) {
	MESSSAGE_DEBUG("volkLimit")
}

void volkBuffers(void) {
	MESSSAGE_DEBUG("volkBuffers")
}

void volkPlusLoop(void) {
	MESSSAGE_DEBUG("volkPlusLoop")
}

void volkFlush(void) {
	MESSSAGE_DEBUG("volkFlush")
}

void volkEmptyBuffers(void) {
	MESSSAGE_DEBUG("volkEmptyBuffers")
}

void volkSaveBuffers(void) {
	MESSSAGE_DEBUG("volkSaveBuffers")
}

#endif


#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_C64_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_ST_FORTH)
void volkIndex(void) {
	MESSSAGE_DEBUG("volkIndex")
}

void volkDrvQ(void) {
	MESSSAGE_DEBUG("volkDrvQ")
}

void volkToInterpret(void) {
	MESSSAGE_DEBUG("volkToInterpret")
}

void volkCapitalize(void) {
	MESSSAGE_DEBUG("volkCapitalize")
}

void volkBlkSlashDrv(void) {
	MESSSAGE_DEBUG("volkBlkSlashDrv")
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_ST_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_CPM_FORTH)
void volkPrinterDotScr(void) {
	MESSSAGE_DEBUG("volkPrinterDotScr")
}

void volkRelocateDotScr(void) {
	MESSSAGE_DEBUG("volkRelocateDotScr")
}

void volkTraceTick(void) {
	MESSSAGE_DEBUG("volkTraceTick")
}

void volkDebug(void) {
	MESSSAGE_DEBUG("volkDebug")
}

void volkDotBlk(void) {
	MESSSAGE_DEBUG("volkDotBlk")
}

void volkStartupDotScr(void) {
	MESSSAGE_DEBUG("volkStartupDotScr")
}

void volkFileIntDotScr(void) {
	MESSSAGE_DEBUG("volkFileIntDotScr")
}

void volkFilesQuote(void) {
	MESSSAGE_DEBUG("volkFilesQuote")
}

void volkEof(void) {
	MESSSAGE_DEBUG("volkEof")
}

void volkCurRite(void) {
	MESSSAGE_DEBUG("volkCurRite")
}

void volkCurLeft(void) {
	MESSSAGE_DEBUG("volkCurLeft")
}

void volkZWord(void) {
	MESSSAGE_DEBUG("volkZWord")
}

void volkUP(void) {
	MESSSAGE_DEBUG("volkUP")
}

void volkToolsDotScr(void) {
	MESSSAGE_DEBUG("volkToolsDotScr")
}

void volkEditorDotScr(void) {
	MESSSAGE_DEBUG("volkEditorDotScr")
}

void volkZView(void) {
	MESSSAGE_DEBUG("volkZView")
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_CPM_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_PC_FORTH)
void volkRendezvous(void) {
	MESSSAGE_DEBUG("volkRendezvous")
}

void volkTask(void) {
	MESSSAGE_DEBUG("volkTask")
}

void volkWake(void) {
	MESSSAGE_DEBUG("volkWake")
}

void volkSleep(void) {
	MESSSAGE_DEBUG("volkSleep")
}

void volkActivate(void) {
	MESSSAGE_DEBUG("volkActivate")
}

void volkPass(void) {
	MESSSAGE_DEBUG("volkPass")
}

void volkMultiTask(void) {
	MESSSAGE_DEBUG("volkMultiTask")
}

void volkSingleTask(void) {
	MESSSAGE_DEBUG("volkSingleTask")
}

void volkStop(void) {
	MESSSAGE_DEBUG("volkStop")
}

void volkFix(void) {
	MESSSAGE_DEBUG("volkFix")
}

void volkNumDel(void) {
	MESSSAGE_DEBUG("volkNumDel")
}

void volkCtrl(void) {
	MESSSAGE_DEBUG("volkCtrl")
}

void volkUpdatedQ(void) {
	MESSSAGE_DEBUG("volkUpdatedQ")
}

void volkEditor(void) {
	MESSSAGE_DEBUG("volkEditor")
}

void volkBlank(void) {
	MESSSAGE_DEBUG("volkBlank")
}

void volkZKey(void) {
	MESSSAGE_DEBUG("volkZKey")
}

void volkZExpect(void) {
	MESSSAGE_DEBUG("volkZExpect")
}

void volkZDecode(void) {
	MESSSAGE_DEBUG("volkZDecode")
}

void volkZDel(void) {
	MESSSAGE_DEBUG("volkZDel")
}

void volkZCr(void) {
	MESSSAGE_DEBUG("volkZCr")
}

void volkZEmit(void) {
	MESSSAGE_DEBUG("volkZEmit")
}

void volkZType(void) {
	MESSSAGE_DEBUG("volkZType")
}

void volkZPage(void) {
	MESSSAGE_DEBUG("volkZPage")
}

void volkZAtQ(void) {
	MESSSAGE_DEBUG("volkZAtQ")
}

void volkZAt(void) {
	MESSSAGE_DEBUG("volkZAt")
}

void volkCSlashCol(void) {
	MESSSAGE_DEBUG("volkCSlashCol")
}

void volkCSlashRow(void) {
	MESSSAGE_DEBUG("volkCSlashRow")
}

void volkLabel(void) {
	MESSSAGE_DEBUG("volkLabel")
}

void volkToLabel(void) {
	MESSSAGE_DEBUG("volkToLabel")
}

void volkSemicolonCode(void) {
	MESSSAGE_DEBUG("volkSemicolonCode")
}

void volkCode(void) {
	MESSSAGE_DEBUG("volkCode")
}

void volkSaveFile(void) {
	MESSSAGE_DEBUG("volkSaveFile")
}

void volkDirect(void) {
	MESSSAGE_DEBUG("volkDirect")
}

void volkZRSlashW(void) {
	MESSSAGE_DEBUG("volkZRSlashW")
}

void volkNumBel(void) {
	MESSSAGE_DEBUG("volkNumBel")
}

void volkNumTab(void) {
	MESSSAGE_DEBUG("volkNumTab")
}

void volkDos(void) {
	MESSSAGE_DEBUG("volkDos")
}

void volkEmptyBuf(void) {
	MESSSAGE_DEBUG("volkEmptyBuf")
}

void volkZCoreQ(void) {
	MESSSAGE_DEBUG("volkZCoreQ")
}

void volkFromFile(void) {
	MESSSAGE_DEBUG("volkFromFile")
}

void volkIsFile(void) {
	MESSSAGE_DEBUG("volkIsFile")
}

void volkPrompt(void) {
	MESSSAGE_DEBUG("volkPrompt")
}

void volkZPrompt(void) {
	MESSSAGE_DEBUG("volkZPrompt")
}

void volkParser(void) {
	MESSSAGE_DEBUG("volkParser")
}

void volkRoot(void) {
	MESSSAGE_DEBUG("volkRoot")
}

void volkBodyFrom(void) {
	MESSSAGE_DEBUG("volkBodyFrom")
}

void volkZNameFrom(void) {
	MESSSAGE_DEBUG("volkZNameFrom")
}

void volkZSemicolonCode(void) {
	MESSSAGE_DEBUG("volkZSemicolonCode")
}

void volkUpper(void) {
	MESSSAGE_DEBUG("volkUpper")
}

void volkFlip(void) {
	MESSSAGE_DEBUG("volkFlip")
}

void volkZeroEqualExit(void) {
	MESSSAGE_DEBUG("volkZeroEqualExit")
}

void volkRemove(void) {
	MESSSAGE_DEBUG("volkRemove")
}

void volkZKeyQ(void) {
	MESSSAGE_DEBUG("volkZKeyQ")
}

void volkTipp(void) {
	MESSSAGE_DEBUG("volkTipp")
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_C64_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_CPM_FORTH)
void volkPrintableQ(void) {
	MESSSAGE_DEBUG("volkPrintableQ")
}

void volkDiskErr(void) {
	MESSSAGE_DEBUG("volkDiskErr")
}

void volkZDiskErr(void) {
	MESSSAGE_DEBUG("volkZDiskErr")
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_C64_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_PC_FORTH)
void volkDrive(void) {
	MESSSAGE_DEBUG("volkDrive")
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_ST_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_PC_FORTH)
void volkBell(void) {
	MESSSAGE_DEBUG("volkBell")
}

void volkAbortZ(void) {
	MESSSAGE_DEBUG("volkAbortZ")
}

void volkPath(void) {
	MESSSAGE_DEBUG("volkPath")
}

void volkArguments(void) {
	MESSSAGE_DEBUG("volkArguments")
}

void volkTwoOver(void) {
	MESSSAGE_DEBUG("volkTwoOver")
}

void volkLFetch(void) {
	MESSSAGE_DEBUG("volkLFetch")
}

void volkLStore(void) {
	MESSSAGE_DEBUG("volkLStore")
}

void volkLCStore(void) {
	MESSSAGE_DEBUG("volkLCStore")
}

void volkNextLink(void) {
	MESSSAGE_DEBUG("volkNextLink")
}

#endif


#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
   (H2O_FORTH_PRIMITIVES == VOLK_C64_FORTH)
void volkZ64(void) {
	MESSSAGE_DEBUG("volkZ64")
}

void volkCZ(void) {
	MESSSAGE_DEBUG("volkCZ")
}

void volkZ16(void) {
	MESSSAGE_DEBUG("volkZ16")
}

void volkC64Init(void) {
	MESSSAGE_DEBUG("volkC64Init")
}

void volkInitSystem(void) {
	MESSSAGE_DEBUG("volkInitSystem")
}

void volkInkPot(void) {
	MESSSAGE_DEBUG("volkInkPot")
}

void volkFIndex(void) {
	MESSSAGE_DEBUG("volkFIndex")
}

void volkCBM1541RSlashW(void) {
	MESSSAGE_DEBUG("volkCBM1541RSlashW")
}

void volkDiskClose(void) {
	MESSSAGE_DEBUG("volkDiskClose")
}

void volkDiskOpen(void) {
	MESSSAGE_DEBUG("volkDiskOpen")
}

void volkWriteSector(void) {
	MESSSAGE_DEBUG("volkWriteSector")
}

void volkReadSector(void) {
	MESSSAGE_DEBUG("volkReadSector")
}

void volkDErrorQ(void) {
	MESSSAGE_DEBUG("volkDErrorQ")
}

void volkBusInput(void) {
	MESSSAGE_DEBUG("volkBusInput")
}

void volkBusFetch(void) {
	MESSSAGE_DEBUG("volkBusFetch")
}

void volkBusType(void) {
	MESSSAGE_DEBUG("volkBusType")
}

void volkBusStore(void) {
	MESSSAGE_DEBUG("volkBusStore")
}

void volkBusIn(void) {
	MESSSAGE_DEBUG("volkBusIn")
}

void volkZBusIn(void) {
	MESSSAGE_DEBUG("volkZBusIn")
}

void volkBusClose(void) {
	MESSSAGE_DEBUG("volkBusClose")
}

void volkBusOpen(void) {
	MESSSAGE_DEBUG("volkBusOpen")
}

void volkBusOff(void) {
	MESSSAGE_DEBUG("volkBusOff")
}

void volkISlashO(void) {
	MESSSAGE_DEBUG("volkISlashO")
}

void volkZDrv(void) {
	MESSSAGE_DEBUG("volkZDrv")
}

void volkC64Type(void) {
	MESSSAGE_DEBUG("volkC64Type")
}

void volkC64AtQ(void) {
	MESSSAGE_DEBUG("volkC64AtQ")
}

void volkC64At(void) {
	MESSSAGE_DEBUG("volkC64At")
}

void volkC64Page(void) {
	MESSSAGE_DEBUG("volkC64Page")
}

void volkC64Del(void) {
	MESSSAGE_DEBUG("volkC64Del")
}

void volkC64Cr(void) {
	MESSSAGE_DEBUG("volkC64Cr")
}

void volkC64Emit(void) {
	MESSSAGE_DEBUG("volkC64Emit")
}

void volkC64Expect(void) {
	MESSSAGE_DEBUG("volkC64Expect")
}

void volkC64Decode(void) {
	MESSSAGE_DEBUG("volkC64Decode")
}

void volkC64Key(void) {
	MESSSAGE_DEBUG("volkC64Key")
}

void volkC64KeyQ(void) {
	MESSSAGE_DEBUG("volkC64KeyQ")
}

void volkBlkMove(void) {
	MESSSAGE_DEBUG("volkBlkMove")
}

void volkZCopy(void) {
	MESSSAGE_DEBUG("volkZCopy")
}

void volkTickNumberQ(void) {
	MESSSAGE_DEBUG("volkTickNumberQ")
}

void volkPrevious(void) {
	MESSSAGE_DEBUG("volkPrevious")
}

void volkChar(void) {
	MESSSAGE_DEBUG("volkChar")
}

void volkEndQ(void) {
	MESSSAGE_DEBUG("volkEndQ")
}

void volkBasOn(void) {
	MESSSAGE_DEBUG("volkBasOn")
}

void volkLogo(void) {
	MESSSAGE_DEBUG("volkLogo")
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_ST_FORTH)
void volkPrintALL(void) {
	MESSSAGE_DEBUG("volkPrintALL")
}

void volkRelocate(void) {
	MESSSAGE_DEBUG("volkRelocate")
}

void volkIndexDotScr(void) {
	MESSSAGE_DEBUG("volkIndexDotScr")
}

void volkTickEditFile(void) {
	MESSSAGE_DEBUG("volkTickEditFile")
}

void volkTickRNum(void) {
	MESSSAGE_DEBUG("volkTickRNum")
}

void volkTickScr(void) {
	MESSSAGE_DEBUG("volkTickScr")
}

void volkEdWindowDotScr(void) {
	MESSSAGE_DEBUG("volkEdWindowDotScr")
}

void volkGemBackslashVdiDotScr(void) {
	MESSSAGE_DEBUG("volkGemBackslashVdiDotScr")
}

void volkGemBackslashSuperGemDotScr(void) {
	MESSSAGE_DEBUG("volkGemBackslashSuperGemDotScr")
}

void volkEdiConDotScr(void) {
	MESSSAGE_DEBUG("volkEdiConDotScr")
}

void volkGem(void) {
	MESSSAGE_DEBUG("volkGem")
}

void volkGemBackslashBsicDotScr(void) {
	MESSSAGE_DEBUG("volkGemBackslashBsicDotScr")
}

void volkGemBackslashAesDotScr(void) {
	MESSSAGE_DEBUG("volkGemBackslashAesDotScr")
}

void volkMFree(void) {
	MESSSAGE_DEBUG("volkMFree")
}

void volkMalloc(void) {
	MESSSAGE_DEBUG("volkMalloc")
}

void volkAllocateDotScr(void) {
	MESSSAGE_DEBUG("volkAllocateDotScr")
}

void volkZeroQuote(void) {
	MESSSAGE_DEBUG("volkZeroQuote")
}

void volkCommaZeroQuote(void) {
	MESSSAGE_DEBUG("volkCommaZeroQuote")
}

void volkZeroGreaterCQuote(void) {
	MESSSAGE_DEBUG("volkZeroGreaterCQuote")
}

void volkCGreaterZeroQuote(void) {
	MESSSAGE_DEBUG("volkCGreaterZeroQuote")
}

void volkDollarAdd(void) {
	MESSSAGE_DEBUG("volkDollarAdd")
}

void volkDollarSum(void) {
	MESSSAGE_DEBUG("volkDollarSum")
}

void volkSearch(void) {
	MESSSAGE_DEBUG("volkSearch")
}

void volkCompareText(void) {
	MESSSAGE_DEBUG("volkCompareText")
}

void volkringsDotScr(void) {
	MESSSAGE_DEBUG("volkringsDotScr")
}

void volkAssembleDotScr(void) {
	MESSSAGE_DEBUG("volkAssembleDotScr")
}

void volkBlak(void) {
	MESSSAGE_DEBUG("volkBlak")
}

void volkCPush(void) {
	MESSSAGE_DEBUG("volkCPush")
}

void volkAbsAddr(void) {
	MESSSAGE_DEBUG("volkAbsAddr")
}

void volkDiversesDotScr(void) {
	MESSSAGE_DEBUG("volkDiversesDotScr")
}

void volkForth83DotScr(void) {
	MESSSAGE_DEBUG("volkForth83DotScr")
}

void volkRemoveQ(void) {
	MESSSAGE_DEBUG("volkRemoveQ")
}

void volkMakeDir(void) {
	/* = volkMd */
	MESSSAGE_DEBUG("volkMakeDir")
}

void volkZMore(void) {
	MESSSAGE_DEBUG("volkZMore")
}

void volkDirekt(void) {
	MESSSAGE_DEBUG("volkDirekt")
}

void volkSTRSlashW(void) {
	MESSSAGE_DEBUG("volkSTRSlashW")
}

void volkRWAbs(void) {
	MESSSAGE_DEBUG("volkRWAbs")
}

void volkDrv1(void) {
	MESSSAGE_DEBUG("volkDrv1")
}

void volkDrv0(void) {
	MESSSAGE_DEBUG("volkDrv0")
}

void volkZBlkSlashDrv(void) {
	MESSSAGE_DEBUG("volkZBlkSlashDrv")
}

void volkStType(void) {
	MESSSAGE_DEBUG("volkStType")
}

void volkStAtQ(void) {
	MESSSAGE_DEBUG("volkStAtQ")
}

void volkStAt(void) {
	MESSSAGE_DEBUG("volkStAt")
}

void volkStPage(void) {
	MESSSAGE_DEBUG("volkStPage")
}

void volkStDel(void) {
	MESSSAGE_DEBUG("volkStDel")
}

void volkStCR(void) {
	MESSSAGE_DEBUG("volkStCR")
}

void volkStEmit(void) {
	MESSSAGE_DEBUG("volkStEmit")
}

void volkStExpect(void) {
	MESSSAGE_DEBUG("volkStExpect")
}

void volkStDecode(void) {
	MESSSAGE_DEBUG("volkStDecode")
}

void volkStKey(void) {
	MESSSAGE_DEBUG("volkStKey")
}

void volkStKeyQ(void) {
	MESSSAGE_DEBUG("volkStKeyQ")
}

void volkWrap(void) {
	MESSSAGE_DEBUG("volkWrap")
}

void volkBConOut(void) {
	MESSSAGE_DEBUG("volkBConOut")
}

void volkBConIn(void) {
	MESSSAGE_DEBUG("volkBConIn")
}

void volkBcoStat(void) {
	MESSSAGE_DEBUG("volkBcoStat")
}

void volkBconStat(void) {
	MESSSAGE_DEBUG("volkBconStat")
}

void volkTwoVariable(void) {
	MESSSAGE_DEBUG("volkTwoVariable")
}

void volkTwoConstant(void) {
	MESSSAGE_DEBUG("volkTwoConstant")
}

void volkBlkFetch(void) {
	MESSSAGE_DEBUG("volkBlkFetch")
}

void volkDStar(void) {
	MESSSAGE_DEBUG("volkDStar")
}

void volkDMinus(void) {
	MESSSAGE_DEBUG("volkDMinus")
}

void volkQuoteDrop(void) {
	MESSSAGE_DEBUG("volkQuoteDrop")
}

void volkLNPlusStore(void) {
	MESSSAGE_DEBUG("volkLNPlusStore")
}

void volkL2Store(void) {
	MESSSAGE_DEBUG("volkL2Store")
}

void volkL2Fetch(void) {
	MESSSAGE_DEBUG("volkL2Fetch")
}

void volkLCMove(void) {
	MESSSAGE_DEBUG("volkLCMove")
}

void volkForthStart(void) {
	MESSSAGE_DEBUG("volkForthStart")
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_CPM_FORTH)
void volkSpool(void) {
	MESSSAGE_DEBUG("volkSpool")
}

void volkSpooler(void) {
	MESSSAGE_DEBUG("volkSpooler")
}

void volkShadow(void) {
	MESSSAGE_DEBUG("volkShadow")
}

void volkTasks(void) {
	MESSSAGE_DEBUG("volkTasks")
}

void volkTickS(void) {
	/* "'S" => Capital "S" */
	MESSSAGE_DEBUG("volkTasks")
}
void volkTaskerDotScr(void) {
	MESSSAGE_DEBUG("volkTaskerDotScr")
}

void volkSee(void) {
	MESSSAGE_DEBUG("volkSee")
}

void volkSeeDotScr(void) {
	MESSSAGE_DEBUG("volkSeeDotScr")
}

void volkExternal(void) {
	MESSSAGE_DEBUG("volkExternal")
}

void volkInternal(void) {
	MESSSAGE_DEBUG("volkInternal")
}

void volkQAbortZ(void) {
	MESSSAGE_DEBUG("volkQAbortZ")
}

void volkQEnough(void) {
	MESSSAGE_DEBUG("volkQEnough")
}

void volkReplace(void) {
	MESSSAGE_DEBUG("volkReplace")
}

void volkInsert(void) {
	MESSSAGE_DEBUG("volkInsert")
}

void volkSaveSysDotScr(void) {
	MESSSAGE_DEBUG("volkSaveSysDotScr")
}

void volkCopyDotScr(void) {
	MESSSAGE_DEBUG("volkSaveSysDotScr")
}

void volkAnsi(void) {
	MESSSAGE_DEBUG("volkAnsi")
}

void volkTerminalDotScr(void) {
	MESSSAGE_DEBUG("volkTerminalDotScr")
}

void volkDumb(void) {
	MESSSAGE_DEBUG("volkDumb")
}

void volkLocate(void) {
	MESSSAGE_DEBUG("volkLocate")
}

void volkDark(void) {
	MESSSAGE_DEBUG("volkDark")
}

void volkRvsOff(void) {
	MESSSAGE_DEBUG("volkRvsOff")
}

void volkRvsOn(void) {
	MESSSAGE_DEBUG("volkRvsOn")
}

void volkTerminalColon(void) {
	MESSSAGE_DEBUG("volkTerminalColon")
}

void volkTermColon(void) {
	MESSSAGE_DEBUG("volkTermColon")
}

void volkXinOutDotScr(void) {
	MESSSAGE_DEBUG("volkXinOutDotScr")
}

void volkAss8080DotScr(void) {
	MESSSAGE_DEBUG("volkAss8080DotScr")
}

void volkSourceDotScr(void) {
	MESSSAGE_DEBUG("volkSourceDotScr")
}

void volkJColon(void) {
	MESSSAGE_DEBUG("volkJColon")
}

void volkDriveColon(void) {
	MESSSAGE_DEBUG("volkDriveColon")
}

void volkDirQuote(void) {
	MESSSAGE_DEBUG("volkDirQuote")
}

void volkDotBuffers(void) {
	MESSSAGE_DEBUG("volkDotBuffers")
}

void volkZMakeView(void) {
	MESSSAGE_DEBUG("volkZMakeView")
}

void volkForthFiles(void) {
	MESSSAGE_DEBUG("volkForthFiles")
}

void volkDotSize(void) {
	MESSSAGE_DEBUG("volkDotSize")
}

void volkPostlude(void) {
	MESSSAGE_DEBUG("volkPostlude")
}

void volkRecSlashBlk(void) {
	MESSSAGE_DEBUG("volkRecSlashBlk")
}

void volkBSlashRec(void) {
	MESSSAGE_DEBUG("volkBSlashRec")
}

void volkNumFf(void) {
	MESSSAGE_DEBUG("volkNumFf")
}

void volkQuoteSearch(void) {
	MESSSAGE_DEBUG("volkQuoteSearch")
}

void volkSaveDosBuffers(void) {
	MESSSAGE_DEBUG("volkSaveDosBuffers")
}

void volkCreateZ(void) {
	MESSSAGE_DEBUG("volkCreateZ")
}

void volkPlusToMark(void) {
	MESSSAGE_DEBUG("volkPlusToMark")
}

void volkIPSave(void) {
	MESSSAGE_DEBUG("volkIPSave")
}

void volkRP(void) {
	MESSSAGE_DEBUG("volkRP")
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_PC_FORTH)
void volkPList(void) {
	MESSSAGE_DEBUG("volkPList")
}

void volkPlusPrint(void) {
	MESSSAGE_DEBUG("volkPlusPrint")
}

void volkGraphicsDotPrn(void) {
	MESSSAGE_DEBUG("volkGraphicsDotPrn")
}

void volkEdit(void) {
	MESSSAGE_DEBUG("volkEdit")
}

void volkED(void) {
	MESSSAGE_DEBUG("volkED")
}

void volkEditorDotFb(void) {
	MESSSAGE_DEBUG("volkEditorDotFb")
}

void volkTimes(void) {
	MESSSAGE_DEBUG("volkTimes")
}

void volkOften(void) {
	MESSSAGE_DEBUG("volkOften")
}

void volkTimeFetch(void) {
	MESSSAGE_DEBUG("volkTimeFetch")
}

void volkDateFetch(void) {
	MESSSAGE_DEBUG("volkDateFetch")
}

void volkMinutes(void) {
	MESSSAGE_DEBUG("volkMinutes")
}

void volkSeconds(void) {
	MESSSAGE_DEBUG("volkSeconds")
}

void volkWait(void) {
	MESSSAGE_DEBUG("volkWait")
}

void volkTime(void) {
	MESSSAGE_DEBUG("volkTime")
}

void volkTill(void) {
	MESSSAGE_DEBUG("volkTill")
}

void volkTimeoutQ(void) {
	MESSSAGE_DEBUG("volkTimeoutQ")
}

/* Ticks */
void volkTicks(void) {
	MESSSAGE_DEBUG("volkTimeoutQ")
}

void volkTimerDotFb(void) {
	MESSSAGE_DEBUG("volkTimerDotFb")
}

void volkTaskerDotFb(void) {
	MESSSAGE_DEBUG("volkTaskerDotFb")
}

void volkCall(void) {
	MESSSAGE_DEBUG("volkCall")
}

void volkMsdos(void) {
	MESSSAGE_DEBUG("volkMsdos")
}

void volkFType(void) {
	MESSSAGE_DEBUG("volkFType")
}

void volkFcopy(void) {
	MESSSAGE_DEBUG("volkFcopy")
}

void volkRd(void) {
	MESSSAGE_DEBUG("volkRd")
}

void volkCd(void) {
	MESSSAGE_DEBUG("volkCd")
}

void volkMd(void) {
	MESSSAGE_DEBUG("volkMd")
}

void volkRen(void) {
	MESSSAGE_DEBUG("volkRen")
}

void volkDotPath(void) {
	MESSSAGE_DEBUG("volkDotPath")
}

void volkEmptyFile(void) {
	MESSSAGE_DEBUG("volkEmptyFile")
}

void volkKillfile(void) {
	MESSSAGE_DEBUG("volkKillfile")
}

void volkQFile(void) {
	MESSSAGE_DEBUG("volkQFile")
}

void volkUsedQ(void) {
	MESSSAGE_DEBUG("volkUsedQ")
}

void volkDTA(void) {
	MESSSAGE_DEBUG("volkDTA")
}

void volkFSwap(void) {
	MESSSAGE_DEBUG("volkFSwap")
}

void volkDosDotFb(void) {
	MESSSAGE_DEBUG("volkDosDotFb")
}

void volkZDotStatus(void) {
	MESSSAGE_DEBUG("volkZDotStatus")
}

void volkDotSpace(void) {
	MESSSAGE_DEBUG("volkDotSpace")
}

void volkDotScr(void) {
	MESSSAGE_DEBUG("volkDotScr")
}

void volkDotDR(void) {
	MESSSAGE_DEBUG("volkDotDR")
}

void volkZDotDrv(void) {
	MESSSAGE_DEBUG("volkZDotDrv")
}

void volkDotSP(void) {
	MESSSAGE_DEBUG("volkDotSP")
}

void volkDotBase(void) {
	MESSSAGE_DEBUG("volkDotBase")
}

void volkScroll(void) {
	MESSSAGE_DEBUG("volkScroll")
}

void volkBlankLine(void) {
	MESSSAGE_DEBUG("volkBlankLine")
}

void volkBright(void) {
	MESSSAGE_DEBUG("volkBright")
}

void volkUnderline(void) {
	MESSSAGE_DEBUG("volkUnderline")
}

void volkInvers(void) {
	MESSSAGE_DEBUG("volkInvers")
}

void volkNormal(void) {
	MESSSAGE_DEBUG("volkNormal")
}

void volkSetPage(void) {
	MESSSAGE_DEBUG("volkSetPage")
}

void volkCurShape(void) {
	MESSSAGE_DEBUG("volkCurShape")
}

void volkCurStore(void) {
	MESSSAGE_DEBUG("volkCurStore")
}

void volkCurAtQ(void) {
	MESSSAGE_DEBUG("volkCurAtQ")
}

void volkFull(void) {
	MESSSAGE_DEBUG("volkFull")
}

void volkWindow(void) {
	MESSSAGE_DEBUG("volkWindow")
}

void volkCatt(void) {
	MESSSAGE_DEBUG("volkCatt")
}

void volkZArea(void) {
	MESSSAGE_DEBUG("volkZArea")
}

void volkTerminal(void) {
	MESSSAGE_DEBUG("volkTerminal")
}

void volkAreaColon(void) {
	MESSSAGE_DEBUG("volkAreaColon")
}

void volkStatus(void) {
	MESSSAGE_DEBUG("volkStatus")
}

void volkArea(void) {
	MESSSAGE_DEBUG("volkArea")
}

void volkMultiDotVid(void) {
	MESSSAGE_DEBUG("volkMultiDotVid")
}

void volkDotIf(void) {
	MESSSAGE_DEBUG("volkDotIf")
}

void volkDotElse(void) {
	MESSSAGE_DEBUG("volkDotElse")
}

void volkDotThen(void) {
	MESSSAGE_DEBUG("volkDotThen")
}

void volkQQuote(void) {
	MESSSAGE_DEBUG("volkQQuote")
}

void volkToMonth(void) {
	MESSSAGE_DEBUG("volkToMonth")
}

void volkAttach(void) {
	MESSSAGE_DEBUG("volkAttach")
}

void volkAppend(void) {
	MESSSAGE_DEBUG("volkAppend")
}

void volkRestoreVideo(void) {
	MESSSAGE_DEBUG("volkRestoreVideo")
}

void volkSaveVideo(void) {
	MESSSAGE_DEBUG("volkSaveVideo")
}

void volkVideoFetch(void) {
	MESSSAGE_DEBUG("volkVideoFetch")
}

void volkCSlashDIS(void) {
	MESSSAGE_DEBUG("volkCSlashDIS")
}

void volkLFree(void) {
	MESSSAGE_DEBUG("volkLFree")
}

void volkLAllocate(void) {
	MESSSAGE_DEBUG("volkLAllocate")
}

void volkAdr(void) {
	MESSSAGE_DEBUG("volkAdr")
}

void volkUQ(void) {
	MESSSAGE_DEBUG("volkUQ")
}

void volkTab(void) {
	MESSSAGE_DEBUG("volkTab")
}

void volkDotField(void) {
	MESSSAGE_DEBUG("volkDotField")
}

void volkToExpect(void) {
	MESSSAGE_DEBUG("volkToExpect")
}

void volkStash(void) {
	MESSSAGE_DEBUG("volkStash")
}

void volkCls(void) {
	MESSSAGE_DEBUG("volkCls")
}

void volkTickName(void) {
	MESSSAGE_DEBUG("volkTickName")
}

void volkSav(void) {
	MESSSAGE_DEBUG("volkSav")
}

void volkExtendDotFb(void) {
	MESSSAGE_DEBUG("volkExtendDotFb")
}

void volkEndCode(void) {
	MESSSAGE_DEBUG("volkEndCode")
}

void volkASmDotFb(void) {
	MESSSAGE_DEBUG("volkASmDotFb")
}

void volkVolks4THDotSys(void) {
	MESSSAGE_DEBUG("volkvolks4THDotSys")
}

void volkHelp(void) {
	MESSSAGE_DEBUG("volkHelp")
}

void volkLFSave(void) {
	MESSSAGE_DEBUG("volkLFSave")
}

void volkHColon(void) {
	MESSSAGE_DEBUG("volkHColon")
}

void volkGColon(void) {
	MESSSAGE_DEBUG("volkGColon")
}

void volkFColon(void) {
	MESSSAGE_DEBUG("volkFColon")
}

void volkEColon(void) {
	MESSSAGE_DEBUG("volkEColon")
}

void volkDrv(void) {
	MESSSAGE_DEBUG("volkDrv")
}

void volkPushFile(void) {
	MESSSAGE_DEBUG("volkPushFile")
}

void volkXFCB(void) {
	MESSSAGE_DEBUG("volkXFCB")
}

void volkKernelDotScr(void) {
	MESSSAGE_DEBUG("volkKernelDotScr")
}

void volkAsciz(void) {
	MESSSAGE_DEBUG("volkAsciz")
}

void volkToAsciz(void) {
	MESSSAGE_DEBUG("volkToAsciz")
}

void volkCounted(void) {
	MESSSAGE_DEBUG("volkCounted")
}

void volkPCStore(void) {
	MESSSAGE_DEBUG("volkPCStore")
}

void volkPCFetch(void) {
	MESSSAGE_DEBUG("volkPCFetch")
}

void volkListStore(void) {
	MESSSAGE_DEBUG("volkListStore")
}

void volkCharOut(void) {
	MESSSAGE_DEBUG("volkCharOut")
}

void volkEmptyKeys(void) {
	MESSSAGE_DEBUG("volkEmptyKeys")
}

void volkZKeyFetch(void) {
	MESSSAGE_DEBUG("volkZKeyFetch")
}

void volkLMove(void) {
	MESSSAGE_DEBUG("volkLMove")
}

void volkLType(void) {
	MESSSAGE_DEBUG("volkLType")
}

void volkLCFetch(void) {
	MESSSAGE_DEBUG("volkLCFetch")
}

void volkReturnCode(void) {
	MESSSAGE_DEBUG("volkReturnCode")
}

void volkTrim(void) {
	MESSSAGE_DEBUG("volkTrim")
}

void volkQDiskError(void) {
	MESSSAGE_DEBUG("volkQDiskError")
}

void volkErrorNum(void) {
	MESSSAGE_DEBUG("volkErrorNum")
}

void volkVocs(void) {
	MESSSAGE_DEBUG("volkVocs")
}

void volkLastTick(void) {
	MESSSAGE_DEBUG("volkLastTick")
}

void volkHave(void) {
	MESSSAGE_DEBUG("volkHave")
}

void volkZCapital(void) {
	MESSSAGE_DEBUG("volkZCapital")
}

void volkStarLoop(void) {
	MESSSAGE_DEBUG("volkStarLoop")
}

void volkBSlashSeg(void) {
	MESSSAGE_DEBUG("volkBSlashSeg")
}

void volkDSFetch(void) {
	MESSSAGE_DEBUG("volkDSFetch")
}

void volkFileLink(void) {
	MESSSAGE_DEBUG("volkFileLink")
}

void volkAborted(void) {
	MESSSAGE_DEBUG("volkAborted")
}

#endif

#endif
