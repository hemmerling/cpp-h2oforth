#ifndef H2ORSC2
#define H2ORSC2

/* The "RSC-FORTH" ( figFORTH ) FORTH */

/* Primitives */

void rscNum(void) {
	DEBUG_WORD("rscNum")
}

void rscTask(void) {
	DEBUG_WORD("rscTask")
}

void rscAdmp(void) {
	DEBUG_WORD("rscAdmp")
}

void rscSemicolonDump(void) {
	DEBUG_WORD("rscSemicolonDump")
}

void rscFormat(void) {
	DEBUG_WORD("rscFormat")
}

void rscFmTrk(void) {
	DEBUG_WORD("rscFmTrk")
}

void rscBankExecute(void) {
	DEBUG_WORD("rscBankExecute")
}

void rscBankEecStore(void) {
	DEBUG_WORD("rscBankEecStore")
}

void rscBankCFetch(void) {
	DEBUG_WORD("rscBankCFetch")
}

void rscBankCStore(void) {
	DEBUG_WORD("rscBankCStore")
}

void rscEecStore(void) {
	DEBUG_WORD("rscEecStore")
}

void rscCaseColon(void) {
	DEBUG_WORD("rscCaseColon")
}

void rscMemTop(void) {
	DEBUG_WORD("rscMemTop")
}

void rscScdr(void) {
	DEBUG_WORD("rscScdr")
}

void rscScsr(void) {
	DEBUG_WORD("rscScsr")
}

void rscSccr(void) {
	DEBUG_WORD("rscSccr")
}

void rscMcr(void) {
	DEBUG_WORD("rscMcr")
}

void rscIer(void) {
	DEBUG_WORD("rscIer")
}

void rscIfr(void) {
	DEBUG_WORD("rscIfr")
}

void rscPg(void) {
	DEBUG_WORD("rscPg")
}

void rscPf(void) {
	DEBUG_WORD("rscPf")
}

void rscPe(void) {
	DEBUG_WORD("rscPe")
}

void rscPd(void) {
	DEBUG_WORD("rscPd")
}

void rscPc(void) {
	DEBUG_WORD("rscPc")
}

void rscPb(void) {
	DEBUG_WORD("rscPb")
}

void rscPa(void) {
	DEBUG_WORD("rscPa")
}

void rscNmiVec(void) {
	DEBUG_WORD("rscNmiVec")
}

void rscIrqVec(void) {
	DEBUG_WORD("rscIrqVec")
}

void rscIntVec(void) {
	DEBUG_WORD("rscIntVec")
}

void rscIntFlg(void) {
	DEBUG_WORD("rscIntFlg")
}

void rscCCommaCon(void) {
	DEBUG_WORD("rscCCommaCon")
}

void rscDotS(void) {
	DEBUG_WORD("rscDotS")
}

void rscMon(void) {
	DEBUG_WORD("rscMon")
}

void rscVlist(void) {
	DEBUG_WORD("rscVlist")
}

void rscIndex(void) {
	DEBUG_WORD("rscIndex")
}

void rscList(void) {
	DEBUG_WORD("rscList")
}

void rscQ(void) {
	DEBUG_WORD("rscQ")
}

void rscDot(void) {
	DEBUG_WORD("rscDot")
}

void rscDotR(void) {
	DEBUG_WORD("rscDotR")
}

void rscDDot(void) {
	DEBUG_WORD("rscDDot")
}

void rscDDotR(void) {
	DEBUG_WORD("rscDDotR")
}

void rscNumS(void) {
	DEBUG_WORD("rscNumS")
}

void rscSign(void) {
	DEBUG_WORD("rscSign")
}

void rscNumGreater(void) {
	DEBUG_WORD("rscNumGreater")
}

void rscLessNum(void) {
	DEBUG_WORD("rscLessNum")
}

void rscSpaces(void) {
	DEBUG_WORD("rscSpaces")
}

