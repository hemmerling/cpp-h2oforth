#ifndef H2ORCA2
#define H2ORCA2

/* Forth Inc.'s "RCA1802 microFORTH" FORTH */

/* Primitives */

/* Definitions */
void rcamicroImmediate(void) {
	SMSG_DEBUG("rcamicroImmediate")
}

void rcamicroParen(void) {
	SMSG_DEBUG("rcamicroParen")
}

void rcamicroEightStar(void) {
	SMSG_DEBUG("rcamicroEightStar")
}

void rcamicroLoad(void) {
	SMSG_DEBUG("rcamicroLoad")
}

void rcamicroBuilds(void) {
	SMSG_DEBUG("rcamicroBuilds")
}

void rcamicroBlock(void) {
	SMSG_DEBUG("rcamicroBlock")
}

void rcamicroTick(void) {
	SMSG_DEBUG("rcamicroTick")
}

void rcamicroEraseCore(void) {
	SMSG_DEBUG("rcamicroEraseCore")
}

void rcamicroFlush(void) {
	SMSG_DEBUG("rcamicroFlush")
}

void rcamicroTask(void) {
	SMSG_DEBUG("rcamicroTask")
}

/* Vocabulary Assembler */
void rcamicroVanish(void) {
	SMSG_DEBUG("rcamicroVanish")
}

void rcamicroCode(void) {
	SMSG_DEBUG("rcamicroCode")
}

void rcamicroColonCode(void) {
	SMSG_DEBUG("rcamicroColonCode")
}

void rcamicroPage(void) {
	SMSG_DEBUG("rcamicroPage")
}

void rcamicroOctal(void) {
	SMSG_DEBUG("rcamicroOctal")
}

void rcamicroDecimal(void) {
	SMSG_DEBUG("rcamicroDecimal")
}

void rcamicroHex(void) {
	SMSG_DEBUG("rcamicroHex")
}

void rcamicroCVariable(void) {
	SMSG_DEBUG("rcamicroCVariable")
}

void rcamicroVariable(void) {
	SMSG_DEBUG("rcamicroVariable")
}

/* Arithmetic Operators */
void rcamicroGreater(void) {
	SMSG_DEBUG("rcamicroGreater")
}

void rcamicroMStar(void) {
	SMSG_DEBUG("rcamicroMStar")
}

void rcamicroMSlashMod(void) {
	SMSG_DEBUG("rcamicroMSlashMod")
}

void rcamicroStarSlashMod(void) {
	SMSG_DEBUG("rcamicroStarSlashMod")
}

void rcamicroStarSlash(void) {
	SMSG_DEBUG("rcamicroStarSlashMod")
}

void rcamicroSlashMod(void) {
	SMSG_DEBUG("rcamicroSlashMod")
}

void rcamicroMod(void) {
	SMSG_DEBUG("rcamicroMod")
}

void rcamicroStar(void) {
	SMSG_DEBUG("rcamicroStar")
}

void rcamicroSlash(void) {
	SMSG_DEBUG("rcamicroSlash")
}

void rcamicroMax(void) {
	SMSG_DEBUG("rcamicroMax")
}

void rcamicroMin(void) {
	SMSG_DEBUG("rcamicroMin")
}

void rcamicroNum(void) {
	SMSG_DEBUG("rcamicroNum")
}

void rcamicroPlusC(void) {
	SMSG_DEBUG("rcamicroPlusC")
}

void rcamicroOneRg(void) {
	SMSG_DEBUG("rcamicroOneRg")
}

void rcamicroAlu(void) {
	SMSG_DEBUG("rcamicroAlu")
}

/* Macros */
void rcamicroEntry(void) {
	SMSG_DEBUG("rcamicroEntry")
}

void rcamicroNext(void) {
	SMSG_DEBUG("rcamicroNext")
}

void rcamicroZeroNumLd(void) {
	SMSG_DEBUG("rcamicroZeroNumLd")
}

void rcamicroDst(void) {
	SMSG_DEBUG("rcamicroDst")
}

void rcamicroPush(void) {
	SMSG_DEBUG("rcamicroPush")
}

