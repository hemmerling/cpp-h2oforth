#ifndef H2ORSC1
#define H2ORSC1

/* The "RSC-FORTH" ( figFORTH ) FORTH */

/* Definitions */

void rscNum(void);
void rscTask(void);
void rscAdmp(void);
void rscSemicolonDump(void);
void rscFormat(void);
void rscFmTrk(void);
void rscBankExecute(void);
void rscBankEecStore(void);
void rscBankCFetch(void);
void rscBankCStore(void);
void rscEecStore(void);
void rscCaseColon(void);
void rscMemTop(void);
void rscScdr(void);
void rscScsr(void);
void rscSccr(void);
void rscMcr(void);
void rscIer(void);
void rscIfr(void);
void rscPg(void);
void rscPf(void);
void rscPe(void);
void rscPd(void);
void rscPc(void);
void rscPb(void);
void rscPa(void);
void rscNmiVec(void);
void rscIrqVec(void);
void rscIntVec(void);
void rscIntFlg(void);
void rscCCommaCon(void);
void rscDotS(void);
void rscMon(void);
void rscVlist(void);
void rscIndex(void);
void rscList(void);
void rscQ(void);
void rscDot(void);
void rscDotR(void);
void rscDDot(void);
void rscDDotR(void);
void rscNumS(void);
void rscOne(void);
void rscSign(void);
void rscNumGreater(void);
void rscLessNum(void);
void rscSpaces(void);
void rscWhile(void);
void rscElse(void);
void rscIf(void);
void rscRepeat(void);
void rscAgain(void);
void rscEnd(void);
void rscUntil(void);
void rscPlusLoop(void);
void rscLoop(void);
void rscDo(void);
void rscThen(void);
void rscEndIf(void);
void rscBegin(void);
void rscForget(void);
void rscAutostart(void);
void rscQKernel(void);
void rscHWord(void);
void rscHSlashC(void);
void rscTick(void);
void rscSeek(void);
void rscInit(void);
void rscDWrite(void);
void rscDRead(void);
void rscSelect(void);
void rscDisk(void);
void rscRSlashW(void);
void rscBSlashScr(void);
void rscBSlashBuf(void);
void rscMinusBCD(void);
void rscTo(void);
void rscLoad(void);
void rscMessage(void);
void rscToLine(void);
void rscDotLine(void);
void rscYLine(void);
void rscDump(void);
void rscFlush(void);
void rscBlock(void);
void rscBuffer(void);
void rscEmptyBuffers(void);
void rscUpdate(void);
void rscPlusBuf(void);
void rscMSlashMod(void);
void rscStarSlash(void);
void rscStarSlashMod(void);
void rscMod(void);
void rscSlash(void);
void rscSlashMod(void);
void rscStar(void);
void rscMSlash(void);
void rscMStar(void);
void rscMax(void);
void rscMin(void);
void rscDAbs(void);
void rscAbs(void);
void rscDPlusMinus(void);
void rscPlusMinus(void);
void rscSToD(void);
void rscCold(void);
void rscAbort(void);
void rscQuit(void);
void rscParen(void);
void rscDefinitions(void);
void rscAssembler(void);
void rscForth(void);
void rscVocabulary(void);
void rscImmediate(void);
void rscInterpret(void);
void rscQStack(void);
void rscDLiteral(void);
void rscLiteral(void);
void rscXCompile(void);
void rscCreate(void);
void rscIDDot(void);
void rscError(void);
void rscYAbort(void);
void rscFind(void);
void rscNumber(void);
void rscYNumber(void);
void rscWord(void);
void rscHold(void);
void rscBlanks(void);
void rscErase(void);
void rscFill(void);
void rscEmptySpace(void);
void rscQuery(void);
void rscExpect(void);
void rscDotQuote(void);
void rscYDotQuote(void);
void rscTrailing(void);
void rscType(void);
void rscCount(void);
void rscDoes(void);
void rscBuilds(void);
void rscSemicolonCode(void);
void rscYSemicolonCode(void);
void rscDecimal(void);
void rscHex(void);
void rscSmudge(void);
void rscRightBracket(void);
void rscLeftBracket(void);
void rscCompile(void);
void rscQCsp(void);
void rscQPairs(void);
void rscQExec(void);
void rscQComp(void);
void rscQError(void);
void rscStoreCsp(void);
void rscPfaptr(void);
void rscNfa(void);
void rscCfa(void);
void rscLfa(void);
void rscLatest(void);
void rscTraverse(void);
void rscMinusDup(void);
void rscSpace(void);
void rscPick(void);
void rscRot(void);
void rscGreater(void);
void rscLess(void);
void rscULess(void);
void rscEqual(void);
void rscMinus(void);
void rscCComma(void);
void rscComma(void);
void rscAllot(void);
void rscHere(void);
void rscCommaSlash(void);
void rscAllotSlash(void);
void rscHereSlash(void);
void rscDPSlash(void);
void rscTwoMinus(void);
void rscOneMinus(void);
void rscTwoPlus(void);
void rscOnePlus(void);
void rscPad(void);
void rscLimit(void);
void rscFirst(void);
void rscCSlashL(void);
void rscKhz(void);
void rscMode(void);
void rscCsp(void);
void rscState(void);
void rscCurrent(void);
void rscContext(void);
void rscScr(void);
void rscBlk(void);
void rscPrev(void);
void rscUse(void);
void rscUAbort(void);
void rscVocLink(void);
void rscHeaderless(void);
void rscDP(void);
void rscFence(void);
void rscWarning(void);
void rscWidth(void);
void rscOffset(void);
void rscULimit(void);
void rscUFirst(void);
void rscBSlashSide(void);
void rscCylinder(void);
void rscDiskNo(void);
void rscHld(void);
void rscDpl(void);
void rscIn(void);
void rscCldSlashWrm(void);
void rscBase(void);
void rscURSlashW(void);
void rscUPad(void);
void rscUCSlashL(void);
void rscR0(void);
void rscS0(void);
void rscTib(void);
void rscBl(void);
void rscFour(void);
void rscThree(void);
void rscTwo(void);
void rscOne(void);
void rscZero(void);
void rscUser(void);
void rscCode(void);
void rscVariable(void);
void rscConstant(void);
void rscSemicolon(void);
void rscColon(void);
void rscCStore(void);
void rscStore(void);
void rscCFetch(void);
void rscFetch(void);
void rscToggle(void);
void rscPlusStore(void);
void rscBounds(void);
void rscTwoDup(void);
void rscDup(void);
void rscSwap(void);
void rscTwoDrop(void);
void rscDrop(void);
void rscOver(void);
void rscDNegate(void);
void rscNegate(void);
void rscDPlus(void);
void rscPlus(void);
void rscZeroLess(void);
void rscNot(void);
void rscZeroEqual(void);
void rscR(void);
void rscRFrom(void);
void rscToR(void);
void rscLeave(void);
void rscSemicolonS(void);
void rscRPFetch(void);
void rscRPStore(void);
void rscSPStore(void);
void rscSPFetch(void);
void rscXor(void);
void rscOr(void);
void rscAnd(void);
void rscUSlash(void);
void rscUStar(void);
void rscCMove(void);
void rscFinis(void);
void rscSource(void);
void rscXOff(void);
void rscXon(void);
void rscCr(void);
void rscQTerminal(void);
void rscKey(void);
void rscEmit(void);
void rscEnclose(void);
void rscYFind(void);
void rscDigit(void);
void rscI(void);
void rscYDo(void);
void rscYPlusLoop(void);
void rscYLoop(void);
void rscZeroBranch(void);
void rscBranch(void);
void rscExecute(void);
void rscClit(void);
void rscLit(void);

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
/* This vocabulary is not in the order of the VLIST / WORDS listing! */

