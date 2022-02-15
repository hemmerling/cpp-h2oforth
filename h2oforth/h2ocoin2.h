#ifndef H2OATAR2
#define H2OATAR2

/* The ATARI Coin-op Forth, ATARI Colleen Forth, fig-FORTH on ATARI 400 & ATARI 800 */

/* Primitives */

/* Unavailable words */
void coinupMinusMove(void) {
	DEBUG_WORD("coinupMinusMove")
}

void coinupDollar(void) {
	DEBUG_WORD("coinupDollar")
}

void coinupPercent(void) {
	DEBUG_WORD("coinupPercent")
}

void coinupDl(void) {
	DEBUG_WORD("coinupDl")
}

void coinupDoit(void) {
	DEBUG_WORD("coinupDoit")
}

void coinupHl(void) {
	DEBUG_WORD("coinupHl")
}

void coinupIl(void) {
	DEBUG_WORD("coinupIl")
}

void coinupLl(void) {
	DEBUG_WORD("coinupLl")
}

void coinupRl(void) {
	DEBUG_WORD("coinupRl")
}

void coinupSl(void) {
	DEBUG_WORD("coinupSl")
}

void coinupTl(void) {
	DEBUG_WORD("coinupTl")
}

void coinupTopFlag(void) {
	DEBUG_WORD("coinupTopFlag")
}

void coinupUl(void) {
	DEBUG_WORD("coinupUl")
}

void coinupUll(void) {
	DEBUG_WORD("coinupUll")
}

void coinupR0(void) {
	DEBUG_WORD("coinupR0")
}

void coinupS0(void) {
	DEBUG_WORD("coinupS0")
}

void coinupX(void) {
	DEBUG_WORD("coinupX")
}


/* Words */
void coinupTask(void) {
	DEBUG_WORD("coinupTask")
}

void coinupSaveNfas(void) {
	DEBUG_WORD("coinupSaveNfas")
}

void coinupFormy(void) {
	DEBUG_WORD("coinupFormy")
}

void coinupLpWords(void) {
	DEBUG_WORD("coinupLpWords")
}

void coinupWhere(void) {
	DEBUG_WORD("coinupWhere")
}

void coinupN(void) {
	DEBUG_WORD("coinupN")
}

void coinupL(void) {
	DEBUG_WORD("coinupL")
}

void coinupShow(void) {
	DEBUG_WORD("coinupShow")
}

void coinupList(void) {
	DEBUG_WORD("coinupList")
}

void coinupCopy(void) {
	DEBUG_WORD("coinupCopy")
}

void coinupLine(void) {
	DEBUG_WORD("coinupLine")
}

void coinupNumOfLines(void) {
	DEBUG_WORD("coinupNumOfLines")
}

void coinupText(void) {
	DEBUG_WORD("coinupText")
}

void coinupEdit(void) {
	DEBUG_WORD("coinupEdit")
}

void coinupNoPly(void) {
	DEBUG_WORD("coinupNoPly")
}

void coinupColpmStore(void) {
	DEBUG_WORD("coinupColpmStore")
}

void coinupSizeStore(void) {
	DEBUG_WORD("coinupSizeStore")
}

void coinupHPosStore(void) {
	DEBUG_WORD("coinupHPosStore")
}

void coinupPlayer(void) {
	DEBUG_WORD("coinupPlayer")
}

void coinupGPrior(void) {
	DEBUG_WORD("coinupGPrior")
}

void coinupColpm(void) {
	DEBUG_WORD("coinupColpm")
}

void coinupVDelay(void) {
	DEBUG_WORD("coinupVDelay")
}

void coinupPrior(void) {
	DEBUG_WORD("coinupPrior")
}

void coinupPmBase(void) {
	DEBUG_WORD("coinupPmBase")
}

void coinupGractl(void) {
	DEBUG_WORD("coinupGractl")
}

void coinupDmaCtl(void) {
	DEBUG_WORD("coinupDmaCtl")
}

