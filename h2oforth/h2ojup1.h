#ifndef H2OJUP1
#define H2OJUP1

/* The "Jupiter Forth" FORTH */

/* Definitions */
void jupiterForth(void);
void jupiterUFLoat(void);
void jupiterInt(void);
void jupiterFNegate(void);
void jupiterFSlash(void);
void jupiterFStar(void);
void jupiterFPlus(void);
void jupiterFMinus(void);
void jupiterLoad(void);
void jupiterBVerify(void);
void jupiterVerify(void);
void jupiterBLoad(void);
void jupiterBSave(void);
void jupiterSave(void);
void jupiterList(void);
void jupiterEdit(void);
void jupiterForget(void);
void jupiterRedefine(void);
void jupiterExit(void);
void jupiterDotQuote(void);
void jupiterParen(void);
void jupiterLeftBracket(void);
void jupiterPlusLoop(void);
void jupiterLoop(void);
void jupiterDo(void);
void jupiterUntil(void);
void jupiterRepeat(void);
void jupiterBegin(void);
void jupiterThen(void);
void jupiterElse(void);
void jupiterWhile(void);
void jupiterIf(void);
void jupiterRightBracket(void);
void jupiterLeave(void);
void jupiterJ(void);
void jupiterITick(void);
void jupiterI(void);
void jupiterDefinitions(void);
void jupiterVocabulary(void);
void jupiterImmediate(void);
void jupiterDoes(void);
void jupiterCompiler(void);
void jupiterCall(void);
void jupiterDefiner(void);
void jupiterASCII(void);
void jupiterLiteral(void);
void jupiterConstant(void);
void jupiterVariable(void);
void jupiterAllot(void);
void jupiterCComma(void);
void jupiterComma(void);
void jupiterCreate(void);
void jupiterColon(void);
void jupiterDecimal(void);
void jupiterMin(void);
void jupiterMax(void);
void jupiterXor(void);
void jupiterAnd(void);
void jupiterOr(void);
void jupiterTwoMinus(void);
void jupiterOneMinus(void);
void jupiterTwoPlus(void);
void jupiterOnePlus(void);
void jupiterDPlus(void);
void jupiterMinus(void);
void jupiterPlus(void);
void jupiterDNegate(void);
void jupiterNegate(void);
void jupiterUSlashMOD(void);
void jupiterStarSlash(void);
void jupiterStar(void);
void jupiterMOD(void);
void jupiterSlash(void);
void jupiterStarSlashMOD(void);
void jupiterSlashMOD(void);
void jupiterUStar(void);
void jupiterDGreater(void);
void jupiterUGreater(void);
void jupiterLess(void);
void jupiterGreater(void);
void jupiterEqual(void);
void jupiterZeroGreater(void);
void jupiterZeroLess(void);
void jupiterZeroEqual(void);
void jupiterAbs(void);
void jupiterOut(void);
void jupiterIn(void);
void jupiterInKey(void);
void jupiterBeep(void);
void jupiterPlot(void);
void jupiterAt(void);
void jupiterFDot(void);
void jupiterEmit(void);
void jupiterCR(void);
void jupiterSpaces(void);
void jupiterSpace(void);
void jupiterHold(void);
void jupiterCLS(void);
void jupiterNum(void);
void jupiterNums(void);
void jupiterUDot(void);
void jupiterDot(void);
void jupiterSign(void);
void jupiterNumGreater(void);
void jupiterLessNum(void);
void jupiterType(void);
void jupiterRoll(void);
void jupiterPick(void);
void jupiterOver(void);
void jupiterRot(void);
void jupiterQDup(void);
void jupiterRFrom(void);
void jupiterToR(void);
void jupiterStore(void);
void jupiterFetch(void);
void jupiterCStore(void);
void jupiterCFetch(void);
void jupiterSwap(void);
void jupiterDrop(void);
void jupiterDup(void);
void jupiterSlow(void);
void jupiterFast(void);
void jupiterInvis(void);
void jupiterVis(void);
void jupiterConvert(void);
void jupiterNumber(void);
void jupiterExecute(void);
void jupiterFind(void);
void jupiterVlist(void);
void jupiterWord(void);
void jupiterRetype(void);
void jupiterQuery(void);
void jupiterLine(void);
void jupiterPad(void);
void jupiterBase(void);
void jupiterCurrent(void);
void jupiterContext(void);
void jupiterHere(void);
void jupiterAbort(void);
void jupiterQuit(void);

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

