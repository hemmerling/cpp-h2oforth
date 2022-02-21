#ifndef H2ORCA1
#define H2ORCA1

/* Forth Inc.'s "RCA1802 microFORTH" FORTH */

/* Definitions */
void rcamicroImmediate(void);
void rcamicroImmediate(void);
void rcamicroParen(void);
void rcamicroEightStar(void);
void rcamicroLoad(void);
void rcamicroBuilds(void);
void rcamicroBlock(void);
void rcamicroTick(void);
void rcamicroEraseCore(void);
void rcamicroFlush(void);
void rcamicroTask(void);
/* Vocabulary Assembler */
void rcamicroVanish(void);
void rcamicroCode(void);
void rcamicroColonCode(void);
void rcamicroPage(void);
void rcamicroOctal(void);
void rcamicroDecimal(void);
void rcamicroHex(void);
void rcamicroCVariable(void);
void rcamicroVariable(void);
/* Arithmetic Operators */
void rcamicroGreater(void);
void rcamicroMStar(void);
void rcamicroMSlashMod(void);
void rcamicroStarSlashMod(void);
void rcamicroStarSlash(void);
void rcamicroSlashMod(void);
void rcamicroMod(void);
void rcamicroStar(void);
void rcamicroSlash(void);
void rcamicroMax(void);
void rcamicroMin(void);
void rcamicroNum(void);
void rcamicroPlusC(void);
void rcamicroOneRg(void);
void rcamicroAlu(void);
/* Macros */
void rcamicroEntry(void);
void rcamicroNext(void);
void rcamicroZeroNumLd(void);
void rcamicroDst(void);
void rcamicroPush(void);
/* Transfers */
void rcamicroEfl(void);
void rcamicroLess(void);
void rcamicroZeroLess(void);
void rcamicroIf(void);
void rcamicroThen(void);
void rcamicroElse(void);
void rcamicroEnd(void);
void rcamicroBr(void);
void rcamicroLs(void);
/* Compiler */
void rcamicroYMark(void);
void rcamicroYThen(void);
void rcamicroDo(void);
void rcamicroLoop(void);
void rcamicroPlusLoop(void);
void rcamicroIf(void);
void rcamicroElse(void);
void rcamicroWhile(void);
void rcamicroThen(void);
void rcamicroBegin(void);
void rcamicroLabel(void);
void rcamicroEnd(void);
/* Errors */
void rcamicroMessage(void);
void rcamicroQuestion(void);
void rcamicroQStack(void);
void rcamicroYNumber(void);
/* Vocabularies */
void rcamicroVocabulary(void);
void rcamicroDefinitions(void);
void rcamicroTick(void);
void rcamicroForget(void);
void rcamicroInLine(void);
void rcamicroXTick(void);
void rcamicroXSwap(void);
/* Number Formatting */
void rcamicroSpaces(void);
void rcamicroVariable(void);
void rcamicroPad(void);
void rcamicroLessNum(void);
void rcamicroNumGreater(void);
void rcamicroSign(void);
void rcamicroNum(void);
void rcamicroNumS(void);
void rcamicroYDot(void);
void rcamicroQ(void);
void rcamicroDot(void);
/* Output Vocabulary */
void rcamicroDotR(void);
void rcamicroDump(void);
void rcamicroTrailing(void);
void rcamicroLine(void);
void rcamicroText(void);
void rcamicroList(void);
void rcamicroL(void);
void rcamicroRightBracket(void);
void rcamicroRightBracket(void);
/* Editor */
void rcamicroLine(void);
void rcamicroHold(void);
void rcamicroGap(void);
void rcamicroT(void);
void rcamicroD(void);
void rcamicroR(void);
void rcamicroI(void);
void rcamicroQuote(void);
void rcamicroP(void);
void rcamicroA(void);
void rcamicroCopy(void);
void rcamicroDelete(void);
void rcamicroTop(void);
/* Lower Baud Serial I/O */
/* Terminal I/O */
void rcamicroType(void);
void rcamicroCount(void);
void rcamicroMsg(void);
void rcamicroExpect(void);
void rcamicroQuit(void);
/* Higher Baud Serial I/O */
/* Restart */
/* Options */
void rcamicroDro(void);
void rcamicroDri(void);
/* Assembler */
/* String Editor */
void rcamicroCNum(void);
void rcamicroNumLeft(void);
void rcamicroLNum(void);
void rcamicroAt(void);
void rcamicroString(void);
void rcamicroErr(void);
void rcamicroOneLine(void);
void rcamicroFind(void);
void rcamicroRemove(void);
void rcamicroM(void);
void rcamicroB(void);
void rcamicroN(void);
void rcamicroF(void);
void rcamicroX(void);
void rcamicroTill(void);
void rcamicroC(void);
/* Character Editor Primitives */
void rcamicroMove(void);
/* Disk Utilities */
void rcamicroFill(void);
void rcamicroRight(void);
void rcamicroBackup(void);
void rcamicroSweep(void);
/* Disk Compare */
void rcamicroMatch(void);
/* Disk Error Checking */
void rcamicroStatus(void);
void rcamicroError(void);
void rcamicroLog(void);
void rcamicroNotify(void);
void rcamicroDup(void);
void rcamicroXBlock(void);
/* Documentation */
void rcamicroIndex(void);
void rcamicroTriad(void);
void rcamicroShow(void);
/* Reconfiguration */
void rcamicroBStore(void);
void rcamicroPStore(void);
void rcamicroDisk(void);
/* Compiler */
void rcamicroDot(void);
void rcamicroLog(void);
void rcamicroAdrs(void);
void rcamicroText(void);
void rcamicroHere(void);
void rcamicroOrg(void);
void rcamicroCComma(void);
void rcamicroComma(void);
/* Target Vocabulary */
void rcamicroClear(void);
void rcamicroX(void);
void rcamicroImmediate(void);
void rcamicroSmudge(void);
void rcamicroEmplace(void);
void rcamicroEmplace(void);
/* Target Dictionary */
void rcamicroCode(void);
void rcamicroPage(void);
void rcamicroHFetch(void);
void rcamicroHStore(void);
void rcamicroInside(void);
void rcamicroCFetch(void);
void rcamicroCStore(void);
void rcamicroFetch(void);
void rcamicroStore(void);
/* Target Compiler */
void rcamicroCommaHost(void);
void rcamicroSemicolonCode(void);
void rcamicroSemicolonCode(void);
void rcamicroMinusTick(void);
void rcamicroTick(void);
void rcamicroBackslash(void);
void rcamicroCompile(void);
/* Target Assembler */
void rcamicroEqu(void);
void rcamicroBegin(void);
void rcamicroLoad(void);
void rcamicroCr(void);
void rcamicroComputer(void);
/* RAM Defining */
void rcamicroAccessible(void);
void rcamicroConstant(void);
void rcamicroUser(void);
void rcamicroTable(void);
void rcamicroCVariable(void);
void rcamicroVariable(void);
void rcamicroDoes(void);
void rcamicroDoes(void);
void rcamicroBuilds(void);
/* PROM Defining */
void rcamicroConstant(void);
void rcamicroUser(void);
void rcamicroTable(void);
void rcamicroThere(void);
void rcamicroRes(void);
void rcamicroCVariable(void);
void rcamicroVariable(void);
void rcamicroDoes(void);
void rcamicroDoes(void);
void rcamicroBuilds(void);
/* Compiling Words */
void rcamicroInLine(void);
void rcamicroXTick(void);
void rcamicroXSwap(void);
void rcamicroParen(void);
void rcamicroSemicolon(void);
void rcamicroHColon(void);
void rcamicroColon(void);
/* Initialize Nucleus */
void rcamicroCopy(void);
/* Initialize Symbols */
void rcamicroComputer(void);
/* Compiler Output */
void rcamicroComputer(void);
/* Compiler Output */
void rcamicroDump(void);
void rcamicroLeader(void);
void rcamicroProms(void);
void rcamicroEntire(void);
void rcamicroSimulate(void);
void rcamicroZero(void);
void rcamicroNext(void);
void rcamicroLit(void);
void rcamicroXTick(void);
void rcamicroExecute(void);
void rcamicroVariable(void);
void rcamicroUser(void);
void rcamicroConstant(void);
void rcamicroDoes(void);
void rcamicroSemicolonS(void);
void rcamicroColon(void);
void rcamicroDo(void);
void rcamicroIf(void);
void rcamicroEnd(void);
void rcamicroElse(void);
void rcamicroWhile(void);
void rcamicroLoop(void);
void rcamicroPlusLoop(void);
void rcamicroCr(void);
void rcamicroUStar(void);
void rcamicroUSlash(void);
void rcamicroCz(void);
void rcamicroCFetch(void);
void rcamicroCStore(void);
void rcamicroZeroEqual(void);
void rcamicroZeroLess(void);
void rcamicroPlus(void);
void rcamicroTwoStar(void);
void rcamicroMinus(void);
void rcamicroAnd(void);
void rcamicroBinary(void);
void rcamicroOnePlus(void);
void rcamicroTwoPlus(void);
void rcamicroMove(void);
void rcamicroDup(void);
void rcamicroOver(void);
void rcamicroMinusDup(void);
void rcamicroSwap(void);
void rcamicroFetch(void);
void rcamicroStore(void);
void rcamicroPlusStore(void);
void rcamicroFromR(void);
void rcamicroRTo(void);
void rcamicroI(void);
void rcamicroRot(void);
void rcamicroTwoPop(void);
void rcamicroOnePop(void);
void rcamicroSemicolonS(void);
/* More Definitions */
void rcamicroLess(void);
void rcamicroGreater(void);
void rcamicroEqual(void);
/* Cross Illustration */
void rcamicroHColon(void);
void rcamicroLittle(void);
void rcamicroHColon(void);
void rcamicroHColon(void);
void rcamicroFill(void);
void rcamicroTimes(void);
void rcamicroTest(void);

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
			{ "IMMEDIATE", "IMMEDIATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroImmediate },
			/* Compiler */
			{ "IMMEDIATE", "IMMEDIATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroImmediate },
			{ "(", "(", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroParen },
			{ "8*", "8*", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroEightStar },
			{ "LOAD", "LOAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroLoad },
			{ "<BUILDS", "<BUILDS", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroBuilds },
			{ "BLOCK", "BLOCK", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroBlock },
			{ "'", "'", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroTick },
			{ "ERASE-CORE", "ERASE-CORE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroEraseCore },
			{ "FLUSH", "FLUSH", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroFlush },
			{ "TASK", "TASK", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroTask },
			{ "VANISH", "VANISH", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroVanish }, /* Vocabulary Assembler */
			{ "CODE", "CODE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroCode },
			{ ";CODE", ";CODE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroColonCode },
			{ "PAGE", "PAGE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroPage },
			{ "OCTAL", "OCTAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroOctal },
			{ "DECIMAL", "DECIMAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroDecimal },
			{ "HEX", "HEX", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroHex },
			{ "CVARIABLE", "CVARIABLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroCVariable },
			{ "VARIABLE", "VARIABLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroVariable },
			{ ">", ">", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroGreater }, /* Arithmetic Operators */
			{ "M*", "M*", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroMStar },
			{ "M/MOD", "M/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroMSlashMod },
			{ "*/MOD", "*/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroStarSlashMod },
			{ "*/", "*/", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroStarSlash },
			{ "/MOD", "/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroSlashMod },
			{ "MOD", "MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroMod },
			{ "*", "*", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroStar },
			{ "/", "/", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroSlash },
			{ "MAX", "MAX", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroMax },
			{ "MIN", "MIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroMin },
			{ "#", "#", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroNum }, /* Assembler */
			{ "+C", "+C", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroPlusC },
			{ "1RG", "1RG", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroOneRg },
			{ "ALU", "ALU", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroAlu },
			{ "ENTRY", "ENTRY", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroEntry }, /* Macros */
			{ "NEXT", "NEXT", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroNext },
			{ "0#LD", "0#LD", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroZeroNumLd },
			{ "DST", "DST", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroDst },
			{ "PUSH", "PUSH", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroPush },
			{ "EFL", "EFL", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroEfl }, /* Transfers */
			{ "<", "<", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroLess },
			{ "0<", "0<", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroZeroLess },
			{ "IF", "IF", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroIf },
			{ "THEN", "THEN", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroThen },
			{ "ELSE", "ELSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroElse },
			{ "END", "END", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroEnd },
			{ "BR", "BR", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroBr },
			{ "LS", "LS", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroLs },
			{ "(MARK)", "(MARK)", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroYMark }, /* Compiler */
			{ "(THEN)", "(THEN)", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroYThen },
			{ "DO", "DO", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroDo },
			{ "LOOP", "LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroLoop },
			{ "+LOOP", "+LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroPlusLoop },
			{ "IF", "IF", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroIf },
			{ "ELSE", "ELSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroElse },
			{ "WHILE", "WHILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroWhile },
			{ "THEN", "THEN", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroThen },
			{ "BEGIN", "BEGIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroBegin },
			{ "END", "END", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroEnd },
			{ "MESSAGE", "MESSAGE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroMessage }, /* Errors */
			{ "QUESTION", "QUESTION", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroQuestion },
			{ "?STACK", "?STACK", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroQStack },
			{ "(NUMBER)", "(NUMBER)", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroYNumber },
			{ "VOCABULARY", "VOCABULARY", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroVocabulary }, /* Vocabularies */
			{ "DEFINITIONS", "DEFINITIONS", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroDefinitions },
			{ "'", "'", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroTick },
			{ "FORGET", "FORGET", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroForget },
			{ "IN-LINE", "IN-LINE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroInLine },
			{ "[']", "[']", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroXTick },
			{ "[SWAP]", "[SWAP]", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroXSwap },
			{ "SPACES", "SPACES", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroSpaces }, /* Number Formatting */
			{ "VARIABLE", "VARIABLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroVariable },
			{ "PAD", "PAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroPad },
			{ "<#", "<#", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroLessNum },
			{ "#>", "#>", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroNumGreater },
			{ "SIGN", "SIGN", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroSign },
			{ "#", "#", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroNum },
			{ "#S", "#S", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroNumS },
			{ "(.)", "(.)", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroYDot },
			{ "?", "?", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroQ },
			{ ".", ".", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroDot },
			{ ".R", ".R", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroDotR }, /* Output Vocabulary */
			{ "DUMP", "DUMP", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroDump },
			{ "-TRAILING", "-TRAILING", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroTrailing },
			{ "LINE", "LINE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroLine },
			{ "TEXT", "TEXT", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroText },
			{ "LIST", "LIST", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroList },
			{ "L", "L", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroL },
			{ "[", "[", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroRightBracket },
			{ "[", "[", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroRightBracket },
			{ "LINE", "LINE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroLine }, /* Editor */
			{ "HOLD", "HOLD", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroHold },
			{ "GAP", "GAP", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroGap },
			{ "T", "T", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroT },
			{ "D", "D", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroD },
			{ "R", "R", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroR },
			{ "I", "I", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroI },
			{ "\"", "\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroQuote },
			{ "P", "P", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroP },
			{ "A", "A", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroA },
			{ "COPY", "COPY", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroCopy },
			{ "DELETE", "DELETE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroDelete },
			{ "TOP", "TOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroTop },
			/* Lower Baud Serial I/O */
			{ "TYPE", "TYPE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroType }, /* Terminal I/O */
			{ "COUNT", "COUNT", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroCount },
			{ "MSG", "MSG", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroMsg },
			{ "EXPECT", "EXPECT", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroExpect },
			{ "QUIT", "QUIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroQuit },
			/* Higher Baud Serial I/O */
			/* Restart */
			{ "DRO", "DRO", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroDro }, /* Options */
			{ "DRI", "DRI", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroDri },
			/* Assembler */
			{ "C#", "C#", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroCNum }, /* String Editor */
			{ "#LEFT", "#LEFT", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroNumLeft },
			{ "L#", "L#", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroLNum },
			{ "AT", "AT", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroAt },
			{ "STRING", "STRING", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroString },
			{ "ERR", "ERR", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroErr },
			{ "1LINE", "1LINE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroOneLine },
			{ "FIND", "FIND", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroFind },
			{ "M", "M", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroM },
			{ "REMOVE", "REMOVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroRemove },
			{ "B", "B", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroB },
			{ "N", "N", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroN },
			{ "F", "F", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroF },
			{ "X", "X", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroX },
			{ "TILL", "TILL", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroTill },
			{ "C", "C", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroC },
			{ "MOVE", "MOVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroMove }, /* Character Editor Primitives */
			{ "FILL", "FILL", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroFill }, /* Disk Utilities */
			{ "RIGHT", "RIGHT", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroRight },
			{ "BACKUP", "BACKUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroBackup },
			{ "SWEEP", "SWEEP", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroSweep },
			{ "MATCH", "MATCH", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroMatch }, /* Disk Compare */
			{ "STATUS", "STATUS", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroStatus }, /* Disk Error Checking */
			{ "ERROR", "ERROR", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroError },
			{ "LOG", "LOG", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroLog },
			{ "NOTIFY", "NOTIFY", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroNotify },
			{ "DUP", "DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroDup },
			{ "[BLOCK]", "[BLOCK]", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroXBlock },
			{ "INDEX", "INDEX", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroIndex }, /* Documentation */
			{ "TRIAD", "TRIAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroTriad },
			{ "SHOW", "SHOW", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroShow },
			{ "B!", "B!", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroBStore }, /* Reconfiguration */
			{ "P!", "P!", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroPStore },
			{ "DISK", "DISK", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroDisk },
			{ ".", ".", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroDot }, /* Compiler */
			{ "LOG", "LOG", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroLog },
			{ "ADRS", "ADRS", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroAdrs },
			{ "TEXT", "TEXT", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroText },
			{ "HERE", "HERE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroHere },
			{ "ORG", "ORG", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroOrg },
			{ "C,", "C,", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroCComma },
			{ ",", ",", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroComma },
			{ "CLEAR", "CLEAR", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroClear }, /* Target Vocabulary */
			{ "X", "X", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroX },
			{ "IMMEDIATE", "IMMEDIATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroImmediate },
			{ "SMUDGE", "SMUDGE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroSmudge },
			{ "EMPLACE", "EMPLACE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroEmplace },
			{ "EMPLACE", "EMPLACE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroEmplace },
			{ "CODE", "CODE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroCode }, /* Target Dictionary */
			{ "PAGE", "PAGE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroPage },
			{ "H@", "H@", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroHFetch },
			{ "H!", "H!", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroHStore },
			{ "INSIDE", "INSIDE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroInside },
			{ "C@", "C@", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroCFetch },
			{ "C!", "C!", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroCStore },
			{ "@", "@", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroFetch },
			{ "!", "!", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroStore },
			{ ",HOST", ",HOST", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroCommaHost }, /* Target Compiler */
			{ ";CODE", ";CODE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroSemicolonCode },
			{ ";CODE", ";CODE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroSemicolonCode },
			{ "-'", "-'", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroMinusTick },
			{ "'", "'", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroTick },
			{ "\\", "\\", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroBackslash },
			{ "COMPILE", "COMPILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroCompile },
			{ "EQU", "EQU", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroEqu }, /* Target Assembler */
			{ "LABEL", "LABEL", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroLabel },
			{ "BEGIN", "BEGIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroBegin },
			{ "LOAD", "LOAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroLoad },
			{ "CR", "CR", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroCr },
			{ "COMPUTER", "COMPUTER", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroComputer },
			{ "ACCESSIBLE", "ACCESSIBLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroAccessible }, /* RAM Defining */
			{ "CONSTANT", "CONSTANT", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroConstant },
			{ "USER", "USER", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroUser },
			{ "TABLE", "TABLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroTable },
			{ "CVARIABLE", "CVARIABLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroCVariable },
			{ "VARIABLE", "VARIABLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroVariable },
			{ "DOES>", "DOES>", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroDoes },
			{ "DOES>", "DOES>", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroDoes },
			{ "<BUILDS", "<BUILDS", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroBuilds },
			{ "CONSTANT", "CONSTANT", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroConstant }, /* PROM Defining */
			{ "USER", "USER", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroUser },
			{ "TABLE", "TABLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroTable },
			{ "THERE", "THERE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroThere },
			{ "RES", "RES", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroRes },
			{ "CVARIABLE", "CVARIABLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroCVariable },
			{ "VARIABLE", "VARIABLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroVariable },
			{ "DOES>", "DOES>", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroDoes },
			{ "DOES>", "DOES>", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroDoes },
			{ "<BUILDS", "<BUILDS", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroBuilds },
			{ "IN-LINE", "IN-LINE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroInLine }, /* Compiling Words */
			{ "[']", "[']", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroXTick },
			{ "[SWAP]", "[SWAP]", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroXSwap },
			{ "(", "(", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroParen },
			{ ";", ";", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroSemicolon },
			{ "H:", "H:", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroHColon },
			{ ":", ":", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroColon },
			{ "COPY", "COPY", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroCopy }, /* Initialize Nucleus */
			{ "COMPUTER", "COMPUTER", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroComputer }, /* Initialize Symbols */
			{ "COMPUTER", "COMPUTER", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroComputer }, /* Compiler Output */
			{ "DUMP", "DUMP", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroDump }, /* Compiler Output */
			{ "LEADER", "LEADER", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroLeader },
			{ "PROMS", "PROMS", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroProms },
			{ "ENTIRE", "ENTIRE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroEntire },
			{ "SIMULATE", "SIMULATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroSimulate },
			{ "ZERO", "ZERO", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroZero },
			{ "NEXT", "NEXT", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroNext },
			{ "LIT", "LIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroLit },
			{ "[']", "[']", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroXTick },
			{ "EXECUTE", "EXECUTE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroExecute },
			{ "VARIABLE", "VARIABLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroVariable },
			{ "USER", "USER", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroUser },
			{ "CONSTANT", "CONSTANT", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroConstant },
			{ "DOES>", "DOES>", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroDoes },
			{ ";S", ";S", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroSemicolonS },
			{ ":", ":", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroColon },
			{ "DO", "DO", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroDo },
			{ "IF", "IF", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroIf },
			{ "END", "END", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroEnd },
			{ "ELSE", "ELSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroElse },
			{ "WHILE", "WHILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroWhile },
			{ "LOOP", "LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroLoop },
			{ "+LOOP", "+LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroPlusLoop },
			{ "CR", "CR", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroCr },
			{ "U*", "U*", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroUStar },
			{ "U/", "U/", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroUSlash },
			{ "CZ", "CZ", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroCz },
			{ "C@", "C@", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroCFetch },
			{ "C!", "C!", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroCStore },
			{ "0=", "0=", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroZeroEqual },
			{ "0<", "0<", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroZeroLess },
			{ "+", "+", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroPlus },
			{ "2*", "2*", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroTwoStar },
			{ "-", "-", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroMinus },
			{ "AND", "AND", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroAnd },
			{ "BINARY", "BINARY", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroBinary },
			{ "1+", "1+", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroOnePlus },
			{ "2+", "2+", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroTwoPlus },
			{ "MOVE", "MOVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroMove },
			{ "DUP", "DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroDup },
			{ "OVER", "OVER", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroOver },
			{ "-DUP", "-DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroMinusDup },
			{ "SWAP", "SWAP", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroSwap },
			{ "@", "@", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroFetch },
			{ "!", "!", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroStore },
			{ "+!", "+!", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroPlusStore },
			{ "<R", "<R", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroFromR },
			{ "R>", "R>", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroRTo },
			{ "I", "I", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroI },
			{ "ROT", "ROT", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroRot },
			{ "2POP", "2POP", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroTwoPop },
			{ "1POP", "1POP", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroOnePop },
			{ ";S", ";S", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroSemicolonS },
			{ "<", "<", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroLess }, /* More Definitions */
			{ ">", ">", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroGreater },
			{ "=", "=", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroEqual },
			{ "H:", "H:", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroHColon }, /* Cross Illustration */
			{ "LITTLE", "LITTLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroLittle },
			{ "H:", "H:", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroHColon },
			{ "H:", "H:", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroHColon },
			{ "FILL", "FILL", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroFill },
			{ "TIMES", "TIMES", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroTimes },
			{ "TEST", "TEST", TRUE, FALSE, FALSE, 0UL, (forthOperation)rcamicroTest },
			{ "H2OFORTH", "H2OFORTH", TRUE, FALSE, FALSE, MAX_FORTHWORD_ID, (forthOperation)NULL }
};

#endif