void coinupRnd(void) {
	DEBUG_WORD("coinupRnd")
}

void coinupStrig(void) {
	DEBUG_WORD("coinupStrig")
}

void coinupStick(void) {
	DEBUG_WORD("coinupStick")
}

void coinupPTrig(void) {
	DEBUG_WORD("coinupPTrig")
}

void coinupPaddle(void) {
	DEBUG_WORD("coinupPaddle")
}

void coinupSound(void) {
	DEBUG_WORD("coinupSound")
}

void coinupXio18(void) {
	DEBUG_WORD("coinupXio18")
}

void coinupClear(void) {
	DEBUG_WORD("coinupClear")
}

void coinupDrawTo(void) {
	DEBUG_WORD("coinupDrawTo")
}

void coinupPosition(void) {
	DEBUG_WORD("coinupPosition")
}

void coinupColor(void) {
	DEBUG_WORD("coinupColor")
}

void coinupSetColor(void) {
	DEBUG_WORD("coinupSetColor")
}

void coinupLocate(void) {
	DEBUG_WORD("coinupLocate")
}

void coinupPlot(void) {
	DEBUG_WORD("coinupPlot")
}

void coinupDrDot(void) {
	DEBUG_WORD("coinupDrDot")
}

void coinupSeDot(void) {
	DEBUG_WORD("coinupSeDot")
}

void coinupPlDot(void) {
	DEBUG_WORD("coinupPlDot")
}

void coinupPut(void) {
	DEBUG_WORD("coinupPut")
}

void coinupCDot(void) {
	DEBUG_WORD("coinupCDot")
}

void coinupLocDot(void) {
	DEBUG_WORD("coinupLocDot")
}

void coinupGraphics(void) {
	DEBUG_WORD("coinupGraphics")
}

void coinupGrDot(void) {
	DEBUG_WORD("coinupGrDot")
}

void coinupPosDot(void) {
	DEBUG_WORD("coinupPosDot")
}

void coinupSpb(void) {
	DEBUG_WORD("coinupSpb")
}

void coinupPBase(void) {
	DEBUG_WORD("coinupPBase")
}

void coinupQBase(void) {
	DEBUG_WORD("coinupQBase")
}

void coinupFilDat(void) {
	DEBUG_WORD("coinupFilDat")
}

void coinupSColon(void) {
	DEBUG_WORD("coinupSColon")
}

void coinupAcIo(void) {
	DEBUG_WORD("coinupAcIo")
}

void coinupOpen(void) {
	DEBUG_WORD("coinupOpen")
}

void coinupClose(void) {
	DEBUG_WORD("coinupClose")
}

void coinupGet(void) {
	DEBUG_WORD("coinupGet")
}

void coinupCIo(void) {
	DEBUG_WORD("coinupCIo")
}

void coinupI2Cax(void) {
	DEBUG_WORD("coinupI2Cax")
}

void coinupI1Cax(void) {
	DEBUG_WORD("coinupI1Cax")
}

void coinupIcbll(void) {
	DEBUG_WORD("coinupIcbll")
}

void coinupIcptl(void) {
	DEBUG_WORD("coinupIcptl")
}

void coinupIcbal(void) {
	DEBUG_WORD("coinupIcbal")
}

void coinupIcsta(void) {
	DEBUG_WORD("coinupIcsta")
}

void coinupIccom(void) {
	DEBUG_WORD("coinupIccom")
}

void coinupIcdno(void) {
	DEBUG_WORD("coinupIcdno")
}

void coinupDotIoc(void) {
	DEBUG_WORD("coinupDotIoc")
}

void coinupIocb(void) {
	DEBUG_WORD("coinupIocb")
}

void coinupIob(void) {
	DEBUG_WORD("coinupIob")
}

void coinupIoc(void) {
	DEBUG_WORD("coinupIoc")
}

void coinupAtaChr(void) {
	DEBUG_WORD("coinupAtaChr")
}

