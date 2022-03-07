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
	SMSG_DEBUG("volkForth83")
}

void volkBSlashBlk(void) {
	SMSG_DEBUG("volkBSlashBlk")
}

void volkDisplay(void) {
	SMSG_DEBUG("volkDisplay")
}

void volkKeyboard(void) {
	SMSG_DEBUG("volkKeyboard")
}

void volkNumCr(void) {
	SMSG_DEBUG("volkNumCr")
}

void volkNumBs(void) {
	SMSG_DEBUG("volkNumBs")
}

void volkCurOff(void) {
	SMSG_DEBUG("volkCurOff")
}

void volkCurOn(void) {
	SMSG_DEBUG("volkCurOn")
}

void volkRestart(void) {
	SMSG_DEBUG("volkRestart")
}

void volkTickCold(void) {
	SMSG_DEBUG("volkTickCold")
}

void volkTickRestart(void) {
	SMSG_DEBUG("volkTickRestart")
}

void volkExpect(void) {
	SMSG_DEBUG("volkExpect")
}

void volkDecode(void) {
	SMSG_DEBUG("volkDecode")
}

void volkKeyQ(void) {
	SMSG_DEBUG("volkKeyQ")
}

void volkKey(void) {
	SMSG_DEBUG("volkKey")
}

void volkInputColon(void) {
	SMSG_DEBUG("volkInputColon")
}

void volkCol(void) {
	SMSG_DEBUG("volkCol")
}

void volkRow(void) {
	SMSG_DEBUG("volkRow")
}

void volkAtQ(void) {
	SMSG_DEBUG("volkAtQ")
}

void volkAt(void) {
	SMSG_DEBUG("volkAt")
}

void volkPage(void) {
	SMSG_DEBUG("volkPage")
}

void volkDel(void) {
	SMSG_DEBUG("volkDel")
}

void volkType(void) {
	SMSG_DEBUG("volkType")
}

void volkCr(void) {
	SMSG_DEBUG("volkCr")
}

void volkEmit(void) {
	SMSG_DEBUG("volkEmit")
}

void volkOutputColon(void) {
	SMSG_DEBUG("volkOutputColon")
}

void volkZForget(void) {
	SMSG_DEBUG("volkZForget")
}

void volkClear(void) {
	SMSG_DEBUG("volkClear")
}

void volkCustomRemove(void) {
	SMSG_DEBUG("volkCustomRemove")
}

void volkAllBuffers(void) {
	SMSG_DEBUG("volkAllBuffers")
}

void volkConvey(void) {
	SMSG_DEBUG("volkConvey")
}

void volkCopy(void) {
	SMSG_DEBUG("volkCopy")
}

void volkUpdate(void) {
	SMSG_DEBUG("volkUpdate")
}

void volkBlock(void) {
	SMSG_DEBUG("volkBlock")
}

void volkBuffer(void) {
	SMSG_DEBUG("volkBuffer")
}

void volkZBlock(void) {
	SMSG_DEBUG("volkZBlock")
}

void volkZBuffer(void) {
	SMSG_DEBUG("volkZBuffer")
}

void volkCoreQ(void) {
	SMSG_DEBUG("volkCoreQ")
}

void volkFile(void) {
	SMSG_DEBUG("volkFile")
}

void volkUnlock(void) {
	SMSG_DEBUG("volkUnlock")
}

void volkLock(void) {
	SMSG_DEBUG("volkLock")
}

void volkPause(void) {
	SMSG_DEBUG("volkPause")
}

void volkList(void) {
	SMSG_DEBUG("volkList")
}

void volkLSlashS(void) {
	SMSG_DEBUG("volkLSlashS")
}

void volkCSlashL(void) {
	SMSG_DEBUG("volkCSlashL")
}

void volkDotS(void) {
	SMSG_DEBUG("volkDotS")
}

void volkUDot(void) {
	SMSG_DEBUG("volkUDot")
}

void volkDot(void) {
	SMSG_DEBUG("volkDot")
}

void volkDColon(void) {
	SMSG_DEBUG("volkDColon")
}

void volkUDotR(void) {
	SMSG_DEBUG("volkUDotR")
}

void volkDotR(void) {
	SMSG_DEBUG("volkDotR")
}

void volkDDotR(void) {
	SMSG_DEBUG("volkDDotR")
}

void volkNumS(void) {
	SMSG_DEBUG("volkNumS")
}

void volkNum(void) {
	SMSG_DEBUG("volkNum")
}

void volkSign(void) {
	SMSG_DEBUG("volkSign")
}

void volkNumGreater(void) {
	SMSG_DEBUG("volkNumGreater")
}

void volkLessNum(void) {
	SMSG_DEBUG("volkLessNum")
}

void volkHold(void) {
	SMSG_DEBUG("volkHold")
}

void volkSpaces(void) {
	SMSG_DEBUG("volkSpaces")
}

void volkSpace(void) {
	SMSG_DEBUG("volkSpace")
}

void volkTrailing(void) {
	SMSG_DEBUG("volkTrailing")
}

void volkBl(void) {
	SMSG_DEBUG("volkBl")
}

void volkErrorQuote(void) {
	SMSG_DEBUG("volkErrorQuote")
}

void volkAbortQuote(void) {
	SMSG_DEBUG("volkAbortQuote")
}

void volkZAbortQuote(void) {
	SMSG_DEBUG("volkZAbortQuote")
}

void volkZError(void) {
	SMSG_DEBUG("volkZError")
}

void volkQuit(void) {
	SMSG_DEBUG("volkQuit")
}

void volkTickQuit(void) {
	SMSG_DEBUG("volkTickQuit")
}

void volkZQuit(void) {
	SMSG_DEBUG("volkZQuit")
}

void volkDepth(void) {
	SMSG_DEBUG("volkDepth")
}

void volkRDepth(void) {
	SMSG_DEBUG("volkRDepth")
}

void volkTo(void) {
	SMSG_DEBUG("volkTo")
}

void volkPlusThru(void) {
	SMSG_DEBUG("volkPlusThru")
}

void volkThru(void) {
	SMSG_DEBUG("volkThru")
}

void volkPlusLoad(void) {
	SMSG_DEBUG("volkPlusLoad")
}

void volkLoad(void) {
	SMSG_DEBUG("volkLoad")
}

void volkPush(void) {
	SMSG_DEBUG("volkPush")
}

void volkDotStatus(void) {
	SMSG_DEBUG("volkDotStatus")
}

void volkQStack(void) {
	SMSG_DEBUG("volkQStack")
}

void volkIs(void) {
	SMSG_DEBUG("volkIs")
}

void volkZIs(void) {
	SMSG_DEBUG("volkZIs")
}

void volkDefer(void) {
	SMSG_DEBUG("volkDefer")
}

void volkRightBracket(void) {
	SMSG_DEBUG("volkRightBracket")
}

void volkLeftBracket(void) {
	SMSG_DEBUG("volkLeftBracket")
}

void volkInterpret(void) {
	SMSG_DEBUG("volkInterpret")
}

void volkNoDotExtensions(void) {
	SMSG_DEBUG("volkNoDotExtensions")
}

void volkNotFound(void) {
	SMSG_DEBUG("volkNotFound")
}

void volkXTick(void) {
	SMSG_DEBUG("volkXTick")
}

void volkXCompile(void) {
	SMSG_DEBUG("volkXCompile")
}

void volkFind(void) {
	SMSG_DEBUG("volkFind")
}

void volkZFind(void) {
	SMSG_DEBUG("volkZFind")
}

void volkWords(void) {
	SMSG_DEBUG("volkWords")
}

void volkOrder(void) {
	SMSG_DEBUG("volkOrder")
}

void volkDefinitions(void) {
	SMSG_DEBUG("volkDefinitions")
}

void volkOnlyForth(void) {
	SMSG_DEBUG("volkOnlyForth")
}

void volkOnly(void) {
	SMSG_DEBUG("volkOnly")
}

void volkForth(void) {
	SMSG_DEBUG("volkForth")
}

void volkVocabulary(void) {
	SMSG_DEBUG("volkVocabulary")
}

void volkToss(void) {
	SMSG_DEBUG("volkToss")
}

