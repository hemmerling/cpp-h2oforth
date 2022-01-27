#ifndef H2ORCA2
#define H2ORCA2

/* Forth Inc.'s "RCA1802 microFORTH" FORTH */

/* Primitives */

/* Definitions */
void rcamicroImmediate(void) {
#if defined (__DEBUG__)
	printf("rcamicroImmediate\n");
#endif
}

void rcamicroParen(void) {
#if defined (__DEBUG__)
	printf("rcamicroParen\n");
#endif
}

void rcamicroEightStar(void) {
#if defined (__DEBUG__)
	printf("rcamicroEightStar\n");
#endif
}

void rcamicroLoad(void) {
#if defined (__DEBUG__)
	printf("rcamicroLoad\n");
#endif
}

void rcamicroBuilds(void) {
#if defined (__DEBUG__)
	printf("rcamicroBuilds\n");
#endif
}

void rcamicroBlock(void) {
#if defined (__DEBUG__)
	printf("rcamicroBlock\n");
#endif
}

void rcamicroTick(void) {
#if defined (__DEBUG__)
	printf("rcamicroTick\n");
#endif
}

void rcamicroEraseCore(void) {
#if defined (__DEBUG__)
	printf("rcamicroEraseCore\n");
#endif
}

void rcamicroFlush(void) {
#if defined (__DEBUG__)
	printf("rcamicroFlush\n");
#endif
}

void rcamicroTask(void) {
#if defined (__DEBUG__)
	printf("rcamicroTask\n");
#endif
}

/* Vocabulary Assembler */
void rcamicroVanish(void) {
#if defined (__DEBUG__)
	printf("rcamicroVanish\n");
#endif
}

void rcamicroCode(void) {
#if defined (__DEBUG__)
	printf("rcamicroCode\n");
#endif
}

void rcamicroColonCode(void) {
#if defined (__DEBUG__)
	printf("rcamicroColonCode\n");
#endif
}

void rcamicroPage(void) {
#if defined (__DEBUG__)
	printf("rcamicroPage\n");
#endif
}

void rcamicroOctal(void) {
#if defined (__DEBUG__)
	printf("rcamicroOctal\n");
#endif
}

void rcamicroDecimal(void) {
#if defined (__DEBUG__)
	printf("rcamicroDecimal\n");
#endif
}

void rcamicroHex(void) {
#if defined (__DEBUG__)
	printf("rcamicroHex\n");
#endif
}

void rcamicroCVariable(void) {
#if defined (__DEBUG__)
	printf("rcamicroCVariable\n");
#endif
}

void rcamicroVariable(void) {
#if defined (__DEBUG__)
	printf("rcamicroVariable\n");
#endif
}

/* Arithmetic Operators */
void rcamicroGreater(void) {
#if defined (__DEBUG__)
	printf("rcamicroGreater\n");
#endif
}

void rcamicroMStar(void) {
#if defined (__DEBUG__)
	printf("rcamicroMStar\n");
#endif
}

void rcamicroMSlashMod(void) {
#if defined (__DEBUG__)
	printf("rcamicroMSlashMod\n");
#endif
}

void rcamicroStarSlashMod(void) {
#if defined (__DEBUG__)
	printf("rcamicroStarSlashMod\n");
#endif
}

void rcamicroStarSlash(void) {
#if defined (__DEBUG__)
	printf("rcamicroStarSlashMod\n");
#endif
}

void rcamicroSlashMod(void) {
#if defined (__DEBUG__)
	printf("rcamicroSlashMod\n");
#endif
}

void rcamicroMod(void) {
#if defined (__DEBUG__)
	printf("rcamicroMod\n");
#endif
}

void rcamicroStar(void) {
#if defined (__DEBUG__)
	printf("rcamicroStar\n");
#endif
}

void rcamicroSlash(void) {
#if defined (__DEBUG__)
	printf("rcamicroSlash\n");
#endif
}

void rcamicroMax(void) {
#if defined (__DEBUG__)
	printf("rcamicroMax\n");
#endif
}

void rcamicroMin(void) {
#if defined (__DEBUG__)
	printf("rcamicroMin\n");
#endif
}

void rcamicroNum(void) {
#if defined (__DEBUG__)
	printf("rcamicroNum\n");
#endif
}

void rcamicroPlusC(void) {
#if defined (__DEBUG__)
	printf("rcamicroPlusC\n");
#endif
}