void rscWhile(void) {
	DEBUG_WORD("rscWhile")
}

void rscElse(void) {
	DEBUG_WORD("rscElse")
}

void rscIf(void) {
	DEBUG_WORD("rscIf")
}

void rscRepeat(void) {
	DEBUG_WORD("rscRepeat")
}

void rscAgain(void) {
	DEBUG_WORD("rscAgain")
}

void rscEnd(void) {
	DEBUG_WORD("rscEnd")
}

void rscUntil(void) {
	DEBUG_WORD("rscUntil")
}

void rscPlusLoop(void) {
	DEBUG_WORD("rscPlusLoop")
}

void rscLoop(void) {
	DEBUG_WORD("rscLoop")
}

void rscDo(void) {
	DEBUG_WORD("rscDo")
}

void rscThen(void) {
	DEBUG_WORD("rscThen")
}

void rscEndIf(void) {
	DEBUG_WORD("rscEndIf")
}

void rscBegin(void) {
	DEBUG_WORD("rscBegin")
}

void rscForget(void) {
	DEBUG_WORD("rscForget")
}

void rscAutostart(void) {
	DEBUG_WORD("rscAutostart")
}

void rscQKernel(void) {
	DEBUG_WORD("rscQKernel")
}

void rscHWord(void) {
	DEBUG_WORD("rscHWord")
}

void rscHSlashC(void) {
	DEBUG_WORD("rscHSlashC")
}

void rscTick(void) {
	DEBUG_WORD("rscTick")
}

void rscSeek(void) {
	DEBUG_WORD("rscSeek")
}

void rscInit(void) {
	DEBUG_WORD("rscInit")
}

void rscDWrite(void) {
	DEBUG_WORD("rscDWrite")
}

void rscDRead(void) {
	DEBUG_WORD("rscDRead")
}

void rscSelect(void) {
	DEBUG_WORD("rscSelect")
}

void rscDisk(void) {
	DEBUG_WORD("rscDisk")
}

void rscRSlashW(void) {
	DEBUG_WORD("rscRSlashW")
}

void rscBSlashScr(void) {
	DEBUG_WORD("rscBSlashScr")
}

void rscBSlashBuf(void) {
	DEBUG_WORD("rscBSlashBuf")
}

void rscMinusBCD(void) {
	DEBUG_WORD("rscMinusBCD")
}

void rscTo(void) {
	DEBUG_WORD("rscTo")
}

void rscLoad(void) {
	DEBUG_WORD("rscLoad")
}

void rscMessage(void) {
	DEBUG_WORD("rscMessage")
}

void rscToLine(void) {
	DEBUG_WORD("rscToLine")
}

void rscDotLine(void) {
	DEBUG_WORD("rscDotLine")
}

void rscYLine(void) {
	DEBUG_WORD("rscYLine")
}

void rscDump(void) {
	DEBUG_WORD("rscDump")
}

void rscFlush(void) {
	DEBUG_WORD("rscFlush")
}

void rscBlock(void) {
	DEBUG_WORD("rscBlock")
}

void rscBuffer(void) {
	DEBUG_WORD("rscBuffer")
}

void rscEmptyBuffers(void) {
	DEBUG_WORD("rscEmptyBuffers")
}

void rscUpdate(void) {
	DEBUG_WORD("rscUpdate")
}

void rscPlusBuf(void) {
	DEBUG_WORD("rscPlusBuf")
}

void rscMSlashMod(void) {
	DEBUG_WORD("rscMSlashMod")
}

void rscStarSlash(void) {
	DEBUG_WORD("rscStarSlash")
}

void rscStarSlashMod(void) {
	DEBUG_WORD("rscStarSlashMod")
}

void rscMod(void) {
	DEBUG_WORD("rscMod")
}

void rscSlash(void) {
	DEBUG_WORD("rscSlash")
}

