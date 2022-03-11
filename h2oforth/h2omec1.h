#ifndef H2OMEC1
#define H2OMEC1

/* The "Mecrisp 2.0.7 for msp430g2553" FORTH */

/* Definitions */

void mecrispHookKeyQ(void); /* Mecrisp Core */
void mecrispHookKey(void);
void mecrispHookEmitQ(void);
void mecrispHookEmit(void);
void mecrispKeyQ(void);
void mecrispKey(void);
void mecrispEmitQ(void);
void mecrispEmit(void);
void mecrispHexDot(void);
void mecrispCr(void);
void mecrispBl(void);
void mecrispSpace(void);
void mecrispSpaces(void);
void mecrispWords(void);
void mecrispDotS(void);
void mecrispHDotS(void);
void mecrispUDotS(void);
void mecrispDotRs(void);
void mecrispTwoNip(void);
void mecrispTwoDrop(void);
void mecrispTwoMinusRot(void);
void mecrispTwoRot(void);
void mecrispTwoTuck(void);
void mecrispTwoSwap(void);
void mecrispTwoOver(void);
void mecrispTwoDup(void);
void mecrispTwoToR(void);
void mecrispTwoRFrom(void);
void mecrispTwoRFetch(void);
void mecrispTwoRDrop(void);
void mecrispDepth(void);
void mecrispPick(void);
void mecrispNip(void);
void mecrispDrop(void);
void mecrispRot(void);
void mecrispMinusRot(void);
void mecrispSwap(void);
void mecrispTuck(void);
void mecrispOver(void);
void mecrispQDup(void);
void mecrispDup(void);
void mecrispToR(void);
void mecrispRFrom(void);
void mecrispRFetch(void);
void mecrispRDrop(void);
void mecrispRDepth(void);
void mecrispRPick(void);
void mecrispSPFetch(void);
void mecrispSPStore(void);
void mecrispRPFetch(void);
void mecrispRPStore(void);
void mecrispReverseHalf(void);
void mecrispARShift(void);
void mecrispRShift(void);
void mecrispLShift(void);
void mecrispShR(void);
void mecrispShL(void);
void mecrispRoR(void);
void mecrispRoL(void);
void mecrispBic(void);
void mecrispNot(void);
void mecrispXor(void);
void mecrispOr(void);
void mecrispAnd(void);
void mecrispTrue(void);
void mecrispFalse(void);
void mecrispClz(void);
void mecrispDotDigit(void);
void mecrispDigit(void);
void mecrispHold(void);
void mecrispSign(void);
void mecrispNumS(void);
void mecrispNum(void);
void mecrispNumGreater(void);
void mecrispLessNum(void);
void mecrispUDot(void);
void mecrispDot(void);
void mecrispUDDot(void);
void mecrispDDot(void);
void mecrispFSlash(void);
void mecrispFStar(void);
void mecrispHoldLess(void);
void mecrispFNumS(void);
void mecrispFNum(void);
void mecrispFDot(void);
void mecrisp(void);
void mecrispNumber(void);
void mecrispSlashStar(void);
void mecrispUStarSlash(void);
void mecrispStarSlashMod(void);
void mecrispMSlashMod(void);
void mecrispMStar(void);
void mecrispUMSlashMod(void);
void mecrispUDSlashMod(void);
void mecrispUDMStar(void);
void mecrispD2Slash(void);
void mecrispD2Star(void);
void mecrispDShR(void);
void mecrispDShL(void);
void mecrispDAbs(void);
void mecrispDNegate(void);
void mecrispDMinus(void);
void mecrispDPlus(void);
void mecrispSToD(void);
void mecrispDuGreater(void);
void mecrispDuLess(void);
void mecrispDGreater(void);
void mecrispDLess(void);
void mecrispD0Less(void);
void mecrispD0Equal(void);
void mecrispD0Unequal(void);
void mecrispDEqual(void);
void mecrispUMStar(void);
void mecrispUSlashMod(void);
void mecrispSlashMod(void);
void mecrispMod(void);
void mecrispSlash(void);
void mecrispStar(void);
void mecrispCompare(void);
void mecrispSkipString(void);
void mecrispCType(void);
void mecrispType(void);
void mecrispSQuote(void);
void mecrispCQuote(void);
void mecrispDotQuote(void);
void mecrispParen(void);
void mecrispCount(void);
void mecrispBackslash(void);
void mecrispMin(void);
void mecrispMax(void);
void mecrispUMin(void);
void mecrispUMax(void);
void mecrispTwoMinus(void);
void mecrispOneMinus(void);
void mecrispTwoPlus(void);
void mecrispOnePlus(void);
void mecrispEven(void);
void mecrispTwoStar(void);
void mecrispTwoSlash(void);
void mecrispAbs(void);
void mecrispNegate(void);
void mecrispMinus(void);
void mecrispPlus(void);
void mecrispBinary(void);
void mecrispDecimal(void);
void mecrispHex(void);
void mecrispBase(void);
void mecrispCells(void);
void mecrispCellPlus(void);
void mecrispMove(void);
void mecrispFill(void);
void mecrispCBitFetch(void);
void mecrispBitFetch(void);
void mecrispCXorStore(void);
void mecrispXorStore(void);
void mecrispCBicStore(void);
void mecrispBicStore(void);
void mecrispCBisStore(void);
void mecrispBisStore(void);
void mecrispTwoConstant(void);
void mecrispConstant(void);
void mecrispTwoVariable(void);
void mecrispVariable(void);
void mecrispNVariable(void);
void mecrispBufferColon(void);
void mecrispPlusStore(void);
void mecrispCPlusStore(void);
void mecrispTwoStore(void);
void mecrispTwoFetch(void);
void mecrispCStore(void);
void mecrispCFetch(void);
void mecrispStore(void);
void mecrispFetch(void);
void mecrispToIn(void);
void mecrispCurrentSource(void);
void mecrispSource(void);
void mecrispSetSource(void);
void mecrispTib(void);
void mecrispQuery(void);
void mecrispCExpect(void);
void mecrispForth(void);
void mecrispToken(void);
void mecrispParse(void);
void mecrispXTick(void);
void mecrispTick(void);
void mecrispEvaluate(void);
void mecrispInterpret(void);
void mecrispHookQuit(void);
void mecrispQuit(void);
void mecrispDictionaryStart(void);
void mecrispDictionaryNext(void);
void mecrispComma(void);
void mecrispCComma(void);
void mecrispAlign(void);
void mecrispAligned(void);
void mecrispXChar(void);
void mecrispChar(void);
void mecrispStringComma(void);
void mecrispLiteralComma(void);
void mecrispTwoLiteralComma(void);
void mecrispInlineComma(void);
void mecrispCallComma(void);
void mecrispRetComma(void);
void mecrispFlashVarHere(void);
void mecrispHere(void);
void mecrispAllot(void);
void mecrispYCreate(void);
void mecrispCompiletoRamQ(void);
void mecrispCompiletoRam(void);
void mecrispCompileToFlash(void);
void mecrispSmudge(void);
void mecrispCompileOnly(void);
void mecrispInline(void);
void mecrispImmediate(void);
void mecrispSetflags(void);
void mecrispFind(void);
void mecrispExecute(void);
void mecrispRecurse(void);
void mecrispPostpone(void);
void mecrispDoes(void);
void mecrispBuilds(void);
void mecrispCreate(void);
void mecrispState(void);
void mecrispRightBracket(void);
void mecrispLeftBracket(void);
void mecrispSemicolon(void);
void mecrispColon(void);
void mecrispZeroFoldable(void);
void mecrispOneFoldable(void);
void mecrispTwoFoldable(void);
void mecrispThreeFoldable(void);
void mecrispFourFoldable(void);
void mecrispFiveFoldable(void);
void mecrispSixFoldable(void);
void mecrispSevenFoldable(void);
void mecrispJumpComma(void);
void mecrispThen(void);
void mecrispElse(void);
void mecrispIf(void);
void mecrispAhead(void);
void mecrispRepeat(void);
void mecrispWhile(void);
void mecrispUntil(void);
void mecrispAgain(void);
void mecrispBegin(void);
void mecrispExit(void);
void mecrispK(void);
void mecrispJ(void);
void mecrispI(void);
void mecrispUnLoop(void);
void mecrispLeave(void);
void mecrispPlusLoop(void);
void mecrispLoop(void);
void mecrispQDo(void);
void mecrispDo(void);
void mecrispCase(void);
void mecrispQOf(void);
void mecrispOf(void);
void mecrispEndOf(void);
void mecrispEndCase(void);
void mecrispULessEqual(void);
void mecrispUGreaterEqual(void);
void mecrispUGreater(void);
void mecrispULess(void);
void mecrispLessEqual(void);
void mecrispGreaterEqual(void);
void mecrispGreater(void);
void mecrispLess(void);
void mecrispZeroLess(void);
void mecrispZeroUnequal(void);
void mecrispZeroEqual(void);
void mecrispUnequal(void);
void mecrispEqual(void);
void mecrispDInt(void);
void mecrispEInt(void);
void mecrispEIntQ(void);
void mecrispNop(void);
void mecrispReset(void);
void mecrispLpm0(void);
void mecrispLpm1(void);
void mecrispLpm2(void);
void mecrispLpm3(void);
void mecrispLpm4(void);
void mecrispWakeup(void);
void mecrispHookPause(void);
void mecrispPause(void);
void mecrispSerialKeyQ(void);
void mecrispSerialKey(void);
void mecrispSerialEmitQ(void);
void mecrispSerialEmit(void);
void mecrispAdcVcc(void);
void mecrispAdc1Dot5(void);
void mecrispAnalog(void);
void mecrispEraseFlashFrom(void);
void mecrispEraseFlash(void);
void mecrispCFlashStore(void);
void mecrispFlashStore(void);
void mecrispIrqPort1(void);
void mecrispIrqPort2(void);
void mecrispIrqAdc(void);
void mecrispIrqTimerA1(void);
void mecrispIrqTimerA0(void);
void mecrispIrqWatchdog(void);
void mecrispIrqTimerB1(void);
void mecrispIrqTimerB0(void);
void mecrispIrqComp(void);
void mecrispIrqTx(void);
void mecrispIrqRx(void);
void mecrispList(void); /* Flash Dictionary */
void mecrispSearchFor(void);
void mecrispSearchCalls(void);
void mecrispUses(void);
void mecrispNameDot(void);
void mecrispDisasmDollar(void);
void mecrispDisasmFetch(void);
void mecrispUDot4(void);
void mecrispUDotNs(void);
void mecrispUDotH(void);
void mecrispRegisterDot(void);
void mecrispDisasmConst(void);
void mecrispDisasmJumps(void);
void mecrispDisasmSource(void);
void mecrispDisasmDestination(void);
void mecrispDisasmString(void);
void mecrispDisasmSingle(void);
void mecrispDisasmDouble(void);
void mecrispDisasm(void);
void mecrispMemStamp(void);
void mecrispDisasmStep(void);
void mecrispSeeC(void);
void mecrispSee(void);
void mecrispCornerStone(void);
void mecrispEraseFlash(void);

