#ifndef H2OFIG1
#define H2OFIG1

/* The "figFORTH" FORTH */

/* Definitions */

void figStore(void);
void figStoreCsp(void);
void figNum(void);
void figNumGreater(void);
void figNumS(void);
void figTick(void);
void figParen(void);
void figYDotQuote(void);
void figYSemicolonCode(void);
void figYPlusLoop(void);
void figYAbort(void);
void figYDo(void);
void figYFind(void);
void figYLine(void);
void figYLoop(void);
void figYNumber(void);
void figStar(void);
void figStarSlash(void);
void figStarSlashMod(void);
void figPlus(void);
void figPlusStore(void);
void figPlusMinus(void);
void figPlusBuf(void);
void figPlusLoop(void);
void figOrigin(void);
void figComma(void);
void figMinus(void);
void figTo(void);
void figMinusDup(void);
void figFind(void);
void figTrailing(void);
void figDot(void);
void figDotQuote(void);
void figDotLine(void);
void figDotR(void);
void figSlash(void);
void figSlashMod(void);
void figZero(void);
void figOne(void);
void figTwo(void);
void figThree(void);
void figZeroLess(void);
void figZeroEqual(void);
void figZeroBranch(void);
void figOnePlus(void);
void figTwoPlus(void);
void figColon(void);
void figSemicolon(void);
void figSemicolonCode(void);
void figSemicolonS(void);
void figLess(void);
void figLessNum(void);
void figBuilds(void);
void figEqual(void);
void figGreater(void);
void figToR(void);
void figQ(void);
void figQComp(void);
void figQCsp(void);
void figQError(void);
void figQExec(void);
void figQLoading(void);
void figQPairs(void);
void figQStack(void);
void figQTerminal(void);
void figFetch(void);
void figAbort(void);
void figAbs(void);
void figAgain(void);
void figAllot(void);
void figAnd(void);
void figBSlashBuf(void);
void figBSlashScr(void);
void figBack(void);
void figBase(void);
void figBegin(void);
void figBl(void);
void figBlanks(void);
void figBlk(void);
void figBlock(void);
void figBlockRead(void);
void figBlockWrite(void);
void figBranch(void);
void figBuffer(void);
void figCStore(void);
void figCComma(void);
void figCFetch(void);
void figCfa(void);
void figCMove(void);
void figCold(void);
void figCompile(void);
void figConstant(void);
void figContext(void);
void figCount(void);
void figCr(void);
void figCreate(void);
void figCsp(void);
void figDPlus(void);
void figDPlusMinus(void);
void figDDot(void);
void figDDotR(void);
void figDAbs(void);
void figDecimal(void);
void figDefinitions(void);
void figDigit(void);
void figDList(void);
void figDLiteral(void);
void figDMinus(void);
void figDo(void);
void figDoes(void);
void figDP(void);
void figDpl(void);
void figDr0(void);
void figDr1(void);
void figDrop(void);
void figDump(void);
void figDup(void);
void figElse(void);
void figEmit(void);
void figEmptyBuffers(void);
void figEnclose(void);
void figEnd(void);
void figEndIf(void);
void figErase(void);
void figError(void);
void figExecute(void);
void figExpect(void);
void figFence(void);
void figFill(void);
void figFirst(void);
void figFld(void);
void figForget(void);
void figForth(void);
void figHere(void);
void figHex(void);
void figHld(void);
void figHold(void);
void figI(void);
void figIDDot(void);
void figIf(void);
void figImmediate(void);
void figIn(void);
void figIndex(void);
void figInterpret(void);
void figKey(void);
void figLatest(void);
void figLeave(void);
void figLfa(void);
void figLimit(void);
void figList(void);
void figLit(void);
void figLiteral(void);
void figLoad(void);
void figLoop(void);
void figMStar(void);
void figMSlash(void);
void figMSlashMod(void);
void figMax(void);
void figMessage(void);
void figMin(void);
void figMod(void);
void figMon(void);
void figMove(void);
void figNext(void);
void figNfa(void);
void figNumber(void);
void figOffset(void);
void figOr(void);
void figOut(void);
void figOver(void);
void figPad(void);
void figPfa(void);
void figPop(void);
void figPrev(void);
void figPush(void);
void figPut(void);
void figQuery(void);
void figQuit(void);
void figR(void);
void figRNum(void);
void figRSlashW(void);
void figRFrom(void);
void figR0(void);
void figRepeat(void);
void figRot(void);
void figRPStore(void);
void figSToD(void);
void figS0(void);
void figScr(void);
void figSign(void);
void figSmudge(void);
void figSPStore(void);
void figSPFetch(void);
void figSpace(void);
void figSpaces(void);
void figState(void);
void figSwap(void);
void figTask(void);
void figThen(void);
void figTib(void);
void figToggle(void);
void figTraverse(void);
void figTriad(void);
void figType(void);
void figUStar(void);
void figUSlash(void);
void figUntil(void);
void figUpdate(void);
void figUse(void);
void figUser(void);
void figVariable(void);
void figVocLink(void);
void figVocabulary(void);
void figVlist(void);
void figWarning(void);
void figWhile(void);
void figWidth(void);
void figWord(void);
void figX(void);
void figXor(void);
void figRightBracket(void);
void figXCompile(void);
void figLeftBracket(void);

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
/* This vocabulary is in alphabetic order! */