void coinupLMargn(void) {
	DEBUG_WORD("coinupLMargn")
}

void coinupBotsC(void) {
	DEBUG_WORD("coinupBotsC")
}

void coinupCh(void) {
	DEBUG_WORD("coinupCh")
}

void coinupConsol(void) {
	DEBUG_WORD("coinupConsol")
}

void coinupCol4(void) {
	DEBUG_WORD("coinupCol4")
}

void coinupCol3(void) {
	DEBUG_WORD("coinupCol3")
}

void coinupCol2(void) {
	DEBUG_WORD("coinupCol2")
}

void coinupCol1(void) {
	DEBUG_WORD("coinupCol1")
}

void coinupCol0(void) {
	DEBUG_WORD("coinupCol0")
}

void coinupChBas(void) {
	DEBUG_WORD("coinupChBas")
}

void coinupCrsinh(void) {
	DEBUG_WORD("coinupCrsinh")
}

void coinupRtClk(void) {
	DEBUG_WORD("coinupRtClk")
}

void coinupDmct(void) {
	DEBUG_WORD("coinupDmct")
}

void coinupDlst(void) {
	DEBUG_WORD("coinupDlst")
}

void coinupAudCtl(void) {
	DEBUG_WORD("coinupAudCtl")
}

void coinupSkCtl(void) {
	DEBUG_WORD("coinupSkCtl")
}

void coinupC4Aud(void) {
	DEBUG_WORD("coinupC4Aud")
}

void coinupF4Aud(void) {
	DEBUG_WORD("coinupF4Aud")
}

void coinupC3Aud(void) {
	DEBUG_WORD("coinupC3Aud")
}

void coinupF3Aud(void) {
	DEBUG_WORD("coinupF3Aud")
}

void coinupC2Aud(void) {
	DEBUG_WORD("coinupC2Aud")
}

void coinupF2Aud(void) {
	DEBUG_WORD("coinupF2Aud")
}

void coinupC1Aud(void) {
	DEBUG_WORD("coinupC1Aud")
}

void coinupF1Aud(void) {
	DEBUG_WORD("coinupF1Aud")
}

void coinupCn(void) {
	DEBUG_WORD("coinupCn")
}

void coinupEditor(void) {
	DEBUG_WORD("coinupEditor")
}

void coinupArray(void) {
	DEBUG_WORD("coinupArray")
}

void coinupAlloc(void) {
	DEBUG_WORD("coinupAlloc")
}

void coinupTbl(void) {
	DEBUG_WORD("coinupTbl")
}

void coinupBackslashBackslash(void) {
	DEBUG_WORD("coinupBackslashBackslash")
}

void coinupBDump(void) {
	DEBUG_WORD("coinupBDump")
}

void coinupHQ(void) {
	DEBUG_WORD("coinupHQ")
}

void coinupHh(void) {
	DEBUG_WORD("coinupHh")
}

void coinupChQ(void) {
	DEBUG_WORD("coinupChQ")
}

void coinupChH(void) {
	DEBUG_WORD("coinupChH")
}

void coinupHd(void) {
	DEBUG_WORD("coinupHd")
}

void coinupTwoStar(void) {
	DEBUG_WORD("coinupTwoStar")
}

void coinupZeroSet(void) {
	DEBUG_WORD("coinupZeroSet")
}

void coinupOneMinus(void) {
	DEBUG_WORD("coinupOneMinus")
}

void coinupOnePlusStore(void) {
	DEBUG_WORD("coinupOnePlusStore")
}

void coinupCode(void) {
	DEBUG_WORD("coinupCode")
}

void coinupAssembler(void) {
	DEBUG_WORD("coinupAssembler")
}

void coinupVList(void) {
	DEBUG_WORD("coinupVList")
}

void coinupTriad(void) {
	DEBUG_WORD("coinupTriad")
}

void coinupIndex(void) {
	DEBUG_WORD("coinupIndex")
}