typedef void (*forthOperation)(void);

typedef  struct _forthWord {
	const char* forthWordName;
	const char* forthAlternativeName;
	const short int interpreted;
	const short int immediate;
	const short int implemented;
	const unsigned long forthWordID;
	const forthOperation  forthOpt; // function pointer 
} typedef_forthWord;

/* Variables */
/* Original WORDS output: */
// --- Mecrisp Core --- hook-key? hook-key hook-emit? hook-emit key? key emit? emit hex. cr bl space spaces words .s h.s u.s .rs 2nip 2drop 2-rot 2rot 2tuck 2swap 2over 2dup 2>r 2r> 2r@ 2rdrop depth pick nip drop rot -rot swap tuck over ?dup dup >r r> r@ rdrop rdepth rpick sp@ sp! rp@ rp! >< arshift rshift lshift shr shl ror rol bic not xor or and true false clz .digit digit hold sign #S # #> <# u. . ud. d. f/ f* hold< f#S f# f. f.n number / u*/ */mod m/mod m um/mod ud/mod udm* d2/ d2* dshr dshl dabs dnegate d- d+ s>d du> du< d> d< d0< d0= d<> d= um* u/mod /mod mod / * compare skipstring ctype type s" c" ." ( count \ min max umin umax 2- 1- 2+ 1+ even 2* 2/ abs negate - + binary decimal hex base cells cell+ move fill cbit@ bit@ cxor! xor! cbic! bic! cbis! bis! 2constant constant 2variable variable nvariable buffer: +! c+! 2! 2@ c! c@ ! @ >in current-source source setsource tib query cexpect accept token parse ['] ' evaluate interpret hook-quit quit dictionarystart dictionarynext , c, align aligned [char] char string, literal, 2literal, inline, call, ret, flashvar-here here allot (create) compiletoram? compiletoram compiletoflash smudge compileonly inline immediate setflags find execute recurse postpone does> <builds create state ] [ ; : 0-foldable 1-foldable 2-foldable 3-foldable 4-foldable 5-foldable 6-foldable 7-foldable jump, then else if ahead repeat while until again begin exit k j i unloop leave +loop loop ?do do case ?of of endof endcase u<= u>= u> u< <= >= > < 0< 0<> 0= <> = dint eint eint? nop reset lpm0 lpm1 lpm2 lpm3 lpm4 wakeup hook-pause pause serial-key? serial-key serial-emit? serial-emit adc-vcc adc-1.5 analog eraseflashfrom eraseflash cflash! flash! irq-port1 irq-port2 irq-adc irq-timera1 irq-timera0 irq-watchdog irq-timerb1 irq-timerb0 irq-comp irq-tx irq-rx --- Flash Dictionary --- list searchfor searchcalls uses name. disasm-$ disasm-fetch u.4 u.ns u.h register. disasm-const disasm-jumps disasm-source disasm-destination disasm-string disasm-single disasm-double disasm memstamp disasm-step seec see cornerstone eraseflash