/* Transfers */
void rcamicroEfl(void) {
	SMSG_DEBUG("rcamicroEfl")
}

void rcamicroLess(void) {
	SMSG_DEBUG("rcamicroLess")
}

void rcamicroZeroLess(void) {
	SMSG_DEBUG("rcamicroZeroLess")
}

void rcamicroIf(void) {
	SMSG_DEBUG("rcamicroIf")
}

void rcamicroThen(void) {
	SMSG_DEBUG("rcamicroThen")
}

void rcamicroElse(void) {
	SMSG_DEBUG("rcamicroElse")
}

void rcamicroEnd(void) {
	SMSG_DEBUG("rcamicroEnd")
}

void rcamicroBr(void) {
	SMSG_DEBUG("rcamicroBr")
}

void rcamicroLs(void) {
	SMSG_DEBUG("rcamicroLs")
}

/* Compiler */
void rcamicroYMark(void) {
	SMSG_DEBUG("rcamicroYMark")
}

void rcamicroYThen(void) {
	SMSG_DEBUG("rcamicroYThen")
}

void rcamicroDo(void) {
	SMSG_DEBUG("rcamicroDo")
}

void rcamicroLoop(void) {
	SMSG_DEBUG("rcamicroLoop")
}

void rcamicroPlusLoop(void) {
	SMSG_DEBUG("rcamicroPlusLoop")
}

void rcamicroWhile(void) {
	SMSG_DEBUG("rcamicroWhile")
}

void rcamicroBegin(void) {
	SMSG_DEBUG("rcamicroBegin")
}

/* Errors */
void rcamicroMessage(void) {
	SMSG_DEBUG("rcamicroMessage")
}

void rcamicroQuestion(void) {
	SMSG_DEBUG("rcamicroQuestion")
}

void rcamicroQStack(void) {
	SMSG_DEBUG("rcamicroQStack")
}

void rcamicroYNumber(void) {
	SMSG_DEBUG("rcamicroYNumber")
}

/* Vocabularies */
void rcamicroVocabulary(void) {
	SMSG_DEBUG("rcamicroVocabulary")
}

void rcamicroDefinitions(void) {
	SMSG_DEBUG("rcamicroDefinitions")
}

void rcamicroForget(void) {
	SMSG_DEBUG("rcamicroForget")
}

void rcamicroInLine(void) {
	SMSG_DEBUG("rcamicroInLine")
}

void rcamicroXTick(void) {
	SMSG_DEBUG("rcamicroXTick")
}

void rcamicroXSwap(void) {
	SMSG_DEBUG("rcamicroXSwap")
}

/* Number Formatting */
void rcamicroSpaces(void) {
	SMSG_DEBUG("rcamicroSpaces")
}

void rcamicroPad(void) {
	SMSG_DEBUG("rcamicroPad")
}

void rcamicroLessNum(void) {
	SMSG_DEBUG("rcamicroLessNum")
}

void rcamicroNumGreater(void) {
	SMSG_DEBUG("rcamicroNumGreater")
}

void rcamicroSign(void) {
	SMSG_DEBUG("rcamicroSign")
}

void rcamicroNumS(void) {
	SMSG_DEBUG("rcamicroNumS")
}

void rcamicroYDot(void) {
	SMSG_DEBUG("rcamicroYDot")
}

void rcamicroQ(void) {
	SMSG_DEBUG("rcamicroQ")
}

void rcamicroDot(void) {
	SMSG_DEBUG("rcamicroDot")
}

/* Output Vocabulary */
void rcamicroDotR(void) {
	SMSG_DEBUG("rcamicroDotR")
}

void rcamicroDump(void) {
	SMSG_DEBUG("rcamicroDump")
}

void rcamicroTrailing(void) {
	SMSG_DEBUG("rcamicroTrailing")
}

void rcamicroLine(void) {
	SMSG_DEBUG("rcamicroLine")
}

void rcamicroText(void) {
	SMSG_DEBUG("rcamicroText")
}

void rcamicroList(void) {
	SMSG_DEBUG("rcamicroList")
}