void volkAlso(void) {
	SMSG_DEBUG("volkAlso")
}

void volkUAllot(void) {
	SMSG_DEBUG("volkUAllot")
}

void volkVariable(void) {
	SMSG_DEBUG("volkVariable")
}

void volkConstant(void) {
	SMSG_DEBUG("volkConstant")
}

void volkSemicolon(void) {
	SMSG_DEBUG("volkSemicolon")
}

void volkColon(void) {
	SMSG_DEBUG("volkColon")
}

void volkCreateColon(void) {
	SMSG_DEBUG("volkCreateColon")
}

void volkDotName(void) {
	SMSG_DEBUG("volkDotName")
}

void volkToBody(void) {
	SMSG_DEBUG("volkToBody")
}

void volkNameFrom(void) {
	SMSG_DEBUG("volkNameFrom")
}

void volkToName(void) {
	SMSG_DEBUG("volkToName")
}

void volkNFaq(void) {
	SMSG_DEBUG("volkNFaq")
}

void volkCreate(void) {
	SMSG_DEBUG("volkCreate")
}

void volkWarning(void) {
	SMSG_DEBUG("volkWarning")
}

void volkVerticalBar(void) {
	SMSG_DEBUG("volkVerticalBar")
}

void volkQHead(void) {
	SMSG_DEBUG("volkQHead")
}

void volkDoes(void) {
	SMSG_DEBUG("volkDoes")
}

void volkHeapQ(void) {
	SMSG_DEBUG("volkHeapQ")
}

void volkHeap(void) {
	SMSG_DEBUG("volkHeap")
}

void volkHallot(void) {
	SMSG_DEBUG("volkHallot")
}

void volkClearStack(void) {
	SMSG_DEBUG("volkClearStack")
}

void volkRestrict(void) {
	SMSG_DEBUG("volkRestrict")
}

void volkImmediate(void) {
	SMSG_DEBUG("volkImmediate")
}

void volkRecursive(void) {
	SMSG_DEBUG("volkRecursive")
}

void volkReveal(void) {
	SMSG_DEBUG("volkReveal")
}

void volkHide(void) {
	SMSG_DEBUG("volkHide")
}

void volkLast(void) {
	SMSG_DEBUG("volkLast")
}

void volkNumber(void) {
	SMSG_DEBUG("volkNumber")
}

void volkNumberQ(void) {
	SMSG_DEBUG("volkNumberQ")
}

void volkConvert(void) {
	SMSG_DEBUG("volkConvert")
}

void volkAccumulate(void) {
	SMSG_DEBUG("volkAccumulate")
}

void volkDecimal(void) {
	SMSG_DEBUG("volkDecimal")
}

void volkBackslashNeeds(void) {
	SMSG_DEBUG("volkBackslashNeeds")
}

void volkBackslashBackslash(void) {
	SMSG_DEBUG("volkBackslashBackslash")
}

void volkBackslash(void) {
	SMSG_DEBUG("volkBackslash")
}

void volkDotParen(void) {
	SMSG_DEBUG("volkDotParen")
}

void volkParen(void) {
	SMSG_DEBUG("volkParen")
}

void volkDotQuote(void) {
	SMSG_DEBUG("volkDotQuote")
}

void volkParenDotQuote(void) {
	SMSG_DEBUG("volkParenDotQuote")
}

void volkQuote(void) {
	SMSG_DEBUG("volkQuote")
}

void volkParenQuote(void) {
	SMSG_DEBUG("volkParenQuote")
}

void volkQuoteLit(void) {
	SMSG_DEBUG("volkQuoteLit")
}

void volkAscii(void) {
	SMSG_DEBUG("volkAscii")
}

void volkState(void) {
	SMSG_DEBUG("volkState")
}

void volkName(void) {
	SMSG_DEBUG("volkName")
}

void volkParse(void) {
	SMSG_DEBUG("volkParse")
}

void volkWord(void) {
	SMSG_DEBUG("volkWord")
}

void volkSource(void) {
	SMSG_DEBUG("volkSource")
}

void volkCapital(void) {
	SMSG_DEBUG("volkCapital")
}

void volkSlashString(void) {
	SMSG_DEBUG("volkSlashString")
}

void volkSkip(void) {
	SMSG_DEBUG("volkSkip")
}

void volkScan(void) {
	SMSG_DEBUG("volkScan")
}

void volkQuery(void) {
	SMSG_DEBUG("volkQuery")
}

void volkTib(void) {
	SMSG_DEBUG("volkTib")
}

void volkSpan(void) {
	SMSG_DEBUG("volkSpan")
}

void volkBlk(void) {
	SMSG_DEBUG("volkBlk")
}

void volkToIn(void) {
	SMSG_DEBUG("volkToIn")
}

void volkToTib(void) {
	SMSG_DEBUG("volkToTib")
}

void volkNumTib(void) {
	SMSG_DEBUG("volkNumTib")
}

void volkCompile(void) {
	SMSG_DEBUG("volkCompile")
}

void volkCComma(void) {
	SMSG_DEBUG("volkCComma")
}

void volkComma(void) {
	SMSG_DEBUG("volkComma")
}

void volkAllot(void) {
	SMSG_DEBUG("volkAllot")
}

void volkPad(void) {
	SMSG_DEBUG("volkPad")
}

void volkHere(void) {
	SMSG_DEBUG("volkHere")
}

void volkFill(void) {
	SMSG_DEBUG("volkFill")
}

void volkErase(void) {
	SMSG_DEBUG("volkErase")
}

void volkCount(void) {
	SMSG_DEBUG("volkCount")
}

void volkPlace(void) {
	SMSG_DEBUG("volkPlace")
}

void volkMove(void) {
	SMSG_DEBUG("volkMove")
}

void volkCMoveTo(void) {
	SMSG_DEBUG("volkCMoveTo")
}

void volkCMove(void) {
	SMSG_DEBUG("volkCMove")
}

void volkUdSlashMod(void) {
	SMSG_DEBUG("volkUdSlashMod")
}

void volkUSlashMod(void) {
	SMSG_DEBUG("volkUSlashMod")
}

void volkStarSlash(void) {
	SMSG_DEBUG("volkStarSlash")
}

void volkStarSlashMod(void) {
	SMSG_DEBUG("volkStarSlashMod")
}

void volkMod(void) {
	SMSG_DEBUG("volkMod")
}

void volkSlash(void) {
	SMSG_DEBUG("volkSlash")
}

void volkSlashMod(void) {
	SMSG_DEBUG("volkSlashMod")
}

void volkTwoSlash(void) {
	SMSG_DEBUG("volkTwoSlash")
}

void volkMSlashMod(void) {
	SMSG_DEBUG("volkMSlashMod")
}

void volkUmSlashMod(void) {
	SMSG_DEBUG("volkUmSlashMod")
}

void volkTwoStar(void) {
	SMSG_DEBUG("volkTwoStar")
}

void volkStar(void) {
	SMSG_DEBUG("volkStar")
}

void volkMStar(void) {
	SMSG_DEBUG("volkMStar")
}

void volkUmStar(void) {
	SMSG_DEBUG("volkUmStar")
}

void volkLeave(void) {
	SMSG_DEBUG("volkLeave")
}

void volkLoop(void) {
	SMSG_DEBUG("volkLoop")
}

void volkQDo(void) {
	SMSG_DEBUG("volkQDo")
}

void volkDo(void) {
	SMSG_DEBUG("volkDo")
}

void volkUntil(void) {
	SMSG_DEBUG("volkUntil")
}

void volkRepeat(void) {
	SMSG_DEBUG("volkRepeat")
}

void volkWhile(void) {
	SMSG_DEBUG("volkWhile")
}

void volkBegin(void) {
	SMSG_DEBUG("volkBegin")
}

void volkElse(void) {
	SMSG_DEBUG("volkElse")
}

void volkThen(void) {
	SMSG_DEBUG("volkThen")
}

void volkIf(void) {
	SMSG_DEBUG("volkIf")
}

void volkQPairs(void) {
	SMSG_DEBUG("volkQPairs")
}

void volkFromResolve(void) {
	SMSG_DEBUG("volkFromResolve")
}

