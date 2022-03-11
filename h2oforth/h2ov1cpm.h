#ifndef H2OVOLK1
#define H2OVOLK1

/* The "volksFORTH" ( Forth-83 ) FORTH, for C64, ATARI-ST, CP/M, PC */

/* Definitions */
void volkBuffers(void);
void volkRelocateDotScr(void);
void volkSpool(void);
void volkSpooler(void);
void volkListing(void);
void volkDocument(void);
void volkPThru(void);
void volkPrintableQ(void);
void volkPrint(void);
void volkPrinter(void);
void volkShadow(void);
void volkPrinterDotScr(void);
void volkTasks(void);
void volkTickS(void);
void volkRendezvous(void);
void volkTask(void);
void volkWake(void);
void volkSleep(void);
void volkActivate(void);
void volkPass(void);
void volkMultiTask(void);
void volkSingleTask(void);
void volkStop(void);
void volkTaskerDotScr(void);
void volkSee(void);
void volkSeeDotScr(void);
void volkExternal(void);
void volkInternal(void);
void volkTraceTick(void);
void volkDebug(void);
void volkDump(void);
void volkTools(void);
void volkToolsDotScr(void);
void volkFix(void);
void volkView(void);
void volkSaveSystem(void);
void volkL(void);
void volkV(void);
void volkNumDel(void);
void volkCtrl(void);
void volkUpdatedQ(void);
void volkEditor(void);
void volkQAbortZ(void);
void volkQEnough(void);
void volkBlank(void);
void volkReplace(void);
void volkInsert(void);
void volkDelete(void);
void volkEditorDotScr(void);
void volkSaveSysDotScr(void);
void volkConvey(void);
void volkCopy(void);
void volkCopyDotScr(void);
void volkAnsi(void);
void volkTerminalDotScr(void);
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
void volkDumb(void);
void volkCurRite(void);
void volkCurLeft(void);
void volkLocate(void);
void volkDark(void);
void volkRvsOff(void);
void volkRvsOn(void);
void volkCurOff(void);
void volkCurOn(void);
void volkTerminalColon(void);
void volkTermColon(void);
void volkXinOutDotScr(void);
void volkLabel(void);
void volkToLabel(void);
void volkSemicolonCode(void);
void volkCode(void);
void volkAss8080DotScr(void);
void volkStartupDotScr(void);
void volkFileIntDotScr(void);
void volkSourceDotScr(void);
void volkDotBlk(void);
void volkSaveFile(void);
void volkJColon(void);
void volkDColon(void);
void volkCColon(void);
void volkBColon(void);
void volkAColon(void);
void volkDriveColon(void);
void volkMore(void);
void volkDirQuote(void);
void volkDir(void);
void volkFilesQuote(void);
void volkFiles(void);
void volkEof(void);
void volkInclude(void);
void volkLoadFrom(void);
void volkFrom(void);
void volkMakefile(void);
void volkUse(void);
void volkMake(void);
void volkAssign(void);
void volkClose(void);
void volkOpen(void);
void volkDotBuffers(void);
void volkZView(void);
void volkZMakeView(void);
void volkList(void);
void volkFileQ(void);
void volkDirect(void);
void volkFile(void);
void volkForthFiles(void);
void volkCapacity(void);
void volkForth83(void);
void volkAssembler(void);
void volkDotSize(void);
void volkPostlude(void);
void volkZRSlashW(void);
void volkDrvInit(void);
void volkRecSlashBlk(void);
void volkBSlashRec(void);
void volkKeyboard(void);
void volkZExpect(void);
void volkZDecode(void);
void volkDisplay(void);
void volkTipp(void);
void volkZDel(void);
void volkZKey(void);
void volkGetKey(void);
void volkZKeyQ(void);
void volkConStore(void);
void volkNumFf(void);
void volkNumBel(void);
void volkNumTab(void);
void volkNumEsc(void);
void volkNumLf(void);
void volkNumCr(void);
void volkNumBs(void);
void volkDos(void);
void volkQuoteSearch(void);
void volkRestart(void);
void volkCold(void);
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
void volkQCr(void);
void volkStopQ(void);
void volkBye(void);
void volkSave(void);
void volkEmpty(void);
void volkForget(void);
void volkZForget(void);
void volkClear(void);
void volkCustomRemove(void);
void volkRemove(void);
void volkAllBuffers(void);
void volkFreeBuffer(void);
void volkAllotBuffer(void);
void volkFirst(void);
void volkLimit(void);
void volkFlush(void);
void volkEmptyBuffers(void);
void volkSaveBuffers(void);
void volkSaveDosBuffers(void);
void volkUpdate(void);
void volkBlock(void);
void volkBuffer(void);
void volkIsFileFetch(void);
void volkZBlock(void);
void volkZBuffer(void);
void volkCoreQ(void);
void volkEmptyBuf(void);
void volkRSlashW(void);
void volkDiskErr(void);
void volkZDiskErr(void);
void volkZCoreQ(void);
void volkBSlashBlk(void);
void volkBSlashBuf(void);
void volkPrev(void);
void volkFromFile(void);
void volkIsFile(void);
void volkUnlock(void);
void volkLock(void);
void volkPause(void);
void volkEndTrace(void);
void volkList(void);
void volkLSlashS(void);
void volkCSlashL(void);
void volkDotS(void);
void volkUDot(void);
void volkDot(void);
void volkDDot(void);
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
void volkBl(void);
void volkTrailing(void);
void volkErrorQuote(void);
void volkAbortQuote(void);
void volkZAbortQuote(void);
void volkZError(void);
void volkRNum(void);
void volkScr(void);
void volkAbort(void);
void volkTickAbort(void);
void volkStandardISlashO(void);
void volkQuit(void);
void volkTickQuit(void);
void volkZQuit(void);
void volkPrompt(void);
void volkZPrompt(void);
void volkDepth(void);
void volkRDepth(void);
void volkTo(void);
void volkPlusThru(void);
void volkThru(void);
void volkPlusLoad(void);
void volkLoad(void);
void volkZLoad(void);
void volkPush(void);
void volkDotStatus(void);
void volkQStack(void);
void volkIs(void);
void volkZIs(void);
void volkRightBracket(void);
void volkLeftBracket(void);
void volkInterpret(void);
void volkParser(void);
void volkNotFound(void);
void volkNoDotExtensions(void);
void volkNullStringQ(void);
void volkXTick(void);
void volkXCompile(void);
void volkTick(void);
void volkFind(void);
void volkZFind(void);
void volkWords(void);
void volkOrder(void);
void volkDefinitions(void);
void volkOnlyForth(void);
void volkOnly(void);
void volkRoot(void);
void volkForth(void);
void volkVocabulary(void);
void volkToss(void);
void volkAlso(void);
void volkContext(void);
void volkCurrent(void);
void volkVp(void);
void volkDefer(void);
void volkAlias(void);
void volkUser(void);
void volkUAllot(void);
void volkVariable(void);
void volkConstant(void);
void volkSemicolon(void);
void volkColon(void);
void volkCreateColon(void);
void volkDotName(void);
void volkBodyFrom(void);
void volkToBody(void);
void volkNameFrom(void);
void volkZNameFrom(void);
void volkToName(void);
void volkNFaq(void);
void volkCreate(void);
void volkCreateZ(void);
void volkMakeView(void);
void volkWarning(void);
void volkHAlign(void);
void volkAlign(void);
void volkEven(void);
void volkVerticalBar(void);
void volkQHead(void);
void volkDoes(void);
void volkZSemicolonCode(void);
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
void volkDpl(void);
void volkConvert(void);
void volkAccumulate(void);
void volkDigitQ(void);
void volkDecimal(void);
void volkHex(void);
void volkBackslashNeeds(void);
void volkBackslashBackslash(void);
void volkBackslash(void);
void volkDotParen(void);
void volkParen(void);
void volkDotQuote(void);
void volkParenDotQuote(void);
void volkQuote(void);
void volkParenQuote(void);
void volkCommaQuote(void);
void volkQuoteLit(void);
void volkAscii(void);
void volkState(void);
void volkName(void);
void volkParse(void);
void volkWord(void);
void volkSource(void);
void volkLoadFile(void);
void volkZWord(void);
void volkUpper(void);
void volkCapital(void);
void volkCaps(void);
void volkSlashString(void);
void volkScan(void);
void volkSkip(void);
void volkQuery(void);
void volkTib(void);
void volkSpan(void);
void volkBlk(void);
void volkToIn(void);
void volkToTib(void);
void volkNumTib(void);
void volkCompile(void);
void volkPad(void);
void volkCComma(void);
void volkComma(void);
void volkAllot(void);
void volkHere(void);
void volkErase(void);
void volkFill(void);
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
void volkMSlashMod(void);
void volkUmSlashMod(void);
void volkTwoSlash(void);
void volkTwoStar(void);
void volkStar(void);
void volkMStar(void);
void volkUmStar(void);
void volkLeave(void);
void volkPlusLoop(void);
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
void volkCaseQ(void);
void volkQPairs(void);
void volkFromResolve(void);
void volkFromMark(void);
void volkToResolve(void);
void volkPlusToMark(void);
void volkToMark(void);
void volkJ(void);
void volkI(void);
void volkZPlusLoop(void);
void volkZLoop(void);
void volkZQDo(void);
void volkZDo(void);
void volkEndLoop(void);
void volkBounds(void);
void volkQBranch(void);
void volkBranch(void);
void volkDAbs(void);
void volkAbs(void);
void volkExtend(void);
void volkMin(void);
void volkMax(void);
void volkUMin(void);
void volkUMax(void);
void volkDLess(void);
void volkDEqual(void);
void volkDZeroEqual(void);
void volkUWithin(void);
void volkEqual(void);
void volkZeroUnequal(void);
void volkZeroEqual(void);
void volkZeroGreater(void);
void volkZeroLess(void);
void volkGreater(void);
void volkUGreater(void);
void volkLess(void);
void volkULess(void);
void volkLiteral(void);
void volkCLit(void);
void volkLit(void);
void volkOff(void);
void volkOn(void);
void volkMinusOne(void);
void volkFour(void);
void volkThree(void);
void volkTwo(void);
void volkOne(void);
void volkZero(void);
void volkFalse(void);
void volkTrue(void);
void volkFourMinus(void);
void volkTwoMinus(void);
void volkOneMinus(void);
void volkFourPlus(void);
void volkThreePlus(void);
void volkTwoPlus(void);
void volkOnePlus(void);
void volkDPlus(void);
void volkDNegate(void);
void volkNegate(void);
void volkMinus(void);
void volkNot(void);
void volkXOR(void);
void volkAnd(void);
void volkOr(void);
void volkPlus(void);
void volkTwoDup(void);
void volkTwoDrop(void);
void volkTwoSwap(void);
void volkMinusRoll(void);
void volkRoll(void);
void volkPick(void);
void volkMinusRot(void);
void volkUnder(void);
void volkNip(void);
void volkRot(void);
void volkOver(void);
void volkQDup(void);
void volkQDup(void);
void volkSwap(void);
void volkDrop(void);
void volkPlusStore(void);
void volkTwoStore(void);
void volkTwoFetch(void);
void volkStore(void);
void volkFetch(void);
void volkCToggle(void);
void volkFlip(void);
void volkCStore(void);
void volkFetch(void);
void volkPerform(void);
void volkExecute(void);
void volkZeroEqualExit(void);
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
void volkIPSave(void);
void volkUP(void);
void volkRP(void);

typedef void (*forthOperation)(void);

typedef  struct _forthWord {
	const char* forthWordName;
	const char* forthAlternativeName;
	const int interpreted;
	const int immediate;
	const short int implemented;
	const unsigned long forthWordID;
	const forthOperation  forthOpt; // function pointer 
} typedef_forthWord;

/* Variables */
/* Words which start or end with a left parentheses "(word" are internal words,
   which are named with other FORTH implementations with surrounding parentheses "(word)" */

#if H2O_FORTH_PRIMITIVES == VOLK_CPM_FORTH
static const PROGMEM typedef_forthWord forthWords[] = { /* CP/M */
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
			{ "RP", "RP", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRP },
			{ "H2OFORTH", "H2OFORTH", TRUE, FALSE, FALSE, MAX_WORDID, (forthOperation)NULL }
};
#endif

#endif
