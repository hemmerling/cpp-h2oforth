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
	DEBUG_WORD("volkForth83")
}

void volkBSlashBlk(void) {
	DEBUG_WORD("volkBSlashBlk")
}

void volkDisplay(void) {
	DEBUG_WORD("volkDisplay")
}

void volkKeyboard(void) {
	DEBUG_WORD("volkKeyboard")
}

void volkNumCr(void) {
	DEBUG_WORD("volkNumCr")
}

void volkNumBs(void) {
	DEBUG_WORD("volkNumBs")
}

void volkCurOff(void) {
	DEBUG_WORD("volkCurOff")
}

void volkCurOn(void) {
	DEBUG_WORD("volkCurOn")
}

void volkRestart(void) {
	DEBUG_WORD("volkRestart")
}

void volkTickCold(void) {
	DEBUG_WORD("volkTickCold")
}

void volkTickRestart(void) {
	DEBUG_WORD("volkTickRestart")
}

void volkExpect(void) {
	DEBUG_WORD("volkExpect")
}

void volkDecode(void) {
	DEBUG_WORD("volkDecode")
}

void volkKeyQ(void) {
	DEBUG_WORD("volkKeyQ")
}

void volkKey(void) {
	DEBUG_WORD("volkKey")
}

void volkInputColon(void) {
	DEBUG_WORD("volkInputColon")
}

void volkCol(void) {
	DEBUG_WORD("volkCol")
}

void volkRow(void) {
	DEBUG_WORD("volkRow")
}

void volkAtQ(void) {
	DEBUG_WORD("volkAtQ")
}

void volkAt(void) {
	DEBUG_WORD("volkAt")
}

void volkPage(void) {
	DEBUG_WORD("volkPage")
}

void volkDel(void) {
	DEBUG_WORD("volkDel")
}

void volkType(void) {
	DEBUG_WORD("volkType")
}

void volkCr(void) {
	DEBUG_WORD("volkCr")
}

void volkEmit(void) {
	DEBUG_WORD("volkEmit")
}

void volkOutputColon(void) {
	DEBUG_WORD("volkOutputColon")
}

void volkZForget(void) {
	DEBUG_WORD("volkZForget")
}

void volkClear(void) {
	DEBUG_WORD("volkClear")
}

void volkCustomRemove(void) {
	DEBUG_WORD("volkCustomRemove")
}

void volkAllBuffers(void) {
	DEBUG_WORD("volkAllBuffers")
}

void volkConvey(void) {
	DEBUG_WORD("volkConvey")
}

void volkCopy(void) {
	DEBUG_WORD("volkCopy")
}

void volkUpdate(void) {
	DEBUG_WORD("volkUpdate")
}

void volkBlock(void) {
	DEBUG_WORD("volkBlock")
}

void volkBuffer(void) {
	DEBUG_WORD("volkBuffer")
}

void volkZBlock(void) {
	DEBUG_WORD("volkZBlock")
}

void volkZBuffer(void) {
	DEBUG_WORD("volkZBuffer")
}

void volkCoreQ(void) {
	DEBUG_WORD("volkCoreQ")
}

void volkFile(void) {
	DEBUG_WORD("volkFile")
}

void volkUnlock(void) {
	DEBUG_WORD("volkUnlock")
}

void volkLock(void) {
	DEBUG_WORD("volkLock")
}

void volkPause(void) {
	DEBUG_WORD("volkPause")
}

void volkList(void) {
	DEBUG_WORD("volkList")
}

void volkLSlashS(void) {
	DEBUG_WORD("volkLSlashS")
}

void volkCSlashL(void) {
	DEBUG_WORD("volkCSlashL")
}

void volkDotS(void) {
	DEBUG_WORD("volkDotS")
}

void volkUDot(void) {
	DEBUG_WORD("volkUDot")
}

void volkDot(void) {
	DEBUG_WORD("volkDot")
}

void volkDColon(void) {
	DEBUG_WORD("volkDColon")
}

void volkUDotR(void) {
	DEBUG_WORD("volkUDotR")
}

void volkDotR(void) {
	DEBUG_WORD("volkDotR")
}

void volkDDotR(void) {
	DEBUG_WORD("volkDDotR")
}

void volkNumS(void) {
	DEBUG_WORD("volkNumS")
}

void volkNum(void) {
	DEBUG_WORD("volkNum")
}

void volkSign(void) {
	DEBUG_WORD("volkSign")
}

void volkNumGreater(void) {
	DEBUG_WORD("volkNumGreater")
}

void volkLessNum(void) {
	DEBUG_WORD("volkLessNum")
}

void volkHold(void) {
	DEBUG_WORD("volkHold")
}

void volkSpaces(void) {
	DEBUG_WORD("volkSpaces")
}

void volkSpace(void) {
	DEBUG_WORD("volkSpace")
}

void volkTrailing(void) {
	DEBUG_WORD("volkTrailing")
}

void volkBl(void) {
	DEBUG_WORD("volkBl")
}

void volkErrorQuote(void) {
	DEBUG_WORD("volkErrorQuote")
}

void volkAbortQuote(void) {
	DEBUG_WORD("volkAbortQuote")
}

void volkZAbortQuote(void) {
	DEBUG_WORD("volkZAbortQuote")
}

void volkZError(void) {
	DEBUG_WORD("volkZError")
}

void volkQuit(void) {
	DEBUG_WORD("volkQuit")
}

void volkTickQuit(void) {
	DEBUG_WORD("volkTickQuit")
}

void volkZQuit(void) {
	DEBUG_WORD("volkZQuit")
}

void volkDepth(void) {
	DEBUG_WORD("volkDepth")
}

void volkRDepth(void) {
	DEBUG_WORD("volkRDepth")
}

void volkTo(void) {
	DEBUG_WORD("volkTo")
}

void volkPlusThru(void) {
	DEBUG_WORD("volkPlusThru")
}

void volkThru(void) {
	DEBUG_WORD("volkThru")
}

void volkPlusLoad(void) {
	DEBUG_WORD("volkPlusLoad")
}

void volkLoad(void) {
	DEBUG_WORD("volkLoad")
}

void volkPush(void) {
	DEBUG_WORD("volkPush")
}

void volkDotStatus(void) {
	DEBUG_WORD("volkDotStatus")
}

void volkQStack(void) {
	DEBUG_WORD("volkQStack")
}

void volkIs(void) {
	DEBUG_WORD("volkIs")
}

void volkZIs(void) {
	DEBUG_WORD("volkZIs")
}

void volkDefer(void) {
	DEBUG_WORD("volkDefer")
}

void volkRightBracket(void) {
	DEBUG_WORD("volkRightBracket")
}

void volkLeftBracket(void) {
	DEBUG_WORD("volkLeftBracket")
}

void volkInterpret(void) {
	DEBUG_WORD("volkInterpret")
}

void volkNoDotExtensions(void) {
	DEBUG_WORD("volkNoDotExtensions")
}

void volkNotFound(void) {
	DEBUG_WORD("volkNotFound")
}

void volkXTick(void) {
	DEBUG_WORD("volkXTick")
}

void volkXCompile(void) {
	DEBUG_WORD("volkXCompile")
}

void volkFind(void) {
	DEBUG_WORD("volkFind")
}

void volkZFind(void) {
	DEBUG_WORD("volkZFind")
}

void volkWords(void) {
	DEBUG_WORD("volkWords")
}

void volkOrder(void) {
	DEBUG_WORD("volkOrder")
}

void volkDefinitions(void) {
	DEBUG_WORD("volkDefinitions")
}

void volkOnlyForth(void) {
	DEBUG_WORD("volkOnlyForth")
}

void volkOnly(void) {
	DEBUG_WORD("volkOnly")
}

void volkForth(void) {
	DEBUG_WORD("volkForth")
}

void volkVocabulary(void) {
	DEBUG_WORD("volkVocabulary")
}

void volkToss(void) {
	DEBUG_WORD("volkToss")
}

