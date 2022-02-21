#ifndef H2OVOLK1
#define H2OVOLK1

/* The "volksFORTH" ( Forth-83 ) FORTH, for C64, ATARI-ST, CP/M, PC */

/* Definitions */

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_C64_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_ST_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_CPM_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_PC_FORTH)
void volkForth83(void);
void volkBSlashBlk(void);
void volkDisplay(void);
void volkKeyboard(void);
void volkNumCr(void);
void volkNumBs(void);
void volkCurOff(void);
void volkCurOn(void);
void volkRestart(void);
void volkTickCold(void);
void volkTickRestart(void);
void volkExpect(void);
void volkDecode(void);
void volkKeyQ(void);
void volkKey(void);
void volkInputColon(void);
void volkCol(void);
void volkRow(void);
void volkAtQ(void);
void volkAt(void);
void volkPage(void);
void volkDel(void);
void volkType(void);
void volkCr(void);
void volkEmit(void);
void volkOutputColon(void);
void volkZForget(void);
void volkClear(void);
void volkCustomRemove(void);
void volkAllBuffers(void);
void volkConvey(void);
void volkCopy(void);
void volkUpdate(void);
void volkBlock(void);
void volkBuffer(void);
void volkZBlock(void);
void volkZBuffer(void);
void volkCoreQ(void);
void volkFile(void);
void volkUnlock(void);
void volkLock(void);
void volkPause(void);
void volkList(void);
void volkLSlashS(void);
void volkCSlashL(void);
void volkDotS(void);
void volkUDot(void);
void volkDot(void);
void volkDColon(void);
void volkUDotR(void);
void volkDotR(void);
void volkDDotR(void);
void volkNumS(void);
void volkNum(void);
void volkSign(void);
void volkNumGreater(void);
void volkLessNum(void);
void volkHold(void);
void volkSpaces(void);
void volkSpace(void);
void volkTrailing(void);
void volkBl(void);
void volkErrorQuote(void);
void volkAbortQuote(void);
void volkZAbortQuote(void);
void volkZError(void);
void volkQuit(void);
void volkTickQuit(void);
void volkZQuit(void);
void volkDepth(void);
void volkRDepth(void);
void volkTo(void);
void volkPlusThru(void);
void volkThru(void);
void volkPlusLoad(void);
void volkLoad(void);
void volkPush(void);
void volkDotStatus(void);
void volkQStack(void);
void volkIs(void);
void volkZIs(void);
void volkDefer(void);
void volkRightBracket(void);
void volkLeftBracket(void);
void volkInterpret(void);
void volkNoDotExtensions(void);
void volkNotFound(void);
void volkXTick(void);
void volkXCompile(void);
void volkFind(void);
void volkZFind(void);
void volkWords(void);
void volkOrder(void);
void volkDefinitions(void);
void volkOnlyForth(void);
void volkOnly(void);
void volkForth(void);
void volkVocabulary(void);
void volkToss(void);
void volkAlso(void);
void volkUAllot(void);
void volkVariable(void);
void volkConstant(void);
void volkSemicolon(void);
void volkColon(void);
void volkCreateColon(void);
void volkDotName(void);
void volkToBody(void);
void volkNameFrom(void);
void volkToName(void);
void volkNFaq(void);
void volkCreate(void);
void volkWarning(void);
void volkVerticalBar(void);
void volkQHead(void);
void volkDoes(void);
void volkHeapQ(void);
void volkHeap(void);
void volkHallot(void);
void volkClearStack(void);
void volkRestrict(void);
void volkImmediate(void);
void volkRecursive(void);
void volkReveal(void);
void volkHide(void);
void volkLast(void);
void volkNumber(void);
void volkNumberQ(void);
void volkConvert(void);
void volkAccumulate(void);
void volkDecimal(void);
void volkBackslashNeeds(void);
void volkBackslashBackslash(void);
void volkBackslash(void);
void volkDotParen(void);
void volkParen(void);
void volkDotQuote(void);
void volkParenDotQuote(void);
void volkQuote(void);
void volkParenQuote(void);
void volkQuoteLit(void);
void volkAscii(void);
void volkState(void);
void volkName(void);
void volkParse(void);
void volkWord(void);
void volkSource(void);
void volkCapital(void);
void volkSlashString(void);
void volkSkip(void);
void volkScan(void);
void volkQuery(void);
void volkTib(void);
void volkSpan(void);
void volkBlk(void);
void volkToIn(void);
void volkToTib(void);
void volkNumTib(void);
void volkCompile(void);
void volkCComma(void);
void volkComma(void);
void volkAllot(void);
void volkPad(void);
void volkHere(void);
void volkFill(void);
void volkErase(void);
void volkCount(void);
void volkPlace(void);
void volkMove(void);
void volkCMoveTo(void);
void volkCMove(void);
void volkUdSlashMod(void);
void volkUSlashMod(void);
void volkStarSlash(void);
void volkStarSlashMod(void);
void volkMod(void);
void volkSlash(void);
void volkSlashMod(void);
void volkTwoSlash(void);
void volkMSlashMod(void);
void volkUmSlashMod(void);
void volkTwoStar(void);
void volkStar(void);
void volkMStar(void);
void volkUmStar(void);
void volkLeave(void);
void volkLoop(void);
void volkQDo(void);
void volkDo(void);
void volkUntil(void);
void volkRepeat(void);
void volkWhile(void);
void volkBegin(void);
void volkElse(void);
void volkThen(void);
void volkIf(void);
void volkQPairs(void);
void volkFromResolve(void);
void volkFromMark(void);
void volkToResolve(void);
void volkToMark(void);
void volkQBranch(void);
void volkBranch(void);
void volkJ(void);
void volkI(void);
void volkZPlusLoop(void);
void volkZLoop(void);
void volkEndLoop(void);
void volkBounds(void);
void volkZQDo(void);
void volkZDo(void);
void volkAbs(void);
void volkDAbs(void);
void volkUGreater(void);
void volkZeroUnequal(void);
void volkZeroGreater(void);
void volkGreater(void);
void volkULess(void);
void volkLess(void);
void volkZeroEqual(void);
void volkLiteral(void);
void volkLit(void);
void volkOff(void);
void volkFour(void);
void volkThree(void);
void volkTwo(void);
void volkOne(void);
void volkZero(void);
void volkMinusOne(void);
void volkFalse(void);
void volkTrue(void);
void volkTwoMinus(void);
void volkOneMinus(void);
void volkThreePlus(void);
void volkTwoPlus(void);
void volkOnePlus(void);
void volkDPlus(void);
void volkDNegate(void);
void volkNegate(void);
void volkNot(void);
void volkMinus(void);
void volkXOR(void);
void volkAnd(void);
void volkOr(void);
void volkPlus(void);
void volkTwoDup(void);
void volkTwoSwap(void);
void volkRoll(void);
void volkPick(void);
void volkUnder(void);
void volkNip(void);
void volkMinusRot(void);
void volkRot(void);
void volkOver(void);
void volkQDup(void);
void volkDup(void);
void volkSwap(void);
void volkDrop(void);
void volkPlusStore(void);
void volkStore(void);
void volkFetch(void);
void volkCToggle(void);
void volkCStore(void);
void volkCFetch(void);
void volkPerform(void);
void volkExecute(void);
void volkQExit(void);
void volkUnnest(void);
void volkExit(void);
void volkRDrop(void);
void volkRFetch(void);
void volkRFrom(void);
void volkToR(void);
void volkRPStore(void);
void volkRPFetch(void);
void volkUPStore(void);
void volkUPFetch(void);
void volkSPStore(void);
void volkSPFetch(void);
void volkUdp(void);
void volkVocLink(void);
void volkErrorhandler(void);
void volkInput(void);
void volkOutput(void);
void volkBase(void);
void volkOffset(void);
void volkDP(void);
void volkR0(void);
void volkS0(void);
void volkOrigin(void);
void volkNoop(void);
void volkRecover(void);
void volkEndTrace(void);
void volkZeroLess(void);
void volkEqual(void);
void volkExtend(void);
void volkUMin(void);
void volkUMax(void);
void volkMax(void);
void volkMin(void);
void volkDLess(void);
void volkDEqual(void);
void volkCaseQ(void);
void volkDZeroEqual(void);
void volkUWithin(void);
void volkDigitQ(void);
void volkCommaQuote(void);
void volkCold(void);
void volkNullStringQ(void);
void volkDpl(void);
#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_ST_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_CPM_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_PC_FORTH)
void volkListing(void);
void volkDocument(void);
void volkPThru(void);
void volkPrint(void);
void volkPrinter(void);
void volkDump(void);
void volkTools(void);
void volkToolsDotFb(void);
void volkBye(void);
void volkView(void);
void volkL(void);
void volkV(void);
void volkDelete(void);
void volkCaps(void);
void volkCColon(void);
void volkBColon(void);
void volkAColon(void);
void volkDir(void);
void volkMore(void);
void volkFiles(void);
void volkInclude(void);
void volkLoadFrom(void);
void volkFrom(void);
void volkMakefile(void);
void volkUse(void);
void volkMake(void);
void volkAssign(void);
void volkClose(void);
void volkOpen(void);
void volkFileQ(void);
void volkCapacity(void);
void volkBSlashBlk(void);
void volkNumEsc(void);
void volkNumLf(void);
void volkQCr(void);
void volkStopQ(void);
void volkSave(void);
void volkEmpty(void);
void volkForget(void);
void volkIsFileFetch(void);
void volkZBlock(void);
void volkZBuffer(void);
void volkDDot(void);
void volkRNum(void);
void volkScr(void);
void volkAbort(void);
void volkTickAbort(void);
void volkStandardISlashO(void);
void volkZLoad(void);
void volkContext(void);
void volkCurrent(void);
void volkVp(void);
void volkAlias(void);
void volkUser(void);
void volkMakeView(void);
void volkHAlign(void);
void volkAlign(void);
void volkLoadFile(void);
void volkEven(void);
void volkOn(void);
void volkFourMinus(void);
void volkFourPlus(void);
void volkTwoStore(void);
void volkTwoFetch(void);
void volkSaveSystem(void);
void volkRemove(void);
void volkMinusRoll(void);
#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_C64_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_CPM_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_PC_FORTH)
void volkAssembler(void);
void volkBSlashBuf(void);
void volkPrev(void);
void volkTick(void);
void volkHex(void);
void volkCLit(void);
void volkTwoDrop(void);
void volkRSlashW(void);
#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_C64_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_ST_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_PC_FORTH)
void volkToDrive(void);
void volkLDump(void);
#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_C64_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_ST_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_CPM_FORTH)
void volkDrvInit(void);
void volkConStore(void);
void volkGetKey(void);
void volkFreeBuffer(void);
void volkAllotBuffer(void);
void volkFirst(void);
void volkLimit(void);
void volkBuffers(void);
void volkPlusLoop(void);
void volkEmptyBuffers(void);
void volkSaveBuffers(void);
void volkFlush(void);
#endif


#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_C64_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_ST_FORTH)
void volkIndex(void);
void volkDrvQ(void);
void volkToInterpret(void);
void volkCapitalize(void);
void volkBlkSlashDrv(void);
#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_ST_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_CPM_FORTH)
void volkPrinterDotScr(void);
void volkRelocateDotScr(void);
void volkTraceTick(void);
void volkDebug(void);
void volkDotBlk(void);
void volkStartupDotScr(void);
void volkFileIntDotScr(void);
void volkFilesQuote(void);
void volkEof(void);
void volkCurRite(void);
void volkCurLeft(void);
void volkZWord(void);
void volkUP(void);
void volkToolsDotScr(void);
void volkEditorDotScr(void);
void volkZView(void);
#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_CPM_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_PC_FORTH)
#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_C64_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_CPM_FORTH)
void volkPrintableQ(void);
void volkDiskErr(void);
void volkZDiskErr(void);
#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_C64_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_PC_FORTH)
void volkDrive(void);
#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_ST_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_PC_FORTH)
void volkBell(void);
void volkAbortZ(void);
void volkPath(void);
void volkArguments(void);
void volkTwoOver(void);
void volkLFetch(void);
void volkLStore(void);

void volkLCStore(void);
void volkNextLink(void);
#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_CPM_FORTH) || \
	(H2O_FORTH_PRIMITIVES == VOLK_PC_FORTH)
void volkRendezvous(void);
void volkTask(void);
void volkWake(void);
void volkSleep(void);
void volkActivate(void);
void volkPass(void);
void volkMultiTask(void);
void volkSingleTask(void);
void volkStop(void);
void volkFix(void);
void volkNumDel(void);
void volkCtrl(void);
void volkUpdatedQ(void);
void volkEditor(void);
void volkBlank(void);
void volkZKey(void);
void volkZExpect(void);
void volkZDecode(void);
void volkZDel(void);
void volkZCr(void);
void volkZEmit(void);
void volkZType(void);
void volkZPage(void);
void volkZAtQ(void);
void volkZAt(void);
void volkCSlashCol(void);
void volkCSlashRow(void);
void volkLabel(void);
void volkToLabel(void);
void volkSemicolonCode(void);
void volkCode(void);
void volkSaveFile(void);
void volkDirect(void);
void volkZRSlashW(void);
void volkNumBel(void);
void volkNumTab(void);
void volkDos(void);
void volkEmptyBuf(void);
void volkZCoreQ(void);
void volkFromFile(void);
void volkIsFile(void);
void volkPrompt(void);
void volkZPrompt(void);
void volkParser(void);
void volkRoot(void);
void volkBodyFrom(void);
void volkZNameFrom(void);
void volkZSemicolonCode(void);
void volkUpper(void);
void volkFlip(void);
void volkZeroEqualExit(void);
void volkZKeyQ(void);
void volkTipp(void);
#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
   (H2O_FORTH_PRIMITIVES == VOLK_C64_FORTH)