/* WORDS output converted to uppercase: */
// --- Mecrisp Core --- HOOK-KEY? HOOK-KEY HOOK-EMIT? HOOK-EMIT KEY? KEY EMIT? EMIT HEX. CR BL SPACE SPACES WORDS .S H.S U.S .RS 2NIP 2DROP 2-ROT 2ROT 2TUCK 2SWAP 2OVER 2DUP 2>R 2R> 2R@ 2RDROP DEPTH PICK NIP DROP ROT -ROT SWAP TUCK OVER ?DUP DUP >R R> R@ RDROP RDEPTH RPICK SP@ SP! RP@ RP! >< ARSHIFT RSHIFT LSHIFT SHR SHL ROR ROL BIC NOT XOR OR AND TRUE FALSE CLZ .DIGIT DIGIT HOLD SIGN #S # #> <# U. . UD. D. F/ F* HOLD< F#S F# F. F.N NUMBER */ U*/ */MOD M/MOD M* UM/MOD UD/MOD UDM* D2/ D2* DSHR DSHL DABS DNEGATE D- D+ S>D DU> DU< D> D< D0< D0= D<> D= UM* U/MOD /MOD MOD / * COMPARE SKIPSTRING CTYPE TYPE S" C" ." ( COUNT \ MIN MAX UMIN UMAX 2- 1- 2+ 1+ EVEN 2* 2/ ABS NEGATE - + BINARY DECIMAL HEX BASE CELLS CELL+ MOVE FILL CBIT@ BIT@ CXOR! XOR! CBIC! BIC! CBIS! BIS! 2CONSTANT CONSTANT 2VARIABLE VARIABLE NVARIABLE BUFFER: +! C+! 2! 2@ C! C@ ! @ >IN CURRENT-SOURCE SOURCE SETSOURCE TIB QUERY CEXPECT ACCEPT TOKEN PARSE ['] ' EVALUATE INTERPRET HOOK-QUIT QUIT DICTIONARYSTART DICTIONARYNEXT , C, ALIGN ALIGNED [CHAR] CHAR STRING, LITERAL, 2LITERAL, INLINE, CALL, RET, FLASHVAR-HERE HERE ALLOT (CREATE) COMPILETORAM? COMPILETORAM COMPILETOFLASH SMUDGE COMPILEONLY INLINE IMMEDIATE SETFLAGS FIND EXECUTE RECURSE POSTPONE DOES> <BUILDS CREATE STATE ] [ ; : 0-FOLDABLE 1-FOLDABLE 2-FOLDABLE 3-FOLDABLE 4-FOLDABLE 5-FOLDABLE 6-FOLDABLE 7-FOLDABLE JUMP, THEN ELSE IF AHEAD REPEAT WHILE UNTIL AGAIN BEGIN EXIT K J I UNLOOP LEAVE +LOOP LOOP ?DO DO CASE ?OF OF ENDOF ENDCASE U<= U>= U> U< <= >= > < 0< 0<> 0= <> = DINT EINT EINT? NOP RESET LPM0 LPM1 LPM2 LPM3 LPM4 WAKEUP HOOK-PAUSE PAUSE SERIAL-KEY? SERIAL-KEY SERIAL-EMIT? SERIAL-EMIT ADC-VCC ADC-1.5 ANALOG ERASEFLASHFROM ERASEFLASH CFLASH! FLASH! IRQ-PORT1 IRQ-PORT2 IRQ-ADC IRQ-TIMERA1 IRQ-TIMERA0 IRQ-WATCHDOG IRQ-TIMERB1 IRQ-TIMERB0 IRQ-COMP IRQ-TX IRQ-RX --- FLASH DICTIONARY --- LIST SEARCHFOR SEARCHCALLS USES NAME. DISASM-$ DISASM-FETCH U.4 U.NS U.H REGISTER. DISASM-CONST DISASM-JUMPS DISASM-SOURCE DISASM-DESTINATION DISASM-STRING DISASM-SINGLE DISASM-DOUBLE DISASM MEMSTAMP DISASM-STEP SEEC SEE CORNERSTONE ERASEFLASH