void volkFromMark(void) {
	SMSG_DEBUG("volkFromMark")
}

void volkToResolve(void) {
	SMSG_DEBUG("volkToResolve")
}

void volkToMark(void) {
	SMSG_DEBUG("volkToMark")
}

void volkQBranch(void) {
	SMSG_DEBUG("volkQBranch")
}

void volkBranch(void) {
	SMSG_DEBUG("volkBranch")
}

void volkJ(void) {
	SMSG_DEBUG("volkJ")
}

void volkI(void) {
	SMSG_DEBUG("volkI")
}

void volkZPlusLoop(void) {
	SMSG_DEBUG("volkZPlusLoop")
}

void volkZLoop(void) {
	SMSG_DEBUG("volkZLoop")
}

void volkEndLoop(void) {
	SMSG_DEBUG("volkEndLoop")
}

void volkBounds(void) {
	SMSG_DEBUG("volkBounds")
}

void volkZQDo(void) {
	SMSG_DEBUG("volkZQDo")
}

void volkZDo(void) {
	SMSG_DEBUG("volkZDo")
}

void volkAbs(void) {
	SMSG_DEBUG("volkAbs")
}

void volkDAbs(void) {
	SMSG_DEBUG("volkDAbs")
}

void volkUGreater(void) {
	SMSG_DEBUG("volkUGreater")
}

void volkZeroUnequal(void) {
	SMSG_DEBUG("volkZeroUnequal")
}

void volkZeroGreater(void) {
	SMSG_DEBUG("volkZeroGreater")
}

void volkGreater(void) {
	SMSG_DEBUG("volkGreater")
}

void volkULess(void) {
	SMSG_DEBUG("volkULess")
}

void volkLess(void) {
	SMSG_DEBUG("volkLess")
}

void volkZeroEqual(void) {
	SMSG_DEBUG("volkZeroEqual")
}

void volkLiteral(void) {
	SMSG_DEBUG("volkLiteral")
}

void volkLit(void) {
	SMSG_DEBUG("volkLit")
}

void volkOff(void) {
	SMSG_DEBUG("volkOff")
}

void volkFour(void) {
	SMSG_DEBUG("volkFour")
}

void volkThree(void) {
	SMSG_DEBUG("volkThree")
}

void volkTwo(void) {
	SMSG_DEBUG("volkTwo")
}

void volkOne(void) {
	SMSG_DEBUG("volkOne")
}

void volkZero(void) {
	SMSG_DEBUG("volkZero")
}

void volkMinusOne(void) {
	SMSG_DEBUG("volkMinusOne")
}

void volkFalse(void) {
	SMSG_DEBUG("volkFalse")
}

void volkTrue(void) {
	SMSG_DEBUG("volkTrue")
}

void volkTwoMinus(void) {
	SMSG_DEBUG("volkTwoMinus")
}

void volkOneMinus(void) {
	SMSG_DEBUG("volkOneMinus")
}

void volkThreePlus(void) {
	SMSG_DEBUG("volkThreePlus")
}

void volkTwoPlus(void) {
	SMSG_DEBUG("volkTwoPlus")
}

void volkOnePlus(void) {
	SMSG_DEBUG("volkOnePlus")
}

void volkDPlus(void) {
	SMSG_DEBUG("volkDPlus")
}

void volkDNegate(void) {
	SMSG_DEBUG("volkDNegate")
}

void volkNegate(void) {
	SMSG_DEBUG("volkNegate")
}

void volkNot(void) {
	SMSG_DEBUG("volkNot")
}

void volkMinus(void) {
	SMSG_DEBUG("volkMinus")
}

void volkXOR(void) {
	SMSG_DEBUG("volkXOR")
}

void volkAnd(void) {
	SMSG_DEBUG("volkAnd")
}

void volkOr(void) {
	SMSG_DEBUG("volkOr")
}

void volkPlus(void) {
	SMSG_DEBUG("volkPlus")
}

void volkTwoDup(void) {
	SMSG_DEBUG("volkTwoDup")
}

void volkTwoSwap(void) {
	SMSG_DEBUG("volkTwoSwap")
}

void volkRoll(void) {
	SMSG_DEBUG("volkRoll")
}

void volkPick(void) {
	SMSG_DEBUG("volkPick")
}

void volkUnder(void) {
	SMSG_DEBUG("volkUnder")
}

void volkNip(void) {
	SMSG_DEBUG("volkNip")
}

void volkMinusRot(void) {
	SMSG_DEBUG("volkMinusRot")
}

void volkRot(void) {
	SMSG_DEBUG("volkRot")
}

void volkOver(void) {
	SMSG_DEBUG("volkOver")
}

void volkQDup(void) {
	SMSG_DEBUG("volkQDup")
}

void volkDup(void) {
	SMSG_DEBUG("volkDup")
}

void volkSwap(void) {
	SMSG_DEBUG("volkSwap")
}

void volkDrop(void) {
	SMSG_DEBUG("volkDrop")
}

void volkPlusStore(void) {
	SMSG_DEBUG("volkPlusStore")
}

void volkStore(void) {
	SMSG_DEBUG("volkStore")
}

void volkFetch(void) {
	SMSG_DEBUG("volkFetch")
}

void volkCToggle(void) {
	SMSG_DEBUG("volkCToggle")
}

void volkCStore(void) {
	SMSG_DEBUG("volkCStore")
}

void volkCFetch(void) {
	SMSG_DEBUG("volkCFetch")
}

void volkPerform(void) {
	SMSG_DEBUG("volkPerform")
}

void volkExecute(void) {
	SMSG_DEBUG("volkExecute")
}

void volkQExit(void) {
	SMSG_DEBUG("volkQExit")
}

void volkUnnest(void) {
	SMSG_DEBUG("volkUnnest")
}

void volkExit(void) {
	SMSG_DEBUG("volkExit")
}

void volkRDrop(void) {
	SMSG_DEBUG("volkRDrop")
}

void volkRFetch(void) {
	SMSG_DEBUG("volkRFetch")
}

void volkRFrom(void) {
	SMSG_DEBUG("volkRFrom")
}

void volkToR(void) {
	SMSG_DEBUG("volkToR")
}

void volkRPStore(void) {
	SMSG_DEBUG("volkRPStore")
}

void volkRPFetch(void) {
	SMSG_DEBUG("volkRPFetch")
}

void volkUPStore(void) {
	SMSG_DEBUG("volkUPStore")
}

void volkUPFetch(void) {
	SMSG_DEBUG("volkUPFetch")
}

void volkSPStore(void) {
	SMSG_DEBUG("volkSPStore")
}

void volkSPFetch(void) {
	SMSG_DEBUG("volkSPFetch")
}

void volkUdp(void) {
	SMSG_DEBUG("volkUdp")
}

void volkVocLink(void) {
	SMSG_DEBUG("volkVocLink")
}

void volkErrorhandler(void) {
	SMSG_DEBUG("volkErrorhandler")
}

void volkInput(void) {
	SMSG_DEBUG("volkInput")
}

void volkOutput(void) {
	SMSG_DEBUG("volkOutput")
}

void volkBase(void) {
	SMSG_DEBUG("volkBase")
}

void volkOffset(void) {
	SMSG_DEBUG("volkOffset")
}

void volkDP(void) {
	SMSG_DEBUG("volkDP")
}

void volkR0(void) {
	SMSG_DEBUG("volkR0")
}

void volkS0(void) {
	SMSG_DEBUG("volkS0")
}

void volkOrigin(void) {
	SMSG_DEBUG("volkOrigin")
}

void volkNoop(void) {
	SMSG_DEBUG("volkNoop")
}

void volkRecover(void) {
	SMSG_DEBUG("volkRecover")
}

void volkEndTrace(void) {
	SMSG_DEBUG("volkEndTrace")
}

void volkZeroLess(void) {
	SMSG_DEBUG("volkZeroLess")
}

void volkEqual(void) {
	SMSG_DEBUG("volkEqual")
}

void volkExtend(void) {
	SMSG_DEBUG("volkExtend")
}

void volkUMin(void) {
	SMSG_DEBUG("volkUMin")
}