void coinupQ(void) {
	DEBUG_WORD("coinupQ")
}

void coinupDot(void) {
	DEBUG_WORD("coinupDot")
}

void coinupDotR(void) {
	DEBUG_WORD("coinupDotR")
}

void coinupDDot(void) {
	DEBUG_WORD("coinupDDot")
}

void coinupDDotR(void) {
	DEBUG_WORD("coinupDDotR")
}

void coinupNumS(void) {
	DEBUG_WORD("coinupNumS")
}

void coinupNum(void) {
	DEBUG_WORD("coinupNum")
}

void coinupSign(void) {
	DEBUG_WORD("coinupSign")
}

void coinupNumGreater(void) {
	DEBUG_WORD("coinupNumGreater")
}

void coinupLessNum(void) {
	DEBUG_WORD("coinupLessNum")
}

void coinupSpaces(void) {
	DEBUG_WORD("coinupSpaces")
}

void coinupWhile(void) {
	DEBUG_WORD("coinupWhile")
}

void coinupElse(void) {
	DEBUG_WORD("coinupElse")
}

void coinupIf(void) {
	DEBUG_WORD("coinupIf")
}

void coinupRepeat(void) {
	DEBUG_WORD("coinupRepeat")
}

void coinupAgain(void) {
	DEBUG_WORD("coinupAgain")
}

void coinupEnd(void) {
	DEBUG_WORD("coinupEnd")
}

void coinupUntil(void) {
	DEBUG_WORD("coinupUntil")
}

void coinupPlusLoop(void) {
	DEBUG_WORD("coinupPlusLoop")
}

void coinupLoop(void) {
	DEBUG_WORD("coinupLoop")
}

void coinupDo(void) {
	DEBUG_WORD("coinupDo")
}

void coinupThen(void) {
	DEBUG_WORD("coinupThen")
}

void coinupEndIf(void) {
	DEBUG_WORD("coinupEndIf")
}

void coinupBegin(void) {
	DEBUG_WORD("coinupBegin")
}

void coinupBack(void) {
	DEBUG_WORD("coinupBack")
}

void coinupForget(void) {
	DEBUG_WORD("coinupForget")
}

void coinupTick(void) {
	DEBUG_WORD("coinupTick")
}

void coinupUpdate(void) {
	DEBUG_WORD("coinupUpdate")
}

void coinupFlush(void) {
	DEBUG_WORD("coinupFlush")
}

void coinupRSlashW(void) {
	DEBUG_WORD("coinupRSlashW")
}

void coinupDdIo(void) {
	DEBUG_WORD("coinupDdIo")
}

void coinupDIo(void) {
	DEBUG_WORD("coinupDIo")
}

void coinupSecIo(void) {
	DEBUG_WORD("coinupSecIo")
}

void coinupSio(void) {
	DEBUG_WORD("coinupSio")
}

void coinupDecMap(void) {
	DEBUG_WORD("coinupDecMap")
}

void coinupType(void) {
	DEBUG_WORD("coinupType")
}

void coinupQTerminal(void) {
	DEBUG_WORD("coinupQTerminal")
}

void coinupCr(void) {
	DEBUG_WORD("coinupCr")
}

void coinupEmit(void) {
	DEBUG_WORD("coinupEmit")
}

void coinupKey(void) {
	DEBUG_WORD("coinupKey")
}

void coinupTciov(void) {
	DEBUG_WORD("coinupTciov")
}

void coinupIcAl(void) {
	DEBUG_WORD("coinupIcAl")
}

void coinupIcLl(void) {
	DEBUG_WORD("coinupIcLl")
}

void coinupIcCm(void) {
	DEBUG_WORD("coinupIcCm")
}

void coinupTo(void) {
	DEBUG_WORD("coinupTo")
}

void coinupLoad(void) {
	DEBUG_WORD("coinupLoad")
}

void coinupMessage(void) {
	DEBUG_WORD("coinupMessage")
}