void rcamicroOneRg(void) {
#if defined (__DEBUG__)
	printf("rcamicroOneRg\n");
#endif
}

void rcamicroAlu(void) {
#if defined (__DEBUG__)
	printf("rcamicroAlu\n");
#endif
}

/* Macros */
void rcamicroEntry(void) {
#if defined (__DEBUG__)
	printf("rcamicroEntry\n");
#endif
}

void rcamicroNext(void) {
#if defined (__DEBUG__)
	printf("rcamicroNext\n");
#endif
}

void rcamicroZeroNumLd(void) {
#if defined (__DEBUG__)
	printf("rcamicroZeroNumLd\n");
#endif
}

void rcamicroDst(void) {
#if defined (__DEBUG__)
	printf("rcamicroDst\n");
#endif
}

void rcamicroPush(void) {
#if defined (__DEBUG__)
	printf("rcamicroPush\n");
#endif
}

/* Transfers */
void rcamicroEfl(void) {
#if defined (__DEBUG__)
	printf("rcamicroEfl\n");
#endif
}

void rcamicroLess(void) {
#if defined (__DEBUG__)
	printf("rcamicroLess\n");
#endif
}

void rcamicroZeroLess(void) {
#if defined (__DEBUG__)
	printf("rcamicroZeroLess\n");
#endif
}

void rcamicroIf(void) {
#if defined (__DEBUG__)
	printf("rcamicroIf\n");
#endif
}

void rcamicroThen(void) {
#if defined (__DEBUG__)
	printf("rcamicroThen\n");
#endif
}

void rcamicroElse(void) {
#if defined (__DEBUG__)
	printf("rcamicroElse\n");
#endif
}

void rcamicroEnd(void) {
#if defined (__DEBUG__)
	printf("rcamicroEnd\n");
#endif
}

void rcamicroBr(void) {
#if defined (__DEBUG__)
	printf("rcamicroBr\n");
#endif
}

void rcamicroLs(void) {
#if defined (__DEBUG__)
	printf("rcamicroLs\n");
#endif
}

/* Compiler */
void rcamicroYMark(void) {
#if defined (__DEBUG__)
	printf("rcamicroYMark\n");
#endif
}

void rcamicroYThen(void) {
#if defined (__DEBUG__)
	printf("rcamicroYThen\n");
#endif
}

void rcamicroDo(void) {
#if defined (__DEBUG__)
	printf("rcamicroDo\n");
#endif
}

void rcamicroLoop(void) {
#if defined (__DEBUG__)
	printf("rcamicroLoop\n");
#endif
}

void rcamicroPlusLoop(void) {
#if defined (__DEBUG__)
	printf("rcamicroPlusLoop\n");
#endif
}

void rcamicroWhile(void) {
#if defined (__DEBUG__)
	printf("rcamicroWhile\n");
#endif
}

void rcamicroBegin(void) {
#if defined (__DEBUG__)
	printf("rcamicroBegin\n");
#endif
}

/* Errors */
void rcamicroMessage(void) {
#if defined (__DEBUG__)
	printf("rcamicroMessage\n");
#endif
}

void rcamicroQuestion(void) {
#if defined (__DEBUG__)
	printf("rcamicroQuestion\n");
#endif
}

void rcamicroQStack(void) {
#if defined (__DEBUG__)
	printf("rcamicroQStack\n");
#endif
}

void rcamicroYNumber(void) {
#if defined (__DEBUG__)
	printf("rcamicroYNumber\n");
#endif
}

/* Vocabularies */
void rcamicroVocabulary(void) {
#if defined (__DEBUG__)
	printf("rcamicroVocabulary\n");
#endif
}

void rcamicroDefinitions(void) {
#if defined (__DEBUG__)
	printf("rcamicroDefinitions\n");
#endif
}

void rcamicroForget(void) {
#if defined (__DEBUG__)
	printf("rcamicroForget\n");
#endif
}

void rcamicroInLine(void) {
#if defined (__DEBUG__)
	printf("rcamicroInLine\n");
#endif
}

void rcamicroXTick(void) {
#if defined (__DEBUG__)
	printf("rcamicroXTick\n");
#endif
}

void rcamicroXSwap(void) {
#if defined (__DEBUG__)
	printf("rcamicroXSwap\n");
#endif
}

/* Number Formatting */
void rcamicroSpaces(void) {
#if defined (__DEBUG__)
	printf("rcamicroSpaces\n");
#endif
}

