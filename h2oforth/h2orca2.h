#ifndef H2ORCA2
#define H2ORCA2

/* Forth Inc.'s "RCA1802 microFORTH" FORTH */

/* Primitives */

/* Definitions */
void rcamicroImmediate(void) {
	PSMSG_DEBUG("rcamicroImmediate")
}

void rcamicroParen(void) {
	PSMSG_DEBUG("rcamicroParen")
}

void rcamicroEightStar(void) {
	PSMSG_DEBUG("rcamicroEightStar")
}

void rcamicroLoad(void) {
	PSMSG_DEBUG("rcamicroLoad")
}

void rcamicroBuilds(void) {
	PSMSG_DEBUG("rcamicroBuilds")
}

void rcamicroBlock(void) {
	PSMSG_DEBUG("rcamicroBlock")
}

void rcamicroTick(void) {
	PSMSG_DEBUG("rcamicroTick")
}

void rcamicroEraseCore(void) {
	PSMSG_DEBUG("rcamicroEraseCore")
}

void rcamicroFlush(void) {
	PSMSG_DEBUG("rcamicroFlush")
}

void rcamicroTask(void) {
	PSMSG_DEBUG("rcamicroTask")
}

/* Vocabulary Assembler */
void rcamicroVanish(void) {
	PSMSG_DEBUG("rcamicroVanish")
}

void rcamicroCode(void) {
	PSMSG_DEBUG("rcamicroCode")
}

void rcamicroColonCode(void) {
	PSMSG_DEBUG("rcamicroColonCode")
}

void rcamicroPage(void) {
	PSMSG_DEBUG("rcamicroPage")
}

void rcamicroOctal(void) {
	PSMSG_DEBUG("rcamicroOctal")
}

void rcamicroDecimal(void) {
	PSMSG_DEBUG("rcamicroDecimal")
}

void rcamicroHex(void) {
	PSMSG_DEBUG("rcamicroHex")
}

void rcamicroCVariable(void) {
	PSMSG_DEBUG("rcamicroCVariable")
}

void rcamicroVariable(void) {
	PSMSG_DEBUG("rcamicroVariable")
}

/* Arithmetic Operators */
void rcamicroGreater(void) {
	PSMSG_DEBUG("rcamicroGreater")
}

void rcamicroMStar(void) {
	PSMSG_DEBUG("rcamicroMStar")
}

void rcamicroMSlashMod(void) {
	PSMSG_DEBUG("rcamicroMSlashMod")
}

void rcamicroStarSlashMod(void) {
	PSMSG_DEBUG("rcamicroStarSlashMod")
}

void rcamicroStarSlash(void) {
	PSMSG_DEBUG("rcamicroStarSlashMod")
}

void rcamicroSlashMod(void) {
	PSMSG_DEBUG("rcamicroSlashMod")
}

void rcamicroMod(void) {
	PSMSG_DEBUG("rcamicroMod")
}

void rcamicroStar(void) {
	PSMSG_DEBUG("rcamicroStar")
}

void rcamicroSlash(void) {
	PSMSG_DEBUG("rcamicroSlash")
}

void rcamicroMax(void) {
	PSMSG_DEBUG("rcamicroMax")
}

void rcamicroMin(void) {
	PSMSG_DEBUG("rcamicroMin")
}

void rcamicroNum(void) {
	PSMSG_DEBUG("rcamicroNum")
}

void rcamicroPlusC(void) {
	PSMSG_DEBUG("rcamicroPlusC")
}

void rcamicroOneRg(void) {
	PSMSG_DEBUG("rcamicroOneRg")
}

void rcamicroAlu(void) {
	PSMSG_DEBUG("rcamicroAlu")
}

/* Macros */
void rcamicroEntry(void) {
	PSMSG_DEBUG("rcamicroEntry")
}

void rcamicroNext(void) {
	PSMSG_DEBUG("rcamicroNext")
}

void rcamicroZeroNumLd(void) {
	PSMSG_DEBUG("rcamicroZeroNumLd")
}

void rcamicroDst(void) {
	PSMSG_DEBUG("rcamicroDst")
}

void rcamicroPush(void) {
	PSMSG_DEBUG("rcamicroPush")
}