void rcamicroL(void) {
	SMSG_DEBUG("rcamicroL")
}

void rcamicroRightBracket(void) {
	SMSG_DEBUG("rcamicroRightBracket")
}

/* Editor */
void rcamicroHold(void) {
	SMSG_DEBUG("rcamicroHold")
}

void rcamicroGap(void) {
	SMSG_DEBUG("rcamicroGap")
}

void rcamicroT(void) {
	SMSG_DEBUG("rcamicroT")
}

void rcamicroD(void) {
	SMSG_DEBUG("rcamicroD")
}

void rcamicroR(void) {
	SMSG_DEBUG("rcamicroR")
}

void rcamicroI(void) {
	SMSG_DEBUG("rcamicroI")
}

void rcamicroQuote(void) {
	SMSG_DEBUG("rcamicroQuote")
}

void rcamicroP(void) {
	SMSG_DEBUG("rcamicroP")
}

void rcamicroA(void) {
	SMSG_DEBUG("rcamicroA")
}

void rcamicroCopy(void) {
	SMSG_DEBUG("rcamicroCopy")
}

void rcamicroDelete(void) {
	SMSG_DEBUG("rcamicroDelete")
}

void rcamicroTop(void) {
	SMSG_DEBUG("rcamicroTop")
}

/* Lower Baud Serial I/O */

/* Terminal I/O */
void rcamicroType(void) {
	SMSG_DEBUG("rcamicroType")
}

void rcamicroCount(void) {
	SMSG_DEBUG("rcamicroCount")
}

void rcamicroMsg(void) {
	SMSG_DEBUG("rcamicroMsg")
}

void rcamicroExpect(void) {
	SMSG_DEBUG("rcamicroExpect")
}

void rcamicroQuit(void) {
	SMSG_DEBUG("rcamicroQuit")
}

/* Higher Baud Serial I/O */

/* Restart */

/* Options */
void rcamicroDro(void) {
	SMSG_DEBUG("rcamicroDro")
}

void rcamicroDri(void) {
	SMSG_DEBUG("rcamicroDri")
}

/* Assembler */

/* String Editor */
void rcamicroCNum(void) {
	SMSG_DEBUG("rcamicroCNum")
}

void rcamicroNumLeft(void) {
	SMSG_DEBUG("rcamicroNumLeft")
}

void rcamicroLNum(void) {
	SMSG_DEBUG("rcamicroLNum")
}

void rcamicroAt(void) {
	SMSG_DEBUG("rcamicroAt")
}

void rcamicroString(void) {
	SMSG_DEBUG("rcamicroString")
}

void rcamicroErr(void) {
	SMSG_DEBUG("rcamicroErr")
}

void rcamicroOneLine(void) {
	SMSG_DEBUG("rcamicroOneLine")
}

void rcamicroFind(void) {
	SMSG_DEBUG("rcamicroFind")
}

void rcamicroRemove(void) {
	SMSG_DEBUG("rcamicroRemove")
}

void rcamicroM(void) {
	SMSG_DEBUG("rcamicroM")
}

void rcamicroB(void) {
	SMSG_DEBUG("rcamicroB")
}

void rcamicroN(void) {
	SMSG_DEBUG("rcamicroN")
}

void rcamicroF(void) {
	SMSG_DEBUG("rcamicroF")
}

void rcamicroX(void) {
	SMSG_DEBUG("rcamicroX")
}

void rcamicroTill(void) {
	SMSG_DEBUG("rcamicroTill")
}

void rcamicroC(void) {
	SMSG_DEBUG("rcamicroC")
}

/* Character Editor Primitives */
void rcamicroMove(void) {
	SMSG_DEBUG("rcamicroMove")
}

/* Disk Utilities */
void rcamicroFill(void) {
	SMSG_DEBUG("rcamicroFill")
}

void rcamicroRight(void) {
	SMSG_DEBUG("rcamicroRight")
}

void rcamicroBackup(void) {
	SMSG_DEBUG("rcamicroBackup")
}

