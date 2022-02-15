#ifndef H2ORCA2
#define H2ORCA2

/* Forth Inc.'s "RCA1802 microFORTH" FORTH */

/* Primitives */

/* Definitions */
void rcamicroImmediate(void) {
	DEBUG_WORD("rcamicroImmediate")
}

void rcamicroParen(void) {
	DEBUG_WORD("rcamicroParen")
}

void rcamicroEightStar(void) {
	DEBUG_WORD("rcamicroEightStar")
}

void rcamicroLoad(void) {
	DEBUG_WORD("rcamicroLoad")
}

void rcamicroBuilds(void) {
	DEBUG_WORD("rcamicroBuilds")
}

void rcamicroBlock(void) {
	DEBUG_WORD("rcamicroBlock")
}

void rcamicroTick(void) {
	DEBUG_WORD("rcamicroTick")
}

void rcamicroEraseCore(void) {
	DEBUG_WORD("rcamicroEraseCore")
}

void rcamicroFlush(void) {
	DEBUG_WORD("rcamicroFlush")
}

void rcamicroTask(void) {
	DEBUG_WORD("rcamicroTask")
}

/* Vocabulary Assembler */
void rcamicroVanish(void) {
	DEBUG_WORD("rcamicroVanish")
}

void rcamicroCode(void) {
	DEBUG_WORD("rcamicroCode")
}

void rcamicroColonCode(void) {
	DEBUG_WORD("rcamicroColonCode")
}

void rcamicroPage(void) {
	DEBUG_WORD("rcamicroPage")
}

void rcamicroOctal(void) {
	DEBUG_WORD("rcamicroOctal")
}

void rcamicroDecimal(void) {
	DEBUG_WORD("rcamicroDecimal")
}

void rcamicroHex(void) {
	DEBUG_WORD("rcamicroHex")
}

void rcamicroCVariable(void) {
	DEBUG_WORD("rcamicroCVariable")
}

void rcamicroVariable(void) {
	DEBUG_WORD("rcamicroVariable")
}

/* Arithmetic Operators */
void rcamicroGreater(void) {
	DEBUG_WORD("rcamicroGreater")
}

void rcamicroMStar(void) {
	DEBUG_WORD("rcamicroMStar")
}

void rcamicroMSlashMod(void) {
	DEBUG_WORD("rcamicroMSlashMod")
}

void rcamicroStarSlashMod(void) {
	DEBUG_WORD("rcamicroStarSlashMod")
}

void rcamicroStarSlash(void) {
	DEBUG_WORD("rcamicroStarSlashMod")
}

void rcamicroSlashMod(void) {
	DEBUG_WORD("rcamicroSlashMod")
}

void rcamicroMod(void) {
	DEBUG_WORD("rcamicroMod")
}

void rcamicroStar(void) {
	DEBUG_WORD("rcamicroStar")
}

void rcamicroSlash(void) {
	DEBUG_WORD("rcamicroSlash")
}

void rcamicroMax(void) {
	DEBUG_WORD("rcamicroMax")
}

void rcamicroMin(void) {
	DEBUG_WORD("rcamicroMin")
}

void rcamicroNum(void) {
	DEBUG_WORD("rcamicroNum")
}

void rcamicroPlusC(void) {
	DEBUG_WORD("rcamicroPlusC")
}

void rcamicroOneRg(void) {
	DEBUG_WORD("rcamicroOneRg")
}

void rcamicroAlu(void) {
	DEBUG_WORD("rcamicroAlu")
}

/* Macros */
void rcamicroEntry(void) {
	DEBUG_WORD("rcamicroEntry")
}

void rcamicroNext(void) {
	DEBUG_WORD("rcamicroNext")
}

void rcamicroZeroNumLd(void) {
	DEBUG_WORD("rcamicroZeroNumLd")
}

void rcamicroDst(void) {
	DEBUG_WORD("rcamicroDst")
}

void rcamicroPush(void) {
	DEBUG_WORD("rcamicroPush")
}

