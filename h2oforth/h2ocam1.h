#ifndef H2OCAM1
#define H2OCAM1

/* The "CamelForth" FORTH */

/* Definitions */

void camelExit(void);
void camelExecute(void);
void camelLit(void);
void camelDup(void);
void camelQDup(void);
void camelDrop(void);
void camelSwap(void);
void camelOver(void);
void camelRot(void);
void camelNip(void);
void camelTuck(void);
void camelToR(void);
void camelRFrom(void);
void camelRFetch(void);
void camelSPFetch(void);
void camelSPStore(void);
void camelRPfetch(void);
void camelRPStore(void);
void camelFetch(void);
void camelStore(void);
void camelCFetch(void);
void camelCStore(void);
void camelIFetch(void);
void camelIStore(void);
void camelICFetch(void);
void camelICStore(void);
void camelHFetch(void);
void camelHStore(void);
void camelHCFetch(void);
void camelHCStore(void);
void camelPlus(void);
void camelPlusStore(void);
void camelMPlus(void);
void camelMinus(void);
void camelMult(void);
void camelDiv(void);
void camelAnd(void);
void camelOr(void);
void camelXor(void);
void camelInvert(void);
void camelNegate(void);
void camelOnePlus(void);
void camelOneMinus(void);
void camelSwapBytes(void);
void camelTwoStar(void);
void camelTwoSlash(void);
void camelLShift(void);
void camelRShift(void);
void camelZeroEqual(void);
void camelZeroLess(void);
void camelEqual(void);
void camelNotEqual(void);
void camelLess(void);
void camelGreater(void);
void camelULess(void);
void camelUGreater(void);
void camelUBranch(void);
void camelBranch(void);
void camelQBranch(void);
void camelZPlusLoop(void);
void camelZLoop(void);
void camelZdo(void);
void camelI(void);
void camelJ(void);
void camelUnLoop(void);
void camelUmStar(void);
void camelUmSlashMod(void);
void camelFill(void);
void camelCMove(void);
void camelCMoveUp(void);
void camelIToD(void);
void camelSkip(void);
void camelScan(void);
void camelSEqual(void);
void camelNEqual(void);
void camelKey(void);
void camelEmit(void);
void camelKeyQ(void);
void camelDotHH(void);
void camelDotHHH(void);
void camelDotS(void);
void camelDump(void);
void camelBye(void);
/* High level definitions */
void camelU0(void);
void camelToIN(void);
void camelBase(void);
void camelState(void);
void camelDp(void);
void camelTickSource(void);
void camelLatest(void);
void camelHp(void);
void camelLp(void);
void camelIdp(void);
void camelNewest(void);
void camelUInit(void);
void camelNInit(void);
void camelPad(void);
void camelL0(void);
void camelS0(void);
void camelR0(void);
void camelTib(void);
void camelTibSize(void);
void camelZero(void);
void camelOne(void);
void camelTwo(void);
void camelThree(void);
void camelMinusOne(void);
void camelMinusOne(void);
void camelCell(void);
void camelHere(void);
void camelAllot(void);
void camelComma(void);
void camelCComma(void);
void camelAligned(void);
void camelAlign(void);
void camelCellPlus(void);
void camelCharPlus(void);
void camelToBody(void);
void camelCommaXt(void);
void camelStoreCF(void);
void camelCommaCF(void);
void camelStoreColon(void);
void camelCommaExit(void);
void camelCommaBranch(void);
void camelCommaDest(void);
void camelStoreDest(void);
void camelCommaNone(void);
void camelTwoFetch(void);
void camelTwoStore(void);
void camelTwoDrop(void);
void camelTwoDup(void);
void camelTwoSwap(void);
void camelTwoOver(void);
void camelSToD(void);
void camelAbs(void);
void camelDNegate(void);
void camelQDNegate(void);
void camelDAbs(void);
void camelMStar(void);
void camelSMSlashREM(void);
void camelFMSlashMod(void);
void camelSlashMod(void);
void camelMod(void);
void camelStarSlashMod(void);
void camelStarSlash(void);
void camelMax(void);
void camelMin(void);
void camelUMax(void);
void camelUMin(void);
void camelCells(void);
void camelCount(void);
void camelCR(void);
void camelSpace(void);
void camelSpaces(void);
void camelAccept(void);
void camelType(void);
void camelUDSlashMod(void);
void camelUDStar(void);
void camelHold(void);
void camelLessNum(void);
void camelToDigit(void);
void camelNum(void);
void camelNums(void);
void camelNumGreater(void);
void camelSign(void);
void camelUDot(void);
void camelDot(void);
void camelDecimal(void);
void camelHex(void);
void camelSource(void);
void camelSlashString(void);
void camelToCounted(void);
void camelAdrToIN(void);
void camelParse(void);
void camelWord(void);
void camelZSQuote(void);
void camelSQuote(void);
void camelDotQuote(void);
void camelNFAToLFA(void);
void camelNFAToCFA(void);
void camelImmedQ(void);
void camelFind(void);
void camelLiteral(void);
void camelDigitQ(void);
void camelQSign(void);
void camelToNumber(void);
void camelQNumber(void);
void camelInterpret(void);
void camelEvaluate(void);
void camelQuit(void);
void camelAbort(void);
void camelQAbort(void);
void camelAbortQuote(void);
void camelTick(void);
void camelChar(void);
void camelXChar(void);
void camelParen(void);
void camelHeader(void);
void camelBuilds(void);
void camelVariable(void);
void camelConstant(void);
void camelUser(void);
void camelCreate(void);
void camelZDoes(void);
void camelRecurse(void);
void camelLeftBracket(void);
void camelRightBracket(void);
void camelHide(void);
void camelReveal(void);
void camelImmediate(void);
void camelColon(void);
void camelSemicolon(void);
void camelXTick(void);
void camelPostpone(void);
void camelCompile(void);
void camelIf(void);
void camelThen(void);
void camelElse(void);
void camelBegin(void);
void camelUntil(void);
void camelAgain(void);
void camelWhile(void);
void camelRepeat(void);
void camelToL(void);
void camelLFrom(void);
void camelDo(void);
void camelEndLoop(void);
void camelLoop(void);
void camelPlusLoop(void);
void camelLeave(void);
void camelWithin(void);
void camelMove(void);
void camelDepth(void);
void camelEnvironmentQ(void);
void camelMarker(void);

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
			{ "EXIT", "EXIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelExit }, 
			{ "EXECUTE", "EXECUTE", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelExecute }, 
			{ "lit", "lit", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelLit }, 
			{ "DUP", "DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelDup }, 
			{ "?DUP", "?DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelQDup }, 
			{ "DROP", "DROP", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelDrop }, 
			{ "SWAP", "SWAP", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelSwap }, 
			{ "OVER", "OVER", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelOver }, 
			{ "ROT", "ROT", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelRot }, 
			{ "NIP", "NIP", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelNip }, 
			{ "TUCK", "TUCK", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelTuck }, 
			{ ">R", ">R", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelToR }, 
			{ "R>", "R>", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelRFrom }, 
			{ "R@", "R@", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelRFetch }, 
			{ "SP@", "SP@", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelSPFetch }, 
			{ "SP!", "SP!", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelSPStore }, 
			{ "RP@", "RP@", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelRPfetch }, 
			{ "RP!", "RP!", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelRPStore }, 
			{ "@", "@", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelFetch }, 
			{ "!", "!", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelStore }, 
			{ "C@", "C@", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelCFetch }, 
			{ "C!", "C!", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelCStore }, 
			{ "I@", "I@", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelIFetch }, 
			{ "I!", "I!", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelIStore }, 
			{ "IC@", "IC@", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelICFetch }, 
			{ "IC!", "IC!", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelICStore }, 
			{ "H@", "H@", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelHFetch }, 
			{ "H!", "H!", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelHStore }, 
			{ "HC@", "HC@", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelHCFetch }, 
			{ "HC!", "HC!", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelHCStore }, 
			{ "+", "+", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelPlus }, 
			{ "+!", "+!", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelPlusStore }, 
			{ "M+", "M+", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelMPlus }, 
			{ "-", "-", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelMinus }, 
			{ "*", "*", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelMult }, 
			{ "/", "/", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelDiv }, 
			{ "AND", "AND", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelAnd }, 
			{ "OR", "OR", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelOr }, 
			{ "XOR", "XOR", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelXor }, 
			{ "INVERT", "INVERT", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelInvert }, 
			{ "NEGATE", "NEGATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelNegate }, 
			{ "1+", "1+", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelOnePlus }, 
			{ "1-", "1-", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelOneMinus }, 
			{ "><", "><", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelSwapBytes }, 
			{ "2*", "2*", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelTwoStar }, 
			{ "2/", "2/", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelTwoSlash }, 
			{ "LSHIFT", "LSHIFT", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelLShift }, 
			{ "RSHIFT", "RSHIFT", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelRShift }, 
			{ "0=", "0=", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelZeroEqual }, 
			{ "0<", "0<", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelZeroLess }, 
			{ "=", "=", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelEqual }, 
			{ "<>", "<>", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelNotEqual }, 
			{ "<", "<", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelLess }, 
			{ ">", ">", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelGreater }, 
			{ "U<", "U<", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelULess }, 
			{ "U>", "U>", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelUGreater }, 
			{ "branch", "branch", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelBranch }, 
			{ "?branch", "?branch", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelQBranch }, 
			{ "(+loop)", "(+loop)", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelZPlusLoop }, 
			{ "(loop)", "(loop)", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelZLoop }, 
			{ "(do)", "(do)", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelZdo }, 
			{ "I", "I", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelI }, 
			{ "J", "J", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelJ }, 
			{ "UNLOOP", "UNLOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelUnLoop }, 
			{ "UM*", "UM*", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelUmStar }, 
			{ "UM/MOD", "UM/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelUmSlashMod }, 
			{ "FILL", "FILL", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelFill }, 
			{ "CMOVE", "CMOVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelCMove }, 
			{ "CMOVE>", "CMOVE>", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelCMoveUp }, 
			{ "I->D", "I->D", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelIToD}, 
			{ "SKIP", "SKIP", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelSkip }, 
			{ "SCAN", "SCAN", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelScan }, 
			{ "S=", "S=", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelSEqual }, 
			{ "N=", "N=", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelNEqual }, 
			{ "KEY", "KEY", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelKey }, 
			{ "EMI", "EMI", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelEmit }, 
			{ "KEY?", "KEY?", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelKeyQ }, 
			{ ".", ".", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelDot }, 
			{ ".HH", ".HH", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelDotHH }, 
			{ ".HHHH", ".HHHH", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelDotHHH }, 
			{ ".S", ".S", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelDotS }, 
			{ "DUMP", "DUMP", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelDump  }, 
			{ "BYE", "BYE", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelBye },
			/* high level definitions */
			{ "U0", "U0", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelU0 },
			{ "IN", "IN", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelToIN },
			{ "BASE", "BASE", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelBase },
			{ "STATE", "STATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelState },
			{ "DP", "DP", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelDp },
			{ "SOURCE", "SOURCE", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelTickSource },
			{ "LATEST", "LATEST", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelLatest },
			{ "HP", "HP", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelHp },
			{ "LP", "LP", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelLp },
			{ "IDP", "IDP", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelIdp },
			{ "NEWEST", "NEWEST", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelNewest },
			{ "UINIT", "UINIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelUInit },
			{ "#INIT", "#INIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelNInit },
			{ "PAD", "PAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelPad },
			{ "L0", "L0", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelL0 },
			{ "S0", "S0", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelS0 },
			{ "R0", "R0", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelR0 },
			{ "TIB", "TIB", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelTib },
			{ "TIBSIZE", "TIBSIZE", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelTibSize },
			{ "0", "0", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelZero },
			{ "1", "1", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelOne },
			{ "2", "2", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelTwo },
			{ "3", "3", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelThree },
			{ "-1", "-1", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelMinusOne },
			{ "CELL", "CELL", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelMinusOne },
			{ "CHARS", "CHARS", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelCell },
			{ "HERE", "HERE", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelHere },
			{ "ALLOT", "ALLOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelAllot },
			{ ",", ",", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelComma },
			{ "C,", "C,", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelCComma },
			{ "ALIGNED", "ALIGNED", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelAligned },
			{ "ALIGN", "ALIGN", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelAlign },
			{ "CELL+", "CELL+", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelCellPlus },
			{ "CHAR+", "CHAR+", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelCharPlus },
			{ ">BODY", ">BODY", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelToBody },
			{ "COMPILE,", "COMPILE,", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelCommaXt },
			{ "!CF", "!CF", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelStoreCF },
			{ ",CF", ",CF", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelCommaCF },
			{ "!COLON", "!COLON", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelStoreColon },
			{ ",EXIT", ",EXIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelCommaExit },
			{ ",BRANCH", ",BRANCH", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelCommaBranch },
			{ ",DEST", ",DEST", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelCommaDest },
			{ "!DEST", "!DEST", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelStoreDest },
			{ ",NONE", ",NONE", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelCommaNone },
			{ "2@", "2@", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelTwoFetch },
			{ "2!", "2!", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelTwoStore },
			{ "2DROP", "2DROP", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelTwoDrop },
			{ "2DUP", "2DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelTwoDup },
			{ "2SWAP", "2SWAP", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelTwoSwap },
			{ "2OVER", "2OVER", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelTwoOver },
			{ "S>D", "S>D", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelSToD },
			{ "ABS", "ABS", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelAbs },
			{ "DNEGATE", "DNEGATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelDNegate },
			{ "?DNEGATE", "?DNEGATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelQDNegate },
			{ "DABS", "DABS", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelDAbs },
			{ "M*", "M*", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelMStar },
			{ "SM/REM", "SM/REM", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelSMSlashREM },
			{ "FM/MOD", "FM/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelFMSlashMod },
			{ "/MOD", "/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelSlashMod },
			{ "MOD", "MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelMod },
			{ "*/MOD", "*/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelStarSlashMod },
			{ "*/", "*/", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelStarSlash },
			{ "MAX", "MAX", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelMax },
			{ "MIN", "MIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelMin },
			{ "UMAX", "UMAX", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelUMax },
			{ "UMIN", "UMIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelUMin },
			{ "CELLS", "CELLS", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelCells },
			{ "COUNT", "COUNT", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelCount },
			{ "CR", "CR", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelCR },
			{ "SPACE", "SPACE", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelSpace },
			{ "SPACES", "SPACES", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelSpaces },
			{ "ACCEPT", "ACCEPT", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelAccept },
			{ "TYPE", "TYPE", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelType },
			{ "UD/MOD", "UD/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelUDSlashMod },
			{ "UD*", "UD*", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelUDStar },
			{ "HOLD", "HOLD", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelHold },
			{ "<#", "<#", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelLessNum },
			{ ">DIGIT", ">DIGIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelToDigit },
			{ "#", "#", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelNum },
			{ "#S", "#S", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelNums },
			{ "#>", "#>", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelNumGreater },
			{ "SIGN", "SIGN", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelSign },
			{ "U.", "U.", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelUDot },
			{ ".", ".", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelDot },
			{ "DECIMAL", "DECIMAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelDecimal },
			{ "HEX", "HEX", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelHex },
			{ "SOURCE", "SOURCE", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelSource },
			{ "/STRING", "/STRING", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelSlashString },
			{ ">COUNTED", ">COUNTED", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelToCounted },
			{ ">IN", ">IN", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelAdrToIN },
			{ "PARSE", "PARSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelParse },
			{ "WORD", "WORD", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelWord },
			{ "(S\")", "(S\")", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelZSQuote },
			{ "S\"", "S\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelSQuote },
			{ ".\"", ".\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelDotQuote },
			{ "NFA>LFA", "NFA>LFA", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelNFAToLFA },
			{ "NFA>CFA", "NFA>CFA", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelNFAToCFA },
			{ "IMMED?", "IMMED?", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelImmedQ },
			{ "FIND", "FIND", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelFind },
			{ "LITERAL", "LITERAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelLiteral },
			{ "DIGIT?", "DIGIT?", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelDigitQ },
			{ "?SIGN", "?SIGN", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelQSign },
			{ ">NUMBER", ">NUMBER", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelToNumber },
			{ "?NUMBER", "?NUMBER", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelQNumber },
			{ "INTERPRET", "INTERPRET", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelInterpret },
			{ "EVALUATE", "EVALUATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelEvaluate },
			{ "QUIT", "QUIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelQuit },
			{ "ABORT", "ABORT", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelAbort },
			{ "?ABORT", "?ABORT", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelQAbort },
			{ "ABORT\"", "ABORT\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelAbortQuote },
			{ "'", "'", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelTick },
			{ "CHAR", "CHAR", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelChar },
			{ "[CHAR]", "[CHAR]", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelXChar },
			{ "(", "(", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelParen },
			{ "HEADER", "HEADER", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelHeader },
			{ "<BUILDS", "<BUILDS", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelBuilds },
			{ "VARIABLE", "VARIABLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelVariable },
			{ "CONSTANT", "CONSTANT", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelConstant },
			{ "USER", "USER", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelUser },
			{ "CREATE", "CREATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelCreate },
			{ "(DOES>)", "(DOES>)", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelZDoes },
			{ "RECURSE", "RECURSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelRecurse },
			{ "[", "[", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelLeftBracket },
			{ "]", "]", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelRightBracket },
			{ "HIDE", "HIDE", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelHide },
			{ "REVEAL", "REVEAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelReveal },
			{ "IMMEDIATE", "IMMEDIATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelImmediate },
			{ ":", ":", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelColon },
			{ ";", ";", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelSemicolon },
			{ "[']", "[']", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelXTick },
			{ "POSTPONE", "POSTPONE", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelPostpone },
			{ "COMPILE", "COMPILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelCompile },
			{ "IF", "IF", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelIf },
			{ "THEN", "THEN", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelThen },
			{ "ELSE", "ELSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelElse },
			{ "BEGIN", "BEGIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelBegin },
			{ "UNTIL", "UNTIL", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelUntil },
			{ "AGAIN", "AGAIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelAgain },
			{ "WHILE", "WHILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelWhile },
			{ "REPEAT", "REPEAT", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelRepeat },
			{ ">L", ">L", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelToL },
			{ "L>", "L>", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelLFrom },
			{ "DO", "DO", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelDo },
			{ "ENDLOOP", "ENDLOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelEndLoop },
			{ "LOOP", "LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelLoop },
			{ "+LOOP", "+LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelPlusLoop },
			{ "LEAVE", "LEAVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelLeave },
			{ "WITHIN", "WITHIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelWithin },
			{ "MOVE", "MOVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelMove },
			{ "DEPTH", "DEPTH", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelDepth },
			{ "ENVIRONMENT?", "ENVIRONMENT?", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelEnvironmentQ },
			{ "MARKER", "MARKER", TRUE, FALSE, FALSE, 0UL, (forthOperation)camelMarker },
			{ "H2OFORTH", "H2OFORTH", TRUE, FALSE, FALSE, MAX_FORTHWORD_ID, (forthOperation)NULL }
};
#endif