void rcamicroPad(void) {
#if defined (__DEBUG__)
	printf("rcamicroPad\n");
#endif
}

void rcamicroLessNum(void) {
#if defined (__DEBUG__)
	printf("rcamicroLessNum\n");
#endif
}

void rcamicroNumGreater(void) {
#if defined (__DEBUG__)
	printf("rcamicroNumGreater\n");
#endif
}

void rcamicroSign(void) {
#if defined (__DEBUG__)
	printf("rcamicroSign\n");
#endif
}

void rcamicroNumS(void) {
#if defined (__DEBUG__)
	printf("rcamicroNumS\n");
#endif
}

void rcamicroYDot(void) {
#if defined (__DEBUG__)
	printf("rcamicroYDot\n");
#endif
}

void rcamicroQ(void) {
#if defined (__DEBUG__)
	printf("rcamicroQ\n");
#endif
}

void rcamicroDot(void) {
#if defined (__DEBUG__)
	printf("rcamicroDot\n");
#endif
}

/* Output Vocabulary */
void rcamicroDotR(void) {
#if defined (__DEBUG__)
	printf("rcamicroDotR\n");
#endif
}

void rcamicroDump(void) {
#if defined (__DEBUG__)
	printf("rcamicroDump\n");
#endif
}

void rcamicroTrailing(void) {
#if defined (__DEBUG__)
	printf("rcamicroTrailing\n");
#endif
}

void rcamicroLine(void) {
#if defined (__DEBUG__)
	printf("rcamicroLine\n");
#endif
}

void rcamicroText(void) {
#if defined (__DEBUG__)
	printf("rcamicroText\n");
#endif
}

void rcamicroList(void) {
#if defined (__DEBUG__)
	printf("rcamicroList\n");
#endif
}

void rcamicroL(void) {
#if defined (__DEBUG__)
	printf("rcamicroL\n");
#endif
}

void rcamicroRightBracket(void) {
#if defined (__DEBUG__)
	printf("rcamicroRightBracket\n");
#endif
}

/* Editor */
void rcamicroHold(void) {
#if defined (__DEBUG__)
	printf("rcamicroHold\n");
#endif
}

void rcamicroGap(void) {
#if defined (__DEBUG__)
	printf("rcamicroGap\n");
#endif
}

void rcamicroT(void) {
#if defined (__DEBUG__)
	printf("rcamicroT\n");
#endif
}

void rcamicroD(void) {
#if defined (__DEBUG__)
	printf("rcamicroD\n");
#endif
}

void rcamicroR(void) {
#if defined (__DEBUG__)
	printf("rcamicroR\n");
#endif
}

void rcamicroI(void) {
#if defined (__DEBUG__)
	printf("rcamicroI\n");
#endif
}

void rcamicroQuote(void) {
#if defined (__DEBUG__)
	printf("rcamicroQuote\n");
#endif
}

void rcamicroP(void) {
#if defined (__DEBUG__)
	printf("rcamicroP\n");
#endif
}

void rcamicroA(void) {
#if defined (__DEBUG__)
	printf("rcamicroA\n");
#endif
}

void rcamicroCopy(void) {
#if defined (__DEBUG__)
	printf("rcamicroCopy\n");
#endif
}

void rcamicroDelete(void) {
#if defined (__DEBUG__)
	printf("rcamicroDelete\n");
#endif
}

void rcamicroTop(void) {
#if defined (__DEBUG__)
	printf("rcamicroTop\n");
#endif
}

/* Lower Baud Serial I/O */

/* Terminal I/O */ 
void rcamicroType(void) {
#if defined (__DEBUG__)
	printf("rcamicroType\n");
#endif
}

void rcamicroCount(void) {
#if defined (__DEBUG__)
	printf("rcamicroCount\n");
#endif
}

void rcamicroMsg(void) {
#if defined (__DEBUG__)
	printf("rcamicroMsg\n");
#endif
}

void rcamicroExpect(void) {
#if defined (__DEBUG__)
	printf("rcamicroExpect\n");
#endif
}

void rcamicroQuit(void) {
#if defined (__DEBUG__)
	printf("rcamicroQuit\n");
#endif
}

/* Higher Baud Serial I/O */

/* Restart */

/* Options */
void rcamicroDro(void) {
#if defined (__DEBUG__)
	printf("rcamicroDro\n");
#endif
}

