#ifndef H2ORCA2
#define H2ORCA2

/* Forth Inc.'s "RCA1802 microFORTH" FORTH */

/* Primitives */

/* Definitions */
void rcamicroImmediate(void) {
	MESSSAGE_DEBUG("rcamicroImmediate")
}

void rcamicroParen(void) {
	MESSSAGE_DEBUG("rcamicroParen")
}

void rcamicroEightStar(void) {
	MESSSAGE_DEBUG("rcamicroEightStar")
}

void rcamicroLoad(void) {
	MESSSAGE_DEBUG("rcamicroLoad")
}

void rcamicroBuilds(void) {
	MESSSAGE_DEBUG("rcamicroBuilds")
}

void rcamicroBlock(void) {
	MESSSAGE_DEBUG("rcamicroBlock")
}

void rcamicroTick(void) {
	MESSSAGE_DEBUG("rcamicroTick")
}

void rcamicroEraseCore(void) {
	MESSSAGE_DEBUG("rcamicroEraseCore")
}

void rcamicroFlush(void) {
	MESSSAGE_DEBUG("rcamicroFlush")
}

void rcamicroTask(void) {
	MESSSAGE_DEBUG("rcamicroTask")
}

/* Vocabulary Assembler */
void rcamicroVanish(void) {
	MESSSAGE_DEBUG("rcamicroVanish")
}

void rcamicroCode(void) {
	MESSSAGE_DEBUG("rcamicroCode")
}

void rcamicroColonCode(void) {
	MESSSAGE_DEBUG("rcamicroColonCode")
}

void rcamicroPage(void) {
	MESSSAGE_DEBUG("rcamicroPage")
}

void rcamicroOctal(void) {
	MESSSAGE_DEBUG("rcamicroOctal")
}

void rcamicroDecimal(void) {
	MESSSAGE_DEBUG("rcamicroDecimal")
}

void rcamicroHex(void) {
	MESSSAGE_DEBUG("rcamicroHex")
}

void rcamicroCVariable(void) {
	MESSSAGE_DEBUG("rcamicroCVariable")
}

void rcamicroVariable(void) {
	MESSSAGE_DEBUG("rcamicroVariable")
}

/* Arithmetic Operators */
void rcamicroGreater(void) {
	MESSSAGE_DEBUG("rcamicroGreater")
}

void rcamicroMStar(void) {
	MESSSAGE_DEBUG("rcamicroMStar")
}

void rcamicroMSlashMod(void) {
	MESSSAGE_DEBUG("rcamicroMSlashMod")
}

void rcamicroStarSlashMod(void) {
	MESSSAGE_DEBUG("rcamicroStarSlashMod")
}

void rcamicroStarSlash(void) {
	MESSSAGE_DEBUG("rcamicroStarSlashMod")
}

void rcamicroSlashMod(void) {
	MESSSAGE_DEBUG("rcamicroSlashMod")
}

void rcamicroMod(void) {
	MESSSAGE_DEBUG("rcamicroMod")
}

void rcamicroStar(void) {
	MESSSAGE_DEBUG("rcamicroStar")
}

void rcamicroSlash(void) {
	MESSSAGE_DEBUG("rcamicroSlash")
}

void rcamicroMax(void) {
	MESSSAGE_DEBUG("rcamicroMax")
}

void rcamicroMin(void) {
	MESSSAGE_DEBUG("rcamicroMin")
}

void rcamicroNum(void) {
	MESSSAGE_DEBUG("rcamicroNum")
}

void rcamicroPlusC(void) {
	MESSSAGE_DEBUG("rcamicroPlusC")
}

void rcamicroOneRg(void) {
	MESSSAGE_DEBUG("rcamicroOneRg")
}

void rcamicroAlu(void) {
	MESSSAGE_DEBUG("rcamicroAlu")
}

/* Macros */
void rcamicroEntry(void) {
	MESSSAGE_DEBUG("rcamicroEntry")
}

void rcamicroNext(void) {
	MESSSAGE_DEBUG("rcamicroNext")
}

void rcamicroZeroNumLd(void) {
	MESSSAGE_DEBUG("rcamicroZeroNumLd")
}

void rcamicroDst(void) {
	MESSSAGE_DEBUG("rcamicroDst")
}

void rcamicroPush(void) {
	MESSSAGE_DEBUG("rcamicroPush")
}

