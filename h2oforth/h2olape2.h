#ifndef H2OLAPE2
#define H2OLAPE2

/* The "Laxon & Perry 2.0" ( FORTH-83 ) FORTH */

/* Primitives */

#if (H2O_FORTH_PRIMITIVES == LAXONPERRY_FORTH) || \
    (H2O_FORTH_PRIMITIVES == LAXONPERRY_PC_FORTH) || \
    (H2O_FORTH_PRIMITIVES == LAXONPERRY_CPM_FORTH) || \
	(H2O_FORTH_PRIMITIVES == LAXONPERRY_CPM68K_FORTH)
void laxperEmpty(void) {
	DEBUG_WORD("laxperEmpty")
}

void laxperMark(void) {
	DEBUG_WORD("laxperMark")
}

void laxperHello(void) {
	DEBUG_WORD("laxperHello")
}

void laxperBackgroundColon(void) {
	DEBUG_WORD("laxperBackgroundColon")
}

void laxperActivate(void) {
	DEBUG_WORD("laxperActivate")
}

void laxperSetTask(void) {
	DEBUG_WORD("laxperSetTask")
}

void laxperTaskColon(void) {
	DEBUG_WORD("laxperTaskColon")
}

void laxperResume(void) {
	DEBUG_WORD("laxperResume")
}

void laxperDebug(void) {
	DEBUG_WORD("laxperDebug")
}

void laxperListing(void) {
	DEBUG_WORD("laxperListing")
}

void laxperShow(void) {
	DEBUG_WORD("laxperShow")
}

void laxperYSemit(void) {
	DEBUG_WORD("laxperYSemit")
}

void laxperYPage(void) {
	DEBUG_WORD("laxperYPage")
}

void laxperFormFeed(void) {
	DEBUG_WORD("laxperFormFeed")
}

void laxperPage(void) {
	DEBUG_WORD("laxperPage")
}

void laxperNumPage(void) {
	DEBUG_WORD("laxperNumPage")
}

void laxperLogo(void) {
	DEBUG_WORD("laxperLogo")
}

void laxperLSlashPage(void) {
	DEBUG_WORD("laxperLSlashPage")
}

void laxperFooting(void) {
	DEBUG_WORD("laxperFooting")
}

void laxperInitPr(void) {
	DEBUG_WORD("laxperInitPr")
}

void laxperEpson(void) {
	DEBUG_WORD("laxperEpson")
}

void laxperSee(void) {
	DEBUG_WORD("laxperSee")
}

void laxperYSee(void) {
	DEBUG_WORD("laxperYSee")
}

void laxperAssociativeColon(void) {
	DEBUG_WORD("laxperAssociativeColon")
}

void laxperCaseColon(void) {
	DEBUG_WORD("laxperCaseColon")
}

void laxperMap(void) {
	DEBUG_WORD("laxperMap")
}

void laxperOut(void) {
	DEBUG_WORD("laxperOut")
}

void laxperDL(void) {
	DEBUG_WORD("laxperDL")
}

void laxperDU(void) {
	DEBUG_WORD("laxperDU")
}

void laxperDump(void) {
	DEBUG_WORD("laxperDump")
}

void laxperDotHead(void) {
	DEBUG_WORD("laxperDotHead")
}

void laxperQDotA(void) {
	DEBUG_WORD("laxperQDotA")
}

void laxperQDotN(void) {
	DEBUG_WORD("laxperQDotN")
}

void laxperDln(void) {
	DEBUG_WORD("laxperDln")
}

void laxperEmitDot(void) {
	DEBUG_WORD("laxperEmitDot")
}

void laxperDDotTwo(void) {
	DEBUG_WORD("laxperDDotTwo")
}

void laxperDotTwo(void) {
	DEBUG_WORD("laxperDotTwo")
}

void laxperA(void) {
	DEBUG_WORD("laxperA")
}

void laxperShadow(void) {
	DEBUG_WORD("laxperShadow")
}

void laxperYWhere(void) {
	DEBUG_WORD("laxperYWhere")
}

void laxperFix(void) {
	DEBUG_WORD("laxperFix")
}

void laxperEdit(void) {
	DEBUG_WORD("laxperEdit")
}

void laxperEd(void) {
	DEBUG_WORD("laxperEd")
}

void laxperDone(void) {
	DEBUG_WORD("laxperDone")
}

void laxperEditor(void) {
	DEBUG_WORD("laxperEditor")
}

void laxperDark(void) {
	DEBUG_WORD("laxperDark")
}

void laxperAt(void) {
	DEBUG_WORD("laxperAt")
}

void laxperMinusLine(void) {
	DEBUG_WORD("laxperMinusLine")
}

void laxperBlot(void) {
	DEBUG_WORD("laxperBlot")
}

void laxperReplace(void) {
	DEBUG_WORD("laxperReplace")
}

void laxperInsert(void) {
	DEBUG_WORD("laxperInsert")
}

void laxperDelete(void) {
	DEBUG_WORD("laxperDelete")
}

void laxperSearch(void) {
	DEBUG_WORD("laxperSearch")
}

void laxperScanFirst(void) {
	DEBUG_WORD("laxperScanFirst")
}

void laxperFound(void) {
	DEBUG_WORD("laxperFound")
}

void laxperTo(void) {
	DEBUG_WORD("laxperTo")
}

void laxperCorvey(void) {
	DEBUG_WORD("laxperCorvey")
}

void laxperYConvey(void) {
	DEBUG_WORD("laxperYConvey")
}

void laxperDotTo(void) {
	DEBUG_WORD("laxperDotTo")
}

void laxperHop(void) {
	DEBUG_WORD("laxperHop")
}

void laxperConveyCopy(void) {
	DEBUG_WORD("laxperConveyCopy")
}

void laxperUSlashD(void) {
	DEBUG_WORD("laxperUSlashD")
}

void laxperHopped(void) {
	DEBUG_WORD("laxperHopped")
}

void laxperView(void) {
	DEBUG_WORD("laxperView")
}

void laxperFetchView(void) {
	DEBUG_WORD("laxperFetchView")
}

void laxperCopy(void) {
	DEBUG_WORD("laxperCopy")
}