/* Transfers */
void rcamicroEfl(void) {
	PSMSG_DEBUG("rcamicroEfl")
}

void rcamicroLess(void) {
	PSMSG_DEBUG("rcamicroLess")
}

void rcamicroZeroLess(void) {
	PSMSG_DEBUG("rcamicroZeroLess")
}

void rcamicroIf(void) {
	PSMSG_DEBUG("rcamicroIf")
}

void rcamicroThen(void) {
	PSMSG_DEBUG("rcamicroThen")
}

void rcamicroElse(void) {
	PSMSG_DEBUG("rcamicroElse")
}

void rcamicroEnd(void) {
	PSMSG_DEBUG("rcamicroEnd")
}

void rcamicroBr(void) {
	PSMSG_DEBUG("rcamicroBr")
}

void rcamicroLs(void) {
	PSMSG_DEBUG("rcamicroLs")
}

/* Compiler */
void rcamicroYMark(void) {
	PSMSG_DEBUG("rcamicroYMark")
}

void rcamicroYThen(void) {
	PSMSG_DEBUG("rcamicroYThen")
}

void rcamicroDo(void) {
	PSMSG_DEBUG("rcamicroDo")
}

void rcamicroLoop(void) {
	PSMSG_DEBUG("rcamicroLoop")
}

void rcamicroPlusLoop(void) {
	PSMSG_DEBUG("rcamicroPlusLoop")
}

void rcamicroWhile(void) {
	PSMSG_DEBUG("rcamicroWhile")
}

void rcamicroBegin(void) {
	PSMSG_DEBUG("rcamicroBegin")
}

/* Errors */
void rcamicroMessage(void) {
	PSMSG_DEBUG("rcamicroMessage")
}

void rcamicroQuestion(void) {
	PSMSG_DEBUG("rcamicroQuestion")
}

void rcamicroQStack(void) {
	PSMSG_DEBUG("rcamicroQStack")
}

void rcamicroYNumber(void) {
	PSMSG_DEBUG("rcamicroYNumber")
}

/* Vocabularies */
void rcamicroVocabulary(void) {
	PSMSG_DEBUG("rcamicroVocabulary")
}

void rcamicroDefinitions(void) {
	PSMSG_DEBUG("rcamicroDefinitions")
}

void rcamicroForget(void) {
	PSMSG_DEBUG("rcamicroForget")
}

void rcamicroInLine(void) {
	PSMSG_DEBUG("rcamicroInLine")
}

void rcamicroXTick(void) {
	PSMSG_DEBUG("rcamicroXTick")
}

void rcamicroXSwap(void) {
	PSMSG_DEBUG("rcamicroXSwap")
}

/* Number Formatting */
void rcamicroSpaces(void) {
	PSMSG_DEBUG("rcamicroSpaces")
}

void rcamicroPad(void) {
	PSMSG_DEBUG("rcamicroPad")
}

void rcamicroLessNum(void) {
	PSMSG_DEBUG("rcamicroLessNum")
}

void rcamicroNumGreater(void) {
	PSMSG_DEBUG("rcamicroNumGreater")
}

void rcamicroSign(void) {
	PSMSG_DEBUG("rcamicroSign")
}

void rcamicroNumS(void) {
	PSMSG_DEBUG("rcamicroNumS")
}

void rcamicroYDot(void) {
	PSMSG_DEBUG("rcamicroYDot")
}

void rcamicroQ(void) {
	PSMSG_DEBUG("rcamicroQ")
}

void rcamicroDot(void) {
	PSMSG_DEBUG("rcamicroDot")
}

/* Output Vocabulary */
void rcamicroDotR(void) {
	PSMSG_DEBUG("rcamicroDotR")
}

void rcamicroDump(void) {
	PSMSG_DEBUG("rcamicroDump")
}

void rcamicroTrailing(void) {
	PSMSG_DEBUG("rcamicroTrailing")
}

void rcamicroLine(void) {
	PSMSG_DEBUG("rcamicroLine")
}

void rcamicroText(void) {
	PSMSG_DEBUG("rcamicroText")
}

void rcamicroList(void) {
	PSMSG_DEBUG("rcamicroList")
}

