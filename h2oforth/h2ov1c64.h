#ifndef H2OVOLK1
#define H2OVOLK1

/* The "volksFORTH" ( Forth-83 ) FORTH, for C64, ATARI-ST, CP/M, PC */

/* Definitions */

void volkAssembler(void);
void volkForth83(void);
void volkZ64(void);
void volkCZ(void);
void volkZ16(void);
void volkC64Init(void);
void volkInitSystem(void);
void volkInkPot(void);
void volkFIndex(void);
void volkIndex(void);
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
void volkDrvInit(void);
void volkDrvQ(void);
void volkToDrive(void);
void volkDrive(void);
void volkZDrv(void);
void volkBlkSlashDrv(void);
void volkBSlashBlk(void);
void volkDisplay(void);
void volkC64Type(void);
void volkC64AtQ(void);
void volkC64At(void);
void volkC64Page(void);
void volkC64Del(void);
void volkC64Cr(void);
void volkC64Emit(void);
void volkPrintableQ(void);
void volkConStore(void);
void volkKeyboard(void);
void volkC64Expect(void);
void volkC64Decode(void);
void volkNumCr(void);
void volkNumBs(void);
void volkC64Key(void);
void volkCurOff(void);
void volkCurOn(void);
void volkGetKey(void);
void volkC64KeyQ(void);
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
void volkFreeBuffer(void);
void volkAllotBuffer(void);
void volkFirst(void);
void volkLimit(void);
void volkConvey(void);
void volkCopy(void);
void volkBlkMove(void);
void volkZCopy(void);
void volkFlush(void);
void volkEmptyBuffers(void);
void volkSaveBuffers(void);
void volkUpdate(void);
void volkBlock(void);
void volkBuffer(void);
void volkZBlock(void);
void volkZBuffer(void);
void volkCoreQ(void);
void volkRSlashW(void);
void volkDiskErr(void);
void volkZDiskErr(void);
void volkBSlashBuf(void);
void volkBuffers(void);
void volkPrev(void);
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
void volkToInterpret(void);
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
void volkTickNumberQ(void);
void volkNumberQ(void);
void volkDpl(void);
void volkPrevious(void);
void volkChar(void);
void volkEndQ(void);
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
void volkQuoteLit(void);
void volkCommaQuote(void);
void volkAscii(void);
void volkState(void);
void volkName(void);
void volkParse(void);
void volkWord(void);
void volkSource(void);
void volkCapitalize(void);
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
void volkULess(void);
void volkLess(void);
void volkUWithin(void);
void volkZeroEqual(void);
void volkZeroLess(void);
void volkLiteral(void);
void volkLit(void);
void volkCLit(void);
void volkOff(void);
void VolkBasOn(void);
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
void volkTwoDrop(void);
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
void volkLogo(void);

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
			{ ",\"", ",\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkCommaQuote },
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
			{ "LOGO", "LOGO", TRUE, FALSE, FALSE, 0UL, (forthOperation)volkLogo },
			{ "H2OFORTH", "H2OFORTH", TRUE, FALSE, FALSE, MAX_FORTHWORD_ID, (forthOperation)NULL }
};
#endif

#endif