static const PROGMEM typedef_forthWord forthWords[] = { /* converted to uppercase, original case */
			{ "HOOK-KEY?", "hook-key?", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispHookKeyQ }, /* Mecrisp Core */
			{ "HOOK-KEY", "hook-key", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispHookKey },
			{ "HOOK-EMIT?", "hook-emit?", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispHookEmitQ },
			{ "HOOK-EMIT", "hook-emit", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispHookEmit },
			{ "KEY?", "key?", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispKeyQ },
			{ "KEY", "key", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispKey },
			{ "EMIT?", "emit?", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispEmitQ },
			{ "EMIT", "emit", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispEmit },
			{ "HEX.", "hex.", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispHexDot },
			{ "CR", "cr", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispCr },
			{ "BL", "bl", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispBl },
			{ "SPACE", "space", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispSpace },
			{ "SPACES", "spaces", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispSpaces },
			{ "WORDS", "words", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispWords },
			{ ".S", ".s", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispDotS },
			{ "H.S", "h.s", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispHDotS },
			{ "U.S", "u.s", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispUDotS },
			{ ".RS", ".rs", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispDotRs },
			{ "2NIP", "2nip", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispTwoNip },
			{ "2DROP", "2drop", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispTwoDrop },
			{ "2-ROT", "2-rot", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispTwoMinusRot },
			{ "2ROT", "2rot", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispTwoRot },
			{ "2TUCK", "2tuck", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispTwoTuck },
			{ "2SWAP", "2swap", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispTwoSwap },
			{ "2OVER", "2over", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispTwoOver },
			{ "2DUP", "2dup", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispTwoDup },
			{ "2>R", "2>r", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispTwoToR },
			{ "2R>", "2r>", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispTwoRFrom },
			{ "2R@", "2r@", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispTwoRFetch },
			{ "2RDROP", "2rdrop", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispTwoRDrop },
			{ "DEPTH", "depth", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispDepth },
			{ "PICK", "pick", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispPick },
			{ "NIP", "nip", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispNip },
			{ "DROP", "drop", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispDrop },
			{ "ROT", "rot", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispRot },
			{ "-ROT", "-rot", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispMinusRot },
			{ "SWAP", "swap", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispSwap },
			{ "TUCK", "tuck", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispTuck },
			{ "OVER", "over", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispOver },
			{ "?DUP", "?dup", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispQDup },
			{ "DUP", "dup", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispDup },
			{ ">R", ">r", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispToR },
			{ "R>", "r>", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispRFrom },
			{ "R@", "r@", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispRFetch },
			{ "RDROP", "rdrop", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispRDrop },
			{ "RDEPTH", "rdepth", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispRDepth },
			{ "RPICK", "rpick", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispRPick },
			{ "SP@", "sp@", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispSPFetch },
			{ "SP!", "sp!", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispSPStore },
			{ "RP@", "rp@", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispRPFetch },
			{ "RP!", "rp!", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispRPStore },
			{ "><", "><", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispReverseHalf }, /* not "><;" as described in the online documentation */
			{ "ARSHIFT", "arshift", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispARShift },
			{ "RSHIFT", "rshift", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispRShift },
			{ "LSHIFT", "lshift", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispLShift },
			{ "SHR", "shr", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispShR },
			{ "SHL", "shl", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispShL },
			{ "ROR", "ror", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispRoR },
			{ "ROL", "rol", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispRoL },
			{ "BIC", "bic", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispBic },
			{ "NOT", "not", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispNot },
			{ "XOR", "xor", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispXor },
			{ "OR", "or", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispOr },
			{ "AND", "and", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispAnd },
			{ "TRUE", "true", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispTrue },
			{ "FALSE", "false", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispFalse },
			{ "CLZ", "clz", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispClz },
			{ ".DIGIT", ".digit", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispDotDigit },
			{ "DIGIT", "digit", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispDigit },
			{ "HOLD", "hold", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispHold },
			{ "SIGN", "sign", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispSign },
			{ "#S", "#S", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispNumS },
			{ "#", "#", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispNum },
			{ "#>", "#>", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispNumGreater },
			{ "<#", "<#", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispLessNum },
			{ "U.", "u.", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispUDot },
			{ ".", ".", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispDot },
			{ "UD.", "ud.", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispUDDot },
			{ "D.", "d.", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispDDot },
			{ "F/", "f/", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispFSlash },
			{ "F*", "f*", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispFStar },
			{ "HOLD<", "hold<", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispHoldLess },
			{ "F#S", "f#S", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispFNumS },
			{ "F#", "f#", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispFNum },
			{ "F.", "f.", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispFDot },
			{ "F.N", "f.n", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrisp },
			{ "NUMBER", "number", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispNumber },
			{ "*/", "*/", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispSlashStar },
			{ "U*/", "u*/", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispUStarSlash },
			{ "*/MOD", "*/mod", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispStarSlashMod },
			{ "M/MOD", "m/mod", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispMSlashMod },
			{ "M*", "m*", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispMStar },
			{ "UM/MOD", "um/mod", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispUMSlashMod },
			{ "UD/MOD", "ud/mod", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispUDSlashMod },
			{ "UDM*", "udm*", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispUDMStar },
			{ "D2/", "d2/", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispD2Slash },
			{ "D2*", "d2*", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispD2Star },
			{ "DSHR", "dshr", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispDShR },
			{ "DSHL", "dshl", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispDShL },
			{ "DABS", "dabs", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispDAbs },
			{ "DNEGATE", "dnegate", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispDNegate },
			{ "D-", "d-", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispDMinus },
			{ "D+", "d+", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispDPlus },
			{ "S>D", "s>d", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispSToD },
			{ "DU>", "du>", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispDuGreater },
			{ "DU<", "du<", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispDuLess },
			{ "D>", "d>", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispDGreater },
			{ "D<", "d<", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispDLess },
			{ "D0<", "d0<", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispD0Less },
			{ "D0=", "d0=", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispD0Equal },
			{ "D<>", "d<>", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispD0Unequal },
			{ "D=", "d=", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispDEqual },
			{ "UM*", "um*", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispUMStar },
			{ "U/MOD", "u/mod", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispUSlashMod },
			{ "/MOD", "/mod", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispSlashMod },
			{ "MOD", "mod", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispMod },
			{ "/", "/", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispSlash },
			{ "*", "*", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispStar },
			{ "COMPARE", "compare", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispCompare },
			{ "SKIPSTRING", "skipstring", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispSkipString },
			{ "CTYPE", "ctype", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispCType },
			{ "TYPE", "type", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispType },
			{ "S\"", "s\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispSQuote },
			{ "C\"", "c\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispCQuote },
			{ ".\"", ".\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispDotQuote },
			{ "(", "(", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispParen },
			{ "COUNT", "count", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispCount },
			{ "\\", "\\", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispBackslash },
			{ "MIN", "min", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispMin },
			{ "MAX", "max", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispMax },
			{ "UMIN", "umin", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispUMin },
			{ "UMAX", "umax", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispUMax },
			{ "2-", "2-", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispTwoMinus },
			{ "1-", "1-", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispOneMinus },
			{ "2+", "2+", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispTwoPlus },
			{ "1+", "1+", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispOnePlus },
			{ "EVEN", "even", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispEven },
			{ "2*", "2*", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispTwoStar },
			{ "2/", "2/", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispTwoSlash },
			{ "ABS", "abs", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispAbs },
			{ "NEGATE", "negate", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispNegate },
			{ "-", "-", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispMinus },
			{ "+", "+", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispPlus },
			{ "BINARY", "binary", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispBinary },
			{ "DECIMAL", "decimal", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispDecimal },
			{ "HEX", "hex", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispHex },
			{ "BASE", "base", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispBase },
			{ "CELLS", "cells", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispCells },
			{ "CELL+", "cell+", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispCellPlus },
			{ "MOVE", "move", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispMove },
			{ "FILL", "fill", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispFill },
			{ "CBIT@", "cbit@", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispCBitFetch },
			{ "BIT@", "bit@", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispBitFetch },
			{ "CXOR!", "cxor!", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispCXorStore },
			{ "XOR!", "xor!", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispXorStore },
			{ "CBIC!", "cbic!", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispCBicStore },
			{ "BIC!", "bic!", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispBicStore },
			{ "CBIS!", "cbis!", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispCBisStore },
			{ "BIS!", "bis!", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispBisStore },
			{ "2CONSTANT", "2constant", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispTwoConstant },
			{ "CONSTANT", "constant", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispConstant },
			{ "2VARIABLE", "2variable", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispTwoVariable },
			{ "VARIABLE", "variable", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispVariable },
			{ "NVARIABLE", "nvariable", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispNVariable },
			{ "BUFFER:", "buffer:", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispBufferColon },
			{ "+!", "+!", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispPlusStore },
			{ "C+!", "c+!", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispCPlusStore },
			{ "2!", "2!", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispTwoStore },
			{ "2@", "2@", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispTwoFetch },
			{ "C!", "c!", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispCStore },
			{ "C@", "c@", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispCFetch },
			{ "!", "!", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispStore },
			{ "@", "@", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispFetch },
			{ ">IN", ">in", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispToIn },
			{ "CURRENT-SOURCE", "current-source", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispCurrentSource },
			{ "SOURCE", "source", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispSource },
			{ "SETSOURCE", "setsource", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispSetSource },
			{ "TIB", "tib", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispTib },
			{ "QUERY", "query", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispQuery },
			{ "CEXPECT", "cexpect", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispCExpect },
			{ "ACCEPT", "accept", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispForth },
			{ "TOKEN", "token", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispToken },
			{ "PARSE", "parse", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispParse },
			{ "[']", "[']", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispXTick },
			{ "'", "'", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispTick },
			{ "EVALUATE", "evaluate", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispEvaluate },
			{ "INTERPRET", "interpret", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispInterpret },
			{ "HOOK-QUIT", "hook-quit", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispHookQuit },
			{ "QUIT", "quit", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispQuit },
			{ "DICTIONARYSTART", "dictionarystart", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispDictionaryStart },
			{ "DICTIONARYNEXT", "dictionarynext", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispDictionaryNext },
			{ ",", ",", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispComma },
			{ "C,", "c,", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispCComma },
			{ "ALIGN", "align", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispAlign },
			{ "ALIGNED", "aligned", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispAligned },
			{ "[CHAR]", "[char]", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispXChar },
			{ "CHAR", "char", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispChar },
			{ "STRING,", "string,", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispStringComma },
			{ "LITERAL,", "literal,", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispLiteralComma },
			{ "2LITERAL,", "2literal,", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispTwoLiteralComma },
			{ "INLINE,", "inline,", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispInlineComma },
			{ "CALL,", "call,", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispCallComma },
			{ "RET,", "ret,", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispRetComma },
			{ "FLASHVAR-HERE", "flashvar-here", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispFlashVarHere },
			{ "HERE", "here", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispHere },
			{ "ALLOT", "allot", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispAllot },
			{ "(CREATE)", "(create)", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispYCreate },
			{ "COMPILETORAM?", "compiletoram?", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispCompiletoRamQ },
			{ "COMPILETORAM", "compiletoram", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispCompiletoRam },
			{ "COMPILETOFLASH", "compiletoflash", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispCompileToFlash },
			{ "SMUDGE", "smudge", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispSmudge },
			{ "COMPILEONLY", "compileonly", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispCompileOnly },
			{ "INLINE", "inline", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispInline },
			{ "IMMEDIATE", "immediate", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispImmediate },
			{ "SETFLAGS", "setflags", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispSetflags },
			{ "FIND", "find", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispFind },
			{ "EXECUTE", "execute", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispExecute },
			{ "RECURSE", "recurse", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispRecurse },
			{ "POSTPONE", "postpone", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispPostpone },
			{ "DOES>", "does>", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispDoes },
			{ "<BUILDS", "<builds", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispBuilds },
			{ "CREATE", "create", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispCreate },
			{ "STATE", "state", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispState },
			{ "]", "]", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispRightBracket },
			{ "[", "[", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispLeftBracket },
			{ ";", ";", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispSemicolon },
			{ ":", ":", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispColon },
			{ "0-FOLDABLE", "0-foldable", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispZeroFoldable },
			{ "1-FOLDABLE", "1-foldable", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispOneFoldable },
			{ "2-FOLDABLE", "2-foldable", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispTwoFoldable },
			{ "3-FOLDABLE", "3-foldables", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispThreeFoldable },
			{ "4-FOLDABLE", "4-foldable", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispFourFoldable },
			{ "5-FOLDABLE", "5-foldable", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispFiveFoldable },
			{ "6-FOLDABLE", "6-foldable", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispSixFoldable },
			{ "7-FOLDABLE", "7-foldable", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispSevenFoldable },
			{ "JUMP,", "jump,", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispJumpComma },
			{ "THEN", "then", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispThen },
			{ "ELSE", "else", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispElse },
			{ "IF", "if", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispIf },
			{ "AHEAD", "ahead", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispAhead },
			{ "REPEAT", "repeat", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispRepeat },
			{ "WHILE", "while", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispWhile },
			{ "UNTIL", "until", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispUntil },
			{ "AGAIN", "again", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispAgain },
			{ "BEGIN", "begin", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispBegin },
			{ "EXIT", "exit", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispExit },
			{ "K", "k", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispK },
			{ "J", "j", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispJ },
			{ "I", "i", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispI },
			{ "UNLOOP", "unloop", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispUnLoop },
			{ "LEAVE", "leave", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispLeave },
			{ "+LOOP", "+loop", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispPlusLoop },
			{ "LOOP", "loop", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispLoop },
			{ "?DO", "?do", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispQDo },
			{ "DO", "do", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispDo },
			{ "CASE", "case", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispCase },
			{ "?OF", "?of", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispQOf },
			{ "OF", "of", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispOf },
			{ "ENDOF", "endof", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispEndOf },
			{ "ENDCASE", "endcase", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispEndCase },
			{ "U<=", "u<=", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispULessEqual },
			{ "U>=", "u>=", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispUGreaterEqual },
			{ "U>", "u>", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispUGreater },
			{ "U<", "u<", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispULess },
			{ "<=", "<=", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispLessEqual },
			{ ">=", ">=", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispGreaterEqual },
			{ ">", ">", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispGreater },
			{ "<", "<", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispLess },
			{ "0<", "0<", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispZeroLess },
			{ "0<>", "0<>", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispZeroUnequal },
			{ "0=", "0=", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispZeroEqual },
			{ "<>", "<>", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispUnequal },
			{ "=", "=", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispEqual },
			{ "DINT", "dint", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispDInt },
			{ "EINT", "eint", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispEInt },
			{ "EINT?", "eint?", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispEIntQ },
			{ "NOP", "nop", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispNop },
			{ "RESET", "reset", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispReset },
			{ "LPM0", "lpm0", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispLpm0 },
			{ "LPM1", "lpm1", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispLpm1 },
			{ "LPM2", "lpm2", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispLpm2 },
			{ "LPM3", "lpm3", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispLpm3 },
			{ "LPM4", "lpm4", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispLpm4 },
			{ "WAKEUP", "wakeup", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispWakeup },
			{ "HOOK-PAUSE", "hook-pause", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispHookPause },
			{ "PAUSE", "pause", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispPause },
			{ "SERIAL-KEY?", "serial-key?", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispSerialKeyQ },
			{ "SERIAL-KEY", "serial-key", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispSerialKey },
			{ "SERIAL-EMIT?", "serial-emit?", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispSerialEmitQ },
			{ "SERIAL-EMIT", "serial-emit", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispSerialEmit },
			{ "ADC-VCC", "adc-vcc", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispAdcVcc },
			{ "ADC-1.5", "adc-1.5", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispAdc1Dot5 },
			{ "ANALOG", "analog", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispAnalog },
			{ "ERASEFLASHFROM", "eraseflashfrom", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispEraseFlashFrom },
			{ "ERASEFLASH", "eraseflash", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispEraseFlash },
			{ "CFLASH!", "cflash!", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispCFlashStore },
			{ "FLASH!", "flash!", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispFlashStore },
			{ "IRQ-PORT1", "irq-port1", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispIrqPort1 },
			{ "IRQ-PORT2", "irq-port2", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispIrqPort2 },
			{ "IRQ-ADC", "irq-adc", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispIrqAdc },
			{ "IRQ-TIMERA1", "irq-timera1", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispIrqTimerA1 },
			{ "IRQ-TIMERA0", "irq-timera0", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispIrqTimerA0 },
			{ "IRQ-WATCHDOG", "irq-watchdog", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispIrqWatchdog },
			{ "IRQ-TIMERB1", "irq-timerb1", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispIrqTimerB1 },
			{ "IRQ-TIMERB0", "irq-timerb0", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispIrqTimerB0 },
			{ "IRQ-COMP", "irq-comp", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispIrqComp },
			{ "IRQ-TX", "irq-tx", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispIrqTx },
			{ "IRQ-RX", "irq-rx", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispIrqRx },
			{ "LIST", "list", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispList }, /* Flash Dictionary */
			{ "SEARCHFOR", "searchfor", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispSearchFor },
			{ "SEARCHCALLS", "searchcalls", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispSearchCalls },
			{ "USES", "uses", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispUses },
			{ "NAME.", "name.", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispNameDot },
			{ "DISASM-$", "disasm-$", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispDisasmDollar },
			{ "DISASM-FETCH", "disasm-fetch", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispDisasmFetch },
			{ "U.4", "u.4", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispUDot4 },
			{ "U.NS", "u.ns", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispUDotNs },
			{ "U.H", "u.h", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispUDotH },
			{ "REGISTER.", "register.", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispRegisterDot },
			{ "DISASM-CONST", "disasm-const", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispDisasmConst },
			{ "DISASM-JUMPS", "disasm-jumps", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispDisasmJumps },
			{ "DISASM-SOURCE", "disasm-source", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispDisasmSource },
			{ "DISASM-DESTINATION", "disasm-destination", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispDisasmDestination },
			{ "DISASM-STRING", "disasm-string", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispDisasmString },
			{ "DISASM-SINGLE", "disasm-single", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispDisasmSingle },
			{ "DISASM-DOUBLE", "disasm-double", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispDisasmDouble },
			{ "DISASM", "disasm", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispDisasm },
			{ "MEMSTAMP", "memstamp", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispMemStamp },
			{ "DISASM-STEP", "disasm-step", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispDisasmStep },
			{ "SEEC", "seec", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispSeeC },
			{ "SEE", "see", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispSee },
			{ "CORNERSTONE", "cornerstone", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispCornerStone },
			{ "ERASEFLASH", "eraseflash", TRUE, FALSE, FALSE, 0UL, (forthOperation)mecrispEraseFlash },
			{ "H2OFORTH", "H2OFORTH", TRUE, FALSE, FALSE, MAX_WORDID, (forthOperation)NULL }
};

#endif