void volkZ64(void);
void volkCZ(void);
void volkZ16(void);
void volkC64Init(void);
void volkInitSystem(void);
void volkInkPot(void);
void volkFIndex(void);
void volkCBM1541RSlashW(void);
void volkDiskClose(void);
void volkDiskOpen(void);
void volkWriteSector(void);
void volkReadSector(void);
void volkDErrorQ(void);
void volkBusInput(void);
void volkBusFetch(void);
void volkBusType(void);
void volkBusStore(void);
void volkBusIn(void);
void volkZBusIn(void);
void volkBusClose(void);
void volkBusOpen(void);
void volkBusOff(void);
void volkISlashO(void);
void volkZDrv(void);
void volkC64Type(void);
void volkC64AtQ(void);
void volkC64At(void);
void volkC64Page(void);
void volkC64Del(void);
void volkC64Cr(void);
void volkC64Emit(void);
void volkC64Expect(void);
void volkC64Decode(void);
void volkC64Key(void);
void volkC64KeyQ(void);
void volkBlkMove(void);
void volkZCopy(void);
void volkTickNumberQ(void);
void volkPrevious(void);
void volkChar(void);
void volkEndQ(void);
void volkDotQuote(void);
void VolkBasOn(void);
void volkLogo(void);
#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == volk_ST_FORTH)
void volkPrintALL(void);
void volkRelocate(void);
void volkIndexDotScr(void);
void volkTickEditFile(void);
void volkTickRNum(void);
void volkTickScr(void);
void volkEdWindowDotScr(void);
void volkGemBackslashVdiDotScr(void);
void volkGemBackslashSuperGemDotScr(void);
void volkEdiConDotScr(void);
void volkGem(void);
void volkGemBackslashBsicDotScr(void);
void volkGemBackslashAesDotScr(void);
void volkMFree(void);
void volkMalloc(void);
void volkAllocateDotScr(void);
void volkZeroQuote(void);
void volkCommaZeroQuote(void);
void volkZeroGreaterCQuote(void);
void volkCGreaterZeroQuote(void);
void volkDollarAdd(void);
void volkDollarSum(void);
void volkSearch(void);
void volkCompareText(void);
void volkringsDotScr(void);
void volkAssembleDotScr(void);
void volkBlak(void);
void volkCPush(void);
void volkAbsAddr(void);
void volkDiversesDotScr(void);
void volkForth83DotScr(void);
void volkRemoveQ(void);
void volkMakeDir(void); /* = volkMd */
void volkZMore(void);
void volkDirekt(void);
void volkSTRSlashW(void);
void volkRWAbs(void);
void volkDrv1(void);
void volkDrv0(void);
void volkBlkSlashDrv(void);
void volkZBlkSlashDrv(void);
void volkStType(void);
void volkStAtQ(void);
void volkStAt(void);
void volkStPage(void);
void volkStDel(void);
void volkStCR(void);
void volkStEmit(void);
void volkStExpect(void);
void volkStDecode(void);
void volkStKey(void);
void volkStKeyQ(void);
void volkWrap(void);
void volkBConOut(void);
void volkBConIn(void);
void volkBcoStat(void);
void volkBconStat(void);
void volkTwoVariable(void);
void volkTwoConstant(void);
void volkBlkFetch(void);
void volkDStar(void);
void volkDMinus(void);
void volkQuoteDrop(void);
void volkLNPlusStore(void);
void volkL2Store(void);
void volkL2Fetch(void);
void volkLCMove(void);
void volkForthStart(void);
#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_CPM_FORTH)
void volkSpool(void);
void volkSpooler(void);
void volkShadow(void);
void volkTasks(void);
void volkTickS(void); /* "'S" => Capital "S" */
void volkTaskerDotScr(void);
void volkSee(void);
void volkSeeDotScr(void);
void volkExternal(void);
void volkInternal(void);
void volkQAbortZ(void);
void volkQEnough(void);
void volkReplace(void);
void volkInsert(void);
void volkSaveSysDotScr(void);
void volkCopyDotScr(void);
void volkAnsi(void);
void volkTerminalDotScr(void);
void volkDumb(void);
void volkLocate(void);
void volkDark(void);
void volkRvsOff(void);
void volkRvsOn(void);
void volkTerminalColon(void);
void volkTermColon(void);
void volkXinOutDotScr(void);
void volkAss8080DotScr(void);
void volkSourceDotScr(void);
void volkJColon(void);
void volkDriveColon(void);
void volkDirQuote(void);
void volkDotBuffers(void);
void volkZMakeView(void);
void volkForthFiles(void);
void volkDotSize(void);
void volkPostlude(void);
void volkRecSlashBlk(void);
void volkBSlashRec(void);
void volkNumFf(void);
void volkQuoteSearch(void);
void volkSaveDosBuffers(void);
void volkCreateZ(void);
void volkPlusToMark(void);
void volkIPSave(void);
void volkRP(void);
#endif

#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_PC_FORTH)
void volkPList(void);
void volkPlusPrint(void);
void volkGraphicsDotPrn(void);
void volkEdit(void);
void volkED(void);
void volkEditorDotFb(void);
void volkTimes(void);
void volkOften(void);
void volkTimeFetch(void);
void volkDateFetch(void);
void volkMinutes(void);
void volkSeconds(void);
void volkWait(void);
void volkTime(void);
void volkTill(void);
void volkTimeoutQ(void);
void volkTicks(void); /* Ticks */
void volkTimerDotFb(void);
void volkTaskerDotFb(void);
void volkCall(void);
void volkMsdos(void);
void volkFType(void);
void volkFcopy(void);
void volkRd(void);
void volkCd(void);
void volkMd(void);
void volkRen(void);
void volkDotPath(void);
void volkEmptyFile(void);
void volkKillfile(void);
void volkQFile(void);
void volkUsedQ(void);
void volkDTA(void);
void volkFSwap(void);
void volkDosDotFb(void);
void volkZDotStatus(void);
void volkDotSpace(void);
void volkDotScr(void);
void volkDotDR(void);
void volkZDotDrv(void);
void volkDotSP(void);
void volkDotBase(void);
void volkScroll(void);
void volkBlankLine(void);
void volkBright(void);
void volkUnderline(void);
void volkInvers(void);
void volkNormal(void);
void volkSetPage(void);
void volkCurShape(void);
void volkCurStore(void);
void volkCurAtQ(void);
void volkFull(void);
void volkWindow(void);
void volkCatt(void);
void volkZArea(void);
void volkTerminal(void);
void volkAreaColon(void);
void volkStatus(void);
void volkArea(void);
void volkMultiDotVid(void);
void volkDotIf(void);
void volkDotElse(void);
void volkDotThen(void);
void volkQQuote(void);
void volkToMonth(void);
void volkAttach(void);
void volkAppend(void);
void volkRestoreVideo(void);
void volkSaveVideo(void);
void volkVideoFetch(void);
void volkCSlashDIS(void);
void volkLFree(void);
void volkLAllocate(void);
void volkAdr(void);
void volkUQ(void);
void volkTab(void);
void volkDotField(void);
void volkToExpect(void);
void volkStash(void);
void volkCls(void);
void volkTickName(void);
void volkSav(void);
void volkExtendDotFb(void);
void volkEndCode(void);
void volkASmDotFb(void);
void volkVolks4THDotSys(void);
void volkHelp(void);
void volkLFSave(void);
void volkHColon(void);
void volkGColon(void);
void volkFColon(void);
void volkEColon(void);
void volkDrv(void);
void volkPushFile(void);
void volkXFCB(void);
void volkKernelDotScr(void);
void volkAsciz(void);
void volkToAsciz(void);
void volkCounted(void);
void volkPCStore(void);
void volkPCFetch(void);
void volkListStore(void);
void volkCharOut(void);
void volkEmptyKeys(void);
void volkZKeyFetch(void);
void volkLMove(void);
void volkLType(void);
void volkLCFetch(void);
void volkReturnCode(void);
void volkTrim(void);
void volkQDiskError(void);
void volkErrorNum(void);
void volkVocs(void);
void volkLastTick(void);
void volkHave(void);
void volkZCapital(void);
void volkStarLoop(void);
void volkBSlashSeg(void);
void volkDSFetch(void);
void volkFileLink(void);
void volkAborted(void);
#endif

typedef void (*forthOperation)(void);

typedef  struct _forthWord {
	const char* forthWordName;
	const char* forthAlternativeName;
	const int interpreted;
	const int immediate;
	const short int implemented;
	const unsigned long forthWordNumber;
	const forthOperation  forthOpt; // function pointer 
} typedef_forthWord;

/* Variables */
/* Words which start or end with a left parentheses "(word" are internal words,
   which are named with other FORTH implementations with surrounding parentheses "(word)" */