void coinupDotLine(void) {
	DEBUG_WORD("coinupDotLine")
}

void coinupYLine(void) {
	DEBUG_WORD("coinupYLine")
}

void coinupBlock(void) {
	DEBUG_WORD("coinupBlock")
}

void coinupBuffer(void) {
	DEBUG_WORD("coinupBuffer")
}

void coinupBfnd(void) {
	DEBUG_WORD("coinupBfnd")
}

void coinupDr1(void) {
	DEBUG_WORD("coinupDr1")
}

void coinupDr0(void) {
	DEBUG_WORD("coinupDr0")
}

void coinupEmptyBuffers(void) {
	DEBUG_WORD("coinupEmptyBuffers")
}

void coinupAlt(void) {
	DEBUG_WORD("coinupAlt")
}

void coinupPrev(void) {
	DEBUG_WORD("coinupPrev")
}

void coinupPtab(void) {
	DEBUG_WORD("coinupPtab")
}

void coinupMSlashMod(void) {
	DEBUG_WORD("coinupMSlashMod")
}

void coinupStarSlash(void) {
	DEBUG_WORD("coinupStarSlash")
}

void coinupStarSlashMod(void) {
	DEBUG_WORD("coinupStarSlashMod")
}

void coinupMod(void) {
	DEBUG_WORD("coinupMod")
}

void coinupSlash(void) {
	DEBUG_WORD("coinupSlash")
}

void coinupslashMod(void) {
	DEBUG_WORD("coinupslashMod")
}

void coinupStar(void) {
	DEBUG_WORD("coinupStar")
}

void coinupMSlash(void) {
	DEBUG_WORD("coinupMSlash")
}

void coinupMStar(void) {
	DEBUG_WORD("coinupMStar")
}

void coinupMax(void) {
	DEBUG_WORD("coinupMax")
}

void coinupMin(void) {
	DEBUG_WORD("coinupMin")
}

void coinupDAbs(void) {
	DEBUG_WORD("coinupDAbs")
}

void coinupAbs(void) {
	DEBUG_WORD("coinupAbs")
}

void coinupDPlusMinus(void) {
	DEBUG_WORD("coinupDPlusMinus")
}

void coinupPlusMinus(void) {
	DEBUG_WORD("coinupPlusMinus")
}

void coinupSToD(void) {
	DEBUG_WORD("coinupSToD")
}

void coinupCold(void) {
	DEBUG_WORD("coinupCold")
}

void coinupAbort(void) {
	DEBUG_WORD("coinupAbort")
}

void coinupQuit(void) {
	DEBUG_WORD("coinupQuit")
}

void coinupParen(void) {
	DEBUG_WORD("coinupParen")
}

void coinupDefinitions(void) {
	DEBUG_WORD("coinupDefinitions")
}

void coinupForth(void) {
	DEBUG_WORD("coinupForth")
}

void coinupVocabulary(void) {
	DEBUG_WORD("coinupVocabulary")
}

void coinupImmediate(void) {
	DEBUG_WORD("coinupImmediate")
}

void coinupInterpret(void) {
	DEBUG_WORD("coinupInterpret")
}

void coinupQStack(void) {
	DEBUG_WORD("coinupQStack")
}

void coinupDLiteral(void) {
	DEBUG_WORD("coinupDLiteral")
}

void coinupLiteral(void) {
	DEBUG_WORD("coinupLiteral")
}

void coinupXCompile(void) {
	DEBUG_WORD("coinupXCompile")
}

void coinupCreate(void) {
	DEBUG_WORD("coinupCreate")
}

void coinupIdDot(void) {
	DEBUG_WORD("coinupIdDot")
}

void coinupError(void) {
	DEBUG_WORD("coinupError")
}

void coinupYAbort(void) {
	DEBUG_WORD("coinupYAbort")
}

void coinupMinusFind(void) {
	DEBUG_WORD("coinupMinusFind")
}