void rscSlashMod(void) {
	DEBUG_WORD("rscSlashMod")
}

void rscStar(void) {
	DEBUG_WORD("rscStar")
}

void rscMSlash(void) {
	DEBUG_WORD("rscMSlash")
}

void rscMStar(void) {
	DEBUG_WORD("rscMStar")
}

void rscMax(void) {
	DEBUG_WORD("rscMax")
}

void rscMin(void) {
	DEBUG_WORD("rscMin")
}

void rscDAbs(void) {
	DEBUG_WORD("rscDAbs")
}

void rscAbs(void) {
	DEBUG_WORD("rscAbs")
}

void rscDPlusMinus(void) {
	DEBUG_WORD("rscAbsrscDPlusMinus")
}

void rscPlusMinus(void) {
	DEBUG_WORD("rscPlusMinus")
}

void rscSToD(void) {
	DEBUG_WORD("rscSToD")
}

void rscCold(void) {
	DEBUG_WORD("rscCold")
}

void rscAbort(void) {
	DEBUG_WORD("rscAbort")
}

void rscQuit(void) {
	DEBUG_WORD("rscQuit")
}

void rscParen(void) {
	DEBUG_WORD("rscParen")
}

void rscDefinitions(void) {
	DEBUG_WORD("rscDefinitions")
}

void rscAssembler(void) {
	DEBUG_WORD("rscAssembler")
}

void rscForth(void) {
	DEBUG_WORD("rscForth")
}

void rscVocabulary(void) {
	DEBUG_WORD("rscVocabulary")
}

void rscImmediate(void) {
	DEBUG_WORD("rscImmediate")
}

void rscInterpret(void) {
	DEBUG_WORD("rscInterpret")
}

void rscQStack(void) {
	DEBUG_WORD("rscQStack")
}

void rscDLiteral(void) {
	DEBUG_WORD("rscDLiteral")
}

void rscLiteral(void) {
	DEBUG_WORD("rscLiteral")
}

void rscXCompile(void) {
	DEBUG_WORD("rscXCompile")
}

void rscCreate(void) {
	DEBUG_WORD("rscCreate")
}

void rscIDDot(void) {
	DEBUG_WORD("rscIDDot")
}

void rscError(void) {
	DEBUG_WORD("rscError")
}

void rscYAbort(void) {
	DEBUG_WORD("rscYAbort")
}

void rscFind(void) {
	DEBUG_WORD("rscFind")
}

void rscNumber(void) {
	DEBUG_WORD("rscNumber")
}

void rscYNumber(void) {
	DEBUG_WORD("rscYNumber")
}

void rscWord(void) {
	DEBUG_WORD("rscWord")
}

void rscHold(void) {
	DEBUG_WORD("rscHold")
}

void rscBlanks(void) {
	DEBUG_WORD("rscBlanks")
}

void rscErase(void) {
	DEBUG_WORD("rscErase")
}

void rscFill(void) {
	DEBUG_WORD("rscFill")
}

void rscEmptySpace(void) {
	DEBUG_WORD("rscEmptySpace")
}

void rscQuery(void) {
	DEBUG_WORD("rscQuery")
}

void rscExpect(void) {
	DEBUG_WORD("rscExpect")
}

void rscDotQuote(void) {
	DEBUG_WORD("rscDotQuote")
}

void rscYDotQuote(void) {
	DEBUG_WORD("rscYDotQuote")
}

void rscTrailing(void) {
	DEBUG_WORD("rscTrailing")
}

void rscType(void) {
	DEBUG_WORD("rscType")
}

void rscCount(void) {
	DEBUG_WORD("rscCount")
}

void rscDoes(void) {
	DEBUG_WORD("rscDoes")
}

void rscBuilds(void) {
	DEBUG_WORD("rscBuilds")
}

void rscSemicolonCode(void) {
	DEBUG_WORD("rscSemicolonCode")
}