void rcamicroDri(void) {
#if defined (__DEBUG__)
	printf("rcamicroDri\n");
#endif
}

/* Assembler */

/* String Editor */
void rcamicroCNum(void) {
#if defined (__DEBUG__)
	printf("rcamicroCNum\n");
#endif
}

void rcamicroNumLeft(void) {
#if defined (__DEBUG__)
	printf("rcamicroNumLeft\n");
#endif
}

void rcamicroLNum(void) {
#if defined (__DEBUG__)
	printf("rcamicroLNum\n");
#endif
}

void rcamicroAt(void) {
#if defined (__DEBUG__)
	printf("rcamicroAt\n");
#endif
}

void rcamicroString(void) {
#if defined (__DEBUG__)
	printf("rcamicroString\n");
#endif
}

void rcamicroErr(void) {
#if defined (__DEBUG__)
	printf("rcamicroErr\n");
#endif
}

void rcamicroOneLine(void) {
#if defined (__DEBUG__)
	printf("rcamicroOneLine\n");
#endif
}

void rcamicroFind(void) {
#if defined (__DEBUG__)
	printf("rcamicroFind\n");
#endif
}

void rcamicroRemove(void) {
#if defined (__DEBUG__)
	printf("rcamicroRemove\n");
#endif
}

void rcamicroM(void) {
#if defined (__DEBUG__)
	printf("rcamicroM\n");
#endif
}

void rcamicroB(void) {
#if defined (__DEBUG__)
	printf("rcamicroB\n");
#endif
}

void rcamicroN(void) {
#if defined (__DEBUG__)
	printf("rcamicroN\n");
#endif
}

void rcamicroF(void) {
#if defined (__DEBUG__)
	printf("rcamicroF\n");
#endif
}

void rcamicroX(void) {
#if defined (__DEBUG__)
	printf("rcamicroX\n");
#endif
}

void rcamicroTill(void) {
#if defined (__DEBUG__)
	printf("rcamicroTill\n");
#endif
}

void rcamicroC(void) {
#if defined (__DEBUG__)
	printf("rcamicroC\n");
#endif
}

/* Character Editor Primitives */
void rcamicroMove(void) {
#if defined (__DEBUG__)
	printf("rcamicroMove\n");
#endif
}

/* Disk Utilities */
void rcamicroFill(void) {
#if defined (__DEBUG__)
	printf("rcamicroFill\n");
#endif
}

void rcamicroRight(void) {
#if defined (__DEBUG__)
	printf("rcamicroRight\n");
#endif
}

void rcamicroBackup(void) {
#if defined (__DEBUG__)
	printf("rcamicroBackup\n");
#endif
}

void rcamicroSweep(void) {
#if defined (__DEBUG__)
	printf("rcamicroSweep\n");
#endif
}

/* Disk Compare */
void rcamicroMatch(void) {
#if defined (__DEBUG__)
	printf("rcamicroMatch\n");
#endif
}

/* Disk Error Checking */
void rcamicroStatus(void) {
#if defined (__DEBUG__)
	printf("rcamicroStatus\n");
#endif
}

void rcamicroError(void) {
#if defined (__DEBUG__)
	printf("rcamicroError\n");
#endif
}

void rcamicroLog(void) {
#if defined (__DEBUG__)
	printf("rcamicroLog\n");
#endif
}

void rcamicroNotify(void) {
#if defined (__DEBUG__)
	printf("rcamicroNotify\n");
#endif
}

void rcamicroDup(void) {
#if defined (__DEBUG__)
	printf("rcamicroDup\n");
#endif
}

void rcamicroXBlock(void) {
#if defined (__DEBUG__)
	printf("rcamicroXBlock\n");
#endif
}

/* Documentation */
void rcamicroIndex(void) {
#if defined (__DEBUG__)
	printf("rcamicroIndex\n");
#endif
}

void rcamicroTriad(void) {
#if defined (__DEBUG__)
	printf("rcamicroTriad\n");
#endif
}

void rcamicroShow(void) {
#if defined (__DEBUG__)
	printf("rcamicroShow\n");
#endif
}

/* Reconfiguration */
void rcamicroBStore(void) {
#if defined (__DEBUG__)
	printf("rcamicroBStore\n");
#endif
}

void rcamicroPStore(void) {
#if defined (__DEBUG__)
	printf("rcamicroPStore\n");
#endif
}