void laxperYCopy(void) {
	DEBUG_WORD("laxperYCopy")
}

void laxperEstablish(void) {
	DEBUG_WORD("laxperEstablish")
}

void laxperL(void) {
	DEBUG_WORD("laxperL")
}

void laxperB(void) {
	DEBUG_WORD("laxperB")
}

void laxperN(void) {
	DEBUG_WORD("laxperN")
}

void laxperColonColon(void) {
	DEBUG_WORD("laxperColonColon")
}

void laxperMany(void) {
	DEBUG_WORD("laxperMany")
}

void laxperTimes(void) {
	DEBUG_WORD("laxperTimes")
}

void laxperNumTimes(void) {
	DEBUG_WORD("laxperNumTimes")
}

void laxperWords(void) {
	DEBUG_WORD("laxperWords")
}

void laxperLargest(void) {
	DEBUG_WORD("laxperLargest")
}

void laxperInd(void) {
	DEBUG_WORD("laxperInd")
}

void laxperIndex(void) {
	DEBUG_WORD("laxperIndex")
}

void laxperDotLineZero(void) {
	DEBUG_WORD("laxperDotLineZero")
}

void laxperTriad(void) {
	DEBUG_WORD("laxperTriad")
}

void laxperList(void) {
	DEBUG_WORD("laxperList")
}

void laxperDotScr(void) {
	DEBUG_WORD("laxperDotScr")
}

void laxperQCr(void) {
	DEBUG_WORD("laxperQCr")
}

void laxperQLine(void) {
	DEBUG_WORD("laxperQLine")
}

void laxperRMargin(void) {
	DEBUG_WORD("laxperRMargin")
}

void laxperLMargin(void) {
	DEBUG_WORD("laxperLMargin")
}

void laxperHidden(void) {
	DEBUG_WORD("laxperHidden")
}

void laxperZeroLessEqual(void) {
	DEBUG_WORD("laxperZeroLessEqual")
}

void laxperZeroGreaterEqual(void) {
	DEBUG_WORD("laxperZeroGreaterEqual")
}

void laxperGreaterEqual(void) {
	DEBUG_WORD("laxperGreaterEqual")
}

void laxperLessEqual(void) {
	DEBUG_WORD("laxperLessEqual")
}

void laxperUGreaterEqual(void) {
	DEBUG_WORD("laxperUGreaterEqual")
}

void laxperULessEqual(void) {
	DEBUG_WORD("laxperULessEqual")
}

void laxperMs(void) {
	DEBUG_WORD("laxperMs")
}

void laxperFudge(void) {
	DEBUG_WORD("laxperFudge")
}

void laxperPCStore(void) {
	DEBUG_WORD("laxperPCStore")
}

void laxperPCFetch(void) {
	DEBUG_WORD("laxperPCFetch")
}

void laxperMulti(void) {
	DEBUG_WORD("laxperMulti")
}

void laxperSingle(void) {
	DEBUG_WORD("laxperSingle")
}

void laxperStop(void) {
	DEBUG_WORD("laxperStop")
}

void laxperWake(void) {
	DEBUG_WORD("laxperWake")
}

void laxperSleep(void) {
	DEBUG_WORD("laxperSleep")
}

void laxperStoreLink(void) {
	DEBUG_WORD("laxperStoreLink")
}

void laxperFetchLink(void) {
	DEBUG_WORD("laxperFetchLink")
}

void laxperLocal(void) {
	DEBUG_WORD("laxperLocal")
}

void laxperRestart(void) {
	DEBUG_WORD("laxperRestart")
}

void laxperYPause(void) {
	DEBUG_WORD("laxperYPause")
}

void laxperUnbug(void) {
	DEBUG_WORD("laxperUnbug")
}

void laxperBug(void) {
	DEBUG_WORD("laxperBug")
}

void laxperDoesQ(void) {
	DEBUG_WORD("laxperDoesQ")
}

void laxperDoesSize(void) {
	DEBUG_WORD("laxperDoesSize")
}

void laxperDoesOp(void) {
	DEBUG_WORD("laxperDoesOp")
}

void laxperLabel(void) {
	DEBUG_WORD("laxperLabel")
}

void laxperUtilityDotBlk(void) {
	DEBUG_WORD("laxperUtilityDotBlk")
}

void laxperViews(void) {
	DEBUG_WORD("laxperViews")
}

void laxperViewFiles(void) {
	DEBUG_WORD("laxperViewFiles")
}

void laxperSaveSystem(void) {
	DEBUG_WORD("laxperSaveSystem")
}

void laxperForm(void) {
	DEBUG_WORD("laxperForm")
}

void laxperOpen(void) {
	DEBUG_WORD("laxperOpen")
}

void laxperDefine(void) {
	DEBUG_WORD("laxperDefine")
}

void laxperBColon(void) {
	DEBUG_WORD("laxperBColon")
}

void laxperAColon(void) {
	DEBUG_WORD("laxperAColon")
}

void laxperDriveQ(void) {
	DEBUG_WORD("laxperDriveQ")
}

void laxperDir(void) {
	DEBUG_WORD("laxperDir")
}

void laxperCreateFile(void) {
	DEBUG_WORD("laxperCreateFile")
}

void laxperMore(void) {
	DEBUG_WORD("laxperMore")
}

void laxperRoot(void) {
	DEBUG_WORD("laxperRoot")
}

void laxperNextBlock(void) {
	DEBUG_WORD("laxperNextBlock")
}

void laxperPlusThru(void) {
	DEBUG_WORD("laxperPlusThru")
}

void laxperThru(void) {
	DEBUG_WORD("laxperThru")
}

void laxperQEnough(void) {
	DEBUG_WORD("laxperQEnough")
}

void laxperQ(void) {
	DEBUG_WORD("laxperQ")
}

void laxperParenS(void) {
	DEBUG_WORD("laxperParenS")
}

void laxperBackslash(void) {
	DEBUG_WORD("laxperBackslash")
}

void laxperLSlashScr(void) {
	DEBUG_WORD("laxperLSlashScr")
}

void laxperCSlashL(void) {
	DEBUG_WORD("laxperCSlashL")
}

void laxperRecurse(void) {
	DEBUG_WORD("laxperRecurse")
}