void rscYSemicolonCode(void) {
	DEBUG_WORD("rscYSemicolonCode")
}

void rscDecimal(void) {
	DEBUG_WORD("rscDecimal")
}

void rscHex(void) {
	DEBUG_WORD("rscHex")
}

void rscSmudge(void) {
	DEBUG_WORD("rscSmudge")
}

void rscRightBracket(void) {
	DEBUG_WORD("rscRightBracket")
}

void rscLeftBracket(void) {
	DEBUG_WORD("rscLeftBracket")
}

void rscCompile(void) {
	DEBUG_WORD("rscCompile")
}

void rscQCsp(void) {
	DEBUG_WORD("rscQCsp")
}

void rscQPairs(void) {
	DEBUG_WORD("rscQPairs")
}

void rscQExec(void) {
	DEBUG_WORD("rscQExec")
}

void rscQComp(void) {
	DEBUG_WORD("rscQComp")
}

void rscQError(void) {
	DEBUG_WORD("rscQError")
}

void rscStoreCsp(void) {
	DEBUG_WORD("rscStoreCsp")
}

void rscPfaptr(void) {
	DEBUG_WORD("rscPfaptr")
}

void rscNfa(void) {
	DEBUG_WORD("rscNfa")
}

void rscCfa(void) {
	DEBUG_WORD("rscCfa")
}

void rscLfa(void) {
	DEBUG_WORD("rscLfa")
}

void rscLatest(void) {
	DEBUG_WORD("rscLatest")
}

void rscTraverse(void) {
	DEBUG_WORD("rscTraverse")
}

void rscMinusDup(void) {
	DEBUG_WORD("rscMinusDup")
}

void rscSpace(void) {
	DEBUG_WORD("rscSpace")
}

void rscPick(void) {
	DEBUG_WORD("rscPick")
}

void rscRot(void) {
	DEBUG_WORD("rscRot")
}

void rscGreater(void) {
	DEBUG_WORD("rscGreater")
}

void rscLess(void) {
	DEBUG_WORD("rscLess")
}

void rscULess(void) {
	DEBUG_WORD("rscULess")
}

void rscEqual(void) {
	DEBUG_WORD("rscEqual")
}

void rscMinus(void) {
	DEBUG_WORD("rscMinus")
}

void rscCComma(void) {
	DEBUG_WORD("rscCComma")
}

void rscComma(void) {
	DEBUG_WORD("rscComma")
}

void rscAllot(void) {
	DEBUG_WORD("rscAllot")
}

void rscHere(void) {
	DEBUG_WORD("rscHere")
}

void rscCommaSlash(void) {
	DEBUG_WORD("rscCommaSlash")
}

void rscAllotSlash(void) {
	DEBUG_WORD("rscAllotSlash")
}

void rscHereSlash(void) {
	DEBUG_WORD("rscHereSlash")
}

void rscDPSlash(void) {
	DEBUG_WORD("rscDPSlash")
}

void rscTwoMinus(void) {
	DEBUG_WORD("rscTwoMinus")
}

void rscOneMinus(void) {
	DEBUG_WORD("rscOneMinus")
}

void rscTwoPlus(void) {
	DEBUG_WORD("rscTwoPlus")
}

void rscOnePlus(void) {
	DEBUG_WORD("rscOnePlus")
}

void rscPad(void) {
	DEBUG_WORD("rscPad")
}

void rscLimit(void) {
	DEBUG_WORD("rscLimit")
}

void rscFirst(void) {
	DEBUG_WORD("rscFirst")
}

void rscCSlashL(void) {
	DEBUG_WORD("rscCSlashL")
}

void rscKhz(void) {
	DEBUG_WORD("rscKhz")
}

void rscMode(void) {
	DEBUG_WORD("rscMode")
}

void rscCsp(void) {
	DEBUG_WORD("rscCsp")
}

void rscState(void) {
	DEBUG_WORD("rscState")
}

