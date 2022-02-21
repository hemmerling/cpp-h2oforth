#ifndef H2ONESP1
#define H2ONESP1

/* The "Brad Nelson's ESP32Forth v.7.05" FORTH */

/* Definitions */

void nelsonForth(void);
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
void nelsonTelnetD(void);
void nelsonBTerm(void);
void nelsonTimers(void);
void nelsonRegisters(void);
void nelsonWebUI(void);
void nelsonLogin(void);
void nelsonWebInterface(void);
void nelsonStreams(void);
void nelsonSemicolon(void);
void nelsonLeftBrace(void);
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
void nelsonReset(void);
void nelsonRevive(void);
void nelsonStartup(void);
void nelsonRemember(void);
void nelsonRestore(void);
void nelsonSave(void);
void nelsonDumpFile(void);
void nelsonInclude(void);
void nelsonIncluded(void);
void nelsonRtos(void);
void nelsonInterrupts(void);
void nelsonSockets(void);
void nelsonSerial(void);
void nelsonLedC(void);
void nelsonSpiffs(void);
void nelsonSdMmc(void);
void nelsonWifi(void);
void nelsonWebserver(void);
void nelsonWire(void);
void nelsonResize(void);
void nelsonFree(void);
void nelsonAllocate(void);
void nelsonOk(void);
void nelsonLed(void);
void nelsonOutput(void);
void nelsonInput(void);
void nelsonHigh(void);
void nelsonLow(void);
void nelsonPage(void);
void nelsonTone(void);
void nelsonFreq(void);
void nelsonDuty(void);
void nelsonAdc(void);
void nelsonPin(void);
void nelsonMs(void);
void nelsonStartTask(void);
void nelsonTask(void);
void nelsonPause(void);
void nelsonTasks(void);
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
void nelsonEcho(void);
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
void nelsonPlusTo(void);
void nelsonTo(void);
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
void nelsonDepth(void);
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
void nelsonBackslash(void);
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
void nelsonParen(void);
void nelsonSemicolon(void);
void nelsonExit(void);
void nelsonColon(void);
void nelsonImmediate(void);
void nelsonDoes(void);
void nelsonCreate(void);
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
void nelsonTimerIsrRegister(void);
void nelsonAccept(void);
void nelsonSdMmcDotBegin(void);
void nelsonMdnsDotBegin(void);
void nelsonFileSize(void);
void nelsonResizeFile(void);
void nelsonRepositionFile(void);
void nelsonFilePosition(void);
void nelsonReadFile(void);
void nelsonWriteFile(void);
void nelsonDeleteFile(void);
void nelsonCreateFile(void);
void nelsonOpenFile(void);
void nelsonFlushFile(void);
void nelsonCloseFile(void);
void nelsonBin(void);
void nelsonWSlashO(void);
void nelsonRSlashW(void);
void nelsonRSlashO(void);
void nelsonTerminate(void);
void nelsonMSTicks(void);
void nelsonDacWrite(void);
void nelsonPulsIn(void);
void nelsonAnalogRead(void);
void nelsonDigitalRead(void);
void nelsonDigitalWrite(void);
void nelsonPinMode(void);

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
// forth editor list copy thru load flush update empty-buffers buffer block save-buffers default-use use open-blocks block-id scr block-fid telnetd bterm timers registers webui login web-interface streams ; { words vlist order see .s startswith? str= :noname SMUDGE forget dump assert reset revive startup: remember restore save dump-file include included rtos interrupts sockets Serial ledc SPIFFS SD_MMC WiFi WebServer Wire resize free allocate ok LED OUTPUT INPUT HIGH LOW page tone freq duty adc pin ms start-task task pause tasks internals sealed also only transfer{ }transfer transfer definitions vocabulary [IF] [ELSE] [THEN] DEFINED? ok quit evaluate prompt refill tib echo fill cmove> cmove z>s s>z r| r" z" ." s" $place n. ? . u. binary decimal octal hex str #> sign #s # hold <# extract pad hld cr space emit bye key? key type is defer +to to value throw catch handler j i loop +loop leave unloop ?do do next for depth rp0 sp0 variable constant postpone >body >flags >link >link& >name abs max min aft repeat while else if then ahead until again begin literal [char] char ['] ' ] [ c, , align aligned allot here context current base state >in #tib 'tib 2! 2@ 2dup 2drop cell/ cells cell+ \ +! 4/ 4* 2/ 2* 1- 1+ nl bl 0<> <> = >= <= > < -rot rot - negate invert mod / /mod * */ rdrop nip ( ; EXIT : IMMEDIATE DOES> CREATE S>NUMBER? PARSE FIND CELL EXECUTE R@ R> >R RP! RP@ SP! SP@ C! L! ! C@ L@ @ DROP OVER SWAP DUP XOR OR AND RSHIFT LSHIFT */MOD U/MOD + 0< 0= timer_isr_register accept SD_MMC.begin MDNS.begin FILE-SIZE RESIZE-FILE REPOSITION-FILE FILE-POSITION READ-FILE WRITE-FILE DELETE-FILE CREATE-FILE OPEN-FILE FLUSH-FILE CLOSE-FILE BIN W/O R/W R/O TERMINATE MS-TICKS dacWrite pulseIn analogRead digitalRead digitalWrite pinMode 