void laxperDotId(void) {
	DEBUG_WORD("laxperDotId")
}

void laxperDotS(void) {
	DEBUG_WORD("laxperDotS")
}

void laxperDepth(void) {
	DEBUG_WORD("laxperDepth")
}

void laxperBye(void) {
	DEBUG_WORD("laxperBye")
}

void laxperStart(void) {
	DEBUG_WORD("laxperStart")
}

void laxperOk(void) {
	DEBUG_WORD("laxperOk")
}

void laxperInitial(void) {
	DEBUG_WORD("laxperInitial")
}

void laxperCold(void) {
	DEBUG_WORD("laxperCold")
}

void laxperWarm(void) {
	DEBUG_WORD("laxperWarm")
}

void laxperBoot(void) {
	DEBUG_WORD("laxperBoot")
}

void laxperQuit(void) {
	DEBUG_WORD("laxperQuit")
}

void laxperRun(void) {
	DEBUG_WORD("laxperRun")
}

void laxperIs(void) {
	DEBUG_WORD("laxperIs")
}

void laxperYIs(void) {
	DEBUG_WORD("laxperYIs")
}

void laxperToIs(void) {
	DEBUG_WORD("laxperToIs")
}

void laxperUser(void) {
	DEBUG_WORD("laxperUser")
}

void laxperNumUser(void) {
	DEBUG_WORD("laxperNumUser")
}

void laxperCode(void) {
	DEBUG_WORD("laxperCode")
}

void laxperAvoc(void) {
	DEBUG_WORD("laxperAvoc")
}

void laxperTwoVariable(void) {
	DEBUG_WORD("laxperTwoVariable")
}

void laxperTwoConstant(void) {
	DEBUG_WORD("laxperTwoConstant")
}

void laxperDefinitions(void) {
	DEBUG_WORD("laxperDefinitions")
}

void laxperVocabulary(void) {
	DEBUG_WORD("laxperVocabulary")
}

void laxperDefer(void) {
	DEBUG_WORD("laxperDefer")
}

void laxperVariable(void) {
	DEBUG_WORD("laxperVariable")
}

void laxperConstant(void) {
	DEBUG_WORD("laxperConstant")
}

void laxperRecursive(void) {
	DEBUG_WORD("laxperRecursive")
}

void laxperSemicolon(void) {
	DEBUG_WORD("laxperSemicolon")
}

void laxperColon(void) {
	DEBUG_WORD("laxperColon")
}

void laxperRightBracket(void) {
	DEBUG_WORD("laxperRightBracket")
}

void laxperLeftBracket(void) {
	DEBUG_WORD("laxperLeftBracket")
}

void laxperDoes(void) {
	DEBUG_WORD("laxperDoes")
}

void laxperSemicolonCode(void) {
	DEBUG_WORD("laxperSemicolonCode")
}

void laxperYSemicolonCode(void) {
	DEBUG_WORD("laxperYSemicolonCode")
}

void laxperSemicolonUses(void) {
	DEBUG_WORD("laxperSemicolonUses")
}

void laxperAssembler(void) {
	DEBUG_WORD("laxperAssembler")
}

void laxperYSemicolonUses(void) {
	DEBUG_WORD("laxperYSemicolonUses")
}

void laxperReveal(void) {
	DEBUG_WORD("laxperReveal")
}

void laxperHide(void) {
	DEBUG_WORD("laxperHide")
}

void laxperQCsp(void) {
	DEBUG_WORD("laxperQCsp")
}

void laxperStoreCsp(void) {
	DEBUG_WORD("laxperStoreCsp")
}

void laxperCreate(void) {
	DEBUG_WORD("laxperCreate")
}

void laxperBackslashCreate(void) {
	DEBUG_WORD("laxperBackslashCreate")
}

void laxperCommaView(void) {
	DEBUG_WORD("laxperCommaView")
}

void laxperWhile(void) {
	DEBUG_WORD("laxperWhile")
}

void laxperElse(void) {
	DEBUG_WORD("laxperElse")
}

void laxperIf(void) {
	DEBUG_WORD("laxperIf")
}

void laxperRepeat(void) {
	DEBUG_WORD("laxperRepeat")
}

void laxperAgain(void) {
	DEBUG_WORD("laxperAgain")
}

void laxperUntil(void) {
	DEBUG_WORD("laxperUntil")
}

void laxperPlusLoop(void) {
	DEBUG_WORD("laxperPlusLoop")
}

void laxperLoop(void) {
	DEBUG_WORD("laxperLoop")
}

void laxperQDo(void) {
	DEBUG_WORD("laxperQDo")
}

void laxperDo(void) {
	DEBUG_WORD("laxperDo")
}

void laxperThen(void) {
	DEBUG_WORD("laxperThen")
}

void laxperBegin(void) {
	DEBUG_WORD("laxperBegin")
}

void laxperQLeave(void) {
	DEBUG_WORD("laxperQLeave")
}

void laxperLeave(void) {
	DEBUG_WORD("laxperLeave")
}

void laxperQLessResolve(void) {
	DEBUG_WORD("laxperQLessResolve")
}

void laxperQLessMark(void) {
	DEBUG_WORD("laxperQLessMark")
}

void laxperQGreaterResolve(void) {
	DEBUG_WORD("laxperQGreaterResolve")
}

void laxperQGreaterMark(void) {
	DEBUG_WORD("laxperQGreaterMark")
}

void laxperLessResolve(void) {
	DEBUG_WORD("laxperLessResolve")
}

void laxperLessMark(void) {
	DEBUG_WORD("laxperLessMark")
}

void laxperToResolve(void) {
	DEBUG_WORD("laxperToResolve")
}

void laxperToMark(void) {
	DEBUG_WORD("laxperToMark")
}

void laxperQCondition(void) {
	DEBUG_WORD("laxperQCondition")
}

void laxperAbort(void) {
	DEBUG_WORD("laxperAbort")
}

void laxperAbortQuote(void) {
	DEBUG_WORD("laxperAbortQuote")
}

void laxperYAbortQuote(void) {
	DEBUG_WORD("laxperYAbortQuote")
}

void laxperYQError(void) {
	DEBUG_WORD("laxperYQError")
}