void volkAlso(void) {
	DEBUG_WORD("volkAlso")
}

void volkUAllot(void) {
	DEBUG_WORD("volkUAllot")
}

void volkVariable(void) {
	DEBUG_WORD("volkVariable")
}

void volkConstant(void) {
	DEBUG_WORD("volkConstant")
}

void volkSemicolon(void) {
	DEBUG_WORD("volkSemicolon")
}

void volkColon(void) {
	DEBUG_WORD("volkColon")
}

void volkCreateColon(void) {
	DEBUG_WORD("volkCreateColon")
}

void volkDotName(void) {
	DEBUG_WORD("volkDotName")
}

void volkToBody(void) {
	DEBUG_WORD("volkToBody")
}

void volkNameFrom(void) {
	DEBUG_WORD("volkNameFrom")
}

void volkToName(void) {
	DEBUG_WORD("volkToName")
}

void volkNFaq(void) {
	DEBUG_WORD("volkNFaq")
}

void volkCreate(void) {
	DEBUG_WORD("volkCreate")
}

void volkWarning(void) {
	DEBUG_WORD("volkWarning")
}

void volkVerticalBar(void) {
	DEBUG_WORD("volkVerticalBar")
}

void volkQHead(void) {
	DEBUG_WORD("volkQHead")
}

void volkDoes(void) {
	DEBUG_WORD("volkDoes")
}

void volkHeapQ(void) {
	DEBUG_WORD("volkHeapQ")
}

void volkHeap(void) {
	DEBUG_WORD("volkHeap")
}

void volkHallot(void) {
	DEBUG_WORD("volkHallot")
}

void volkClearStack(void) {
	DEBUG_WORD("volkClearStack")
}

void volkRestrict(void) {
	DEBUG_WORD("volkRestrict")
}

void volkImmediate(void) {
	DEBUG_WORD("volkImmediate")
}

void volkRecursive(void) {
	DEBUG_WORD("volkRecursive")
}

void volkReveal(void) {
	DEBUG_WORD("volkReveal")
}

void volkHide(void) {
	DEBUG_WORD("volkHide")
}

void volkLast(void) {
	DEBUG_WORD("volkLast")
}

void volkNumber(void) {
	DEBUG_WORD("volkNumber")
}

void volkNumberQ(void) {
	DEBUG_WORD("volkNumberQ")
}

void volkConvert(void) {
	DEBUG_WORD("volkConvert")
}

void volkAccumulate(void) {
	DEBUG_WORD("volkAccumulate")
}

void volkDecimal(void) {
	DEBUG_WORD("volkDecimal")
}

void volkBackslashNeeds(void) {
	DEBUG_WORD("volkBackslashNeeds")
}

void volkBackslashBackslash(void) {
	DEBUG_WORD("volkBackslashBackslash")
}

void volkBackslash(void) {
	DEBUG_WORD("volkBackslash")
}

void volkDotParen(void) {
	DEBUG_WORD("volkDotParen")
}

void volkParen(void) {
	DEBUG_WORD("volkParen")
}

void volkDotQuote(void) {
	DEBUG_WORD("volkDotQuote")
}

void volkParenDotQuote(void) {
	DEBUG_WORD("volkParenDotQuote")
}

void volkQuote(void) {
	DEBUG_WORD("volkQuote")
}

void volkParenQuote(void) {
	DEBUG_WORD("volkParenQuote")
}

void volkQuoteLit(void) {
	DEBUG_WORD("volkQuoteLit")
}

void volkAscii(void) {
	DEBUG_WORD("volkAscii")
}

void volkState(void) {
	DEBUG_WORD("volkState")
}

void volkName(void) {
	DEBUG_WORD("volkName")
}

void volkParse(void) {
	DEBUG_WORD("volkParse")
}

void volkWord(void) {
	DEBUG_WORD("volkWord")
}

void volkSource(void) {
	DEBUG_WORD("volkSource")
}

void volkCapital(void) {
	DEBUG_WORD("volkCapital")
}

void volkSlashString(void) {
	DEBUG_WORD("volkSlashString")
}

void volkSkip(void) {
	DEBUG_WORD("volkSkip")
}

void volkScan(void) {
	DEBUG_WORD("volkScan")
}

void volkQuery(void) {
	DEBUG_WORD("volkQuery")
}

void volkTib(void) {
	DEBUG_WORD("volkTib")
}

void volkSpan(void) {
	DEBUG_WORD("volkSpan")
}

void volkBlk(void) {
	DEBUG_WORD("volkBlk")
}

void volkToIn(void) {
	DEBUG_WORD("volkToIn")
}

void volkToTib(void) {
	DEBUG_WORD("volkToTib")
}

void volkNumTib(void) {
	DEBUG_WORD("volkNumTib")
}

void volkCompile(void) {
	DEBUG_WORD("volkCompile")
}

void volkCComma(void) {
	DEBUG_WORD("volkCComma")
}

void volkComma(void) {
	DEBUG_WORD("volkComma")
}

void volkAllot(void) {
	DEBUG_WORD("volkAllot")
}

void volkPad(void) {
	DEBUG_WORD("volkPad")
}

void volkHere(void) {
	DEBUG_WORD("volkHere")
}

void volkFill(void) {
	DEBUG_WORD("volkFill")
}

void volkErase(void) {
	DEBUG_WORD("volkErase")
}

void volkCount(void) {
	DEBUG_WORD("volkCount")
}

void volkPlace(void) {
	DEBUG_WORD("volkPlace")
}

void volkMove(void) {
	DEBUG_WORD("volkMove")
}

void volkCMoveTo(void) {
	DEBUG_WORD("volkCMoveTo")
}

void volkCMove(void) {
	DEBUG_WORD("volkCMove")
}

void volkUdSlashMod(void) {
	DEBUG_WORD("volkUdSlashMod")
}

void volkUSlashMod(void) {
	DEBUG_WORD("volkUSlashMod")
}

void volkStarSlash(void) {
	DEBUG_WORD("volkStarSlash")
}

void volkStarSlashMod(void) {
	DEBUG_WORD("volkStarSlashMod")
}

void volkMod(void) {
	DEBUG_WORD("volkMod")
}

void volkSlash(void) {
	DEBUG_WORD("volkSlash")
}

void volkSlashMod(void) {
	DEBUG_WORD("volkSlashMod")
}

void volkTwoSlash(void) {
	DEBUG_WORD("volkTwoSlash")
}

void volkMSlashMod(void) {
	DEBUG_WORD("volkMSlashMod")
}

void volkUmSlashMod(void) {
	DEBUG_WORD("volkUmSlashMod")
}

void volkTwoStar(void) {
	DEBUG_WORD("volkTwoStar")
}

void volkStar(void) {
	DEBUG_WORD("volkStar")
}

void volkMStar(void) {
	DEBUG_WORD("volkMStar")
}

void volkUmStar(void) {
	DEBUG_WORD("volkUmStar")
}

void volkLeave(void) {
	DEBUG_WORD("volkLeave")
}

void volkLoop(void) {
	DEBUG_WORD("volkLoop")
}

void volkQDo(void) {
	DEBUG_WORD("volkQDo")
}

void volkDo(void) {
	DEBUG_WORD("volkDo")
}

void volkUntil(void) {
	DEBUG_WORD("volkUntil")
}

void volkRepeat(void) {
	DEBUG_WORD("volkRepeat")
}

void volkWhile(void) {
	DEBUG_WORD("volkWhile")
}

void volkBegin(void) {
	DEBUG_WORD("volkBegin")
}

void volkElse(void) {
	DEBUG_WORD("volkElse")
}

void volkThen(void) {
	DEBUG_WORD("volkThen")
}

void volkIf(void) {
	DEBUG_WORD("volkIf")
}

void volkQPairs(void) {
	DEBUG_WORD("volkQPairs")
}

void volkFromResolve(void) {
	DEBUG_WORD("volkFromResolve")
}