static const PROGMEM typedef_forthWord forthWords[] = {
			{ "#", "#", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscNum }, /* not listed by VLIST, but detailed description in the documentation */
			{ "TASK", "TASK", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscTask },
			{ "ADMP", "ADMP", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscAdmp }, /* RSC specific, not figFORTH */
			{ ";DUMP", ";DUMP", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscSemicolonDump }, /* RSC specific, not figFORTH */
			{ "FORMAT", "FORMAT", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscFormat }, /* RSC specific, not figFORTH */
			{ "FMTRK", "FMTRK", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscFmTrk }, /* RSC specific, not figFORTH */
			{ "BANKEXECUTE", "BANKEXECUTE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscBankExecute },  /* RSC kernel word. RSC specific, not figFORTH */
			{ "BANKEEC!", "BANKEEC!", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscBankEecStore },  /* RSC kernel word, RSC specific, not figFORTH */
			{ "BANKC@", "BANKC@", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscBankCFetch },  /* RSC kernel word. RSC specific, not figFORTH */
			{ "BANKC!", "BANKC!", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscBankCStore },  /* RSC kernel word. RSC specific, not figFORTH */
			{ "EEC!", "EEC!", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscEecStore },  /* RSC kernel word. RSC specific, not figFORTH */
			{ "CASE:", "CASE:", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscCaseColon }, /* RSC specific, not figFORTH */
			{ "MEMTOP", "MEMTOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscMemTop }, /* RSC specific, not figFORTH */
			{ "SCDR", "SCDR", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscScdr }, /* RSC specific, not figFORTH */
			{ "SCSR", "SCSR", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscScsr }, /* RSC specific, not figFORTH */
			{ "SCCR", "SCCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscSccr }, /* RSC specific, not figFORTH */
			{ "MCR", "MCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscMcr }, /* RSC specific, not figFORTH */
			{ "IER", "IER", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscIer }, /* RSC specific, not figFORTH */
			{ "IFR", "IFR", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscIfr }, /* RSC specific, not figFORTH */
			{ "PG", "PG", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscPg }, /* RSC specific, not figFORTH */
			{ "PF", "PF", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscPf }, /* RSC specific, not figFORTH */
			{ "PE", "PE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscPe }, /* RSC specific, not figFORTH */
			{ "PD", "PD", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscPd }, /* RSC specific, not figFORTH */
			{ "PC", "PC", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscPc }, /* RSC specific, not figFORTH */
			{ "PB", "PB", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscPb }, /* RSC specific, not figFORTH */
			{ "PA", "PA", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscPa }, /* RSC specific, not figFORTH */
			{ "NMIVEC", "NMIVEC", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscNmiVec }, /* RSC specific, not figFORTH */
			{ "IRQVEC", "IRQVEC", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscIrqVec }, /* RSC specific, not figFORTH */
			{ "INTVEC", "INTVEC", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscIntVec }, /* RSC specific, not figFORTH */
			{ "INTFLG", "INTFLG", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscIntFlg }, /* RSC specific, not figFORTH */
			{ "C,CON", "C,CON", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscCCommaCon }, /* RSC specific, not figFORTH */
			{ ".S", ".S", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscDotS }, /* RSC specific, not figFORTH */
			{ "MON", "MON", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscMon },
			{ "VLIST", "VLIST", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscVlist },
			{ "INDEX", "INDEX", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscIndex },
			{ "LIST", "LIST", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscList },
			{ "?", "?", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscQ }, /* RSC kernel word */
			{ ".", ".", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscDot }, /* RSC kernel word */
			{ ".R", ".R", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscDotR }, /* RSC kernel word */
			{ "D.", "D.", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscDDot }, /* RSC kernel word */
			{ "D.R", "D.R", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscDDotR }, /* RSC kernel word */
			{ "#S", "#S", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscNumS }, /* RSC kernel word */
			{ "1", "1", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscOne }, /* RSC kernel word */
			{ "SIGN", "SIGN", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscSign }, /* RSC kernel word */
			{ "#>", "#>", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscNumGreater }, /* RSC kernel word */
			{ "<#", "<#", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscLessNum }, /* RSC kernel word */
			{ "SPACES", "SPACES", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscSpaces }, /* RSC kernel word */
			{ "WHILE", "WHILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscWhile },
			{ "ELSE", "ELSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscElse },
			{ "IF", "IF", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscIf },
			{ "REPEAT", "REPEAT", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscRepeat },
			{ "AGAIN", "AGAIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscAgain },
			{ "END", "END", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscEnd },
			{ "UNTIL", "UNTIL", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscUntil },
			{ "+LOOP", "+LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscPlusLoop },
			{ "LOOP", "LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscLoop },
			{ "DO", "DO", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscDo },
			{ "THEN", "THEN", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscThen },
			{ "ENDIF", "ENDIF", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscEndIf },
			{ "BEGIN", "BEGIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscBegin },
			{ "FORGET", "FORGET", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscForget },
			{ "AUTOSTART", "AUTOSTART", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscAutostart }, /* RSC specific, not figFORTH */
			{ "?KERNEL", "?KERNEL", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscQKernel }, /* RSC specific, not figFORTH */
			{ "HWORD", "HWORD", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscHWord }, /* RSC specific, not figFORTH */
			{ "H/C", "H/C", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscHSlashC }, /* RSC specific, not figFORTH */
			{ "'", "'", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscTick },
			{ "SEEK", "SEEK", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscSeek }, /* RSC kernel word. RSC specific, not figFORTH */
			{ "INIT", "INIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscInit },  /* RSC kernel word. RSC specific, not figFORTH */
			{ "DWRITE", "DWRITE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscDWrite },  /* RSC kernel word. RSC specific, not figFORTH */
			{ "DREAD", "DREAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscDRead },  /* RSC kernel word. RSC specific, not figFORTH */
			{ "SELECT", "SELECT", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscSelect }, /* RSC kernel word. RSC specific, not figFORTH */
			{ "DISK", "DISK", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscDisk },  /* RSC kernel word. RSC specific, not figFORTH */
			{ "R/W", "R/W", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscRSlashW },
			{ "B/SCR", "B/SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscBSlashScr },
			{ "B/BUF", "B/BUF", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscBSlashBuf },
			{ "-BCD", "-BCD", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscMinusBCD },
			{ "-->", "-->", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscTo },
			{ "LOAD", "LOAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscLoad },
			{ "MESSAGE", "MESSAGE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscMessage },
			{ ">LINE", ">LINE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscToLine }, /* RSC specific, not figFORTH */
			{ ".LINE", ".LINE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscDotLine },
			{ "(LINE)", "(LINE)", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscYLine },
			{ "DUMP", "DUMP", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscDump },
			{ "FLUSH", "FLUSH", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscFlush }, /* RSC specific, not figFORTH */
			{ "BLOCK", "BLOCK", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscBlock },
			{ "BUFFER", "BUFFER", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscBuffer },
			{ "EMPTY-BUFFERS", "EMPTY-BUFFERS", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscEmptyBuffers },
			{ "UPDATE", "UPDATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscUpdate },
			{ "+BUF", "+BUF", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscPlusBuf },
			{ "M/MOD", "M/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscMSlashMod }, /* RSC kernel word */
			{ "*/", "*/", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscStarSlash }, /* RSC kernel word */
			{ "*/MOD", "*/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscStarSlashMod }, /* RSC kernel word */
			{ "MOD", "MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscMod }, /* RSC kernel word */
			{ "/", "/", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscSlash },  /* RSC kernel word */
			{ "/MOD", "/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscSlashMod }, /* RSC kernel word */
			{ "*", "*", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscStar }, /* RSC kernel word */
			{ "M/", "M/", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscMSlash }, /* RSC kernel word */
			{ "M*", "M*", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscMStar }, /* RSC kernel word */
			{ "MAX", "MAX", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscMax }, /* RSC kernel word */
			{ "MIN", "MIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscMin }, /* RSC kernel word */
			{ "DABS", "DABS", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscDAbs }, /* RSC kernel word */
			{ "ABS", "ABS", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscAbs }, /* RSC kernel word */
			{ "D+-", "D+-", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscDPlusMinus }, /* RSC kernel word */
			{ "+-", "+-", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscPlusMinus }, /* RSC kernel word */
			{ "S->D", "S->D", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscSToD }, /* RSC kernel word */
			{ "COLD", "COLD", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscCold }, /* RSC kernel word */
			{ "ABORT", "ABORT", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscAbort },
			{ "QUIT", "QUIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscQuit },
			{ "(", "(", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscParen },
			{ "DEFINITIONS", "DEFINITIONS", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscDefinitions },
			{ "ASSEMBLER", "ASSEMBLER", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscAssembler }, /* RSC specific, not figFORTH */
			{ "FORTH", "FORTH", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscForth },
			{ "VOCABULARY", "VOCABULARY", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscVocabulary },
			{ "IMMEDIATE", "IMMEDIATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscImmediate },
			{ "INTERPRET", "INTERPRET", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscInterpret },
			{ "?STACK", "?STACK", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscQStack },
			{ "DLITERAL", "DLITERAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscDLiteral },
			{ "LITERAL", "LITERAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscLiteral },
			{ "[COMPILE]", "[COMPILE]", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscXCompile },
			{ "CREATE", "CREATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscCreate },
			{ "ID.", "ID.", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscIDDot },
			{ "ERROR", "ERROR", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscError },
			{ "(ABORT)", "(ABORT)", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscYAbort },
			{ "-FIND", "-FIND", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscFind },
			{ "NUMBER", "NUMBER", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscNumber },
			{ "(NUMBER)", "(NUMBER)", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscYNumber }, /* RSC kernel word */
			{ "WORD", "WORD", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscWord },
			{ "HOLD", "HOLD", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscHold }, /* RSC kernel word */
			{ "BLANKS", "BLANKS", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscBlanks }, /* RSC kernel word */
			{ "ERASE", "ERASE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscErase }, /* RSC kernel word */
			{ "FILL", "FILL", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscFill }, /* RSC kernel word */
			{ " ", " ", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscEmptySpace },
			{ "QUERY", "QUERY", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscQuery }, /* RSC kernel word */
			{ "EXPECT", "EXPECT", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscExpect }, /* RSC kernel word */
			{ ".\"", ".\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscDotQuote },
			{ "(.\")", "(.\")", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscYDotQuote }, /* RSC kernel word */
			{ "-TRAILING", "-TRAILING", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscTrailing }, /* RSC kernel word */
			{ "TYPE", "TYPE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscType }, /* RSC kernel word */
			{ "COUNT", "COUNT", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscCount }, /* RSC kernel word */
			{ "DOES>", "DOES>", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscDoes },
			{ "<BUILDS", "<BUILDS", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscBuilds },
			{ ";CODE", ";CODE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscSemicolonCode },
			{ "(;CODE)", "(;CODE)", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscYSemicolonCode },
			{ "DECIMAL", "DECIMAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscDecimal }, /* RSC kernel word */
			{ "HEX", "HEX", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscHex }, /* RSC kernel word */
			{ "SMUDGE", "SMUDGE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscSmudge },
			{ "]", "]", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscRightBracket },
			{ "[", "[", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscLeftBracket },
			{ "COMPILE", "COMPILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscCompile },
			{ "?CSP", "?CSP", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscQCsp },
			{ "?PAIRS", "?PAIRS", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscQPairs },
			{ "?EXEC", "?EXEC", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscQExec },
			{ "?COMP", "?COMP", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscQComp },
			{ "?ERROR", "?ERROR", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscQError },
			{ "!CSP", "!CSP", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscStoreCsp },
			{ "PFAPTR", "PFAPTR", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscPfaptr }, /* RSC specific, not figFORTH. figFORTH: PFA */
			{ "NFA", "NFA", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscNfa },
			{ "CFA", "CFA", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscCfa },
			{ "LFA", "LFA", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscLfa },
			{ "LATEST", "LATEST", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscLatest },
			{ "TRAVERSE", "TRAVERSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscTraverse },
			{ "-DUP", "-DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscMinusDup }, /* RSC kernel word */
			{ "SPACE", "SPACE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscSpace }, /* RSC kernel word */
			{ "PICK", "PICK", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscPick },  /* RSC kernel word. RSC specific, not figFORTH */
			{ "ROT", "ROT", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscRot }, /* RSC kernel word */
			{ ">", ">", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscGreater }, /* RSC kernel word */
			{ "<", "<", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscLess }, /* RSC kernel word */
			{ "U<", "U<", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscULess },  /* RSC kernel word. RSC specific, not figFORTH */
			{ "=", "=", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscEqual }, /* RSC kernel word */
			{ "-", "-", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscMinus }, /* RSC kernel word */
			{ "C,", "C,", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscCComma },
			{ ",", ",", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscComma },
			{ "ALLOT", "ALLOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscAllot },
			{ "HERE", "HERE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscHere },
			{ ",/", ",/", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscCommaSlash }, /* RSC specific, not figFORTH */
			{ "ALLOT/", "ALLOT/", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscAllotSlash }, /* RSC specific, not figFORTH */
			{ "HERE/", "HERE/", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscHereSlash }, /* RSC specific, not figFORTH */
			{ "DP/", "DP/", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscDPSlash }, /* RSC specific, not figFORTH */
			{ "2-", "2-", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscTwoMinus }, /* RSC kernel word. RSC kernel word. RSC specific, not figFORTH */
			{ "1-", "1-", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscOneMinus }, /* RSC specific, not figFORTH */
			{ "2+", "2+", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscTwoPlus }, /* RSC kernel word */
			{ "1+", "1+", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscOnePlus }, /* RSC kernel word */
			{ "PAD", "PAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscPad }, /* RSC kernel word */
			{ "LIMIT", "LIMIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscLimit },
			{ "FIRST", "FIRST", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscFirst },
			{ "C/L", "C/L", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscCSlashL },  /* RSC kernel word. RSC specific, not figFORTH */
			{ "KHZ", "KHZ", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscKhz }, /* RSC specific, not figFORTH */
			{ "MODE", "MODE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscMode }, /* RSC specific, not figFORTH ( A variable used by the assembler ) */
			{ "CSP", "CSP", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscCsp },
			{ "STATE", "STATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscState },
			{ "CURRENT", "CURRENT", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscCurrent }, /* RSC specific, not figFORTH */
			{ "CONTEXT", "CONTEXT", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscContext },
			{ "SCR", "SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscScr },
			{ "BLK", "BLK", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscBlk },
			{ "PREV", "PREV", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscPrev },
			{ "USE", "USE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscUse },
			{ "UABORT", "UABORT", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscUAbort }, /* RSC specific, not figFORTH */
			{ "VOC-LINK", "VOC-LINK", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscVocLink },
			{ "HEADERLESS", "HEADERLESS", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscHeaderless }, /* RSC specific, not figFORTH */
			{ "DP", "DP", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscDP },
			{ "FENCE", "FENCE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscFence },
			{ "WARNING", "WARNING", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscWarning },
			{ "WIDTH", "WIDTH", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscWidth },
			{ "OFFSET", "OFFSET", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscOffset },
			{ "ULIMIT", "ULIMIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscULimit }, /* RSC specific, not figFORTH */
			{ "UFIRST", "UFIRST", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscUFirst }, /* RSC specific, not figFORTH */
			{ "B/SIDE", "B/SIDE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscBSlashSide }, /* RSC specific, not figFORTH */
			{ "CYLINDER", "CYLINDER", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscCylinder }, /* RSC specific, not figFORTH */
			{ "DISKNO", "DISKNO", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscDiskNo }, /* RSC specific, not figFORTH */
			{ "HLD", "HLD", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscHld }, /* RSC kernel word */
			{ "DPL", "DPL", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscDpl }, /* RSC kernel word */
			{ "IN", "IN", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscIn }, /* RSC kernel word */
			{ "CLD/WRM", "CLD/WRM", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscCldSlashWrm },  /* RSC kernel word. RSC specific, not figFORTH */
			{ "BASE", "BASE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscBase }, /* RSC kernel word */
			{ "UR/W", "UR/W", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscURSlashW },  /* RSC kernel word. RSC specific, not figFORTH */
			{ "UPAD", "UPAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscUPad },  /* RSC kernel word. RSC specific, not figFORTH */
			{ "UC/L", "UC/L", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscUCSlashL },  /* RSC kernel word. RSC specific, not figFORTH */
			{ "R0", "R0", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscR0 }, /* RSC kernel word */
			{ "S0", "S0", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscS0 }, /* RSC kernel word */
			{ "TIB", "TIB", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscTib }, /* RSC kernel word */
			{ "BL", "BL", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscBl }, /* RSC kernel word */
			{ "4", "4", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscFour }, /* RSC kernel word. RSC specific, not figFORTH */
			{ "3", "3", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscThree }, /* RSC kernel word */
			{ "2", "2", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscTwo }, /* RSC kernel word */
			{ "1", "1", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscOne },
			{ "0", "0", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscZero }, /* RSC kernel word */
			{ "USER", "USER", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscUser },
			{ "CODE", "CODE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscCode }, /* RSC specific, not figFORTH */
			{ "VARIABLE", "VARIABLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscVariable },
			{ "CONSTANT", "CONSTANT", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscConstant },
			{ ";", ";", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscSemicolon },
			{ ":", ":", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscColon },
			{ "C!", "C!", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscCStore }, /* RSC kernel word */
			{ "!", "!", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscStore }, /* RSC kernel word */
			{ "C@", "C@", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscCFetch }, /* RSC kernel word */
			{ "@", "@", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscFetch }, /* RSC kernel word */
			{ "TOGGLE", "TOGGLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscToggle }, /* RSC kernel word */
			{ "+!", "+!", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscPlusStore }, /* RSC kernel word */
			{ "BOUNDS", "BOUNDS", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscBounds },  /* RSC kernel word. RSC specific, not figFORTH */
			{ "2DUP", "2DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscTwoDup }, /* RSC kernel word. RSC specific, not figFORTH */
			{ "DUP", "DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscDup }, /* RSC kernel word */
			{ "SWAP", "SWAP", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscSwap }, /* RSC kernel word */
			{ "2DROP", "2DROP", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscTwoDrop },  /* RSC kernel word. RSC specific, not figFORTH */
			{ "DROP", "DROP", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscDrop }, /* RSC kernel word */
			{ "OVER", "OVER", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscOver }, /* RSC kernel word */
			{ "DNEGATE", "DNEGATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscDNegate }, /* RSC kernel word. RSC specific, not figFORTH */
			{ "NEGATE", "NEGATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscNegate }, /* RSC kernel word. RSC specific, not figFORTH */
			{ "D+", "D+", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscDPlus }, /* RSC kernel word */
			{ "+", "+", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscPlus }, /* RSC kernel word */
			{ "0<", "0<", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscZeroLess }, /* RSC kernel word */
			{ "NOT", "NOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscNot }, /* RSC specific, not figFORTH */
			{ "0=", "0=", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscZeroEqual }, /* RSC kernel word */
			{ "R", "R", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscR }, /* RSC kernel word */
			{ "R>", "R>", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscRFrom }, /* RSC kernel word */
			{ ">R", ">R", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscToR }, /* RSC kernel word */
			{ "LEAVE", "LEAVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscLeave }, /* RSC kernel word */
			{ ";S", ";S", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscSemicolonS }, /* RSC kernel word */
			{ "RP@", "RP@", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscRPFetch },
			{ "RP!", "RP!", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscRPStore }, /* RSC kernel word */
			{ "SP!", "SP!", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscSPStore }, /* RSC kernel word */
			{ "SP@", "SP@", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscSPFetch }, /* RSC kernel word */
			{ "XOR", "XOR", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscXor }, /* RSC kernel word */
			{ "OR", "OR", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscOr }, /* RSC kernel word */
			{ "AND", "AND", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscAnd }, /* RSC kernel word */
			{ "U/", "U/", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscUSlash }, /* RSC kernel word */
			{ "U*", "U*", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscUStar }, /* RSC kernel word */
			{ "CMOVE", "CMOVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscCMove }, /* RSC kernel word */
			{ "FINIS", "FINIS", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscFinis }, /* RSC specific, not figFORTH */
			{ "SOURCE", "SOURCE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscSource }, /* RSC specific, not figFORTH */
			{ "XOFF", "XOFF", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscXOff }, /* RSC specific, not figFORTH */
			{ "XON", "XON", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscXon }, /* RSC specific, not figFORTH */
			{ "CR", "CR", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscCr }, /* RSC kernel word */
			{ "?TERMINAL", "?TERMINAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscQTerminal }, /* RSC kernel word */
			{ "KEY", "KEY", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscKey }, /* RSC kernel word */
			{ "EMIT", "EMIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscEmit }, /* RSC kernel word */
			{ "ENCLOSE", "ENCLOSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscEnclose }, /* RSC kernel word */
			{ "(FIND)", "(FIND)", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscYFind }, /* RSC kernel word */
			{ "DIGIT", "DIGIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscDigit }, /* RSC kernel word */
			{ "I", "I", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscI },
			{ "(DO)", "(DO)", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscYDo }, /* RSC kernel word */
			{ "(+LOOP)", "(+LOOP)", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscYPlusLoop }, /* RSC kernel word */
			{ "(LOOP)", "(LOOP)", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscYLoop }, /* RSC kernel word */
			{ "ZeroBranch", "ZeroBranch", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscZeroBranch }, /* RSC kernel word */
			{ "BRANCH", "BRANCH", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscBranch }, /* RSC kernel word */
			{ "EXECUTE", "EXECUTE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscExecute }, /* RSC kernel word */
			{ "CLIT", "CLIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscClit },  /* RSC kernel word. RSC specific, not figFORTH */
			{ "LIT", "LIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)rscLit }, /* RSC kernel word */
			{ "H2OFORTH", "H2OFORTH", TRUE, FALSE, FALSE, MAX_FORTHWORD_ID, (forthOperation)NULL }
};

// *List of FORTH assembler words:
//END-CODE 0< 0= VS CS NOT ELSE, THEN, ENDIF, IF, REPEAT, AGAIN, WHILE, UNTIL, BEGIN, BITCLR BITSET RMB, 8MB, BIT, JMP, JSR, STY, LDY, LDX, CPY, CPX, STX, ROR, ROL, LSR, INC, DEC, ASL, STA, SBC, ORA, LDA, EOR, CMP, AND, ADC, TXS, TYA, TXA, TSX, TAY, TAX, SEI, SED, SEC, RTS, RTI, PLP, PLA, PHP, PHA, NOP, INY, INX, DEY, DEX, CLV, CLI, CLD, CLC, BRK, RP) SEC TOP ) )Y X) ,Y ,X MEM # ,A SETUP BINARY PUTOA PUSHOA POPTWO POP PUT PUSH NEXT XSAVE UP W IP N</code>

// List of figForth words, which are not in RSC-FORTH ( however, some of the words are in the RSC-FORTH Assembler vocabulary ):
/*
^ Word Name ^ Where Used ^ Comment ^
^ +ORIGIN | system | |
^ ?LOADING | system | |
^ BACK | system | |
^ BLOCK-READ | user disk word | (DREAD) |
^ BLOCK-WRITE | user disk word | (DWRITE) |
^ DLIST | duplicate name | (VLIST) |
^ DMINUS | new name | (DNEGATE) |
^ DR0 | disk | |
^ DR1 | disk | |
^ FLD | not used | |
^ MINUS | new name | (NEGATE) |
^ MOVE | N/A | (word addressing computers) |
^ NEXT | RSC-FORTH Assembler | |
^ OUT | not used | |
^ POP | RSC-FORTH Assembler | |
^ PUSH | RSC-FORTH Assembler | |
^ PUT | RSC-FORTH Assembler | |
^ R# | system | |
^ TRAVERSE | system | |
^ TRIAD | disk | |
^ X | system | (null) |
*/

#endif