/* Transfers */
void rcamicroEfl(void) {
	MESSSAGE_DEBUG("rcamicroEfl")
}

void rcamicroLess(void) {
	MESSSAGE_DEBUG("rcamicroLess")
}

void rcamicroZeroLess(void) {
	MESSSAGE_DEBUG("rcamicroZeroLess")
}

void rcamicroIf(void) {
	MESSSAGE_DEBUG("rcamicroIf")
}

void rcamicroThen(void) {
	MESSSAGE_DEBUG("rcamicroThen")
}

void rcamicroElse(void) {
	MESSSAGE_DEBUG("rcamicroElse")
}

void rcamicroEnd(void) {
	MESSSAGE_DEBUG("rcamicroEnd")
}

void rcamicroBr(void) {
	MESSSAGE_DEBUG("rcamicroBr")
}

void rcamicroLs(void) {
	MESSSAGE_DEBUG("rcamicroLs")
}

/* Compiler */
void rcamicroYMark(void) {
	MESSSAGE_DEBUG("rcamicroYMark")
}

void rcamicroYThen(void) {
	MESSSAGE_DEBUG("rcamicroYThen")
}

void rcamicroDo(void) {
	MESSSAGE_DEBUG("rcamicroDo")
}

void rcamicroLoop(void) {
	MESSSAGE_DEBUG("rcamicroLoop")
}

void rcamicroPlusLoop(void) {
	MESSSAGE_DEBUG("rcamicroPlusLoop")
}

void rcamicroWhile(void) {
	MESSSAGE_DEBUG("rcamicroWhile")
}

void rcamicroBegin(void) {
	MESSSAGE_DEBUG("rcamicroBegin")
}

/* Errors */
void rcamicroMessage(void) {
	MESSSAGE_DEBUG("rcamicroMessage")
}

void rcamicroQuestion(void) {
	MESSSAGE_DEBUG("rcamicroQuestion")
}

void rcamicroQStack(void) {
	MESSSAGE_DEBUG("rcamicroQStack")
}

void rcamicroYNumber(void) {
	MESSSAGE_DEBUG("rcamicroYNumber")
}

/* Vocabularies */
void rcamicroVocabulary(void) {
	MESSSAGE_DEBUG("rcamicroVocabulary")
}

void rcamicroDefinitions(void) {
	MESSSAGE_DEBUG("rcamicroDefinitions")
}

void rcamicroForget(void) {
	MESSSAGE_DEBUG("rcamicroForget")
}

void rcamicroInLine(void) {
	MESSSAGE_DEBUG("rcamicroInLine")
}

void rcamicroXTick(void) {
	MESSSAGE_DEBUG("rcamicroXTick")
}

void rcamicroXSwap(void) {
	MESSSAGE_DEBUG("rcamicroXSwap")
}

/* Number Formatting */
void rcamicroSpaces(void) {
	MESSSAGE_DEBUG("rcamicroSpaces")
}

void rcamicroPad(void) {
	MESSSAGE_DEBUG("rcamicroPad")
}

void rcamicroLessNum(void) {
	MESSSAGE_DEBUG("rcamicroLessNum")
}

void rcamicroNumGreater(void) {
	MESSSAGE_DEBUG("rcamicroNumGreater")
}

void rcamicroSign(void) {
	MESSSAGE_DEBUG("rcamicroSign")
}

void rcamicroNumS(void) {
	MESSSAGE_DEBUG("rcamicroNumS")
}

void rcamicroYDot(void) {
	MESSSAGE_DEBUG("rcamicroYDot")
}

void rcamicroQ(void) {
	MESSSAGE_DEBUG("rcamicroQ")
}

void rcamicroDot(void) {
	MESSSAGE_DEBUG("rcamicroDot")
}

/* Output Vocabulary */
void rcamicroDotR(void) {
	MESSSAGE_DEBUG("rcamicroDotR")
}

void rcamicroDump(void) {
	MESSSAGE_DEBUG("rcamicroDump")
}

void rcamicroTrailing(void) {
	MESSSAGE_DEBUG("rcamicroTrailing")
}

void rcamicroLine(void) {
	MESSSAGE_DEBUG("rcamicroLine")
}

void rcamicroText(void) {
	MESSSAGE_DEBUG("rcamicroText")
}

void rcamicroList(void) {
	MESSSAGE_DEBUG("rcamicroList")
}