void laxperQError(void) {
	DEBUG_WORD("laxperQError")
}

void laxperWhere(void) {
	DEBUG_WORD("laxperWhere")
}

void laxperForget(void) {
	DEBUG_WORD("laxperForget")
}

void laxperYForget(void) {
	DEBUG_WORD("laxperYForget")
}

void laxperTrim(void) {
	DEBUG_WORD("laxperTrim")
}

void laxperFence(void) {
	DEBUG_WORD("laxperFence")
}

void laxperQuote(void) {
	DEBUG_WORD("laxperQuoten")
}

void laxperDotQuote(void) {
	DEBUG_WORD("laxperDotQuote")
}

void laxperCommaQuote(void) {
	DEBUG_WORD("laxperCommaQuote")
}

void laxperYDotQuote(void) {
	DEBUG_WORD("laxperYDotQuote")
}

void laxperYQuote(void) {
	DEBUG_WORD("laxperYQuote")
}

void laxperXCompile(void) {
	DEBUG_WORD("laxperXCompile")
}

void laxperXTick(void) {
	DEBUG_WORD("laxperXTick")
}

void laxperTick(void) {
	DEBUG_WORD("laxperTick")
}

void laxperQMissing(void) {
	DEBUG_WORD("laxperQMissing")
}

void laxperCrash(void) {
	DEBUG_WORD("laxperCrash")
}

void laxperControl(void) {
	DEBUG_WORD("laxperControl")
}

void laxperAscii(void) {
	DEBUG_WORD("laxperAscii")
}

void laxperDLiteral(void) {
	DEBUG_WORD("laxperDLiteral")
}

void laxperLiteral(void) {
	DEBUG_WORD("laxperLiteral")
}

void laxperImmediate(void) {
	DEBUG_WORD("laxperImmediate")
}

void laxperCompile(void) {
	DEBUG_WORD("laxperCompile")
}

void laxperEven(void) {
	DEBUG_WORD("laxperEven")
}

void laxperAlign(void) {
	DEBUG_WORD("laxperAlign")
}

void laxperCComma(void) {
	DEBUG_WORD("laxperCComma")
}

void laxperComma(void) {
	DEBUG_WORD("laxperComma")
}

void laxperAllot(void) {
	DEBUG_WORD("laxperAllot")
}

void laxperInterpret(void) {
	DEBUG_WORD("laxperInterpret")
}

void laxperStatus(void) {
	DEBUG_WORD("laxperStatus")
}

void laxperQStatus(void) {
	DEBUG_WORD("laxperQStatus")
}

void laxperDefined(void) {
	DEBUG_WORD("laxperDefined")
}

void laxperQUppercase(void) {
	DEBUG_WORD("laxperQUppercase")
}

void laxperFind(void) {
	DEBUG_WORD("laxperFind")
}

void laxperNumThreads(void) {
	DEBUG_WORD("laxperNumThreads")
}

void laxperYFind(void) {
	DEBUG_WORD("laxperYFind")
}

void laxperHash(void) {
	DEBUG_WORD("laxperHash")
}

void laxperViewFrom(void) {
	DEBUG_WORD("laxperViewFrom")
}

void laxperToView(void) {
	DEBUG_WORD("laxperToView")
}

void laxperToLink(void) {
	DEBUG_WORD("laxperToLink")
}

void laxperToName(void) {
	DEBUG_WORD("laxperToName")
}

void laxperToBody(void) {
	DEBUG_WORD("laxperToBody")
}

void laxperLinkFrom(void) {
	DEBUG_WORD("laxperLinkFrom")
}

void laxperNameFrom(void) {
	DEBUG_WORD("laxperNameFrom")
}

void laxperBodyFrom(void) {
	DEBUG_WORD("laxperBodyFrom")
}

void laxperLGreaterName(void) {
	DEBUG_WORD("laxperLGreaterName")
}

void laxperNToLink(void) {
	DEBUG_WORD("laxperNToLink")
}

void laxperForth83(void) {
	DEBUG_WORD("laxperForth83")
}

void laxperDoneQ(void) {
	DEBUG_WORD("laxperDoneQ")
}

void laxperTraverse(void) {
	DEBUG_WORD("laxperTraverse")
}

void laxperBackslashS(void) {
	DEBUG_WORD("laxperBackslashS")
}

void laxperParen(void) {
	DEBUG_WORD("laxperParen")
}

void laxperDotParen(void) {
	DEBUG_WORD("laxperDotParen")
}

void laxperToType(void) {
	DEBUG_WORD("laxperToType")
}

void laxperWord(void) {
	DEBUG_WORD("laxperWord")
}

void laxperTickWord(void) {
	DEBUG_WORD("laxperTickWord")
}

void laxperParse(void) {
	DEBUG_WORD("laxperParse")
}

void laxperParseWord(void) {
	DEBUG_WORD("laxperParseWord")
}

void laxperSource(void) {
	DEBUG_WORD("laxperSource")
}

void laxperYSource(void) {
	DEBUG_WORD("laxperYSource")
}

void laxperPlace(void) {
	DEBUG_WORD("laxperPlace")
}

void laxperSlashString(void) {
	DEBUG_WORD("laxperSlashString")
}

void laxperScan(void) {
	DEBUG_WORD("laxperScan")
}

void laxperSkip(void) {
	DEBUG_WORD("laxperSkip")
}

void laxperDDotR(void) {
	DEBUG_WORD("laxperDDotR")
}

void laxperDDot(void) {
	DEBUG_WORD("laxperDDot")
}

void laxperYDDot(void) {
	DEBUG_WORD("laxperYDDot")
}

void laxperUdDotR(void) {
	DEBUG_WORD("laxperUdDotR")
}

void laxperUdDot(void) {
	DEBUG_WORD("laxperUdDot")
}

void laxperYUdDot(void) {
	DEBUG_WORD("laxperYUdDo")
}

void laxperDotR(void) {
	DEBUG_WORD("laxperDotR")
}

void laxperDot(void) {
	DEBUG_WORD("laxperDot")
}

void laxperYDot(void) {
	DEBUG_WORD("laxperYDot")
}

void laxperUDotR(void) {
	DEBUG_WORD("laxperUDotR")
}

void laxperUDot(void) {
	DEBUG_WORD("laxperUDot")
}