void volkUMax(void) {
	SMSG_DEBUG("volkUMax")
}

void volkMax(void) {
	SMSG_DEBUG("volkMax")
}

void volkMin(void) {
	SMSG_DEBUG("volkMin")
}

void volkDLess(void) {
	SMSG_DEBUG("volkDLess")
}

void volkDEqual(void) {
	SMSG_DEBUG("volkDEqual")
}

void volkCaseQ(void) {
	SMSG_DEBUG("volkDEqual")
}

void volkDZeroEqual(void) {
	SMSG_DEBUG("volkDZeroEqual")
}

void volkUWithin(void) {
	SMSG_DEBUG("volkUWithin")
}

void volkDigitQ(void) {
	SMSG_DEBUG("volkDigitQ")
}

void volkCold(void) {
	SMSG_DEBUG("volkCold")
}

void volkCommaQuote(void) {
	SMSG_DEBUG("volkCommaQuote")
}

void volkNullStringQ(void) {
	SMSG_DEBUG("volkNullStringQ")
}

void volkDpl(void) {
	SMSG_DEBUG("volkDpl")
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_ST_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_CPM_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_PC_FORTH)
void volkListing(void) {
	SMSG_DEBUG("volkListing")
}

void volkDocument(void) {
	SMSG_DEBUG("volkDocument")
}

void volkPThru(void) {
	SMSG_DEBUG("volkPThru")
}

void volkPrint(void) {
	SMSG_DEBUG("volkPrint")
}

void volkPrinter(void) {
	SMSG_DEBUG("volkPrinter")
}

void volkDump(void) {
	SMSG_DEBUG("volkDump")
}

void volkTools(void) {
	SMSG_DEBUG("volkTools")
}

void volkToolsDotFb(void) {
	SMSG_DEBUG("volkToolsDotFb")
}

void volkBye(void) {
	SMSG_DEBUG("volkBye")
}

void volkView(void) {
	SMSG_DEBUG("volkView")
}

void volkL(void) {
	SMSG_DEBUG("volkL")
}

void volkV(void) {
	SMSG_DEBUG("volkV")
}

void volkDelete(void) {
	SMSG_DEBUG("volkDelete")
}

void volkCaps(void) {
	SMSG_DEBUG("volkCaps")
}

void volkCColon(void) {
	SMSG_DEBUG("volkCColon")
}

void volkBColon(void) {
	SMSG_DEBUG("volkBColon")
}

void volkAColon(void) {
	SMSG_DEBUG("volkAColon")
}

void volkDir(void) {
	SMSG_DEBUG("volkDir")
}

void volkMore(void) {
	SMSG_DEBUG("volkDir")
}

void volkFiles(void) {
	SMSG_DEBUG("volkFiles")
}

void volkInclude(void) {
	SMSG_DEBUG("volkInclude")
}

void volkLoadFrom(void) {
	SMSG_DEBUG("volkLoadFrom")
}

void volkFrom(void) {
	SMSG_DEBUG("volkLoadFrom")
}

void volkMakefile(void) {
	SMSG_DEBUG("volkMakefile")
}

void volkUse(void) {
	SMSG_DEBUG("volkUse")
}

void volkMake(void) {
	SMSG_DEBUG("volkMake")
}

void volkAssign(void) {
	SMSG_DEBUG("volkAssign")
}

void volkClose(void) {
	SMSG_DEBUG("volkClose")
}

void volkOpen(void) {
	SMSG_DEBUG("volkOpen")
}

void volkFileQ(void) {
	SMSG_DEBUG("volkFileQ")
}

void volkCapacity(void) {
	SMSG_DEBUG("volkCapacity")
}

void volkNumEsc(void) {
	SMSG_DEBUG("volkNumEsc")
}

void volkNumLf(void) {
	SMSG_DEBUG("volkNumLf")
}

void volkQCr(void) {
	SMSG_DEBUG("volkQCr")
}

void volkStopQ(void) {
	SMSG_DEBUG("volkStopQ")
}

void volkSave(void) {
	SMSG_DEBUG("volkSave")
}

void volkEmpty(void) {
	SMSG_DEBUG("volkEmpty")
}

void volkForget(void) {
	SMSG_DEBUG("volkForget")
}

void volkIsFileFetch(void) {
	SMSG_DEBUG("volkIsFileFetch")
}

void volkDDot(void) {
	SMSG_DEBUG("volkDDot")
}

void volkRNum(void) {
	SMSG_DEBUG("volkRNum")
}

void volkScr(void) {
	SMSG_DEBUG("volkScr")
}

void volkAbort(void) {
	SMSG_DEBUG("volkAbort")
}

void volkTickAbort(void) {
	SMSG_DEBUG("volkTickAbort")
}

void volkStandardISlashO(void) {
	SMSG_DEBUG("volkStandardISlashO")
}

void volkZLoad(void) {
	SMSG_DEBUG("volkZLoad")
}

void volkContext(void) {
	SMSG_DEBUG("volkContext")
}

void volkCurrent(void) {
	SMSG_DEBUG("volkCurrent")
}

void volkVp(void) {
	SMSG_DEBUG("volkVp")
}

void volkAlias(void) {
	SMSG_DEBUG("volkAlias")
}

void volkUser(void) {
	SMSG_DEBUG("volkUser")
}

void volkMakeView(void) {
	SMSG_DEBUG("volkMakeView")
}

void volkHAlign(void) {
	SMSG_DEBUG("volkHAlign")
}

void volkAlign(void) {
	SMSG_DEBUG("volkAlign")
}

void volkLoadFile(void) {
	SMSG_DEBUG("volkLoadFile")
}

void volkEven(void) {
	SMSG_DEBUG("volkEven")
}

void volkOn(void) {
	SMSG_DEBUG("volkOn")
}

void volkFourMinus(void) {
	SMSG_DEBUG("volkFourMinus")
}

void volkFourPlus(void) {
	SMSG_DEBUG("volkFourPlus")
}

void volkTwoStore(void) {
	SMSG_DEBUG("volkTwoStore")
}

void volkTwoFetch(void) {
	SMSG_DEBUG("volkTwoFetch")
}

void volkMinusRoll(void) {
	SMSG_DEBUG("volkMinusRoll")
}

void volkSaveSystem(void) {
	SMSG_DEBUG("volkDebug")
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_C64_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_CPM_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_PC_FORTH)
void volkAssembler(void) {
	SMSG_DEBUG("volkAssembler")
}

void volkBSlashBuf(void) {
	SMSG_DEBUG("volkBSlashBuf")
}

void volkPrev(void) {
	SMSG_DEBUG("volkPrev")
}

void volkTick(void) {
	SMSG_DEBUG("volkTick")
}

void volkHex(void) {
	SMSG_DEBUG("volkHex")
}

void volkCLit(void) {
	SMSG_DEBUG("volkCLit")
}

void volkTwoDrop(void) {
	SMSG_DEBUG("volkTwoDrop")
}

void volkRSlashW(void) {
	SMSG_DEBUG("volkRSlashW")
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_C64_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_ST_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_PC_FORTH)
void volkToDrive(void) {
	SMSG_DEBUG("volkToDrive")
}

void volkLDump(void) {
	SMSG_DEBUG("volkLDump")
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_C64_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_ST_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_CPM_FORTH)
void volkDrvInit(void) {
	SMSG_DEBUG("volkDrvInit")
}

void volkConStore(void) {
	SMSG_DEBUG("volkConStore")
}

void volkGetKey(void) {
	SMSG_DEBUG("volkGetKey")
}

void volkFreeBuffer(void) {
	SMSG_DEBUG("volkFreeBuffer")
}

void volkAllotBuffer(void) {
	SMSG_DEBUG("volkAllotBuffer")
}

void volkFirst(void) {
	SMSG_DEBUG("volkFirst")
}

void volkLimit(void) {
	SMSG_DEBUG("volkLimit")
}

void volkBuffers(void) {
	SMSG_DEBUG("volkBuffers")
}

void volkPlusLoop(void) {
	SMSG_DEBUG("volkPlusLoop")
}

void volkFlush(void) {
	SMSG_DEBUG("volkFlush")
}