void volkFromMark(void) {
	DEBUG_WORD("volkFromMark")
}

void volkToResolve(void) {
	DEBUG_WORD("volkToResolve")
}

void volkToMark(void) {
	DEBUG_WORD("volkToMark")
}

void volkQBranch(void) {
	DEBUG_WORD("volkQBranch")
}

void volkBranch(void) {
	DEBUG_WORD("volkBranch")
}

void volkJ(void) {
	DEBUG_WORD("volkJ")
}

void volkI(void) {
	DEBUG_WORD("volkI")
}

void volkZPlusLoop(void) {
	DEBUG_WORD("volkZPlusLoop")
}

void volkZLoop(void) {
	DEBUG_WORD("volkZLoop")
}

void volkEndLoop(void) {
	DEBUG_WORD("volkEndLoop")
}

void volkBounds(void) {
	DEBUG_WORD("volkBounds")
}

void volkZQDo(void) {
	DEBUG_WORD("volkZQDo")
}

void volkZDo(void) {
	DEBUG_WORD("volkZDo")
}

void volkAbs(void) {
	DEBUG_WORD("volkAbs")
}

void volkDAbs(void) {
	DEBUG_WORD("volkDAbs")
}

void volkUGreater(void) {
	DEBUG_WORD("volkUGreater")
}

void volkZeroUnequal(void) {
	DEBUG_WORD("volkZeroUnequal")
}

void volkZeroGreater(void) {
	DEBUG_WORD("volkZeroGreater")
}

void volkGreater(void) {
	DEBUG_WORD("volkGreater")
}

void volkULess(void) {
	DEBUG_WORD("volkULess")
}

void volkLess(void) {
	DEBUG_WORD("volkLess")
}

void volkZeroEqual(void) {
	DEBUG_WORD("volkZeroEqual")
}

void volkLiteral(void) {
	DEBUG_WORD("volkLiteral")
}

void volkLit(void) {
	DEBUG_WORD("volkLit")
}

void volkOff(void) {
	DEBUG_WORD("volkOff")
}

void volkFour(void) {
	DEBUG_WORD("volkFour")
}

void volkThree(void) {
	DEBUG_WORD("volkThree")
}

void volkTwo(void) {
	DEBUG_WORD("volkTwo")
}

void volkOne(void) {
	DEBUG_WORD("volkOne")
}

void volkZero(void) {
	DEBUG_WORD("volkZero")
}

void volkMinusOne(void) {
	DEBUG_WORD("volkMinusOne")
}

void volkFalse(void) {
	DEBUG_WORD("volkFalse")
}

void volkTrue(void) {
	DEBUG_WORD("volkTrue")
}

void volkTwoMinus(void) {
	DEBUG_WORD("volkTwoMinus")
}

void volkOneMinus(void) {
	DEBUG_WORD("volkOneMinus")
}

void volkThreePlus(void) {
	DEBUG_WORD("volkThreePlus")
}

void volkTwoPlus(void) {
	DEBUG_WORD("volkTwoPlus")
}

void volkOnePlus(void) {
	DEBUG_WORD("volkOnePlus")
}

void volkDPlus(void) {
	DEBUG_WORD("volkDPlus")
}

void volkDNegate(void) {
	DEBUG_WORD("volkDNegate")
}

void volkNegate(void) {
	DEBUG_WORD("volkNegate")
}

void volkNot(void) {
	DEBUG_WORD("volkNot")
}

void volkMinus(void) {
	DEBUG_WORD("volkMinus")
}

void volkXOR(void) {
	DEBUG_WORD("volkXOR")
}

void volkAnd(void) {
	DEBUG_WORD("volkAnd")
}

void volkOr(void) {
	DEBUG_WORD("volkOr")
}

void volkPlus(void) {
	DEBUG_WORD("volkPlus")
}

void volkTwoDup(void) {
	DEBUG_WORD("volkTwoDup")
}

void volkTwoSwap(void) {
	DEBUG_WORD("volkTwoSwap")
}

void volkRoll(void) {
	DEBUG_WORD("volkRoll")
}

void volkPick(void) {
	DEBUG_WORD("volkPick")
}

void volkUnder(void) {
	DEBUG_WORD("volkUnder")
}

void volkNip(void) {
	DEBUG_WORD("volkNip")
}

void volkMinusRot(void) {
	DEBUG_WORD("volkMinusRot")
}

void volkRot(void) {
	DEBUG_WORD("volkRot")
}

void volkOver(void) {
	DEBUG_WORD("volkOver")
}

void volkQDup(void) {
	DEBUG_WORD("volkQDup")
}

void volkDup(void) {
	DEBUG_WORD("volkDup")
}

void volkSwap(void) {
	DEBUG_WORD("volkSwap")
}

void volkDrop(void) {
	DEBUG_WORD("volkDrop")
}

void volkPlusStore(void) {
	DEBUG_WORD("volkPlusStore")
}

void volkStore(void) {
	DEBUG_WORD("volkStore")
}

void volkFetch(void) {
	DEBUG_WORD("volkFetch")
}

void volkCToggle(void) {
	DEBUG_WORD("volkCToggle")
}

void volkCStore(void) {
	DEBUG_WORD("volkCStore")
}

void volkCFetch(void) {
	DEBUG_WORD("volkCFetch")
}

void volkPerform(void) {
	DEBUG_WORD("volkPerform")
}

void volkExecute(void) {
	DEBUG_WORD("volkExecute")
}

void volkQExit(void) {
	DEBUG_WORD("volkQExit")
}

void volkUnnest(void) {
	DEBUG_WORD("volkUnnest")
}

void volkExit(void) {
	DEBUG_WORD("volkExit")
}

void volkRDrop(void) {
	DEBUG_WORD("volkRDrop")
}

void volkRFetch(void) {
	DEBUG_WORD("volkRFetch")
}

void volkRFrom(void) {
	DEBUG_WORD("volkRFrom")
}

void volkToR(void) {
	DEBUG_WORD("volkToR")
}

void volkRPStore(void) {
	DEBUG_WORD("volkRPStore")
}

void volkRPFetch(void) {
	DEBUG_WORD("volkRPFetch")
}

void volkUPStore(void) {
	DEBUG_WORD("volkUPStore")
}

void volkUPFetch(void) {
	DEBUG_WORD("volkUPFetch")
}

void volkSPStore(void) {
	DEBUG_WORD("volkSPStore")
}

void volkSPFetch(void) {
	DEBUG_WORD("volkSPFetch")
}

void volkUdp(void) {
	DEBUG_WORD("volkUdp")
}

void volkVocLink(void) {
	DEBUG_WORD("volkVocLink")
}

void volkErrorhandler(void) {
	DEBUG_WORD("volkErrorhandler")
}

void volkInput(void) {
	DEBUG_WORD("volkInput")
}

void volkOutput(void) {
	DEBUG_WORD("volkOutput")
}

void volkBase(void) {
	DEBUG_WORD("volkBase")
}

void volkOffset(void) {
	DEBUG_WORD("volkOffset")
}

void volkDP(void) {
	DEBUG_WORD("volkDP")
}

void volkR0(void) {
	DEBUG_WORD("volkR0")
}

void volkS0(void) {
	DEBUG_WORD("volkS0")
}

void volkOrigin(void) {
	DEBUG_WORD("volkOrigin")
}

void volkNoop(void) {
	DEBUG_WORD("volkNoop")
}

void volkRecover(void) {
	DEBUG_WORD("volkRecover")
}

void volkEndTrace(void) {
	DEBUG_WORD("volkEndTrace")
}

void volkZeroLess(void) {
	DEBUG_WORD("volkZeroLess")
}

void volkEqual(void) {
	DEBUG_WORD("volkEqual")
}

void volkExtend(void) {
	DEBUG_WORD("volkExtend")
}

void volkUMin(void) {
	DEBUG_WORD("volkUMin")
}