void laxperYUDot(void) {
	DEBUG_WORD("laxperYUDot")
}

void laxperOctal(void) {
	DEBUG_WORD("laxperOctal")
}

void laxperDecimal(void) {
	DEBUG_WORD("laxperDecimal")
}

void laxperHex(void) {
	DEBUG_WORD("laxperHex")
}

void laxperNumS(void) {
	DEBUG_WORD("laxperNumS")
}

void laxperNum(void) {
	DEBUG_WORD("laxperNum")
}

void laxperSign(void) {
	DEBUG_WORD("laxperSign")
}

void laxperNumGreater(void) {
	DEBUG_WORD("laxperNumGreater")
}

void laxperLessNum(void) {
	DEBUG_WORD("laxperLessNum")
}

void laxperHold(void) {
	DEBUG_WORD("laxperHold")
}

void laxperNumber(void) {
	DEBUG_WORD("laxperNumber")
}

void laxperYNumber(void) {
	DEBUG_WORD("laxperYNumber")
}

void laxperNumberQ(void) {
	DEBUG_WORD("laxperNumberQ")
}

void laxperYNumberQ(void) {
	DEBUG_WORD("laxperYNumberQ")
}

void laxperConvert(void) {
	DEBUG_WORD("laxperConvert")
}

void laxperDoubleQ(void) {
	DEBUG_WORD("laxperDoubleQ")
}

void laxperDigit(void) {
	DEBUG_WORD("laxperDigit")
}

void laxperLoad(void) {
	DEBUG_WORD("laxperLoad")
}

void laxperYLoad(void) {
	DEBUG_WORD("laxperYLoad")
}

void laxperDefault(void) {
	DEBUG_WORD("laxperDefault")
}

void laxperViewNum(void) {
	DEBUG_WORD("laxperViewNum")
}

void laxperFlush(void) {
	DEBUG_WORD("laxperFlush")
}

void laxperSaveBuffers(void) {
	DEBUG_WORD("laxperSaveBuffers")
}

void laxperEmptyBuffers(void) {
	DEBUG_WORD("laxperEmptyBuffers")
}

void laxperInBlock(void) {
	DEBUG_WORD("laxperInBlock")
}

void laxperBlock(void) {
	DEBUG_WORD("laxperBlock")
}

void laxperYBlock(void) {
	DEBUG_WORD("laxperYBlock")
}

void laxperBuffer(void) {
	DEBUG_WORD("laxperBuffer")
}

void laxperYBuffer(void) {
	DEBUG_WORD("laxperYBuffer")
}

void laxperMissing(void) {
	DEBUG_WORD("laxperMissing")
}

void laxperDiscord(void) {
	DEBUG_WORD("laxperDiscord")
}

void laxperUpdate(void) {
	DEBUG_WORD("laxperUpdate")
}

void laxperAbsentQ(void) {
	DEBUG_WORD("laxperAbsentQ")
}

void laxperLatestQ(void) {
	DEBUG_WORD("laxperLatestQ")
}

void laxperCapacity(void) {
	DEBUG_WORD("laxperCapacity")
}

void laxperDos(void) {
	DEBUG_WORD("laxperDos")
}

void laxperSwitch(void) {
	DEBUG_WORD("laxperSwitch")
}

void laxperFileQ(void) {
	DEBUG_WORD("laxperFileQ")
}

void laxperDotFile(void) {
	DEBUG_WORD("laxperDotFile")
}

void laxperWriteBlock(void) {
	DEBUG_WORD("laxperWriteBlock")
}

void laxperReadBlock(void) {
	DEBUG_WORD("laxperReadBlock")
}

void laxperToUpdate(void) {
	DEBUG_WORD("laxperToUpdate")
}

void laxperBuffersNum(void) {
	DEBUG_WORD("laxperBuffersNum")
}

void laxperToEnd(void) {
	DEBUG_WORD("laxperToEnd")
}

void laxperToBuffers(void) {
	DEBUG_WORD("laxperToBuffers")
}

void laxperInitR0(void) {
	DEBUG_WORD("laxperInitR0")
}

void laxperFirst(void) {
	DEBUG_WORD("laxperFirst")
}

void laxperToSize(void) {
	DEBUG_WORD("laxperToSize")
}

void laxperLimit(void) {
	DEBUG_WORD("laxperLimit")
}

void laxperDiskError(void) {
	DEBUG_WORD("laxperDiskError")
}

void laxperBSlashFcb(void) {
	DEBUG_WORD("laxperBSlashFcb")
}

void laxperRecSlashBlk(void) {
	DEBUG_WORD("laxperRecSlashBlk")
}

void laxperBSlashRec(void) {
	DEBUG_WORD("laxperBSlashRec")
}

void laxperBSlashBuf(void) {
	DEBUG_WORD("laxperBSlashBuf")
}

void laxperNumBuffers(void) {
	DEBUG_WORD("laxperNumBuffers")
}

void laxperQuery(void) {
	DEBUG_WORD("laxperQuery")
}

void laxperTib(void) {
	DEBUG_WORD("laxperTib")
}

void laxperExpect(void) {
	DEBUG_WORD("laxperExpect")
}

void laxperCcForth(void) {
	DEBUG_WORD("laxperCcForth")
}

void laxperCc(void) {
	DEBUG_WORD("laxperCc")
}

void laxperDelIn(void) {
	DEBUG_WORD("laxperDelIn")
}

void laxperChar(void) {
	DEBUG_WORD("laxperChar")
}

void laxperYChar(void) {
	DEBUG_WORD("laxperYChar")
}

void laxperCrIn(void) {
	DEBUG_WORD("laxperCrIn")
}

void laxperPIn(void) {
	DEBUG_WORD("laxperPIn")
}

void laxperResIn(void) {
	DEBUG_WORD("laxperResIn")
}

void laxperBackUp(void) {
	DEBUG_WORD("laxperBackUp")
}

void laxperYDelIn(void) {
	DEBUG_WORD("laxperYDelIn")
}

void laxperBsIn(void) {
	DEBUG_WORD("laxperBsIn")
}

void laxperBeep(void) {
	DEBUG_WORD("laxperBeep")
}

