#ifndef H2OTER1
#define H2OTER1

/* The TERSE ( "Terse Efficient Recursive Stack Engine" or "Terse Efficient Reentrant Stack Engine" ) FORTH */

/* Definitions */

void terseSwab(void);
void terseRotn(void);
void terseVector(void);
void terseLimit(void);
void terseNegStore(void);
void terseRelabs(void);
void terseShow(void);
void terseZeroShow(void);
void terseOneShow(void);
void terseTwoShow(void);
void terseThreeShow(void);
void terseFourShow(void);
void terseFiveShow(void);
void terseSixShow(void);
void terseSevenShow(void);
void terseZeroShowI(void);
void tersePost(void);
void terseOnePost(void);
void terseNumPost(void);
void terseNumToa(void);
void terseClock(void);
void terseErase(void);
void terseOneDot(void);
void terseDraw(void);
void terseBox(void);
void terseEllipse(void);
void terseColor(void);
void terseFlood(void);
void terseVertical(void);
void terseHorizontal(void);
void terseRandom(void);
void terseSow(void);

void terseStore(void);
void terseTick(void);
void terseParen(void);
void terseStar(void);
void tersePlus(void);
void tersePlusStore(void);
void tersePlusBlock(void);
void tersePlusLoop(void);
void terseComma(void);
void terseMinus(void);
void terseTo(void);
void terseDot(void);
void terseDotQuote(void);
void terseDotList(void);
void terseDotNList(void);
void terseSlash(void);
void terseSlashMod(void);
void terseZero(void);
void terseZeroLess(void);
void terseZeroEqual(void);
void terseZeroGreater(void);
void terseZeroEnd(void);
void terseOne(void);
void terseOnePlus(void);
void terseOnePlusStore(void);
void terseOneMinus(void);
void terseOneMinusStore(void);
void terseTwoStar(void);
void terseTwoPlus(void);
void terseTwoMinus(void);
void terseTwoSlash(void);
void terseTwoDrop(void);
void terseTwoDup(void);
void terseTwoSwap(void);
void terseColon(void);
void terseSemicolon(void);
void terseSemicolonS(void);
void terseLess(void);
void terseStartConditionalInterpretation(void);
void terseLessEqual(void);
void terseUnequal(void);
void terseEqual(void);
void terseGreater(void);
void terseGreaterEqual(void);
void terseStopConditionalInterpretation(void);
void terseToR(void);
void terseQ(void);
void terseFetch(void);
void terseAQuote(void);
void terseAbort(void);
void terseAbs(void);
void terseAnd(void);
void terseArray(void);
void terseAsm(void);
void terseBStore(void);
void terseBColon(void);
void terseBFetch(void);
void terseBArray(void);
void terseBase(void);
void terseBegin(void);
void terseBell(void);
void terseBlk(void);
void terseBlock(void);
void terseBMove(void);
void terseBPtr(void);
void terseBTa(void);
void terseBTable(void);
void terseBuffer(void);
void terseBuild(void);
void terseBye(void);
void terseByte(void);
void terseCase(void);
void terseCCalc(void);
void terseCin(void);
void terseCode(void);
void terseCom(void);
void terseConstant(void);
void terseContext(void);
void terseContinued(void);
void terseCopy(void);
void terseCount(void);
void terseCout(void);
void terseCr(void);
void terseCurrent(void);
void terseDecimal(void);
void terseDecimalDelim(void);
void terseDgts(void);
void terseDir(void);
void terseDiskCopy(void);
void terseDLit(void);
void terseDo(void);
void terseDP(void);
void terseDPPlusStore(void);
void terseDPRec(void);
void terseDrop(void);
void terseDump(void);
void terseDup(void);
void terseEDotB(void);
void terseEDotO(void);
void terseEdit(void);
void terseElse(void);
void terseEmpty(void);
void terseEnd(void);
void terseEnter(void);
void terseEraseCore(void);
void terseExec(void);
void terseExpect(void);
void terseFileCopy(void);
void terseFind(void);
void terseFld(void);
void terseFlush(void);
void terseFName(void);
void terseGetC(void);
void terseGoodbye(void);
void terseHDot(void);
void terseHelp(void);
void terseHere(void);
void terseHex(void);
void terseHexList(void);
void terseHexShow(void);
void terseI(void);
void terseIPlus(void);
void terseIf(void);
void terseIfEnd(void);
void terseIfTrue(void);
void terseImmed(void);
void terseInp(void);
void terseIOff(void);
void terseJ(void);
void terseJPlus(void);
void terseK(void);
void terseKPlus(void);
void terseLast(void);
void terseLeave(void);
void terseLine(void);
void terseLineLoad(void);
void terseList(void);
void terseLit(void);
void terseLiteral(void);
void terseLoad(void);
void terseLoop(void);
void terseLOut(void);
void terseMax(void);
void terseMin(void);
void terseMinusWord(void);
void terseMod(void);
void terseMove(void);
void terseNand(void);
void terseNext(void);
void terseNor(void);
void terseNot(void);
void terseNumber(void);
void terseOctal(void);
void terseOr(void);
void terseOtherwise(void);
void terseOutP(void);
void terseOver(void);
void tersePage(void);
void tersePick(void);
void tersePrintOut(void);
void terseProt(void);
void tersePutC(void);
void terseRTo(void);
void terseRepeat(void);
void terseRot(void);
void terseScr(void);
void terseSet(void);
void terseShow(void);
void terseSkip(void);
void terseSPFetch(void);
void terseSpace(void);
void terseSpaces(void);
void terseState(void);
void terseSpacesQ(void);
void terseSType(void);
void terseSwab(void);
void terseSwap(void);
void terseSysCopy(void);
void terseTable(void);
void terseTeco(void);
void terseTFlag(void);
void terseThen(void);
void terseType(void);
void terseUStore(void);
void terseUErr(void);
void terseUpdate(void);
void terseUnProt(void);
void terseVariable(void);
void terseVPtr(void);
void terseWhile(void);
void terseWhere(void);
void terseWord(void);
void terseXor(void);
void terseZeroWord(void);
void terseLeftBracket(void);
void terseLeftBracketLeftBracket(void);
void terseRightBracket(void);
void terseRightBracketRightBracket(void);