void rcamicroDisk(void) {
#if defined (__DEBUG__)
	printf("rcamicroDisk\n");
#endif
}

/* Compiler */
void rcamicroAdrs(void) {
#if defined (__DEBUG__)
	printf("rcamicroAdrs\n");
#endif
}

void rcamicroHere(void) {
#if defined (__DEBUG__)
	printf("rcamicroHere\n");
#endif
}

void rcamicroOrg(void) {
#if defined (__DEBUG__)
	printf("rcamicroOrg\n");
#endif
}

void rcamicroCComma(void) {
#if defined (__DEBUG__)
	printf("rcamicroCComma\n");
#endif
}

void rcamicroComma(void) {
#if defined (__DEBUG__)
	printf("rcamicroComma\n");
#endif
}

/* Target Vocabulary */
void rcamicroClear(void) {
#if defined (__DEBUG__)
	printf("rcamicroClear\n");
#endif
}

void rcamicroSmudge(void) {
#if defined (__DEBUG__)
	printf("rcamicroSmudge\n");
#endif
}

void rcamicroEmplace(void) {
#if defined (__DEBUG__)
	printf("rcamicroEmplace\n");
#endif
}

/* Target Dictionary */
void rcamicroHFetch(void) {
#if defined (__DEBUG__)
	printf("rcamicroHFetch\n");
#endif
}

void rcamicroHStore(void) {
#if defined (__DEBUG__)
	printf("rcamicroHStore\n");
#endif
}

void rcamicroInside(void) {
#if defined (__DEBUG__)
	printf("rcamicroInside\n");
#endif
}

void rcamicroCFetch(void) {
#if defined (__DEBUG__)
	printf("rcamicroCFetch\n");
#endif
}

void rcamicroCStore(void) {
#if defined (__DEBUG__)
	printf("rcamicroCStore\n");
#endif
}

void rcamicroFetch(void) {
#if defined (__DEBUG__)
	printf("rcamicroFetch\n");
#endif
}

void rcamicroStore(void) {
#if defined (__DEBUG__)
	printf("rcamicroStore\n");
#endif
}

/* Target Compiler */
void rcamicroCommaHost(void) {
#if defined (__DEBUG__)
	printf("rcamicroCommaHost\n");
#endif
}

void rcamicroSemicolonCode(void) {
#if defined (__DEBUG__)
	printf("rcamicroSemicolonCode\n");
#endif
}

void rcamicroMinusTick(void) {
#if defined (__DEBUG__)
	printf("rcamicroMinusTick\n");
#endif
}

void rcamicroBackslash(void) {
#if defined (__DEBUG__)
	printf("rcamicroBackslash\n");
#endif
}

void rcamicroCompile(void) {
#if defined (__DEBUG__)
	printf("rcamicroCompile\n");
#endif
}

/* Target Assembler */
void rcamicroEqu(void) {
#if defined (__DEBUG__)
	printf("rcamicroEqu\n");
#endif
}

void rcamicroLabel(void) {
#if defined (__DEBUG__)
	printf("rcamicroLabel\n");
#endif
}

void rcamicroCr(void) {
#if defined (__DEBUG__)
	printf("rcamicroCr\n");
#endif
}

void rcamicroComputer(void) {
#if defined (__DEBUG__)
	printf("rcamicroComputer\n");
#endif
}

/* RAM Defining */
void rcamicroAccessible(void) {
#if defined (__DEBUG__)
	printf("rcamicroAccessible\n");
#endif
}

void rcamicroConstant(void) {
#if defined (__DEBUG__)
	printf("rcamicroConstant\n");
#endif
}

void rcamicroUser(void) {
#if defined (__DEBUG__)
	printf("rcamicroUser\n");
#endif
}

void rcamicroTable(void) {
#if defined (__DEBUG__)
	printf("rcamicroTable\n");
#endif
}

void rcamicroDoes(void) {
#if defined (__DEBUG__)
	printf("rcamicroDoes\n");
#endif
}

/* PROM Defining */
void rcamicroThere(void) {
#if defined (__DEBUG__)
	printf("rcamicroThere\n");
#endif
}

void rcamicroRes(void) {
#if defined (__DEBUG__)
	printf("rcamicroRes\n");
#endif
}

/* Compiling Words */
void rcamicroSemicolon(void) {
#if defined (__DEBUG__)
	printf("rcamicroSemicolon\n");
#endif
}

void rcamicroHColon(void) {
#if defined (__DEBUG__)
	printf("rcamicroHColon\n");
#endif
}