/* Transfers */
void rcamicroEfl(void) {
	DEBUG_WORD("rcamicroEfl")
}

void rcamicroLess(void) {
	DEBUG_WORD("rcamicroLess")
}

void rcamicroZeroLess(void) {
	DEBUG_WORD("rcamicroZeroLess")
}

void rcamicroIf(void) {
	DEBUG_WORD("rcamicroIf")
}

void rcamicroThen(void) {
	DEBUG_WORD("rcamicroThen")
}

void rcamicroElse(void) {
	DEBUG_WORD("rcamicroElse")
}

void rcamicroEnd(void) {
	DEBUG_WORD("rcamicroEnd")
}

void rcamicroBr(void) {
	DEBUG_WORD("rcamicroBr")
}

void rcamicroLs(void) {
	DEBUG_WORD("rcamicroLs")
}

/* Compiler */
void rcamicroYMark(void) {
	DEBUG_WORD("rcamicroYMark")
}

void rcamicroYThen(void) {
	DEBUG_WORD("rcamicroYThen")
}

void rcamicroDo(void) {
	DEBUG_WORD("rcamicroDo")
}

void rcamicroLoop(void) {
	DEBUG_WORD("rcamicroLoop")
}

void rcamicroPlusLoop(void) {
	DEBUG_WORD("rcamicroPlusLoop")
}

void rcamicroWhile(void) {
	DEBUG_WORD("rcamicroWhile")
}

void rcamicroBegin(void) {
	DEBUG_WORD("rcamicroBegin")
}

/* Errors */
void rcamicroMessage(void) {
	DEBUG_WORD("rcamicroMessage")
}

void rcamicroQuestion(void) {
	DEBUG_WORD("rcamicroQuestion")
}

void rcamicroQStack(void) {
	DEBUG_WORD("rcamicroQStack")
}

void rcamicroYNumber(void) {
	DEBUG_WORD("rcamicroYNumber")
}

/* Vocabularies */
void rcamicroVocabulary(void) {
	DEBUG_WORD("rcamicroVocabulary")
}

void rcamicroDefinitions(void) {
	DEBUG_WORD("rcamicroDefinitions")
}

void rcamicroForget(void) {
	DEBUG_WORD("rcamicroForget")
}

void rcamicroInLine(void) {
	DEBUG_WORD("rcamicroInLine")
}

void rcamicroXTick(void) {
	DEBUG_WORD("rcamicroXTick")
}

void rcamicroXSwap(void) {
	DEBUG_WORD("rcamicroXSwap")
}

/* Number Formatting */
void rcamicroSpaces(void) {
	DEBUG_WORD("rcamicroSpaces")
}

void rcamicroPad(void) {
	DEBUG_WORD("rcamicroPad")
}

void rcamicroLessNum(void) {
	DEBUG_WORD("rcamicroLessNum")
}

void rcamicroNumGreater(void) {
	DEBUG_WORD("rcamicroNumGreater")
}

void rcamicroSign(void) {
	DEBUG_WORD("rcamicroSign")
}

void rcamicroNumS(void) {
	DEBUG_WORD("rcamicroNumS")
}

void rcamicroYDot(void) {
	DEBUG_WORD("rcamicroYDot")
}

void rcamicroQ(void) {
	DEBUG_WORD("rcamicroQ")
}

void rcamicroDot(void) {
	DEBUG_WORD("rcamicroDot")
}

/* Output Vocabulary */
void rcamicroDotR(void) {
	DEBUG_WORD("rcamicroDotR")
}

void rcamicroDump(void) {
	DEBUG_WORD("rcamicroDump")
}

void rcamicroTrailing(void) {
	DEBUG_WORD("rcamicroTrailing")
}

void rcamicroLine(void) {
	DEBUG_WORD("rcamicroLine")
}

void rcamicroText(void) {
	DEBUG_WORD("rcamicroText")
}

void rcamicroList(void) {
	DEBUG_WORD("rcamicroList")
}