void volkEmptyBuffers(void) {
	SMSG_DEBUG("volkEmptyBuffers")
}

void volkSaveBuffers(void) {
	SMSG_DEBUG("volkSaveBuffers")
}

#endif


#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_C64_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_ST_FORTH)
void volkIndex(void) {
	SMSG_DEBUG("volkIndex")
}

void volkDrvQ(void) {
	SMSG_DEBUG("volkDrvQ")
}

void volkToInterpret(void) {
	SMSG_DEBUG("volkToInterpret")
}

void volkCapitalize(void) {
	SMSG_DEBUG("volkCapitalize")
}

void volkBlkSlashDrv(void) {
	SMSG_DEBUG("volkBlkSlashDrv")
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_ST_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_CPM_FORTH)
void volkPrinterDotScr(void) {
	SMSG_DEBUG("volkPrinterDotScr")
}

void volkRelocateDotScr(void) {
	SMSG_DEBUG("volkRelocateDotScr")
}

void volkTraceTick(void) {
	SMSG_DEBUG("volkTraceTick")
}

void volkDebug(void) {
	SMSG_DEBUG("volkDebug")
}

void volkDotBlk(void) {
	SMSG_DEBUG("volkDotBlk")
}

void volkStartupDotScr(void) {
	SMSG_DEBUG("volkStartupDotScr")
}

void volkFileIntDotScr(void) {
	SMSG_DEBUG("volkFileIntDotScr")
}

void volkFilesQuote(void) {
	SMSG_DEBUG("volkFilesQuote")
}

void volkEof(void) {
	SMSG_DEBUG("volkEof")
}

void volkCurRite(void) {
	SMSG_DEBUG("volkCurRite")
}

void volkCurLeft(void) {
	SMSG_DEBUG("volkCurLeft")
}

void volkZWord(void) {
	SMSG_DEBUG("volkZWord")
}

void volkUP(void) {
	SMSG_DEBUG("volkUP")
}

void volkToolsDotScr(void) {
	SMSG_DEBUG("volkToolsDotScr")
}

void volkEditorDotScr(void) {
	SMSG_DEBUG("volkEditorDotScr")
}

void volkZView(void) {
	SMSG_DEBUG("volkZView")
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_CPM_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_PC_FORTH)
void volkRendezvous(void) {
	SMSG_DEBUG("volkRendezvous")
}

void volkTask(void) {
	SMSG_DEBUG("volkTask")
}

void volkWake(void) {
	SMSG_DEBUG("volkWake")
}

void volkSleep(void) {
	SMSG_DEBUG("volkSleep")
}

void volkActivate(void) {
	SMSG_DEBUG("volkActivate")
}

void volkPass(void) {
	SMSG_DEBUG("volkPass")
}

void volkMultiTask(void) {
	SMSG_DEBUG("volkMultiTask")
}

void volkSingleTask(void) {
	SMSG_DEBUG("volkSingleTask")
}

void volkStop(void) {
	SMSG_DEBUG("volkStop")
}

void volkFix(void) {
	SMSG_DEBUG("volkFix")
}

void volkNumDel(void) {
	SMSG_DEBUG("volkNumDel")
}

void volkCtrl(void) {
	SMSG_DEBUG("volkCtrl")
}

void volkUpdatedQ(void) {
	SMSG_DEBUG("volkUpdatedQ")
}

void volkEditor(void) {
	SMSG_DEBUG("volkEditor")
}

void volkBlank(void) {
	SMSG_DEBUG("volkBlank")
}

void volkZKey(void) {
	SMSG_DEBUG("volkZKey")
}

void volkZExpect(void) {
	SMSG_DEBUG("volkZExpect")
}

void volkZDecode(void) {
	SMSG_DEBUG("volkZDecode")
}

void volkZDel(void) {
	SMSG_DEBUG("volkZDel")
}

void volkZCr(void) {
	SMSG_DEBUG("volkZCr")
}

void volkZEmit(void) {
	SMSG_DEBUG("volkZEmit")
}

void volkZType(void) {
	SMSG_DEBUG("volkZType")
}

void volkZPage(void) {
	SMSG_DEBUG("volkZPage")
}

void volkZAtQ(void) {
	SMSG_DEBUG("volkZAtQ")
}

void volkZAt(void) {
	SMSG_DEBUG("volkZAt")
}

void volkCSlashCol(void) {
	SMSG_DEBUG("volkCSlashCol")
}

void volkCSlashRow(void) {
	SMSG_DEBUG("volkCSlashRow")
}

void volkLabel(void) {
	SMSG_DEBUG("volkLabel")
}

void volkToLabel(void) {
	SMSG_DEBUG("volkToLabel")
}

void volkSemicolonCode(void) {
	SMSG_DEBUG("volkSemicolonCode")
}

void volkCode(void) {
	SMSG_DEBUG("volkCode")
}

void volkSaveFile(void) {
	SMSG_DEBUG("volkSaveFile")
}

void volkDirect(void) {
	SMSG_DEBUG("volkDirect")
}

void volkZRSlashW(void) {
	SMSG_DEBUG("volkZRSlashW")
}

void volkNumBel(void) {
	SMSG_DEBUG("volkNumBel")
}

void volkNumTab(void) {
	SMSG_DEBUG("volkNumTab")
}

void volkDos(void) {
	SMSG_DEBUG("volkDos")
}

void volkEmptyBuf(void) {
	SMSG_DEBUG("volkEmptyBuf")
}

void volkZCoreQ(void) {
	SMSG_DEBUG("volkZCoreQ")
}

void volkFromFile(void) {
	SMSG_DEBUG("volkFromFile")
}

void volkIsFile(void) {
	SMSG_DEBUG("volkIsFile")
}

void volkPrompt(void) {
	SMSG_DEBUG("volkPrompt")
}

void volkZPrompt(void) {
	SMSG_DEBUG("volkZPrompt")
}

void volkParser(void) {
	SMSG_DEBUG("volkParser")
}

void volkRoot(void) {
	SMSG_DEBUG("volkRoot")
}

void volkBodyFrom(void) {
	SMSG_DEBUG("volkBodyFrom")
}

void volkZNameFrom(void) {
	SMSG_DEBUG("volkZNameFrom")
}

void volkZSemicolonCode(void) {
	SMSG_DEBUG("volkZSemicolonCode")
}

void volkUpper(void) {
	SMSG_DEBUG("volkUpper")
}

void volkFlip(void) {
	SMSG_DEBUG("volkFlip")
}

void volkZeroEqualExit(void) {
	SMSG_DEBUG("volkZeroEqualExit")
}

void volkRemove(void) {
	SMSG_DEBUG("volkRemove")
}

void volkZKeyQ(void) {
	SMSG_DEBUG("volkZKeyQ")
}

void volkTipp(void) {
	SMSG_DEBUG("volkTipp")
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_C64_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_CPM_FORTH)
void volkPrintableQ(void) {
	SMSG_DEBUG("volkPrintableQ")
}

void volkDiskErr(void) {
	SMSG_DEBUG("volkDiskErr")
}

void volkZDiskErr(void) {
	SMSG_DEBUG("volkZDiskErr")
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_C64_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_PC_FORTH)
void volkDrive(void) {
	SMSG_DEBUG("volkDrive")
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_ST_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_PC_FORTH)
void volkBell(void) {
	SMSG_DEBUG("volkBell")
}

void volkAbortZ(void) {
	SMSG_DEBUG("volkAbortZ")
}

void volkPath(void) {
	SMSG_DEBUG("volkPath")
}

void volkArguments(void) {
	SMSG_DEBUG("volkArguments")
}

void volkTwoOver(void) {
	SMSG_DEBUG("volkTwoOver")
}

void volkLFetch(void) {
	SMSG_DEBUG("volkLFetch")
}

void volkLStore(void) {
	SMSG_DEBUG("volkLStore")
}

void volkLCStore(void) {
	SMSG_DEBUG("volkLCStore")
}

void volkNextLink(void) {
	SMSG_DEBUG("volkNextLink")
}

#endif


#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
   (H2O_FORTH_PRIMITIVES == VOLK_C64_FORTH)
void volkZ64(void) {
	SMSG_DEBUG("volkZ64")
}