void laxperBackspaces(void) {
	DEBUG_WORD("laxperBackspaces")
}

void laxperSpaces(void) {
	DEBUG_WORD("laxperSpaces")
}

void laxperSpace(void) {
	DEBUG_WORD("laxperSpace")
}

void laxperType(void) {
	DEBUG_WORD("laxperType")
}

void laxperCrLf(void) {
	DEBUG_WORD("laxperCrLf")
}

void laxperYEmit(void) {
	DEBUG_WORD("laxperYEmit")
}

void laxperYPrint(void) {
	DEBUG_WORD("laxperYPrint")
}

void laxperPrStat(void) {
	DEBUG_WORD("laxperPrStat")
}

void laxperCr(void) {
	DEBUG_WORD("laxperCr")
}

void laxperKey(void) {
	DEBUG_WORD("laxperKey")
}

void laxperKeyQ(void) {
	DEBUG_WORD("laxperKeyQ")
}

void laxperYConsole(void) {
	DEBUG_WORD("laxperYConsole")
}

void laxperYKey(void) {
	DEBUG_WORD("laxperYKey")
}

void laxperYKeyQ(void) {
	DEBUG_WORD("laxperYKeyQ")
}

void laxperBdos(void) {
	DEBUG_WORD("laxperBdos")
}

void laxperCompare(void) {
	DEBUG_WORD("laxperCompare")
}

void laxperCapsComp(void) {
	DEBUG_WORD("laxperCapsComp")
}

void laxperComp(void) {
	DEBUG_WORD("laxperComp")
}

void laxperMinusTrailing(void) {
	DEBUG_WORD("laxperMinusTrailing")
}

void laxperPad(void) {
	DEBUG_WORD("laxperPad")
}

void laxperHere(void) {
	DEBUG_WORD("laxperHere")
}

void laxperUpper(void) {
	DEBUG_WORD("laxperUpper")
}

void laxperUpc(void) {
	DEBUG_WORD("laxperUpc")
}

void laxperMove(void) {
	DEBUG_WORD("laxperMove")
}

void laxperLength(void) {
	DEBUG_WORD("laxperLength")
}

void laxperCount(void) {
	DEBUG_WORD("laxperCount")
}

void laxperBlank(void) {
	DEBUG_WORD("laxperBlank")
}

void laxperErase(void) {
	DEBUG_WORD("laxperErase")
}

void laxperFill(void) {
	DEBUG_WORD("laxperFill")
}

void laxperCaps(void) {
	DEBUG_WORD("laxperCaps")
}

void laxperBell(void) {
	DEBUG_WORD("laxperBell")
}

void laxperBs(void) {
	DEBUG_WORD("laxperBs")
}

void laxperBl(void) {
	DEBUG_WORD("laxperBl")
}

void laxperEndQ(void) {
	DEBUG_WORD("laxperEndQ")
}

void laxperNumTib(void) {
	DEBUG_WORD("laxperNumTib")
}

void laxperSpan(void) {
	DEBUG_WORD("laxperSpan")
}

void laxperToIn(void) {
	DEBUG_WORD("laxperToIn")
}

void laxperBlk(void) {
	DEBUG_WORD("laxperBlk")
}

void laxperVocLink(void) {
	DEBUG_WORD("laxperVocLink")
}

void laxperWidth(void) {
	DEBUG_WORD("laxperWidth")
}

void laxperTickTib(void) {
	DEBUG_WORD("laxperTickTib")
}

void laxperContext(void) {
	DEBUG_WORD("laxperContext")
}

void laxperNumVocs(void) {
	DEBUG_WORD("laxperNumVocs")
}

void laxperCurrent(void) {
	DEBUG_WORD("laxperCurrent")
}

void laxperCsp(void) {
	DEBUG_WORD("laxperCsp")
}

void laxperLast(void) {
	DEBUG_WORD("laxperLast")
}

void laxperRNum(void) {
	DEBUG_WORD("laxperRNum")
}

void laxperDpl(void) {
	DEBUG_WORD("laxperDpl")
}

void laxperWarning(void) {
	DEBUG_WORD("laxperWarning")
}

void laxperState(void) {
	DEBUG_WORD("laxperState")
}

void laxperPrior(void) {
	DEBUG_WORD("laxperPrior")
}

void laxperScr(void) {
	DEBUG_WORD("laxperScr")
}

void laxperEmit(void) {
	DEBUG_WORD("laxperEmit")
}

void laxperPrinting(void) {
	DEBUG_WORD("laxperPrinting")
}

void laxperInFile(void) {
	DEBUG_WORD("laxperInFile")
}

void laxperFile(void) {
	DEBUG_WORD("laxperFile")
}

void laxperHld(void) {
	DEBUG_WORD("laxperHld")
}

void laxperBase(void) {
	DEBUG_WORD("laxperBase")
}

void laxperOffset(void) {
	DEBUG_WORD("laxperOffset")
}

void laxperNumLine(void) {
	DEBUG_WORD("laxperOffset")
}

void laxperNumOut(void) {
	DEBUG_WORD("laxperNumOut")
}

void laxperDP(void) {
	DEBUG_WORD("laxperDP")
}

void laxperRP0(void) {
	DEBUG_WORD("laxperRP0")
}

void laxperSP0(void) {
	DEBUG_WORD("laxperSP0")
}

void laxperLink(void) {
	DEBUG_WORD("laxperLink")
}

void laxperEntry(void) {
	DEBUG_WORD("laxperEntry")
}

void laxperTos(void) {
	DEBUG_WORD("laxperTos")
}

void laxperStarSlash(void) {
	DEBUG_WORD("laxperStarSlash")
}

void laxperStarSlashMod(void) {
	DEBUG_WORD("laxperStarSlashMod")
}

void laxperMod(void) {
	DEBUG_WORD("laxperMod")
}

void laxperSlash(void) {
	DEBUG_WORD("laxperSlash")
}

void laxperSlashMod(void) {
	DEBUG_WORD("laxperSlashMod")
}

void laxperStar(void) {
	DEBUG_WORD("laxperStar")
}

void laxperMuSlashMod(void) {
	DEBUG_WORD("laxperMuSlashMod")
}

void laxperMSlashMod(void) {
	DEBUG_WORD("laxperMSlashMod")
}