void rcamicroL(void) {
	MESSSAGE_DEBUG("rcamicroL")
}

void rcamicroRightBracket(void) {
	MESSSAGE_DEBUG("rcamicroRightBracket")
}

/* Editor */
void rcamicroHold(void) {
	MESSSAGE_DEBUG("rcamicroHold")
}

void rcamicroGap(void) {
	MESSSAGE_DEBUG("rcamicroGap")
}

void rcamicroT(void) {
	MESSSAGE_DEBUG("rcamicroT")
}

void rcamicroD(void) {
	MESSSAGE_DEBUG("rcamicroD")
}

void rcamicroR(void) {
	MESSSAGE_DEBUG("rcamicroR")
}

void rcamicroI(void) {
	MESSSAGE_DEBUG("rcamicroI")
}

void rcamicroQuote(void) {
	MESSSAGE_DEBUG("rcamicroQuote")
}

void rcamicroP(void) {
	MESSSAGE_DEBUG("rcamicroP")
}

void rcamicroA(void) {
	MESSSAGE_DEBUG("rcamicroA")
}

void rcamicroCopy(void) {
	MESSSAGE_DEBUG("rcamicroCopy")
}

void rcamicroDelete(void) {
	MESSSAGE_DEBUG("rcamicroDelete")
}

void rcamicroTop(void) {
	MESSSAGE_DEBUG("rcamicroTop")
}

/* Lower Baud Serial I/O */

/* Terminal I/O */
void rcamicroType(void) {
	MESSSAGE_DEBUG("rcamicroType")
}

void rcamicroCount(void) {
	MESSSAGE_DEBUG("rcamicroCount")
}

void rcamicroMsg(void) {
	MESSSAGE_DEBUG("rcamicroMsg")
}

void rcamicroExpect(void) {
	MESSSAGE_DEBUG("rcamicroExpect")
}

void rcamicroQuit(void) {
	MESSSAGE_DEBUG("rcamicroQuit")
}

/* Higher Baud Serial I/O */

/* Restart */

/* Options */
void rcamicroDro(void) {
	MESSSAGE_DEBUG("rcamicroDro")
}

void rcamicroDri(void) {
	MESSSAGE_DEBUG("rcamicroDri")
}

/* Assembler */

/* String Editor */
void rcamicroCNum(void) {
	MESSSAGE_DEBUG("rcamicroCNum")
}

void rcamicroNumLeft(void) {
	MESSSAGE_DEBUG("rcamicroNumLeft")
}

void rcamicroLNum(void) {
	MESSSAGE_DEBUG("rcamicroLNum")
}

void rcamicroAt(void) {
	MESSSAGE_DEBUG("rcamicroAt")
}

void rcamicroString(void) {
	MESSSAGE_DEBUG("rcamicroString")
}

void rcamicroErr(void) {
	MESSSAGE_DEBUG("rcamicroErr")
}

void rcamicroOneLine(void) {
	MESSSAGE_DEBUG("rcamicroOneLine")
}

void rcamicroFind(void) {
	MESSSAGE_DEBUG("rcamicroFind")
}

void rcamicroRemove(void) {
	MESSSAGE_DEBUG("rcamicroRemove")
}

void rcamicroM(void) {
	MESSSAGE_DEBUG("rcamicroM")
}

void rcamicroB(void) {
	MESSSAGE_DEBUG("rcamicroB")
}

void rcamicroN(void) {
	MESSSAGE_DEBUG("rcamicroN")
}

void rcamicroF(void) {
	MESSSAGE_DEBUG("rcamicroF")
}

void rcamicroX(void) {
	MESSSAGE_DEBUG("rcamicroX")
}

void rcamicroTill(void) {
	MESSSAGE_DEBUG("rcamicroTill")
}

void rcamicroC(void) {
	MESSSAGE_DEBUG("rcamicroC")
}

/* Character Editor Primitives */
void rcamicroMove(void) {
	MESSSAGE_DEBUG("rcamicroMove")
}

/* Disk Utilities */
void rcamicroFill(void) {
	MESSSAGE_DEBUG("rcamicroFill")
}

void rcamicroRight(void) {
	MESSSAGE_DEBUG("rcamicroRight")
}

void rcamicroBackup(void) {
	MESSSAGE_DEBUG("rcamicroBackup")
}

void rcamicroSweep(void) {
	MESSSAGE_DEBUG("rcamicroSweep")
}