void rscCurrent(void) {
	DEBUG_WORD("rscCurrent")
}

void rscContext(void) {
	DEBUG_WORD("rscContext")
}

void rscScr(void) {
	DEBUG_WORD("rscScr")
}

void rscBlk(void) {
	DEBUG_WORD("rscBlk")
}

void rscPrev(void) {
	DEBUG_WORD("rscPrev")
}

void rscUse(void) {
	DEBUG_WORD("rscUse")
}

void rscUAbort(void) {
	DEBUG_WORD("rscUAbort")
}

void rscVocLink(void) {
	DEBUG_WORD("rscVocLink")
}

void rscHeaderless(void) {
	DEBUG_WORD("rscHeaderless")
}

void rscDP(void) {
	DEBUG_WORD("rscDP")
}

void rscFence(void) {
	DEBUG_WORD("rscFence")
}

void rscWarning(void) {
	DEBUG_WORD("rscWarning")
}

void rscWidth(void) {
	DEBUG_WORD("rscWidth")
}

void rscOffset(void) {
	DEBUG_WORD("rscOffset")
}

void rscULimit(void) {
	DEBUG_WORD("rscULimit")
}

void rscUFirst(void) {
	DEBUG_WORD("rscUFirst")
}

void rscBSlashSide(void) {
	DEBUG_WORD("rscBSlashSide")
}

void rscCylinder(void) {
	DEBUG_WORD("rscCylinder")
}

void rscDiskNo(void) {
	DEBUG_WORD("rscDiskNo")
}

void rscHld(void) {
	DEBUG_WORD("rscHld")
}

void rscDpl(void) {
	DEBUG_WORD("rscDpl")
}

void rscIn(void) {
	DEBUG_WORD("rscIn")
}

void rscCldSlashWrm(void) {
	DEBUG_WORD("rscCldSlashWrm")
}

void rscBase(void) {
	DEBUG_WORD("rscBase")
}

void rscURSlashW(void) {
	DEBUG_WORD("rscURSlashW")
}

void rscUPad(void) {
	DEBUG_WORD("rscUPad")
}

void rscUCSlashL(void) {
	DEBUG_WORD("rscUCSlashL")
}

void rscR0(void) {
	DEBUG_WORD("rscR0L")
}

void rscS0(void) {
	DEBUG_WORD("rscS0")
}

void rscTib(void) {
	DEBUG_WORD("rscTib")
}

void rscBl(void) {
	DEBUG_WORD("rscBl")
}

void rscFour(void) {
	DEBUG_WORD("rscFour")
}

void rscThree(void) {
	DEBUG_WORD("rscThree")
}

void rscTwo(void) {
	DEBUG_WORD("rscTwo")
}

void rscOne(void) {
	DEBUG_WORD("rscOne")
}

void rscZero(void) {
	DEBUG_WORD("rscZero")
}

void rscUser(void) {
	DEBUG_WORD("rscUser")
}

void rscCode(void) {
	DEBUG_WORD("rscCode")
}

void rscVariable(void) {
	DEBUG_WORD("rscVariable")
}

void rscConstant(void) {
	DEBUG_WORD("rscConstant")
}

void rscSemicolon(void) {
	DEBUG_WORD("rscSemicolon")
}

void rscColon(void) {
	DEBUG_WORD("rscColon")
}

void rscCStore(void) {
	DEBUG_WORD("rscCStore")
}

void rscStore(void) {
	DEBUG_WORD("rscStore")
}

void rscCFetch(void) {
	DEBUG_WORD("rscCFetch")
}

void rscFetch(void) {
	DEBUG_WORD("rscFetch")
}

void rscToggle(void) {
	DEBUG_WORD("rscToggle")
}

void rscPlusStore(void) {
	DEBUG_WORD("rscPlusStore")
}

void rscBounds(void) {
	DEBUG_WORD("rscBounds")
}

