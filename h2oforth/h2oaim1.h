#ifndef H2OAIM1
#define H2OAIM1

/* The "AIM-65" ( figFORTH ) FORTH */

/* Definitions */

void aimTASK(void);
void aimDotS(void);
void aimMon(void);
void aimHang(void);
void aimQTTY(void);
void aimVList(void);
void aimQ(void);
void aimDot(void);
void aimDotR(void);
void aimDDot(void);
void aimDDotR(void);
void aimNumS(void);
void aimNum(void);
void aimSign(void);
void aimNumGreater(void);
void aimLessNum(void);
void aimSpaces(void);
void aimWhile(void);
void aimElse(void);
void aimIf(void);
void aimRepeat(void);
void aimAgain(void);
void aimEnd(void);
void aimUntil(void);
void aimPlusLoop(void);
void aimLoop(void);
void aimDo(void);
void aimThen(void);
void aimEndIf(void);
void aimBegin(void);
void aimForget(void);
void aimTick(void);
void aimRSlashW(void);
void aimTo(void);
void aimLoad(void);
void aimMessage(void);
void aimDotLine(void);
void aimZLine(void);
void aimDump(void);
void aimFlush(void);
void aimBlock(void);
void aimBuffer(void);
void aimEmptyBuffers(void);
void aimUpdate(void);
void aimPlusBuf(void);
void aimMSlashMOD(void);
void aimStarSlash(void);
void aimStarSlashMOD(void);
void aimMOD(void);
void aimSlash(void);
void aimSlashMOD(void);
void aimStar(void);
void aimMSlash(void);
void aimMStar(void);
void aimMax(void);
void aimMin(void);
void aimDAbs(void);
void aimAbs(void);
void aimDPlusMinus(void);
void aimPlusMinus(void);
void aimSToD(void);
void aimCold(void);
void aimAbort(void);
void aimQuit(void);
void aimParen(void);
void aimDefinitions(void);
void aimAssembler(void);
void aimForth(void);
void aimVocabulary(void);
void aimImmediate(void);
void aimInterpret(void);
void aimQStack(void);
void aimDLiteral(void);
void aimLiteral(void);
void aimXCompile(void);
void aimCreate(void);
void aimIDDot(void);
void aimError(void);
void aimZABORT(void);
void aimMinusFind(void);
void aimNumber(void);
void aimZNumber(void);
void aimWord(void);
void aimPad(void);
void aimHold(void);
void aimBlanks(void);
void aimErase(void);
void aimFill(void);
void aimFetch(void);
void aimQuery(void);
void aimExpect(void);
void aimDotQuote(void);
void aimParenDotQuote(void);
void aimMinusTrailing(void);
void aimType(void);
void aimCount(void);
void aimDoes(void);
void aimBuilds(void);
void aimSemicolonCode(void);
void aimZSemicolonCode(void);
void aimDecimal(void);
void aimHex(void);
void aimSmudge(void);
void aimRightBracket(void);
void aimLeftBracket(void);
void aimCompile(void);
void aimQCSP(void);
void aimQPairs(void);
void aimQExec(void);
void aimQComp(void);
void aimQError(void);
void aimStoreCSP(void);
void aimPFA(void);
void aimNFA(void);
void aimCFA(void);
void aimLFA(void);
void aimLatest(void);
void aimMinusDup(void);
void aimSpace(void);
void aimPick(void);
void aimRot(void);
void aimGreater(void);
void aimLess(void);
void aimULess(void);
void aimEqual(void);
void aimMinus(void);
void aimCComma(void);
void aimComma(void);
void aimAllot(void);
void aimHere(void);
void aimTwoMinus(void);
void aimOneMinus(void);
void aimTwoPlus(void);
void aimOnePLus(void);
void aimBSlashSCR(void);
void aimBSlashBUF(void);
void aimLimit(void);
void aimFirst(void);
void aimCSlashL(void);
void aimMode(void);
void aimHLD(void);
void aimCSP(void);
void aimDPL(void);
void aimBase(void);
void aimState(void);
void aimCurrent(void);
void aimContext(void);
void aimOffset(void);
void aimSCR(void);
void aimIn(void);
void aimBLK(void);
void aimUEmit(void);
void aimUKey(void);
void aimURSlashW(void);
void aimUAbort(void);
void aimUBSlashSCR(void);
void aimUBSlashBUF(void);
void aimULimit(void);
void aimUFirst(void);
void aimUCSlashL(void);
void aimPrev(void);
void aimUse(void);
void aimVocLink(void);
void aimDP(void);
void aimFence(void);
void aimWarning(void);
void aimWidth(void);
void aimTIB(void);
void aimR0(void);
void aimS0(void);
void aimBL(void);
void aimThree(void);
void aimTwo(void);
void aimOne(void);
void aimZero(void);
void aimUser(void);
void aimCode(void);
void aimVariable(void);
void aimConstant(void);
void aimSemicolon(void);
void aimColon(void);
void aimCStore(void);
void aimStore(void);
void aimCFetch(void);
void aimFetch(void);
void aimToggle(void);
void aimPlusStore(void);
void aimBounds(void);
void aimTwoDup(void);
void aimDup(void);
void aimSwap(void);
void aimTwoDrop(void);
void aimDrop(void);
void aimOver(void);
void aimDNegate(void);
void aimNegate(void);
void aimDPlus(void);
void aimPlus(void);
void aimZeroLess(void);
void aimNot(void);
void aimZeroEqual(void);
void aimR(void);
void aimRGreater(void);
void aimToR(void);
void aimLeave(void);
void aimSemicolonS(void);
void aimRPFetch(void);
void aimRPStore(void);
void aimSPStore(void);
void aimSPFetch(void);
void aimXor(void);
void aimOr(void);
void aimAnd(void);
void aimUSlash(void);
void aimUStar(void);
void aimCMove(void);
void aimMinusCR(void);
void aimClose(void);
void aimChain(void);
void aimFinis(void);
void aimSource(void);
void aimBaud(void);
void aimWrite(void);
void aimRead(void);
void aimQOut(void);
void aimQIn(void);
void aimPut(void);
void aimGet(void);
void aimCR(void);
void aimQTerminal(void);
void aimKey(void);
void aimEmit(void);
void aimEnclose(void);
void aimZFind(void);
void aimDigit(void);
void aimI(void);
void aimZDo(void);
void aimZPlusLoop(void);
void aimZeroBranch(void);
void aimBranch(void);
void aimExecute(void);
void aimClit(void);
void aimLit(void);

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