/* Disk Compare */
void rcamicroMatch(void) {
	MESSSAGE_DEBUG("rcamicroMatch")
}

/* Disk Error Checking */
void rcamicroStatus(void) {
	MESSSAGE_DEBUG("rcamicroStatus")
}

void rcamicroError(void) {
	MESSSAGE_DEBUG("rcamicroError")
}

void rcamicroLog(void) {
	MESSSAGE_DEBUG("rcamicroLog")
}

void rcamicroNotify(void) {
	MESSSAGE_DEBUG("rcamicroNotify")
}

void rcamicroDup(void) {
	MESSSAGE_DEBUG("rcamicroDup")
}

void rcamicroXBlock(void) {
	MESSSAGE_DEBUG("rcamicroXBlock")
}

/* Documentation */
void rcamicroIndex(void) {
	MESSSAGE_DEBUG("rcamicroIndex")
}

void rcamicroTriad(void) {
	MESSSAGE_DEBUG("rcamicroTriad")
}

void rcamicroShow(void) {
	MESSSAGE_DEBUG("rcamicroShow")
}

/* Reconfiguration */
void rcamicroBStore(void) {
	MESSSAGE_DEBUG("rcamicroBStore")
}

void rcamicroPStore(void) {
	MESSSAGE_DEBUG("rcamicroPStore")
}

void rcamicroDisk(void) {
	MESSSAGE_DEBUG("rcamicroDisk")
}

/* Compiler */
void rcamicroAdrs(void) {
	MESSSAGE_DEBUG("rcamicroAdrs")
}

void rcamicroHere(void) {
	MESSSAGE_DEBUG("rcamicroHere")
}

void rcamicroOrg(void) {
	MESSSAGE_DEBUG("rcamicroOrg")
}

void rcamicroCComma(void) {
	MESSSAGE_DEBUG("rcamicroCComma")
}

void rcamicroComma(void) {
	MESSSAGE_DEBUG("rcamicroComma")
}

/* Target Vocabulary */
void rcamicroClear(void) {
	MESSSAGE_DEBUG("rcamicroClear")
}

void rcamicroSmudge(void) {
	MESSSAGE_DEBUG("rcamicroSmudge")
}

void rcamicroEmplace(void) {
	MESSSAGE_DEBUG("rcamicroEmplace")
}

/* Target Dictionary */
void rcamicroHFetch(void) {
	MESSSAGE_DEBUG("rcamicroHFetch")
}

void rcamicroHStore(void) {
	MESSSAGE_DEBUG("rcamicroHStore")
}

void rcamicroInside(void) {
	MESSSAGE_DEBUG("rcamicroInside")
}

void rcamicroCFetch(void) {
	MESSSAGE_DEBUG("rcamicroCFetch")
}

void rcamicroCStore(void) {
	MESSSAGE_DEBUG("rcamicroCStore")
}

void rcamicroFetch(void) {
	MESSSAGE_DEBUG("rcamicroFetch")
}

void rcamicroStore(void) {
	MESSSAGE_DEBUG("rcamicroStore")
}

/* Target Compiler */
void rcamicroCommaHost(void) {
	MESSSAGE_DEBUG("rcamicroCommaHost")
}

void rcamicroSemicolonCode(void) {
	MESSSAGE_DEBUG("rcamicroSemicolonCode")
}

void rcamicroMinusTick(void) {
	MESSSAGE_DEBUG("rcamicroMinusTick")
}

void rcamicroBackslash(void) {
	MESSSAGE_DEBUG("rcamicroBackslash")
}

void rcamicroCompile(void) {
	MESSSAGE_DEBUG("rcamicroCompile")
}

/* Target Assembler */
void rcamicroEqu(void) {
	MESSSAGE_DEBUG("rcamicroEqu")
}

void rcamicroLabel(void) {
	MESSSAGE_DEBUG("rcamicroLabel")
}

void rcamicroCr(void) {
	MESSSAGE_DEBUG("rcamicroCr")
}

void rcamicroComputer(void) {
	MESSSAGE_DEBUG("rcamicroComputer")
}

/* RAM Defining */
void rcamicroAccessible(void) {
	MESSSAGE_DEBUG("rcamicroAccessible")
}

void rcamicroConstant(void) {
	MESSSAGE_DEBUG("rcamicroConstant")
}