void volkCZ(void) {
	SMSG_DEBUG("volkCZ")
}

void volkZ16(void) {
	SMSG_DEBUG("volkZ16")
}

void volkC64Init(void) {
	SMSG_DEBUG("volkC64Init")
}

void volkInitSystem(void) {
	SMSG_DEBUG("volkInitSystem")
}

void volkInkPot(void) {
	SMSG_DEBUG("volkInkPot")
}

void volkFIndex(void) {
	SMSG_DEBUG("volkFIndex")
}

void volkCBM1541RSlashW(void) {
	SMSG_DEBUG("volkCBM1541RSlashW")
}

void volkDiskClose(void) {
	SMSG_DEBUG("volkDiskClose")
}

void volkDiskOpen(void) {
	SMSG_DEBUG("volkDiskOpen")
}

void volkWriteSector(void) {
	SMSG_DEBUG("volkWriteSector")
}

void volkReadSector(void) {
	SMSG_DEBUG("volkReadSector")
}

void volkDErrorQ(void) {
	SMSG_DEBUG("volkDErrorQ")
}

void volkBusInput(void) {
	SMSG_DEBUG("volkBusInput")
}

void volkBusFetch(void) {
	SMSG_DEBUG("volkBusFetch")
}

void volkBusType(void) {
	SMSG_DEBUG("volkBusType")
}

void volkBusStore(void) {
	SMSG_DEBUG("volkBusStore")
}

void volkBusIn(void) {
	SMSG_DEBUG("volkBusIn")
}

void volkZBusIn(void) {
	SMSG_DEBUG("volkZBusIn")
}

void volkBusClose(void) {
	SMSG_DEBUG("volkBusClose")
}

void volkBusOpen(void) {
	SMSG_DEBUG("volkBusOpen")
}

void volkBusOff(void) {
	SMSG_DEBUG("volkBusOff")
}

void volkISlashO(void) {
	SMSG_DEBUG("volkISlashO")
}

void volkZDrv(void) {
	SMSG_DEBUG("volkZDrv")
}

void volkC64Type(void) {
	SMSG_DEBUG("volkC64Type")
}

void volkC64AtQ(void) {
	SMSG_DEBUG("volkC64AtQ")
}

void volkC64At(void) {
	SMSG_DEBUG("volkC64At")
}

void volkC64Page(void) {
	SMSG_DEBUG("volkC64Page")
}

void volkC64Del(void) {
	SMSG_DEBUG("volkC64Del")
}

void volkC64Cr(void) {
	SMSG_DEBUG("volkC64Cr")
}

void volkC64Emit(void) {
	SMSG_DEBUG("volkC64Emit")
}

void volkC64Expect(void) {
	SMSG_DEBUG("volkC64Expect")
}

void volkC64Decode(void) {
	SMSG_DEBUG("volkC64Decode")
}

void volkC64Key(void) {
	SMSG_DEBUG("volkC64Key")
}

void volkC64KeyQ(void) {
	SMSG_DEBUG("volkC64KeyQ")
}

void volkBlkMove(void) {
	SMSG_DEBUG("volkBlkMove")
}

void volkZCopy(void) {
	SMSG_DEBUG("volkZCopy")
}

void volkTickNumberQ(void) {
	SMSG_DEBUG("volkTickNumberQ")
}

void volkPrevious(void) {
	SMSG_DEBUG("volkPrevious")
}

void volkChar(void) {
	SMSG_DEBUG("volkChar")
}

void volkEndQ(void) {
	SMSG_DEBUG("volkEndQ")
}

void volkBasOn(void) {
	SMSG_DEBUG("volkBasOn")
}

void volkLogo(void) {
	SMSG_DEBUG("volkLogo")
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_ST_FORTH)
void volkPrintALL(void) {
	SMSG_DEBUG("volkPrintALL")
}

void volkRelocate(void) {
	SMSG_DEBUG("volkRelocate")
}

void volkIndexDotScr(void) {
	SMSG_DEBUG("volkIndexDotScr")
}

void volkTickEditFile(void) {
	SMSG_DEBUG("volkTickEditFile")
}

void volkTickRNum(void) {
	SMSG_DEBUG("volkTickRNum")
}

void volkTickScr(void) {
	SMSG_DEBUG("volkTickScr")
}

void volkEdWindowDotScr(void) {
	SMSG_DEBUG("volkEdWindowDotScr")
}

void volkGemBackslashVdiDotScr(void) {
	SMSG_DEBUG("volkGemBackslashVdiDotScr")
}

void volkGemBackslashSuperGemDotScr(void) {
	SMSG_DEBUG("volkGemBackslashSuperGemDotScr")
}

void volkEdiConDotScr(void) {
	SMSG_DEBUG("volkEdiConDotScr")
}

void volkGem(void) {
	SMSG_DEBUG("volkGem")
}

void volkGemBackslashBsicDotScr(void) {
	SMSG_DEBUG("volkGemBackslashBsicDotScr")
}

void volkGemBackslashAesDotScr(void) {
	SMSG_DEBUG("volkGemBackslashAesDotScr")
}

void volkMFree(void) {
	SMSG_DEBUG("volkMFree")
}

void volkMalloc(void) {
	SMSG_DEBUG("volkMalloc")
}

void volkAllocateDotScr(void) {
	SMSG_DEBUG("volkAllocateDotScr")
}

void volkZeroQuote(void) {
	SMSG_DEBUG("volkZeroQuote")
}

void volkCommaZeroQuote(void) {
	SMSG_DEBUG("volkCommaZeroQuote")
}

void volkZeroGreaterCQuote(void) {
	SMSG_DEBUG("volkZeroGreaterCQuote")
}

void volkCGreaterZeroQuote(void) {
	SMSG_DEBUG("volkCGreaterZeroQuote")
}

void volkDollarAdd(void) {
	SMSG_DEBUG("volkDollarAdd")
}

void volkDollarSum(void) {
	SMSG_DEBUG("volkDollarSum")
}

void volkSearch(void) {
	SMSG_DEBUG("volkSearch")
}

void volkCompareText(void) {
	SMSG_DEBUG("volkCompareText")
}

void volkringsDotScr(void) {
	SMSG_DEBUG("volkringsDotScr")
}

void volkAssembleDotScr(void) {
	SMSG_DEBUG("volkAssembleDotScr")
}

void volkBlak(void) {
	SMSG_DEBUG("volkBlak")
}

void volkCPush(void) {
	SMSG_DEBUG("volkCPush")
}

void volkAbsAddr(void) {
	SMSG_DEBUG("volkAbsAddr")
}

void volkDiversesDotScr(void) {
	SMSG_DEBUG("volkDiversesDotScr")
}

void volkForth83DotScr(void) {
	SMSG_DEBUG("volkForth83DotScr")
}

void volkRemoveQ(void) {
	SMSG_DEBUG("volkRemoveQ")
}

void volkMakeDir(void) {
	/* = volkMd */
	SMSG_DEBUG("volkMakeDir")
}

void volkZMore(void) {
	SMSG_DEBUG("volkZMore")
}

void volkDirekt(void) {
	SMSG_DEBUG("volkDirekt")
}

void volkSTRSlashW(void) {
	SMSG_DEBUG("volkSTRSlashW")
}

void volkRWAbs(void) {
	SMSG_DEBUG("volkRWAbs")
}

void volkDrv1(void) {
	SMSG_DEBUG("volkDrv1")
}

void volkDrv0(void) {
	SMSG_DEBUG("volkDrv0")
}

void volkZBlkSlashDrv(void) {
	SMSG_DEBUG("volkZBlkSlashDrv")
}

void volkStType(void) {
	SMSG_DEBUG("volkStType")
}

void volkStAtQ(void) {
	SMSG_DEBUG("volkStAtQ")
}

void volkStAt(void) {
	SMSG_DEBUG("volkStAt")
}

void volkStPage(void) {
	SMSG_DEBUG("volkStPage")
}

void volkStDel(void) {
	SMSG_DEBUG("volkStDel")
}

void volkStCR(void) {
	SMSG_DEBUG("volkStCR")
}

void volkStEmit(void) {
	SMSG_DEBUG("volkStEmit")
}