void laxperStarD(void) {
	DEBUG_WORD("laxperStarD")
}

void laxperDMax(void) {
	DEBUG_WORD("laxperDMax")
}

void laxperDMin(void) {
	DEBUG_WORD("laxperDMin")
}

void laxperDGreater(void) {
	DEBUG_WORD("laxperDGreater")
}

void laxperDLess(void) {
	DEBUG_WORD("laxperDLess")
}

void laxperDULess(void) {
	DEBUG_WORD("laxperDULess")
}

void laxperDEqual(void) {
	DEBUG_WORD("laxperDEqual")
}

void laxperD0Equal(void) {
	DEBUG_WORD("laxperD0Equal")
}

void laxperQDNegate(void) {
	DEBUG_WORD("laxperQDNegate")
}

void laxperDMinus(void) {
	DEBUG_WORD("laxperDMinus")
}

void laxperD2Slash(void) {
	DEBUG_WORD("laxperD2Slash")
}

void laxperD2Star(void) {
	DEBUG_WORD("laxperD2Star")
}

void laxperDAbs(void) {
	DEBUG_WORD("laxperDAbs")
}

void laxperSToD(void) {
	DEBUG_WORD("laxperSToD")
}

void laxperDNegate(void) {
	DEBUG_WORD("laxperDNegate")
}

void laxperDPLus(void) {
	DEBUG_WORD("laxperDPLus")
}

void laxperTwoRot(void) {
	DEBUG_WORD("laxperTwoRot")
}

void laxperFourDup(void) {
	DEBUG_WORD("laxperFourDup")
}

void laxperThreeDup(void) {
	DEBUG_WORD("laxperThreeDup")
}

void laxperTwoOver(void) {
	DEBUG_WORD("laxperTwoOver")
}

void laxperTwoSwap(void) {
	DEBUG_WORD("laxperTwoSwap")
}

void laxperTwoDup(void) {
	DEBUG_WORD("laxperTwoDup")
}

void laxperTwoDrop(void) {
	DEBUG_WORD("laxperTwoDrop")
}

void laxperTwoStore(void) {
	DEBUG_WORD("laxperTwoStore")
}

void laxperTwoFetch(void) {
	DEBUG_WORD("laxperTwoFetch")
}

void laxperWithin(void) {
	DEBUG_WORD("laxperWithin")
}

void laxperBetween(void) {
	DEBUG_WORD("laxperBetween")
}

void laxperMax(void) {
	DEBUG_WORD("laxperMax")
}

void laxperMin(void) {
	DEBUG_WORD("laxperMin")
}

void laxperGreater(void) {
	DEBUG_WORD("laxperGreater")
}

void laxperLess(void) {
	DEBUG_WORD("laxperLess")
}

void laxperUGreater(void) {
	DEBUG_WORD("laxperUGreater")
}

void laxperULess(void) {
	DEBUG_WORD("laxperULess")
}

void laxperQNegate(void) {
	DEBUG_WORD("laxperQNegate")
}

void laxperUnequal(void) {
	DEBUG_WORD("laxperUnequal")
}

void laxperEqual(void) {
	DEBUG_WORD("laxperEqual")
}

void laxperZeroUnequal(void) {
	DEBUG_WORD("laxperZeroUnequal")
}

void laxperZeroGreater(void) {
	DEBUG_WORD("laxperZeroGreater")
}

void laxperZeroLess(void) {
	DEBUG_WORD("laxperZeroLess")
}

void laxperZeroEqual(void) {
	DEBUG_WORD("laxperZeroEqual")
}

void laxperUmSlashMod(void) {
	DEBUG_WORD("laxperUmSlashMod")
}

void laxperUStarD(void) {
	DEBUG_WORD("laxperUStarD")
}

void laxperUmStar(void) {
	DEBUG_WORD("laxperUmStar")
}

void laxperTwoMinus(void) {
	DEBUG_WORD("laxperTwoMinus")
}

void laxperOneMinus(void) {
	DEBUG_WORD("laxperOneMinus")
}

void laxperTwoPlus(void) {
	DEBUG_WORD("laxperTwoPlus")
}

void laxperOnePlus(void) {
	DEBUG_WORD("laxperOnePlus")
}

void laxperEightStar(void) {
	DEBUG_WORD("laxperEightStar")
}

void laxperU2Slash(void) {
	DEBUG_WORD("laxperU2Slash")
}

void laxperTwoSlash(void) {
	DEBUG_WORD("laxperTwoSlash")
}

void laxperTwoStar(void) {
	DEBUG_WORD("laxperTwoStar")
}

void laxperThree(void) {
	DEBUG_WORD("laxperThree")
}

void laxperTwo(void) {
	DEBUG_WORD("laxperTwo")
}

void laxperOne(void) {
	DEBUG_WORD("laxperOne")
}

void laxperZero(void) {
	DEBUG_WORD("laxperZero")
}

void laxperPlusStore(void) {
	DEBUG_WORD("laxperPlusStore")
}

void laxperAbs(void) {
	DEBUG_WORD("laxperAbs")
}

void laxperMinus(void) {
	DEBUG_WORD("laxperMinus")
}

void laxperNegate(void) {
	DEBUG_WORD("laxperNegate")
}

void laxperPlus(void) {
	DEBUG_WORD("laxperPlus")
}

void laxperOff(void) {
	DEBUG_WORD("laxperOff")
}

void laxperOn(void) {
	DEBUG_WORD("laxperOn")
}

void laxperCToggle(void) {
	DEBUG_WORD("laxperCToggle")
}

void laxperCReset(void) {
	DEBUG_WORD("laxperCReset")
}

void laxperCSet(void) {
	DEBUG_WORD("laxperCSet")
}

void laxperFalse(void) {
	DEBUG_WORD("laxperFalse")
}

void laxperTrue(void) {
	DEBUG_WORD("laxperTrue")
}

void laxperNot(void) {
	DEBUG_WORD("laxperNot")
}

void laxperYor(void) {
	DEBUG_WORD("laxperYor")
}

void laxperOr(void) {
	DEBUG_WORD("laxperOr")
}

void laxperAnd(void) {
	DEBUG_WORD("laxperAnd")
}