void rcamicroUser(void) {
	MESSSAGE_DEBUG("rcamicroUser")
}

void rcamicroTable(void) {
	MESSSAGE_DEBUG("rcamicroTable")
}

void rcamicroDoes(void) {
	MESSSAGE_DEBUG("rcamicroDoes")
}

/* PROM Defining */
void rcamicroThere(void) {
	MESSSAGE_DEBUG("rcamicroThere")
}

void rcamicroRes(void) {
	MESSSAGE_DEBUG("rcamicroRes")
}

/* Compiling Words */
void rcamicroSemicolon(void) {
	MESSSAGE_DEBUG("rcamicroSemicolon")
}

void rcamicroHColon(void) {
	MESSSAGE_DEBUG("rcamicroHColon")
}

void rcamicroColon(void) {
	MESSSAGE_DEBUG("rcamicroColon")
}

/* Initialize Symbols */

/* Compiler Output */
void rcamicroLeader(void) {
	MESSSAGE_DEBUG("rcamicroLeader")
}

void rcamicroProms(void) {
	MESSSAGE_DEBUG("rcamicroProms")
}

void rcamicroEntire(void) {
	MESSSAGE_DEBUG("rcamicroEntire")
}

void rcamicroSimulate(void) {
	MESSSAGE_DEBUG("rcamicroSimulate")
}

void rcamicroZero(void) {
	MESSSAGE_DEBUG("rcamicroZero")
}

void rcamicroLit(void) {
	MESSSAGE_DEBUG("rcamicroLit")
}

void rcamicroExecute(void) {
	MESSSAGE_DEBUG("rcamicroExecute")
}

void rcamicroSemicolonS(void) {
	MESSSAGE_DEBUG("rcamicroSemicolonS")
}

void rcamicroUStar(void) {
	MESSSAGE_DEBUG("rcamicroUStar")
}

void rcamicroUSlash(void) {
	MESSSAGE_DEBUG("rcamicroUSlash")
}

void rcamicroCz(void) {
	MESSSAGE_DEBUG("rcamicroCz")
}

void rcamicroZeroEqual(void) {
	MESSSAGE_DEBUG("rcamicroZeroEqual")
}

void rcamicroPlus(void) {
	MESSSAGE_DEBUG("rcamicroPlus")
}

void rcamicroTwoStar(void) {
	MESSSAGE_DEBUG("rcamicroTwoStar")
}

void rcamicroMinus(void) {
	MESSSAGE_DEBUG("rcamicroMinus")
}

void rcamicroAnd(void) {
	MESSSAGE_DEBUG("rcamicroAnd")
}

void rcamicroBinary(void) {
	MESSSAGE_DEBUG("rcamicroBinary")
}

void rcamicroOnePlus(void) {
	MESSSAGE_DEBUG("rcamicroOnePlus")
}

void rcamicroTwoPlus(void) {
	MESSSAGE_DEBUG("rcamicroTwoPlus")
}

void rcamicroOver(void) {
	MESSSAGE_DEBUG("rcamicroOver")
}

void rcamicroMinusDup(void) {
	MESSSAGE_DEBUG("rcamicroMinusDup")
}

void rcamicroSwap(void) {
	MESSSAGE_DEBUG("rcamicroSwap")
}

void rcamicroPlusStore(void) {
	MESSSAGE_DEBUG("rcamicroPlusStore")
}

void rcamicroFromR(void) {
	MESSSAGE_DEBUG("rcamicroFromR")
}

void rcamicroRTo(void) {
	MESSSAGE_DEBUG("rcamicroRTo")
}

void rcamicroRot(void) {
	MESSSAGE_DEBUG("rcamicroRot")
}

void rcamicroTwoPop(void) {
	MESSSAGE_DEBUG("rcamicroTwoPop")
}

void rcamicroOnePop(void) {
	MESSSAGE_DEBUG("rcamicroOnePop")
}

/* More Definitions */
void rcamicroEqual(void) {
	MESSSAGE_DEBUG("rcamicroEqual")
}

/* Cross Illustration */
void rcamicroLittle(void) {
	MESSSAGE_DEBUG("rcamicroLittle")
}

void rcamicroTimes(void) {
	MESSSAGE_DEBUG("rcamicroTimes")
}

void rcamicroTest(void) {
	MESSSAGE_DEBUG("rcamicroTest")
}

#endif