static const PROGMEM typedef_forthWord forthWords[] = {
			{ "TASK", "TASK", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimTASK },
			{ " .S", " .S", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimDotS },
			{ "MON", "MON", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimMon },
			{ "HANG", "HANG", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimHang },
			{ "?TTY", "?TTY", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimQTTY },
			{ "VLIST", "VLIST", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimVList },
			{ "?", "?", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimQ },
			{ ".", ".", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimDot },
			{ ".R", ".R", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimDotR },
			{ "D.", "D.", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimDDot },
			{ "D.R", "D.R", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimDDotR },
			{ "#S", "#S", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimNumS },
			{ "#", "#", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimNum },
			{ "SIGN", "SIGN", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimSign },
			{ "#>", "#>", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimNumGreater },
			{ "<#", "<#", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimLessNum },
			{ "SPACES", "SPACES", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimSpaces },
			{ "WHILE", "WHILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimWhile },
			{ "ELSE", "ELSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimElse },
			{ "IF", "IF", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimIf },
			{ "REPEAT", "REPEAT", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimRepeat },
			{ "AGAIN", "AGAIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimAgain },
			{ "END", "END", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimEnd },
			{ "UNTIL", "UNTIL", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimUntil },
			{ "+LOOP", "+LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimPlusLoop },
			{ "LOOP", "LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimLoop },
			{ "DO", "DO", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimDo },
			{ "THEN", "THEN", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimThen },
			{ "ENDIF", "ENDIF", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimEndIf },
			{ "BEGIN", "BEGIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimBegin },
			{ "FORGET", "FORGET", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimForget },
			{ "'", "'", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimTick },
			{ "R/W", "R/W", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimRSlashW },
			{ "-->", "-->", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimTo },
			{ "LOAD", "LOAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimLoad },
			{ "MESSAGE", "MESSAGE", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimMessage },
			{ ".LINE", ".LINE", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimDotLine },
			{ "(LINE)", "(LINE)", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimZLine },
			{ "DUMP", "DUMP", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimDump },
			{ "FLUSH", "FLUSH", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimFlush },
			{ "BLOCK", "BLOCK", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimBlock },
			{ "BUFFER", "BUFFER", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimBuffer },
			{ "EMPTY-BUFFERS", "EMPTY-BUFFERS", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimEmptyBuffers },
			{ "UPDATE", "UPDATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimUpdate },
			{ "+BUF", "+BUF", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimPlusBuf },
			{ "M/MOD", "M/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimMSlashMOD },
			{ "*/", "*/", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimStarSlash },
			{ "*/MOD", "*/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimStarSlashMOD },
			{ "MOD", "MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimMOD },
			{ "/", "/", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimSlash },
			{ "/MOD", "/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimSlashMOD },
			{ "*", "*", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimStar },
			{ "M/", "M/", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimMSlash },
			{ "M*", "M*", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimMStar },
			{ "MAX", "MAX", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimMax },
			{ "MIN", "MIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimMin },
			{ "DABS", "DABS", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimDAbs },
			{ "ABS", "ABS", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimAbs },
			{ "D+-", "D+-", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimDPlusMinus },
			{ "+-", "+-", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimPlusMinus },
			{ "S->D", "S->D", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimSToD },
			{ "COLD", "COLD", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimCold },
			{ "ABORT", "ABORT", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimAbort },
			{ "QUIT", "QUIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimQuit },
			{ "(", "(", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimParen },
			{ "DEFINITIONS", "DEFINITIONS", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimDefinitions },
			{ "ASSEMBLER", "ASSEMBLER", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimAssembler },
			{ "FORTH", "FORTH", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimForth },
			{ "VOCABULARY", "VOCABULARY", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimVocabulary },
			{ "IMMEDIATE", "IMMEDIATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimImmediate },
			{ "INTERPRET", "INTERPRET", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimInterpret },
			{ "?STACK", "?STACK", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimQStack },
			{ "DLITERAL", "DLITERAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimDLiteral },
			{ "LITERAL", "LITERAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimLiteral },
			{ "[COMPILE]", "[COMPILE]", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimXCompile },
			{ "CREATE", "CREATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimCreate },
			{ "ID.", "ID.", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimIDDot },
			{ "ERROR", "ERROR", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimError },
			{ "(ABORT)", "(ABORT)", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimZABORT },
			{ "-FIND", "-FIND", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimMinusFind },
			{ "NUMBER", "NUMBER", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimNumber },
			{ "(NUMBER)", "(NUMBER)", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimZNumber },
			{ "WORD", "WORD", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimWord },
			{ "PAD", "PAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimPad },
			{ "HOLD", "HOLD", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimHold },
			{ "BLANKS", "BLANKS", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimBlanks },
			{ "ERASE", "ERASE", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimErase },
			{ "FILL", "FILL", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimFill },
			{ "@", "@", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimFetch },
			{ "QUERY", "QUERY", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimQuery },
			{ "EXPECT", "EXPECT", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimExpect },
			{ ".\"", ".\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimDotQuote },
			{ "(.\")", "(.\")", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimParenDotQuote },
			{ "-TRAILING", "-TRAILING", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimMinusTrailing },
			{ "TYPE", "TYPE", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimType },
			{ "COUNT", "COUNT", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimCount },
			{ "DOES>", "DOES>", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimDoes },
			{ "<BUILDS", "<BUILDS", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimBuilds },
			{ ";CODE", ";CODE", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimSemicolonCode },
			{ "(;CODE)", "(;CODE)", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimZSemicolonCode },
			{ "DECIMAL", "DECIMAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimDecimal },
			{ "HEX", "HEX", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimHex },
			{ "SMUDGE", "SMUDGE", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimSmudge },
			{ "]", "]", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimRightBracket },
			{ "[", "[", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimLeftBracket },
			{ "COMPILE", "COMPILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimCompile },
			{ "?CSP", "?CSP", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimQCSP },
			{ "?PAIRS", "?PAIRS", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimQPairs },
			{ "?EXEC", "?EXEC", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimQExec },
			{ "?COMP", "?COMP", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimQComp },
			{ "?ERROR", "?ERROR", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimQError },
			{ "!CSP", "!CSP", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimStoreCSP },
			{ "PFA", "PFA", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimPFA },
			{ "NFA", "NFA", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimNFA },
			{ "CFA", "CFA", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimCFA },
			{ "LFA", "LFA", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimLFA },
			{ "LATEST", "LATEST", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimLatest },
			{ "-DUP", "-DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimMinusDup },
			{ "SPACE", "SPACE", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimSpace },
			{ "PICK", "PICK", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimPick },
			{ "ROT", "ROT", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimRot },
			{ ">", ">", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimGreater },
			{ "<", "<", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimLess },
			{ "U<", "U<", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimULess },
			{ "=", "=", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimEqual },
			{ "-", "-", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimMinus },
			{ "C,", "C,", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimCComma },
			{ ",", ",", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimComma },
			{ "ALLOT", "ALLOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimAllot },
			{ "HERE", "HERE", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimHere },
			{ "2-", "2-", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimTwoMinus },
			{ "1-", "1-", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimOneMinus },
			{ "2+", "2+", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimTwoPlus },
			{ "1+", "1+", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimOnePLus },
			{ "B/SCR", "B/SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimBSlashSCR },
			{ "B/BUF", "B/BUF", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimBSlashBUF },
			{ "LIMIT", "LIMIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimLimit },
			{ "FIRST", "FIRST", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimFirst },
			{ "C/L", "C/L", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimCSlashL },
			{ "MODE", "MODE", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimMode },
			{ "HLD", "HLD", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimHLD },
			{ "CSP", "CSP", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimCSP },
			{ "DPL", "DPL", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimDPL },
			{ "BASE", "BASE", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimBase },
			{ "STATE", "STATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimState },
			{ "CURRENT", "CURRENT", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimCurrent },
			{ "CONTEXT", "CONTEXT", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimContext },
			{ "OFFSET", "OFFSET", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimOffset },
			{ "SCR", "SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimSCR },
			{ "IN", "IN", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimIn },
			{ "BLK", "BLK", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimBLK },
			{ "UEMIT", "UEMIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimUEmit },
			{ "UKEY", "UKEY", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimUKey },
			{ "UR/W", "UR/W", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimURSlashW },
			{ "UABORT", "UABORT", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimUAbort },
			{ "UB/SCR", "UB/SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimUBSlashSCR },
			{ "UB/BUF", "UB/BUF", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimUBSlashBUF },
			{ "ULIMIT", "ULIMIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimULimit },
			{ "UFIRST", "UFIRST", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimUFirst },
			{ "UC/L", "UC/L", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimUCSlashL },
			{ "PREV", "PREV", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimPrev },
			{ "USE", "USE", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimUse },
			{ "VOC-LINK", "VOC-LINK", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimVocLink },
			{ "DP", "DP", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimDP },
			{ "FENCE", "FENCE", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimFence },
			{ "WARNING", "WARNING", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimWarning },
			{ "WIDTH", "WIDTH", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimWidth },
			{ "TIB", "TIB", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimTIB },
			{ "R0", "R0", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimR0 },
			{ "S0", "S0", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimS0 },
			{ "BL", "BL", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimBL },
			{ "3", "3", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimThree },
			{ "2", "2", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimTwo },
			{ "1", "1", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimOne },
			{ "0", "0", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimZero },
			{ "USER", "USER", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimUser },
			{ "CODE", "CODE", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimCode },
			{ "VARIABLE", "VARIABLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimVariable },
			{ "CONSTANT", "CONSTANT", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimConstant },
			{ ";", ";", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimSemicolon },
			{ ":", ":", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimColon },
			{ "C!", "C!", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimCStore },
			{ "!", "!", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimStore },
			{ "C@", "C@", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimCFetch },
			{ "@", "@", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimFetch },
			{ "TOGGLE", "TOGGLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimToggle },
			{ "+!", "+!", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimPlusStore },
			{ "BOUNDS", "BOUNDS", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimBounds },
			{ "2DUP", "2DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimTwoDup },
			{ "DUP", "DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimDup },
			{ "SWAP", "SWAP", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimSwap },
			{ "2DROP", "2DROP", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimTwoDrop },
			{ "DROP", "DROP", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimDrop },
			{ "OVER", "OVER", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimOver },
			{ "DNEGATE", "DNEGATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimDNegate },
			{ "NEGATE", "NEGATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimNegate },
			{ "D+", "D+", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimDPlus },
			{ "+", "+", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimPlus },
			{ "0<", "0<", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimZeroLess },
			{ "NOT", "NOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimNot },
			{ "0=", "0=", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimZeroEqual },
			{ "R", "R", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimR },
			{ "R>", "R>", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimRGreater },
			{ ">R", ">R", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimToR },
			{ "LEAVE", "LEAVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimLeave },
			{ ";S", ";S", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimSemicolonS },
			{ "RP@", "RP@", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimRPFetch },
			{ "RP!", "RP!", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimRPStore },
			{ "SP!", "SP!", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimSPStore },
			{ "SP@", "SP@", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimSPFetch },
			{ "XOR", "XOR", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimXor },
			{ "OR", "OR", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimOr },
			{ "AND", "AND", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimAnd },
			{ "U/", "U/", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimUSlash },
			{ "U*", "U*", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimUStar },
			{ "CMOVE", "CMOVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimCMove },
			{ "-CR", "-CR", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimMinusCR },
			{ "CLOSE", "CLOSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimClose },
			{ "CHAIN", "CHAIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimChain },
			{ "FINIS", "FINIS", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimFinis },
			{ "SOURCE", "SOURCE", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimSource },
			{ "BAUD", "BAUD", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimBaud },
			{ "WRITE", "WRITE", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimWrite },
			{ "READ", "READ", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimRead },
			{ "?OUT", "?OUT", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimQOut },
			{ "?IN", "?IN", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimQIn },
			{ "PUT", "PUT", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimPut },
			{ "GET", "GET", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimGet },
			{ "CR", "CR", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimCR },
			{ "?TERMINAL", "?TERMINAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimQTerminal },
			{ "KEY", "KEY", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimKey },
			{ "EMIT", "EMIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimEmit },
			{ "ENCLOSE", "ENCLOSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimEnclose },
			{ "(FIND)", "(FIND)", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimZFind },
			{ "DIGIT", "DIGIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimDigit },
			{ "I", "I", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimI },
			{ "(DO)", "(DO)", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimZDo },
			{ "(+LOOP)", "(+LOOP)", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimZPlusLoop },
			{ "0BRANCH", "0BRANCH", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimZeroBranch },
			{ "BRANCH", "BRANCH", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimBranch },
			{ "EXECUTE", "EXECUTE", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimExecute },
			{ "CLIT", "CLIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimClit },
			{ "LIT", "LIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)aimLit },
			{ "H2OFORTH", "H2OFORTH", TRUE, FALSE, FALSE, MAX_WORDID, (forthOperation)NULL }
};
#endif