void coinupHash(void) {
	DEBUG_WORD("coinupHash")
}

void coinupNumber(void) {
	DEBUG_WORD("coinupNumber")
}

void coinupYNumber(void) {
	DEBUG_WORD("coinupYNumber")
}

void coinup7Bits(void) {
	DEBUG_WORD("coinup7Bits")
}

void coinupWord(void) {
	DEBUG_WORD("coinupWord")
}

void coinupPad(void) {
	DEBUG_WORD("coinupPad")
}

void coinupHold(void) {
	DEBUG_WORD("coinupHold")
}

void coinupBlanks(void) {
	DEBUG_WORD("coinupBlanks")
}

void coinupErase(void) {
	DEBUG_WORD("coinupErase")
}

void coinupFill(void) {
	DEBUG_WORD("coinupFill")
}

void coinupHeart(void) {
	DEBUG_WORD("coinupHeart")
}

void coinupQuery(void) {
	DEBUG_WORD("coinupQuery")
}

void coinupExpect(void) {
	DEBUG_WORD("coinupExpect")
}

void coinupDotQuote(void) {
	DEBUG_WORD("coinupDotQuote")
}

void coinupParenDotQuote(void) {
	DEBUG_WORD("coinupParenDotQuote")
}

void coinupTrailing(void) {
	DEBUG_WORD("coinupTrailing")
}

void coinupCount(void) {
	DEBUG_WORD("coinupCount")
}

void coinupDoes(void) {
	DEBUG_WORD("coinupDoes")
}

void coinupBuilds(void) {
	DEBUG_WORD("coinupBuilds")
}

void coinupSemicolonCode(void) {
	DEBUG_WORD("coinupSemicolonCode")
}

void coinupYSemicolonCode(void) {
	DEBUG_WORD("coinupYSemicolonCode")
}

void coinupDecimal(void) {
	DEBUG_WORD("coinupDecimal")
}

void coinupHex(void) {
	DEBUG_WORD("coinupHex")
}

void coinupSmudge(void) {
	DEBUG_WORD("coinupSmudge")
}

void coinupRightBracket(void) {
	DEBUG_WORD("coinupRightBracket")
}

void coinupLeftBracket(void) {
	DEBUG_WORD("coinupLeftBracket")
}

void coinupCompile(void) {
	DEBUG_WORD("coinupCompile")
}

void coinupQLoading(void) {
	DEBUG_WORD("coinupQLoading")
}

void coinupQCsp(void) {
	DEBUG_WORD("coinupQCsp")
}

void coinupQPairs(void) {
	DEBUG_WORD("coinupQPairs")
}

void coinupQExec(void) {
	DEBUG_WORD("coinupQExec")
}

void coinupQComp(void) {
	DEBUG_WORD("coinupQComp")
}

void coinupQError(void) {
	DEBUG_WORD("coinupQError")
}

void coinupStoreCsp(void) {
	DEBUG_WORD("coinupStoreCsp")
}

void coinupLfa(void) {
	DEBUG_WORD("coinupLfa")
}

void coinupPfa(void) {
	DEBUG_WORD("coinupPfa")
}

void coinupNfa(void) {
	DEBUG_WORD("coinupNfa")
}

void coinupCfa(void) {
	DEBUG_WORD("coinupCfa")
}

void coinupLatest(void) {
	DEBUG_WORD("coinupLatest")
}

void coinupTraverse(void) {
	DEBUG_WORD("coinupTraverse")
}

void coinupMinusDup(void) {
	DEBUG_WORD("coinupMinusDup")
}

void coinupSpace(void) {
	DEBUG_WORD("coinupSpace")
}

void coinupRot(void) {
	DEBUG_WORD("coinupRot")
}

void coinupGreater(void) {
	DEBUG_WORD("coinupGreater")
}

void coinupEqual(void) {
	DEBUG_WORD("coinupEqual")
}