static const PROGMEM typedef_forthWord forthWords[] = {
			{ "!", "!", TRUE, FALSE, FALSE, 0UL, (forthOperation)figStore },
			{ "!CSP", "!CSP", TRUE, FALSE, FALSE, 0UL, (forthOperation)figStoreCsp },
			{ "#", "#", TRUE, FALSE, FALSE, 0UL, (forthOperation)figNum },
			{ "#>", "#>", TRUE, FALSE, FALSE, 0UL, (forthOperation)figNumGreater },
			{ "#S", "#S", TRUE, FALSE, FALSE, 0UL, (forthOperation)figNumS },
			{ "'", "'", TRUE, FALSE, FALSE, 0UL, (forthOperation)figTick },
			{ "(", "(", TRUE, FALSE, FALSE, 0UL, (forthOperation)figParen },
			{ "(.\")", "(.\")", TRUE, FALSE, FALSE, 0UL, (forthOperation)figYDotQuote },
			{ "(;CODE)", "(;CODE)", TRUE, FALSE, FALSE, 0UL, (forthOperation)figYSemicolonCode },
			{ "(+LOOP)", "(+LOOP)", TRUE, FALSE, FALSE, 0UL, (forthOperation)figYPlusLoop },
			{ "(ABORT)", "(ABORT)", TRUE, FALSE, FALSE, 0UL, (forthOperation)figYAbort },
			{ "(DO)", "(DO)", TRUE, FALSE, FALSE, 0UL, (forthOperation)figYDo },
			{ "(FIND)", "(FIND)", TRUE, FALSE, FALSE, 0UL, (forthOperation)figYFind },
			{ "(LINE)", "(LINE)", TRUE, FALSE, FALSE, 0UL, (forthOperation)figYLine },
			{ "(LOOP)", "(LOOP)", TRUE, FALSE, FALSE, 0UL, (forthOperation)figYLoop },
			{ "(NUMBER)", "(NUMBER)", TRUE, FALSE, FALSE, 0UL, (forthOperation)figYNumber },
			{ "*", "*", TRUE, FALSE, FALSE, 0UL, (forthOperation)figStar },
			{ "*/", "*/", TRUE, FALSE, FALSE, 0UL, (forthOperation)figStarSlash },
			{ "*/MOD", "*/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)figStarSlashMod },
			{ "+", "+", TRUE, FALSE, FALSE, 0UL, (forthOperation)figPlus },
			{ "+!", "+!", TRUE, FALSE, FALSE, 0UL, (forthOperation)figPlusStore },
			{ "+-", "+-", TRUE, FALSE, FALSE, 0UL, (forthOperation)figPlusMinus },
			{ "+BUF", "+BUF", TRUE, FALSE, FALSE, 0UL, (forthOperation)figPlusBuf },
			{ "+LOOP", "+LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)figPlusLoop },
			{ "+ORIGIN", "+ORIGIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)figOrigin },
			{ ",", ",", TRUE, FALSE, FALSE, 0UL, (forthOperation)figComma },
			{ "-", "-", TRUE, FALSE, FALSE, 0UL, (forthOperation)figMinus },
			{ "-->", "-->", TRUE, FALSE, FALSE, 0UL, (forthOperation)figTo },
			{ "-DUP", "-DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)figMinusDup },
			{ "-FIND", "-FIND", TRUE, FALSE, FALSE, 0UL, (forthOperation)figFind },
			{ "-TRAILING", "-TRAILING", TRUE, FALSE, FALSE, 0UL, (forthOperation)figTrailing },
			{ ".", ".", TRUE, FALSE, FALSE, 0UL, (forthOperation)figDot },
			{ ".\"", ".\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)figDotQuote },
			{ ".LINE", ".LINE", TRUE, FALSE, FALSE, 0UL, (forthOperation)figDotLine },
			{ ".R", ".R", TRUE, FALSE, FALSE, 0UL, (forthOperation)figDotR },
			{ "/", "/", TRUE, FALSE, FALSE, 0UL, (forthOperation)figSlash },
			{ "/MOD", "/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)figSlashMod },
			{ "0", "0", TRUE, FALSE, FALSE, 0UL, (forthOperation)figZero },
			{ "1", "1", TRUE, FALSE, FALSE, 0UL, (forthOperation)figOne },
			{ "2", "2", TRUE, FALSE, FALSE, 0UL, (forthOperation)figTwo },
			{ "3", "3", TRUE, FALSE, FALSE, 0UL, (forthOperation)figThree },
			{ "0<", "0<", TRUE, FALSE, FALSE, 0UL, (forthOperation)figZeroLess },
			{ "0=", "0=", TRUE, FALSE, FALSE, 0UL, (forthOperation)figZeroEqual },
			{ "ZeroBranch", "ZeroBranch", TRUE, FALSE, FALSE, 0UL, (forthOperation)figZeroBranch },
			{ "1+", "1+", TRUE, FALSE, FALSE, 0UL, (forthOperation)figOnePlus },
			{ "2+", "2+", TRUE, FALSE, FALSE, 0UL, (forthOperation)figTwoPlus },
			{ ":", ":", TRUE, FALSE, FALSE, 0UL, (forthOperation)figColon },
			{ ";", ";", TRUE, FALSE, FALSE, 0UL, (forthOperation)figSemicolon },
			{ ";CODE", ";CODE", TRUE, FALSE, FALSE, 0UL, (forthOperation)figSemicolonCode },
			{ ";S", ";S", TRUE, FALSE, FALSE, 0UL, (forthOperation)figSemicolonS },
			{ "<", "<", TRUE, FALSE, FALSE, 0UL, (forthOperation)figLess },
			{ "<#", "<#", TRUE, FALSE, FALSE, 0UL, (forthOperation)figLessNum },
			{ "<BUILDS", "<BUILDS", TRUE, FALSE, FALSE, 0UL, (forthOperation)figBuilds },
			{ "=", "=", TRUE, FALSE, FALSE, 0UL, (forthOperation)figEqual },
			{ ">", ">", TRUE, FALSE, FALSE, 0UL, (forthOperation)figGreater },
			{ ">R", ">R", TRUE, FALSE, FALSE, 0UL, (forthOperation)figToR },
			{ "?", "?", TRUE, FALSE, FALSE, 0UL, (forthOperation)figQ },
			{ "?COMP", "?COMP", TRUE, FALSE, FALSE, 0UL, (forthOperation)figQComp },
			{ "?CSP", "?CSP", TRUE, FALSE, FALSE, 0UL, (forthOperation)figQCsp },
			{ "?ERROR", "?ERROR", TRUE, FALSE, FALSE, 0UL, (forthOperation)figQError },
			{ "?EXEC", "?EXEC", TRUE, FALSE, FALSE, 0UL, (forthOperation)figQExec },
			{ "?LOADING", "?LOADING", TRUE, FALSE, FALSE, 0UL, (forthOperation)figQLoading },
			{ "?PAIRS", "?PAIRS", TRUE, FALSE, FALSE, 0UL, (forthOperation)figQPairs },
			{ "?STACK", "?STACK", TRUE, FALSE, FALSE, 0UL, (forthOperation)figQStack },
			{ "?TERMINAL", "?TERMINAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)figQTerminal },
			{ "@", "@", TRUE, FALSE, FALSE, 0UL, (forthOperation)figFetch },
			{ "ABORT", "ABORT", TRUE, FALSE, FALSE, 0UL, (forthOperation)figAbort },
			{ "ABS", "ABS", TRUE, FALSE, FALSE, 0UL, (forthOperation)figAbs },
			{ "AGAIN", "AGAIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)figAgain },
			{ "ALLOT", "ALLOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)figAllot },
			{ "AND", "AND", TRUE, FALSE, FALSE, 0UL, (forthOperation)figAnd },
			{ "B/BUF", "B/BUF", TRUE, FALSE, FALSE, 0UL, (forthOperation)figBSlashBuf },
			{ "B/SCR", "B/SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)figBSlashScr },
			{ "BACK", "BACK", TRUE, FALSE, FALSE, 0UL, (forthOperation)figBack },
			{ "BASE", "BASE", TRUE, FALSE, FALSE, 0UL, (forthOperation)figBase },
			{ "BEGIN", "BEGIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)figBegin },
			{ "BL", "BL", TRUE, FALSE, FALSE, 0UL, (forthOperation)figBl },
			{ "BLANKS", "BLANKS", TRUE, FALSE, FALSE, 0UL, (forthOperation)figBlanks },
			{ "BLK", "BLK", TRUE, FALSE, FALSE, 0UL, (forthOperation)figBlk },
			{ "BLOCK", "BLOCK", TRUE, FALSE, FALSE, 0UL, (forthOperation)figBlock },
			{ "BLOCK-READ", "BLOCK-READ", TRUE, FALSE, FALSE, 0UL, (forthOperation)figBlockRead },
			{ "BLOCK-WRITE", "BLOCK-WRITE", TRUE, FALSE, FALSE, 0UL, (forthOperation)figBlockWrite },
			{ "BRANCH", "BRANCH", TRUE, FALSE, FALSE, 0UL, (forthOperation)figBranch },
			{ "BUFFER", "BUFFER", TRUE, FALSE, FALSE, 0UL, (forthOperation)figBuffer },
			{ "C!", "C!", TRUE, FALSE, FALSE, 0UL, (forthOperation)figCStore },
			{ "C,", "C,", TRUE, FALSE, FALSE, 0UL, (forthOperation)figCComma },
			{ "C@", "C@", TRUE, FALSE, FALSE, 0UL, (forthOperation)figCFetch },
			{ "CFA", "CFA", TRUE, FALSE, FALSE, 0UL, (forthOperation)figCfa },
			{ "CMOVE", "CMOVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)figCMove },
			{ "COLD", "COLD", TRUE, FALSE, FALSE, 0UL, (forthOperation)figCold },
			{ "COMPILE", "COMPILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)figCompile },
			{ "CONSTANT", "CONSTANT", TRUE, FALSE, FALSE, 0UL, (forthOperation)figConstant },
			{ "CONTEXT", "CONTEXT", TRUE, FALSE, FALSE, 0UL, (forthOperation)figContext },
			{ "COUNT", "COUNT", TRUE, FALSE, FALSE, 0UL, (forthOperation)figCount },
			{ "CR", "CR", TRUE, FALSE, FALSE, 0UL, (forthOperation)figCr },
			{ "CREATE", "CREATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)figCreate },
			{ "CSP", "CSP", TRUE, FALSE, FALSE, 0UL, (forthOperation)figCsp },
			{ "D+", "D+", TRUE, FALSE, FALSE, 0UL, (forthOperation)figDPlus },
			{ "D+-", "D+-", TRUE, FALSE, FALSE, 0UL, (forthOperation)figDPlusMinus },
			{ "D.", "D.", TRUE, FALSE, FALSE, 0UL, (forthOperation)figDDot },
			{ "D.R", "D.R", TRUE, FALSE, FALSE, 0UL, (forthOperation)figDDotR },
			{ "DABS", "DABS", TRUE, FALSE, FALSE, 0UL, (forthOperation)figDAbs },
			{ "DECIMAL", "DECIMAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)figDecimal },
			{ "DEFINITIONS", "DEFINITIONS", TRUE, FALSE, FALSE, 0UL, (forthOperation)figDefinitions },
			{ "DIGIT", "DIGIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)figDigit },
			{ "DLIST", "DLIST", TRUE, FALSE, FALSE, 0UL, (forthOperation)figDList },
			{ "DLITERAL", "DLITERAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)figDLiteral },
			{ "DMINUS", "DMINUS", TRUE, FALSE, FALSE, 0UL, (forthOperation)figDMinus },
			{ "DO", "DO", TRUE, FALSE, FALSE, 0UL, (forthOperation)figDo },
			{ "DOES>", "DOES>", TRUE, FALSE, FALSE, 0UL, (forthOperation)figDoes },
			{ "DP", "DP", TRUE, FALSE, FALSE, 0UL, (forthOperation)figDP },
			{ "DPL", "DPL", TRUE, FALSE, FALSE, 0UL, (forthOperation)figDpl },
			{ "DR0", "DR0", TRUE, FALSE, FALSE, 0UL, (forthOperation)figDr0 },
			{ "DR1", "DR1", TRUE, FALSE, FALSE, 0UL, (forthOperation)figDr1 },
			{ "DROP", "DROP", TRUE, FALSE, FALSE, 0UL, (forthOperation)figDrop },
			{ "DUMP", "DUMP", TRUE, FALSE, FALSE, 0UL, (forthOperation)figDump },
			{ "DUP", "DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)figDup },
			{ "ELSE", "ELSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)figElse },
			{ "EMIT", "EMIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)figEmit },
			{ "EMPTY-BUFFERS", "EMPTY-BUFFERS", TRUE, FALSE, FALSE, 0UL, (forthOperation)figEmptyBuffers },
			{ "ENCLOSE", "ENCLOSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)figEnclose },
			{ "END", "END", TRUE, FALSE, FALSE, 0UL, (forthOperation)figEnd },
			{ "ENDIF", "ENDIF", TRUE, FALSE, FALSE, 0UL, (forthOperation)figEndIf },
			{ "ERASE", "ERASE", TRUE, FALSE, FALSE, 0UL, (forthOperation)figErase },
			{ "ERROR", "ERROR", TRUE, FALSE, FALSE, 0UL, (forthOperation)figError },
			{ "EXECUTE", "EXECUTE", TRUE, FALSE, FALSE, 0UL, (forthOperation)figExecute },
			{ "EXPECT", "EXPECT", TRUE, FALSE, FALSE, 0UL, (forthOperation)figExpect },
			{ "FENCE", "FENCE", TRUE, FALSE, FALSE, 0UL, (forthOperation)figFence },
			{ "FILL", "FILL", TRUE, FALSE, FALSE, 0UL, (forthOperation)figFill },
			{ "FIRST", "FIRST", TRUE, FALSE, FALSE, 0UL, (forthOperation)figFirst },
			{ "FLD", "FLD", TRUE, FALSE, FALSE, 0UL, (forthOperation)figFld },
			{ "FORGET", "FORGET", TRUE, FALSE, FALSE, 0UL, (forthOperation)figForget },
			{ "FORTH", "FORTH", TRUE, FALSE, FALSE, 0UL, (forthOperation)figForth },
			{ "HERE", "HERE", TRUE, FALSE, FALSE, 0UL, (forthOperation)figHere },
			{ "HEX", "HEX", TRUE, FALSE, FALSE, 0UL, (forthOperation)figHex },
			{ "HLD", "HLD", TRUE, FALSE, FALSE, 0UL, (forthOperation)figHld },
			{ "HOLD", "HOLD", TRUE, FALSE, FALSE, 0UL, (forthOperation)figHold },
			{ "I", "I", TRUE, FALSE, FALSE, 0UL, (forthOperation)figI },
			{ "ID.", "ID.", TRUE, FALSE, FALSE, 0UL, (forthOperation)figIDDot },
			{ "IF", "IF", TRUE, FALSE, FALSE, 0UL, (forthOperation)figIf },
			{ "IMMEDIATE", "IMMEDIATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)figImmediate },
			{ "IN", "IN", TRUE, FALSE, FALSE, 0UL, (forthOperation)figIn },
			{ "INDEX", "INDEX", TRUE, FALSE, FALSE, 0UL, (forthOperation)figIndex },
			{ "INTERPRET", "INTERPRET", TRUE, FALSE, FALSE, 0UL, (forthOperation)figInterpret },
			{ "KEY", "KEY", TRUE, FALSE, FALSE, 0UL, (forthOperation)figKey },
			{ "LATEST", "LATEST", TRUE, FALSE, FALSE, 0UL, (forthOperation)figLatest },
			{ "LEAVE", "LEAVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)figLeave },
			{ "LFA", "LFA", TRUE, FALSE, FALSE, 0UL, (forthOperation)figLfa },
			{ "LIMIT", "LIMIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)figLimit },
			{ "LIST", "LIST", TRUE, FALSE, FALSE, 0UL, (forthOperation)figList },
			{ "LIT", "LIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)figLit },
			{ "LITERAL", "LITERAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)figLiteral },
			{ "LOAD", "LOAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)figLoad },
			{ "LOOP", "LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)figLoop },
			{ "M*", "M*", TRUE, FALSE, FALSE, 0UL, (forthOperation)figMStar },
			{ "M/", "M/", TRUE, FALSE, FALSE, 0UL, (forthOperation)figMSlash },
			{ "M/MOD", "M/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)figMSlashMod },
			{ "MAX", "MAX", TRUE, FALSE, FALSE, 0UL, (forthOperation)figMax },
			{ "MESSAGE", "MESSAGE", TRUE, FALSE, FALSE, 0UL, (forthOperation)figMessage },
			{ "MIN", "MIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)figMin },
			{ "MINUS", "MINUS", TRUE, FALSE, FALSE, 0UL, (forthOperation)figMinus },
			{ "MOD", "MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)figMod },
			{ "MON", "MON", TRUE, FALSE, FALSE, 0UL, (forthOperation)figMon },
			{ "MOVE", "MOVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)figMove },
			{ "NEXT", "NEXT", TRUE, FALSE, FALSE, 0UL, (forthOperation)figNext },
			{ "NFA", "NFA", TRUE, FALSE, FALSE, 0UL, (forthOperation)figNfa },
			{ "NUMBER", "NUMBER", TRUE, FALSE, FALSE, 0UL, (forthOperation)figNumber },
			{ "OFFSET", "OFFSET", TRUE, FALSE, FALSE, 0UL, (forthOperation)figOffset },
			{ "OR", "OR", TRUE, FALSE, FALSE, 0UL, (forthOperation)figOr },
			{ "OUT", "OUT", TRUE, FALSE, FALSE, 0UL, (forthOperation)figOut },
			{ "OVER", "OVER", TRUE, FALSE, FALSE, 0UL, (forthOperation)figOver },
			{ "PAD", "PAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)figPad },
			{ "PFA", "PFA", TRUE, FALSE, FALSE, 0UL, (forthOperation)figPfa },
			{ "POP", "POP", TRUE, FALSE, FALSE, 0UL, (forthOperation)figPop },
			{ "PREV", "PREV", TRUE, FALSE, FALSE, 0UL, (forthOperation)figPrev },
			{ "PUSH", "PUSH", TRUE, FALSE, FALSE, 0UL, (forthOperation)figPush },
			{ "PUT", "PUT", TRUE, FALSE, FALSE, 0UL, (forthOperation)figPut },
			{ "QUERY", "QUERY", TRUE, FALSE, FALSE, 0UL, (forthOperation)figQuery },
			{ "QUIT", "QUIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)figQuit },
			{ "R", "R", TRUE, FALSE, FALSE, 0UL, (forthOperation)figR },
			{ "R#", "R#", TRUE, FALSE, FALSE, 0UL, (forthOperation)figRNum },
			{ "R/W", "R/W", TRUE, FALSE, FALSE, 0UL, (forthOperation)figRSlashW },
			{ "R>", "R>", TRUE, FALSE, FALSE, 0UL, (forthOperation)figRFrom },
			{ "R0", "R0", TRUE, FALSE, FALSE, 0UL, (forthOperation)figR0 },
			{ "REPEAT", "REPEAT", TRUE, FALSE, FALSE, 0UL, (forthOperation)figRepeat },
			{ "ROT", "ROT", TRUE, FALSE, FALSE, 0UL, (forthOperation)figRot },
			{ "RP!", "RP!", TRUE, FALSE, FALSE, 0UL, (forthOperation)figRPStore },
			{ "S->D", "S->D", TRUE, FALSE, FALSE, 0UL, (forthOperation)figSToD },
			{ "S0", "S0", TRUE, FALSE, FALSE, 0UL, (forthOperation)figS0 },
			{ "SCR", "SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)figScr },
			{ "SIGN", "SIGN", TRUE, FALSE, FALSE, 0UL, (forthOperation)figSign },
			{ "SMUDGE", "SMUDGE", TRUE, FALSE, FALSE, 0UL, (forthOperation)figSmudge },
			{ "SP!", "SP!", TRUE, FALSE, FALSE, 0UL, (forthOperation)figSPStore },
			{ "SP@", "SP@", TRUE, FALSE, FALSE, 0UL, (forthOperation)figSPFetch },
			{ "SPACE", "SPACE", TRUE, FALSE, FALSE, 0UL, (forthOperation)figSpace },
			{ "SPACES", "SPACES", TRUE, FALSE, FALSE, 0UL, (forthOperation)figSpaces },
			{ "STATE", "STATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)figState },
			{ "SWAP", "SWAP", TRUE, FALSE, FALSE, 0UL, (forthOperation)figSwap },
			{ "TASK", "TASK", TRUE, FALSE, FALSE, 0UL, (forthOperation)figTask },
			{ "THEN", "THEN", TRUE, FALSE, FALSE, 0UL, (forthOperation)figThen },
			{ "TIB", "TIB", TRUE, FALSE, FALSE, 0UL, (forthOperation)figTib },
			{ "TOGGLE", "TOGGLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)figToggle },
			{ "TRAVERSE", "TRAVERSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)figTraverse },
			{ "TRIAD", "TRIAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)figTriad },
			{ "TYPE", "TYPE", TRUE, FALSE, FALSE, 0UL, (forthOperation)figType },
			{ "U*", "U*", TRUE, FALSE, FALSE, 0UL, (forthOperation)figUStar },
			{ "U/", "U/", TRUE, FALSE, FALSE, 0UL, (forthOperation)figUSlash },
			{ "UNTIL", "UNTIL", TRUE, FALSE, FALSE, 0UL, (forthOperation)figUntil },
			{ "UPDATE", "UPDATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)figUpdate },
			{ "USE", "USE", TRUE, FALSE, FALSE, 0UL, (forthOperation)figUse },
			{ "USER", "USER", TRUE, FALSE, FALSE, 0UL, (forthOperation)figUser },
			{ "VARIABLE", "VARIABLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)figVariable },
			{ "VOC-LINK", "VOC-LINK", TRUE, FALSE, FALSE, 0UL, (forthOperation)figVocLink },
			{ "VOCABULARY", "VOCABULARY", TRUE, FALSE, FALSE, 0UL, (forthOperation)figVocabulary },
			{ "VLIST", "VLIST", TRUE, FALSE, FALSE, 0UL, (forthOperation)figVlist },
			{ "WARNING", "WARNING", TRUE, FALSE, FALSE, 0UL, (forthOperation)figWarning },
			{ "WHILE", "WHILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)figWhile },
			{ "WIDTH", "WIDTH", TRUE, FALSE, FALSE, 0UL, (forthOperation)figWidth },
			{ "WORD", "WORD", TRUE, FALSE, FALSE, 0UL, (forthOperation)figWord },
			{ "X", "X", TRUE, FALSE, FALSE, 0UL, (forthOperation)figX },
			{ "XOR", "XOR", TRUE, FALSE, FALSE, 0UL, (forthOperation)figXor },
			{ "[", "[", TRUE, FALSE, FALSE, 0UL, (forthOperation)figLeftBracket },
			{ "[COMPILE]", "[COMPILE]", TRUE, FALSE, FALSE, 0UL, (forthOperation)figXCompile },
			{ "]", "]", TRUE, FALSE, FALSE, 0UL, (forthOperation)figRightBracket },
			{ "H2OFORTH", "H2OFORTH", TRUE, FALSE, FALSE, MAX_FORTHWORD_ID, (forthOperation)NULL }
};

#endif