void laxperRoll(void) {
	DEBUG_WORD("laxperRoll")
}

void laxperPick(void) {
	DEBUG_WORD("laxperPick")
}

void laxperRFetch(void) {
	DEBUG_WORD("laxperRFetch")
}

void laxperToR(void) {
	DEBUG_WORD("laxperToR")
}

void laxperRFrom(void) {
	DEBUG_WORD("laxperRFrom")
}

void laxperQDup(void) {
	DEBUG_WORD("laxperQDup")
}

void laxperFlip(void) {
	DEBUG_WORD("laxperFlip")
}

void laxperMinusRot(void) {
	DEBUG_WORD("laxperMinusRot")
}

void laxperRot(void) {
	DEBUG_WORD("laxperRot")
}

void laxperNip(void) {
	DEBUG_WORD("laxperNip")
}

void laxperTuck(void) {
	DEBUG_WORD("laxperTuck")
}

void laxperOver(void) {
	DEBUG_WORD("laxperOver")
}

void laxperSwap(void) {
	DEBUG_WORD("laxperSwap")
}

void laxperDup(void) {
	DEBUG_WORD("laxperDup")
}

void laxperDrop(void) {
	DEBUG_WORD("laxperDrop")
}

void laxperRPStore(void) {
	DEBUG_WORD("laxperRPStore")
}

void laxperRPFetch(void) {
	DEBUG_WORD("laxperRPFetch")
}

void laxperSPStore(void) {
	DEBUG_WORD("laxperSPStore")
}

void laxperSPFetch(void) {
	DEBUG_WORD("laxperSPFetch")
}

void laxperCMoveFrom(void) {
	DEBUG_WORD("laxperCMoveFrom")
}

void laxperCMove(void) {
	DEBUG_WORD("laxperCMove")
}

void laxperCStore(void) {
	DEBUG_WORD("laxperCStore")
}

void laxperCFetch(void) {
	DEBUG_WORD("laxperCFetch")
}

void laxperStore(void) {
	DEBUG_WORD("laxperStore")
}

void laxperFetch(void) {
	DEBUG_WORD("laxperFetch")
}

void laxperYQLeave(void) {
	DEBUG_WORD("laxperYQLeave")
}

void laxperYLeave(void) {
	DEBUG_WORD("laxperYLeave")
}

void laxperJ(void) {
	DEBUG_WORD("laxperJ")
}

void laxperI(void) {
	DEBUG_WORD("laxperI")
}

void laxperPause(void) {
	DEBUG_WORD("laxperPause")
}

void laxperNoop(void) {
	DEBUG_WORD("laxperNoop")
}

void laxperGo(void) {
	DEBUG_WORD("laxperGo")
}

void laxperPerform(void) {
	DEBUG_WORD("laxperPerform")
}

void laxperExecute(void) {
	DEBUG_WORD("laxperExecute")
}

void laxperToNext(void) {
	DEBUG_WORD("laxperToNext")
}

void laxperBounds(void) {
	DEBUG_WORD("laxperBounds")
}

void laxperYQDo(void) {
	DEBUG_WORD("laxperYQDo")
}

void laxperYDo(void) {
	DEBUG_WORD("laxperYDo")
}

void laxperYPlusLoop(void) {
	DEBUG_WORD("laxperYPlusLoop")
}

void laxperYLoop(void) {
	DEBUG_WORD("laxperYLoop")
}

void laxperQBranch(void) {
	DEBUG_WORD("laxperQBranch")
}

void laxperBranch(void) {
	DEBUG_WORD("laxperBranch")
}

void laxperYLit(void) {
	DEBUG_WORD("laxperYLit")
}

void laxperUp(void) {
	DEBUG_WORD("laxperUp")
}

void laxperUnnest(void) {
	DEBUG_WORD("laxperUnnest")
}

void laxperExit(void) {
	DEBUG_WORD("laxperExit")
}

void laxperForth(void) {
	DEBUG_WORD("laxperForth")
}

#endif

#if (H2O_FORTH_PRIMITIVES == LAXONPERRY_FORTH) || \
    (H2O_FORTH_PRIMITIVES == LAXONPERRY_PC_FORTH)
void laxperPStore(void) {
	DEBUG_WORD("laxperPStore")
}

void laxperPFetch(void) {
	DEBUG_WORD("laxperPFetch")
}

void laxperIntNum(void) {
	DEBUG_WORD("laxperIntNum")
}

void laxperCpu8086DotBlk(void) {
	DEBUG_WORD("laxperCpu8086DotBlk")
}

void laxperExtend86DotBlk(void) {
	DEBUG_WORD("laxperExtend86DotBlk")
}

void laxperKernel86DotBlk(void) {
	DEBUG_WORD("laxperKernel86DotBlk")
}
#endif

#if (H2O_FORTH_PRIMITIVES == LAXONPERRY_FORTH) || \
    (H2O_FORTH_PRIMITIVES == LAXONPERRY_CPM_FORTH)
void laxperCpu8080DotBlk(void) {
	DEBUG_WORD("laxperCpu8080DotBlk")
}

void laxperExtend80DotBlk(void) {
	DEBUG_WORD("laxperExtend80DotBlk")
}

void laxperKernel80DotBlk(void) {
	DEBUG_WORD("laxperKernel80DotBlk")
}

void laxperBios(void) {
	DEBUG_WORD("laxperBios")
}

void laxperRP(void) {
	DEBUG_WORD("laxperRP")
}
#endif

#if (H2O_FORTH_PRIMITIVES == LAXONPERRY_FORTH) || \
	(H2O_FORTH_PRIMITIVES == LAXONPERRY_CPM68K_FORTH)
void laxperCpu68000DotBlk(void) {
	DEBUG_WORD("laxperCpu68000DotBlk")
}

void laxperExtend68DotBlk(void) {
	DEBUG_WORD("laxperExtend68DotBlk")
}

void laxperKernel68DotBlk(void) {
	DEBUG_WORD("laxperKernel68DotBlk")
}

/* unchecked: */
void laxperBios(void) {
	DEBUG_WORD("laxperBios")
}

void laxperRP(void) {
	DEBUG_WORD("laxperRP")
}

#endif

#endif