void coinupMinus(void) {
	DEBUG_WORD("coinupMinus")
}

void coinupCComma(void) {
	DEBUG_WORD("coinupCComma")
}

void coinupComma(void) {
	DEBUG_WORD("coinupComma")
}

void coinupAllot(void) {
	DEBUG_WORD("coinupAllot")
}

void coinupHere(void) {
	DEBUG_WORD("coinupHere")
}

void coinupTwoPlus(void) {
	DEBUG_WORD("coinupTwoPlus")
}

void coinupOnePlus(void) {
	DEBUG_WORD("coinupOnePlus")
}

void coinupPhysOff(void) {
	DEBUG_WORD("coinupPhysOff")
}

void coinupInpt(void) {
	DEBUG_WORD("coinupInpt")
}

void coinupHld(void) {
	DEBUG_WORD("coinupHld")
}

void coinupRNum(void) {
	DEBUG_WORD("coinupRNum")
}

void coinupCsp(void) {
	DEBUG_WORD("coinupCsp")
}

void coinupFld(void) {
	DEBUG_WORD("coinupFld")
}

void coinupDpl(void) {
	DEBUG_WORD("coinupDpl")
}

void coinupBase(void) {
	DEBUG_WORD("coinupBase")
}

void coinupState(void) {
	DEBUG_WORD("coinupState")
}

void coinupCurrent(void) {
	DEBUG_WORD("coinupCurrent")
}

void coinupContext(void) {
	DEBUG_WORD("coinupContext")
}

void coinupOffset(void) {
	DEBUG_WORD("coinupOffset")
}

void coinupScr(void) {
	DEBUG_WORD("coinupScr")
}

void coinupOut(void) {
	DEBUG_WORD("coinupOut")
}

void coinupIn(void) {
	DEBUG_WORD("coinupIn")
}

void coinupBlk(void) {
	DEBUG_WORD("coinupBlk")
}

void coinupVocLink(void) {
	DEBUG_WORD("coinupVocLink")
}

void coinupDp(void) {
	DEBUG_WORD("coinupDp")
}

void coinupFence(void) {
	DEBUG_WORD("coinupFence")
}

void coinupWarning(void) {
	DEBUG_WORD("coinupWarning")
}

void coinupWidth(void) {
	DEBUG_WORD("coinupWidth")
}

void coinupTib(void) {
	DEBUG_WORD("coinupTib")
}

void coinupPlusOrigin(void) {
	DEBUG_WORD("coinupPlusOrigin")
}

void coinupHimem(void) {
	DEBUG_WORD("coinupHimem")
}

void coinupBSlashScr(void) {
	DEBUG_WORD("coinupBSlashScr")
}

void coinupBSlashBuf(void) {
	DEBUG_WORD("coinupBSlashScr")
}

void coinupLimit(void) {
	DEBUG_WORD("coinupLimit")
}

void coinupFirst(void) {
	DEBUG_WORD("coinupFirst")
}

void coinupNumLinks(void) {
	DEBUG_WORD("coinupNumLinks")
}

void coinupCSlashL(void) {
	DEBUG_WORD("coinupCSlashL")
}

void coinupCl(void) {
	DEBUG_WORD("coinupCl")
}

void coinupBl(void) {
	DEBUG_WORD("coinupBl")
}

void coinupThree(void) {
	DEBUG_WORD("coinupThree")
}

void coinupTwo(void) {
	DEBUG_WORD("coinupTwo")
}

void coinupOne(void) {
	DEBUG_WORD("coinupOne")
}

void coinupZero(void) {
	DEBUG_WORD("coinupZero")
}

void coinupUser(void) {
	DEBUG_WORD("coinupUser")
}

void coinupVariable(void) {
	DEBUG_WORD("coinupVariable")
}

void coinupConstant(void) {
	DEBUG_WORD("coinupConstant")
}

void coinupSemicolon(void) {
	DEBUG_WORD("coinupSemicolon")
}