void rcamicroL(void) {
	DEBUG_WORD("rcamicroL")
}

void rcamicroRightBracket(void) {
	DEBUG_WORD("rcamicroRightBracket")
}

/* Editor */
void rcamicroHold(void) {
	DEBUG_WORD("rcamicroHold")
}

void rcamicroGap(void) {
	DEBUG_WORD("rcamicroGap")
}

void rcamicroT(void) {
	DEBUG_WORD("rcamicroT")
}

void rcamicroD(void) {
	DEBUG_WORD("rcamicroD")
}

void rcamicroR(void) {
	DEBUG_WORD("rcamicroR")
}

void rcamicroI(void) {
	DEBUG_WORD("rcamicroI")
}

void rcamicroQuote(void) {
	DEBUG_WORD("rcamicroQuote")
}

void rcamicroP(void) {
	DEBUG_WORD("rcamicroP")
}

void rcamicroA(void) {
	DEBUG_WORD("rcamicroA")
}

void rcamicroCopy(void) {
	DEBUG_WORD("rcamicroCopy")
}

void rcamicroDelete(void) {
	DEBUG_WORD("rcamicroDelete")
}

void rcamicroTop(void) {
	DEBUG_WORD("rcamicroTop")
}

/* Lower Baud Serial I/O */

/* Terminal I/O */
void rcamicroType(void) {
	DEBUG_WORD("rcamicroType")
}

void rcamicroCount(void) {
	DEBUG_WORD("rcamicroCount")
}

void rcamicroMsg(void) {
	DEBUG_WORD("rcamicroMsg")
}

void rcamicroExpect(void) {
	DEBUG_WORD("rcamicroExpect")
}

void rcamicroQuit(void) {
	DEBUG_WORD("rcamicroQuit")
}

/* Higher Baud Serial I/O */

/* Restart */

/* Options */
void rcamicroDro(void) {
	DEBUG_WORD("rcamicroDro")
}

void rcamicroDri(void) {
	DEBUG_WORD("rcamicroDri")
}

/* Assembler */

/* String Editor */
void rcamicroCNum(void) {
	DEBUG_WORD("rcamicroCNum")
}

void rcamicroNumLeft(void) {
	DEBUG_WORD("rcamicroNumLeft")
}

void rcamicroLNum(void) {
	DEBUG_WORD("rcamicroLNum")
}

void rcamicroAt(void) {
	DEBUG_WORD("rcamicroAt")
}

void rcamicroString(void) {
	DEBUG_WORD("rcamicroString")
}

void rcamicroErr(void) {
	DEBUG_WORD("rcamicroErr")
}

void rcamicroOneLine(void) {
	DEBUG_WORD("rcamicroOneLine")
}

void rcamicroFind(void) {
	DEBUG_WORD("rcamicroFind")
}

void rcamicroRemove(void) {
	DEBUG_WORD("rcamicroRemove")
}

void rcamicroM(void) {
	DEBUG_WORD("rcamicroM")
}

void rcamicroB(void) {
	DEBUG_WORD("rcamicroB")
}

void rcamicroN(void) {
	DEBUG_WORD("rcamicroN")
}

void rcamicroF(void) {
	DEBUG_WORD("rcamicroF")
}

void rcamicroX(void) {
	DEBUG_WORD("rcamicroX")
}

void rcamicroTill(void) {
	DEBUG_WORD("rcamicroTill")
}

void rcamicroC(void) {
	DEBUG_WORD("rcamicroC")
}

/* Character Editor Primitives */
void rcamicroMove(void) {
	DEBUG_WORD("rcamicroMove")
}

/* Disk Utilities */
void rcamicroFill(void) {
	DEBUG_WORD("rcamicroFill")
}

void rcamicroRight(void) {
	DEBUG_WORD("rcamicroRight")
}

void rcamicroBackup(void) {
	DEBUG_WORD("rcamicroBackup")
}

void rcamicroSweep(void) {
	DEBUG_WORD("rcamicroSweep")
}

