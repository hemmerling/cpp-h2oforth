#ifndef H2OSNINE1
#define H2OSNINE1

/* The "FORTH79" FORTH */

/* Definitions */

#if H2O_FORTH_PRIMITIVES == FORTH79 ||\
	H2O_FORTH_PRIMITIVES == FORTH79_REQ_DBL_ASM_EXP_REF ||\
	H2O_FORTH_PRIMITIVES == FORTH79_NUC_INTERP_COMP
/* Required Word Set */
void snineStore(void);
void snineNum(void);
void snineNumGreater(void);
void snineNumS(void);
void snineTick(void);
void snineParen(void);
void snineStar(void);
void snineStarSlash(void);
void snineStarSlashMod(void);
void sninePlus(void);
void sninePlusStore(void);
void sninePlusLoop(void);
void snineComma(void);
void snineMinus(void);
void snineTrailing(void);
void snineDot(void);
void snineDotQuote(void);
void snineSlash(void);
void snineSlashMod(void);
void snineZeroLess(void);
void snineZeroEqual(void);
void snineZeroGreater(void);
void snineOnePlus(void);
void snineOneMinus(void);
void snineTwoPlus(void);
void snineTwoMinus(void);
void snineSnineStandard(void);
void snineColon(void);
void snineSemicolon(void);
void snineLess(void);
void snineLessNum(void);
void snineEqual(void);
void snineGreater(void);
void snineToIn(void);
void snineToR(void);
void snineQ(void);
void snineQDup(void);
void snineFetch(void);
void snineAbort(void);
void snineAbs(void);
void snineAllot(void);
void snineAnd(void);
void snineBase(void);
void snineBegin(void);
void snineBlk(void);
void snineBlock(void);
void snineBuffer(void);
void snineCStore(void);
void snineCFetch(void);
void snineCMove(void);
void snineCompile(void);
void snineConstant(void);
void snineContext(void);
void snineConvert(void);
void snineCount(void);
void snineCr(void);
void snineCreate(void);
void snineCurrent(void);
void snineDecimal(void);
void snineDefinitions(void);
void snineDepth(void);
void snineDo(void);
void snineDoes(void);
void snineDrop(void);
void snineDup(void);
void snineElse(void);
void snineEmit(void);
void snineEmptyBuffers(void);
void snineExecute(void);
void snineExit(void);
void snineExpect(void);
void snineFill(void);
void snineFind(void);
void snineForget(void);
void snineForth(void);
void snineHere(void);
void snineHold(void);
void snineI(void);
void snineIf(void);
void snineImmediate(void);
void snineJ(void);
void snineKey(void);
void snineLeave(void);
void snineList(void);
void snineLiteral(void);
void snineLoad(void);
void snineLoop(void);
void snineMax(void);
void snineMin(void);
void snineMod(void);
void snineMove(void);
void snineNegate(void);
void snineNot(void);
void snineOr(void);
void snineOver(void);
void sninePad(void);
void sninePick(void);
void snineQuery(void);
void snineQuit(void);
void snineRGreater(void);
void snineRFetch(void);
void snineRepeat(void);
void snineRoll(void);
void snineRot(void);
void snineSaveBuffers(void);
void snineScr(void);
void snineSign(void);
void snineSpace(void);
void snineSpaces(void);
void snineState(void);
void snineSwap(void);
void snineThen(void);
void snineType(void);
void snineUStar(void);
void snineUDot(void);
void snineUSlashMod(void);
void snineULess(void);
void snineUntil(void);
void snineUpdate(void);
void snineVariable(void);
void snineVocabulary(void);
void snineWhile(void);
void snineWord(void);
void snineXor(void);
void snineLeftParen(void);
void snineXCompile(void);
void snineRightParen(void);
/* Extension Word Sets */
/* 1. Double Number Word Set */
void snineTwoStore(void);
void snineTwoFetch(void);
void snineTwoConstant(void);
void snineTwoDrop(void);
void snineTwoDup(void);
void snineTwoOver(void);
void snineTwoRot(void);
void snineTwoSwap(void);
void snineTwoVariable(void);
void snineDPlus(void);
void snineDMinus(void);
void snineDDot(void);
void snineDDotR(void);
void snineDZeroEqual(void);
void snineDLess(void);
void snineDEqual(void);
void snineDAbs(void);
void snineDMax(void);
void snineDMin(void);
void snineDnegate(void);
void snineDULess(void);
/* 2. Assembler Word Set */
void snineSemicolonCode(void);
void snineAssembler(void);
void snineCode(void);
void snineEndCode(void);
/* Experimental Proposals */
/* Reference Word Set */
void snineStoreBits(void);
void snineStarStar(void);
void sninePlusBlock(void);
void snineMinusTick(void);
void snineTo(void);
void snineMatch(void);
void snineMinusText(void);
void snineDotR(void);
void snineSlashLoop(void);
void snineOnePlusStore(void);
void snineOneMinusStore(void);
void snineTwoStar(void);
void snineTwoSlash(void);
void snineSemicolonColon(void);
void snineSemicolonS(void);
void snineUnequal(void);
void snineBuilds(void);
void snineLessCmove(void);
void snineveSwap(void);
void snineveSwapMove(void);
void snineveFetchBits(void);
void snineAbortQuote(void);
void snineAgain(void);
void snineAscii(void);
void snineAShift(void);
void snineBSlashBuf(void);
void snineBell(void);
void snineBl(void);
void snineBlanks(void);
void snineCComma(void);
void snineChain(void);
void snineCom(void);
void snineContinued(void);
void snineCur(void);
void snineDBlock(void);
void snineDpl(void);
void snineDump(void);
void snineEditor(void);
void snineEnd(void);
void snineErase(void);
void snineFld(void);
void snineFlush(void);
void snineHDot(void);
void snineHex(void);
void snineITick(void);
void snineIfEnd(void);
void snineIfTrue(void);
void snineIndex(void);
void snineInterpret(void);
void snineK(void);
void snineLast(void);
void snineLine(void);
void snineLineLoad(void);
void snineLoads(void);
void snineMap0(void);
void snineMask(void);
void snineMs(void);
void snineNand(void);
void snineNor(void);
void snineNumber(void);
void snineODot(void);
void snineOctal(void);
void snineOffset(void);
void snineOtherwise(void);
void sninePage(void);
void snineReadMap(void);
void snineRemember(void);
void snineRewind(void);
void snineRotate(void);
void snineS0(void);
void snineSet(void);
void snineShift(void);
void snineSPFetch(void);
void snineText(void);
void snineThru(void);
void snineUDotR(void);
void snineUser(void);
void snineVList(void);
void snineWhere(void);
void snineBackslashLoop(void);
#endif