void rscTwoDup(void) {
	DEBUG_WORD("rscTwoDup")
}

void rscDup(void) {
	DEBUG_WORD("rscDup")
}

void rscSwap(void) {
	DEBUG_WORD("rscSwap")
}

void rscTwoDrop(void) {
	DEBUG_WORD("rscTwoDrop")
}

void rscDrop(void) {
	DEBUG_WORD("rscDrop")
}

void rscOver(void) {
	DEBUG_WORD("rscOver")
}

void rscDNegate(void) {
	DEBUG_WORD("rscDNegate")
}

void rscNegate(void) {
	DEBUG_WORD("rscNegate")
}

void rscDPlus(void) {
	DEBUG_WORD("rscDPlus")
}

void rscPlus(void) {
	DEBUG_WORD("rscPlus")
}

void rscZeroLess(void) {
	DEBUG_WORD("rscZeroLess")
}

void rscNot(void) {
	DEBUG_WORD("rscNot")
}

void rscZeroEqual(void) {
	DEBUG_WORD("rscZeroEqual")
}

void rscR(void) {
	DEBUG_WORD("rscR")
}

void rscRFrom(void) {
	DEBUG_WORD("rscRFrom")
}

void rscToR(void) {
	DEBUG_WORD("rscToR")
}

void rscLeave(void) {
	DEBUG_WORD("rscLeave")
}

void rscSemicolonS(void) {
	DEBUG_WORD("rscSemicolonS")
}

void rscRPFetch(void) {
	DEBUG_WORD("rscRPFetch")
}

void rscRPStore(void) {
	DEBUG_WORD("rscRPStore")
}

void rscSPStore(void) {
	DEBUG_WORD("rscSPStore")
}

void rscSPFetch(void) {
	DEBUG_WORD("rscSPFetch")
}

void rscXor(void) {
	DEBUG_WORD("rscXor")
}

void rscOr(void) {
	DEBUG_WORD("rscOr")
}

void rscAnd(void) {
	DEBUG_WORD("rscAnd")
}

void rscUSlash(void) {
	DEBUG_WORD("rscUSlash")
}

void rscUStar(void) {
	DEBUG_WORD("rscUStar")
}

void rscCMove(void) {
	DEBUG_WORD("rscCMove")
}

void rscFinis(void) {
	DEBUG_WORD("rscFinis")
}

void rscSource(void) {
	DEBUG_WORD("rscSource")
}

void rscXOff(void) {
	DEBUG_WORD("rscXOff")
}

void rscXon(void) {
	DEBUG_WORD("rscXon")
}

void rscCr(void) {
	DEBUG_WORD("rscCr")
}

void rscQTerminal(void) {
	DEBUG_WORD("rscQTerminal")
}

void rscKey(void) {
	DEBUG_WORD("rscKey")
}

void rscEmit(void) {
	DEBUG_WORD("rscEmit")
}

void rscEnclose(void) {
	DEBUG_WORD("rscEnclose")
}

void rscYFind(void) {
	DEBUG_WORD("rscYFind")
}

void rscDigit(void) {
	DEBUG_WORD("rscDigit")
}

void rscI(void) {
	DEBUG_WORD("rscI")
}

void rscYDo(void) {
	DEBUG_WORD("rscYDo")
}

void rscYPlusLoop(void) {
	DEBUG_WORD("rscYPlusLoop")
}

void rscYLoop(void) {
	DEBUG_WORD("rscYLoop")
}

void rscZeroBranch(void) {
	DEBUG_WORD("rscZeroBranch")
}

void rscBranch(void) {
	DEBUG_WORD("rscBranch")
}

void rscExecute(void) {
	DEBUG_WORD("rscExecute")
}

void rscClit(void) {
	DEBUG_WORD("rscClit")
}

void rscLit(void) {
	DEBUG_WORD("rscLit")
}

#endif