/* WORDS output converted to lowercase: */
// forth editor list copy thru load flush update empty-buffers buffer block save-buffers default-use use open-blocks block-id scr block-fid telnetd bterm timers registers webui login web-interface streams ; { words vlist order see .s startswith? str= :noname smudge forget dump assert reset revive startup: remember restore save dump-file include included rtos interrupts sockets serial ledc spiffs sd_mmc wifi webserver wire resize free allocate ok led output input high low page tone freq duty adc pin ms start-task task pause tasks internals sealed also only transfer{ }transfer transfer definitions vocabulary [if] [else] [then] defined? ok quit evaluate prompt refill tib echo fill cmove> cmove z>s s>z r| r" z" ." s" $place n. ? . u. binary decimal octal hex str #> sign #s # hold <# extract pad hld cr space emit bye key? key type is defer +to to value throw catch handler j i loop +loop leave unloop ?do do next for depth rp0 sp0 variable constant postpone >body >flags >link >link& >name abs max min aft repeat while else if then ahead until again begin literal [char] char ['] ' ] [ c, , align aligned allot here context current base state >in #tib 'tib 2! 2@ 2dup 2drop cell/ cells cell+ \ +! 4/ 4* 2/ 2* 1- 1+ nl bl 0<> <> = >= <= > < -rot rot - negate invert mod / /mod * */ rdrop nip ( ; exit : immediate does> create s>number? parse find cell execute r@ r> >r rp! rp@ sp! sp@ c! l! ! c@ l@ @ drop over swap dup xor or and rshift lshift */mod u/mod + 0< 0= timer_isr_register accept sd_mmc.begin mdns.begin file-size resize-file reposition-file file-position read-file write-file delete-file create-file open-file flush-file close-file bin w/o r/w r/o terminate ms-ticks dacwrite pulsein analogread digitalread digitalwrite pinmode

/* WORDS output converted to uppercase: */
// FORTH EDITOR LIST COPY THRU LOAD FLUSH UPDATE EMPTY-BUFFERS BUFFER BLOCK SAVE-BUFFERS DEFAULT-USE USE OPEN-BLOCKS BLOCK-ID SCR BLOCK-FID TELNETD BTERM TIMERS REGISTERS WEBUI LOGIN WEB-INTERFACE STREAMS ; { WORDS VLIST ORDER SEE .S STARTSWITH? STR= :NONAME SMUDGE FORGET DUMP ASSERT RESET REVIVE STARTUP: REMEMBER RESTORE SAVE DUMP-FILE INCLUDE INCLUDED RTOS INTERRUPTS SOCKETS SERIAL LEDC SPIFFS SD_MMC WIFI WEBSERVER WIRE RESIZE FREE ALLOCATE OK LED OUTPUT INPUT HIGH LOW PAGE TONE FREQ DUTY ADC PIN MS START-TASK TASK PAUSE TASKS INTERNALS SEALED ALSO ONLY TRANSFER{ }TRANSFER TRANSFER DEFINITIONS VOCABULARY [IF] [ELSE] [THEN] DEFINED? OK QUIT EVALUATE PROMPT REFILL TIB ECHO FILL CMOVE> CMOVE Z>S S>Z R| R" Z" ." S" $PLACE N. ? . U. BINARY DECIMAL OCTAL HEX STR #> SIGN #S # HOLD <# EXTRACT PAD HLD CR SPACE EMIT BYE KEY? KEY TYPE IS DEFER +TO TO VALUE THROW CATCH HANDLER J I LOOP +LOOP LEAVE UNLOOP ?DO DO NEXT FOR DEPTH RP0 SP0 VARIABLE CONSTANT POSTPONE >BODY >FLAGS >LINK >LINK& >NAME ABS MAX MIN AFT REPEAT WHILE ELSE IF THEN AHEAD UNTIL AGAIN BEGIN LITERAL [CHAR] CHAR ['] ' ] [ C, , ALIGN ALIGNED ALLOT HERE CONTEXT CURRENT BASE STATE >IN #TIB 'TIB 2! 2@ 2DUP 2DROP CELL/ CELLS CELL+ \ +! 4/ 4* 2/ 2* 1- 1+ NL BL 0<> <> = >= <= > < -ROT ROT - NEGATE INVERT MOD / /MOD * */ RDROP NIP ( ; EXIT : IMMEDIATE DOES> CREATE S>NUMBER? PARSE FIND CELL EXECUTE R@ R> >R RP! RP@ SP! SP@ C! L! ! C@ L@ @ DROP OVER SWAP DUP XOR OR AND RSHIFT LSHIFT */MOD U/MOD + 0< 0= TIMER_ISR_REGISTER ACCEPT SD_MMC.BEGIN MDNS.BEGIN FILE-SIZE RESIZE-FILE REPOSITION-FILE FILE-POSITION READ-FILE WRITE-FILE DELETE-FILE CREATE-FILE OPEN-FILE FLUSH-FILE CLOSE-FILE BIN W/O R/W R/O TERMINATE MS-TICKS DACWRITE PULSEIN ANALOGREAD DIGITALREAD DIGITALWRITE PINMODE 

static const PROGMEM typedef_forthWord forthWords[] = { /* converted to uppercase, original case */
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