void volkUMax(void) {
	DEBUG_WORD("volkUMax")
}

void volkMax(void) {
	DEBUG_WORD("volkMax")
}

void volkMin(void) {
	DEBUG_WORD("volkMin")
}

void volkDLess(void) {
	DEBUG_WORD("volkDLess")
}

void volkDEqual(void) {
	DEBUG_WORD("volkDEqual")
}

void volkCaseQ(void) {
	DEBUG_WORD("volkDEqual")
}

void volkDZeroEqual(void) {
	DEBUG_WORD("volkDZeroEqual")
}

void volkUWithin(void) {
	DEBUG_WORD("volkUWithin")
}

void volkDigitQ(void) {
	DEBUG_WORD("volkDigitQ")
}

void volkCold(void) {
	DEBUG_WORD("volkCold")
}

void volkCommaQuote(void) {
	DEBUG_WORD("volkCommaQuote")
}

void volkNullStringQ(void) {
	DEBUG_WORD("volkNullStringQ")
}

void volkDpl(void) {
	DEBUG_WORD("volkDpl")
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_ST_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_CPM_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_PC_FORTH)
void volkListing(void) {
	DEBUG_WORD("volkListing")
}

void volkDocument(void) {
	DEBUG_WORD("volkDocument")
}

void volkPThru(void) {
	DEBUG_WORD("volkPThru")
}

void volkPrint(void) {
	DEBUG_WORD("volkPrint")
}

void volkPrinter(void) {
	DEBUG_WORD("volkPrinter")
}

void volkDump(void) {
	DEBUG_WORD("volkDump")
}

void volkTools(void) {
	DEBUG_WORD("volkTools")
}

void volkToolsDotFb(void) {
	DEBUG_WORD("volkToolsDotFb")
}

void volkBye(void) {
	DEBUG_WORD("volkBye")
}

void volkView(void) {
	DEBUG_WORD("volkView")
}

void volkL(void) {
	DEBUG_WORD("volkL")
}

void volkV(void) {
	DEBUG_WORD("volkV")
}

void volkDelete(void) {
	DEBUG_WORD("volkDelete")
}

void volkCaps(void) {
	DEBUG_WORD("volkCaps")
}

void volkCColon(void) {
	DEBUG_WORD("volkCColon")
}

void volkBColon(void) {
	DEBUG_WORD("volkBColon")
}

void volkAColon(void) {
	DEBUG_WORD("volkAColon")
}

void volkDir(void) {
	DEBUG_WORD("volkDir")
}

void volkMore(void) {
	DEBUG_WORD("volkDir")
}

void volkFiles(void) {
	DEBUG_WORD("volkFiles")
}

void volkInclude(void) {
	DEBUG_WORD("volkInclude")
}

void volkLoadFrom(void) {
	DEBUG_WORD("volkLoadFrom")
}

void volkFrom(void) {
	DEBUG_WORD("volkLoadFrom")
}

void volkMakefile(void) {
	DEBUG_WORD("volkMakefile")
}

void volkUse(void) {
	DEBUG_WORD("volkUse")
}

void volkMake(void) {
	DEBUG_WORD("volkMake")
}

void volkAssign(void) {
	DEBUG_WORD("volkAssign")
}

void volkClose(void) {
	DEBUG_WORD("volkClose")
}

void volkOpen(void) {
	DEBUG_WORD("volkOpen")
}

void volkFileQ(void) {
	DEBUG_WORD("volkFileQ")
}

void volkCapacity(void) {
	DEBUG_WORD("volkCapacity")
}

void volkNumEsc(void) {
	DEBUG_WORD("volkNumEsc")
}

void volkNumLf(void) {
	DEBUG_WORD("volkNumLf")
}

void volkQCr(void) {
	DEBUG_WORD("volkQCr")
}

void volkStopQ(void) {
	DEBUG_WORD("volkStopQ")
}

void volkSave(void) {
	DEBUG_WORD("volkSave")
}

void volkEmpty(void) {
	DEBUG_WORD("volkEmpty")
}

void volkForget(void) {
	DEBUG_WORD("volkForget")
}

void volkIsFileFetch(void) {
	DEBUG_WORD("volkIsFileFetch")
}

void volkDDot(void) {
	DEBUG_WORD("volkDDot")
}

void volkRNum(void) {
	DEBUG_WORD("volkRNum")
}

void volkScr(void) {
	DEBUG_WORD("volkScr")
}

void volkAbort(void) {
	DEBUG_WORD("volkAbort")
}

void volkTickAbort(void) {
	DEBUG_WORD("volkTickAbort")
}

void volkStandardISlashO(void) {
	DEBUG_WORD("volkStandardISlashO")
}

void volkZLoad(void) {
	DEBUG_WORD("volkZLoad")
}

void volkContext(void) {
	DEBUG_WORD("volkContext")
}

void volkCurrent(void) {
	DEBUG_WORD("volkCurrent")
}

void volkVp(void) {
	DEBUG_WORD("volkVp")
}

void volkAlias(void) {
	DEBUG_WORD("volkAlias")
}

void volkUser(void) {
	DEBUG_WORD("volkUser")
}

void volkMakeView(void) {
	DEBUG_WORD("volkMakeView")
}

void volkHAlign(void) {
	DEBUG_WORD("volkHAlign")
}

void volkAlign(void) {
	DEBUG_WORD("volkAlign")
}

void volkLoadFile(void) {
	DEBUG_WORD("volkLoadFile")
}

void volkEven(void) {
	DEBUG_WORD("volkEven")
}

void volkOn(void) {
	DEBUG_WORD("volkOn")
}

void volkFourMinus(void) {
	DEBUG_WORD("volkFourMinus")
}

void volkFourPlus(void) {
	DEBUG_WORD("volkFourPlus")
}

void volkTwoStore(void) {
	DEBUG_WORD("volkTwoStore")
}

void volkTwoFetch(void) {
	DEBUG_WORD("volkTwoFetch")
}

void volkMinusRoll(void) {
	DEBUG_WORD("volkMinusRoll")
}

void volkSaveSystem(void) {
	DEBUG_WORD("volkDebug")
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_C64_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_CPM_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_PC_FORTH)
void volkAssembler(void) {
	DEBUG_WORD("volkAssembler")
}

void volkBSlashBuf(void) {
	DEBUG_WORD("volkBSlashBuf")
}

void volkPrev(void) {
	DEBUG_WORD("volkPrev")
}

void volkTick(void) {
	DEBUG_WORD("volkTick")
}

void volkHex(void) {
	DEBUG_WORD("volkHex")
}

void volkCLit(void) {
	DEBUG_WORD("volkCLit")
}

void volkTwoDrop(void) {
	DEBUG_WORD("volkTwoDrop")
}

void volkRSlashW(void) {
	DEBUG_WORD("volkRSlashW")
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_C64_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_ST_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_PC_FORTH)
void volkToDrive(void) {
	DEBUG_WORD("volkToDrive")
}

void volkLDump(void) {
	DEBUG_WORD("volkLDump")
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_C64_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_ST_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_CPM_FORTH)
void volkDrvInit(void) {
	DEBUG_WORD("volkDrvInit")
}

void volkConStore(void) {
	DEBUG_WORD("volkConStore")
}

void volkGetKey(void) {
	DEBUG_WORD("volkGetKey")
}

void volkFreeBuffer(void) {
	DEBUG_WORD("volkFreeBuffer")
}

void volkAllotBuffer(void) {
	DEBUG_WORD("volkAllotBuffer")
}

void volkFirst(void) {
	DEBUG_WORD("volkFirst")
}

void volkLimit(void) {
	DEBUG_WORD("volkLimit")
}

void volkBuffers(void) {
	DEBUG_WORD("volkBuffers")
}

void volkPlusLoop(void) {
	DEBUG_WORD("volkPlusLoop")
}

void volkFlush(void) {
	DEBUG_WORD("volkFlush")
}

void volkEmptyBuffers(void) {
	DEBUG_WORD("volkEmptyBuffers")
}