/* Disk Compare */
void rcamicroMatch(void) {
	DEBUG_WORD("rcamicroMatch")
}

/* Disk Error Checking */
void rcamicroStatus(void) {
	DEBUG_WORD("rcamicroStatus")
}

void rcamicroError(void) {
	DEBUG_WORD("rcamicroError")
}

void rcamicroLog(void) {
	DEBUG_WORD("rcamicroLog")
}

void rcamicroNotify(void) {
	DEBUG_WORD("rcamicroNotify")
}

void rcamicroDup(void) {
	DEBUG_WORD("rcamicroDup")
}

void rcamicroXBlock(void) {
	DEBUG_WORD("rcamicroXBlock")
}

/* Documentation */
void rcamicroIndex(void) {
	DEBUG_WORD("rcamicroIndex")
}

void rcamicroTriad(void) {
	DEBUG_WORD("rcamicroTriad")
}

void rcamicroShow(void) {
	DEBUG_WORD("rcamicroShow")
}

/* Reconfiguration */
void rcamicroBStore(void) {
	DEBUG_WORD("rcamicroBStore")
}

void rcamicroPStore(void) {
	DEBUG_WORD("rcamicroPStore")
}

void rcamicroDisk(void) {
	DEBUG_WORD("rcamicroDisk")
}

/* Compiler */
void rcamicroAdrs(void) {
	DEBUG_WORD("rcamicroAdrs")
}

void rcamicroHere(void) {
	DEBUG_WORD("rcamicroHere")
}

void rcamicroOrg(void) {
	DEBUG_WORD("rcamicroOrg")
}

void rcamicroCComma(void) {
	DEBUG_WORD("rcamicroCComma")
}

void rcamicroComma(void) {
	DEBUG_WORD("rcamicroComma")
}

/* Target Vocabulary */
void rcamicroClear(void) {
	DEBUG_WORD("rcamicroClear")
}

void rcamicroSmudge(void) {
	DEBUG_WORD("rcamicroSmudge")
}

void rcamicroEmplace(void) {
	DEBUG_WORD("rcamicroEmplace")
}

/* Target Dictionary */
void rcamicroHFetch(void) {
	DEBUG_WORD("rcamicroHFetch")
}

void rcamicroHStore(void) {
	DEBUG_WORD("rcamicroHStore")
}

void rcamicroInside(void) {
	DEBUG_WORD("rcamicroInside")
}

void rcamicroCFetch(void) {
	DEBUG_WORD("rcamicroCFetch")
}

void rcamicroCStore(void) {
	DEBUG_WORD("rcamicroCStore")
}

void rcamicroFetch(void) {
	DEBUG_WORD("rcamicroFetch")
}

void rcamicroStore(void) {
	DEBUG_WORD("rcamicroStore")
}

/* Target Compiler */
void rcamicroCommaHost(void) {
	DEBUG_WORD("rcamicroCommaHost")
}

void rcamicroSemicolonCode(void) {
	DEBUG_WORD("rcamicroSemicolonCode")
}

void rcamicroMinusTick(void) {
	DEBUG_WORD("rcamicroMinusTick")
}

void rcamicroBackslash(void) {
	DEBUG_WORD("rcamicroBackslash")
}

void rcamicroCompile(void) {
	DEBUG_WORD("rcamicroCompile")
}

/* Target Assembler */
void rcamicroEqu(void) {
	DEBUG_WORD("rcamicroEqu")
}

void rcamicroLabel(void) {
	DEBUG_WORD("rcamicroLabel")
}

void rcamicroCr(void) {
	DEBUG_WORD("rcamicroCr")
}

void rcamicroComputer(void) {
	DEBUG_WORD("rcamicroComputer")
}

/* RAM Defining */
void rcamicroAccessible(void) {
	DEBUG_WORD("rcamicroAccessible")
}

void rcamicroConstant(void) {
	DEBUG_WORD("rcamicroConstant")
}

