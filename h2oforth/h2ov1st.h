#ifndef H2OVOLK1
#define H2OVOLK1

/* The "volksFORTH" ( Forth-83 ) FORTH, for C64, ATARI-ST, CP/M, PC */

/* Definitions */

void volkListing(void);
void volkDocument(void);
void volkPrintALL(void);
void volkPThru(void);
void volkPrint(void);
void volkPrinter(void);
void volkPrinterDotScr(void);
void volkBuffers(void);
void volkRelocate(void);
void volkRelocateDotScr(void);
void volkTraceTick(void);
void volkDebug(void);
void volkDump(void);
void volkLDump(void);
void volkTools(void);
void volkToolsDotScr(void);
void volkIndex(void);
void volkIndexDotScr(void);
void volkSaveSystem(void);
void volkBye(void);
void volkView(void);
void volkL(void);
void volkV(void);
void volkTickEditFile(void);
void volkTickRNum(void);
void volkTickScr(void);
void volkEdWindowDotScr(void);
void volkGemBackslashVdiDotScr(void);
void volkGemBackslashSuperGemDotScr(void);
void volkEdiConDotScr(void);
void volkEditorDotScr(void);
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
void volkDelete(void);
void volkSearch(void);
void volkCompareText(void);
void volkCaps(void);
void volkringsDotScr(void);
void volkAssembleDotScr(void);
void volkBlak(void);
void volkBell(void);
void volkCPush(void);
void volkAbortZ(void);
void volkDotBlk(void);
void volkAbsAddr(void);
void volkDiversesDotScr(void);
void volkStartupDotScr(void);
void volkFileIntDotScr(void);
void volkForth83DotScr(void);
void volkConvey(void);
void volkRemoveQ(void);
void volkZView(void);
void volkDColon(void);
void volkCColon(void);
void volkBColon(void);
void volkAColon(void);
void volkDir(void);
void volkMakeDir(void);
void volkMore(void);
void volkZMore(void);
void volkFilesQuote(void);
void volkFiles(void);
void volkEOF(void);
void volkInclude(void);
void volkLoadFrom(void);
void volkFrom(void);
void volkMakefile(void);
void volkUse(void);
void volkMake(void);
void volkAssign(void);
void volkClose(void);
void volkOpen(void);
void volkPath(void);
void volkList(void);
void volkFileQ(void);
void volkFlush(void);
void volkDirekt(void);
void volkFile(void);
void volkCapacity(void);
void volkArguments(void);
void volkForth83(void);
void volkSTRSlashW(void);
void volkRWAbs(void);
void volkDrvOne(void);
void volkDrvZero(void);
void volkDrvInit(void);
void volkDrvQ(void);
void volkToDrive(void);
void volkBlkSlashDrv(void);
void volkZBlkSlashDrv(void);
void volkBSlashBlk(void);
void volkDisplay(void);
void volkStType(void);
void volkStAtQ(void);
void volkStAt(void);
void volkStPage(void);
void volkStDel(void);
void volkStCR(void);
void volkStEmit(void);
void volkKeyboard(void);
void volkStExpect(void);
void volkStDecode(void);
void volkStKey(void);
void volkGetKey(void);
void volkStKeyQ(void);
void volkCurRite(void);
void volkCurLeft(void);
void volkWrap(void);
void volkCurOff(void);
void volkCurOn(void);
void volkConStore(void);
void volkNumEsc(void);
void volkNumLf(void);
void volkNumCr(void);
void volkNumBs(void);
void volkBConOut(void);
void volkBConIn(void);
void volkBcoStat(void);
void volkBconStat(void);
void volkRestart(void);
void volkCold(void);
void volkTickRestart(void);
void volkTickCold(void);
void volkExpect(void);
void volkDecode(void);
void volkKeyQ(void);
void volkKey(void);
void volkInputColon(void);
void volkCol(void);
void volkRol(void);
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
void volkConvey(void);
void volkCopy(void);
void volkFlush(void);
void volkEmptyBuffers(void);
void volkSaveBuffers(void);
void volkUpdate(void);
void volkBlock(void);
void volkBuffer(void);
void volkIsFileFetch(void);
void volkZBlock(void);
void volkZBuffer(void);
void volkCoreQ(void);
void volkUnLock(void);
void volkLock(void);
void volkPause(void);
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
void volkDefer(void);
void volkRightBracket(void);
void volkLeftBracket(void);
void volkInterpret(void);
void volkNoDotExtensions(void);
void volkNotFound(void);
void volkToInterpret(void);
void volkNullStringQ(void);
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
void volkContext(void);
void volkCurrent(void);
void volkVp(void);
void volkAlias(void);
void volkUser(void);
void volkUAllot(void);
void volkTwoVariable(void);
void volkVariable(void);
void volkTwoConstant(void);
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
void volkMakeView(void);
void volkBlkFetch(void);
void volkWarning(void);
void volkHAlign(void);
void volkAlign(void);
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
void volkDpl(void);
void volkConvert(void);
void volkAccumulate(void);
void volkDigitQ(void);
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
void volkCommaQuote(void);
void volkAscii(void);
void volkState(void);
void volkName(void);
void volkParse(void);
void volkWord(void);
void volkSource(void);
void volkLoadFile(void);
void volkEven(void);
void volkZWord(void);
void volkCapitalize(void);
void volkCapital(void);
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
void volkAllot(void);
void volkHere(void);
void volkCComma(void);
void volkComma(void);
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
void volkStarSlashMOD(void);
void volkMod(void);
void volkSlash(void);
void volkSlashMod(void);
void volkMSlashMod(void);
void volkUmSlashMod(void);
void volkTwoSlash(void);
void volkTwoStar(void);
void volkMStar(void);
void volkStar(void);
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
void volkExtend(void);
void volkUMin(void);
void volkUMax(void);
void volkMax(void);
void volkMin(void);
void volkDLess(void);
void volkDEqual(void);
void volkDZeroEqual(void);
void volkEqual(void);
void volkUGreater(void);
void volkZeroUnequal(void);
void volkZeroGreater(void);
void volkGreater(void);
void volkUWithin(void);
void volkULess(void);
void volkLess(void);
void volkZeroEqual(void);
void volkZeroLess(void);
void volkLiteral(void);
void volkLit(void);
void volkZero(void);
void volkMinusOne(void);
void volkFour(void);
void volkThree(void);
void volkTwo(void);
void volkOne(void);
void volkFalse(void);
void volkTrue(void);
void volkOff(void);
void volkOn(void);
void volkFourMinus(void);
void volkTwoMinus(void);
void volkOneMinus(void);
void volkFourPlus(void);
void volkThreePlus(void);
void volkTwoPlus(void);
void volkOnePlus(void);
void volkDStar(void);
void volkDMinus(void);
void volkDPlus(void);
void volkDNegate(void);
void volkNegate(void);
void volkMinus(void);
void volkNot(void);
void volkXOR(void);
void volkAnd(void);
void volkOr(void);
void volkPlus(void);
void volkQuoteDrop(void);
void volkTwoOver(void);
void volkTwoDup(void);
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
void volkDup(void);
void volkSwap(void);
void volkDrop(void);
void volkPlusStore(void);
void volkLNPlusStore(void);
void volkL2Store(void);
void volkL2Fetch(void);
void volkLCMove(void);
void volkLStore(void);
void volkLFetch(void);
void volkLCStore(void);
void volkTwoStore(void);
void volkTwoFetch(void);
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
void volkForthStart(void);
void volkUPStore(void);
void volkUPFetch(void);
void volkSPStore(void);
void volkSPFetch(void);
void volkEndTrace(void);
void volkUP(void);
void volkNextLink(void);
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
			{ "DRV1", "DRV1", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDrvOne },
			{ "DRV0", "DRV0", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkDrvZero },
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
			{ "RECOVER", "RECOVER", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkRecover },
			{ "H2OFORTH", "H2OFORTH", TRUE, FALSE, FALSE, MAX_FORTHWORD_ID, (forthOperation)NULL }
};
#endif

#endif
