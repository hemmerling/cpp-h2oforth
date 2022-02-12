#ifndef H2ONUE1
#define H2ONUE1

/* The "Brad Nelson's MicroEforth ( uEForth ) 7.0.6.9" FORTH */

/* Definitions */
void nelsonForth(void);
void nelsonTo(void);
void nelsonPlusTo(void);
void nelsonSemicolon(void);
void nelsonLeftBrace(void);
void nelsonYLocal(void);
void nelsonEditor(void);
void nelsonList(void);
void nelsonCopy(void);
void nelsonThru(void);
void nelsonLoad(void);
void nelsonFlush(void);
void nelsonUpdate(void);
void nelsonEmptyBuffers(void);
void nelsonBuffer(void);
void nelsonBlock(void);
void nelsonSaveBuffers(void);
void nelsonDefaultUse(void);
void nelsonUse(void);
void nelsonOpenBlocks(void);
void nelsonBlockId(void);
void nelsonScr(void);
void nelsonBlockFid(void);
void nelsonStreams(void);
void nelsonReset(void);
void nelsonRevive(void);
void nelsonStartup(void);
void nelsonRemember(void);
void nelsonRestore(void);
void nelsonSave(void);
void nelsonDumpFile(void);
void nelsonWords(void);
void nelsonVlist(void);
void nelsonOrder(void);
void nelsonSee(void);
void nelsonDotS(void);
void nelsonStartsWithQ(void);
void nelsonStrEqual(void);
void nelsonColonNoname(void);
void nelsonSmudge(void);
void nelsonForget(void);
void nelsonDump(void);
void nelsonAssert(void);
void nelsonStartTask(void);
void nelsonTask(void);
void nelsonPause(void);
void nelsonTasks(void);
void nelsonInclude(void);
void nelsonIncluded(void);
void nelsonResize(void);
void nelsonFree(void);
void nelsonAllocate(void);
void nelsonProcessHeap(void);
void nelsonHeapReAlloc(void);
void nelsonHeapFree(void);
void nelsonHeapAlloc(void);
void nelsonGetProcessHeap(void);
void nelsonOk(void);
void nelsonMs(void);
void nelsonFileSize(void);
void nelsonResizeFile(void);
void nelsonRepositionFile(void);
void nelsonFilePosition(void);
void nelsonReadFile(void);
void nelsonRenameFile(void);
void nelsonWriteFile(void);
void nelsonDeleteFile(void);
void nelsonCreateFile(void);
void nelsonOpenFile(void);
void nelsonFlushFile(void);
void nelsonCloseFile(void);
void nelsonRSlashW(void);
void nelsonWSlashO(void);
void nelsonRSlashO(void);
void nelsonWindows(void);
void nelsonFDotS(void);
void nelsonFDot(void);
void nelsonNumFS(void);
void nelsonSetPrecision(void);
void nelsonPrecision(void);
void nelsonFSqrt(void);
void nelsonPi(void);
void nelsonFVariable(void);
void nelsonFConstant(void);
void nelsonFLiteral(void);
void nelsonAFLiteral(void);
void nelsonSFComma(void);
void nelsonSFloatPlus(void);
void nelsonSFloats(void);
void nelsonSFloat(void);
void nelsonSFGreaterEqual(void);
void nelsonSFLessEqual(void);
void nelsonSFUnequal(void);
void nelsonSFGreater(void);
void nelsonSFLess(void);
void nelsonSFEqual(void);
void nelsonPage(void);
void nelsonAtXy(void);
void nelsonNormal(void);
void nelsonBg(void);
void nelsonFg(void);
void nelsonAnsi(void);
void nelsonInternals(void);
void nelsonSealed(void);
void nelsonAlso(void);
void nelsonOnly(void);
void nelsonTransferLeftBrace(void);
void nelsonRightBraceTransfer(void);
void nelsonTransfer(void);
void nelsonDefinitions(void);
void nelsonVocabulary(void);
void nelsonXif(void);
void nelsonXElse(void);
void nelsonXThen(void);
void nelsonDefinedQ(void);
void nelsonOk(void);
void nelsonQuit(void);
void nelsonEvaluate(void);
void nelsonPrompt(void);
void nelsonRefill(void);
void nelsonTib(void);
void nelsonAccept(void);
void nelsonEcho(void);
void nelsonBlank(void);
void nelsonErase(void);
void nelsonFill(void);
void nelsonCMoveFrom(void);
void nelsonCMove(void);
void nelsonZGreaterS(void);
void nelsonSGreaterZ(void);
void nelsonRVerticalBar(void);
void nelsonRQuote(void);
void nelsonZQuote(void);
void nelsonDotQuote(void);
void nelsonSQuote(void);
void nelsonZPlace(void);
void nelsonDollarPlace(void);
void nelsonNDot(void);
void nelsonQ(void);
void nelsonDot(void);
void nelsonUDot(void);
void nelsonBinary(void);
void nelsonDecimal(void);
void nelsonOctal(void);
void nelsonHex(void);
void nelsonStr(void);
void nelsonNumFrom(void);
void nelsonSign(void);
void nelsonNumS(void);
void nelsonNum(void);
void nelsonHold(void);
void nelsonLessNum(void);
void nelsonExtract(void);
void nelsonPad(void);
void nelsonHld(void);
void nelsonCr(void);
void nelsonSpace(void);
void nelsonEmit(void);
void nelsonBye(void);
void nelsonKeyQ(void);
void nelsonKey(void);
void nelsonType(void);
void nelsonIs(void);
void nelsonDefer(void);
void nelsonValueBins(void);
void nelsonValue(void);
void nelsonThrow(void);
void nelsonCatch(void);
void nelsonHandler(void);
void nelsonJ(void);
void nelsonI(void);
void nelsonLoop(void);
void nelsonPlusLoop(void);
void nelsonLeave(void);
void nelsonUnLoop(void);
void nelsonQDo(void);
void nelsonDo(void);
void nelsonNext(void);
void nelsonFor(void);
void nelsonNestDepth(void);
void nelsonFDepth(void);
void nelsonDepth(void);
void nelsonFP0(void);
void nelsonRP0(void);
void nelsonSP0(void);
void nelsonVariable(void);
void nelsonConstant(void);
void nelsonPostpone(void);
void nelsonToBody(void);
void nelsonToFlags(void);
void nelsonToLink(void);
void nelsonToLinkAmpersand(void);
void nelsonToName(void);
void nelsonAbs(void);
void nelsonMax(void);
void nelsonMin(void);
void nelsonRecurse(void);
void nelsonAft(void);
void nelsonRepeat(void);
void nelsonWhile(void);
void nelsonElse(void);
void nelsonIf(void);
void nelsonThen(void);
void nelsonAhead(void);
void nelsonUntil(void);
void nelsonAgain(void);
void nelsonBegin(void);
void nelsonLiteral(void);
void nelsonXChar(void);
void nelsonChar(void);
void nelsonXNick(void);
void nelsonNick(void);
void nelsonRightBracket(void);
void nelsonLeftBracket(void);
void nelsonCComma(void);
void nelsonComma(void);
void nelsonAlign(void);
void nelsonAligned(void);
void nelsonAllot(void);
void nelsonHere(void);
void nelsonContext(void);
void nelsonCurrent(void);
void nelsonBase(void);
void nelsonState(void);
void nelsonToIn(void);
void nelsonNumTib(void);
void nelsonTickTib(void);
void nelsonTwoStore(void);
void nelsonTwoFetch(void);
void nelsonTwoDup(void);
void nelsonTwoDrop(void);
void nelsonCellSlash(void);
void nelsonCells(void);
void nelsonCellPlus(void);
void nelsonPlusStore(void);
void nelsonFourSlash(void);
void nelsonFourStar(void);
void nelsonTwoSlash(void);
void nelsonTwoStar(void);
void nelsonOneMinus(void);
void nelsonOnePlus(void);
void nelsonNl(void);
void nelsonBl(void);
void nelsonZeroUnequal(void);
void nelsonUnequal(void);
void nelsonEqual(void);
void nelsonGreaterEqual(void);
void nelsonLessEqual(void);
void nelsonGreater(void);
void nelsonLess(void);
void nelsonMinusRot(void);
void nelsonRot(void);
void nelsonMinus(void);
void nelsonNegate(void);
void nelsonInvert(void);
void nelsonMod(void);
void nelsonSlash(void);
void nelsonSlashMod(void);
void nelsonStar(void);
void nelsonStarSlash(void);
void nelsonRDrop(void);
void nelsonNip(void);
void nelsonBackslash(void);
void nelsonParen(void);
void nelsonExit(void);
void nelsonColon(void);
void nelsonYield(void);
void nelsonImmediate(void);
void nelsonDoes(void);
void nelsonCreate(void);
void nelsonFGreaterNumberQ(void);
void nelsonSGreaterNumberQ(void);
void nelsonParse(void);
void nelsonFind(void);
void nelsonCell(void);
void nelsonExecute(void);
void nelsonRFetch(void);
void nelsonRFrom(void);
void nelsonToR(void);
void nelsonRPStore(void);
void nelsonRPFetch(void);
void nelsonSPStore(void);
void nelsonSPFetch(void);
void nelsonCStore(void);
void nelsonLStore(void);
void nelsonStore(void);
void nelsonCFetch(void);
void nelsonLFetch(void);
void nelsonFetch(void);
void nelsonDrop(void);
void nelsonOver(void);
void nelsonSwap(void);
void nelsonDup(void);
void nelsonXor(void);
void nelsonOr(void);
void nelsonAnd(void);
void nelsonRShift(void);
void nelsonLShift(void);
void nelsonStarSlashMod(void);
void nelsonUSlashMod(void);
void nelsonPlus(void);
void nelsonZeroLess(void);
void nelsonZeroEqual(void);
void nelsonFToS(void);
void nelsonSToF(void);
void nelsonOneSlashF(void);
void nelsonFSlash(void);
void nelsonFStar(void);
void nelsonFMinus(void);
void nelsonFPlus(void);
void nelsonF0Equal(void);
void nelsonF0Less(void);
void nelsonFNegate(void);
void nelsonFswa(void);
void nelsonFOver(void);
void nelsonFDrop(void);
void nelsonFNip(void);
void nelsonFDup(void);
void nelsonSFStore(void);
void nelsonSFFetch(void);
void nelsonSF(void);
void nelsonFPStore(void);
void nelsonFPFetch(void);
void nelsonLoadLibraryA(void);
void nelsonGetProcAddress(void);