void rcamicroL(void) {
	PSMSG_DEBUG("rcamicroL")
}

void rcamicroRightBracket(void) {
	PSMSG_DEBUG("rcamicroRightBracket")
}

/* Editor */
void rcamicroHold(void) {
	PSMSG_DEBUG("rcamicroHold")
}

void rcamicroGap(void) {
	PSMSG_DEBUG("rcamicroGap")
}

void rcamicroT(void) {
	PSMSG_DEBUG("rcamicroT")
}

void rcamicroD(void) {
	PSMSG_DEBUG("rcamicroD")
}

void rcamicroR(void) {
	PSMSG_DEBUG("rcamicroR")
}

void rcamicroI(void) {
	PSMSG_DEBUG("rcamicroI")
}

void rcamicroQuote(void) {
	PSMSG_DEBUG("rcamicroQuote")
}

void rcamicroP(void) {
	PSMSG_DEBUG("rcamicroP")
}

void rcamicroA(void) {
	PSMSG_DEBUG("rcamicroA")
}

void rcamicroCopy(void) {
	PSMSG_DEBUG("rcamicroCopy")
}

void rcamicroDelete(void) {
	PSMSG_DEBUG("rcamicroDelete")
}

void rcamicroTop(void) {
	PSMSG_DEBUG("rcamicroTop")
}

/* Lower Baud Serial I/O */

/* Terminal I/O */
void rcamicroType(void) {
	PSMSG_DEBUG("rcamicroType")
}

void rcamicroCount(void) {
	PSMSG_DEBUG("rcamicroCount")
}

void rcamicroMsg(void) {
	PSMSG_DEBUG("rcamicroMsg")
}

void rcamicroExpect(void) {
	PSMSG_DEBUG("rcamicroExpect")
}

void rcamicroQuit(void) {
	PSMSG_DEBUG("rcamicroQuit")
}

/* Higher Baud Serial I/O */

/* Restart */

/* Options */
void rcamicroDro(void) {
	PSMSG_DEBUG("rcamicroDro")
}

void rcamicroDri(void) {
	PSMSG_DEBUG("rcamicroDri")
}

/* Assembler */

/* String Editor */
void rcamicroCNum(void) {
	PSMSG_DEBUG("rcamicroCNum")
}

void rcamicroNumLeft(void) {
	PSMSG_DEBUG("rcamicroNumLeft")
}

void rcamicroLNum(void) {
	PSMSG_DEBUG("rcamicroLNum")
}

void rcamicroAt(void) {
	PSMSG_DEBUG("rcamicroAt")
}

void rcamicroString(void) {
	PSMSG_DEBUG("rcamicroString")
}

void rcamicroErr(void) {
	PSMSG_DEBUG("rcamicroErr")
}

void rcamicroOneLine(void) {
	PSMSG_DEBUG("rcamicroOneLine")
}

void rcamicroFind(void) {
	PSMSG_DEBUG("rcamicroFind")
}

void rcamicroRemove(void) {
	PSMSG_DEBUG("rcamicroRemove")
}

void rcamicroM(void) {
	PSMSG_DEBUG("rcamicroM")
}

void rcamicroB(void) {
	PSMSG_DEBUG("rcamicroB")
}

void rcamicroN(void) {
	PSMSG_DEBUG("rcamicroN")
}

void rcamicroF(void) {
	PSMSG_DEBUG("rcamicroF")
}

void rcamicroX(void) {
	PSMSG_DEBUG("rcamicroX")
}

void rcamicroTill(void) {
	PSMSG_DEBUG("rcamicroTill")
}

void rcamicroC(void) {
	PSMSG_DEBUG("rcamicroC")
}

/* Character Editor Primitives */
void rcamicroMove(void) {
	PSMSG_DEBUG("rcamicroMove")
}

/* Disk Utilities */
void rcamicroFill(void) {
	PSMSG_DEBUG("rcamicroFill")
}

void rcamicroRight(void) {
	PSMSG_DEBUG("rcamicroRight")
}

void rcamicroBackup(void) {
	PSMSG_DEBUG("rcamicroBackup")
}