void volkStExpect(void) {
	SMSG_DEBUG("volkStExpect")
}

void volkStDecode(void) {
	SMSG_DEBUG("volkStDecode")
}

void volkStKey(void) {
	SMSG_DEBUG("volkStKey")
}

void volkStKeyQ(void) {
	SMSG_DEBUG("volkStKeyQ")
}

void volkWrap(void) {
	SMSG_DEBUG("volkWrap")
}

void volkBConOut(void) {
	SMSG_DEBUG("volkBConOut")
}

void volkBConIn(void) {
	SMSG_DEBUG("volkBConIn")
}

void volkBcoStat(void) {
	SMSG_DEBUG("volkBcoStat")
}

void volkBconStat(void) {
	SMSG_DEBUG("volkBconStat")
}

void volkTwoVariable(void) {
	SMSG_DEBUG("volkTwoVariable")
}

void volkTwoConstant(void) {
	SMSG_DEBUG("volkTwoConstant")
}

void volkBlkFetch(void) {
	SMSG_DEBUG("volkBlkFetch")
}

void volkDStar(void) {
	SMSG_DEBUG("volkDStar")
}

void volkDMinus(void) {
	SMSG_DEBUG("volkDMinus")
}

void volkQuoteDrop(void) {
	SMSG_DEBUG("volkQuoteDrop")
}

void volkLNPlusStore(void) {
	SMSG_DEBUG("volkLNPlusStore")
}

void volkL2Store(void) {
	SMSG_DEBUG("volkL2Store")
}

void volkL2Fetch(void) {
	SMSG_DEBUG("volkL2Fetch")
}

void volkLCMove(void) {
	SMSG_DEBUG("volkLCMove")
}

void volkForthStart(void) {
	SMSG_DEBUG("volkForthStart")
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_CPM_FORTH)
void volkSpool(void) {
	SMSG_DEBUG("volkSpool")
}

void volkSpooler(void) {
	SMSG_DEBUG("volkSpooler")
}

void volkShadow(void) {
	SMSG_DEBUG("volkShadow")
}

void volkTasks(void) {
	SMSG_DEBUG("volkTasks")
}

void volkTickS(void) {
	/* "'S" => Capital "S" */
	SMSG_DEBUG("volkTasks")
}
void volkTaskerDotScr(void) {
	SMSG_DEBUG("volkTaskerDotScr")
}

void volkSee(void) {
	SMSG_DEBUG("volkSee")
}

void volkSeeDotScr(void) {
	SMSG_DEBUG("volkSeeDotScr")
}

void volkExternal(void) {
	SMSG_DEBUG("volkExternal")
}

void volkInternal(void) {
	SMSG_DEBUG("volkInternal")
}

void volkQAbortZ(void) {
	SMSG_DEBUG("volkQAbortZ")
}

void volkQEnough(void) {
	SMSG_DEBUG("volkQEnough")
}

void volkReplace(void) {
	SMSG_DEBUG("volkReplace")
}

void volkInsert(void) {
	SMSG_DEBUG("volkInsert")
}

void volkSaveSysDotScr(void) {
	SMSG_DEBUG("volkSaveSysDotScr")
}

void volkCopyDotScr(void) {
	SMSG_DEBUG("volkSaveSysDotScr")
}

void volkAnsi(void) {
	SMSG_DEBUG("volkAnsi")
}

void volkTerminalDotScr(void) {
	SMSG_DEBUG("volkTerminalDotScr")
}

void volkDumb(void) {
	SMSG_DEBUG("volkDumb")
}

void volkLocate(void) {
	SMSG_DEBUG("volkLocate")
}

void volkDark(void) {
	SMSG_DEBUG("volkDark")
}

void volkRvsOff(void) {
	SMSG_DEBUG("volkRvsOff")
}

void volkRvsOn(void) {
	SMSG_DEBUG("volkRvsOn")
}

void volkTerminalColon(void) {
	SMSG_DEBUG("volkTerminalColon")
}

void volkTermColon(void) {
	SMSG_DEBUG("volkTermColon")
}

void volkXinOutDotScr(void) {
	SMSG_DEBUG("volkXinOutDotScr")
}

void volkAss8080DotScr(void) {
	SMSG_DEBUG("volkAss8080DotScr")
}

void volkSourceDotScr(void) {
	SMSG_DEBUG("volkSourceDotScr")
}

void volkJColon(void) {
	SMSG_DEBUG("volkJColon")
}

void volkDriveColon(void) {
	SMSG_DEBUG("volkDriveColon")
}

void volkDirQuote(void) {
	SMSG_DEBUG("volkDirQuote")
}

void volkDotBuffers(void) {
	SMSG_DEBUG("volkDotBuffers")
}

void volkZMakeView(void) {
	SMSG_DEBUG("volkZMakeView")
}

void volkForthFiles(void) {
	SMSG_DEBUG("volkForthFiles")
}

void volkDotSize(void) {
	SMSG_DEBUG("volkDotSize")
}

void volkPostlude(void) {
	SMSG_DEBUG("volkPostlude")
}

void volkRecSlashBlk(void) {
	SMSG_DEBUG("volkRecSlashBlk")
}

void volkBSlashRec(void) {
	SMSG_DEBUG("volkBSlashRec")
}

void volkNumFf(void) {
	SMSG_DEBUG("volkNumFf")
}

void volkQuoteSearch(void) {
	SMSG_DEBUG("volkQuoteSearch")
}

void volkSaveDosBuffers(void) {
	SMSG_DEBUG("volkSaveDosBuffers")
}

void volkCreateZ(void) {
	SMSG_DEBUG("volkCreateZ")
}

void volkPlusToMark(void) {
	SMSG_DEBUG("volkPlusToMark")
}

void volkIPSave(void) {
	SMSG_DEBUG("volkIPSave")
}

void volkRP(void) {
	SMSG_DEBUG("volkRP")
}

#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_PC_FORTH)
void volkPList(void) {
	SMSG_DEBUG("volkPList")
}

void volkPlusPrint(void) {
	SMSG_DEBUG("volkPlusPrint")
}

void volkGraphicsDotPrn(void) {
	SMSG_DEBUG("volkGraphicsDotPrn")
}

void volkEdit(void) {
	SMSG_DEBUG("volkEdit")
}

void volkED(void) {
	SMSG_DEBUG("volkED")
}

void volkEditorDotFb(void) {
	SMSG_DEBUG("volkEditorDotFb")
}

void volkTimes(void) {
	SMSG_DEBUG("volkTimes")
}

void volkOften(void) {
	SMSG_DEBUG("volkOften")
}

void volkTimeFetch(void) {
	SMSG_DEBUG("volkTimeFetch")
}

void volkDateFetch(void) {
	SMSG_DEBUG("volkDateFetch")
}

void volkMinutes(void) {
	SMSG_DEBUG("volkMinutes")
}

void volkSeconds(void) {
	SMSG_DEBUG("volkSeconds")
}

void volkWait(void) {
	SMSG_DEBUG("volkWait")
}

void volkTime(void) {
	SMSG_DEBUG("volkTime")
}

void volkTill(void) {
	SMSG_DEBUG("volkTill")
}

void volkTimeoutQ(void) {
	SMSG_DEBUG("volkTimeoutQ")
}

/* Ticks */
void volkTicks(void) {
	SMSG_DEBUG("volkTimeoutQ")
}

void volkTimerDotFb(void) {
	SMSG_DEBUG("volkTimerDotFb")
}

void volkTaskerDotFb(void) {
	SMSG_DEBUG("volkTaskerDotFb")
}

void volkCall(void) {
	SMSG_DEBUG("volkCall")
}

void volkMsdos(void) {
	SMSG_DEBUG("volkMsdos")
}

void volkFType(void) {
	SMSG_DEBUG("volkFType")
}

void volkFcopy(void) {
	SMSG_DEBUG("volkFcopy")
}

void volkRd(void) {
	SMSG_DEBUG("volkRd")
}

void volkCd(void) {
	SMSG_DEBUG("volkCd")
}

void volkMd(void) {
	SMSG_DEBUG("volkMd")
}