#if H2O_FORTH_PRIMITIVES == VOLK_C64_FORTH
static const PROGMEM typedef_forthWord forthWords[] = { /* C64 */
			{ "ASSEMBLER", "ASSEMBLER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAssembler },
			{ "FORTH-83", "FORTH-83", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkForth83 },
			{ "(64", "(64", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZ64 },
			{ "C)", "C)", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCZ },
			{ "(16", "(16", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZ16 },
			{ "C64INIT", "C64INIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkC64Init },
			{ "INIT-SYSTEM", "INIT-SYSTEM", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkInitSystem },
			{ "INK-POT", "INK-POT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkInkPot },
			{ "FINDEX", "FINDEX", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFIndex },
			{ "INDEX", "INDEX", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkIndex },
			{ "1541R/W", "1541R/W", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCBM1541RSlashW },
			{ "DISKCLOSE", "DISKCLOSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDiskClose },
			{ "DISKOPEN", "DISKOPEN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDiskOpen },
			{ "WRITESECTOR", "WRITESECTOR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkWriteSector },
			{ "READSECTOR", "READSECTOR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkReadSector },
			{ "DERROR?", "DERROR?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDErrorQ },
			{ "BUSINPUT", "BUSINPUT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBusInput },
			{ "BUS@", "BUS@", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBusFetch },
			{ "BUSTYPE", "BUSTYPE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBusType },
			{ "BUS!", "BUS!", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBusStore },
			{ "BUSIN", "BUSIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBusIn },
			{ "(BUSIN", "(BUSIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZBusIn },
			{ "BUSCLOSE", "BUSCLOSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBusClose },
			{ "BUSOPEN", "BUSOPEN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBusOpen },
			{ "BUSOFF", "BUSOFF", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBusOff },
			{ "I/O", "I/O", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkISlashO },
			{ "DRVINIT", "DRVINIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDrvInit },
			{ "DRV?", "DRV?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDrvQ },
			{ ">DRIVE", ">DRIVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkToDrive },
			{ "DRIVE", "DRIVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDrive },
			{ "(DRV", "(DRV", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZDrv },
			{ "BLK/DRV", "BLK/DRV", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBlkSlashDrv },
			{ "B/BLK", "B/BLK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBSlashBlk },
			{ "DISPLAY", "DISPLAY", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDisplay },
			{ "C64TYPE", "C64TYPE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkC64Type },
			{ "C64AT?", "C64AT?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkC64AtQ },
			{ "C64AT", "C64AT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkC64At },
			{ "C64PAGE", "C64PAGE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkC64Page },
			{ "C64DEL", "C64DEL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkC64Del },
			{ "C64CR", "C64CR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkC64Cr },
			{ "C64EMIT", "C64EMIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkC64Emit },
			{ "PRINTABLE?", "PRINTABLE?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPrintableQ },
			{ "CON!", "CON!", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkConStore },
			{ "KEYBOARD", "KEYBOARD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkKeyboard },
			{ "C64EXPECT", "C64EXPECT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkC64Expect },
			{ "C64DECODE", "C64DECODE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkC64Decode },
			{ "#CR", "#CR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNumCr },
			{ "#BS", "#BS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNumBs },
			{ "C64KEY", "C64KEY", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkC64Key },
			{ "CUROFF", "CUROFF", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCurOff },
			{ "CURON", "CURON", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCurOn },
			{ "GETKEY", "GETKEY", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkGetKey },
			{ "C64KEY?", "C64KEY?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkC64KeyQ },
			{ "RESTART", "RESTART", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRestart },
			{ "COLD", "COLD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCold },
			{ "'RESTART", "'RESTART", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTickRestart },
			{ "'COLD", "'COLD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTickCold },
			{ "EXPECT", "EXPECT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkExpect },
			{ "DECODE", "DECODE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDecode },
			{ "KEY?", "KEY?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkKeyQ },
			{ "KEY", "KEY", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkKey },
			{ "INPUT:", "INPUT:", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkInputColon },
			{ "COL", "COL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCol },
			{ "ROW", "ROW", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRow },
			{ "AT?", "AT?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAtQ },
			{ "AT", "AT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAt },
			{ "PAGE", "PAGE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPage },
			{ "DEL", "DEL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDel },
			{ "TYPE", "TYPE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkType },
			{ "CR", "CR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCr },
			{ "EMIT", "EMIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkEmit },
			{ "OUTPUT:", "OUTPUT:", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOutputColon },
			{ "(FORGET", "(FORGET", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZForget },
			{ "CLEAR", "CLEAR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkClear },
			{ "CUSTOM-REMOVE", "CUSTOM-REMOVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCustomRemove },
			{ "ALL-BUFFERS", "ALL-BUFFERS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAllBuffers },
			{ "FREEBUFFER", "FREEBUFFER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFreeBuffer },
			{ "ALLOTBUFFER", "ALLOTBUFFER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAllotBuffer },
			{ "FIRST", "FIRST", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFirst },
			{ "LIMIT", "LIMIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLimit },
			{ "CONVEY", "CONVEY", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkConvey },
			{ "COPY", "COPY", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCopy },
			{ "BLKMOVE", "BLKMOVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBlkMove },
			{ "(COPY", "(COPY", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZCopy },
			{ "FLUSH", "FLUSH", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFlush },
			{ "EMPTY-BUFFERS", "EMPTY-BUFFERS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkEmptyBuffers },
			{ "SAVE-BUFFERS", "SAVE-BUFFERS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSaveBuffers },
			{ "UPDATE", "UPDATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUpdate },
			{ "BLOCK", "BLOCK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBlock },
			{ "BUFFER", "BUFFER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBuffer },
			{ "(BLOCK", "(BLOCK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZBlock },
			{ "(BUFFER", "(BUFFER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZBuffer },
			{ "CORE?", "CORE?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCoreQ },
			{ "R/W", "R/W", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRSlashW },
			{ "DISKERR", "DISKERR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDiskErr },
			{ "(DISKERR", "(DISKERR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZDiskErr },
			{ "B/BUF", "B/BUF", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBSlashBuf },
			{ "BUFFERS", "BUFFERS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBuffers },
			{ "PREV", "PREV", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPrev },
			{ "FILE", "FILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFile },
			{ "UNLOCK", "UNLOCK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUnlock },
			{ "LOCK", "LOCK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLock },
			{ "PAUSE", "PAUSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPause },
			{ "LIST", "LIST", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkList },
			{ "L/S", "L/S", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLSlashS },
			{ "C/L", "C/L", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCSlashL },
			{ ".S", ".S", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDotS },
			{ "U.", "U.", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUDot },
			{ ".", ".", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDot },
			{ "D:", "D:", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDColon },
			{ "U.R", "U.R", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUDotR },
			{ ".R", ".R", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDotR },
			{ "D.R", "D.R", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDDotR },
			{ "#S", "#S", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNumS },
			{ "#", "#", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNum },
			{ "SIGN", "SIGN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSign },
			{ "#>", "#>", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNumGreater },
			{ "<#", "<#", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLessNum },
			{ "HOLD", "HOLD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkHold },
			{ "SPACES", "SPACES", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSpaces },
			{ "SPACE", "SPACE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSpace },
			{ "-TRAILING", "-TRAILING", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTrailing },
			{ "BL", "BL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBl },
			{ "ERROR\"", "ERROR\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkErrorQuote },
			{ "ABORT\"", "ABORT\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAbortQuote },
			{ "(ABORT\"", "(ABORT\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZAbortQuote },
			{ "(ERROR", "(ERROR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZError },
			{ "QUIT", "QUIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkQuit },
			{ "'QUIT", "'QUIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTickQuit },
			{ "(QUIT", "(QUIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZQuit },
			{ "DEPTH", "DEPTH", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDepth },
			{ "RDEPTH", "RDEPTH", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRDepth },
			{ "-->", "-->", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTo },
			{ "+THRU", "+THRU", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPlusThru },
			{ "THRU", "THRU", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkThru },
			{ "+LOAD", "+LOAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPlusLoad },
			{ "LOAD", "LOAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLoad },
			{ "PUSH", "PUSH", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPush },
			{ ".STATUS", ".STATUS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDotStatus },
			{ "?STACK", "?STACK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkQStack },
			{ "IS", "IS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkIs },
			{ "(IS", "(IS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZIs },
			{ "DEFER", "DEFER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDefer },
			{ "]", "]", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRightBracket },
			{ "[", "[", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLeftBracket },
			{ "INTERPRET", "INTERPRET", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkInterpret },
			{ "NO.EXTENSIONS", "NO.EXTENSIONS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNoDotExtensions },
			{ "NOTFOUND", "NOTFOUND", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNotFound },
			{ ">INTERPRET", ">INTERPRET", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkToInterpret },
			{ "NULLSTRING?", "NULLSTRING?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNullStringQ },
			{ "[']", "[']", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkXTick },
			{ "[COMPILE]", "[COMPILE]", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkXCompile },
			{ "'", "'", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTick },
			{ "FIND", "FIND", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFind },
			{ "(FIND", "(FIND", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZFind },
			{ "WORDS", "WORDS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkWords },
			{ "ORDER", "ORDER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOrder },
			{ "DEFINITIONS", "DEFINITIONS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDefinitions },
			{ "ONLYFORTH", "ONLYFORTH", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOnlyForth },
			{ "ONLY", "ONLY", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOnly },
			{ "FORTH", "FORTH", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkForth },
			{ "VOCABULARY", "VOCABULARY", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkVocabulary },
			{ "TOSS", "TOSS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkToss },
			{ "ALSO", "ALSO", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAlso },
			{ "UALLOT", "UALLOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUAllot },
			{ "VARIABLE", "VARIABLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkVariable },
			{ "CONSTANT", "CONSTANT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkConstant },
			{ ";", ";", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSemicolon },
			{ ":", ":", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkColon },
			{ "CREATE:", "CREATE:", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCreateColon },
			{ ".NAME", ".NAME", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDotName },
			{ ">BODY", ">BODY", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkToBody },
			{ "NAME>", "NAME>", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNameFrom },
			{ ">NAME", ">NAME", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkToName },
			{ "NFA?", "NFA?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNFaq },
			{ "CREATE", "CREATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCreate },
			{ "WARNING", "WARNING", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkWarning },
			{ "|", "|", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkVerticalBar },
			{ "?HEAD", "?HEAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkQHead },
			{ "DOES>", "DOES>", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDoes },
			{ "HEAP?", "HEAP?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkHeapQ },
			{ "HEAP", "HEAP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkHeap },
			{ "HALLOT", "HALLOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkHallot },
			{ "CLEARSTACK", "CLEARSTACK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkClearStack },
			{ "RESTRICT", "RESTRICT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRestrict },
			{ "IMMEDIATE", "IMMEDIATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkImmediate },
			{ "RECURSIVE", "RECURSIVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRecursive },
			{ "REVEAL", "REVEAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkReveal },
			{ "HIDE", "HIDE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkHide },
			{ "LAST", "LAST", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLast },
			{ "NUMBER", "NUMBER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNumber },
			{ "'NUMBER?", "'NUMBER?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTickNumberQ },
			{ "NUMBER?", "NUMBER?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNumberQ },
			{ "DPL", "DPL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDpl },
			{ "PREVIOUS", "PREVIOUS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPrevious },
			{ "CHAR", "CHAR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkChar },
			{ "END?", "END?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkEndQ },
			{ "CONVERT", "CONVERT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkConvert },
			{ "ACCUMULATE", "ACCUMULATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAccumulate },
			{ "DIGIT?", "DIGIT?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDigitQ },
			{ "DECIMAL", "DECIMAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDecimal },
			{ "HEX", "HEX", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkHex },
			{ "\\NEEDS", "\\NEEDS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBackslashNeeds },
			{ "\\\\", "\\\\", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBackslashBackslash },
			{ "\\", "\\", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBackslash },
			{ ".(", ".(", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDotParen },
			{ "(", "(", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkParen },
			{ ".\"", ".\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDotQuote },
			{ "(.\"", "(.\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkParenDotQuote },
			{ "\"", "\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkQuote },
			{ "(\"", "(\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkParenQuote },
			{ "\"LIT", "\"LIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkQuoteLit },
			{ ".\"", ".\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDotQuote },
			{ "ASCII", "ASCII", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAscii },
			{ "STATE", "STATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkState },
			{ "NAME", "NAME", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkName },
			{ "PARSE", "PARSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkParse },
			{ "WORD", "WORD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkWord },
			{ "SOURCE", "SOURCE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSource },
			{ "CAPITALIZE", "CAPITALIZE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCapitalize },
			{ "CAPITAL", "CAPITAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCapital },
			{ "/STRING", "/STRING", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSlashString },
			{ "SKIP", "SKIP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSkip },
			{ "SCAN", "SCAN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkScan },
			{ "QUERY", "QUERY", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkQuery },
			{ "TIB", "TIB", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTib },
			{ "SPAN", "SPAN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSpan },
			{ "BLK", "BLK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBlk },
			{ ">IN", ">IN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkToIn },
			{ ">TIB", ">TIB", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkToTib },
			{ "#TIB", "#TIB", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNumTib },
			{ "COMPILE", "COMPILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCompile },
			{ "C,", "C,", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCComma },
			{ ",", ",", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkComma },
			{ "ALLOT", "ALLOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAllot },
			{ "PAD", "PAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPad },
			{ "HERE", "HERE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkHere },
			{ "FILL", "FILL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFill },
			{ "ERASE", "ERASE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkErase },
			{ "COUNT", "COUNT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCount },
			{ "PLACE", "PLACE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPlace },
			{ "MOVE", "MOVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMove },
			{ "CMOVE>", "CMOVE>", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCMoveTo },
			{ "CMOVE", "CMOVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCMove },
			{ "UD/MOD", "UD/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUdSlashMod },
			{ "U/MOD", "U/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUSlashMod },
			{ "*/", "*/", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkStarSlash },
			{ "*/MOD", "*/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkStarSlashMod },
			{ "MOD", "MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMod },
			{ "/", "/", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSlash },
			{ "/MOD", "/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSlashMod },
			{ "2/", "2/", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTwoSlash },
			{ "M/MOD", "M/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMSlashMod },
			{ "UM/MOD", "UM/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUmSlashMod },
			{ "2*", "2*", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTwoStar },
			{ "*", "*", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkStar },
			{ "M*", "M*", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMStar },
			{ "UM*", "UM*", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUmStar },
			{ "LEAVE", "LEAVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLeave },
			{ "+LOOP", "+LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPlusLoop },
			{ "LOOP", "LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLoop },
			{ "?DO", "?DO", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkQDo },
			{ "DO", "DO", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDo },
			{ "UNTIL", "UNTIL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUntil },
			{ "REPEAT", "REPEAT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRepeat },
			{ "WHILE", "WHILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkWhile },
			{ "BEGIN", "BEGIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBegin },
			{ "ELSE", "ELSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkElse },
			{ "THEN", "THEN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkThen },
			{ "IF", "IF", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkIf },
			{ "CASE?", "CASE?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCaseQ },
			{ "?PAIRS", "?PAIRS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkQPairs },
			{ "<RESOLVE", "<RESOLVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFromResolve },
			{ "<MARK", "<MARK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFromMark },
			{ ">RESOLVE", ">RESOLVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkToResolve },
			{ ">MARK", ">MARK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkToMark },
			{ "?BRANCH", "?BRANCH", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkQBranch },
			{ "BRANCH", "BRANCH", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBranch },
			{ "J", "J", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkJ },
			{ "I", "I", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkI },
			{ "(+LOOP", "(+LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZPlusLoop },
			{ "(LOOP", "(LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZLoop },
			{ "ENDLOOP", "ENDLOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkEndLoop },
			{ "BOUNDS", "BOUNDS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBounds },
			{ "(?DO", "(?DO", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZQDo },
			{ "(DO", "(DO", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZDo },
			{ "ABS", "ABS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAbs },
			{ "DABS", "DABS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDAbs },
			{ "EXTEND", "EXTEND", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkExtend },
			{ "UMIN", "UMIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUMin },
			{ "UMAX", "UMAX", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUMax },
			{ "MAX", "MAX", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMax },
			{ "MIN", "MIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMin },
			{ "D<", "D<", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDLess },
			{ "D=", "D=", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDEqual },
			{ "D0=", "D0=", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDZeroEqual },
			{ "=", "=", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkEqual },
			{ "U>", "U>", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUGreater },
			{ "0<>", "0<>", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZeroUnequal },
			{ "0>", "0>", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZeroGreater },
			{ ">", ">", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkGreater },
			{ "U<", "U<", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkULess },
			{ "<", "<", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLess },
			{ "UWITHIN", "UWITHIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUWithin },
			{ "0=", "0=", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZeroEqual },
			{ "0<", "0<", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZeroLess },
			{ "LITERAL", "LITERAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLiteral },
			{ "LIT", "LIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLit },
			{ "CLIT", "CLIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCLit },
			{ "OFF", "OFF", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOff },
			{ "ON", "ON", TRUE, FALSE, FALSE, 0UL, (forthOperation)VolkBasOn },
			{ "4", "4", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFour },
			{ "3", "3", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkThree },
			{ "2", "2", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTwo },
			{ "1", "1", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOne },
			{ "0", "0", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZero },
			{ "-1", "-1", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMinusOne },
			{ "FALSE", "FALSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFalse },
			{ "TRUE", "TRUE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTrue },
			{ "2-", "2-", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTwoMinus },
			{ "1-", "1-", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOneMinus },
			{ "3+", "3+", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkThreePlus },
			{ "2+", "2+", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTwoPlus },
			{ "1+", "1+", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOnePlus },
			{ "D+", "D+", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDPlus },
			{ "DENEGATE", "DENEGATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDNegate },
			{ "NEGATE", "NEGATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNegate },
			{ "NOT", "NOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNot },
			{ "-", "-", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMinus },
			{ "XOR", "XOR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkXOR },
			{ "AND", "AND", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAnd },
			{ "OR", "OR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOr },
			{ "+", "+", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPlus },
			{ "2DUP", "2DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTwoDup },
			{ "2DROP", "2DROP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTwoDrop },
			{ "2SWAP", "2SWAP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTwoSwap },
			{ "ROLL", "ROLL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRoll },
			{ "PICK", "PICK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPick },
			{ "UNDER", "UNDER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUnder },
			{ "NIP", "NIP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNip },
			{ "-ROT", "-ROT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMinusRot },
			{ "ROT", "ROT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRot },
			{ "OVER", "OVER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOver },
			{ "?DUP", "?DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkQDup },
			{ "DUP", "DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDup },
			{ "SWAP", "SWAP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSwap },
			{ "DROP", "DROP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDrop },
			{ "+!", "+!", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPlusStore },
			{ "!", "!", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkStore },
			{ "@", "@", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFetch },
			{ "CTOGGLE", "CTOGGLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCToggle },
			{ "C!", "C!", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCStore },
			{ "C@", "C@", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCFetch },
			{ "PERFORM", "PERFORM", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPerform },
			{ "EXECUTE", "EXECUTE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkExecute },
			{ "?EXIT", "?EXIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkQExit },
			{ "UNNEST", "UNNEST", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUnnest },
			{ "EXIT", "EXIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkExit },
			{ "RDROP", "RDROP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRDrop },
			{ "R@", "R@", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRFetch },
			{ "R>", "R>", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRFrom },
			{ ">R", ">R", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkToR },
			{ "RP!", "RP!", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRPStore },
			{ "RP@", "RP@", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRPFetch },
			{ "UP!", "UP!", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUPStore },
			{ "UP@", "UP@", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUPFetch },
			{ "SP!", "SP!", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSPStore },
			{ "SP@", "SP@", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSPFetch },
			{ "UDP", "UDP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUdp },
			{ "VOC-LINK", "VOC-LINK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkVocLink },
			{ "ERRORHANDLER", "ERRORHANDLER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkErrorhandler },
			{ "INPUT", "INPUT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkInput },
			{ "OUTPUT", "OUTPUT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOutput },
			{ "BASE", "BASE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBase },
			{ "OFFSET", "OFFSET", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOffset },
			{ "DP", "DP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDP },
			{ "R0", "R0", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkR0 },
			{ "S0", "S0", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkS0 },
			{ "ORIGIN", "ORIGIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOrigin },
			{ "NOOP", "NOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNoop },
			{ "RECOVER", "RECOVER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRecover },
			{ "END-TRACE", "END-TRACE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkEndTrace },
			{ "LOGO", "LOGO", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLogo }
};
#endif
#if H2O_FORTH_PRIMITIVES == volk_ST_FORTH
static const typedef_forthWord forthWords[] = { /* ATARI-ST */
			{ "LISTING", "LISTING", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkListing },
			{ "DOCUMENT", "DOCUMENT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDocument },
			{ "PRINTALL", "PRINTALL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPrintALL },
			{ "PTHRU", "PTHRU", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPThru },
			{ "PRINT", "PRINT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPrint },
			{ "PRINTER", "PRINTER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPrinter },
			{ "PRINTER.SCR", "PRINTER.SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPrinterDotScr },
			{ "BUFFERS", "BUFFERS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBuffers },
			{ "RELOCATE", "RELOCATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRelocate },
			{ "RELOCATE.SCR", "RELOCATE.SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRelocateDotScr },
			{ "TRACE'", "TRACE'", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTraceTick },
			{ "DEBUG", "DEBUG", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDebug },
			{ "DUMP", "DUMP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDump },
			{ "LDUMP", "LDUMP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLDump },
			{ "TOOLS", "TOOLS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTools },
			{ "TOOLS.SCR", "TOOLS.SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkToolsDotScr },
			{ "INDEX", "INDEX", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkIndex },
			{ "INDEX.SCR", "INDEX.SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkIndexDotScr },
			{ "SAVESYSTEM", "SAVESYSTEM", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSaveSystem },
			{ "BYE", "BYE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBye },
			{ "VIEW", "VIEW", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkView },
			{ "L", "L", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkL },
			{ "V", "V", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkV },
			{ "'EDITFILE", "'EDITFILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTickEditFile },
			{ "'R#", "'R#", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTickRNum },
			{ "'SCR", "'SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTickScr },
			{ "EDWINDOW.SCR", "EDWINDOW.SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkEdWindowDotScr },
			{ "GEM\\VDI.SCR", "GEM\\VDI.SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkGemBackslashVdiDotScr },
			{ "GEM\\SUPERGEM.SCR", "GEM\\SUPERGEM.SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkGemBackslashSuperGemDotScr },
			{ "EDIICON.SCR", "EDIICON.SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkEdiConDotScr },
			{ "EDITOR.SCR", "EDITOR.SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkEditorDotScr },
			{ "GEM", "GEM", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkGem },
			{ "GEM\\BSIC.SCR", "GEM\\BSIC.SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkGemBackslashBsicDotScr },
			{ "GEM\\AES.SCR", "GEM\\AES.SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkGemBackslashAesDotScr },
			{ "MFREE", "MFREE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMFree },
			{ "MALLOC", "MALLOC", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMalloc },
			{ "ALLOCATE.SCR", "ALLOCATE.SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAllocateDotScr },
			{ "0\"", "0\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZeroQuote },
			{ ",0\"", ",0\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCommaZeroQuote },
			{ "0>C\"", "0>C\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZeroGreaterCQuote },
			{ "C>0\"", "C>0\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCGreaterZeroQuote },
			{ "$ADD", "$ADD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDollarAdd },
			{ "$SUM", "$SUM", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDollarSum },
			{ "INSERT", "INSERT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkInsert },
			{ "DELETE", "DELETE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDelete },
			{ "SEARCH", "SEARCH", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSearch },
			{ "COMPARE-TEXT", "COMPARE-TEXT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCompareText },
			{ "CAPS", "CAPS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCaps },
			{ "STRINGS.SCR", "STRINGS.SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkringsDotScr },
			{ "ASSEMBLE.SCR", "ASSEMBLE.SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAssembleDotScr },
			{ "BLAK", "BLAK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBlak },
			{ "BELL", "BELL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBell },
			{ "CPUSH", "CPUSH", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCPush },
			{ "ABORT(", "ABORT(", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAbortZ },
			{ ".BLK", ".BLK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDotBlk },
			{ ">ABSADDR", ">ABSADDR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAbsAddr },
			{ "DIVERSES.SCR", "DIVERSES.SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDiversesDotScr },
			{ "STARTUP.SCR", "STARTUP.SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkStartupDotScr },
			{ "FILEINT.SCR", "FILEINT.SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFileIntDotScr },
			{ "FORTH_83.SCR", "FORTH_83.SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkForth83DotScr },
			{ "CONVEY", "CONVEY", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkConvey },
			{ "REMOVE?", "REMOVE?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRemoveQ },
			{ "(VIEW", "(VIEW", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZView },
			{ "D:", "D:", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDColon },
			{ "C:", "C:", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCColon },
			{ "B:", "B:", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBColon },
			{ "A:", "A:", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAColon },
			{ "DIR", "DIR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDir },
			{ "MAKEDIR", "MAKEDIR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMakeDir },
			{ "MORE", "MORE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMore },
			{ "(MORE", "(MORE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZMore },
			{ "FILES\"", "FILES\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFilesQuote },
			{ "FILES", "FILES", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFiles },
			{ "EOF", "EOF", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkEOF },
			{ "INCLUDE", "INCLUDE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkInclude },
			{ "LOADFROM", "LOADFROM", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLoadFrom },
			{ "FROM", "FROM", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFrom },
			{ "MAKEFILE", "MAKEFILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMakefile },
			{ "USE", "USE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUse },
			{ "MAKE", "MAKE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMake },
			{ "ASSIGN", "ASSIGN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAssign },
			{ "CLOSE", "CLOSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkClose },
			{ "OPEN", "OPEN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOpen },
			{ "PATH", "PATH", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPath },
			{ "LIST", "LIST", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkList },
			{ "FILE?", "FILE?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFileQ },
			{ "FLUSH", "FLUSH", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFlush },
			{ "DIRECT", "DIRECT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDirekt },
			{ "FILE", "FILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFile },
			{ "CAPACITY", "CAPACITY", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCapacity },
			{ "DOS", "DOS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDos },
			{ "SAVESYSTEM", "SAVESYSTEM", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSaveSystem },
			{ "ARGUMENTS", "ARGUMENTS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkArguments },
			{ "FORTH-83", "FORTH-83", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkForth83 },
			{ "STR/W", "STR/W", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSTRSlashW },
			{ "RWABS", "RWABS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRWAbs },
			{ "DRV1", "DRV1", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDrv1 },
			{ "DRV0", "DRV0", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDrv0 },
			{ "DRVINIT", "DRVINIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDrvInit },
			{ "DRV?", "DRV?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDrvQ },
			{ ">DRIVE", ">DRIVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkToDrive },
			{ "BLK/DRV", "BLK/DRV", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBlkSlashDrv },
			{ "(BLK/DRV", "(BLK/DRV", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZBlkSlashDrv },
			{ "B/BLK", "B/BLK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBSlashBlk },
			{ "DISPLAY", "DISPLAY", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDisplay },
			{ "STTYPE", "STTYPE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkStType },
			{ "STAT?", "STAT?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkStAtQ },
			{ "STAT", "STAT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkStAt },
			{ "STPAGE", "STPAGE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkStPage },
			{ "STDEL", "STDEL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkStDel },
			{ "STCR", "STCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkStCR },
			{ "STEMIT", "STEMIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkStEmit },
			{ "KEYBOARD", "KEYBOARD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkKeyboard },
			{ "STEXPECT", "STEXPECT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkStExpect },
			{ "STDECODE", "STDECODE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkStDecode },
			{ "STKEY", "STKEY", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkStKey },
			{ "GETKEY", "GETKEY", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkGetKey },
			{ "STKEY?", "STKEY?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkStKeyQ },
			{ "CURRITE", "CURRITE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCurRite },
			{ "CURLEFT", "CURLEFT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCurLeft },
			{ "WRAP", "WRAP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkWrap },
			{ "CUROFF", "CUROFF", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCurOff },
			{ "CURON", "CURON", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCurOn },
			{ "CON!", "CON!", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkConStore },
			{ "#ESC", "#ESC", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNumEsc },
			{ "#LF", "#LF", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNumLf },
			{ "#CR", "#CR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNumCr },
			{ "#BS", "#BS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNumBs },
			{ "BCONOUT", "BCONOUT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBConOut },
			{ "BCONIN", "BCONIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBConIn },
			{ "BCOSTAT", "BCOSTAT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBcoStat },
			{ "BCONSTAT", "BCONSTAT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBconStat },
			{ "RESTART", "RESTART", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRestart },
			{ "COLD", "COLD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCold },
			{ "'RESTART", "'RESTART", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTickRestart },
			{ "'COLD", "'COLD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTickCold },
			{ "EXPECT", "EXPECT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkExpect },
			{ "DECODE", "DECODE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDecode },
			{ "KEY?", "KEY?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkKeyQ },
			{ "KEY", "KEY", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkKey },
			{ "INPUT:", "INPUT:", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkInputColon },
			{ "COL", "COL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCol },
			{ "ROW", "ROW", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRol },
			{ "AT?", "AT?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAtQ },
			{ "AT", "AT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAt },
			{ "PAGE", "PAGE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPage },
			{ "DEL", "DEL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDel },
			{ "TYPE", "TYPE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkType },
			{ "CR", "CR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCr },
			{ "EMIT", "EMIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkEmit },
			{ "OUTPUT:", "OUTPUT:", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOutputColon },
			{ "?CR", "?CR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkQCr },
			{ "STOP?", "STOP?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkStopQ },
			{ "BYE", "BYE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBye },
			{ "SAVE", "SAVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSave },
			{ "EMPTY", "EMPTY", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkEmpty },
			{ "FORGET", "FORGET", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkForget },
			{ "(FORGET", "(FORGET", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZForget },
			{ "CLEAR", "CLEAR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkClear },
			{ "CUSTOM-REMOVE", "CUSTOM-REMOVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCustomRemove },
			{ "REMOVE", "REMOVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRemove },
			{ "ALL-BUFFERS", "ALL-BUFFERS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAllBuffers },
			{ "FREEBUFFER", "FREEBUFFER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFreeBuffer },
			{ "ALLOTBUFFER", "ALLOTBUFFER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAllotBuffer },
			{ "FIRST", "FIRST", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFirst },
			{ "LIMIT", "LIMIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLimit },
			{ "CONVEY", "CONVEY", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkConvey },
			{ "COPY", "COPY", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCopy },
			{ "FLUSH", "FLUSH", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFlush },
			{ "EMPTY-BUFFERS", "EMPTY-BUFFERS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkEmptyBuffers },
			{ "SAVE-BUFFERS", "SAVE-BUFFERS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSaveBuffers },
			{ "UPDATE", "UPDATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUpdate },
			{ "BLOCK", "BLOCK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBlock },
			{ "BUFFER", "BUFFER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBuffer },
			{ "ISFILE@", "ISFILE@", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkIsFileFetch },
			{ "(BLOCK", "(BLOCK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZBlock },
			{ "(BUFFER", "(BUFFER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZBuffer },
			{ "CORE?", "CORE?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCoreQ },
			{ "UNLOCK", "UNLOCK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUnLock },
			{ "LOCK", "LOCK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLock },
			{ "PAUSE", "PAUSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPause },
			{ "LIST", "LIST", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkList },
			{ "L/S", "L/S", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLSlashS },
			{ "C/L", "C/L", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCSlashL },
			{ ".S", ".S", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDotS },
			{ "U.", "U.", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUDot },
			{ ".", ".", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDot },
			{ "D.", "D.", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDDot },
			{ "U.R", "U.R", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUDotR },
			{ ".R", ".R", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDotR },
			{ "D.R", "D.R", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDDotR },
			{ "#S", "#S", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNumS },
			{ "#", "#", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNum },
			{ "SIGN", "SIGN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSign },
			{ "#>", "#>", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNumGreater },
			{ "<#", "<#", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLessNum },
			{ "HOLD", "HOLD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkHold },
			{ "SPACES", "SPACES", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSpaces },
			{ "SPACE", "SPACE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSpace },
			{ "BL", "BL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBl },
			{ "-TRAILING", "-TRAILING", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTrailing },
			{ "ERROR\"", "ERROR\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkErrorQuote },
			{ "ABORT\"", "ABORT\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAbortQuote },
			{ "(ABORT\"", "(ABORT\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZAbortQuote },
			{ "(ERROR", "(ERROR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZError },
			{ "R#", "R#", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRNum },
			{ "SCR", "SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkScr },
			{ "ABORT", "ABORT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAbort },
			{ "'ABORT", "'ABORT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTickAbort },
			{ "STANDARDI/O", "STANDARDI/O", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkStandardISlashO },
			{ "QUIT", "QUIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkQuit },
			{ "'QUIT", "'QUIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTickQuit },
			{ "(QUIT", "(QUIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZQuit },
			{ "DEPTH", "DEPTH", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDepth },
			{ "RDEPTH", "RDEPTH", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRDepth },
			{ "-->", "-->", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTo },
			{ "+THRU", "+THRU", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPlusThru },
			{ "THRU", "THRU", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkThru },
			{ "+LOAD", "+LOAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPlusLoad },
			{ "LOAD", "LOAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLoad },
			{ "(LOAD", "(LOAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZLoad },
			{ "PUSH", "PUSH", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPush },
			{ ".STATUS", ".STATUS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDotStatus },
			{ "?STACK", "?STACK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkQStack },
			{ "IS", "IS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkIs },
			{ "(IS", "(IS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZIs },
			{ "DEFER", "DEFER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDefer },
			{ "]", "]", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRightBracket },
			{ "[", "[", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLeftBracket },
			{ "INTERPRET", "INTERPRET", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkInterpret },
			{ "NO.EXTENSIONS", "NO.EXTENSIONS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNoDotExtensions },
			{ "NOTFOUND", "NOTFOUND", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNotFound },
			{ ">INTERPRET", ">INTERPRET", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkToInterpret },
			{ "NULLSTRING?", "NULLSTRING?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNullStringQ },
			{ "[']", "[']", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkXTick },
			{ "[COMPILE]", "[COMPILE]", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkXCompile },
			{ "'", "'", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTick },
			{ "FIND", "FIND", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFind },
			{ "(FIND", "(FIND", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZFind },
			{ "WORDS", "WORDS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkWords },
			{ "ORDER", "ORDER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOrder },
			{ "DEFINITIONS", "DEFINITIONS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDefinitions },
			{ "ONLYFORTH", "ONLYFORTH", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOnlyForth },
			{ "ONLY", "ONLY", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOnly },
			{ "FORTH", "FORTH", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkForth },
			{ "VOCABULARY", "VOCABULARY", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkVocabulary },
			{ "TOSS", "TOSS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkToss },
			{ "ALSO", "ALSO", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAlso },
			{ "CONTEXT", "CONTEXT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkContext },
			{ "CURRENT", "CURRENT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCurrent },
			{ "VP", "VP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkVp },
			{ "ALIAS", "ALIAS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAlias },
			{ "USER", "USER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUser },
			{ "UALLOT", "UALLOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUAllot },
			{ "2VARIABLE", "2VARIABLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTwoVariable },
			{ "VARIABLE", "VARIABLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkVariable },
			{ "2CONSTANT", "2CONSTANT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTwoConstant },
			{ "CONSTANT", "CONSTANT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkConstant },
			{ ";", ";", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSemicolon },
			{ ":", ":", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkColon },
			{ "CREATE:", "CREATE:", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCreateColon },
			{ ".NAME", ".NAME", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDotName },
			{ ">BODY", ">BODY", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkToBody },
			{ "NAME>", "NAME>", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNameFrom },
			{ ">NAME", ">NAME", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkToName },
			{ "NFA?", "NFA?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNFaq },
			{ "CREATE", "CREATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCreate },
			{ "MAKEVIEW", "MAKEVIEW", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMakeView },
			{ "BLK@", "BLK@", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBlkFetch },
			{ "WARNING", "WARNING", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkWarning },
			{ "HALIGN", "HALIGN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkHAlign },
			{ "ALIGN", "ALIGN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAlign },
			{ "|", "|", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkVerticalBar },
			{ "?HEAD", "?HEAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkQHead },
			{ "DOES>", "DOES>", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDoes },
			{ "HEAP?", "HEAP?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkHeapQ },
			{ "HEAP", "HEAP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkHeap },
			{ "HALLOT", "HALLOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkHallot },
			{ "CLEARSTACK", "CLEARSTACK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkClearStack },
			{ "RESTRICT", "RESTRICT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRestrict },
			{ "IMMEDIATE", "IMMEDIATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkImmediate },
			{ "RECURSIVE", "RECURSIVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRecursive },
			{ "REVEAL", "REVEAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkReveal },
			{ "HIDE", "HIDE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkHide },
			{ "LAST", "LAST", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLast },
			{ "NUMBER", "NUMBER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNumber },
			{ "NUMBER?", "NUMBER?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNumberQ },
			{ "DPL", "DPL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDpl },
			{ "CONVERT", "CONVERT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkConvert },
			{ "ACCUMULATE", "ACCUMULATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAccumulate },
			{ "DIGIT?", "DIGIT?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDigitQ },
			{ "DECIMAL", "DECIMAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDecimal },
			{ "HEX", "HEX", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkHex },
			{ "\\NEEDS", "\\NEEDS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBackslashNeeds },
			{ "\\\\", "\\\\", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBackslashBackslash },
			{ "\\", "\\", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBackslash },
			{ ".(", ".(", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDotParen },
			{ "(", "(", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkParen },
			{ ".\"", ".\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDotQuote },
			{ "(.\"", "(.\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkParenDotQuote },
			{ "\"", "\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkQuote },
			{ "(\"", "(\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkParenQuote },
			{ "\"LIT", "\"LIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkQuoteLit },
			{ ",\"", ",\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCommaQuote },
			{ "ASCII", "ASCII", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAscii },
			{ "STATE", "STATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkState },
			{ "NAME", "NAME", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkName },
			{ "PARSE", "PARSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkParse },
			{ "WORD", "WORD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkWord },
			{ "SOURCE", "SOURCE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSource },
			{ "LOADFILE", "LOADFILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLoadFile },
			{ "EVEN", "EVEN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkEven },
			{ "(WORD", "(WORD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZWord },
			{ "CAPITALIZE", "CAPITALIZE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCapitalize },
			{ "CAPITAL", "CAPITAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCapital },
			{ "SCAN", "SCAN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkScan },
			{ "SKIP", "SKIP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSkip },
			{ "/STRING", "/STRING", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSlashString },
			{ "QUERY", "QUERY", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkQuery },
			{ "TIB", "TIB", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTib },
			{ "SPAN", "SPAN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSpan },
			{ "BLK", "BLK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBlk },
			{ ">IN", ">IN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkToIn },
			{ ">TIB", ">TIB", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkToTib },
			{ "#TIB", "#TIB", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNumTib },
			{ "COMPILE", "COMPILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCompile },
			{ "PAD", "PAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPad },
			{ "ALLOT", "ALLOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAllot },
			{ "HERE", "HERE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkHere },
			{ "C,", "C,", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCComma },
			{ ",", ",", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkComma },
			{ "ERASE", "ERASE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkErase },
			{ "FILL", "FILL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFill },
			{ "COUNT", "COUNT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCount },
			{ "PLACE", "PLACE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPlace },
			{ "MOVE", "MOVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMove },
			{ "CMOVE>", "CMOVE>", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCMoveTo },
			{ "CMOVE", "CMOVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCMove },
			{ "UD/MOD", "UD/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUdSlashMod },
			{ "U/MOD", "U/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUSlashMod },
			{ "*/", "*/", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkStarSlash },
			{ "*/MOD", "*/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkStarSlashMOD },
			{ "MOD", "MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMod },
			{ "/", "/", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSlash },
			{ "/MOD", "/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSlashMod },
			{ "M/MOD", "M/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMSlashMod },
			{ "UM/MOD", "UM/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUmSlashMod },
			{ "2/", "2/", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTwoSlash },
			{ "2*", "2*", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTwoStar },
			{ "M*", "M*", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMStar },
			{ "*", "*", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkStar },
			{ "UM*", "UM*", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUmStar },
			{ "LEAVE", "LEAVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLeave },
			{ "+LOOP", "+LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPlusLoop },
			{ "LOOP", "LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLoop },
			{ "?DO", "?DO", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkQDo },
			{ "DO", "DO", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDo },
			{ "UNTIL", "UNTIL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUntil },
			{ "REPEAT", "REPEAT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRepeat },
			{ "WHILE", "WHILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkWhile },
			{ "BEGIN", "BEGIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBegin },
			{ "ELSE", "ELSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkElse },
			{ "THEN", "THEN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkThen },
			{ "IF", "IF", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkIf },
			{ "CASE?", "CASE?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCaseQ },
			{ "?PAIRS", "?PAIRS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkQPairs },
			{ "<RESOLVE", "<RESOLVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFromResolve },
			{ "<MARK", "<MARK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFromMark },
			{ ">RESOLVE", ">RESOLVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkToResolve },
			{ ">MARK", ">MARK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkToMark },
			{ "?BRANCH", "?BRANCH", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkQBranch },
			{ "BRANCH", "BRANCH", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBranch },
			{ "J", "J", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkJ },
			{ "I", "I", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkI },
			{ "(+LOOP", "(+LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZPlusLoop },
			{ "(LOOP", "(LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZLoop },
			{ "ENDLOOP", "ENDLOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkEndLoop },
			{ "BOUNDS", "BOUNDS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBounds },
			{ "(?DO", "(?DO", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZQDo },
			{ "(DO", "(DO", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZDo },
			{ "ABS", "ABS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAbs },
			{ "DABS", "DABS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDAbs },
			{ "EXTEND", "EXTEND", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkExtend },
			{ "UMIN", "UMIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUMin },
			{ "UMAX", "UMAX", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUMax },
			{ "MAX", "MAX", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMax },
			{ "MIN", "MIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMin },
			{ "D<", "D<", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDLess },
			{ "D=", "D=", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDEqual },
			{ "D0=", "D0=", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDZeroEqual },
			{ "=", "=", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkEqual },
			{ "U>", "U>", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUGreater },
			{ "0<>", "0<>", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZeroUnequal },
			{ "0>", "0>", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZeroGreater },
			{ ">", ">", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkGreater },
			{ "UWITHIN", "UWITHIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUWithin },
			{ "U<", "U<", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkULess },
			{ "<", "<", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLess },
			{ "0=", "0=", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZeroEqual },
			{ "0<", "0<", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZeroLess },
			{ "LITERAL", "LITERAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLiteral },
			{ "LIT", "LIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLit },
			{ "0", "0", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZero },
			{ "-1", "-1", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMinusOne },
			{ "4", "4", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFour },
			{ "3", "3", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkThree },
			{ "2", "2", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTwo },
			{ "1", "1", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOne },
			{ "FALSE", "FALSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFalse },
			{ "TRUE", "TRUE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTrue },
			{ "OFF", "OFF", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOff },
			{ "ON", "ON", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOn },
			{ "4-", "4-", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFourMinus },
			{ "2-", "2-", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTwoMinus },
			{ "1-", "1-", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOneMinus },
			{ "4+", "4+", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFourPlus },
			{ "3+", "3+", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkThreePlus },
			{ "2+", "2+", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTwoPlus },
			{ "1+", "1+", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOnePlus },
			{ "D*", "D*", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDStar },
			{ "D-", "D-", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDMinus },
			{ "D+", "D+", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDPlus },
			{ "DNEGATE", "DNEGATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDNegate },
			{ "NEGATE", "NEGATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNegate },
			{ "-", "-", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMinus },
			{ "NOT", "NOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNot },
			{ "XOR", "XOR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkXOR },
			{ "AND", "AND", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAnd },
			{ "OR", "OR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOr },
			{ "+", "+", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPlus },
			{ "\"DROP", "\"DROP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkQuoteDrop },
			{ "2OVER", "2OVER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTwoOver },
			{ "2DUP", "2DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTwoDup },
			{ "2SWAP", "2SWAP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTwoSwap },
			{ "-ROLL", "-ROLL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMinusRoll },
			{ "ROLL", "ROLL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRoll },
			{ "PICK", "PICK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPick },
			{ "-ROT", "-ROT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMinusRot },
			{ "UNDER", "UNDER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUnder },
			{ "NIP", "NIP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNip },
			{ "ROT", "ROT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRot },
			{ "OVER", "OVER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOver },
			{ "?DUP", "?DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkQDup },
			{ "DUP", "DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDup },
			{ "SWAP", "SWAP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSwap },
			{ "DROP", "DROP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDrop },
			{ "+!", "+!", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPlusStore },
			{ "LN+!", "LN+!", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLNPlusStore },
			{ "L2!", "L2!", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkL2Store },
			{ "L2@", "L2@", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkL2Fetch },
			{ "LCMOVE", "LCMOVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLCMove },
			{ "L!", "L!", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLStore },
			{ "L@", "L@", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLFetch },
			{ "LC!", "LC!", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLCStore },
			{ "2!", "2!", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTwoStore },
			{ "2@", "2@", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTwoFetch },
			{ "!", "!", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkStore },
			{ "@", "@", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFetch },
			{ "CTOGGLE", "CTOGGLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCToggle },
			{ "C!", "C!", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCStore },
			{ "C@", "C@", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCFetch },
			{ "PERFORM", "PERFORM", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPerform },
			{ "EXECUTE", "EXECUTE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkExecute },
			{ "?EXIT", "?EXIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkQExit },
			{ "UNNEST", "UNNEST", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUnnest },
			{ "EXIT", "EXIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkExit },
			{ "RDROP", "RDROP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRDrop },
			{ "R@", "R@", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRFetch },
			{ "R>", "R>", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRFrom },
			{ ">R", ">R", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkToR },
			{ "RP!", "RP!", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRPStore },
			{ "RP@", "RP@", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRPFetch },
			{ "FORTHSTART", "FORTHSTART", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkForthStart },
			{ "UP!", "UP!", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUPStore },
			{ "UP@", "UP@", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUPFetch },
			{ "SP!", "SP!", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSPStore },
			{ "SP@", "SP@", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSPFetch },
			{ "END-TRACE", "END-TRACE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkEndTrace },
			{ "UP", "UP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUP },
			{ "NEXT-LINK", "NEXT-LINK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNextLink },
			{ "UDP", "UDP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUdp },
			{ "VOC-LINK", "VOC-LINK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkVocLink },
			{ "ERRORHANDLER", "ERRORHANDLER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkErrorhandler },
			{ "INPUT", "INPUT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkInput },
			{ "OUTPUT", "OUTPUT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOutput },
			{ "BASE", "BASE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBase },
			{ "OFFSET", "OFFSET", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOffset },
			{ "DP", "DP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDP },
			{ "R0", "R0", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkR0 },
			{ "S0", "S0", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkS0 },
			{ "ORIGIN", "ORIGIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOrigin },
			{ "NOOP", "NOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNoop },
			{ "RECOVER", "RECOVER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRecover }
};
#endif

#if H2O_FORTH_PRIMITIVES == VOLK_CPM_FORTH
static const typedef_forthWord forthWords[] = { /* CP/M */
			{ "BUFFERS", "BUFFERS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBuffers },
			{ "RELOCATE.SCR", "RELOCATE.SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRelocateDotScr },
			{ "SPOOL", "SPOOL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSpool },
			{ "SPOOLER", "SPOOLER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSpooler },
			{ "LISTING", "LISTING", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkListing },
			{ "DOCUMENT", "DOCUMENT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDocument },
			{ "PTHRU", "PTHRU", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPThru },
			{ "PRINTABLE?", "PRINTABLE?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPrintableQ },
			{ "PRINT", "PRINT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPrint },
			{ "PRINTER", "PRINTER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPrinter },
			{ "SHADOW", "SHADOW", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkShadow },
			{ "PRINTER.SCR", "PRINTER.SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPrinterDotScr },
			{ "TASKS", "TASKS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTasks },
			{ "'S", "'S", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTickS },
			{ "RENDEZVOUS", "RENDEZVOUS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRendezvous },
			{ "TASK", "TASK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTask },
			{ "WAKE", "WAKE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkWake },
			{ "SLEEP", "SLEEP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSleep },
			{ "ACTIVATE", "ACTIVATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkActivate },
			{ "PASS", "PASS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPass },
			{ "MULTITASK", "MULTITASK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMultiTask },
			{ "SINGLETASK", "SINGLETASK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSingleTask },
			{ "STOP", "STOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkStop },
			{ "TASKER.SCR", "TASKER.SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTaskerDotScr },
			{ "SEE", "SEE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSee },
			{ "SEE.SCR", "SEE.SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSeeDotScr },
			{ "EXTERNAL", "EXTERNAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkExternal },
			{ "INTERNAL", "INTERNAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkInternal },
			{ "TRACE'", "TRACE'", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTraceTick },
			{ "DEBUG", "DEBUG", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDebug },
			{ "DUMP", "DUMP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDump },
			{ "TOOLS", "TOOLS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTools },
			{ "TOOLS.SCR", "TOOLS.SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkToolsDotScr },
			{ "FIX", "FIX", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFix },
			{ "VIEW", "VIEW", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkView },
			{ "SAVESYSTEM", "SAVESYSTEM", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSaveSystem },
			{ "L", "L", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkL },
			{ "V", "V", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkV },
			{ "#DEL", "#DEL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNumDel },
			{ "CTRL", "CTRL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCtrl },
			{ "UPDATED?", "UPDATED?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUpdatedQ },
			{ "EDITOR", "EDITOR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkEditor },
			{ "?ABORT(", "?ABORT(", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkQAbortZ },
			{ "?ENOUGH", "?ENOUGH", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkQEnough },
			{ "BLANK", "BLANK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBlank },
			{ "REPLACE", "REPLACE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkReplace },
			{ "INSERT", "INSERT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkInsert },
			{ "DELETE", "DELETE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDelete },
			{ "EDITOR.SCR", "EDITOR.SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkEditorDotScr },
			{ "SAVESYSTEM", "SAVESYSTEM", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSaveSystem },
			{ "SAVESYS.SCR", "SAVESYS.SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSaveSysDotScr },
			{ "CONVEY", "CONVEY", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkConvey },
			{ "COPY", "COPY", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCopy },
			{ "COPY.SCR", "COPY.SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCopyDotScr },
			{ "ANSI", "ANSI", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAnsi },
			{ "TERMINAL.SCR", "TERMINAL.SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTerminalDotScr },
			{ "(KEY", "(KEY", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZKey },
			{ "(EXPECT", "(EXPECT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZExpect },
			{ "(DECODE", "(DECODE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZDecode },
			{ "(DEL", "(DEL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZDel },
			{ "(CR", "(CR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZCr },
			{ "(EMIT", "(EMIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZEmit },
			{ "(TYPE", "(TYPE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZType },
			{ "(PAGE", "(PAGE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZPage },
			{ "(AT?", "(AT?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZAtQ },
			{ "(AT", "(AT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZAt },
			{ "C/COL", "C/COL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCSlashCol },
			{ "C/ROW", "C/ROW", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCSlashRow },
			{ "DUMB", "DUMB", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDumb },
			{ "CURRITE", "CURRITE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCurRite },
			{ "CURLEFT", "CURLEFT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCurLeft },
			{ "LOCATE", "LOCATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLocate },
			{ "DARK", "DARK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDark },
			{ "RVSOFF", "RVSOFF", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRvsOff },
			{ "RVSON", "RVSON", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRvsOn },
			{ "CUROFF", "CUROFF", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCurOff },
			{ "CURON", "CURON", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCurOn },
			{ "TERMINAL:", "TERMINAL:", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTerminalColon },
			{ "TERM:", "TERM:", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTermColon },
			{ "XINOUT.SCR", "XINOUT.SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkXinOutDotScr },
			{ "LABEL", "LABEL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLabel },
			{ ">LABEL", ">LABEL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkToLabel },
			{ ";CODE", ";CODE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSemicolonCode },
			{ "CODE", "CODE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCode },
			{ "ASS8080.SCR", "ASS8080.SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAss8080DotScr },
			{ "STARTUP.SCR", "STARTUP.SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkStartupDotScr },
			{ "FILEINT.SCR", "FILEINT.SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFileIntDotScr },
			{ "SOURCE.SCR", "SOURCE.SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSourceDotScr },
			{ ".BLK", ".BLK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDotBlk },
			{ "SAVEFILE", "SAVEFILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSaveFile },
			{ "J:", "J:", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkJColon },
			{ "D:", "D:", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDColon },
			{ "C:", "C:", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCColon },
			{ "B:", "B:", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBColon },
			{ "A:", "A:", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAColon },
			{ "DRIVE:", "DRIVE:", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDriveColon },
			{ "MORE", "MORE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMore },
			{ "DIR\"", "DIR\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDirQuote },
			{ "DIR", "DIR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDir },
			{ "FILES\"", "FILES\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFilesQuote },
			{ "FILES", "FILES", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFiles },
			{ "EOF", "EOF", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkEof },
			{ "INCLUDE", "INCLUDE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkInclude },
			{ "LOADFROM", "LOADFROM", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLoadFrom },
			{ "FROM", "FROM", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFrom },
			{ "MAKEFILE", "MAKEFILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMakefile },
			{ "USE", "USE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUse },
			{ "MAKE", "MAKE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMake },
			{ "ASSIGN", "ASSIGN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAssign },
			{ "CLOSE", "CLOSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkClose },
			{ "OPEN", "OPEN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOpen },
			{ ".BUFFERS", ".BUFFERS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDotBuffers },
			{ "(VIEW", "(VIEW", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZView },
			{ "(MAKEVIEW", "(MAKEVIEW", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZMakeView },
			{ "LIST", "LIST", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkList },
			{ "FILE?", "FILE?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFileQ },
			{ "DIRECT", "DIRECT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDirect },
			{ "FILE", "FILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFile },
			{ "FORTHFILES", "FORTHFILES", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkForthFiles },
			{ "CAPACITY", "CAPACITY", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCapacity },
			{ "FORTH-83", "FORTH-83", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkForth83 },
			{ "ASSEMBLER", "ASSEMBLER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAssembler },
			{ ".SIZE", ".SIZE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDotSize },
			{ "POSTLUDE", "POSTLUDE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPostlude },
			{ "(R/W", "(R/W", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZRSlashW },
			{ "DRVINIT", "DRVINIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDrvInit },
			{ "REC/BLK", "REC/BLK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRecSlashBlk },
			{ "B/REC", "B/REC", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBSlashRec },
			{ "KEYBOARD", "KEYBOARD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkKeyboard },
			{ "(EXPECT", "(EXPECT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZExpect },
			{ "(DECODE", "(DECODE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZDecode },
			{ "DISPLAY", "DISPLAY", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDisplay },
			{ "TIPP", "TIPP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTipp },
			{ "(AT?", "(AT?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZAtQ },
			{ "(DEL", "(DEL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZDel },
			{ "(CR", "(CR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZCr },
			{ "(EMIT", "(EMIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZEmit },
			{ "(KEY", "(KEY", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZKey },
			{ "GETKEY", "GETKEY", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkGetKey },
			{ "(KEY?", "(KEY?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZKeyQ },
			{ "CON!", "CON!", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkConStore },
			{ "#FF", "#FF", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNumFf },
			{ "#BEL", "#BEL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNumBel },
			{ "#DEL", "#DEL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNumDel },
			{ "#TAB", "#TAB", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNumTab },
			{ "#ESC", "#ESC", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNumEsc },
			{ "#LF", "#LF", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNumLf },
			{ "#CR", "#CR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNumCr },
			{ "#BS", "BS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNumBs },
			{ "DOS", "DOS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDos },
			{ "\"SEARCH", "\"SEARCH", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkQuoteSearch },
			{ "RESTART", "RESTART", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRestart },
			{ "COLD", "COLD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCold },
			{ "'COLD", "'COLD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTickCold },
			{ "'RESTART", "'RESTART", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTickRestart },
			{ "EXPECT", "EXPECT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkExpect },
			{ "DECODE", "DECODE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDecode },
			{ "KEY?", "KEY?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkKeyQ },
			{ "KEY", "KEY", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkKey },
			{ "INPUT:", "INPUT:", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkInputColon },
			{ "COL", "COL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCol },
			{ "ROW", "ROW", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRow },
			{ "AT?", "AT?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAtQ },
			{ "AT", "AT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAt },
			{ "PAGE", "PAGE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPage },
			{ "DEL", "DEL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDel },
			{ "TYPE", "TYPE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkType },
			{ "CR", "CR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCr },
			{ "EMIT", "EMIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkEmit },
			{ "OUTPUT:", "OUTPUT:", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOutputColon },
			{ "?CR", "?CR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkQCr },
			{ "STOP?", "STOP?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkStopQ },
			{ "BYE", "BYE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBye },
			{ "SAVE", "SAVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSave },
			{ "EMPTY", "EMPTY", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkEmpty },
			{ "FORGET", "FORGET", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkForget },
			{ "(FORGET", "(FORGET", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZForget },
			{ "CLEAR", "CLEAR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkClear },
			{ "CUSTOM-REMOVE", "CUSTOM-REMOVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCustomRemove },
			{ "REMOVE", "REMOVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRemove },
			{ "ALL-BUFFERS", "ALL-BUFFERS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAllBuffers },
			{ "FREEBUFFER", "FREEBUFFER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFreeBuffer },
			{ "ALLOTBUFFER", "ALLOTBUFFER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAllotBuffer },
			{ "FIRST", "FIRST", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFirst },
			{ "LIMIT", "LIMIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLimit },
			{ "FLUSH", "FLUSH", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFlush },
			{ "EMPTY-BUFFERS", "EMPTY-BUFFERS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkEmptyBuffers },
			{ "SAVE-BUFFERS", "SAVE-BUFFERS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSaveBuffers },
			{ "SAVE-DOS-BUFFERS", "SAVE-DOS-BUFFERS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSaveDosBuffers },
			{ "UPDATE", "UPDATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUpdate },
			{ "BLOCK", "BLOCK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBlock },
			{ "BUFFER", "BUFFER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBuffer },
			{ "ISFILE@", "ISFILE@", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkIsFileFetch },
			{ "(BLOCK", "(BLOCK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZBlock },
			{ "(BUFFER", "(BUFFER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZBuffer },
			{ "CORE?", "CORE?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCoreQ },
			{ "EMPTYBUF", "EMPTYBUF", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkEmptyBuf },
			{ "R/W", "R/W", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRSlashW },
			{ "DISKERR", "DISKERR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDiskErr },
			{ "(DISKERR", "(DISKERR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZDiskErr },
			{ "(CORE?", "(CORE?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZCoreQ },
			{ "B/BLK", "B/BLK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBSlashBlk },
			{ "B/BUF", "B/BUF", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBSlashBuf },
			{ "PREV", "PREV", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPrev },
			{ "FROMFILE", "FROMFILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFromFile },
			{ "ISFILE", "ISFILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkIsFile },
			{ "UNLOCK", "UNLOCK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUnlock },
			{ "LOCK", "LOCK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLock },
			{ "PAUSE", "PAUSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPause },
			{ "END-TRACE", "END-TRACE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkEndTrace },
			{ "LIST", "LIST", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkList },
			{ "L/S", "L/S", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLSlashS },
			{ "C/L", "C/L", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCSlashL },
			{ ".S", ".S", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDotS },
			{ "U.", "U.", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUDot },
			{ ".", ".", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDot },
			{ "D.", "D.", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDDot },
			{ "U.R", "U.R", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUDotR },
			{ ".R", ".R", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDotR },
			{ "D.R", "D.R", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDDotR },
			{ "#S", "#S", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNumS },
			{ "#", "#", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNum },
			{ "SIGN", "SIGN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSign },
			{ "#>", "#>", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNumGreater },
			{ "<#", "<#", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLessNum },
			{ "HOLD", "HOLD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkHold },
			{ "SPACES", "SPACES", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSpaces },
			{ "SPACE", "SPACE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSpace },
			{ "BL", "BL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBl },
			{ "-TRAILING", "-TRAILING", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTrailing },
			{ "ERROR\"", "ERROR\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkErrorQuote },
			{ "ABORT\"", "ABORT\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAbortQuote },
			{ "(ABORT\"", "(ABORT\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZAbortQuote },
			{ "(ERROR", "(ERROR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZError },
			{ "R#", "R#", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRNum },
			{ "SCR", "SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkScr },
			{ "ABORT", "ABORT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAbort },
			{ "'ABORT", "'ABORT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTickAbort },
			{ "STANDARDI/O", "STANDARDI/O", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkStandardISlashO },
			{ "QUIT", "QUIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkQuit },
			{ "'QUIT", "'QUIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTickQuit },
			{ "(QUIT", "(QUIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZQuit },
			{ "PROMPT", "PROMPT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPrompt },
			{ "(PROMPT", "(PROMPT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZPrompt },
			{ "DEPTH", "DEPTH", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDepth },
			{ "RDEPTH", "RDEPTH", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRDepth },
			{ "-->", "-->", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTo },
			{ "+THRU", "+THRU", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPlusThru },
			{ "THRU", "THRU", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkThru },
			{ "+LOAD", "+LOAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPlusLoad },
			{ "LOAD", "LOAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLoad },
			{ "(LOAD", "(LOAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZLoad },
			{ "PUSH", "PUSH", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPush },
			{ ".STATUS", ".STATUS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDotStatus },
			{ "?STACK", "?STACK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkQStack },
			{ "IS", "IS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkIs },
			{ "(IS", "(IS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZIs },
			{ "]", "]", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRightBracket },
			{ "[", "[", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLeftBracket },
			{ "INTERPRET", "INTERPRET", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkInterpret },
			{ "PARSER", "PARSER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkParser },
			{ "NOTFOUND", "NOTFOUND", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNotFound },
			{ "NO.EXTENSIONS", "NO.EXTENSIONS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNoDotExtensions},
			{ "NULLSTRING?", "NULLSTRING?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNullStringQ },
			{ "[']", "[']", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkXTick },
			{ "[COMPILE]", "[COMPILE]", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkXCompile },
			{ "'", "'", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTick },
			{ "FIND", "FIND", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFind },
			{ "(FIND", "(FIND", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZFind },
			{ "WORDS", "WORDS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkWords },
			{ "ORDER", "ORDER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOrder },
			{ "DEFINITIONS", "DEFINITIONS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDefinitions },
			{ "ONLYFORTH", "ONLYFORTH", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOnlyForth },
			{ "ONLY", "ONLY", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOnly },
			{ "ROOT", "ROOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRoot },
			{ "FORTH", "FORTH", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkForth },
			{ "VOCABULARY", "VOCABULARY", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkVocabulary },
			{ "TOSS", "TOSS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkToss },
			{ "ALSO", "ALSO", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAlso },
			{ "CONTEXT", "CONTEXT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkContext },
			{ "CURRENT", "CURRENT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCurrent },
			{ "VP", "VP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkVp },
			{ "DEFER", "DEFER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDefer },
			{ "ALIAS", "ALIAS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAlias },
			{ "USER", "USER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUser },
			{ "UALLOT", "UALLOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUAllot },
			{ "VARIABLE", "VARIABLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkVariable },
			{ "CONSTANT", "CONSTANT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkConstant },
			{ ";", ";", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSemicolon },
			{ ":", ":", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkColon },
			{ "CREATE:", "CREATE:", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCreateColon },
			{ ".NAME", ".NAME", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDotName },
			{ "BODY>", "BODY>", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBodyFrom },
			{ ">BODY", ">BODY", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkToBody },
			{ "NAME>", "NAME>", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNameFrom },
			{ "(NAME>", "(NAME>", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZNameFrom },
			{ ">NAME", ">NAME", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkToName },
			{ "NFA?", "NFA?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNFaq },
			{ "CREATE", "CREATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCreate },
			{ "(CREATE", "(CREATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCreateZ },
			{ "MAKEVIEW", "MAKEVIEW", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMakeView },
			{ "WARNING", "WARNING", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkWarning },
			{ "HALIGN", "HALIGN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkHAlign },
			{ "ALIGN", "ALIGN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAlign },
			{ "EVEN", "EVEN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkEven },
			{ "|", "|", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkVerticalBar },
			{ "?HEAD", "?HEAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkQHead },
			{ "DOES>", "DOES>", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDoes },
			{ "(;CODE", "(;CODE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZSemicolonCode },
			{ "HEAP?", "HEAP?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkHeapQ },
			{ "HEAP", "HEAP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkHeap },
			{ "HALLOT", "HALLOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkHallot },
			{ "CLEARSTACK", "CLEARSTACK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkClearStack },
			{ "RESTRICT", "RESTRICT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRestrict },
			{ "IMMEDIATE", "IMMEDIATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkImmediate },
			{ "RECURSIVE", "RECURSIVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRecursive },
			{ "REVEAL", "REVEAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkReveal },
			{ "HIDE", "HIDE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkHide },
			{ "LAST", "LAST", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLast },
			{ "NUMBER", "NUMBER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNumber },
			{ "NUMBER?", "NUMBER?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNumberQ },
			{ "DPL", "DPL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDpl },
			{ "CONVERT", "CONVERT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkConvert },
			{ "ACCUMULATE", "ACCUMULATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAccumulate },
			{ "DIGIT?", "DIGIT?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDigitQ },
			{ "DECIMAL", "DECIMAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDecimal },
			{ "HEX", "HEX", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkHex },
			{ "\\NEEDS", "\\NEEDS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBackslashNeeds },
			{ "\\\\", "\\\\", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBackslashBackslash },
			{ "\\", "\\", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBackslash },
			{ ".(", ".(", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDotParen },
			{ "(", "(", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkParen },
			{ ".\"", ".\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDotQuote },
			{ "(.\"", "(.\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkParenDotQuote },
			{ "\"", "\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkQuote },
			{ "(\"", "(\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkParenQuote },
			{ ",\"", ",\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCommaQuote },
			{ "\"LIT", "\"LIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkQuoteLit },
			{ "ASCII", "ASCII", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAscii },
			{ "STATE", "STATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkState },
			{ "NAME", "NAME", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkName },
			{ "PARSE", "PARSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkParse },
			{ "WORD", "WORD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkWord },
			{ "SOURCE", "SOURCE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSource },
			{ "LOADFILE", "LOADFILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLoadFile },
			{ "(WORD", "(WORD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZWord },
			{ "UPPER", "UPPER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUpper },
			{ "CAPITAL", "CAPITAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCapital },
			{ "CAPS", "CAPS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCaps },
			{ "/STRING", "/STRING", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSlashString },
			{ "SCAN", "SCAN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkScan },
			{ "SKIP", "SKIP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSkip },
			{ "QUERY", "QUERY", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkQuery },
			{ "TIB", "TIB", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTib },
			{ "SPAN", "SPAN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSpan },
			{ "BLK", "BLK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBlk },
			{ ">IN", ">IN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkToIn },
			{ ">TIB", ">TIB", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkToTib },
			{ "#TIB", "#TIB", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNumTib },
			{ "COMPILE", "COMPILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCompile },
			{ "PAD", "PAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPad },
			{ "C,", "C,", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCComma },
			{ ",", ",", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkComma },
			{ "ALLOT", "ALLOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAllot },
			{ "HERE", "HERE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkHere },
			{ "ERASE", "ERASE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkErase },
			{ "FILL", "FILL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFill },
			{ "COUNT", "COUNT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCount },
			{ "PLACE", "PLACE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPlace },
			{ "MOVE", "MOVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMove },
			{ "CMOVE>", "CMOVE>", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCMoveTo },
			{ "CMOVE", "CMOVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCMove },
			{ "UD/MOD", "UD/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUdSlashMod },
			{ "U/MOD", "U/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUSlashMod },
			{ "*/", "*/", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkStarSlash },
			{ "*/MOD", "*/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkStarSlashMod },
			{ "MOD", "MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMod },
			{ "/", "/", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSlash },
			{ "/MOD", "/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSlashMod },
			{ "M/MOD", "M/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMSlashMod },
			{ "UM/MOD", "UM/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUmSlashMod },
			{ "2/", "2/", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTwoSlash },
			{ "2*", "2*", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTwoStar },
			{ "*", "*", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkStar },
			{ "M*", "M*", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMStar },
			{ "UM*", "UM*", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUmStar },
			{ "LEAVE", "LEAVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLeave },
			{ "+LOOP", "+LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPlusLoop },
			{ "LOOP", "LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLoop },
			{ "?DO", "?DO", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkQDo },
			{ "DO", "DO", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDo },
			{ "UNTIL", "UNTIL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUntil },
			{ "REPEAT", "REPEAT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRepeat },
			{ "WHILE", "WHILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkWhile },
			{ "BEGIN", "BEGIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBegin },
			{ "ELSE", "ELSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkElse },
			{ "THEN", "THEN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkThen },
			{ "IF", "IF", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkIf },
			{ "CASE?", "CASE?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCaseQ },
			{ "?PAIRS", "?PAIRS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkQPairs },
			{ "<RESOLVE", "<RESOLVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFromResolve },
			{ "<MARK", "<MARK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFromMark },
			{ ">RESOLVE", ">RESOLVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkToResolve },
			{ "+>MARK", "+>MARK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPlusToMark },
			{ ">MARK", ">MARK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkToMark },
			{ "J", "J", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkJ },
			{ "I", "I", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkI },
			{ "(+LOOP", "(+LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZPlusLoop },
			{ "(LOOP", "(LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZLoop },
			{ "(?DO", "(?DO", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZQDo },
			{ "(DO", "(DO", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZDo },
			{ "ENDLOOP", "ENDLOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkEndLoop },
			{ "BOUNDS", "BOUNDS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBounds },
			{ "?BRANCH", "?BRANCH", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkQBranch },
			{ "BRANCH", "BRANCH", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBranch },
			{ "DABS", "DABS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDAbs },
			{ "ABS", "ABS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAbs },
			{ "EXTEND", "EXTEND", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkExtend },
			{ "MIN", "MIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMin },
			{ "MAX", "MAX", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMax },
			{ "UMIN", "UMIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUMin },
			{ "UMAX", "UMAX", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUMax },
			{ "D<", "D<", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDLess },
			{ "D=", "D=", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDEqual },
			{ "D0=", "D0=", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDZeroEqual },
			{ "UWITHIN", "UWITHIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUWithin },
			{ "=", "=", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkEqual },
			{ "0<>", "0<>", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZeroUnequal },
			{ "0=", "0=", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZeroEqual },
			{ "0>", "0>", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZeroGreater },
			{ "0<", "0<", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZeroLess },
			{ ">", ">", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkGreater },
			{ "U>", "U>", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUGreater },
			{ "<", "<", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLess },
			{ "U<", "U<", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkULess },
			{ "LITERAL", "LITERAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLiteral },
			{ "CLIT", "CLIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCLit },
			{ "LIT", "LIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLit },
			{ "OFF", "OFF", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOff },
			{ "ON", "ON", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOn },
			{ "-1", "-1", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMinusOne },
			{ "4", "4", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFour },
			{ "3", "3", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkThree },
			{ "2", "2", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTwo },
			{ "1", "1", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOne },
			{ "0", "0", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZero },
			{ "FALSE", "FALSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFalse },
			{ "TRUE", "TRUE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTrue },
			{ "4-", "4-", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFourMinus },
			{ "2-", "2-", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTwoMinus },
			{ "1-", "1-", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOneMinus },
			{ "4+", "4+", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFourPlus },
			{ "3+", "3+", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkThreePlus },
			{ "2+", "2+", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTwoPlus },
			{ "1+", "1+", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOnePlus },
			{ "D+", "D+", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDPlus },
			{ "DNEGATE", "DNEGATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDNegate },
			{ "NEGATE", "NEGATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNegate },
			{ "-", "-", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMinus },
			{ "NOT", "NOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNot },
			{ "XOR", "XOR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkXOR },
			{ "AND", "AND", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAnd },
			{ "OR", "OR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOr },
			{ "+", "+", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPlus },
			{ "2DUP", "2DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTwoDup },
			{ "2DROP", "2DROP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTwoDrop },
			{ "2SWAP", "2SWAP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTwoSwap },
			{ "-ROLL", "-ROLL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMinusRoll },
			{ "ROLL", "ROLL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRoll },
			{ "PICK", "PICK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPick },
			{ "-ROT", "-ROT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMinusRot },
			{ "UNDER", "UNDER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUnder },
			{ "NIP", "NIP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNip },
			{ "ROT", "ROT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRot },
			{ "OVER", "OVER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOver },
			{ "?DUP", "?DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkQDup },
			{ "DUP", "DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkQDup },
			{ "SWAP", "SWAP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSwap },
			{ "DROP", "DROP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDrop },
			{ "+!", "+!", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPlusStore },
			{ "2!", "2!", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTwoStore },
			{ "2@", "2@", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTwoFetch },
			{ "!", "!", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkStore },
			{ "@", "@", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFetch },
			{ "CTOGGLE", "CTOGGLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCToggle },
			{ "FLIP", "FLIP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFlip },
			{ "C!", "C!", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCStore },
			{ "C@", "C@", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFetch },
			{ "PERFORM", "PERFORM", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPerform },
			{ "EXECUTE", "EXECUTE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkExecute },
			{ "0=EXIT", "0=EXIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZeroEqualExit },
			{ "?EXIT", "?EXIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkQExit },
			{ "UNNEST", "UNNEST", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUnnest },
			{ "EXIT", "EXIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkExit },
			{ "RDROP", "RDROP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRDrop },
			{ "R@", "R@", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRFetch },
			{ "R>", "R>", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRFrom },
			{ ">R", ">R", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkToR },
			{ "RP!", "RP!", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRPStore },
			{ "RP@", "RP@", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRPFetch },
			{ "UP!", "UP!", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUPStore },
			{ "UP@", "UP@", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUPFetch },
			{ "SP!", "SP!", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSPStore },
			{ "SP@", "SP@", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSPFetch },
			{ "UDP", "UDP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUdp },
			{ "VOC-LINK", "VOC-LINK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkVocLink },
			{ "ERRORHANDLER", "ERRORHANDLER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkErrorhandler },
			{ "INPUT", "INPUT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkInput },
			{ "OUTPUT", "OUTPUT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOutput },
			{ "BASE", "BASE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBase },
			{ "OFFSET", "OFFSET", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOffset },
			{ "DP", "DP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDP },
			{ "R0", "R0", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkR0 },
			{ "S0", "S0", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkS0 },
			{ "ORIGIN", "ORIGIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOrigin },
			{ "NOOP", "NOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNoop },
			{ "RECOVER", "RECOVER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRecover },
			{ "IPSAVE", "IPSAVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkIPSave },
			{ "UP", "UP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUP },
			{ "RP", "RP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRP }
};
#endif

#if H2O_FORTH_PRIMITIVES == VOLK_PC_FORTH
static const typedef_forthWord forthWords[] = { /* PC */
			{ "PLIST", "PLIST", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPList },
			{ "LISTING", "LISTING", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkListing },
			{ "DOCUMENT", "DOCUMENT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDocument },
			{ "PTHRU", "PTHRU", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPThru },
			{ "+PRINT", "+PRINT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPlusPrint },
			{ "PRINT", "PRINT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPrint },
			{ "PRINTER", "PRINTER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPrinter },
			{ "GRAPHICS.PRN", "GRAPHICS.PRN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkGraphicsDotPrn },
			{ "FIX", "FIX", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFix },
			{ "SAVESYSTEM", "SAVESYSTEM", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSaveSystem },
			{ "EDIT", "EDIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkEdit },
			{ "L", "L", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkL },
			{ "ED", "ED", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkED },
			{ "V", "V", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkV },
			{ "#DEL", "#DEL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNumDel },
			{ "CTRL", "CTRL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCtrl },
			{ "UPDATED?", "UPDATED?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUpdatedQ },
			{ "EDITOR", "EDITOR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkEditor },
			{ "CAPS", "CAPS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCaps },
			{ "CUROFF", "CUROFF", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCurOff },
			{ "CURON", "CURON", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCurOn },
			{ "#ESC", "#ESC", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNumEsc },
			{ "EDITOR.FB", "EDITOR.FB", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkEditorDotFb },
			{ "LDUMP", "LDUMP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLDump },
			{ "DUMP", "DUMP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDump },
			{ "TIMES", "TIMES", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTimes },
			{ "OFTEN", "OFTEN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOften },
			{ "TOOLS", "TOOLS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTools },
			{ "TOOLS.FB", "TOOLS.FB", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkToolsDotFb },
			{ "TIME@", "TIME@", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTimeFetch },
			{ "DATE@", "DATE@", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDateFetch },
			{ "MINUTES", "MINUTES", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMinutes },
			{ "SECONDS", "SECONDS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSeconds },
			{ "WAIT", "WAIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkWait },
			{ "TIME", "TIME", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTime },
			{ "TILL", "TILL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTill },
			{ "TIMEOUT?", "TIMEOUT?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTimeoutQ },
			{ "TICKS", "TICKS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTicks },
			{ "TIMER.FB", "TIMER.FB", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTimerDotFb },
			{ "TASK", "TASK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTask },
			{ "RENDEZVOUS", "RENDEZVOUS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRendezvous },
			{ "WAKE", "WAKE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkWake },
			{ "SLEEP", "SLEEP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSleep },
			{ "ACTIVATE", "ACTIVATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkActivate },
			{ "PASS", "PASS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPass },
			{ "MULTITASK", "MULTITASK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMultiTask },
			{ "SINGLETASK", "SINGLETASK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSingleTask },
			{ "STOP", "STOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkStop },
			{ "TASKER.FB", "TASKER.FB", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTaskerDotFb },
			{ "CALL", "CALL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCall },
			{ "MSDOS", "MSDOS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMsdos },
			{ "FTYPE", "FTYPE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFType },
			{ "DELETE", "DELETE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDelete },
			{ "FCOPY", "FCOPY", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFcopy },
			{ "RD", "RD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRd },
			{ "CD", "CD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCd },
			{ "MD", "MD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMd },
			{ "REN", "REN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRen },
			{ "DIR", "DIR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDir },
			{ "PATH", "PATH", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPath },
			{ ".PATH", ".PATH", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDotPath },
			{ "MAKEFILE", "MAKEFILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMakefile },
			{ "MAKE", "MAKE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMake },
			{ "EMPTYFILE", "EMPTYFILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkEmptyFile },
			{ "KILLFILE", "KILLFILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkKillfile },
			{ "?FILE", "?FILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkQFile },
			{ "FILES", "FILES", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFiles },
			{ "MORE", "MORE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMore },
			{ "CONVEY", "CONVEY", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkConvey },
			{ "COPY", "COPY", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCopy },
			{ "USED?", "USED?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUsedQ },
			{ "DTA", "DTA", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDTA },
			{ "FSWAP", "FSWAP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFSwap },
			{ "DOS.FB", "DOS.FB", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDosDotFb },
			{ "BYE", "BYE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBye },
			{ "(.STATUS", "(.STATUS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZDotStatus },
			{ ".SPACE", ".SPACE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDotSpace },
			{ ".SCR", ".SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDotScr },
			{ ".DR", ".DR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDotDR },
			{ "(.DRV", "(.DRV", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZDotDrv },
			{ ".SP", ".SP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDotSP },
			{ ".BASE", ".BASE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDotBase },
			{ "(PAGE", "(PAGE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZPage },
			{ "(CR", "(CR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZCr },
			{ "SCROLL", "SCROLL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkScroll },
			{ "(DEL", "(DEL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZDel },
			{ "BLANKLINE", "BLANKLINE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBlankLine },
			{ "BRIGHT", "BRIGHT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBright },
			{ "UNDERLINE", "UNDERLINE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUnderline },
			{ "INVERS", "INVERS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkInvers },
			{ "NORMAL", "NORMAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNormal },
			{ "SETPAGE", "SETPAGE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSetPage },
			{ "CURSHAPE", "CURSHAPE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCurShape },
			{ "CUR!", "CUR!", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCurStore },
			{ "CURAT?", "CURAT?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCurAtQ },
			{ "(AT?", "(AT?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZAtQ },
			{ "(AT", "(AT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZAt },
			{ "(EMIT", "(EMIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZEmit },
			{ "(TYPE", "(TYPE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZType },
			{ "FULL", "FULL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFull },
			{ "WINDOW", "WINDOW", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkWindow },
			{ "CATT", "CATT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCatt },
			{ "(AREA", "(AREA", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZArea },
			{ "TERMINAL", "TERMINAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTerminal },
			{ " AREA:", " AREA:", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAreaColon },
			{ "STATUS", "STATUS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkStatus },
			{ "AREA", "AREA", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkArea },
			{ "MULTI.VID", "MULTI.VID", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMultiDotVid },
			{ ".IF", ".IF", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDotIf },
			{ ".ELSE", ".ELSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDotElse },
			{ ".THEN", ".THEN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDotThen },
			{ "?\"", "?\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkQQuote },
			{ ">MONTHS", ">MONTHS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkToMonth },
			{ "ATTACH", "ATTACH", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAttach },
			{ "APPEND", "APPEND", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAppend },
			{ "RESTOREVIDEO", "RESTOREVIDEO", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRestoreVideo },
			{ "SAVEVIDEO", "SAVEVIDEO", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSaveVideo },
			{ "VIDEO@", "VIDEO@", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkVideoFetch },
			{ "C/DIS", "C/DIS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCSlashDIS },
			{ "LFREE", "LFREE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLFree },
			{ "LALLOCATE", "LALLOCATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLAllocate },
			{ "ARGUMENTS", "ARGUMENTS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkArguments },
			{ "ABORT(", "ABORT(", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAbortZ },
			{ "ADR", "ADR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAdr },
			{ "U?", "U?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUQ },
			{ "TAB", "TAB", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTab },
			{ ".FIELD", ".FIELD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDotField },
			{ ">EXPECT", ">EXPECT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkToExpect },
			{ "STASH", "STASH", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkStash },
			{ "BLANK", "BLANK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBlank },
			{ "CLS", "CLS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCls },
			{ "'NAME", "'NAME", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTickName },
			{ "SAV", "SAV", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSav },
			{ "EXTEND.FB", "EXTEND.FB", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkExtendDotFb },
			{ "LABEL", "LABEL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLabel },
			{ ">LABEL", ">LABEL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkToLabel },
			{ "CODE", "CODE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCode },
			{ ";CODE", ";CODE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSemicolonCode },
			{ "ASSEMBLER", "ASSEMBLER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAssembler },
			{ "END-CODE", "END-CODE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkEndCode },
			{ "ASSEMBLER", "ASSEMBLER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAssembler },
			{ "ASM.FB", "ASM.FB", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkASmDotFb },
			{ "Volks4TH.SYS", "Volk4TH.SYS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkVolks4THDotSys },
			{ "FORTH-83", "FORTH-83", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkForth83 },
			{ "HELP", "HELP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkHelp },
			{ "VIEW", "VIEW", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkView },
			{ "SAVESYSTEM", "SAVESYSTEM", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSaveSystem },
			{ "SAVEFILE", "SAVEFILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSaveFile },
			{ "LFSAVE", "LFSAVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLFSave },
			{ "H:", "H:", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkHColon },
			{ "G:", "G:", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkGColon },
			{ "F:", "F:", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFColon },
			{ "E:", "E:", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkEColon },
			{ "D:", "D:", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDColon },
			{ "C:", "C:", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCColon },
			{ "B:", "B:", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBColon },
			{ "A:", "A:", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAColon },
			{ "CAPACITY", "CAPACITY", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCapacity },
			{ "DRV", "DRV", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDrv },
			{ "DRIVE", "DRIVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDrive },
			{ "INCLUDE", "INCLUDE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkInclude },
			{ "LOADFROM", "LOADFROM", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLoadFrom },
			{ "FROM", "FROM", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFrom },
			{ "USE", "USE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUse },
			{ "ASSIGN", "ASSIGN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAssign },
			{ "OPEN", "OPEN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOpen },
			{ "CLOSE", "CLOSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkClose },
			{ "PUSHFILE", "PUSHFILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPushFile },
			{ "FILE?", "FILE?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFileQ },
			{ "[FCB]", "[FCB]", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkXFCB },
			{ "KERNEL.SCR", "KERNEL.SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkKernelDotScr },
			{ "FILE", "FILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFile },
			{ "DIRECT", "DIRECT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDirect },
			{ "(R/W", "(R/W", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZRSlashW },
			{ ">DRIVE", ">DRIVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkToDrive },
			{ "DOS", "DOS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDos },
			{ "ASCIZ", "ASCIZ", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAsciz },
			{ ">ASCIZ", ">ASCIZ", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkToAsciz },
			{ "COUNTED", "COUNTED", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCounted },
			{ "PC!", "PC!", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPCStore },
			{ "PC@", "PC@", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPCFetch },
			{ "LIST!", "LIST!", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkListStore },
			{ "DISPLAY", "DISPLAY", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDisplay },
			{ "TIPP", "TIPP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTipp },
			{ "BELL", "BELL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBell },
			{ "(PAGE", "(PAGE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZPage },
			{ "(AT?", "(AT?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZAtQ },
			{ "(AT", "(AT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZAt },
			{ "(DEL", "(DEL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZDel },
			{ "(CR", "(CR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZCr },
			{ "(EMIT", "(EMIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZEmit },
			{ "C/COL", "C/COL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCSlashCol },
			{ "C/ROW", "C/ROW", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCSlashRow },
			{ "CHAROUT", "CHAROUT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCharOut },
			{ "KEYBOARD", "KEYBOARD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkKeyboard },
			{ "(EXPECT", "(EXPECT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZExpect },
			{ "(DECODE", "(DECODE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZDecode },
			{ "#CR", "#CR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNumCr },
			{ "#LF", "#LF", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNumLf },
			{ "#TAB", "#TAB", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNumTab },
			{ "#BS", "#BS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNumBs },
			{ "#BEL", "#BEL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNumBel },
			{ "(KEY", "(KEY", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZKey },
			{ "EMPTY-KEYS", "EMPTY-KEYS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkEmptyKeys },
			{ "(KEY?", "(KEY?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZKeyQ },
			{ "(KEY@", "(KEY@", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZKeyFetch },
			{ "LMOVE", "LMOVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLMove },
			{ "LTYPE", "LTYPE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLType },
			{ "L!", "L!", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLStore },
			{ "L@", "L@", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLFetch },
			{ "LC!", "LC!", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLCStore },
			{ "LC@", "LC@", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLCFetch },
			{ "COLD", "COLD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCold },
			{ "BYE", "BYE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBye },
			{ "RETURN_CODE", "RETURN_CODE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkReturnCode },
			{ "RESTART", "RESTART", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRestart },
			{ "'COLD", "'COLD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTickCold },
			{ "'RESTART", "'RESTART", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTickRestart },
			{ "EXPECT", "EXPECT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkExpect },
			{ "DECODE", "DECODE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDecode },
			{ "KEY?", "KEY?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkKeyQ },
			{ "KEY", "KEY", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkKey },
			{ "INPUT:", "INPUT:", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkInputColon },
			{ "COL", "COL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCol },
			{ "ROW", "ROW", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRow },
			{ "AT?", "AT?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAtQ },
			{ "AT", "AT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAt },
			{ "PAGE", "PAGE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPage },
			{ "DEL", "DEL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDel },
			{ "TYPE", "TYPE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkType },
			{ "CR", "CR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCr },
			{ "EMIT", "EMIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkEmit },
			{ "OUTPUT:", "OUTPUT:", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOutputColon },
			{ "?CR", "?CR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkQCr },
			{ "STOP?", "STOP?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkStopQ },
			{ "#ESC", "#ESC", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNumEsc },
			{ "SAVE", "SAVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSave },
			{ "EMPTY", "EMPTY", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkEmpty },
			{ "FORGET", "FORGET", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkForget },
			{ "(FORGET", "(FORGET", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZForget },
			{ "CLEAR", "CLEAR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkClear },
			{ "TRIM", "TRIM", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTrim },
			{ "CUSTOM-REMOVE", "CUSTOM-REMOVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCustomRemove },
			{ "REMOVE", "REMOVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRemove },
			{ "ALL-BUFFERS", "ALL-BUFFERS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAllBuffers },
			{ "UPDATE", "UPDATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUpdate },
			{ "BLOCK", "BLOCK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBlock },
			{ "BUFFER", "BUFFER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBuffer },
			{ "ISFILE@", "ISFILE@", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkIsFileFetch },
			{ "(BLOCK", "(BLOCK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZBlock },
			{ "(BUFFER", "(BUFFER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZBuffer },
			{ "CORE?", "CORE?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCoreQ },
			{ "EMPTYBUF", "EMPTYBUF", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkEmptyBuf },
			{ "(CORE?", "(CORE?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZCoreQ },
			{ "?DISKERROR", "?DISKERROR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkQDiskError },
			{ "ERROR#", "ERROR#", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkErrorNum },
			{ "R/W", "R/W", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRSlashW },
			{ "B/BLK", "B/BLK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBSlashBlk },
			{ "B/BUF", "B/BUF", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBSlashBuf },
			{ "PREV", "PREV", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPrev },
			{ "FROMFILE", "FROMFILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFromFile },
			{ "ISFILE", "ISFILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkIsFile },
			{ "UNLOCK", "UNLOCK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUnlock },
			{ "LOCK", "LOCK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLock },
			{ "PAUSE", "PAUSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPause },
			{ "LIST", "LIST", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkList },
			{ "L/S", "L/S", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLSlashS },
			{ "C/L", "C/L", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCSlashL },
			{ ".S", ".S", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDotS },
			{ "U.", "U.", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUDot },
			{ "U.R", "U.R", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUDotR },
			{ ".", ".", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDot },
			{ ".R", ".R", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDotR },
			{ "D.", "D.", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDDot },
			{ "D.R", "D.R", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDDotR },
			{ "#S", "#S", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNumS },
			{ "#", "#", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNum },
			{ "SIGN", "SIGN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSign },
			{ "#>", "#>", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNumGreater },
			{ "<#", "<#", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLessNum },
			{ "HOLD", "HOLD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkHold },
			{ "SPACES", "SPACES", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSpaces },
			{ "SPACE", "SPACE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSpace },
			{ "-TRAILING", "-TRAILING", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTrailing },
			{ "BL", "BL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBl },
			{ "ERROR\"", "ERROR\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkErrorQuote },
			{ "ABORT\"", "ABORT\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAbortQuote },
			{ "(ABORT\"", "(ABORT\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZAbortQuote },
			{ "(ERROR", "(ERROR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZError },
			{ "R#", "R#", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRNum },
			{ "SCR", "SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkScr },
			{ "ABORT", "ABORT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAbort },
			{ "'ABORT", "'ABORT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTickAbort },
			{ "END-TRACE", "END-TRACE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkEndTrace },
			{ "STANDARDI/O", "STANDARDI/O", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkStandardISlashO },
			{ "QUIT", "QUIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkQuit },
			{ "'QUIT", "'QUIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTickQuit },
			{ "(QUIT", "(QUIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZQuit },
			{ "PROMPT", "PROMPT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPrompt },
			{ "(PROMPT", "(PROMPT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZPrompt },
			{ "DEPTH", "DEPTH", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDepth },
			{ "RDEPTH", "RDEPTH", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRDepth },
			{ "-->", "-->", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTo },
			{ "+THRU", "+THRU", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPlusThru },
			{ "THRU", "THRU", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkThru },
			{ "+LOAD", "+LOAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPlusLoad },
			{ "LOAD", "LOAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLoad },
			{ "(LOAD", "(LOAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZLoad },
			{ ".STATUS", ".STATUS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDotStatus },
			{ "PUSH", "PUSH", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPush },
			{ "?STACK", "?STACK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkQStack },
			{ "IS", "IS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkIs },
			{ "(IS", "(IS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZIs },
			{ "]", "]", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRightBracket },
			{ "[", "[", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLeftBracket },
			{ "INTERPRET", "INTERPRET", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkInterpret },
			{ "PARSER", "PARSER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkParser },
			{ "NO.EXTENSIONS", "NO.EXTENSIONS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNoDotExtensions },
			{ "NOTFOUND", "NOTFOUND", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNotFound },
			{ "NULLSTRING?", "NULLSTRING?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNullStringQ },
			{ "[']", "[']", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkXTick },
			{ "[COMPILE]", "[COMPILE]", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkXCompile },
			{ "'", "'", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTick },
			{ "FIND", "FIND", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFind },
			{ "(FIND", "(FIND", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZFind },
			{ "WORDS", "WORDS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkWords },
			{ "VOCS", "VOCS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkVocs },
			{ "ORDER", "ORDER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOrder },
			{ "DEFINITIONS", "DEFINITIONS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDefinitions },
			{ "ONLYFORTH", "ONLYFORTH", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOnlyForth },
			{ "ONLY", "ONLY", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOnly },
			{ "ROOT", "ROOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRoot },
			{ "FORTH", "FORTH", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkForth },
			{ "VOCABULARY", "VOCABULARY", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkVocabulary },
			{ "TOSS", "TOSS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkToss },
			{ "ALSO", "ALSO", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAlso },
			{ "CONTEXT", "CONTEXT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkContext },
			{ "CURRENT", "CURRENT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCurrent },
			{ "VP", "VP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkVp },
			{ "DEFER", "DEFER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDefer },
			{ "ALIAS", "ALIAS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAlias },
			{ "USER", "USER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUser },
			{ "UALLOT", "UALLOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUAllot },
			{ "CONSTANT", "CONSTANT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkConstant },
			{ ";", ";", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSemicolon },
			{ ":", ":", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkColon },
			{ "CREATE:", "CREATE:", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCreateColon },
			{ ".NAME", ".NAME", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDotName },
			{ "BODY>", "BODY>", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBodyFrom },
			{ ">BODY", ">BODY", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkToBody },
			{ "NAME>", "NAME>", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNameFrom },
			{ "(NAME>", "(NAME>", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZNameFrom },
			{ ">NAME", ">NAME", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkToName },
			{ "NFA?", "NFA?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNFaq },
			{ "VARIABLE", "VARIABLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkVariable },
			{ "CREATE", "CREATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCreate },
			{ "MAKEVIEW", "MAKEVIEW", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMakeView },
			{ "WARNING", "WARNING", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkWarning },
			{ "HALIGN", "HALIGN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkHAlign },
			{ "ALIGN", "ALIGN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAlign },
			{ "EVEN", "EVEN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkEven },
			{ "|", "|", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkVerticalBar },
			{ "?HEAD", "?HEAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkQHead },
			{ "DOES>", "DOES>", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDoes },
			{ "(;CODE", "(;CODE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZSemicolonCode },
			{ "HEAP?", "HEAP?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkHeapQ },
			{ "HEAP", "HEAP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkHeap },
			{ "HALLOT", "HALLOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkHallot },
			{ "CLEARSTACK", "CLEARSTACK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkClearStack },
			{ "RESTRICT", "RESTRICT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRestrict },
			{ "IMMEDIATE", "IMMEDIATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkImmediate },
			{ "RECURSIVE", "RECURSIVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRecursive },
			{ "REVEAL", "REVEAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkReveal },
			{ "HIDE", "HIDE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkHide },
			{ "LAST'", "LAST'", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLastTick },
			{ "LAST", "LAST", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLast },
			{ "NUMBER", "NUMBER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNumber },
			{ "NUMBER?", "NUMBER?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNumberQ },
			{ "DPL", "DPL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDpl },
			{ "CONVERT", "CONVERT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkConvert },
			{ "ACCUMULATE", "ACCUMULATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAccumulate },
			{ "DIGIT?", "DIGIT?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDigitQ },
			{ "DECIMAL", "DECIMAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDecimal },
			{ "HEX", "HEX", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkHex },
			{ "\\NEEDS", "\\NEEDS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBackslashNeeds },
			{ "HAVE", "HAVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkHave },
			{ "\\\\", "\\\\", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBackslashBackslash },
			{ "\\", "\\", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBackslash },
			{ ".(", ".(", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDotParen },
			{ "(", "(", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkParen },
			{ ".\"", ".\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDotQuote },
			{ "(.\"", "(.\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkParenDotQuote },
			{ "\"", "\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkQuote },
			{ "(\"", "(\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkParenQuote },
			{ "\"LIT", "\"LIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkQuoteLit },
			{ ",\"", ",\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCommaQuote },
			{ "ASCII", "ASCII", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAscii },
			{ "STATE", "STATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkState },
			{ "NAME", "NAME", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkName },
			{ "PARSE", "PARSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkParse },
			{ "WORD", "WORD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkWord },
			{ "SOURCE", "SOURCE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSource },
			{ "LOADFILE", "LOADFILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLoadFile },
			{ "UPPER", "UPPER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUpper },
			{ "CAPITAL", "CAPITAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCapital },
			{ "(CAPITAL", "(CAPITAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZCapital },
			{ "/STRING", "/STRING", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSlashString },
			{ "SCAN", "SCAN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkScan },
			{ "SKIP", "SKIP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSkip },
			{ "QUERY", "QUERY", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkQuery },
			{ "TIB", "TIB", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTib },
			{ "SPAN", "SPAN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSpan },
			{ "BLK", "BLK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBlk },
			{ ">IN", ">IN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkToIn },
			{ ">TIB", ">TIB", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkToTib },
			{ "#TIB", "#TIB", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNumTib },
			{ "COMPILE", "COMPILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCompile },
			{ "PAD", "PAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPad },
			{ "C,", "C,", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCComma },
			{ ",", ",", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkComma },
			{ "ALLOT", "ALLOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAllot },
			{ "HERE", "HERE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkHere },
			{ "ERASE", "ERASE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkErase },
			{ "FILL", "FILL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFill },
			{ "COUNT", "COUNT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCount },
			{ "PLACE", "PLACE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPlace },
			{ "MOVE", "MOVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMove },
			{ "CMOVE>", "CMOVE>", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCMoveTo },
			{ "CMOVE", "CMOVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCMove },
			{ "UD/MOD", "UD/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUdSlashMod },
			{ "U/MOD", "U/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUSlashMod },
			{ "*/", "*/", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkStarSlash },
			{ "*/MOD", "*/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkStarSlashMod },
			{ "MOD", "MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMod },
			{ "/", "/", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSlash },
			{ "2/", "2/", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTwoSlash },
			{ "/MOD", "/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSlashMod },
			{ "M/MOD", "M/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMSlashMod },
			{ "UM/MOD", "UM/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUmSlashMod },
			{ "2*", "2*", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTwoStar },
			{ "*", "*", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkStar },
			{ "M*", "M*", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMStar },
			{ "UM*", "UM*", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUmStar },
			{ "LEAVE", "LEAVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLeave },
			{ "*LOOP", "*LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkStarLoop },
			{ "LOOP", "LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLoop },
			{ "?DO", "?DO", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkQDo },
			{ "DO", "DO", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDo },
			{ "UNTIL", "UNTIL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUntil },
			{ "REPEAT", "REPEAT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRepeat },
			{ "WHILE", "WHILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkWhile },
			{ "BEGIN", "BEGIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBegin },
			{ "ELSE", "ELSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkElse },
			{ "THEN", "THEN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkThen },
			{ "IF", "IF", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkIf },
			{ "?PAIRS", "?PAIRS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkQPairs },
			{ "<RESOLVE", "<RESOLVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFromResolve },
			{ "<MARK", "<MARK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFromMark },
			{ ">RESOLVE", ">RESOLVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkToResolve },
			{ ">MARK", ">MARK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkToMark },
			{ "?BRANCH", "?BRANCH", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkQBranch },
			{ "BRANCH", "BRANCH", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBranch },
			{ "J", "J", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkJ },
			{ "I", "I", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkI },
			{ "(+LOOP", "(+LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZPlusLoop },
			{ "(LOOP", "(LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZLoop },
			{ "BOUNDS", "BOUNDS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBounds },
			{ "ENDLOOP", "ENDLOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkEndLoop },
			{ "(?DO", "(?DO", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZQDo },
			{ "(DO", "(DO", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZDo },
			{ "DABS", "DABS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDAbs },
			{ "ABS", "ABS", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAbs },
			{ "EXTEND", "EXTEND", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkExtend },
			{ "UMAX", "UMAX", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUMax },
			{ "UMIN", "UMIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUMin },
			{ "MAX", "MAX", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMax },
			{ "MIN", "MIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMin },
			{ "D<", "D<", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDLess },
			{ "D=", "D=", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDEqual },
			{ "D0=", "D0=", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDZeroEqual },
			{ "CASE?", "CASE?", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCaseQ },
			{ "UWITHIN", "UWITHIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUWithin },
			{ "=", "=", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkEqual },
			{ "0<", "0<", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZeroLess },
			{ "0>", "0>", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZeroGreater },
			{ ">", ">", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkGreater },
			{ "<", "<", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLess },
			{ "U>", "U>", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUGreater },
			{ "U<", "U<", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkULess },
			{ "0<>", "0<>", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZeroUnequal },
			{ "0=", "0=", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZeroEqual },
			{ "LITERAL", "LITERAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLiteral },
			{ "CLIT", "CLIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCLit },
			{ "LIT", "LIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLit },
			{ "OFF", "OFF", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOff },
			{ "ON", "ON", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOn },
			{ "-1", "-1", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMinusOne },
			{ "4", "4", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFour },
			{ "3", "3", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkThree },
			{ "2", "2", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTwo },
			{ "1", "1", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOne },
			{ "0", "0", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZero },
			{ "FALSE", "FALSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFalse },
			{ "TRUE", "TRUE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTrue },
			{ "4-", "", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFourMinus },
			{ "2-", "", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTwoMinus },
			{ "1-", "", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOneMinus },
			{ "4+", "", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFourPlus },
			{ "3+", "", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkThreePlus },
			{ "2+", "", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTwoPlus },
			{ "1+", "1+", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOnePlus },
			{ "D+", "D+", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDPlus },
			{ "DNEGATE", "DNEGATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDNegate },
			{ "-", "-", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMinus },
			{ "NEGATE", "NEGATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNegate },
			{ "+", "+", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPlus },
			{ "XOR", "XOR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkXOR },
			{ "OR", "OR", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOr },
			{ "AND", "AND", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAnd },
			{ "NOT", "NOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNot },
			{ "2OVER", "2OVER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTwoOver },
			{ "2DUP", "2DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTwoDup },
			{ "2DROP", "2DROP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTwoDrop },
			{ "2SWAP", "2SWAP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTwoSwap },
			{ "-ROLL", "-ROLL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMinusRoll },
			{ "ROLL", "ROLL", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRoll },
			{ "PICK", "PICK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPick },
			{ "-ROT", "-ROT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkMinusRot },
			{ "UNDER", "UNDER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUnder },
			{ "NIP", "NIP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNip },
			{ "ROT", "ROT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRot },
			{ "OVER", "OVER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOver },
			{ "?DUP", "?DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkQDup },
			{ "DUP", "DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDup },
			{ "SWAP", "SWAP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSwap },
			{ "DROP", "DROP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDrop },
			{ "+!", "+!", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPlusStore },
			{ "2!", "2!", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTwoStore },
			{ "2@", "2@", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkTwoFetch },
			{ "!", "!", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkStore },
			{ "@", "@", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFetch },
			{ "FLIP", "FLIP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFlip },
			{ "CTOGGLE", "CTOGGLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCToggle },
			{ "C!", "C!", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCStore },
			{ "C@", "C@", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCFetch },
			{ "PERFORM", "PERFORM", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkPerform },
			{ "EXECUTE", "EXECUTE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkExecute },
			{ "0=EXIT", "0=EXIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkZeroEqualExit },
			{ "?EXIT", "?EXIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkQExit },
			{ "UNNEST", "UNNEST", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUnnest },
			{ "EXIT", "EXIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkExit },
			{ "RDROP", "RDROP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRDrop },
			{ "R@", "R@", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRFetch },
			{ "R>", "R>", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRFrom },
			{ ">R", ">R", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkToR },
			{ "RP!", "RP!", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRPStore },
			{ "RP@", "RP@", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRPFetch },
			{ "B/SEG", "B/SEG", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBSlashSeg },
			{ "DS@", "DS@", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDSFetch },
			{ "UP!", "UP!", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUPStore },
			{ "UP@", "UP@", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUPFetch },
			{ "SP!", "SP!", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSPStore },
			{ "SP@", "SP@", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkSPStore },
			{ "UDP", "UDP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkUdp },
			{ "FILE-LINK", "FILE-LINK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkFileLink },
			{ "VOC-LINK", "VOC-LINK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkVocLink },
			{ "ABORTED", "ABORTED", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkAborted },
			{ "ERRORHANDLER", "ERRORHANDLER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkErrorhandler },
			{ "INPUT", "INPUT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkInput },
			{ "OUTPUT", "OUTPUT", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOutput },
			{ "BASE", "BASE", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkBase },
			{ "OFFSET", "OFFSET", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOffset },
			{ "DP", "DP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDP },
			{ "R0", "R0", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkR0 },
			{ "S0", "S0", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkS0 },
			{ "NOOP", "NOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNoop },
			{ "RECOVER", "RECOVER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRecover },
			{ "NEXT-LINK", "NEXT-LINK", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkNextLink },
			{ "ORIGIN", "ORIGIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkOrigin },
			{ "H2OFORTH", "H2OFORTH", TRUE, FALSE, FALSE, MAX_FORTHWORD_ID, (forthOperation)NULL }
};
#endif

#endif