void volkSaveBuffers(void) {
	DEBUG_WORD("volkSaveBuffers")
}

#endif


#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_C64_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_ST_FORTH)
void volkIndex(void) {
	DEBUG_WORD("volkIndex")
}

void volkDrvQ(void) {
	DEBUG_WORD("volkDrvQ")
}

void volkToInterpret(void) {
	DEBUG_WORD("volkToInterpret")
}

void volkCapitalize(void) {
	DEBUG_WORD("volkCapitalize")
}

void volkBlkSlashDrv(void) {
	DEBUG_WORD("volkBlkSlashDrv")
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_ST_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_CPM_FORTH)
void volkPrinterDotScr(void) {
	DEBUG_WORD("volkPrinterDotScr")
}

void volkRelocateDotScr(void) {
	DEBUG_WORD("volkRelocateDotScr")
}

void volkTraceTick(void) {
	DEBUG_WORD("volkTraceTick")
}

void volkDebug(void) {
	DEBUG_WORD("volkDebug")
}

void volkDotBlk(void) {
	DEBUG_WORD("volkDotBlk")
}

void volkStartupDotScr(void) {
	DEBUG_WORD("volkStartupDotScr")
}

void volkFileIntDotScr(void) {
	DEBUG_WORD("volkFileIntDotScr")
}

void volkFilesQuote(void) {
	DEBUG_WORD("volkFilesQuote")
}

void volkEof(void) {
	DEBUG_WORD("volkEof")
}

void volkCurRite(void) {
	DEBUG_WORD("volkCurRite")
}

void volkCurLeft(void) {
	DEBUG_WORD("volkCurLeft")
}

void volkZWord(void) {
	DEBUG_WORD("volkZWord")
}

void volkUP(void) {
	DEBUG_WORD("volkUP")
}

void volkToolsDotScr(void) {
	DEBUG_WORD("volkToolsDotScr")
}

void volkEditorDotScr(void) {
	DEBUG_WORD("volkEditorDotScr")
}

void volkZView(void) {
	DEBUG_WORD("volkZView")
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_CPM_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_PC_FORTH)
void volkRendezvous(void) {
	DEBUG_WORD("volkRendezvous")
}

void volkTask(void) {
	DEBUG_WORD("volkTask")
}

void volkWake(void) {
	DEBUG_WORD("volkWake")
}

void volkSleep(void) {
	DEBUG_WORD("volkSleep")
}

void volkActivate(void) {
	DEBUG_WORD("volkActivate")
}

void volkPass(void) {
	DEBUG_WORD("volkPass")
}

void volkMultiTask(void) {
	DEBUG_WORD("volkMultiTask")
}

void volkSingleTask(void) {
	DEBUG_WORD("volkSingleTask")
}

void volkStop(void) {
	DEBUG_WORD("volkStop")
}

void volkFix(void) {
	DEBUG_WORD("volkFix")
}

void volkNumDel(void) {
	DEBUG_WORD("volkNumDel")
}

void volkCtrl(void) {
	DEBUG_WORD("volkCtrl")
}

void volkUpdatedQ(void) {
	DEBUG_WORD("volkUpdatedQ")
}

void volkEditor(void) {
	DEBUG_WORD("volkEditor")
}

void volkBlank(void) {
	DEBUG_WORD("volkBlank")
}

void volkZKey(void) {
	DEBUG_WORD("volkZKey")
}

void volkZExpect(void) {
	DEBUG_WORD("volkZExpect")
}

void volkZDecode(void) {
	DEBUG_WORD("volkZDecode")
}

void volkZDel(void) {
	DEBUG_WORD("volkZDel")
}

void volkZCr(void) {
	DEBUG_WORD("volkZCr")
}

void volkZEmit(void) {
	DEBUG_WORD("volkZEmit")
}

void volkZType(void) {
	DEBUG_WORD("volkZType")
}

void volkZPage(void) {
	DEBUG_WORD("volkZPage")
}

void volkZAtQ(void) {
	DEBUG_WORD("volkZAtQ")
}

void volkZAt(void) {
	DEBUG_WORD("volkZAt")
}

void volkCSlashCol(void) {
	DEBUG_WORD("volkCSlashCol")
}

void volkCSlashRow(void) {
	DEBUG_WORD("volkCSlashRow")
}

void volkLabel(void) {
	DEBUG_WORD("volkLabel")
}

void volkToLabel(void) {
	DEBUG_WORD("volkToLabel")
}

void volkSemicolonCode(void) {
	DEBUG_WORD("volkSemicolonCode")
}

void volkCode(void) {
	DEBUG_WORD("volkCode")
}

void volkSaveFile(void) {
	DEBUG_WORD("volkSaveFile")
}

void volkDirect(void) {
	DEBUG_WORD("volkDirect")
}

void volkZRSlashW(void) {
	DEBUG_WORD("volkZRSlashW")
}

void volkNumBel(void) {
	DEBUG_WORD("volkNumBel")
}

void volkNumTab(void) {
	DEBUG_WORD("volkNumTab")
}

void volkDos(void) {
	DEBUG_WORD("volkDos")
}

void volkEmptyBuf(void) {
	DEBUG_WORD("volkEmptyBuf")
}

void volkZCoreQ(void) {
	DEBUG_WORD("volkZCoreQ")
}

void volkFromFile(void) {
	DEBUG_WORD("volkFromFile")
}

void volkIsFile(void) {
	DEBUG_WORD("volkIsFile")
}

void volkPrompt(void) {
	DEBUG_WORD("volkPrompt")
}

void volkZPrompt(void) {
	DEBUG_WORD("volkZPrompt")
}

void volkParser(void) {
	DEBUG_WORD("volkParser")
}

void volkRoot(void) {
	DEBUG_WORD("volkRoot")
}

void volkBodyFrom(void) {
	DEBUG_WORD("volkBodyFrom")
}

void volkZNameFrom(void) {
	DEBUG_WORD("volkZNameFrom")
}

void volkZSemicolonCode(void) {
	DEBUG_WORD("volkZSemicolonCode")
}

void volkUpper(void) {
	DEBUG_WORD("volkUpper")
}

void volkFlip(void) {
	DEBUG_WORD("volkFlip")
}

void volkZeroEqualExit(void) {
	DEBUG_WORD("volkZeroEqualExit")
}

void volkRemove(void) {
	DEBUG_WORD("volkRemove")
}

void volkZKeyQ(void) {
	DEBUG_WORD("volkZKeyQ")
}

void volkTipp(void) {
	DEBUG_WORD("volkTipp")
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_C64_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_CPM_FORTH)
void volkPrintableQ(void) {
	DEBUG_WORD("volkPrintableQ")
}

void volkDiskErr(void) {
	DEBUG_WORD("volkDiskErr")
}

void volkZDiskErr(void) {
	DEBUG_WORD("volkZDiskErr")
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_C64_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_PC_FORTH)
void volkDrive(void) {
	DEBUG_WORD("volkDrive")
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_ST_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_PC_FORTH)
void volkBell(void) {
	DEBUG_WORD("volkBell")
}

void volkAbortZ(void) {
	DEBUG_WORD("volkAbortZ")
}

void volkPath(void) {
	DEBUG_WORD("volkPath")
}

void volkArguments(void) {
	DEBUG_WORD("volkArguments")
}

void volkTwoOver(void) {
	DEBUG_WORD("volkTwoOver")
}

void volkLFetch(void) {
	DEBUG_WORD("volkLFetch")
}

void volkLStore(void) {
	DEBUG_WORD("volkLStore")
}

void volkLCStore(void) {
	DEBUG_WORD("volkLCStore")
}

void volkNextLink(void) {
	DEBUG_WORD("volkNextLink")
}

#endif


#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
   (H2O_FORTH_PRIMITIVES == VOLK_C64_FORTH)
void volkZ64(void) {
	DEBUG_WORD("volkZ64")
}