void volkRen(void) {
	SMSG_DEBUG("volkRen")
}

void volkDotPath(void) {
	SMSG_DEBUG("volkDotPath")
}

void volkEmptyFile(void) {
	SMSG_DEBUG("volkEmptyFile")
}

void volkKillfile(void) {
	SMSG_DEBUG("volkKillfile")
}

void volkQFile(void) {
	SMSG_DEBUG("volkQFile")
}

void volkUsedQ(void) {
	SMSG_DEBUG("volkUsedQ")
}

void volkDTA(void) {
	SMSG_DEBUG("volkDTA")
}

void volkFSwap(void) {
	SMSG_DEBUG("volkFSwap")
}

void volkDosDotFb(void) {
	SMSG_DEBUG("volkDosDotFb")
}

void volkZDotStatus(void) {
	SMSG_DEBUG("volkZDotStatus")
}

void volkDotSpace(void) {
	SMSG_DEBUG("volkDotSpace")
}

void volkDotScr(void) {
	SMSG_DEBUG("volkDotScr")
}

void volkDotDR(void) {
	SMSG_DEBUG("volkDotDR")
}

void volkZDotDrv(void) {
	SMSG_DEBUG("volkZDotDrv")
}

void volkDotSP(void) {
	SMSG_DEBUG("volkDotSP")
}

void volkDotBase(void) {
	SMSG_DEBUG("volkDotBase")
}

void volkScroll(void) {
	SMSG_DEBUG("volkScroll")
}

void volkBlankLine(void) {
	SMSG_DEBUG("volkBlankLine")
}

void volkBright(void) {
	SMSG_DEBUG("volkBright")
}

void volkUnderline(void) {
	SMSG_DEBUG("volkUnderline")
}

void volkInvers(void) {
	SMSG_DEBUG("volkInvers")
}

void volkNormal(void) {
	SMSG_DEBUG("volkNormal")
}

void volkSetPage(void) {
	SMSG_DEBUG("volkSetPage")
}

void volkCurShape(void) {
	SMSG_DEBUG("volkCurShape")
}

void volkCurStore(void) {
	SMSG_DEBUG("volkCurStore")
}

void volkCurAtQ(void) {
	SMSG_DEBUG("volkCurAtQ")
}

void volkFull(void) {
	SMSG_DEBUG("volkFull")
}

void volkWindow(void) {
	SMSG_DEBUG("volkWindow")
}

void volkCatt(void) {
	SMSG_DEBUG("volkCatt")
}

void volkZArea(void) {
	SMSG_DEBUG("volkZArea")
}

void volkTerminal(void) {
	SMSG_DEBUG("volkTerminal")
}

void volkAreaColon(void) {
	SMSG_DEBUG("volkAreaColon")
}

void volkStatus(void) {
	SMSG_DEBUG("volkStatus")
}

void volkArea(void) {
	SMSG_DEBUG("volkArea")
}

void volkMultiDotVid(void) {
	SMSG_DEBUG("volkMultiDotVid")
}

void volkDotIf(void) {
	SMSG_DEBUG("volkDotIf")
}

void volkDotElse(void) {
	SMSG_DEBUG("volkDotElse")
}

void volkDotThen(void) {
	SMSG_DEBUG("volkDotThen")
}

void volkQQuote(void) {
	SMSG_DEBUG("volkQQuote")
}

void volkToMonth(void) {
	SMSG_DEBUG("volkToMonth")
}

void volkAttach(void) {
	SMSG_DEBUG("volkAttach")
}

void volkAppend(void) {
	SMSG_DEBUG("volkAppend")
}

void volkRestoreVideo(void) {
	SMSG_DEBUG("volkRestoreVideo")
}

void volkSaveVideo(void) {
	SMSG_DEBUG("volkSaveVideo")
}

void volkVideoFetch(void) {
	SMSG_DEBUG("volkVideoFetch")
}

void volkCSlashDIS(void) {
	SMSG_DEBUG("volkCSlashDIS")
}

void volkLFree(void) {
	SMSG_DEBUG("volkLFree")
}

void volkLAllocate(void) {
	SMSG_DEBUG("volkLAllocate")
}

void volkAdr(void) {
	SMSG_DEBUG("volkAdr")
}

void volkUQ(void) {
	SMSG_DEBUG("volkUQ")
}

void volkTab(void) {
	SMSG_DEBUG("volkTab")
}

void volkDotField(void) {
	SMSG_DEBUG("volkDotField")
}

void volkToExpect(void) {
	SMSG_DEBUG("volkToExpect")
}

void volkStash(void) {
	SMSG_DEBUG("volkStash")
}

void volkCls(void) {
	SMSG_DEBUG("volkCls")
}

void volkTickName(void) {
	SMSG_DEBUG("volkTickName")
}

void volkSav(void) {
	SMSG_DEBUG("volkSav")
}

void volkExtendDotFb(void) {
	SMSG_DEBUG("volkExtendDotFb")
}

void volkEndCode(void) {
	SMSG_DEBUG("volkEndCode")
}

void volkASmDotFb(void) {
	SMSG_DEBUG("volkASmDotFb")
}

void volkVolks4THDotSys(void) {
	SMSG_DEBUG("volkvolks4THDotSys")
}

void volkHelp(void) {
	SMSG_DEBUG("volkHelp")
}

void volkLFSave(void) {
	SMSG_DEBUG("volkLFSave")
}

void volkHColon(void) {
	SMSG_DEBUG("volkHColon")
}

void volkGColon(void) {
	SMSG_DEBUG("volkGColon")
}

void volkFColon(void) {
	SMSG_DEBUG("volkFColon")
}

void volkEColon(void) {
	SMSG_DEBUG("volkEColon")
}

void volkDrv(void) {
	SMSG_DEBUG("volkDrv")
}

void volkPushFile(void) {
	SMSG_DEBUG("volkPushFile")
}

void volkXFCB(void) {
	SMSG_DEBUG("volkXFCB")
}

void volkKernelDotScr(void) {
	SMSG_DEBUG("volkKernelDotScr")
}

void volkAsciz(void) {
	SMSG_DEBUG("volkAsciz")
}

void volkToAsciz(void) {
	SMSG_DEBUG("volkToAsciz")
}

void volkCounted(void) {
	SMSG_DEBUG("volkCounted")
}

void volkPCStore(void) {
	SMSG_DEBUG("volkPCStore")
}

void volkPCFetch(void) {
	SMSG_DEBUG("volkPCFetch")
}

void volkListStore(void) {
	SMSG_DEBUG("volkListStore")
}

void volkCharOut(void) {
	SMSG_DEBUG("volkCharOut")
}

void volkEmptyKeys(void) {
	SMSG_DEBUG("volkEmptyKeys")
}

void volkZKeyFetch(void) {
	SMSG_DEBUG("volkZKeyFetch")
}

void volkLMove(void) {
	SMSG_DEBUG("volkLMove")
}

void volkLType(void) {
	SMSG_DEBUG("volkLType")
}

void volkLCFetch(void) {
	SMSG_DEBUG("volkLCFetch")
}

void volkReturnCode(void) {
	SMSG_DEBUG("volkReturnCode")
}

void volkTrim(void) {
	SMSG_DEBUG("volkTrim")
}

void volkQDiskError(void) {
	SMSG_DEBUG("volkQDiskError")
}

void volkErrorNum(void) {
	SMSG_DEBUG("volkErrorNum")
}

void volkVocs(void) {
	SMSG_DEBUG("volkVocs")
}

void volkLastTick(void) {
	SMSG_DEBUG("volkLastTick")
}

void volkHave(void) {
	SMSG_DEBUG("volkHave")
}

void volkZCapital(void) {
	SMSG_DEBUG("volkZCapital")
}

void volkStarLoop(void) {
	SMSG_DEBUG("volkStarLoop")
}

void volkBSlashSeg(void) {
	SMSG_DEBUG("volkBSlashSeg")
}

void volkDSFetch(void) {
	SMSG_DEBUG("volkDSFetch")
}

void volkFileLink(void) {
	SMSG_DEBUG("volkFileLink")
}

void volkAborted(void) {
	SMSG_DEBUG("volkAborted")
}

#endif

#endif