void rcamicroSweep(void) {
	SMSG_DEBUG("rcamicroSweep")
}

/* Disk Compare */
void rcamicroMatch(void) {
	SMSG_DEBUG("rcamicroMatch")
}

/* Disk Error Checking */
void rcamicroStatus(void) {
	SMSG_DEBUG("rcamicroStatus")
}

void rcamicroError(void) {
	SMSG_DEBUG("rcamicroError")
}

void rcamicroLog(void) {
	SMSG_DEBUG("rcamicroLog")
}

void rcamicroNotify(void) {
	SMSG_DEBUG("rcamicroNotify")
}

void rcamicroDup(void) {
	SMSG_DEBUG("rcamicroDup")
}

void rcamicroXBlock(void) {
	SMSG_DEBUG("rcamicroXBlock")
}

/* Documentation */
void rcamicroIndex(void) {
	SMSG_DEBUG("rcamicroIndex")
}

void rcamicroTriad(void) {
	SMSG_DEBUG("rcamicroTriad")
}

void rcamicroShow(void) {
	SMSG_DEBUG("rcamicroShow")
}

/* Reconfiguration */
void rcamicroBStore(void) {
	SMSG_DEBUG("rcamicroBStore")
}

void rcamicroPStore(void) {
	SMSG_DEBUG("rcamicroPStore")
}

void rcamicroDisk(void) {
	SMSG_DEBUG("rcamicroDisk")
}

/* Compiler */
void rcamicroAdrs(void) {
	SMSG_DEBUG("rcamicroAdrs")
}

void rcamicroHere(void) {
	SMSG_DEBUG("rcamicroHere")
}

void rcamicroOrg(void) {
	SMSG_DEBUG("rcamicroOrg")
}

void rcamicroCComma(void) {
	SMSG_DEBUG("rcamicroCComma")
}

void rcamicroComma(void) {
	SMSG_DEBUG("rcamicroComma")
}

/* Target Vocabulary */
void rcamicroClear(void) {
	SMSG_DEBUG("rcamicroClear")
}

void rcamicroSmudge(void) {
	SMSG_DEBUG("rcamicroSmudge")
}

void rcamicroEmplace(void) {
	SMSG_DEBUG("rcamicroEmplace")
}

/* Target Dictionary */
void rcamicroHFetch(void) {
	SMSG_DEBUG("rcamicroHFetch")
}

void rcamicroHStore(void) {
	SMSG_DEBUG("rcamicroHStore")
}

void rcamicroInside(void) {
	SMSG_DEBUG("rcamicroInside")
}

void rcamicroCFetch(void) {
	SMSG_DEBUG("rcamicroCFetch")
}

void rcamicroCStore(void) {
	SMSG_DEBUG("rcamicroCStore")
}

void rcamicroFetch(void) {
	SMSG_DEBUG("rcamicroFetch")
}

void rcamicroStore(void) {
	SMSG_DEBUG("rcamicroStore")
}

/* Target Compiler */
void rcamicroCommaHost(void) {
	SMSG_DEBUG("rcamicroCommaHost")
}

void rcamicroSemicolonCode(void) {
	SMSG_DEBUG("rcamicroSemicolonCode")
}

void rcamicroMinusTick(void) {
	SMSG_DEBUG("rcamicroMinusTick")
}

void rcamicroBackslash(void) {
	SMSG_DEBUG("rcamicroBackslash")
}

void rcamicroCompile(void) {
	SMSG_DEBUG("rcamicroCompile")
}

/* Target Assembler */
void rcamicroEqu(void) {
	SMSG_DEBUG("rcamicroEqu")
}

void rcamicroLabel(void) {
	SMSG_DEBUG("rcamicroLabel")
}

void rcamicroCr(void) {
	SMSG_DEBUG("rcamicroCr")
}

void rcamicroComputer(void) {
	SMSG_DEBUG("rcamicroComputer")
}

/* RAM Defining */
void rcamicroAccessible(void) {
	SMSG_DEBUG("rcamicroAccessible")
}

void rcamicroConstant(void) {
	SMSG_DEBUG("rcamicroConstant")
}