typedef void (*forthOperation)(void);

typedef  struct _forthWord {
	const char* forthWordName;
	const char* forthAlternativeName;
	const short int interpreted;
	const short int immediate;
	const short int implemented;
	const unsigned long forthWordNumber;
	const forthOperation  forthOpt; // function pointer 
} typedef_forthWord;

/* Variables */
/* Original WORDS output: */
// forth +to to ; { (local) editor list copy thru load flush update empty-buffers buffer block save-buffers default-use use open-blocks block-id scr block-fid streams reset revive startup: remember restore save dump-file words vlist order see .s startswith? str= :noname SMUDGE forget dump assert start-task task pause tasks include included resize free allocate process-heap HeapReAlloc HeapFree HeapAlloc GetProcessHeap ok ms file-size resize-file reposition-file file-position write-file read-file rename-file delete-file flush-file close-file create-file open-file r/w w/o r/o windows f.s f. #fs set-precision precision fsqrt pi fvariable fconstant fliteral afliteral sf, sfloat+ sfloats sfloat f>= f<= f<> f> f< f= page at-xy normal bg fg ansi internals sealed also only transfer{ }transfer transfer definitions vocabulary [IF] [ELSE] [THEN] DEFINED? ok quit evaluate prompt refill tib accept echo blank erase fill cmove> cmove z>s s>z r| r" z" ." s" zplace $place n. ? . u. binary decimal octal hex str #> sign #s # hold <# extract pad hld cr space emit bye key? key type is defer +to to value-bins value throw catch handler j i loop +loop leave unloop ?do do next for nest-depth fdepth depth fp0 rp0 sp0 variable constant postpone >body >flags >link >link& >name abs max min recurse aft repeat while else if then ahead until again begin literal [char] char ['] ' ] [ c, , align aligned allot here context current base state >in #tib 'tib 2! 2@ 2dup 2drop cell/ cells cell+ +! 4/ 4* 2/ 2* 1- 1+ nl bl 0<> <> = >= <= > < -rot rot - negate invert mod / /mod * */ rdrop nip \ ( ; EXIT : YIELD IMMEDIATE DOES> CREATE F>NUMBER? S>NUMBER? PARSE FIND CELL EXECUTE R@ R> >R RP! RP@ SP! SP@ C! L! ! C@ L@ @ DROP OVER SWAP DUP XOR OR AND RSHIFT LSHIFT */MOD U/MOD + 0< 0= F>S S>F 1/F F/ F* F- F+ F0= F0< FNEGATE FSWA FOVER FDROP FNIP FDUP SF! SF@ FP! FP@ LOADLIBRARYA GETPROCADDRESS