void rcamicroSweep(void) {
	PSMSG_DEBUG("rcamicroSweep")
}

/* Disk Compare */
void rcamicroMatch(void) {
	PSMSG_DEBUG("rcamicroMatch")
}

/* Disk Error Checking */
void rcamicroStatus(void) {
	PSMSG_DEBUG("rcamicroStatus")
}

void rcamicroError(void) {
	PSMSG_DEBUG("rcamicroError")
}

void rcamicroLog(void) {
	PSMSG_DEBUG("rcamicroLog")
}

void rcamicroNotify(void) {
	PSMSG_DEBUG("rcamicroNotify")
}

void rcamicroDup(void) {
	PSMSG_DEBUG("rcamicroDup")
}

void rcamicroXBlock(void) {
	PSMSG_DEBUG("rcamicroXBlock")
}

/* Documentation */
void rcamicroIndex(void) {
	PSMSG_DEBUG("rcamicroIndex")
}

void rcamicroTriad(void) {
	PSMSG_DEBUG("rcamicroTriad")
}

void rcamicroShow(void) {
	PSMSG_DEBUG("rcamicroShow")
}

/* Reconfiguration */
void rcamicroBStore(void) {
	PSMSG_DEBUG("rcamicroBStore")
}

void rcamicroPStore(void) {
	PSMSG_DEBUG("rcamicroPStore")
}

void rcamicroDisk(void) {
	PSMSG_DEBUG("rcamicroDisk")
}

/* Compiler */
void rcamicroAdrs(void) {
	PSMSG_DEBUG("rcamicroAdrs")
}

void rcamicroHere(void) {
	PSMSG_DEBUG("rcamicroHere")
}

void rcamicroOrg(void) {
	PSMSG_DEBUG("rcamicroOrg")
}

void rcamicroCComma(void) {
	PSMSG_DEBUG("rcamicroCComma")
}

void rcamicroComma(void) {
	PSMSG_DEBUG("rcamicroComma")
}

/* Target Vocabulary */
void rcamicroClear(void) {
	PSMSG_DEBUG("rcamicroClear")
}

void rcamicroSmudge(void) {
	PSMSG_DEBUG("rcamicroSmudge")
}

void rcamicroEmplace(void) {
	PSMSG_DEBUG("rcamicroEmplace")
}

/* Target Dictionary */
void rcamicroHFetch(void) {
	PSMSG_DEBUG("rcamicroHFetch")
}

void rcamicroHStore(void) {
	PSMSG_DEBUG("rcamicroHStore")
}

void rcamicroInside(void) {
	PSMSG_DEBUG("rcamicroInside")
}

void rcamicroCFetch(void) {
	PSMSG_DEBUG("rcamicroCFetch")
}

void rcamicroCStore(void) {
	PSMSG_DEBUG("rcamicroCStore")
}

void rcamicroFetch(void) {
	PSMSG_DEBUG("rcamicroFetch")
}

void rcamicroStore(void) {
	PSMSG_DEBUG("rcamicroStore")
}

/* Target Compiler */
void rcamicroCommaHost(void) {
	PSMSG_DEBUG("rcamicroCommaHost")
}

void rcamicroSemicolonCode(void) {
	PSMSG_DEBUG("rcamicroSemicolonCode")
}

void rcamicroMinusTick(void) {
	PSMSG_DEBUG("rcamicroMinusTick")
}

void rcamicroBackslash(void) {
	PSMSG_DEBUG("rcamicroBackslash")
}

void rcamicroCompile(void) {
	PSMSG_DEBUG("rcamicroCompile")
}

/* Target Assembler */
void rcamicroEqu(void) {
	PSMSG_DEBUG("rcamicroEqu")
}

void rcamicroLabel(void) {
	PSMSG_DEBUG("rcamicroLabel")
}

void rcamicroCr(void) {
	PSMSG_DEBUG("rcamicroCr")
}

void rcamicroComputer(void) {
	PSMSG_DEBUG("rcamicroComputer")
}

/* RAM Defining */
void rcamicroAccessible(void) {
	PSMSG_DEBUG("rcamicroAccessible")
}

void rcamicroConstant(void) {
	PSMSG_DEBUG("rcamicroConstant")
}