#if H2O_FORTH_PRIMITIVES == FORTH79 ||\
	H2O_FORTH_PRIMITIVES == FORTH79_REQ_DBL_ASM_EXP_REF
#endif

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

#if H2O_FORTH_PRIMITIVES == FORTH79 ||\
	H2O_FORTH_PRIMITIVES == FORTH79_REQ_DBL_ASM_EXP_REF
static const PROGMEM typedef_forthWord forthWords[] = {
	/* Required Word Set */
	{ "!", "!", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineStore },
	{ "#", "#", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineNum },
	{ "#>", "#>", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineNumGreater },
	{ "#S", "#S", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineNumS },
	{ "'", "'", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineTick },
	{ "(", "(", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineParen },
	{ "*", "*", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineStar },
	{ "*/", "*/", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineStarSlash },
	{ "*/MOD", "*/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineStarSlashMod },
	{ "+", "+", TRUE, FALSE, FALSE, 0UL, (forthOperation)sninePlus },
	{ "+!", "+!", TRUE, FALSE, FALSE, 0UL, (forthOperation)sninePlusStore },
	{ "+LOOP", "+LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)sninePlusLoop },
	{ ",", ",", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineComma },
	{ "-", "-", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineMinus },
	{ "-TRAILING", "-TRAILING", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineTrailing },
	{ ".", ".", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineDot },
	{ ".\"", ".\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineDotQuote },
	{ "/", "/", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineSlash },
	{ "/MOD", "/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineSlashMod },
	{ "0<", "0<", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineZeroLess },
	{ "0=", "0=", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineZeroEqual },
	{ "0>", "0>", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineZeroGreater },
	{ "1+", "1+", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineOnePlus },
	{ "1-", "1-", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineOneMinus },
	{ "2+", "2+", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineTwoPlus },
	{ "2-", "2-", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineTwoMinus },
	{ "79-STANDARD", "79-STANDARD", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineSnineStandard },
	{ ":", ":", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineColon },
	{ ";", ";", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineSemicolon },
	{ "<", "<", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineLess },
	{ "<#", "<#", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineLessNum },
	{ "=", "=", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineEqual },
	{ ">", ">", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineGreater },
	{ ">IN", ">IN", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineToIn },
	{ ">R", ">R", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineToR },
	{ "?", "?", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineQ },
	{ "?DUP", "?DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineQDup },
	{ "@", "@", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineFetch },
	{ "ABORT", "ABORT", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineAbort },
	{ "ABS", "ABS", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineAbs },
	{ "ALLOT", "ALLOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineAllot },
	{ "AND", "AND", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineAnd },
	{ "BASE", "BASE", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineBase },
	{ "BEGIN", "BEGIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineBegin },
	{ "BLK", "BLK", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineBlk },
	{ "BLOCK", "BLOCK", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineBlock },
	{ "BUFFER", "BUFFER", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineBuffer },
	{ "C!", "C!", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineCStore },
	{ "C@", "C@", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineCFetch },
	{ "CMOVE", "CMOVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineCMove },
	{ "COMPILE", "COMPILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineCompile },
	{ "CONSTANT", "CONSTANT", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineConstant },
	{ "CONTEXT", "CONTEXT", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineContext },
	{ "CONVERT", "CONVERT", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineConvert },
	{ "COUNT", "COUNT", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineCount },
	{ "CR", "CR", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineCr },
	{ "CREATE", "CREATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineCreate },
	{ "CURRENT", "CURRENT", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineCurrent },
	{ "D+", "D+", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineDPlus }, /* Double number word */
	{ "D<", "D<", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineDLess }, /* Double number word */
	{ "DECIMAL", "DECIMAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineDecimal },
	{ "DEFINITIONS", "DEFINITIONS", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineDefinitions },
	{ "DEPTH", "DEPTH", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineDepth },
	{ "DO", "DO", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineDo },
	{ "DOES>", "DOES>", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineDoes },
	{ "DROP", "DROP", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineDrop },
	{ "DUP", "DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineDup },
	{ "ELSE", "ELSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineElse },
	{ "EMIT", "EMIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineEmit },
	{ "EMPTY-BUFFERS", "EMPTY-BUFFERS", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineEmptyBuffers },
	{ "EXECUTE", "EXECUTE", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineExecute },
	{ "EXIT", "EXIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineExit },
	{ "EXPECT", "EXPECT", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineExpect },
	{ "FILL", "FILL", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineFill },
	{ "FIND", "FIND", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineFind },
	{ "FORGET", "FORGET", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineForget },
	{ "FORTH", "FORTH", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineForth },
	{ "HERE", "HERE", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineHere },
	{ "HOLD", "HOLD", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineHold },
	{ "I", "I", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineI },
	{ "IF", "IF", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineIf },
	{ "IMMEDIATE", "IMMEDIATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineImmediate },
	{ "J", "J", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineJ },
	{ "KEY", "KEY", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineKey },
	{ "LEAVE", "LEAVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineLeave },
	{ "LIST", "LIST", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineList },
	{ "LITERAL", "LITERAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineLiteral },
	{ "LOAD", "LOAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineLoad },
	{ "LOOP", "LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineLoop },
	{ "MAX", "MAX", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineMax },
	{ "MIN", "MIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineMin },
	{ "MOD", "MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineMod },
	{ "MOVE", "MOVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineMove },
	{ "NEGATE", "NEGATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineNegate },
	{ "NOT", "NOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineNot },
	{ "OR", "OR", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineOr },
	{ "OVER", "OVER", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineOver },
	{ "PAD", "PAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)sninePad },
	{ "PICK", "PICK", TRUE, FALSE, FALSE, 0UL, (forthOperation)sninePick },
	{ "QUERY", "QUERY", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineQuery },
	{ "QUIT", "QUIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineQuit },
	{ "R>", "R>", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineRGreater },
	{ "R@", "R@", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineRFetch },
	{ "REPEAT", "REPEAT", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineRepeat },
	{ "ROLL", "ROLL", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineRoll },
	{ "ROT", "ROT", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineRot },
	{ "SAVE-BUFFERS", "SAVE-BUFFERS", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineSaveBuffers },
	{ "SCR", "SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineScr },
	{ "SIGN", "SIGN", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineSign },
	{ "SPACE", "SPACE", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineSpace },
	{ "SPACES", "SPACES", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineSpaces },
	{ "STATE", "STATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineState },
	{ "SWAP", "SWAP", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineSwap },
	{ "THEN", "THEN", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineThen },
	{ "TYPE", "TYPE", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineType },
	{ "U*", "U*", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineUStar },
	{ "U.", "U.", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineUDot },
	{ "U/MOD", "U/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineUSlashMod },
	{ "U<", "U<", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineULess },
	{ "UNTIL", "UNTIL", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineUntil },
	{ "UPDATE", "UPDATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineUpdate },
	{ "VARIABLE", "VARIABLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineVariable },
	{ "VOCABULARY", "VOCABULARY", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineVocabulary },
	{ "WHILE", "WHILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineWhile },
	{ "WORD", "WORD", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineWord },
	{ "XOR", "XOR", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineXor },
	{ "[", "[", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineLeftParen },
	{ "[COMPILE]", "[COMPILE]", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineXCompile },
	{ "]", "]", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineRightParen},
	/* Extension Word Sets */
	/* 1. Double Number Word Set */
	{ "2!", "2!", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineTwoStore },
	{ "2@", "2@", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineTwoFetch },
	{ "2CONSTANT", "2CONSTANT", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineTwoConstant },
	{ "2DROP", "2DROP", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineTwoDrop },
	{ "2DUP", "2DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineTwoDup },
	{ "2OVER", "2OVER", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineTwoOver },
	{ "2ROT", "2ROT", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineTwoRot },
	{ "2SWAP", "2SWAP", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineTwoSwap },
	{ "2VARIABLE", "2VARIABLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineTwoVariable },
	{ "D+", "D+", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineDPlus }, /* Nucleus word */
	{ "D-", "D-", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineDMinus },
	{ "D.", "D.", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineDDot },
	{ "D.R", "D.R", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineDDotR },
	{ "D0=", "D0=", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineDZeroEqual },
	{ "D<", "D<", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineDLess }, /* Nucleus word */
	{ "D=", "D=", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineDEqual },
	{ "DABS", "DABS", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineDAbs },
	{ "DMAX", "DMAX", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineDMax },
	{ "DMIN", "DMIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineDMin },
	{ "DNEGATE", "DNEGATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineDnegate },
	{ "DU<", "DU<", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineDULess },
	/* 2. Assembler Word Set */
	{ ";CODE", ";CODE", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineSemicolonCode },
	{ "ASSEMBLER", "ASSEMBLER", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineAssembler },
	{ "CODE", "CODE", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineCode },
	{ "END-CODE", "END-CODE", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineEndCode },
	/* Experimental Proposals */
	/* Reference Word Set */
	{ "!BITS", "!BITS", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineStoreBits },
	{ "**", "**", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineStarStar },
	{ "+BLOCK", "+BLOCK", TRUE, FALSE, FALSE, 0UL, (forthOperation)sninePlusBlock },
	{ "-'", "-'", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineMinusTick },
	{ "-->", "-->", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineTo },
	{ "-MATCH", "-MATCH", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineMatch },
	{ "-TEXT", "-TEXT", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineMinusText },
	{ ".R", ".R", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineDotR },
	{ "/LOOP", "/LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineSlashLoop },
	{ "1+!", "1+!", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineOnePlusStore },
	{ "1-!", "1-!", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineOneMinusStore },
	{ "2*", "2*", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineTwoStar },
	{ "2/", "2/", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineTwoSlash },
	{ ";:", ";:", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineSemicolonColon },
	{ ";S", ";S", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineSemicolonS },
	{ "<>", "<>", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineUnequal },
	{ "<BUILDS", "<BUILDS", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineBuilds },
	{ "<CMOVE", "<CMOVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineLessCmove },
	{ "><", "><", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineveSwap },
	{ ">MOVE<", ">MOVE<", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineveSwapMove },
	{ "@BITS", "@BITS", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineveFetchBits },
	{ "ABORT\"", "ABORT\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineAbortQuote },
	{ "AGAIN", "AGAIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineAgain },
	{ "ASCII", "ASCII", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineAscii },
	{ "ASHIFT", "ASHIFT", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineAShift },
	{ "B/BUF", "B/BUF", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineBSlashBuf },
	{ "BELL", "BELL", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineBell },
	{ "BL", "BL", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineBl },
	{ "BLANKS", "BLANKS", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineBlanks },
	{ "C,", "C,", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineCComma },
	{ "CHAIN", "CHAIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineChain },
	{ "COM", "COM", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineCom },
	{ "CONTINUED", "CONTINUED", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineContinued },
	{ "CUR", "CUR", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineCur },
	{ "DBLOCK", "DBLOCK", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineDBlock },
	{ "DPL", "DPL", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineDpl },
	{ "DUMP", "DUMP", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineDump },
	{ "EDITOR", "EDITOR", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineEditor },
	{ "END", "END", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineEnd },
	{ "ERASE", "ERASE", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineErase },
	{ "FLD", "FLD", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineFld },
	{ "FLUSH", "FLUSH", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineFlush },
	{ "H.", "H.", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineHDot },
	{ "HEX", "HEX", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineHex },
	{ "I'", "I'", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineITick },
	{ "IFEND", "IFEND", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineIfEnd },
	{ "IFTRUE", "IFTRUE", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineIfTrue },
	{ "INDEX", "INDEX", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineIndex },
	{ "INTERPRET", "INTERPRET", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineInterpret },
	{ "K", "K", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineK},
	{ "LAST", "LAST", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineLast},
	{ "LINE", "LINE", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineLine},
	{ "LINELOAD", "LINELOAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineLineLoad},
	{ "LOADS", "LOADS", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineLoads},
	{ "MAP0", "MAP0", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineMap0},
	{ "MASK", "MASK", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineMask},
	{ "MS", "MS", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineMs},
	{ "NAND", "NAND", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineNand},
	{ "NOR", "NOR", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineNor},
	{ "NUMBER", "NUMBER", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineNumber },
	{ "O.", "O.", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineODot },
	{ "OCTAL", "OCTAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineOctal },
	{ "OFFSET", "OFFSET", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineOffset },
	{ "OTHERWISE", "OTHERWISE", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineOtherwise },
	{ "PAGE", "PAGE", TRUE, FALSE, FALSE, 0UL, (forthOperation)sninePage },
	{ "READ-MAP", "READ-MAP", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineReadMap },
	{ "REMEMBER", "REMEMBER", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineRemember },
	{ "REWIND", "REWIND", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineRewind },
	{ "ROTATE", "ROTATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineRotate },
	{ "S0", "S0", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineS0 },
	{ "SET", "SET", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineSet },
	{ "SHIFT", "SHIFT", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineShift },
	{ "SP@", "SP@", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineSPFetch },
	{ "TEXT", "TEXT", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineText },
	{ "THRU", "THRU", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineThru },
	{ "U.R", "U.R", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineUDotR },
	{ "USER", "USER", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineUser },
	{ "VLIST", "VLIST", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineVList },
	{ "WHERE", "WHERE", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineWhere },
	{ "\\LOOP", "\\LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineBackslashLoop },
	{ "H2OFORTH", "H2OFORTH", TRUE, FALSE, FALSE, MAX_FORTHWORD_ID, (forthOperation)NULL }
};
#endif

#if H2O_FORTH_PRIMITIVES == FORTH79_NUC_INTERP_COMP
static const typedef_forthWord forthWords[] = {
	/* Required Word Set, Nucleus Words */
	{ "!", "!", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineStore },
	{ "*/", "*/", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineStarSlash },
	{ "*/MOD", "*/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineStarSlashMod },
	{ "+", "+", TRUE, FALSE, FALSE, 0UL, (forthOperation)sninePlus },
	{ "+!", "+!", TRUE, FALSE, FALSE, 0UL, (forthOperation)sninePlusStore },
	{ "+LOOP", "+LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)sninePlusLoop },
	{ "-", "-", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineMinus },
	{ "/", "/", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineSlash },
	{ "/MOD", "/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineSlashMod },
	{ "0<", "0<", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineZeroLess },
	{ "0=", "0=", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineZeroEqual },
	{ "0>", "0>", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineZeroGreater },
	{ "1+", "1+", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineOnePlus },
	{ "1-", "1-", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineOneMinus },
	{ "2+", "2+", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineTwoPlus },
	{ "2-", "2-", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineTwoMinus },
	{ ":", ":", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineColon },
	{ ";", ";", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineSemicolon },
	{ "<", "<", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineLess },
	{ "=", "=", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineEqual },
	{ ">", ">", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineGreater },
	{ ">R", ">R", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineToR },
	{ "?DUP", "?DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineQDup },
	{ "@", "@", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineFetch },
	{ "ABS", "ABS", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineAbs },
	{ "AND", "AND", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineAnd },
	{ "BEGIN", "BEGIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineBegin },
	{ "C!", "C!", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineCStore },
	{ "C@", "C@", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineCFetch },
	{ "CMOVE", "CMOVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineCMove },
	{ "CONSTANT", "CONSTANT", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineConstant },
	{ "CREATE", "CREATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineCreate },
	{ "DEPTH", "DEPTH", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineDepth },
	{ "DO", "DO", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineDo },
	{ "DOES>", "DOES>", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineDoes },
	{ "DROP", "DROP", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineDrop },
	{ "DUP", "DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineDup },
	{ "ELSE", "ELSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineElse },
	{ "EXECUTE", "EXECUTE", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineExecute },
	{ "EXIT", "EXIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineExit },
	{ "FILL", "FILL", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineFill },
	{ "I", "I", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineI },
	{ "IF", "IF", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineIf },
	{ "J", "J", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineJ },
	{ "LEAVE", "LEAVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineLeave },
	{ "LITERAL", "LITERAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineLiteral },
	{ "LOOP", "LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineLoop },
	{ "MAX", "MAX", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineMax },
	{ "MIN", "MIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineMin },
	{ "MOD", "MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineMod },
	{ "MOVE", "MOVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineMove },
	{ "NEGATE", "NEGATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineNegate },
	{ "NOT", "NOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineNot },
	{ "OR", "OR", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineOr },
	{ "OVER", "OVER", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineOver },
	{ "PICK", "PICK", TRUE, FALSE, FALSE, 0UL, (forthOperation)sninePick },
	{ "R>", "R>", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineRGreater },
	{ "R@", "R@", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineRFetch },
	{ "REPEAT", "REPEAT", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineRepeat },
	{ "ROLL", "ROLL", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineRoll },
	{ "ROT", "ROT", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineRot },
	{ "SWAP", "SWAP", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineSwap },
	{ "THEN", "THEN", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineThen },
	{ "U*", "U*", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineUStar },
	{ "U/MOD", "U/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineUSlashMod },
	{ "UNTIL", "UNTIL", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineUntil },
	{ "VARIABLE", "VARIABLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineVariable },
	{ "WHILE", "WHILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineWhile },
	{ "XOR", "XOR", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineXor },
	/* Extension Word Sets. 1. Double Number Word Set, Nucleus Words */
	{ "D+", "D+", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineDPlus },
	{ "D<", "D<", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineDLess },
	{ "DNEGATE", "DNEGATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineDnegate },
	/* Required Word Set, Interpreter Words */
	{ "#", "#", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineNum },
	{ "#>", "#>", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineNumGreater },
	{ "#S", "#S", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineNumS },
	{ "'", "'", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineTick },
	{ "(", "(", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineParen },
	{ "-TRAILING", "-TRAILING", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineTrailing },
	{ ".", ".", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineDot },
	{ "79-STANDARD", "79-STANDARD", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineSnineStandard },
	{ "<#", "<#", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineLessNum },
	{ ">IN", ">IN", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineToIn },
	{ "?", "?", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineQ },
	{ "ABORT", "ABORT", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineAbort },
	{ "BASE", "BASE", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineBase },
	{ "BLK", "BLK", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineBlk },
	{ "CONTEXT", "CONTEXT", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineContext },
	{ "CONVERT", "CONVERT", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineConvert },
	{ "COUNT", "COUNT", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineCount },
	{ "CR", "CR", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineCr },
	{ "CURRENT", "CURRENT", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineCurrent },
	{ "DECIMAL", "DECIMAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineDecimal },
	{ "EMIT", "EMIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineEmit },
	{ "EXPECT", "EXPECT", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineExpect },
	{ "FIND", "FIND", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineFind },
	{ "FORTH", "FORTH", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineForth },
	{ "HERE", "HERE", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineHere },
	{ "HOLD", "HOLD", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineHold },
	{ "KEY", "KEY", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineKey },
	{ "PAD", "PAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)sninePad },
	{ "QUERY", "QUERY", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineQuery },
	{ "QUIT", "QUIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineQuit },
	{ "SIGN", "SIGN", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineSign },
	{ "SPACE", "SPACE", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineSpace },
	{ "SPACES", "SPACES", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineSpaces },
	{ "TYPE", "TYPE", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineType },
	{ "U.", "U.", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineUDot },
	{ "WORD", "WORD", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineWord },
	/* Required Word Set, Compiler Words */
	{ "+LOOP", "+LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)sninePlusLoop },
	{ ",", ",", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineComma },
	{ ".\"", ".\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineDotQuote },
	{ ":", ":", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineColon },
	{ ";", ";", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineSemicolon },
	{ "ALLOT", "ALLOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineAllot },
	{ "BEGIN", "BEGIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineBegin },
	{ "COMPILE", "COMPILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineCompile },
	{ "CONSTANT", "CONSTANT", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineConstant },
	{ "CREATE", "CREATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineCreate },
	{ "DEFINITIONS", "DEFINITIONS", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineDefinitions },
	{ "DO", "DO", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineDo },
	{ "DOES>", "DOES>", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineDoes },
	{ "ELSE", "ELSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineElse },
	{ "FORGET", "FORGET", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineForget },
	{ "IF", "IF", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineIf },
	{ "IMMEDIATE", "IMMEDIATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineImmediate },
	{ "LITERAL", "LITERAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineLiteral },
	{ "LOOP", "LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineLoop },
	{ "REPEAT", "REPEAT", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineRepeat },
	{ "STATE", "STATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineState },
	{ "THEN", "THEN", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineThen },
	{ "UNTIL", "UNTIL", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineUntil },
	{ "VARIABLE", "VARIABLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineVariable },
	{ "VOCABULARY", "VOCABULARY", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineVocabulary },
	{ "WHILE", "WHILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineWhile },
	{ "[", "[", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineLeftParen },
	{ "[COMPILE]", "[COMPILE]", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineXCompile },
	{ "]", "]", TRUE, FALSE, FALSE, 0UL, (forthOperation)snineRightParen}
};
#endif

#endif