void rcamicroUser(void) {
	DEBUG_WORD("rcamicroUser")
}

void rcamicroTable(void) {
	DEBUG_WORD("rcamicroTable")
}

void rcamicroDoes(void) {
	DEBUG_WORD("rcamicroDoes")
}

/* PROM Defining */
void rcamicroThere(void) {
	DEBUG_WORD("rcamicroThere")
}

void rcamicroRes(void) {
	DEBUG_WORD("rcamicroRes")
}

/* Compiling Words */
void rcamicroSemicolon(void) {
	DEBUG_WORD("rcamicroSemicolon")
}

void rcamicroHColon(void) {
	DEBUG_WORD("rcamicroHColon")
}

void rcamicroColon(void) {
	DEBUG_WORD("rcamicroColon")
}

/* Initialize Symbols */

/* Compiler Output */
void rcamicroLeader(void) {
	DEBUG_WORD("rcamicroLeader")
}

void rcamicroProms(void) {
	DEBUG_WORD("rcamicroProms")
}

void rcamicroEntire(void) {
	DEBUG_WORD("rcamicroEntire")
}

void rcamicroSimulate(void) {
	DEBUG_WORD("rcamicroSimulate")
}

void rcamicroZero(void) {
	DEBUG_WORD("rcamicroZero")
}

void rcamicroLit(void) {
	DEBUG_WORD("rcamicroLit")
}

void rcamicroExecute(void) {
	DEBUG_WORD("rcamicroExecute")
}

void rcamicroSemicolonS(void) {
	DEBUG_WORD("rcamicroSemicolonS")
}

void rcamicroUStar(void) {
	DEBUG_WORD("rcamicroUStar")
}

void rcamicroUSlash(void) {
	DEBUG_WORD("rcamicroUSlash")
}

void rcamicroCz(void) {
	DEBUG_WORD("rcamicroCz")
}

void rcamicroZeroEqual(void) {
	DEBUG_WORD("rcamicroZeroEqual")
}

void rcamicroPlus(void) {
	DEBUG_WORD("rcamicroPlus")
}

void rcamicroTwoStar(void) {
	DEBUG_WORD("rcamicroTwoStar")
}

void rcamicroMinus(void) {
	DEBUG_WORD("rcamicroMinus")
}

void rcamicroAnd(void) {
	DEBUG_WORD("rcamicroAnd")
}

void rcamicroBinary(void) {
	DEBUG_WORD("rcamicroBinary")
}

void rcamicroOnePlus(void) {
	DEBUG_WORD("rcamicroOnePlus")
}

void rcamicroTwoPlus(void) {
	DEBUG_WORD("rcamicroTwoPlus")
}

void rcamicroOver(void) {
	DEBUG_WORD("rcamicroOver")
}

void rcamicroMinusDup(void) {
	DEBUG_WORD("rcamicroMinusDup")
}

void rcamicroSwap(void) {
	DEBUG_WORD("rcamicroSwap")
}

void rcamicroPlusStore(void) {
	DEBUG_WORD("rcamicroPlusStore")
}

void rcamicroFromR(void) {
	DEBUG_WORD("rcamicroFromR")
}

void rcamicroRTo(void) {
	DEBUG_WORD("rcamicroRTo")
}

void rcamicroRot(void) {
	DEBUG_WORD("rcamicroRot")
}

void rcamicroTwoPop(void) {
	DEBUG_WORD("rcamicroTwoPop")
}

void rcamicroOnePop(void) {
	DEBUG_WORD("rcamicroOnePop")
}

/* More Definitions */
void rcamicroEqual(void) {
	DEBUG_WORD("rcamicroEqual")
}

/* Cross Illustration */
void rcamicroLittle(void) {
	DEBUG_WORD("rcamicroLittle")
}

void rcamicroTimes(void) {
	DEBUG_WORD("rcamicroTimes")
}

void rcamicroTest(void) {
	DEBUG_WORD("rcamicroTest")
}

#endif