void volkCZ(void) {
	DEBUG_WORD("volkCZ")
}

void volkZ16(void) {
	DEBUG_WORD("volkZ16")
}

void volkC64Init(void) {
	DEBUG_WORD("volkC64Init")
}

void volkInitSystem(void) {
	DEBUG_WORD("volkInitSystem")
}

void volkInkPot(void) {
	DEBUG_WORD("volkInkPot")
}

void volkFIndex(void) {
	DEBUG_WORD("volkFIndex")
}

void volkCBM1541RSlashW(void) {
	DEBUG_WORD("volkCBM1541RSlashW")
}

void volkDiskClose(void) {
	DEBUG_WORD("volkDiskClose")
}

void volkDiskOpen(void) {
	DEBUG_WORD("volkDiskOpen")
}

void volkWriteSector(void) {
	DEBUG_WORD("volkWriteSector")
}

void volkReadSector(void) {
	DEBUG_WORD("volkReadSector")
}

void volkDErrorQ(void) {
	DEBUG_WORD("volkDErrorQ")
}

void volkBusInput(void) {
	DEBUG_WORD("volkBusInput")
}

void volkBusFetch(void) {
	DEBUG_WORD("volkBusFetch")
}

void volkBusType(void) {
	DEBUG_WORD("volkBusType")
}

void volkBusStore(void) {
	DEBUG_WORD("volkBusStore")
}

void volkBusIn(void) {
	DEBUG_WORD("volkBusIn")
}

void volkZBusIn(void) {
	DEBUG_WORD("volkZBusIn")
}

void volkBusClose(void) {
	DEBUG_WORD("volkBusClose")
}

void volkBusOpen(void) {
	DEBUG_WORD("volkBusOpen")
}

void volkBusOff(void) {
	DEBUG_WORD("volkBusOff")
}

void volkISlashO(void) {
	DEBUG_WORD("volkISlashO")
}

void volkZDrv(void) {
	DEBUG_WORD("volkZDrv")
}

void volkC64Type(void) {
	DEBUG_WORD("volkC64Type")
}

void volkC64AtQ(void) {
	DEBUG_WORD("volkC64AtQ")
}

void volkC64At(void) {
	DEBUG_WORD("volkC64At")
}

void volkC64Page(void) {
	DEBUG_WORD("volkC64Page")
}

void volkC64Del(void) {
	DEBUG_WORD("volkC64Del")
}

void volkC64Cr(void) {
	DEBUG_WORD("volkC64Cr")
}

void volkC64Emit(void) {
	DEBUG_WORD("volkC64Emit")
}

void volkC64Expect(void) {
	DEBUG_WORD("volkC64Expect")
}

void volkC64Decode(void) {
	DEBUG_WORD("volkC64Decode")
}

void volkC64Key(void) {
	DEBUG_WORD("volkC64Key")
}

void volkC64KeyQ(void) {
	DEBUG_WORD("volkC64KeyQ")
}

void volkBlkMove(void) {
	DEBUG_WORD("volkBlkMove")
}

void volkZCopy(void) {
	DEBUG_WORD("volkZCopy")
}

void volkTickNumberQ(void) {
	DEBUG_WORD("volkTickNumberQ")
}

void volkPrevious(void) {
	DEBUG_WORD("volkPrevious")
}

void volkChar(void) {
	DEBUG_WORD("volkChar")
}

void volkEndQ(void) {
	DEBUG_WORD("volkEndQ")
}

void volkBasOn(void) {
	DEBUG_WORD("volkBasOn")
}

void volkLogo(void) {
	DEBUG_WORD("volkLogo")
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_ST_FORTH)
void volkPrintALL(void) {
	DEBUG_WORD("volkPrintALL")
}

void volkRelocate(void) {
	DEBUG_WORD("volkRelocate")
}

void volkIndexDotScr(void) {
	DEBUG_WORD("volkIndexDotScr")
}

void volkTickEditFile(void) {
	DEBUG_WORD("volkTickEditFile")
}

void volkTickRNum(void) {
	DEBUG_WORD("volkTickRNum")
}

void volkTickScr(void) {
	DEBUG_WORD("volkTickScr")
}

void volkEdWindowDotScr(void) {
	DEBUG_WORD("volkEdWindowDotScr")
}

void volkGemBackslashVdiDotScr(void) {
	DEBUG_WORD("volkGemBackslashVdiDotScr")
}

void volkGemBackslashSuperGemDotScr(void) {
	DEBUG_WORD("volkGemBackslashSuperGemDotScr")
}

void volkEdiConDotScr(void) {
	DEBUG_WORD("volkEdiConDotScr")
}

void volkGem(void) {
	DEBUG_WORD("volkGem")
}

void volkGemBackslashBsicDotScr(void) {
	DEBUG_WORD("volkGemBackslashBsicDotScr")
}

void volkGemBackslashAesDotScr(void) {
	DEBUG_WORD("volkGemBackslashAesDotScr")
}

void volkMFree(void) {
	DEBUG_WORD("volkMFree")
}

void volkMalloc(void) {
	DEBUG_WORD("volkMalloc")
}

void volkAllocateDotScr(void) {
	DEBUG_WORD("volkAllocateDotScr")
}

void volkZeroQuote(void) {
	DEBUG_WORD("volkZeroQuote")
}

void volkCommaZeroQuote(void) {
	DEBUG_WORD("volkCommaZeroQuote")
}

void volkZeroGreaterCQuote(void) {
	DEBUG_WORD("volkZeroGreaterCQuote")
}

void volkCGreaterZeroQuote(void) {
	DEBUG_WORD("volkCGreaterZeroQuote")
}

void volkDollarAdd(void) {
	DEBUG_WORD("volkDollarAdd")
}

void volkDollarSum(void) {
	DEBUG_WORD("volkDollarSum")
}

void volkSearch(void) {
	DEBUG_WORD("volkSearch")
}

void volkCompareText(void) {
	DEBUG_WORD("volkCompareText")
}

void volkringsDotScr(void) {
	DEBUG_WORD("volkringsDotScr")
}

void volkAssembleDotScr(void) {
	DEBUG_WORD("volkAssembleDotScr")
}

void volkBlak(void) {
	DEBUG_WORD("volkBlak")
}

void volkCPush(void) {
	DEBUG_WORD("volkCPush")
}

void volkAbsAddr(void) {
	DEBUG_WORD("volkAbsAddr")
}

void volkDiversesDotScr(void) {
	DEBUG_WORD("volkDiversesDotScr")
}

void volkForth83DotScr(void) {
	DEBUG_WORD("volkForth83DotScr")
}

void volkRemoveQ(void) {
	DEBUG_WORD("volkRemoveQ")
}

void volkMakeDir(void) {
	/* = volkMd */
	DEBUG_WORD("volkMakeDir")
}

void volkZMore(void) {
	DEBUG_WORD("volkZMore")
}

void volkDirekt(void) {
	DEBUG_WORD("volkDirekt")
}

void volkSTRSlashW(void) {
	DEBUG_WORD("volkSTRSlashW")
}

void volkRWAbs(void) {
	DEBUG_WORD("volkRWAbs")
}

void volkDrv1(void) {
	DEBUG_WORD("volkDrv1")
}

void volkDrv0(void) {
	DEBUG_WORD("volkDrv0")
}

void volkZBlkSlashDrv(void) {
	DEBUG_WORD("volkZBlkSlashDrv")
}

void volkStType(void) {
	DEBUG_WORD("volkStType")
}

void volkStAtQ(void) {
	DEBUG_WORD("volkStAtQ")
}

void volkStAt(void) {
	DEBUG_WORD("volkStAt")
}

void volkStPage(void) {
	DEBUG_WORD("volkStPage")
}

void volkStDel(void) {
	DEBUG_WORD("volkStDel")
}

void volkStCR(void) {
	DEBUG_WORD("volkStCR")
}

void volkStEmit(void) {
	DEBUG_WORD("volkStEmit")
}