void coinupColon(void) {
	DEBUG_WORD("coinupColon")
}

void coinupCStore(void) {
	DEBUG_WORD("coinupCStore")
}

void coinupStore(void) {
	DEBUG_WORD("coinupStore")
}

void coinupCFetch(void) {
	DEBUG_WORD("coinupCFetch")
}

void coinupFetch(void) {
	DEBUG_WORD("coinupCFetch")
}

void coinupToggle(void) {
	DEBUG_WORD("coinupToggle")
}

void coinupPlusStore(void) {
	DEBUG_WORD("coinupPlusStore")
}

void coinupDup(void) {
	DEBUG_WORD("coinupDup")
}

void coinupSwap(void) {
	DEBUG_WORD("coinupSwap")
}

void coinupDrop(void) {
	DEBUG_WORD("coinupDrop")
}

void coinupOver(void) {
	DEBUG_WORD("coinupOver")
}

void coinupDMinus(void) {
	DEBUG_WORD("coinupDMinus")
}

void coinupMinusWord(void) {
	DEBUG_WORD("coinupMinusWord")
}

void coinupDPlus(void) {
	DEBUG_WORD("coinupDPlus")
}

void coinupPlus(void) {
	DEBUG_WORD("coinupPlus")
}

void coinupLess(void) {
	DEBUG_WORD("coinupLess")
}

void coinupULess(void) {
	DEBUG_WORD("coinupULess")
}

void coinupZeroLess(void) {
	DEBUG_WORD("coinupZeroLess")
}

void coinupZeroEqual(void) {
	DEBUG_WORD("coinupZeroEqual")
}

void coinupR(void) {
	DEBUG_WORD("coinupR")
}

void coinupRTo(void) {
	DEBUG_WORD("coinupRTo")
}

void coinupGreaterR(void) {
	DEBUG_WORD("coinupGreaterR")
}

void coinupLeave(void) {
	DEBUG_WORD("coinupLeave")
}

void coinupSemicolonS(void) {
	DEBUG_WORD("coinupSemicolonS")
}

void coinupRPStoreye(void) {
	DEBUG_WORD("coinupRPStoreye")
}

void coinupSPStore(void) {
	DEBUG_WORD("coinupSPStore")
}

void coinupSPFetch(void) {
	DEBUG_WORD("coinupSPFetch")
}

void coinupXor(void) {
	DEBUG_WORD("coinupXor")
}

void coinupOr(void) {
	DEBUG_WORD("coinupOr")
}

void coinupAnd(void) {
	DEBUG_WORD("coinupAnd")
}

void coinupUSlash(void) {
	DEBUG_WORD("coinupUSlash")
}

void coinupUStar(void) {
	DEBUG_WORD("coinupUStar")
}

void coinupCMove(void) {
	DEBUG_WORD("coinupCMove")
}

void coinupD8uStar(void) {
	DEBUG_WORD("coinupD8uStar")
}

void coinupEnclose(void) {
	DEBUG_WORD("coinupEnclose")
}

void coinupYFind(void) {
	DEBUG_WORD("coinupYFind")
}

void coinupDigit(void) {
	DEBUG_WORD("coinupDigit")
}

void coinupJ(void) {
	DEBUG_WORD("coinupJ")
}

void coinupI(void) {
	DEBUG_WORD("coinupI")
}

void coinupYDo(void) {
	DEBUG_WORD("coinupYDo")
}

void coinupYPlusLoop(void) {
	DEBUG_WORD("coinupYPlusLoop")
}

void coinupYLoop(void) {
	DEBUG_WORD("coinupYLoop")
}

void coinupZeroBranch(void) {
	DEBUG_WORD("coinupZeroBranch")
}

void coinupBranch(void) {
	DEBUG_WORD("coinupBranch")
}

void coinupExecute(void) {
	DEBUG_WORD("coinupExecute")
}

void coinupLit(void) {
	DEBUG_WORD("coinupLit")
}


#endif