void rcamicroUser(void) {
	PSMSG_DEBUG("rcamicroUser")
}

void rcamicroTable(void) {
	PSMSG_DEBUG("rcamicroTable")
}

void rcamicroDoes(void) {
	PSMSG_DEBUG("rcamicroDoes")
}

/* PROM Defining */
void rcamicroThere(void) {
	PSMSG_DEBUG("rcamicroThere")
}

void rcamicroRes(void) {
	PSMSG_DEBUG("rcamicroRes")
}

/* Compiling Words */
void rcamicroSemicolon(void) {
	PSMSG_DEBUG("rcamicroSemicolon")
}

void rcamicroHColon(void) {
	PSMSG_DEBUG("rcamicroHColon")
}

void rcamicroColon(void) {
	PSMSG_DEBUG("rcamicroColon")
}

/* Initialize Symbols */

/* Compiler Output */
void rcamicroLeader(void) {
	PSMSG_DEBUG("rcamicroLeader")
}

void rcamicroProms(void) {
	PSMSG_DEBUG("rcamicroProms")
}

void rcamicroEntire(void) {
	PSMSG_DEBUG("rcamicroEntire")
}

void rcamicroSimulate(void) {
	PSMSG_DEBUG("rcamicroSimulate")
}

void rcamicroZero(void) {
	PSMSG_DEBUG("rcamicroZero")
}

void rcamicroLit(void) {
	PSMSG_DEBUG("rcamicroLit")
}

void rcamicroExecute(void) {
	PSMSG_DEBUG("rcamicroExecute")
}

void rcamicroSemicolonS(void) {
	PSMSG_DEBUG("rcamicroSemicolonS")
}

void rcamicroUStar(void) {
	PSMSG_DEBUG("rcamicroUStar")
}

void rcamicroUSlash(void) {
	PSMSG_DEBUG("rcamicroUSlash")
}

void rcamicroCz(void) {
	PSMSG_DEBUG("rcamicroCz")
}

void rcamicroZeroEqual(void) {
	PSMSG_DEBUG("rcamicroZeroEqual")
}

void rcamicroPlus(void) {
	PSMSG_DEBUG("rcamicroPlus")
}

void rcamicroTwoStar(void) {
	PSMSG_DEBUG("rcamicroTwoStar")
}

void rcamicroMinus(void) {
	PSMSG_DEBUG("rcamicroMinus")
}

void rcamicroAnd(void) {
	PSMSG_DEBUG("rcamicroAnd")
}

void rcamicroBinary(void) {
	PSMSG_DEBUG("rcamicroBinary")
}

void rcamicroOnePlus(void) {
	PSMSG_DEBUG("rcamicroOnePlus")
}

void rcamicroTwoPlus(void) {
	PSMSG_DEBUG("rcamicroTwoPlus")
}

void rcamicroOver(void) {
	PSMSG_DEBUG("rcamicroOver")
}

void rcamicroMinusDup(void) {
	PSMSG_DEBUG("rcamicroMinusDup")
}

void rcamicroSwap(void) {
	PSMSG_DEBUG("rcamicroSwap")
}

void rcamicroPlusStore(void) {
	PSMSG_DEBUG("rcamicroPlusStore")
}

void rcamicroFromR(void) {
	PSMSG_DEBUG("rcamicroFromR")
}

void rcamicroRTo(void) {
	PSMSG_DEBUG("rcamicroRTo")
}

void rcamicroRot(void) {
	PSMSG_DEBUG("rcamicroRot")
}

void rcamicroTwoPop(void) {
	PSMSG_DEBUG("rcamicroTwoPop")
}

void rcamicroOnePop(void) {
	PSMSG_DEBUG("rcamicroOnePop")
}

/* More Definitions */
void rcamicroEqual(void) {
	PSMSG_DEBUG("rcamicroEqual")
}

/* Cross Illustration */
void rcamicroLittle(void) {
	PSMSG_DEBUG("rcamicroLittle")
}

void rcamicroTimes(void) {
	PSMSG_DEBUG("rcamicroTimes")
}

void rcamicroTest(void) {
	PSMSG_DEBUG("rcamicroTest")
}

#endif