static const typedef_forthWord forthWords[] = { /* converted to uppercase, original case */
			{ "FORTH", "forth", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonForth },
			{ "TO", "to", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonTo },
			{ "+TO", "+to", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonPlusTo },
			{ ";", ";", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSemicolon },
			{ "{", "{", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonLeftBrace },
			{ "(LOCAL)", "(local)", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonYLocal },
			{ "EDITOR", "editor", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonEditor },
			{ "LIST", "list", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonList },
			{ "COPY", "copy", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonCopy },
			{ "THRU", "thru", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonThru },
			{ "LOAD", "load", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonLoad },
			{ "FLUSH", "flush", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonFlush },
			{ "UPDATE", "update", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonUpdate },
			{ "EMPTY-BUFFERS", "empty-buffers", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonEmptyBuffers },
			{ "BUFFER", "buffer", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonBuffer },
			{ "BLOCK", "block", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonBlock },
			{ "SAVE-BUFFERS", "save-buffers", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSaveBuffers },
			{ "DEFAULT-USE", "default-use", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonDefaultUse },
			{ "USE", "use", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonUse },
			{ "OPEN-BLOCKS", "open-blocks", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonOpenBlocks },
			{ "BLOCK-ID", "block-id", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonBlockId },
			{ "SCR", "scr", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonScr },
			{ "BLOCK-FID", "block-fid", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonBlockFid },
			{ "STREAMS", "streams", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonStreams },
			{ "RESET", "reset", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonReset },
			{ "REVIVE", "revive", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonRevive },
			{ "STARTUP:", "startup:", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonStartup },
			{ "REMEMBER", "remember", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonRemember },
			{ "RESTORE", "restore", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonRestore },
			{ "SAVE", "save", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSave },
			{ "DUMP-FILE", "dump-file", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonDumpFile },
			{ "WORDS", "words", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonWords },
			{ "VLIST", "vlist", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonVlist },
			{ "ORDER", "order", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonOrder },
			{ "SEE", "see", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSee },
			{ ".S", ".s", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonDotS },
			{ "STARTSWITH?", "startswith?", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonStartsWithQ },
			{ "STR=", "str=", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonStrEqual },
			{ ":NONAME", ":noname", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonColonNoname },
			{ "SMUDGE", "SMUDGE", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSmudge },
			{ "FORGET", "forget", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonForget },
			{ "DUMP", "dump", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonDump },
			{ "ASSERT", "assert", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonAssert },
			{ "START-TASK", "start-task", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonStartTask },
			{ "TASK", "task", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonTask },
			{ "PAUSE", "pause", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonPause },
			{ "TASKS", "tasks", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonTasks },
			{ "INCLUDE", "include", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonInclude },
			{ "INCLUDED", "included", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonIncluded },
			{ "RESIZE", "resize", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonResize },
			{ "FREE", "free", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonFree },
			{ "ALLOCATE", "ALLOCATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonAllocate },
			{ "PROCESS-HEAP", "process-heap", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonProcessHeap },
			{ "HEAPREALLOC", "HeapReAlloc", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonHeapReAlloc },
			{ "HEAPFREE", "HeapFree", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonHeapFree },
			{ "HEAPALLOC", "HeapAlloc", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonHeapAlloc },
			{ "GETPROCESSHEAP", "GetProcessHeap", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonGetProcessHeap },
			{ "OK", "ok", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonOk },
			{ "MS", "ms", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonMs },
			{ "FILE-SIZE", "file-size", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonFileSize },
			{ "RESIZE-FILE", "resize-file", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonResizeFile },
			{ "REPOSITION-FILE", "reposition-file", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonRepositionFile },
			{ "FILE-POSITION", "file-position", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonFilePosition },
			{ "WRITE-FILE", "write-file", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonWriteFile },
			{ "READ-FILE", "read-file", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonReadFile },
			{ "RENAME-FILE", "rename-file", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonRenameFile },
			{ "DELETE-FILE", "delete-file", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonDeleteFile },
			{ "FLUSH-FILE", "flush-file", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonFlushFile },
			{ "CLOSE-FILE", "close-file", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonCloseFile },
			{ "CREATE-FILE", "create-file", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonCreateFile },
			{ "OPEN-FILE", "open-file", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonOpenFile },
			{ "R/W", "r/w", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonRSlashW },
			{ "W/O", "w/o", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonWSlashO },
			{ "R/O", "r/o", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonRSlashO },
			{ "WINDOWS", "windows", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonWindows },
			{ "F.S", "f.s", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonFDotS },
			{ "F.", "f.", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonFDot },
			{ "#FS", "#fs", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonNumFS },
			{ "SET-PRECISION", "set-precision", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSetPrecision },
			{ "PRECISION", "precision", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonPrecision },
			{ "FSQRT", "fsqrt", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonFSqrt },
			{ "PI", "pi", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonPi },
			{ "FVARIABLE", "fvariable", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonFVariable },
			{ "FCONSTANT", "fconstant", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonFConstant },
			{ "FLITERAL", "fliteral", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonFLiteral },
			{ "AFLITERAL", "afliteral", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonAFLiteral },
			{ "SF,", "sf,", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSFComma },
			{ "SFLOAT+", "sfloat+", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSFloatPlus },
			{ "SFLOATS", "sfloats", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSFloats },
			{ "SFLOAT", "sfloat", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSFloat },
			{ "F>=", "f>=", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSFGreaterEqual },
			{ "F<=", "f<=", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSFLessEqual },
			{ "F<>", "f<>", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSFUnequal },
			{ "F>", "f>", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSFGreater },
			{ "F<", "f<", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSFLess },
			{ "F=", "f=", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSFEqual },
			{ "PAGE", "page", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonPage },
			{ "AT-XY", "at-xy", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonAtXy },
			{ "NORMAL", "normal", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonNormal },
			{ "BG", "bg", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonBg },
			{ "FG", "fg", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonFg },
			{ "ANSI", "ansi", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonAnsi },
			{ "INTERNALS", "internals", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonInternals },
			{ "SEALED", "sealed", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSealed },
			{ "ALSO", "also", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonAlso },
			{ "ONLY", "only", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonOnly },
			{ "TRANSFER{", "transfer{", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonTransferLeftBrace },
			{ "}TRANSFER", "}transfer", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonRightBraceTransfer },
			{ "TRANSFER", "transfer", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonTransfer },
			{ "DEFINITIONS", "definitions", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonDefinitions },
			{ "VOCABULARY", "vocabulary", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonVocabulary },
			{ "[IF]", "[IF]", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonXif },
			{ "[ELSE]", "[ELSE]", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonXElse },
			{ "[THEN]", "[THEN]", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonXThen },
			{ "DEFINED?", "DEFINED?", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonDefinedQ },
			{ "OK", "ok", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonOk },
			{ "QUIT", "quit", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonQuit },
			{ "EVALUATE", "evaluate", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonEvaluate },
			{ "PROMPT", "prompt", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonPrompt },
			{ "REFILL", "refill", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonRefill },
			{ "TIB", "tib", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonTib },
			{ "ACCEPT", "accept", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonAccept },
			{ "ECHO", "echo", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonEcho },
			{ "BLANK", "blank", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonBlank },
			{ "ERASE", "erase", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonErase },
			{ "FILL", "fill", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonFill },
			{ "CMOVE>", "cmove>", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonCMoveFrom },
			{ "CMOVE", "cmove", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonCMove },
			{ "Z>S", "z>s", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonZGreaterS },
			{ "S>Z", "s>z", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSGreaterZ },
			{ "R|", "r|", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonRVerticalBar },
			{ "R\"", "r\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonRQuote },
			{ "Z\"", "z\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonZQuote },
			{ ".\"", ".\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonDotQuote },
			{ "S\"", "s\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSQuote },
			{ "ZPLACE", "zplace", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonZPlace },
			{ "$PLACE", "$place", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonDollarPlace },
			{ "N.", "n.", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonNDot },
			{ "?", "?", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonQ },
			{ ".", ".", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonDot },
			{ "U.", "u.", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonUDot },
			{ "BINARY", "binary", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonBinary },
			{ "DECIMAL", "decimal", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonDecimal },
			{ "OCTAL", "octal", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonOctal },
			{ "HEX", "hex", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonHex },
			{ "STR", "str", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonStr },
			{ "#>", "#>", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonNumFrom },
			{ "SIGN", "sign", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSign },
			{ "#S", "#s", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonNumS },
			{ "#", "#", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonNum },
			{ "HOLD", "hold", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonHold },
			{ "<#", "<#", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonLessNum },
			{ "EXTRACT", "extract", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonExtract },
			{ "PAD", "pad", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonPad },
			{ "HLD", "hld", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonHld },
			{ "CR", "cr", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonCr },
			{ "SPACE", "space", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSpace },
			{ "EMIT", "emit", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonEmit },
			{ "BYE", "bye", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonBye },
			{ "KEY?", "key?", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonKeyQ },
			{ "KEY", "key", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonKey },
			{ "TYPE", "type", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonType },
			{ "IS", "is", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonIs },
			{ "DEFER", "defer", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonDefer },
			{ "VALUE-BINS", "value-bins", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonValueBins },
			{ "VALUE", "value", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonValue },
			{ "THROW", "throw", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonThrow },
			{ "CATCH", "catch", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonCatch },
			{ "HANDLER", "handler", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonHandler },
			{ "J", "j", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonJ },
			{ "I", "i", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonI },
			{ "LOOP", "loop", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonLoop },
			{ "+LOOP", "+loop", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonPlusLoop },
			{ "LEAVE", "leave", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonLeave },
			{ "UNLOOP", "unloop", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonUnLoop },
			{ "?DO", "?do", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonQDo },
			{ "DO", "do", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonDo },
			{ "NEXT", "next", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonNext },
			{ "FOR", "for", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonFor },
			{ "NEST-DEPTH", "nest-depth", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonNestDepth },
			{ "FDEPTH", "fdepth", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonFDepth },
			{ "DEPTH", "depth", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonDepth },
			{ "FP0", "fp0", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonFP0 },
			{ "RP0", "rp0", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonRP0 },
			{ "SP0", "sp0", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSP0 },
			{ "VARIABLE", "variable", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonVariable },
			{ "CONSTANT", "constant", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonConstant },
			{ "POSTPONE", "postpone", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonPostpone },
			{ ">BODY", ">body", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonToBody },
			{ ">FLAGS", ">flags", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonToFlags },
			{ ">LINK", ">link", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonToLink },
			{ ">LINK&", ">link&", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonToLinkAmpersand },
			{ ">NAME", ">name", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonToName },
			{ "ABS", "abs", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonAbs },
			{ "MAX", "max", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonMax },
			{ "MIN", "min", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonMin },
			{ "RECURSE", "recurse", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonRecurse },
			{ "AFT", "aft", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonAft },
			{ "REPEAT", "repeat", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonRepeat },
			{ "WHILE", "while", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonWhile },
			{ "ELSE", "else", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonElse },
			{ "IF", "if", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonIf },
			{ "THEN", "then", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonThen },
			{ "AHEAD", "ahead", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonAhead },
			{ "UNTIL", "until", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonUntil },
			{ "AGAIN", "again", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonAgain },
			{ "BEGIN", "begin", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonBegin },
			{ "LITERAL", "literal", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonLiteral },
			{ "[CHAR]", "[char]", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonXChar },
			{ "CHAR", "char", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonChar },
			{ "[']", "[']", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonXNick },
			{ "'", "'", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonNick },
			{ "]", "]", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonRightBracket },
			{ "[", "[", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonLeftBracket },
			{ "C,", "c,", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonCComma },
			{ ",", ",", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonComma },
			{ "ALIGN", "align", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonAlign },
			{ "ALIGNED", "aligned", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonAligned },
			{ "ALLOT", "allot", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonAllot },
			{ "HERE", "here", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonHere },
			{ "CONTEXT", "context", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonContext },
			{ "CURRENT", "current", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonCurrent },
			{ "BASE", "base", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonBase },
			{ "STATE", "state", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonState },
			{ ">IN", ">in", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonToIn },
			{ "#TIB", "#tib", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonNumTib },
			{ "'TIB", "'tib", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonTickTib },
			{ "2!", "2!", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonTwoStore },
			{ "2@", "2@", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonTwoFetch },
			{ "2DUP", "2dup", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonTwoDup },
			{ "2DROP", "2drop", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonTwoDrop },
			{ "CELL/", "cell/", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonCellSlash },
			{ "CELLS", "cells", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonCells },
			{ "CELL+", "cell+", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonCellPlus },
			{ "+!", "+!", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonPlusStore },
			{ "4/", "4/", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonFourSlash },
			{ "4*", "4*", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonFourStar },
			{ "2/", "2/", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonTwoSlash },
			{ "2*", "2*", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonTwoStar },
			{ "1-", "1-", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonOneMinus },
			{ "1+", "1+", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonOnePlus },
			{ "NL", "nl", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonNl },
			{ "BL", "bl", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonBl },
			{ "0<>", "0<>", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonZeroUnequal },
			{ "<>", "<>", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonUnequal },
			{ "=", "=", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonEqual },
			{ ">=", ">=", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonGreaterEqual },
			{ "<=", "<=", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonLessEqual },
			{ ">", ">", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonGreater },
			{ "<", "<", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonLess },
			{ "-ROT", "-rot", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonMinusRot },
			{ "ROT", "rot", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonRot },
			{ "-", "-", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonMinus },
			{ "NEGATE", "negate", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonNegate },
			{ "INVERT", "invert", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonInvert },
			{ "MOD", "mod", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonMod },
			{ "/", "/", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSlash },
			{ "/MOD", "/mod", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSlashMod },
			{ "*", "*", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonStar },
			{ "*/", "*/", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonStarSlash },
			{ "RDROP", "rdrop", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonRDrop },
			{ "NIP", "nip", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonNip },
			{ "\\", "\\", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonBackslash },
			{ "(", "(", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonParen },
			{ ";", ";", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSemicolon },
			{ "EXIT", "EXIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonExit },
			{ ":", ":", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonColon },
			{ "YIELD", "YIELD", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonYield },
			{ "IMMEDIATE", "IMMEDIATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonImmediate },
			{ "DOES>", "DOES>", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonDoes },
			{ "CREATE", "CREATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonCreate },
			{ "F>NUMBER?", "F>NUMBER?", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonFGreaterNumberQ },
			{ "S>NUMBER?", "S>NUMBER?", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSGreaterNumberQ },
			{ "PARSE", "PARSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonParse },
			{ "FIND", "FIND", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonFind },
			{ "CELL", "CELL", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonCell },
			{ "EXECUTE", "EXECUTE", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonExecute },
			{ "R@", "R@", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonRFetch },
			{ "R>", "R>", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonRFrom },
			{ ">R", ">R", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonToR },
			{ "RP!", "RP!", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonRPStore },
			{ "RP@", "RP@", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonRPFetch },
			{ "SP!", "SP!", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSPStore },
			{ "SP@", "SP@", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSPFetch },
			{ "C!", "C!", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonCStore },
			{ "L!", "L!", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonLStore },
			{ "!", "!", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonStore },
			{ "C@", "C@", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonCFetch },
			{ "L@", "L@", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonLFetch },
			{ "@", "@", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonFetch },
			{ "DROP", "DROP", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonDrop },
			{ "OVER", "OVER", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonOver },
			{ "SWAP", "SWAP", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSwap },
			{ "DUP", "DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonDup },
			{ "XOR", "XOR", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonXor },
			{ "OR", "OR", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonOr },
			{ "AND", "AND", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonAnd },
			{ "RSHIFT", "RSHIFT", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonRShift },
			{ "LSHIFT", "LSHIFT", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonLShift },
			{ "*/MOD", "*/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonStarSlashMod },
			{ "U/MOD", "U/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonUSlashMod },
			{ "+", "+", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonPlus },
			{ "0<", "0<", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonZeroLess },
			{ "0=", "0=", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonZeroEqual },
			{ "F>S", "F>S", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonFToS },
			{ "S>F", "S>F", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSToF },
			{ "1/F", "1/F", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonOneSlashF },
			{ "F/", "F/", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonFSlash },
			{ "F*", "F*", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonFStar },
			{ "F-", "F-", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonFMinus },
			{ "F+", "F+", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonFPlus },
			{ "F0=", "F0=", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonF0Equal },
			{ "F0<>", "F0<", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonF0Less },
			{ "FNEGATE", "FNEGATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonFNegate },
			{ "FSWA", "FSWA", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonFswa },
			{ "FOVER", "FOVER", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonFOver },
			{ "FDROP", "FDROP", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonFDrop },
			{ "FNIP", "FNIP", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonFNip },
			{ "FDUP", "FDUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonFDup },
			{ "SF!", "SF!", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSFStore },
			{ "SF@", "SF@", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSFFetch },
			{ "SF", "SF", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSF },
			{ "FP!", "FP!", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonFPStore },
			{ "FP@", "FP@", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonFPFetch },
			{ "LOADLIBRARYA", "LOADLIBRARYA", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonLoadLibraryA },
			{ "GETPROCADDRESS", "GETPROCADDRESS", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonGetProcAddress },
};

#endif

#if H2O_FORTH_PRIMITIVES == NELSON_ESP_FORTH
static const typedef_forthWord forthWords[] = { /* converted to uppercase, original case */
			{ "FORTH", "forth", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonForth },
			{ "EDITOR", "editor", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonEditor },
			{ "LIST", "list", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonList },
			{ "COPY", "copy", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonCopy },
			{ "THRU", "thru", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonThru },
			{ "LOAD", "load", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonLoad },
			{ "FLUSH", "flush", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonFlush },
			{ "UPDATE", "update", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonUpdate },
			{ "EMPTY-BUFFERS", "empty-buffers", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonEmptyBuffers },
			{ "BUFFER", "buffer", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonBuffer },
			{ "BLOCK", "block", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonBlock },
			{ "SAVE-BUFFERS", "save-buffers", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSaveBuffers },
			{ "DEFAULT-USE", "default-use", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonDefaultUse },
			{ "USE", "use", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonUse },
			{ "OPEN-BLOCKS", "open-blocks", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonOpenBlocks },
			{ "BLOCK-ID", "block-id", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonBlockId },
			{ "SCR", "scr", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonScr },
			{ "BLOCK-FID", "block-fid", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonBlockFid },
			{ "TELNETD", "telnetd", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonTelnetD },
			{ "BTERM", "bterm", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonBTerm },
			{ "TIMERS", "timers", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonTimers },
			{ "REGISTERS", "registers", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonRegisters },
			{ "WEBUI", "webui", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonWebUI},
			{ "LOGIN", "login", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonLogin },
			{ "WEB-INTERFACE", "web-interface", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonWebInterface },
			{ "STREAMS", "streams", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonStreams },
			{ ";", ";", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSemicolon },
			{ "{", "{", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonLeftBrace },
			{ "WORDS", "words", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonWords },
			{ "VLIST", "vlist", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonVlist },
			{ "ORDER", "order", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonOrder },
			{ "SEE", "see", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSee },
			{ ".S", ".s", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonDotS },
			{ "STARTSWITH?", "startswith?", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonStartsWithQ },
			{ "STR=", "str=", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonStrEqual },
			{ ":NONAME", ":noname", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonColonNoname },
			{ "SMUDGE", "SMUDGE", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSmudge },
			{ "FORGET", "forget", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonForget },
			{ "DUMP", "dump", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonDump },
			{ "ASSERT", "assert", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonAssert },
			{ "RESET", "reset", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonReset },
			{ "REVIVE", "revive", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonRevive },
			{ "STARTUP:", "startup:", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonStartup },
			{ "REMEMBER", "remember", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonRemember },
			{ "RESTORE", "restore", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonRestore },
			{ "SAVE", "save", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSave },
			{ "DUMP-FILE", "dump-file", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonDumpFile },
			{ "INCLUDE", "include", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonInclude },
			{ "INCLUDED", "included", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonIncluded },
			{ "RTOS", "rtos", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonRtos },
			{ "INTERRUPTS", "interrupts", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonInterrupts },
			{ "SOCKETS", "sockets", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSockets },
			{ "SERIAL", "Serial", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSerial },
			{ "LEDC", "ledc", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonLedC },
			{ "SPIFFS", "SPIFFS", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSpiffs },
			{ "SD_MMC", "SD_MMC", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSdMmc },
			{ "WIFI", "WiFi", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonWifi },
			{ "WEBSERVER", "WebServer", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonWebserver },
			{ "WIRE", "Wire", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonWire },
			{ "RESIZE", "resize", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonResize },
			{ "FREE", "free", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonFree },
			{ "ALLOCATE", "ALLOCATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonAllocate },
			{ "OK", "ok", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonOk },
			{ "LED", "LED", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonLed },
			{ "OUTPUT", "OUTPUT", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonOutput },
			{ "INPUT", "INPUT", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonInput },
			{ "HIGH", "HIGH", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonHigh },
			{ "LOW", "LOW", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonLow },
			{ "PAGE", "page", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonPage },
			{ "TONE", "tone", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonTone },
			{ "FREQ", "freq", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonFreq },
			{ "DUTY", "duty", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonDuty },
			{ "ADC", "adc", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonAdc },
			{ "PIN", "pin", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonPin },
			{ "MS", "ms", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonMs },
			{ "START-TASK", "start-task", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonStartTask },
			{ "TASK", "task", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonTask },
			{ "PAUSE", "pause", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonPause },
			{ "TASKS", "tasks", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonTasks },
			{ "INTERNALS", "internals", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonInternals },
			{ "SEALED", "sealed", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSealed },
			{ "ALSO", "also", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonAlso },
			{ "ONLY", "only", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonOnly },
			{ "TRANSFER{", "transfer{", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonTransferLeftBrace },
			{ "}TRANSFER", "}transfer", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonRightBraceTransfer },
			{ "TRANSFER", "transfer", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonTransfer },
			{ "DEFINITIONS", "definitions", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonDefinitions },
			{ "VOCABULARY", "vocabulary", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonVocabulary },
			{ "[IF]", "[IF]", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonXif },
			{ "[ELSE]", "[ELSE]", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonXElse },
			{ "[THEN]", "[THEN]", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonXThen },
			{ "DEFINED?", "DEFINED?", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonDefinedQ },
			{ "OK", "ok", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonOk },
			{ "QUIT", "quit", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonQuit },
			{ "EVALUATE", "evaluate", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonEvaluate },
			{ "PROMPT", "prompt", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonPrompt },
			{ "REFILL", "refill", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonRefill },
			{ "TIB", "tib", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonTib },
			{ "ECHO", "echo", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonEcho },
			{ "FILL", "fill", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonFill },
			{ "CMOVE>", "cmove>", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonCMoveFrom },
			{ "CMOVE", "cmove", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonCMove },
			{ "Z>S", "z>s", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonZGreaterS },
			{ "S>Z", "s>z", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSGreaterZ },
			{ "R|", "r|", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonRVerticalBar },
			{ "R\"", "r\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonRQuote },
			{ "Z\"", "z\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonZQuote },
			{ ".\"", ".\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonDotQuote },
			{ "S\"", "s\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSQuote },
			{ "$PLACE", "$place", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonDollarPlace },
			{ "N.", "n.", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonNDot },
			{ "?", "?", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonQ },
			{ ".", ".", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonDot },
			{ "U.", "u.", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonUDot },
			{ "BINARY", "binary", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonBinary },
			{ "DECIMAL", "decimal", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonDecimal },
			{ "OCTAL", "octal", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonOctal },
			{ "HEX", "hex", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonHex },
			{ "STR", "str", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonStr },
			{ "#>", "#>", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonNumFrom },
			{ "SIGN", "sign", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSign },
			{ "#S", "#s", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonNumS },
			{ "#", "#", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonNum },
			{ "HOLD", "hold", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonHold },
			{ "<#", "<#", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonLessNum },
			{ "EXTRACT", "extract", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonExtract },
			{ "PAD", "pad", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonPad },
			{ "HLD", "hld", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonHld },
			{ "CR", "cr", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonCr },
			{ "SPACE", "space", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSpace },
			{ "EMIT", "emit", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonEmit },
			{ "BYE", "bye", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonBye },
			{ "KEY?", "key?", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonKeyQ },
			{ "KEY", "key", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonKey },
			{ "TYPE", "type", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonType },
			{ "IS", "is", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonIs },
			{ "DEFER", "defer", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonDefer },
			{ "+TO", "+to", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonPlusTo },
			{ "TO", "to", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonTo },
			{ "VALUE", "value", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonValue },
			{ "THROW", "throw", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonThrow },
			{ "CATCH", "catch", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonCatch },
			{ "HANDLER", "handler", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonHandler },
			{ "J", "j", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonJ },
			{ "I", "i", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonI },
			{ "LOOP", "loop", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonLoop },
			{ "+LOOP", "+loop", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonPlusLoop },
			{ "LEAVE", "leave", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonLeave },
			{ "UNLOOP", "unloop", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonUnLoop },
			{ "?DO", "?do", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonQDo },
			{ "DO", "do", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonDo },
			{ "NEXT", "next", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonNext },
			{ "FOR", "for", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonFor },
			{ "DEPTH", "depth", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonDepth },
			{ "RP0", "rp0", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonRP0 },
			{ "SP0", "sp0", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSP0 },
			{ "VARIABLE", "variable", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonVariable },
			{ "CONSTANT", "constant", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonConstant },
			{ "POSTPONE", "postpone", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonPostpone },
			{ ">BODY", ">body", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonToBody },
			{ ">FLAGS", ">flags", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonToFlags },
			{ ">LINK", ">link", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonToLink },
			{ ">LINK&", ">link&", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonToLinkAmpersand },
			{ ">NAME", ">name", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonToName },
			{ "ABS", "abs", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonAbs },
			{ "MAX", "max", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonMax },
			{ "MIN", "min", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonMin },
			{ "AFT", "aft", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonAft },
			{ "REPEAT", "repeat", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonRepeat },
			{ "WHILE", "while", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonWhile },
			{ "ELSE", "else", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonElse },
			{ "IF", "if", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonIf },
			{ "THEN", "then", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonThen },
			{ "AHEAD", "ahead", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonAhead },
			{ "UNTIL", "until", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonUntil },
			{ "AGAIN", "again", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonAgain },
			{ "BEGIN", "begin", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonBegin },
			{ "LITERAL", "literal", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonLiteral },
			{ "[CHAR]", "[char]", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonXChar },
			{ "CHAR", "char", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonChar },
			{ "[']", "[']", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonXNick },
			{ "'", "'", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonNick },
			{ "]", "]", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonRightBracket },
			{ "[", "[", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonLeftBracket },
			{ "C,", "c,", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonCComma },
			{ ",", ",", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonComma },
			{ "ALIGN", "align", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonAlign },
			{ "ALIGNED", "aligned", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonAligned },
			{ "ALLOT", "allot", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonAllot },
			{ "HERE", "here", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonHere },
			{ "CONTEXT", "context", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonContext },
			{ "CURRENT", "current", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonCurrent },
			{ "BASE", "base", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonBase },
			{ "STATE", "state", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonState },
			{ ">IN", ">in", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonToIn },
			{ "#TIB", "#tib", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonNumTib },
			{ "'TIB", "'tib", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonTickTib },
			{ "2!", "2!", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonTwoStore },
			{ "2@", "2@", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonTwoFetch },
			{ "2DUP", "2dup", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonTwoDup },
			{ "2DROP", "2drop", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonTwoDrop },
			{ "CELL/", "cell/", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonCellSlash },
			{ "CELLS", "cells", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonCells },
			{ "CELL+", "cell+", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonCellPlus },
			{ "\\", "\\", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonBackslash },
			{ "+!", "+!", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonPlusStore },
			{ "4/", "4/", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonFourSlash },
			{ "4*", "4*", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonFourStar },
			{ "2/", "2/", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonTwoSlash },
			{ "2*", "2*", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonTwoStar },
			{ "1-", "1-", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonOneMinus },
			{ "1+", "1+", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonOnePlus },
			{ "NL", "nl", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonNl },
			{ "BL", "bl", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonBl },
			{ "0<>", "0<>", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonZeroUnequal },
			{ "<>", "<>", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonUnequal },
			{ "=", "=", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonEqual },
			{ ">=", ">=", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonGreaterEqual },
			{ "<=", "<=", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonLessEqual },
			{ ">", ">", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonGreater },
			{ "<", "<", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonLess },
			{ "-ROT", "-rot", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonMinusRot },
			{ "ROT", "rot", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonRot },
			{ "-", "-", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonMinus },
			{ "NEGATE", "negate", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonNegate },
			{ "INVERT", "invert", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonInvert },
			{ "MOD", "mod", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonMod },
			{ "/", "/", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSlash },
			{ "/MOD", "/mod", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSlashMod },
			{ "*", "*", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonStar },
			{ "*/", "*/", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonStarSlash },
			{ "RDROP", "rdrop", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonRDrop },
			{ "NIP", "nip", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonNip },
			{ "(", "(", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonParen },
			{ ";", ";", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSemicolon },
			{ "EXIT", "EXIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonExit },
			{ ":", ":", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonColon },
			{ "IMMEDIATE", "IMMEDIATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonImmediate },
			{ "DOES>", "DOES>", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonDoes },
			{ "CREATE", "CREATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonCreate },
			{ "S>NUMBER?", "S>NUMBER?", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSGreaterNumberQ },
			{ "PARSE", "PARSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonParse },
			{ "FIND", "FIND", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonFind },
			{ "CELL", "CELL", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonCell },
			{ "EXECUTE", "EXECUTE", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonExecute },
			{ "R@", "R@", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonRFetch },
			{ "R>", "R>", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonRFrom },
			{ ">R", ">R", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonToR },
			{ "RP!", "RP!", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonRPStore },
			{ "RP@", "RP@", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonRPFetch },
			{ "SP!", "SP!", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSPStore },
			{ "SP@", "SP@", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSPFetch },
			{ "C!", "C!", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonCStore },
			{ "L!", "L!", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonLStore },
			{ "!", "!", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonStore },
			{ "C@", "C@", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonCFetch },
			{ "L@", "L@", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonLFetch },
			{ "@", "@", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonFetch },
			{ "DROP", "DROP", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonDrop },
			{ "OVER", "OVER", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonOver },
			{ "SWAP", "SWAP", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSwap },
			{ "DUP", "DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonDup },
			{ "XOR", "XOR", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonXor },
			{ "OR", "OR", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonOr },
			{ "AND", "AND", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonAnd },
			{ "RSHIFT", "RSHIFT", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonRShift },
			{ "LSHIFT", "LSHIFT", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonLShift },
			{ "*/MOD", "*/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonStarSlashMod },
			{ "U/MOD", "U/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonUSlashMod },
			{ "+", "+", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonPlus },
			{ "0<", "0<", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonZeroLess },
			{ "0=", "0=", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonZeroEqual },
			{ "TIMER_ISR_REGISTER", "timer_isr_register", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonTimerIsrRegister },
			{ "ACCEPT", "accept", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonAccept },
			{ "SD_MMC.BEGIN", "SD_MMC.begin", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonSdMmcDotBegin },
			{ "MDNS.BEGIN", "MDNS.begin", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonMdnsDotBegin },
			{ "FILE-SIZE", "FILE-SIZE", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonFileSize },
			{ "RESIZE-FILE", "RESIZE-FILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonResizeFile },
			{ "REPOSITION-FILE", "REPOSITION-FILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonRepositionFile },
			{ "FILE-POSITION", "FILE-POSITION", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonFilePosition },
			{ "READ-FILE", "READ-FILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonReadFile },
			{ "WRITE-FILE", "WRITE-FILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonWriteFile },
			{ "DELETE-FILE", "DELETE-FILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonDeleteFile },
			{ "CREATE-FILE", "CREATE-FILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonCreateFile },
			{ "OPEN-FILE", "OPEN-FILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonOpenFile },
			{ "FLUSH-FILE", "FLUSH-FILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonFlushFile },
			{ "CLOSE-FILE", "CLOSE-FILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonCloseFile },
			{ "BIN", "BIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonBin },
			{ "W/O", "W/O", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonWSlashO },
			{ "R/W", "R/W", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonRSlashW },
			{ "R/O", "R/O", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonRSlashO },
			{ "TERMINATE", "TERMINATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonTerminate },
			{ "MS-TICKS", "MS-TICKS", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonMSTicks },
			{ "DACWRITE", "dacWrite", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonDacWrite },
			{ "PULSEIN", "pulseIn", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonPulsIn },
			{ "ANALOGREAD", "analogRead", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonAnalogRead },
			{ "DIGITALREAD", "digitalRead", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonDigitalRead },
			{ "DIGITALWRITE", "digitalWrite", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonDigitalWrite },
			{ "PINMODE", "pinMode ", TRUE, FALSE, FALSE, 0UL, (forthOperation)nelsonPinMode },
			{ "H2OFORTH", "H2OFORTH", TRUE, FALSE, FALSE, MAX_FORTHWORD_ID, (forthOperation)NULL }
};

#endif