void volkStExpect(void) {
	DEBUG_WORD("volkStExpect")
}

void volkStDecode(void) {
	DEBUG_WORD("volkStDecode")
}

void volkStKey(void) {
	DEBUG_WORD("volkStKey")
}

void volkStKeyQ(void) {
	DEBUG_WORD("volkStKeyQ")
}

void volkWrap(void) {
	DEBUG_WORD("volkWrap")
}

void volkBConOut(void) {
	DEBUG_WORD("volkBConOut")
}

void volkBConIn(void) {
	DEBUG_WORD("volkBConIn")
}

void volkBcoStat(void) {
	DEBUG_WORD("volkBcoStat")
}

void volkBconStat(void) {
	DEBUG_WORD("volkBconStat")
}

void volkTwoVariable(void) {
	DEBUG_WORD("volkTwoVariable")
}

void volkTwoConstant(void) {
	DEBUG_WORD("volkTwoConstant")
}

void volkBlkFetch(void) {
	DEBUG_WORD("volkBlkFetch")
}

void volkDStar(void) {
	DEBUG_WORD("volkDStar")
}

void volkDMinus(void) {
	DEBUG_WORD("volkDMinus")
}

void volkQuoteDrop(void) {
	DEBUG_WORD("volkQuoteDrop")
}

void volkLNPlusStore(void) {
	DEBUG_WORD("volkLNPlusStore")
}

void volkL2Store(void) {
	DEBUG_WORD("volkL2Store")
}

void volkL2Fetch(void) {
	DEBUG_WORD("volkL2Fetch")
}

void volkLCMove(void) {
	DEBUG_WORD("volkLCMove")
}

void volkForthStart(void) {
	DEBUG_WORD("volkForthStart")
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_CPM_FORTH)
void volkSpool(void) {
	DEBUG_WORD("volkSpool")
}

void volkSpooler(void) {
	DEBUG_WORD("volkSpooler")
}

void volkShadow(void) {
	DEBUG_WORD("volkShadow")
}

void volkTasks(void) {
	DEBUG_WORD("volkTasks")
}

void volkTickS(void) {
	/* "'S" => Capital "S" */
	DEBUG_WORD("volkTasks")
}
void volkTaskerDotScr(void) {
	DEBUG_WORD("volkTaskerDotScr")
}

void volkSee(void) {
	DEBUG_WORD("volkSee")
}

void volkSeeDotScr(void) {
	DEBUG_WORD("volkSeeDotScr")
}

void volkExternal(void) {
	DEBUG_WORD("volkExternal")
}

void volkInternal(void) {
	DEBUG_WORD("volkInternal")
}

void volkQAbortZ(void) {
	DEBUG_WORD("volkQAbortZ")
}

void volkQEnough(void) {
	DEBUG_WORD("volkQEnough")
}

void volkReplace(void) {
	DEBUG_WORD("volkReplace")
}

void volkInsert(void) {
	DEBUG_WORD("volkInsert")
}

void volkSaveSysDotScr(void) {
	DEBUG_WORD("volkSaveSysDotScr")
}

void volkCopyDotScr(void) {
	DEBUG_WORD("volkSaveSysDotScr")
}

void volkAnsi(void) {
	DEBUG_WORD("volkAnsi")
}

void volkTerminalDotScr(void) {
	DEBUG_WORD("volkTerminalDotScr")
}

void volkDumb(void) {
	DEBUG_WORD("volkDumb")
}

void volkLocate(void) {
	DEBUG_WORD("volkLocate")
}

void volkDark(void) {
	DEBUG_WORD("volkDark")
}

void volkRvsOff(void) {
	DEBUG_WORD("volkRvsOff")
}

void volkRvsOn(void) {
	DEBUG_WORD("volkRvsOn")
}

void volkTerminalColon(void) {
	DEBUG_WORD("volkTerminalColon")
}

void volkTermColon(void) {
	DEBUG_WORD("volkTermColon")
}

void volkXinOutDotScr(void) {
	DEBUG_WORD("volkXinOutDotScr")
}

void volkAss8080DotScr(void) {
	DEBUG_WORD("volkAss8080DotScr")
}

void volkSourceDotScr(void) {
	DEBUG_WORD("volkSourceDotScr")
}

void volkJColon(void) {
	DEBUG_WORD("volkJColon")
}

void volkDriveColon(void) {
	DEBUG_WORD("volkDriveColon")
}

void volkDirQuote(void) {
	DEBUG_WORD("volkDirQuote")
}

void volkDotBuffers(void) {
	DEBUG_WORD("volkDotBuffers")
}

void volkZMakeView(void) {
	DEBUG_WORD("volkZMakeView")
}

void volkForthFiles(void) {
	DEBUG_WORD("volkForthFiles")
}

void volkDotSize(void) {
	DEBUG_WORD("volkDotSize")
}

void volkPostlude(void) {
	DEBUG_WORD("volkPostlude")
}

void volkRecSlashBlk(void) {
	DEBUG_WORD("volkRecSlashBlk")
}

void volkBSlashRec(void) {
	DEBUG_WORD("volkBSlashRec")
}

void volkNumFf(void) {
	DEBUG_WORD("volkNumFf")
}

void volkQuoteSearch(void) {
	DEBUG_WORD("volkQuoteSearch")
}

void volkSaveDosBuffers(void) {
	DEBUG_WORD("volkSaveDosBuffers")
}

void volkCreateZ(void) {
	DEBUG_WORD("volkCreateZ")
}

void volkPlusToMark(void) {
	DEBUG_WORD("volkPlusToMark")
}

void volkIPSave(void) {
	DEBUG_WORD("volkIPSave")
}

void volkRP(void) {
	DEBUG_WORD("volkRP")
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_PC_FORTH)
void volkPList(void) {
	DEBUG_WORD("volkPList")
}

void volkPlusPrint(void) {
	DEBUG_WORD("volkPlusPrint")
}

void volkGraphicsDotPrn(void) {
	DEBUG_WORD("volkGraphicsDotPrn")
}

void volkEdit(void) {
	DEBUG_WORD("volkEdit")
}

void volkED(void) {
	DEBUG_WORD("volkED")
}

void volkEditorDotFb(void) {
	DEBUG_WORD("volkEditorDotFb")
}

void volkTimes(void) {
	DEBUG_WORD("volkTimes")
}

void volkOften(void) {
	DEBUG_WORD("volkOften")
}

void volkTimeFetch(void) {
	DEBUG_WORD("volkTimeFetch")
}

void volkDateFetch(void) {
	DEBUG_WORD("volkDateFetch")
}

void volkMinutes(void) {
	DEBUG_WORD("volkMinutes")
}

void volkSeconds(void) {
	DEBUG_WORD("volkSeconds")
}

void volkWait(void) {
	DEBUG_WORD("volkWait")
}

void volkTime(void) {
	DEBUG_WORD("volkTime")
}

void volkTill(void) {
	DEBUG_WORD("volkTill")
}

void volkTimeoutQ(void) {
	DEBUG_WORD("volkTimeoutQ")
}

/* Ticks */
void volkTicks(void) {
	DEBUG_WORD("volkTimeoutQ")
}

void volkTimerDotFb(void) {
	DEBUG_WORD("volkTimerDotFb")
}

void volkTaskerDotFb(void) {
	DEBUG_WORD("volkTaskerDotFb")
}

void volkCall(void) {
	DEBUG_WORD("volkCall")
}

void volkMsdos(void) {
	DEBUG_WORD("volkMsdos")
}

void volkFType(void) {
	DEBUG_WORD("volkFType")
}

void volkFcopy(void) {
	DEBUG_WORD("volkFcopy")
}

void volkRd(void) {
	DEBUG_WORD("volkRd")
}

void volkCd(void) {
	DEBUG_WORD("volkCd")
}

void volkMd(void) {
	DEBUG_WORD("volkMd")
}