typedef void (*forthOperation)(void);

typedef  struct _forthWord {
	const char* forthWordName;
	const char* forthAlternativeName;
	const int interpreted;
	const int immediate;
	const short int implemented;
	const unsigned long forthWordID;
	const forthOperation  forthOpt; // function pointer 
} typedef_forthWord;

/* Variables */
/* This vocabulary is not in the order of the VLIST / WORDS listing! */

static const PROGMEM typedef_forthWord forthWords[] = {
			{ "SWAB", "SWAB", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseSwab }, /* FORTH words of the proposed Video Game System Vocabulary */
			{ "ROTN", "ROTN", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseRotn },
			{ "VECTOR", "VECTOR", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseVector },
			{ "LIMIT", "LIMIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseLimit },
			{ "NEG!", "NEG!", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseNegStore },
			{ "RELABS", "RELABS", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseRelabs },
			{ "SHOW", "SHOW", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseShow },
			{ "0SHOW", "0SHOW", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseZeroShow },
			{ "1SHOW", "1SHOW", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseOneShow },
			{ "2SHOW", "2SHOW", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseTwoShow },
			{ "3SHOW", "3SHOW", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseThreeShow },
			{ "4SHOW", "4SHOW", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseFourShow },
			{ "5SHOW", "5SHOW", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseFiveShow },
			{ "6SHOW", "6SHOW", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseSixShow },
			{ "7SHOW", "7SHOW", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseSevenShow },
			{ "0SHOWI", "0SHOWI", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseZeroShowI },
			{ "POST", "POST", TRUE, FALSE, FALSE, 0UL, (forthOperation)tersePost },
			{ "1POST", "1POST", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseOnePost },
			{ "#POST", "#POST", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseNumPost },
			{ "#TOA", "#TOA", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseNumToa },
			{ "CLOCK", "CLOCK", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseClock },
			{ "ERASE", "ERASE", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseErase },
			{ "1DOT", "1DOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseOneDot },
			{ "DRAW", "DRAW", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseDraw },
			{ "BOX", "BOX", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseBox },
			{ "ELLIPSE", "ELLIPSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseEllipse },
			{ "COLOR", "COLOR", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseColor },
			{ "FLOOD", "FLOOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseFlood },
			{ "VERTICAL", "VERTICAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseVertical },
			{ "HORIZONTAL", "HORIZONTAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseHorizontal },
			{ "RANDOM", "RANDOM", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseRandom },
			{ "SOW", "SOW", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseSow },
			{ "!", "!", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseStore }, /* FORTH kernel words */
			{ "'", "'", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseTick },
			{ "(", "(", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseParen },
			{ "*", "*", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseStar },
			{ "+", "+", TRUE, FALSE, FALSE, 0UL, (forthOperation)tersePlus },
			{ "+!", "+!", TRUE, FALSE, FALSE, 0UL, (forthOperation)tersePlusStore },
			{ "+BLOCK", "+BLOCK", TRUE, FALSE, FALSE, 0UL, (forthOperation)tersePlusBlock },
			{ "+LOOP", "+LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)tersePlusLoop },
			{ ",", ",", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseComma },
			{ "-", "-", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseMinus },
			{ "-->", "-->", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseTo },
			{ ".", ".", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseDot },
			{ ".\"", ".\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseDotQuote },
			{ ".LIST", ".LIST", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseDotList },
			{ ".NLIST", ".NLIST", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseDotNList },
			{ "/", "/", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseSlash },
			{ "/MOD", "/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseSlashMod },
			{ "0", "0", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseZero },
			{ "0<", "0<", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseZeroLess },
			{ "0=", "0=", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseZeroEqual },
			{ "0>", "0>", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseZeroGreater },
			{ "0END", "0END", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseZeroEnd },
			{ "1", "1", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseOne },
			{ "1+", "1+", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseOnePlus },
			{ "1+!", "1+!", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseOnePlusStore },
			{ "1-", "1-", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseOneMinus },
			{ "1-!", "1-!", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseOneMinusStore },
			{ "2*", "2*", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseTwoStar },
			{ "2+", "2+", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseTwoPlus },
			{ "2-", "2-", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseTwoMinus },
			{ "2/", "2/", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseTwoSlash },
			{ "2DROP", "2DROP", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseTwoDrop },
			{ "2DUP", "2DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseTwoDup },
			{ "2SWAP", "2SWAP", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseTwoSwap },
			{ ":", ":", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseColon },
			{ ";", ";", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseSemicolon },
			{ ";S", ";S", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseSemicolonS },
			{ "<", "<", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseLess },
			{ "<<", "<<", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseStartConditionalInterpretation },
			{ "<=", "<=", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseLessEqual },
			{ "<>", "<>", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseUnequal },
			{ "=", "=", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseEqual },
			{ ">", ">", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseGreater },
			{ ">=", ">=", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseGreaterEqual },
			{ ">>", ">>", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseStopConditionalInterpretation },
			{ ">R", ">R", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseToR },
			{ "?", "?", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseQ },
			{ "@", "@", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseFetch },
			{ "A\"", "A\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseAQuote },
			{ "ABORT", "ABORT", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseAbort },
			{ "ABS", "ABS", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseAbs },
			{ "AND", "AND", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseAnd },
			{ "ARRAY", "ARRAY", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseArray },
			{ "ASM", "ASM", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseAsm },
			{ "B!", "B!", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseBStore },
			{ "B:", "B:", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseBColon },
			{ "B@", "B@", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseBFetch },
			{ "BARRAY", "BARRAY", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseBArray },
			{ "BASE", "BASE", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseBase },
			{ "BEGIN", "BEGIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseBegin },
			{ "BELL", "BELL", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseBell },
			{ "BLK", "BLK", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseBlk },
			{ "BLOCK", "BLOCK", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseBlock },
			{ "BMOVE", "BMOVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseBMove },
			{ "BPTR", "BPTR", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseBPtr },
			{ "BTA", "BTA", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseBTa },
			{ "BTABLE", "BTABLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseBTable },
			{ "BUFFER", "BUFFER", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseBuffer },
			{ "BUILD", "BUILD", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseBuild },
			{ "BYE", "BYE", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseBye },
			{ "BYTE", "BYTE", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseByte },
			{ "CASE", "CASE", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseCase },
			{ "CCALC", "CCALC", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseCCalc },
			{ "CIN", "CIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseCin },
			{ "CODE", "CODE", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseCode },
			{ "COM", "COM", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseCom },
			{ "CONSTANT", "CONSTANT", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseConstant },
			{ "CONTEXT", "CONTEXT", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseContext },
			{ "CONTINUED", "CONTINUED", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseContinued },
			{ "COPY", "COPY", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseCopy },
			{ "COUNT", "COUNT", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseCount },
			{ "COUT", "COUT", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseCout },
			{ "CR", "CR", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseCr },
			{ "CURRRENT", "CURRRENT", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseCurrent },
			{ "DECIMAL", "DECIMAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseDecimal },
			{ "DELIM", "DELIM", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseDecimalDelim },
			{ "DGTS", "DGTS", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseDgts },
			{ "DIR", "DIR", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseDir },
			{ "DISKCOPY", "DISKCOPY", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseDiskCopy },
			{ "DLIT", "DLIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseDLit },
			{ "DO", "DO", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseDo },
			{ "DP", "DP", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseDP },
			{ "DP+!", "DP+!", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseDPPlusStore },
			{ "DPREC", "DPREC", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseDPRec },
			{ "DROP", "DROP", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseDrop },
			{ "DUMP", "DUMP", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseDump },
			{ "DUP", "DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseDup },
			{ "E.B", "E.B", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseEDotB },
			{ "E.O", "E.O", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseEDotO },
			{ "EDIT", "EDIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseEdit },
			{ "ELSE", "ELSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseElse },
			{ "EMPTY", "EMPTY", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseEmpty },
			{ "END", "END", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseEnd },
			{ "ENTER", "ENTER", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseEnter },
			{ "ERASE-CORE", "ERASE-CORE", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseEraseCore },
			{ "EXEC", "EXEC", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseExec },
			{ "EXPECT", "EXPECT", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseExpect },
			{ "FILECOPY", "FILECOPY", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseFileCopy },
			{ "FIND", "FIND", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseFind },
			{ "FLD", "FLD", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseFld },
			{ "FLUSH", "FLUSH", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseFlush },
			{ "FNAME", "FNAME", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseFName },
			{ "GETC", "GETC", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseGetC },
			{ "GOODBYE", "GOODBYE", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseGoodbye },
			{ "H.", "H.", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseHDot },
			{ "HELP", "HELP", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseHelp },
			{ "HERE", "HERE", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseHere },
			{ "HEX", "HEX", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseHex },
			{ "HEXLIST", "HEXLIST", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseHexList },
			{ "HEXSHOW", "HEXSHOW", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseHexShow },
			{ "I", "I", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseI },
			{ "I+", "I+", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseIPlus },
			{ "IF", "IF", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseIf },
			{ "IFEND", "IFEND", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseIfEnd },
			{ "IFTRUE", "IFTRUE", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseIfTrue },
			{ "IMMED", "IMMED", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseImmed },
			{ "INP", "INP", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseInp },
			{ "IOFF", "IOFF", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseIOff },
			{ "J", "J", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseJ },
			{ "J+", "J+", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseJPlus },
			{ "K", "K", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseK },
			{ "K+", "K+", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseKPlus },
			{ "LAST", "LAST", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseLast },
			{ "LEAVE", "LEAVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseLeave },
			{ "LINE", "LINE", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseLine },
			{ "LINELOAD", "LINELOAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseLineLoad },
			{ "LIST", "LIST", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseList },
			{ "LIT", "LIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseLit },
			{ "LITERAL", "LITERAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseLiteral },
			{ "LOAD", "LOAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseLoad },
			{ "LOOP", "LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseLoop },
			{ "LOUT", "LOUT", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseLOut },
			{ "MAX", "MAX", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseMax },
			{ "MIN", "MIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseMin },
			{ "MINUS", "MINUS", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseMinusWord },
			{ "MOD", "MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseMod },
			{ "MOVE", "MOVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseMove },
			{ "NAND", "NAND", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseNand },
			{ "NEXT", "NEXT", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseNext },
			{ "NOR", "NOR", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseNor },
			{ "NOT", "NOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseNot },
			{ "NUMBER", "NUMBER", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseNumber },
			{ "OCTAL", "OCTAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseOctal },
			{ "OR", "OR", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseOr },
			{ "OTHERWISE", "OTHERWISE", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseOtherwise },
			{ "OUTP", "OUTP", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseOutP },
			{ "OVER", "OVER", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseOver },
			{ "PAGE", "PAGE", TRUE, FALSE, FALSE, 0UL, (forthOperation)tersePage },
			{ "PICK", "PICK", TRUE, FALSE, FALSE, 0UL, (forthOperation)tersePick },
			{ "PRINTOUT", "PRINTOUT", TRUE, FALSE, FALSE, 0UL, (forthOperation)tersePrintOut },
			{ "PROT", "PROT", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseProt },
			{ "PUTC", "PUTC", TRUE, FALSE, FALSE, 0UL, (forthOperation)tersePutC },
			{ "R>", "R>", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseRTo },
			{ "REPEAT", "REPEAT", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseRepeat },
			{ "ROT", "ROT", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseRot },
			{ "SCR", "SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseScr },
			{ "SET", "SET", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseSet },
			{ "SHOW", "SHOW", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseShow },
			{ "SKIP", "SKIP", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseSkip },
			{ "SP@", "SP@", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseSPFetch },
			{ "SPACE", "SPACE", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseSpace },
			{ "SPACES", "SPACES", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseSpaces },
			{ "STATE", "STATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseState },
			{ "SPACES?", "SPACES?", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseSpacesQ },
			{ "STYPE", "STYPE", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseSType },
			{ "SWAB", "SWAB", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseSwab },
			{ "SWAP", "SWAP", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseSwap },
			{ "SYSCOPY", "SYSCOPY", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseSysCopy },
			{ "TABLE", "TABLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseTable },
			{ "TECO", "TECO", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseTeco },
			{ "TFLAG", "TFLAG", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseTFlag },
			{ "THEN", "THEN", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseThen },
			{ "TYPE", "TYPE", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseType },
			{ "U!", "U!", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseUStore },
			{ "UERR", "UERR", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseUErr },
			{ "UPDATE", "UPDATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseUpdate },
			{ "UNPROT", "UNPROT", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseUnProt },
			{ "VARIABLE", "VARIABLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseVariable },
			{ "VPTR", "VPTR", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseVPtr },
			{ "WHILE", "WHILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseWhile },
			{ "WHERE", "WHERE", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseWhere },
			{ "WORD", "WORD", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseWord },
			{ "XOR", "XOR", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseXor },
			{ "ZERO", "ZERO", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseZeroWord },
			{ "[", "[", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseLeftBracket },
			{ "[[", "[[", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseLeftBracketLeftBracket },
			{ "]", "]", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseRightBracket },
			{ "]]", "]]", TRUE, FALSE, FALSE, 0UL, (forthOperation)terseRightBracketRightBracket },
			{ "H2OFORTH", "H2OFORTH", TRUE, FALSE, FALSE, MAX_WORDID, (forthOperation)NULL }
};

#endif