void rcamicroUser(void) {
	SMSG_DEBUG("rcamicroUser")
}

void rcamicroTable(void) {
	SMSG_DEBUG("rcamicroTable")
}

void rcamicroDoes(void) {
	SMSG_DEBUG("rcamicroDoes")
}

/* PROM Defining */
void rcamicroThere(void) {
	SMSG_DEBUG("rcamicroThere")
}

void rcamicroRes(void) {
	SMSG_DEBUG("rcamicroRes")
}

/* Compiling Words */
void rcamicroSemicolon(void) {
	SMSG_DEBUG("rcamicroSemicolon")
}

void rcamicroHColon(void) {
	SMSG_DEBUG("rcamicroHColon")
}

void rcamicroColon(void) {
	SMSG_DEBUG("rcamicroColon")
}

/* Initialize Symbols */

/* Compiler Output */
void rcamicroLeader(void) {
	SMSG_DEBUG("rcamicroLeader")
}

void rcamicroProms(void) {
	SMSG_DEBUG("rcamicroProms")
}

void rcamicroEntire(void) {
	SMSG_DEBUG("rcamicroEntire")
}

void rcamicroSimulate(void) {
	SMSG_DEBUG("rcamicroSimulate")
}

void rcamicroZero(void) {
	SMSG_DEBUG("rcamicroZero")
}

void rcamicroLit(void) {
	SMSG_DEBUG("rcamicroLit")
}

void rcamicroExecute(void) {
	SMSG_DEBUG("rcamicroExecute")
}

void rcamicroSemicolonS(void) {
	SMSG_DEBUG("rcamicroSemicolonS")
}

void rcamicroUStar(void) {
	SMSG_DEBUG("rcamicroUStar")
}

void rcamicroUSlash(void) {
	SMSG_DEBUG("rcamicroUSlash")
}

void rcamicroCz(void) {
	SMSG_DEBUG("rcamicroCz")
}

void rcamicroZeroEqual(void) {
	SMSG_DEBUG("rcamicroZeroEqual")
}

void rcamicroPlus(void) {
	SMSG_DEBUG("rcamicroPlus")
}

void rcamicroTwoStar(void) {
	SMSG_DEBUG("rcamicroTwoStar")
}

void rcamicroMinus(void) {
	SMSG_DEBUG("rcamicroMinus")
}

void rcamicroAnd(void) {
	SMSG_DEBUG("rcamicroAnd")
}

void rcamicroBinary(void) {
	SMSG_DEBUG("rcamicroBinary")
}

void rcamicroOnePlus(void) {
	SMSG_DEBUG("rcamicroOnePlus")
}

void rcamicroTwoPlus(void) {
	SMSG_DEBUG("rcamicroTwoPlus")
}

void rcamicroOver(void) {
	SMSG_DEBUG("rcamicroOver")
}

void rcamicroMinusDup(void) {
	SMSG_DEBUG("rcamicroMinusDup")
}

void rcamicroSwap(void) {
	SMSG_DEBUG("rcamicroSwap")
}

void rcamicroPlusStore(void) {
	SMSG_DEBUG("rcamicroPlusStore")
}

void rcamicroFromR(void) {
	SMSG_DEBUG("rcamicroFromR")
}

void rcamicroRTo(void) {
	SMSG_DEBUG("rcamicroRTo")
}

void rcamicroRot(void) {
	SMSG_DEBUG("rcamicroRot")
}

void rcamicroTwoPop(void) {
	SMSG_DEBUG("rcamicroTwoPop")
}

void rcamicroOnePop(void) {
	SMSG_DEBUG("rcamicroOnePop")
}

/* More Definitions */
void rcamicroEqual(void) {
	SMSG_DEBUG("rcamicroEqual")
}

/* Cross Illustration */
void rcamicroLittle(void) {
	SMSG_DEBUG("rcamicroLittle")
}

void rcamicroTimes(void) {
	SMSG_DEBUG("rcamicroTimes")
}

void rcamicroTest(void) {
	SMSG_DEBUG("rcamicroTest")
}

#endif