void volkRen(void) {
	DEBUG_WORD("volkRen")
}

void volkDotPath(void) {
	DEBUG_WORD("volkDotPath")
}

void volkEmptyFile(void) {
	DEBUG_WORD("volkEmptyFile")
}

void volkKillfile(void) {
	DEBUG_WORD("volkKillfile")
}

void volkQFile(void) {
	DEBUG_WORD("volkQFile")
}

void volkUsedQ(void) {
	DEBUG_WORD("volkUsedQ")
}

void volkDTA(void) {
	DEBUG_WORD("volkDTA")
}

void volkFSwap(void) {
	DEBUG_WORD("volkFSwap")
}

void volkDosDotFb(void) {
	DEBUG_WORD("volkDosDotFb")
}

void volkZDotStatus(void) {
	DEBUG_WORD("volkZDotStatus")
}

void volkDotSpace(void) {
	DEBUG_WORD("volkDotSpace")
}

void volkDotScr(void) {
	DEBUG_WORD("volkDotScr")
}

void volkDotDR(void) {
	DEBUG_WORD("volkDotDR")
}

void volkZDotDrv(void) {
	DEBUG_WORD("volkZDotDrv")
}

void volkDotSP(void) {
	DEBUG_WORD("volkDotSP")
}

void volkDotBase(void) {
	DEBUG_WORD("volkDotBase")
}

void volkScroll(void) {
	DEBUG_WORD("volkScroll")
}

void volkBlankLine(void) {
	DEBUG_WORD("volkBlankLine")
}

void volkBright(void) {
	DEBUG_WORD("volkBright")
}

void volkUnderline(void) {
	DEBUG_WORD("volkUnderline")
}

void volkInvers(void) {
	DEBUG_WORD("volkInvers")
}

void volkNormal(void) {
	DEBUG_WORD("volkNormal")
}

void volkSetPage(void) {
	DEBUG_WORD("volkSetPage")
}

void volkCurShape(void) {
	DEBUG_WORD("volkCurShape")
}

void volkCurStore(void) {
	DEBUG_WORD("volkCurStore")
}

void volkCurAtQ(void) {
	DEBUG_WORD("volkCurAtQ")
}

void volkFull(void) {
	DEBUG_WORD("volkFull")
}

void volkWindow(void) {
	DEBUG_WORD("volkWindow")
}

void volkCatt(void) {
	DEBUG_WORD("volkCatt")
}

void volkZArea(void) {
	DEBUG_WORD("volkZArea")
}

void volkTerminal(void) {
	DEBUG_WORD("volkTerminal")
}

void volkAreaColon(void) {
	DEBUG_WORD("volkAreaColon")
}

void volkStatus(void) {
	DEBUG_WORD("volkStatus")
}

void volkArea(void) {
	DEBUG_WORD("volkArea")
}

void volkMultiDotVid(void) {
	DEBUG_WORD("volkMultiDotVid")
}

void volkDotIf(void) {
	DEBUG_WORD("volkDotIf")
}

void volkDotElse(void) {
	DEBUG_WORD("volkDotElse")
}

void volkDotThen(void) {
	DEBUG_WORD("volkDotThen")
}

void volkQQuote(void) {
	DEBUG_WORD("volkQQuote")
}

void volkToMonth(void) {
	DEBUG_WORD("volkToMonth")
}

void volkAttach(void) {
	DEBUG_WORD("volkAttach")
}

void volkAppend(void) {
	DEBUG_WORD("volkAppend")
}

void volkRestoreVideo(void) {
	DEBUG_WORD("volkRestoreVideo")
}

void volkSaveVideo(void) {
	DEBUG_WORD("volkSaveVideo")
}

void volkVideoFetch(void) {
	DEBUG_WORD("volkVideoFetch")
}

void volkCSlashDIS(void) {
	DEBUG_WORD("volkCSlashDIS")
}

void volkLFree(void) {
	DEBUG_WORD("volkLFree")
}

void volkLAllocate(void) {
	DEBUG_WORD("volkLAllocate")
}

void volkAdr(void) {
	DEBUG_WORD("volkAdr")
}

void volkUQ(void) {
	DEBUG_WORD("volkUQ")
}

void volkTab(void) {
	DEBUG_WORD("volkTab")
}

void volkDotField(void) {
	DEBUG_WORD("volkDotField")
}

void volkToExpect(void) {
	DEBUG_WORD("volkToExpect")
}

void volkStash(void) {
	DEBUG_WORD("volkStash")
}

void volkCls(void) {
	DEBUG_WORD("volkCls")
}

void volkTickName(void) {
	DEBUG_WORD("volkTickName")
}

void volkSav(void) {
	DEBUG_WORD("volkSav")
}

void volkExtendDotFb(void) {
	DEBUG_WORD("volkExtendDotFb")
}

void volkEndCode(void) {
	DEBUG_WORD("volkEndCode")
}

void volkASmDotFb(void) {
	DEBUG_WORD("volkASmDotFb")
}

void volkVolks4THDotSys(void) {
	DEBUG_WORD("volkvolks4THDotSys")
}

void volkHelp(void) {
	DEBUG_WORD("volkHelp")
}

void volkLFSave(void) {
	DEBUG_WORD("volkLFSave")
}

void volkHColon(void) {
	DEBUG_WORD("volkHColon")
}

void volkGColon(void) {
	DEBUG_WORD("volkGColon")
}

void volkFColon(void) {
	DEBUG_WORD("volkFColon")
}

void volkEColon(void) {
	DEBUG_WORD("volkEColon")
}

void volkDrv(void) {
	DEBUG_WORD("volkDrv")
}

void volkPushFile(void) {
	DEBUG_WORD("volkPushFile")
}

void volkXFCB(void) {
	DEBUG_WORD("volkXFCB")
}

void volkKernelDotScr(void) {
	DEBUG_WORD("volkKernelDotScr")
}

void volkAsciz(void) {
	DEBUG_WORD("volkAsciz")
}

void volkToAsciz(void) {
	DEBUG_WORD("volkToAsciz")
}

void volkCounted(void) {
	DEBUG_WORD("volkCounted")
}

void volkPCStore(void) {
	DEBUG_WORD("volkPCStore")
}

void volkPCFetch(void) {
	DEBUG_WORD("volkPCFetch")
}

void volkListStore(void) {
	DEBUG_WORD("volkListStore")
}

void volkCharOut(void) {
	DEBUG_WORD("volkCharOut")
}

void volkEmptyKeys(void) {
	DEBUG_WORD("volkEmptyKeys")
}

void volkZKeyFetch(void) {
	DEBUG_WORD("volkZKeyFetch")
}

void volkLMove(void) {
	DEBUG_WORD("volkLMove")
}

void volkLType(void) {
	DEBUG_WORD("volkLType")
}

void volkLCFetch(void) {
	DEBUG_WORD("volkLCFetch")
}

void volkReturnCode(void) {
	DEBUG_WORD("volkReturnCode")
}

void volkTrim(void) {
	DEBUG_WORD("volkTrim")
}

void volkQDiskError(void) {
	DEBUG_WORD("volkQDiskError")
}

void volkErrorNum(void) {
	DEBUG_WORD("volkErrorNum")
}

void volkVocs(void) {
	DEBUG_WORD("volkVocs")
}

void volkLastTick(void) {
	DEBUG_WORD("volkLastTick")
}

void volkHave(void) {
	DEBUG_WORD("volkHave")
}

void volkZCapital(void) {
	DEBUG_WORD("volkZCapital")
}

void volkStarLoop(void) {
	DEBUG_WORD("volkStarLoop")
}

void volkBSlashSeg(void) {
	DEBUG_WORD("volkBSlashSeg")
}

void volkDSFetch(void) {
	DEBUG_WORD("volkDSFetch")
}

void volkFileLink(void) {
	DEBUG_WORD("volkFileLink")
}

void volkAborted(void) {
	DEBUG_WORD("volkAborted")
}

#endif

#endif