void rcamicroColon(void) {
#if defined (__DEBUG__)
	printf("rcamicroColon\n");
#endif
}

/* Initialize Symbols */

/* Compiler Output */
void rcamicroLeader(void) {
#if defined (__DEBUG__)
	printf("rcamicroLeader\n");
#endif
}

void rcamicroProms(void) {
#if defined (__DEBUG__)
	printf("rcamicroProms\n");
#endif
}

void rcamicroEntire(void) {
#if defined (__DEBUG__)
	printf("rcamicroEntire\n");
#endif
}

void rcamicroSimulate(void) {
#if defined (__DEBUG__)
	printf("rcamicroSimulate\n");
#endif
}

void rcamicroZero(void) {
#if defined (__DEBUG__)
	printf("rcamicroZero\n");
#endif
}

void rcamicroLit(void) {
#if defined (__DEBUG__)
	printf("rcamicroLit\n");
#endif
}

void rcamicroExecute(void) {
#if defined (__DEBUG__)
	printf("rcamicroExecute\n");
#endif
}

void rcamicroSemicolonS(void) {
#if defined (__DEBUG__)
	printf("rcamicroSemicolonS\n");
#endif
}

void rcamicroUStar(void) {
#if defined (__DEBUG__)
	printf("rcamicroUStar\n");
#endif
}

void rcamicroUSlash(void) {
#if defined (__DEBUG__)
	printf("rcamicroUSlash\n");
#endif
}

void rcamicroCz(void) {
#if defined (__DEBUG__)
	printf("rcamicroCz\n");
#endif
}

void rcamicroZeroEqual(void) {
#if defined (__DEBUG__)
	printf("rcamicroZeroEqual\n");
#endif
}

void rcamicroPlus(void) {
#if defined (__DEBUG__)
	printf("rcamicroPlus\n");
#endif
}

void rcamicroTwoStar(void) {
#if defined (__DEBUG__)
	printf("rcamicroTwoStar\n");
#endif
}

void rcamicroMinus(void) {
#if defined (__DEBUG__)
	printf("rcamicroMinus\n");
#endif
}

void rcamicroAnd(void) {
#if defined (__DEBUG__)
	printf("rcamicroAnd\n");
#endif
}

void rcamicroBinary(void) {
#if defined (__DEBUG__)
	printf("rcamicroBinary\n");
#endif
}

void rcamicroOnePlus(void) {
#if defined (__DEBUG__)
	printf("rcamicroOnePlus\n");
#endif
}

void rcamicroTwoPlus(void) {
#if defined (__DEBUG__)
	printf("rcamicroTwoPlus\n");
#endif
}

void rcamicroOver(void) {
#if defined (__DEBUG__)
	printf("rcamicroOver\n");
#endif
}

void rcamicroMinusDup(void) {
#if defined (__DEBUG__)
	printf("rcamicroMinusDup\n");
#endif
}

void rcamicroSwap(void) {
#if defined (__DEBUG__)
	printf("rcamicroSwap\n");
#endif
}

void rcamicroPlusStore(void) {
#if defined (__DEBUG__)
	printf("rcamicroPlusStore\n");
#endif
}

void rcamicroFromR(void) {
#if defined (__DEBUG__)
	printf("rcamicroFromR\n");
#endif
}

void rcamicroRTo(void) {
#if defined (__DEBUG__)
	printf("rcamicroRTo\n");
#endif
}

void rcamicroRot(void) {
#if defined (__DEBUG__)
	printf("rcamicroRot\n");
#endif
}

void rcamicroTwoPop(void) {
#if defined (__DEBUG__)
	printf("rcamicroTwoPop\n");
#endif
}

void rcamicroOnePop(void) {
#if defined (__DEBUG__)
	printf("rcamicroOnePop\n");
#endif
}

/* More Definitions */
void rcamicroEqual(void) {
#if defined (__DEBUG__)
	printf("rcamicroEqual\n");
#endif
}

/* Cross Illustration */
void rcamicroLittle(void) {
#if defined (__DEBUG__)
	printf("rcamicroLittle\n");
#endif
}

void rcamicroTimes(void) {
#if defined (__DEBUG__)
	printf("rcamicroTimes\n");
#endif
}

void rcamicroTest(void) {
#if defined (__DEBUG__)
	printf("rcamicroTest\n");
#endif
}

#endif