static const typedef_forthWord forthWords[] = {
			{ "FORTH", "FORTH", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterForth },
			{ "UFLOAT", "UFLOAT", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterUFLoat },
			{ "INT", "INT", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterInt },
			{ "FNEGATE", "FNEGATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterFNegate },
			{ "F/", "F/", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterFSlash },
			{ "F*", "F*", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterFStar },
			{ "F+", "F+", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterFPlus },
			{ "F-", "F-", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterFMinus },
			{ "LOAD", "LOAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterLoad },
			{ "BVERIFY", "BVERIFY", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterBVerify },
			{ "VERIFY", "VERIFY", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterVerify },
			{ "BLOAD", "BLOAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterBLoad },
			{ "BSAVE", "BSAVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterBSave },
			{ "SAVE", "SAVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterSave },
			{ "LIST", "LIST", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterList },
			{ "EDIT", "EDIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterEdit },
			{ "FORGET", "FORGET", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterForget },
			{ "REDEFINE", "REDEFINE", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterRedefine },
			{ "EXIT", "EXIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterExit },
			{ ".\"", ".\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterDotQuote },
			{ "(", "(", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterParen },
			{ "[", "[", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterLeftBracket },
			{ "+LOOP", "+LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterPlusLoop },
			{ "LOOP", "LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterLoop },
			{ "DO", "DO", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterDo },
			{ "UNTIL", "UNTIL", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterUntil },
			{ "REPEAT", "REPEAT", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterRepeat },
			{ "BEGIN", "BEGIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterBegin },
			{ "THEN", "THEN", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterThen },
			{ "ELSE", "ELSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterElse },
			{ "WHILE", "WHILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterWhile },
			{ "IF", "IF", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterIf },
			{ "]", "]", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterRightBracket },
			{ "LEAVE", "LEAVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterLeave },
			{ "J", "J", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterJ },
			{ "I'", "I'", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterITick },
			{ "I", "I", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterI },
			{ "DEFINITIONS", "DEFINITIONS", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterDefinitions },
			{ "VOCABULARY", "VOCABULARY", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterVocabulary },
			{ "IMMEDIATE", "IMMEDIATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterImmediate },
			{ "DOES>", "DOES>", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterDoes },
			{ "COMPILER", "COMPILER", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterCompiler },
			{ "CALL", "CALL", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterCall },
			{ "DEFINER", "DEFINER", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterDefiner },
			{ "ASCII", "ASCII", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterASCII },
			{ "LITERAL", "LITERAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterLiteral },
			{ "CONSTANT", "CONSTANT", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterConstant },
			{ "VARIABLE", "VARIABLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterVariable },
			{ "ALLOT", "ALLOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterAllot },
			{ "C,", "C,", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterCComma },
			{ ",", ",", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterComma },
			{ "CREATE", "CREATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterCreate },
			{ ":", ":", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterColon },
			{ "DECIMAL", "DECIMAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterDecimal },
			{ "MIN", "MIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterMin },
			{ "MAX", "MAX", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterMax },
			{ "XOR", "XOR", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterXor },
			{ "AND", "AND", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterAnd },
			{ "OR", "OR", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterOr },
			{ "2-", "2-", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterTwoMinus },
			{ "1-", "1-", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterOneMinus },
			{ "2+", "2+", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterTwoPlus },
			{ "1+", "1+", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterOnePlus },
			{ "D+", "D+", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterDPlus },
			{ "-", "-", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterMinus },
			{ "+", "+", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterPlus },
			{ "DNEGATE", "DNEGATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterDNegate },
			{ "NEGATE", "NEGATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterNegate },
			{ "U/MOD", "U/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterUSlashMOD },
			{ "*/", "*/", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterStarSlash },
			{ "*", "*", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterStar },
			{ "MOD", "MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterMOD },
			{ "/", "/", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterSlash },
			{ "*/MOD", "*/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterStarSlashMOD },
			{ "/MOD", "/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterSlashMOD },
			{ "U*", "U*", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterUStar },
			{ "D<", "D<", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterDGreater },
			{ "U<", "U<", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterUGreater },
			{ "<", "<", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterLess },
			{ ">", ">", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterGreater },
			{ "=", "=", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterEqual },
			{ "0>", "0>", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterZeroGreater },
			{ "0<", "0<", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterZeroLess },
			{ "0=", "0=", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterZeroEqual },
			{ "ABS", "ABS", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterAbs },
			{ "OUT", "OUT", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterOut },
			{ "IN", "IN", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterIn },
			{ "INKEY", "INKEY", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterInKey },
			{ "BEEP", "BEEP", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterBeep },
			{ "PLOT", "PLOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterPlot },
			{ "AT", "AT", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterAt },
			{ "F.", "F.", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterFDot },
			{ "EMIT", "EMIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterEmit },
			{ "CR", "CR", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterCR },
			{ "SPACES", "SPACES", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterSpaces },
			{ "SPACE", "SPACE", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterSpace },
			{ "HOLD", "HOLD", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterHold },
			{ "CLS", "CLS", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterCLS },
			{ "#", "#", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterNum },
			{ "#S", "#S", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterNums },
			{ "U.", "U.", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterUDot },
			{ ".", ".", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterDot },
			{ "SIGN", "SIGN", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterSign },
			{ "#>", "#>", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterNumGreater },
			{ "<#", "<#", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterLessNum },
			{ "TYPE", "TYPE", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterType },
			{ "ROLL", "ROLL", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterRoll },
			{ "PICK", "PICK", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterPick },
			{ "OVER", "OVER", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterOver },
			{ "ROT", "ROT", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterRot },
			{ "?DUP", "?DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterQDup },
			{ "R>", "R>", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterRFrom },
			{ ">R", ">R", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterToR },
			{ "!", "!", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterStore },
			{ "@", "@", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterFetch },
			{ "C!", "C!", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterCStore },
			{ "C@", "C@", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterCFetch },
			{ "SWAP", "SWAP", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterSwap },
			{ "DROP", "DROP", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterDrop },
			{ "DUP", "DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterDup },
			{ "SLOW", "SLOW", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterSlow },
			{ "FAST", "FAST", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterFast },
			{ "INVIS", "INVIS", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterInvis },
			{ "VIS", "VIS", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterVis },
			{ "CONVERT", "CONVERT", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterConvert },
			{ "NUMBER", "NUMBER", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterNumber },
			{ "EXECUTE", "EXECUTE", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterExecute },
			{ "FIND", "FIND", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterFind },
			{ "VLIST", "VLIST", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterVlist },
			{ "WORD", "WORD", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterWord },
			{ "RETYPE", "RETYPE", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterRetype },
			{ "QUERY", "QUERY", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterQuery },
			{ "LINE", "LINE", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterLine },
			{ "PAD", "PAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterPad },
			{ "BASE", "BASE", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterBase },
			{ "CURRENT", "CURRENT", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterCurrent },
			{ "CONTEXT", "CONTEXT", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterContext },
			{ "HERE", "HERE", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterHere },
			{ "ABORT", "ABORT", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterAbort },
			{ "QUIT", "QUIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)jupiterQuit },
			{ "H2OFORTH", "H2OFORTH", TRUE, FALSE, FALSE, MAX_FORTHWORD_ID, (forthOperation)NULL }
};

#endif
