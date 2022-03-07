#ifndef H2OLAPE2
#define H2OLAPE2

/* The "Laxon & Perry 2.0" ( FORTH-83 ) FORTH */

/* Primitives */

#if (H2O_FORTH_PRIMITIVES == LAXONPERRY_FORTH) || \
    (H2O_FORTH_PRIMITIVES == LAXONPERRY_PC_FORTH) || \
    (H2O_FORTH_PRIMITIVES == LAXONPERRY_CPM_FORTH) || \
	(H2O_FORTH_PRIMITIVES == LAXONPERRY_CPM68K_FORTH)
void laxperEmpty(void) {
	PSMSG_DEBUG("laxperEmpty")
}

void laxperMark(void) {
	PSMSG_DEBUG("laxperMark")
}

void laxperHello(void) {
	PSMSG_DEBUG("laxperHello")
}

void laxperBackgroundColon(void) {
	PSMSG_DEBUG("laxperBackgroundColon")
}

void laxperActivate(void) {
	PSMSG_DEBUG("laxperActivate")
}

void laxperSetTask(void) {
	PSMSG_DEBUG("laxperSetTask")
}

void laxperTaskColon(void) {
	PSMSG_DEBUG("laxperTaskColon")
}

void laxperResume(void) {
	PSMSG_DEBUG("laxperResume")
}

void laxperDebug(void) {
	PSMSG_DEBUG("laxperDebug")
}

void laxperListing(void) {
	PSMSG_DEBUG("laxperListing")
}

void laxperShow(void) {
	PSMSG_DEBUG("laxperShow")
}

void laxperYSemit(void) {
	PSMSG_DEBUG("laxperYSemit")
}

void laxperYPage(void) {
	PSMSG_DEBUG("laxperYPage")
}

void laxperFormFeed(void) {
	PSMSG_DEBUG("laxperFormFeed")
}

void laxperPage(void) {
	PSMSG_DEBUG("laxperPage")
}

void laxperNumPage(void) {
	PSMSG_DEBUG("laxperNumPage")
}

void laxperLogo(void) {
	PSMSG_DEBUG("laxperLogo")
}

void laxperLSlashPage(void) {
	PSMSG_DEBUG("laxperLSlashPage")
}

void laxperFooting(void) {
	PSMSG_DEBUG("laxperFooting")
}

void laxperInitPr(void) {
	PSMSG_DEBUG("laxperInitPr")
}

void laxperEpson(void) {
	PSMSG_DEBUG("laxperEpson")
}

void laxperSee(void) {
	PSMSG_DEBUG("laxperSee")
}

void laxperYSee(void) {
	PSMSG_DEBUG("laxperYSee")
}

void laxperAssociativeColon(void) {
	PSMSG_DEBUG("laxperAssociativeColon")
}

void laxperCaseColon(void) {
	PSMSG_DEBUG("laxperCaseColon")
}

void laxperMap(void) {
	PSMSG_DEBUG("laxperMap")
}

void laxperOut(void) {
	PSMSG_DEBUG("laxperOut")
}

void laxperDL(void) {
	PSMSG_DEBUG("laxperDL")
}

void laxperDU(void) {
	PSMSG_DEBUG("laxperDU")
}

void laxperDump(void) {
	PSMSG_DEBUG("laxperDump")
}

void laxperDotHead(void) {
	PSMSG_DEBUG("laxperDotHead")
}

void laxperQDotA(void) {
	PSMSG_DEBUG("laxperQDotA")
}

void laxperQDotN(void) {
	PSMSG_DEBUG("laxperQDotN")
}

void laxperDln(void) {
	PSMSG_DEBUG("laxperDln")
}

void laxperEmitDot(void) {
	PSMSG_DEBUG("laxperEmitDot")
}

void laxperDDotTwo(void) {
	PSMSG_DEBUG("laxperDDotTwo")
}

void laxperDotTwo(void) {
	PSMSG_DEBUG("laxperDotTwo")
}

void laxperA(void) {
	PSMSG_DEBUG("laxperA")
}

void laxperShadow(void) {
	PSMSG_DEBUG("laxperShadow")
}

void laxperYWhere(void) {
	PSMSG_DEBUG("laxperYWhere")
}

void laxperFix(void) {
	PSMSG_DEBUG("laxperFix")
}

void laxperEdit(void) {
	PSMSG_DEBUG("laxperEdit")
}

void laxperEd(void) {
	PSMSG_DEBUG("laxperEd")
}

void laxperDone(void) {
	PSMSG_DEBUG("laxperDone")
}

void laxperEditor(void) {
	PSMSG_DEBUG("laxperEditor")
}

void laxperDark(void) {
	PSMSG_DEBUG("laxperDark")
}

void laxperAt(void) {
	PSMSG_DEBUG("laxperAt")
}

void laxperMinusLine(void) {
	PSMSG_DEBUG("laxperMinusLine")
}

void laxperBlot(void) {
	PSMSG_DEBUG("laxperBlot")
}

void laxperReplace(void) {
	PSMSG_DEBUG("laxperReplace")
}

void laxperInsert(void) {
	PSMSG_DEBUG("laxperInsert")
}

void laxperDelete(void) {
	PSMSG_DEBUG("laxperDelete")
}

void laxperSearch(void) {
	PSMSG_DEBUG("laxperSearch")
}

void laxperScanFirst(void) {
	PSMSG_DEBUG("laxperScanFirst")
}

void laxperFound(void) {
	PSMSG_DEBUG("laxperFound")
}

void laxperTo(void) {
	PSMSG_DEBUG("laxperTo")
}

void laxperCorvey(void) {
	PSMSG_DEBUG("laxperCorvey")
}

void laxperYConvey(void) {
	PSMSG_DEBUG("laxperYConvey")
}

void laxperDotTo(void) {
	PSMSG_DEBUG("laxperDotTo")
}

void laxperHop(void) {
	PSMSG_DEBUG("laxperHop")
}

void laxperConveyCopy(void) {
	PSMSG_DEBUG("laxperConveyCopy")
}

void laxperUSlashD(void) {
	PSMSG_DEBUG("laxperUSlashD")
}

void laxperHopped(void) {
	PSMSG_DEBUG("laxperHopped")
}

void laxperView(void) {
	PSMSG_DEBUG("laxperView")
}

void laxperFetchView(void) {
	PSMSG_DEBUG("laxperFetchView")
}

void laxperCopy(void) {
	PSMSG_DEBUG("laxperCopy")
}

void laxperYCopy(void) {
	PSMSG_DEBUG("laxperYCopy")
}

void laxperEstablish(void) {
	PSMSG_DEBUG("laxperEstablish")
}

void laxperL(void) {
	PSMSG_DEBUG("laxperL")
}

void laxperB(void) {
	PSMSG_DEBUG("laxperB")
}

void laxperN(void) {
	PSMSG_DEBUG("laxperN")
}

void laxperColonColon(void) {
	PSMSG_DEBUG("laxperColonColon")
}

void laxperMany(void) {
	PSMSG_DEBUG("laxperMany")
}

void laxperTimes(void) {
	PSMSG_DEBUG("laxperTimes")
}

void laxperNumTimes(void) {
	PSMSG_DEBUG("laxperNumTimes")
}

void laxperWords(void) {
	PSMSG_DEBUG("laxperWords")
}

void laxperLargest(void) {
	PSMSG_DEBUG("laxperLargest")
}

void laxperInd(void) {
	PSMSG_DEBUG("laxperInd")
}

void laxperIndex(void) {
	PSMSG_DEBUG("laxperIndex")
}

void laxperDotLineZero(void) {
	PSMSG_DEBUG("laxperDotLineZero")
}

void laxperTriad(void) {
	PSMSG_DEBUG("laxperTriad")
}

void laxperList(void) {
	PSMSG_DEBUG("laxperList")
}

void laxperDotScr(void) {
	PSMSG_DEBUG("laxperDotScr")
}

void laxperQCr(void) {
	PSMSG_DEBUG("laxperQCr")
}

void laxperQLine(void) {
	PSMSG_DEBUG("laxperQLine")
}

void laxperRMargin(void) {
	PSMSG_DEBUG("laxperRMargin")
}

void laxperLMargin(void) {
	PSMSG_DEBUG("laxperLMargin")
}

void laxperHidden(void) {
	PSMSG_DEBUG("laxperHidden")
}

void laxperZeroLessEqual(void) {
	PSMSG_DEBUG("laxperZeroLessEqual")
}

void laxperZeroGreaterEqual(void) {
	PSMSG_DEBUG("laxperZeroGreaterEqual")
}

void laxperGreaterEqual(void) {
	PSMSG_DEBUG("laxperGreaterEqual")
}

void laxperLessEqual(void) {
	PSMSG_DEBUG("laxperLessEqual")
}

void laxperUGreaterEqual(void) {
	PSMSG_DEBUG("laxperUGreaterEqual")
}

void laxperULessEqual(void) {
	PSMSG_DEBUG("laxperULessEqual")
}

void laxperMs(void) {
	PSMSG_DEBUG("laxperMs")
}

void laxperFudge(void) {
	PSMSG_DEBUG("laxperFudge")
}

void laxperPCStore(void) {
	PSMSG_DEBUG("laxperPCStore")
}

void laxperPCFetch(void) {
	PSMSG_DEBUG("laxperPCFetch")
}

void laxperMulti(void) {
	PSMSG_DEBUG("laxperMulti")
}

void laxperSingle(void) {
	PSMSG_DEBUG("laxperSingle")
}

void laxperStop(void) {
	PSMSG_DEBUG("laxperStop")
}

void laxperWake(void) {
	PSMSG_DEBUG("laxperWake")
}

void laxperSleep(void) {
	PSMSG_DEBUG("laxperSleep")
}

void laxperStoreLink(void) {
	PSMSG_DEBUG("laxperStoreLink")
}

void laxperFetchLink(void) {
	PSMSG_DEBUG("laxperFetchLink")
}

void laxperLocal(void) {
	PSMSG_DEBUG("laxperLocal")
}

void laxperRestart(void) {
	PSMSG_DEBUG("laxperRestart")
}

void laxperYPause(void) {
	PSMSG_DEBUG("laxperYPause")
}

void laxperUnbug(void) {
	PSMSG_DEBUG("laxperUnbug")
}

void laxperBug(void) {
	PSMSG_DEBUG("laxperBug")
}

void laxperDoesQ(void) {
	PSMSG_DEBUG("laxperDoesQ")
}

void laxperDoesSize(void) {
	PSMSG_DEBUG("laxperDoesSize")
}

void laxperDoesOp(void) {
	PSMSG_DEBUG("laxperDoesOp")
}

void laxperLabel(void) {
	PSMSG_DEBUG("laxperLabel")
}

void laxperUtilityDotBlk(void) {
	PSMSG_DEBUG("laxperUtilityDotBlk")
}

void laxperViews(void) {
	PSMSG_DEBUG("laxperViews")
}

void laxperViewFiles(void) {
	PSMSG_DEBUG("laxperViewFiles")
}

void laxperSaveSystem(void) {
	PSMSG_DEBUG("laxperSaveSystem")
}

void laxperForm(void) {
	PSMSG_DEBUG("laxperForm")
}

void laxperOpen(void) {
	PSMSG_DEBUG("laxperOpen")
}

void laxperDefine(void) {
	PSMSG_DEBUG("laxperDefine")
}

void laxperBColon(void) {
	PSMSG_DEBUG("laxperBColon")
}

void laxperAColon(void) {
	PSMSG_DEBUG("laxperAColon")
}

void laxperDriveQ(void) {
	PSMSG_DEBUG("laxperDriveQ")
}

void laxperDir(void) {
	PSMSG_DEBUG("laxperDir")
}

void laxperCreateFile(void) {
	PSMSG_DEBUG("laxperCreateFile")
}

void laxperMore(void) {
	PSMSG_DEBUG("laxperMore")
}

void laxperRoot(void) {
	PSMSG_DEBUG("laxperRoot")
}

void laxperNextBlock(void) {
	PSMSG_DEBUG("laxperNextBlock")
}

void laxperPlusThru(void) {
	PSMSG_DEBUG("laxperPlusThru")
}

void laxperThru(void) {
	PSMSG_DEBUG("laxperThru")
}

void laxperQEnough(void) {
	PSMSG_DEBUG("laxperQEnough")
}

void laxperQ(void) {
	PSMSG_DEBUG("laxperQ")
}

void laxperParenS(void) {
	PSMSG_DEBUG("laxperParenS")
}

void laxperBackslash(void) {
	PSMSG_DEBUG("laxperBackslash")
}

void laxperLSlashScr(void) {
	PSMSG_DEBUG("laxperLSlashScr")
}

void laxperCSlashL(void) {
	PSMSG_DEBUG("laxperCSlashL")
}

void laxperRecurse(void) {
	PSMSG_DEBUG("laxperRecurse")
}

void laxperDotId(void) {
	PSMSG_DEBUG("laxperDotId")
}

void laxperDotS(void) {
	PSMSG_DEBUG("laxperDotS")
}

void laxperDepth(void) {
	PSMSG_DEBUG("laxperDepth")
}

void laxperBye(void) {
	PSMSG_DEBUG("laxperBye")
}

void laxperStart(void) {
	PSMSG_DEBUG("laxperStart")
}

void laxperOk(void) {
	PSMSG_DEBUG("laxperOk")
}

void laxperInitial(void) {
	PSMSG_DEBUG("laxperInitial")
}

void laxperCold(void) {
	PSMSG_DEBUG("laxperCold")
}

void laxperWarm(void) {
	PSMSG_DEBUG("laxperWarm")
}

void laxperBoot(void) {
	PSMSG_DEBUG("laxperBoot")
}

void laxperQuit(void) {
	PSMSG_DEBUG("laxperQuit")
}

void laxperRun(void) {
	PSMSG_DEBUG("laxperRun")
}

void laxperIs(void) {
	PSMSG_DEBUG("laxperIs")
}

void laxperYIs(void) {
	PSMSG_DEBUG("laxperYIs")
}

void laxperToIs(void) {
	PSMSG_DEBUG("laxperToIs")
}

void laxperUser(void) {
	PSMSG_DEBUG("laxperUser")
}

void laxperNumUser(void) {
	PSMSG_DEBUG("laxperNumUser")
}

void laxperCode(void) {
	PSMSG_DEBUG("laxperCode")
}

void laxperAvoc(void) {
	PSMSG_DEBUG("laxperAvoc")
}

void laxperTwoVariable(void) {
	PSMSG_DEBUG("laxperTwoVariable")
}

void laxperTwoConstant(void) {
	PSMSG_DEBUG("laxperTwoConstant")
}

void laxperDefinitions(void) {
	PSMSG_DEBUG("laxperDefinitions")
}

void laxperVocabulary(void) {
	PSMSG_DEBUG("laxperVocabulary")
}

void laxperDefer(void) {
	PSMSG_DEBUG("laxperDefer")
}

void laxperVariable(void) {
	PSMSG_DEBUG("laxperVariable")
}

void laxperConstant(void) {
	PSMSG_DEBUG("laxperConstant")
}

void laxperRecursive(void) {
	PSMSG_DEBUG("laxperRecursive")
}

void laxperSemicolon(void) {
	PSMSG_DEBUG("laxperSemicolon")
}

void laxperColon(void) {
	PSMSG_DEBUG("laxperColon")
}

void laxperRightBracket(void) {
	PSMSG_DEBUG("laxperRightBracket")
}

void laxperLeftBracket(void) {
	PSMSG_DEBUG("laxperLeftBracket")
}

void laxperDoes(void) {
	PSMSG_DEBUG("laxperDoes")
}

void laxperSemicolonCode(void) {
	PSMSG_DEBUG("laxperSemicolonCode")
}

void laxperYSemicolonCode(void) {
	PSMSG_DEBUG("laxperYSemicolonCode")
}

void laxperSemicolonUses(void) {
	PSMSG_DEBUG("laxperSemicolonUses")
}

void laxperAssembler(void) {
	PSMSG_DEBUG("laxperAssembler")
}

void laxperYSemicolonUses(void) {
	PSMSG_DEBUG("laxperYSemicolonUses")
}

void laxperReveal(void) {
	PSMSG_DEBUG("laxperReveal")
}

void laxperHide(void) {
	PSMSG_DEBUG("laxperHide")
}

void laxperQCsp(void) {
	PSMSG_DEBUG("laxperQCsp")
}

void laxperStoreCsp(void) {
	PSMSG_DEBUG("laxperStoreCsp")
}

void laxperCreate(void) {
	PSMSG_DEBUG("laxperCreate")
}

void laxperBackslashCreate(void) {
	PSMSG_DEBUG("laxperBackslashCreate")
}

void laxperCommaView(void) {
	PSMSG_DEBUG("laxperCommaView")
}

void laxperWhile(void) {
	PSMSG_DEBUG("laxperWhile")
}

void laxperElse(void) {
	PSMSG_DEBUG("laxperElse")
}

void laxperIf(void) {
	PSMSG_DEBUG("laxperIf")
}

void laxperRepeat(void) {
	PSMSG_DEBUG("laxperRepeat")
}

void laxperAgain(void) {
	PSMSG_DEBUG("laxperAgain")
}

void laxperUntil(void) {
	PSMSG_DEBUG("laxperUntil")
}

void laxperPlusLoop(void) {
	PSMSG_DEBUG("laxperPlusLoop")
}

void laxperLoop(void) {
	PSMSG_DEBUG("laxperLoop")
}

void laxperQDo(void) {
	PSMSG_DEBUG("laxperQDo")
}

void laxperDo(void) {
	PSMSG_DEBUG("laxperDo")
}

void laxperThen(void) {
	PSMSG_DEBUG("laxperThen")
}

void laxperBegin(void) {
	PSMSG_DEBUG("laxperBegin")
}

void laxperQLeave(void) {
	PSMSG_DEBUG("laxperQLeave")
}

void laxperLeave(void) {
	PSMSG_DEBUG("laxperLeave")
}

void laxperQLessResolve(void) {
	PSMSG_DEBUG("laxperQLessResolve")
}

void laxperQLessMark(void) {
	PSMSG_DEBUG("laxperQLessMark")
}

void laxperQGreaterResolve(void) {
	PSMSG_DEBUG("laxperQGreaterResolve")
}

void laxperQGreaterMark(void) {
	PSMSG_DEBUG("laxperQGreaterMark")
}

void laxperLessResolve(void) {
	PSMSG_DEBUG("laxperLessResolve")
}

void laxperLessMark(void) {
	PSMSG_DEBUG("laxperLessMark")
}

void laxperToResolve(void) {
	PSMSG_DEBUG("laxperToResolve")
}

void laxperToMark(void) {
	PSMSG_DEBUG("laxperToMark")
}

void laxperQCondition(void) {
	PSMSG_DEBUG("laxperQCondition")
}

void laxperAbort(void) {
	PSMSG_DEBUG("laxperAbort")
}

void laxperAbortQuote(void) {
	PSMSG_DEBUG("laxperAbortQuote")
}

void laxperYAbortQuote(void) {
	PSMSG_DEBUG("laxperYAbortQuote")
}

void laxperYQError(void) {
	PSMSG_DEBUG("laxperYQError")
}

void laxperQError(void) {
	PSMSG_DEBUG("laxperQError")
}

void laxperWhere(void) {
	PSMSG_DEBUG("laxperWhere")
}

void laxperForget(void) {
	PSMSG_DEBUG("laxperForget")
}

void laxperYForget(void) {
	PSMSG_DEBUG("laxperYForget")
}

void laxperTrim(void) {
	PSMSG_DEBUG("laxperTrim")
}

void laxperFence(void) {
	PSMSG_DEBUG("laxperFence")
}

void laxperQuote(void) {
	PSMSG_DEBUG("laxperQuoten")
}

void laxperDotQuote(void) {
	PSMSG_DEBUG("laxperDotQuote")
}

void laxperCommaQuote(void) {
	PSMSG_DEBUG("laxperCommaQuote")
}

void laxperYDotQuote(void) {
	PSMSG_DEBUG("laxperYDotQuote")
}

void laxperYQuote(void) {
	PSMSG_DEBUG("laxperYQuote")
}

void laxperXCompile(void) {
	PSMSG_DEBUG("laxperXCompile")
}

void laxperXTick(void) {
	PSMSG_DEBUG("laxperXTick")
}

void laxperTick(void) {
	PSMSG_DEBUG("laxperTick")
}

void laxperQMissing(void) {
	PSMSG_DEBUG("laxperQMissing")
}

void laxperCrash(void) {
	PSMSG_DEBUG("laxperCrash")
}

void laxperControl(void) {
	PSMSG_DEBUG("laxperControl")
}

void laxperAscii(void) {
	PSMSG_DEBUG("laxperAscii")
}

void laxperDLiteral(void) {
	PSMSG_DEBUG("laxperDLiteral")
}

void laxperLiteral(void) {
	PSMSG_DEBUG("laxperLiteral")
}

void laxperImmediate(void) {
	PSMSG_DEBUG("laxperImmediate")
}

void laxperCompile(void) {
	PSMSG_DEBUG("laxperCompile")
}

void laxperEven(void) {
	PSMSG_DEBUG("laxperEven")
}

void laxperAlign(void) {
	PSMSG_DEBUG("laxperAlign")
}

void laxperCComma(void) {
	PSMSG_DEBUG("laxperCComma")
}

void laxperComma(void) {
	PSMSG_DEBUG("laxperComma")
}

void laxperAllot(void) {
	PSMSG_DEBUG("laxperAllot")
}

void laxperInterpret(void) {
	PSMSG_DEBUG("laxperInterpret")
}

void laxperStatus(void) {
	PSMSG_DEBUG("laxperStatus")
}

void laxperQStatus(void) {
	PSMSG_DEBUG("laxperQStatus")
}

void laxperDefined(void) {
	PSMSG_DEBUG("laxperDefined")
}

void laxperQUppercase(void) {
	PSMSG_DEBUG("laxperQUppercase")
}

void laxperFind(void) {
	PSMSG_DEBUG("laxperFind")
}

void laxperNumThreads(void) {
	PSMSG_DEBUG("laxperNumThreads")
}

void laxperYFind(void) {
	PSMSG_DEBUG("laxperYFind")
}

void laxperHash(void) {
	PSMSG_DEBUG("laxperHash")
}

void laxperViewFrom(void) {
	PSMSG_DEBUG("laxperViewFrom")
}

void laxperToView(void) {
	PSMSG_DEBUG("laxperToView")
}

void laxperToLink(void) {
	PSMSG_DEBUG("laxperToLink")
}

void laxperToName(void) {
	PSMSG_DEBUG("laxperToName")
}

void laxperToBody(void) {
	PSMSG_DEBUG("laxperToBody")
}

void laxperLinkFrom(void) {
	PSMSG_DEBUG("laxperLinkFrom")
}

void laxperNameFrom(void) {
	PSMSG_DEBUG("laxperNameFrom")
}

void laxperBodyFrom(void) {
	PSMSG_DEBUG("laxperBodyFrom")
}

void laxperLGreaterName(void) {
	PSMSG_DEBUG("laxperLGreaterName")
}

void laxperNToLink(void) {
	PSMSG_DEBUG("laxperNToLink")
}

void laxperForth83(void) {
	PSMSG_DEBUG("laxperForth83")
}

void laxperDoneQ(void) {
	PSMSG_DEBUG("laxperDoneQ")
}

void laxperTraverse(void) {
	PSMSG_DEBUG("laxperTraverse")
}

void laxperBackslashS(void) {
	PSMSG_DEBUG("laxperBackslashS")
}

void laxperParen(void) {
	PSMSG_DEBUG("laxperParen")
}

void laxperDotParen(void) {
	PSMSG_DEBUG("laxperDotParen")
}

void laxperToType(void) {
	PSMSG_DEBUG("laxperToType")
}

void laxperWord(void) {
	PSMSG_DEBUG("laxperWord")
}

void laxperTickWord(void) {
	PSMSG_DEBUG("laxperTickWord")
}

void laxperParse(void) {
	PSMSG_DEBUG("laxperParse")
}

void laxperParseWord(void) {
	PSMSG_DEBUG("laxperParseWord")
}

void laxperSource(void) {
	PSMSG_DEBUG("laxperSource")
}

void laxperYSource(void) {
	PSMSG_DEBUG("laxperYSource")
}

void laxperPlace(void) {
	PSMSG_DEBUG("laxperPlace")
}

void laxperSlashString(void) {
	PSMSG_DEBUG("laxperSlashString")
}

void laxperScan(void) {
	PSMSG_DEBUG("laxperScan")
}

void laxperSkip(void) {
	PSMSG_DEBUG("laxperSkip")
}

void laxperDDotR(void) {
	PSMSG_DEBUG("laxperDDotR")
}

void laxperDDot(void) {
	PSMSG_DEBUG("laxperDDot")
}

void laxperYDDot(void) {
	PSMSG_DEBUG("laxperYDDot")
}

void laxperUdDotR(void) {
	PSMSG_DEBUG("laxperUdDotR")
}

void laxperUdDot(void) {
	PSMSG_DEBUG("laxperUdDot")
}

void laxperYUdDot(void) {
	PSMSG_DEBUG("laxperYUdDo")
}

void laxperDotR(void) {
	PSMSG_DEBUG("laxperDotR")
}

void laxperDot(void) {
	PSMSG_DEBUG("laxperDot")
}

void laxperYDot(void) {
	PSMSG_DEBUG("laxperYDot")
}

void laxperUDotR(void) {
	PSMSG_DEBUG("laxperUDotR")
}

void laxperUDot(void) {
	PSMSG_DEBUG("laxperUDot")
}

void laxperYUDot(void) {
	PSMSG_DEBUG("laxperYUDot")
}

void laxperOctal(void) {
	PSMSG_DEBUG("laxperOctal")
}

void laxperDecimal(void) {
	PSMSG_DEBUG("laxperDecimal")
}

void laxperHex(void) {
	PSMSG_DEBUG("laxperHex")
}

void laxperNumS(void) {
	PSMSG_DEBUG("laxperNumS")
}

void laxperNum(void) {
	PSMSG_DEBUG("laxperNum")
}

void laxperSign(void) {
	PSMSG_DEBUG("laxperSign")
}

void laxperNumGreater(void) {
	PSMSG_DEBUG("laxperNumGreater")
}

void laxperLessNum(void) {
	PSMSG_DEBUG("laxperLessNum")
}

void laxperHold(void) {
	PSMSG_DEBUG("laxperHold")
}

void laxperNumber(void) {
	PSMSG_DEBUG("laxperNumber")
}

void laxperYNumber(void) {
	PSMSG_DEBUG("laxperYNumber")
}

void laxperNumberQ(void) {
	PSMSG_DEBUG("laxperNumberQ")
}

void laxperYNumberQ(void) {
	PSMSG_DEBUG("laxperYNumberQ")
}

void laxperConvert(void) {
	PSMSG_DEBUG("laxperConvert")
}

void laxperDoubleQ(void) {
	PSMSG_DEBUG("laxperDoubleQ")
}

void laxperDigit(void) {
	PSMSG_DEBUG("laxperDigit")
}

void laxperLoad(void) {
	PSMSG_DEBUG("laxperLoad")
}

void laxperYLoad(void) {
	PSMSG_DEBUG("laxperYLoad")
}

void laxperDefault(void) {
	PSMSG_DEBUG("laxperDefault")
}

void laxperViewNum(void) {
	PSMSG_DEBUG("laxperViewNum")
}

void laxperFlush(void) {
	PSMSG_DEBUG("laxperFlush")
}

void laxperSaveBuffers(void) {
	PSMSG_DEBUG("laxperSaveBuffers")
}

void laxperEmptyBuffers(void) {
	PSMSG_DEBUG("laxperEmptyBuffers")
}

void laxperInBlock(void) {
	PSMSG_DEBUG("laxperInBlock")
}

void laxperBlock(void) {
	PSMSG_DEBUG("laxperBlock")
}

void laxperYBlock(void) {
	PSMSG_DEBUG("laxperYBlock")
}

void laxperBuffer(void) {
	PSMSG_DEBUG("laxperBuffer")
}

void laxperYBuffer(void) {
	PSMSG_DEBUG("laxperYBuffer")
}

void laxperMissing(void) {
	PSMSG_DEBUG("laxperMissing")
}

void laxperDiscord(void) {
	PSMSG_DEBUG("laxperDiscord")
}

void laxperUpdate(void) {
	PSMSG_DEBUG("laxperUpdate")
}

void laxperAbsentQ(void) {
	PSMSG_DEBUG("laxperAbsentQ")
}

void laxperLatestQ(void) {
	PSMSG_DEBUG("laxperLatestQ")
}

void laxperCapacity(void) {
	PSMSG_DEBUG("laxperCapacity")
}

void laxperDos(void) {
	PSMSG_DEBUG("laxperDos")
}

void laxperSwitch(void) {
	PSMSG_DEBUG("laxperSwitch")
}

void laxperFileQ(void) {
	PSMSG_DEBUG("laxperFileQ")
}

void laxperDotFile(void) {
	PSMSG_DEBUG("laxperDotFile")
}

void laxperWriteBlock(void) {
	PSMSG_DEBUG("laxperWriteBlock")
}

void laxperReadBlock(void) {
	PSMSG_DEBUG("laxperReadBlock")
}

void laxperToUpdate(void) {
	PSMSG_DEBUG("laxperToUpdate")
}

void laxperBuffersNum(void) {
	PSMSG_DEBUG("laxperBuffersNum")
}

void laxperToEnd(void) {
	PSMSG_DEBUG("laxperToEnd")
}

void laxperToBuffers(void) {
	PSMSG_DEBUG("laxperToBuffers")
}

void laxperInitR0(void) {
	PSMSG_DEBUG("laxperInitR0")
}

void laxperFirst(void) {
	PSMSG_DEBUG("laxperFirst")
}

void laxperToSize(void) {
	PSMSG_DEBUG("laxperToSize")
}

void laxperLimit(void) {
	PSMSG_DEBUG("laxperLimit")
}

void laxperDiskError(void) {
	PSMSG_DEBUG("laxperDiskError")
}

void laxperBSlashFcb(void) {
	PSMSG_DEBUG("laxperBSlashFcb")
}

void laxperRecSlashBlk(void) {
	PSMSG_DEBUG("laxperRecSlashBlk")
}

void laxperBSlashRec(void) {
	PSMSG_DEBUG("laxperBSlashRec")
}

void laxperBSlashBuf(void) {
	PSMSG_DEBUG("laxperBSlashBuf")
}

void laxperNumBuffers(void) {
	PSMSG_DEBUG("laxperNumBuffers")
}

void laxperQuery(void) {
	PSMSG_DEBUG("laxperQuery")
}

void laxperTib(void) {
	PSMSG_DEBUG("laxperTib")
}

void laxperExpect(void) {
	PSMSG_DEBUG("laxperExpect")
}

void laxperCcForth(void) {
	PSMSG_DEBUG("laxperCcForth")
}

void laxperCc(void) {
	PSMSG_DEBUG("laxperCc")
}

void laxperDelIn(void) {
	PSMSG_DEBUG("laxperDelIn")
}

void laxperChar(void) {
	PSMSG_DEBUG("laxperChar")
}

void laxperYChar(void) {
	PSMSG_DEBUG("laxperYChar")
}

void laxperCrIn(void) {
	PSMSG_DEBUG("laxperCrIn")
}

void laxperPIn(void) {
	PSMSG_DEBUG("laxperPIn")
}

void laxperResIn(void) {
	PSMSG_DEBUG("laxperResIn")
}

void laxperBackUp(void) {
	PSMSG_DEBUG("laxperBackUp")
}

void laxperYDelIn(void) {
	PSMSG_DEBUG("laxperYDelIn")
}

void laxperBsIn(void) {
	PSMSG_DEBUG("laxperBsIn")
}

void laxperBeep(void) {
	PSMSG_DEBUG("laxperBeep")
}

void laxperBackspaces(void) {
	PSMSG_DEBUG("laxperBackspaces")
}

void laxperSpaces(void) {
	PSMSG_DEBUG("laxperSpaces")
}

void laxperSpace(void) {
	PSMSG_DEBUG("laxperSpace")
}

void laxperType(void) {
	PSMSG_DEBUG("laxperType")
}

void laxperCrLf(void) {
	PSMSG_DEBUG("laxperCrLf")
}

void laxperYEmit(void) {
	PSMSG_DEBUG("laxperYEmit")
}

void laxperYPrint(void) {
	PSMSG_DEBUG("laxperYPrint")
}

void laxperPrStat(void) {
	PSMSG_DEBUG("laxperPrStat")
}

void laxperCr(void) {
	PSMSG_DEBUG("laxperCr")
}

void laxperKey(void) {
	PSMSG_DEBUG("laxperKey")
}

void laxperKeyQ(void) {
	PSMSG_DEBUG("laxperKeyQ")
}

void laxperYConsole(void) {
	PSMSG_DEBUG("laxperYConsole")
}

void laxperYKey(void) {
	PSMSG_DEBUG("laxperYKey")
}

void laxperYKeyQ(void) {
	PSMSG_DEBUG("laxperYKeyQ")
}

void laxperBdos(void) {
	PSMSG_DEBUG("laxperBdos")
}

void laxperCompare(void) {
	PSMSG_DEBUG("laxperCompare")
}

void laxperCapsComp(void) {
	PSMSG_DEBUG("laxperCapsComp")
}

void laxperComp(void) {
	PSMSG_DEBUG("laxperComp")
}

void laxperMinusTrailing(void) {
	PSMSG_DEBUG("laxperMinusTrailing")
}

void laxperPad(void) {
	PSMSG_DEBUG("laxperPad")
}

void laxperHere(void) {
	PSMSG_DEBUG("laxperHere")
}

void laxperUpper(void) {
	PSMSG_DEBUG("laxperUpper")
}

void laxperUpc(void) {
	PSMSG_DEBUG("laxperUpc")
}

void laxperMove(void) {
	PSMSG_DEBUG("laxperMove")
}

void laxperLength(void) {
	PSMSG_DEBUG("laxperLength")
}

void laxperCount(void) {
	PSMSG_DEBUG("laxperCount")
}

void laxperBlank(void) {
	PSMSG_DEBUG("laxperBlank")
}

void laxperErase(void) {
	PSMSG_DEBUG("laxperErase")
}

void laxperFill(void) {
	PSMSG_DEBUG("laxperFill")
}

void laxperCaps(void) {
	PSMSG_DEBUG("laxperCaps")
}

void laxperBell(void) {
	PSMSG_DEBUG("laxperBell")
}

void laxperBs(void) {
	PSMSG_DEBUG("laxperBs")
}

void laxperBl(void) {
	PSMSG_DEBUG("laxperBl")
}

void laxperEndQ(void) {
	PSMSG_DEBUG("laxperEndQ")
}

void laxperNumTib(void) {
	PSMSG_DEBUG("laxperNumTib")
}

void laxperSpan(void) {
	PSMSG_DEBUG("laxperSpan")
}

void laxperToIn(void) {
	PSMSG_DEBUG("laxperToIn")
}

void laxperBlk(void) {
	PSMSG_DEBUG("laxperBlk")
}

void laxperVocLink(void) {
	PSMSG_DEBUG("laxperVocLink")
}

void laxperWidth(void) {
	PSMSG_DEBUG("laxperWidth")
}

void laxperTickTib(void) {
	PSMSG_DEBUG("laxperTickTib")
}

void laxperContext(void) {
	PSMSG_DEBUG("laxperContext")
}

void laxperNumVocs(void) {
	PSMSG_DEBUG("laxperNumVocs")
}

void laxperCurrent(void) {
	PSMSG_DEBUG("laxperCurrent")
}

void laxperCsp(void) {
	PSMSG_DEBUG("laxperCsp")
}

void laxperLast(void) {
	PSMSG_DEBUG("laxperLast")
}

void laxperRNum(void) {
	PSMSG_DEBUG("laxperRNum")
}

void laxperDpl(void) {
	PSMSG_DEBUG("laxperDpl")
}

void laxperWarning(void) {
	PSMSG_DEBUG("laxperWarning")
}

void laxperState(void) {
	PSMSG_DEBUG("laxperState")
}

void laxperPrior(void) {
	PSMSG_DEBUG("laxperPrior")
}

void laxperScr(void) {
	PSMSG_DEBUG("laxperScr")
}

void laxperEmit(void) {
	PSMSG_DEBUG("laxperEmit")
}

void laxperPrinting(void) {
	PSMSG_DEBUG("laxperPrinting")
}

void laxperInFile(void) {
	PSMSG_DEBUG("laxperInFile")
}

void laxperFile(void) {
	PSMSG_DEBUG("laxperFile")
}

void laxperHld(void) {
	PSMSG_DEBUG("laxperHld")
}

void laxperBase(void) {
	PSMSG_DEBUG("laxperBase")
}

void laxperOffset(void) {
	PSMSG_DEBUG("laxperOffset")
}

void laxperNumLine(void) {
	PSMSG_DEBUG("laxperOffset")
}

void laxperNumOut(void) {
	PSMSG_DEBUG("laxperNumOut")
}

void laxperDP(void) {
	PSMSG_DEBUG("laxperDP")
}

void laxperRP0(void) {
	PSMSG_DEBUG("laxperRP0")
}

void laxperSP0(void) {
	PSMSG_DEBUG("laxperSP0")
}

void laxperLink(void) {
	PSMSG_DEBUG("laxperLink")
}

void laxperEntry(void) {
	PSMSG_DEBUG("laxperEntry")
}

void laxperTos(void) {
	PSMSG_DEBUG("laxperTos")
}

void laxperStarSlash(void) {
	PSMSG_DEBUG("laxperStarSlash")
}

void laxperStarSlashMod(void) {
	PSMSG_DEBUG("laxperStarSlashMod")
}

void laxperMod(void) {
	PSMSG_DEBUG("laxperMod")
}

void laxperSlash(void) {
	PSMSG_DEBUG("laxperSlash")
}

void laxperSlashMod(void) {
	PSMSG_DEBUG("laxperSlashMod")
}

void laxperStar(void) {
	PSMSG_DEBUG("laxperStar")
}

void laxperMuSlashMod(void) {
	PSMSG_DEBUG("laxperMuSlashMod")
}

void laxperMSlashMod(void) {
	PSMSG_DEBUG("laxperMSlashMod")
}

void laxperStarD(void) {
	PSMSG_DEBUG("laxperStarD")
}

void laxperDMax(void) {
	PSMSG_DEBUG("laxperDMax")
}

void laxperDMin(void) {
	PSMSG_DEBUG("laxperDMin")
}

void laxperDGreater(void) {
	PSMSG_DEBUG("laxperDGreater")
}

void laxperDLess(void) {
	PSMSG_DEBUG("laxperDLess")
}

void laxperDULess(void) {
	PSMSG_DEBUG("laxperDULess")
}

void laxperDEqual(void) {
	PSMSG_DEBUG("laxperDEqual")
}

void laxperD0Equal(void) {
	PSMSG_DEBUG("laxperD0Equal")
}

void laxperQDNegate(void) {
	PSMSG_DEBUG("laxperQDNegate")
}

void laxperDMinus(void) {
	PSMSG_DEBUG("laxperDMinus")
}

void laxperD2Slash(void) {
	PSMSG_DEBUG("laxperD2Slash")
}

void laxperD2Star(void) {
	PSMSG_DEBUG("laxperD2Star")
}

void laxperDAbs(void) {
	PSMSG_DEBUG("laxperDAbs")
}

void laxperSToD(void) {
	PSMSG_DEBUG("laxperSToD")
}

void laxperDNegate(void) {
	PSMSG_DEBUG("laxperDNegate")
}

void laxperDPLus(void) {
	PSMSG_DEBUG("laxperDPLus")
}

void laxperTwoRot(void) {
	PSMSG_DEBUG("laxperTwoRot")
}

void laxperFourDup(void) {
	PSMSG_DEBUG("laxperFourDup")
}

void laxperThreeDup(void) {
	PSMSG_DEBUG("laxperThreeDup")
}

void laxperTwoOver(void) {
	PSMSG_DEBUG("laxperTwoOver")
}

void laxperTwoSwap(void) {
	PSMSG_DEBUG("laxperTwoSwap")
}

void laxperTwoDup(void) {
	PSMSG_DEBUG("laxperTwoDup")
}

void laxperTwoDrop(void) {
	PSMSG_DEBUG("laxperTwoDrop")
}

void laxperTwoStore(void) {
	PSMSG_DEBUG("laxperTwoStore")
}

void laxperTwoFetch(void) {
	PSMSG_DEBUG("laxperTwoFetch")
}

void laxperWithin(void) {
	PSMSG_DEBUG("laxperWithin")
}

void laxperBetween(void) {
	PSMSG_DEBUG("laxperBetween")
}

void laxperMax(void) {
	PSMSG_DEBUG("laxperMax")
}

void laxperMin(void) {
	PSMSG_DEBUG("laxperMin")
}

void laxperGreater(void) {
	PSMSG_DEBUG("laxperGreater")
}

void laxperLess(void) {
	PSMSG_DEBUG("laxperLess")
}

void laxperUGreater(void) {
	PSMSG_DEBUG("laxperUGreater")
}

void laxperULess(void) {
	PSMSG_DEBUG("laxperULess")
}

void laxperQNegate(void) {
	PSMSG_DEBUG("laxperQNegate")
}

void laxperUnequal(void) {
	PSMSG_DEBUG("laxperUnequal")
}

void laxperEqual(void) {
	PSMSG_DEBUG("laxperEqual")
}

void laxperZeroUnequal(void) {
	PSMSG_DEBUG("laxperZeroUnequal")
}

void laxperZeroGreater(void) {
	PSMSG_DEBUG("laxperZeroGreater")
}

void laxperZeroLess(void) {
	PSMSG_DEBUG("laxperZeroLess")
}

void laxperZeroEqual(void) {
	PSMSG_DEBUG("laxperZeroEqual")
}

void laxperUmSlashMod(void) {
	PSMSG_DEBUG("laxperUmSlashMod")
}

void laxperUStarD(void) {
	PSMSG_DEBUG("laxperUStarD")
}

void laxperUmStar(void) {
	PSMSG_DEBUG("laxperUmStar")
}

void laxperTwoMinus(void) {
	PSMSG_DEBUG("laxperTwoMinus")
}

void laxperOneMinus(void) {
	PSMSG_DEBUG("laxperOneMinus")
}

void laxperTwoPlus(void) {
	PSMSG_DEBUG("laxperTwoPlus")
}

void laxperOnePlus(void) {
	PSMSG_DEBUG("laxperOnePlus")
}

void laxperEightStar(void) {
	PSMSG_DEBUG("laxperEightStar")
}

void laxperU2Slash(void) {
	PSMSG_DEBUG("laxperU2Slash")
}

void laxperTwoSlash(void) {
	PSMSG_DEBUG("laxperTwoSlash")
}

void laxperTwoStar(void) {
	PSMSG_DEBUG("laxperTwoStar")
}

void laxperThree(void) {
	PSMSG_DEBUG("laxperThree")
}

void laxperTwo(void) {
	PSMSG_DEBUG("laxperTwo")
}

void laxperOne(void) {
	PSMSG_DEBUG("laxperOne")
}

void laxperZero(void) {
	PSMSG_DEBUG("laxperZero")
}

void laxperPlusStore(void) {
	PSMSG_DEBUG("laxperPlusStore")
}

void laxperAbs(void) {
	PSMSG_DEBUG("laxperAbs")
}

void laxperMinus(void) {
	PSMSG_DEBUG("laxperMinus")
}

void laxperNegate(void) {
	PSMSG_DEBUG("laxperNegate")
}

void laxperPlus(void) {
	PSMSG_DEBUG("laxperPlus")
}

void laxperOff(void) {
	PSMSG_DEBUG("laxperOff")
}

void laxperOn(void) {
	PSMSG_DEBUG("laxperOn")
}

void laxperCToggle(void) {
	PSMSG_DEBUG("laxperCToggle")
}

void laxperCReset(void) {
	PSMSG_DEBUG("laxperCReset")
}

void laxperCSet(void) {
	PSMSG_DEBUG("laxperCSet")
}

void laxperFalse(void) {
	PSMSG_DEBUG("laxperFalse")
}

void laxperTrue(void) {
	PSMSG_DEBUG("laxperTrue")
}

void laxperNot(void) {
	PSMSG_DEBUG("laxperNot")
}

void laxperYor(void) {
	PSMSG_DEBUG("laxperYor")
}

void laxperOr(void) {
	PSMSG_DEBUG("laxperOr")
}

void laxperAnd(void) {
	PSMSG_DEBUG("laxperAnd")
}

void laxperRoll(void) {
	PSMSG_DEBUG("laxperRoll")
}

void laxperPick(void) {
	PSMSG_DEBUG("laxperPick")
}

void laxperRFetch(void) {
	PSMSG_DEBUG("laxperRFetch")
}

void laxperToR(void) {
	PSMSG_DEBUG("laxperToR")
}

void laxperRFrom(void) {
	PSMSG_DEBUG("laxperRFrom")
}

void laxperQDup(void) {
	PSMSG_DEBUG("laxperQDup")
}

void laxperFlip(void) {
	PSMSG_DEBUG("laxperFlip")
}

void laxperMinusRot(void) {
	PSMSG_DEBUG("laxperMinusRot")
}

void laxperRot(void) {
	PSMSG_DEBUG("laxperRot")
}

void laxperNip(void) {
	PSMSG_DEBUG("laxperNip")
}

void laxperTuck(void) {
	PSMSG_DEBUG("laxperTuck")
}

void laxperOver(void) {
	PSMSG_DEBUG("laxperOver")
}

void laxperSwap(void) {
	PSMSG_DEBUG("laxperSwap")
}

void laxperDup(void) {
	PSMSG_DEBUG("laxperDup")
}

void laxperDrop(void) {
	PSMSG_DEBUG("laxperDrop")
}

void laxperRPStore(void) {
	PSMSG_DEBUG("laxperRPStore")
}

void laxperRPFetch(void) {
	PSMSG_DEBUG("laxperRPFetch")
}

void laxperSPStore(void) {
	PSMSG_DEBUG("laxperSPStore")
}

void laxperSPFetch(void) {
	PSMSG_DEBUG("laxperSPFetch")
}

void laxperCMoveFrom(void) {
	PSMSG_DEBUG("laxperCMoveFrom")
}

void laxperCMove(void) {
	PSMSG_DEBUG("laxperCMove")
}

void laxperCStore(void) {
	PSMSG_DEBUG("laxperCStore")
}

void laxperCFetch(void) {
	PSMSG_DEBUG("laxperCFetch")
}

void laxperStore(void) {
	PSMSG_DEBUG("laxperStore")
}

void laxperFetch(void) {
	PSMSG_DEBUG("laxperFetch")
}

void laxperYQLeave(void) {
	PSMSG_DEBUG("laxperYQLeave")
}

void laxperYLeave(void) {
	PSMSG_DEBUG("laxperYLeave")
}

void laxperJ(void) {
	PSMSG_DEBUG("laxperJ")
}

void laxperI(void) {
	PSMSG_DEBUG("laxperI")
}

void laxperPause(void) {
	PSMSG_DEBUG("laxperPause")
}

void laxperNoop(void) {
	PSMSG_DEBUG("laxperNoop")
}

void laxperGo(void) {
	PSMSG_DEBUG("laxperGo")
}

void laxperPerform(void) {
	PSMSG_DEBUG("laxperPerform")
}

void laxperExecute(void) {
	PSMSG_DEBUG("laxperExecute")
}

void laxperToNext(void) {
	PSMSG_DEBUG("laxperToNext")
}

void laxperBounds(void) {
	PSMSG_DEBUG("laxperBounds")
}

void laxperYQDo(void) {
	PSMSG_DEBUG("laxperYQDo")
}

void laxperYDo(void) {
	PSMSG_DEBUG("laxperYDo")
}

void laxperYPlusLoop(void) {
	PSMSG_DEBUG("laxperYPlusLoop")
}

void laxperYLoop(void) {
	PSMSG_DEBUG("laxperYLoop")
}

void laxperQBranch(void) {
	PSMSG_DEBUG("laxperQBranch")
}

void laxperBranch(void) {
	PSMSG_DEBUG("laxperBranch")
}

void laxperYLit(void) {
	PSMSG_DEBUG("laxperYLit")
}

void laxperUp(void) {
	PSMSG_DEBUG("laxperUp")
}

void laxperUnnest(void) {
	PSMSG_DEBUG("laxperUnnest")
}

void laxperExit(void) {
	PSMSG_DEBUG("laxperExit")
}

void laxperForth(void) {
	PSMSG_DEBUG("laxperForth")
}

#endif

#if (H2O_FORTH_PRIMITIVES == LAXONPERRY_FORTH) || \
    (H2O_FORTH_PRIMITIVES == LAXONPERRY_PC_FORTH)
void laxperPStore(void) {
	PSMSG_DEBUG("laxperPStore")
}

void laxperPFetch(void) {
	PSMSG_DEBUG("laxperPFetch")
}

void laxperIntNum(void) {
	PSMSG_DEBUG("laxperIntNum")
}

void laxperCpu8086DotBlk(void) {
	PSMSG_DEBUG("laxperCpu8086DotBlk")
}

void laxperExtend86DotBlk(void) {
	PSMSG_DEBUG("laxperExtend86DotBlk")
}

void laxperKernel86DotBlk(void) {
	PSMSG_DEBUG("laxperKernel86DotBlk")
}
#endif

#if (H2O_FORTH_PRIMITIVES == LAXONPERRY_FORTH) || \
    (H2O_FORTH_PRIMITIVES == LAXONPERRY_CPM_FORTH)
void laxperCpu8080DotBlk(void) {
	PSMSG_DEBUG("laxperCpu8080DotBlk")
}

void laxperExtend80DotBlk(void) {
	PSMSG_DEBUG("laxperExtend80DotBlk")
}

void laxperKernel80DotBlk(void) {
	PSMSG_DEBUG("laxperKernel80DotBlk")
}

void laxperBios(void) {
	PSMSG_DEBUG("laxperBios")
}

void laxperRP(void) {
	PSMSG_DEBUG("laxperRP")
}
#endif

#if (H2O_FORTH_PRIMITIVES == LAXONPERRY_FORTH) || \
	(H2O_FORTH_PRIMITIVES == LAXONPERRY_CPM68K_FORTH)
void laxperCpu68000DotBlk(void) {
	PSMSG_DEBUG("laxperCpu68000DotBlk")
}

void laxperExtend68DotBlk(void) {
	PSMSG_DEBUG("laxperExtend68DotBlk")
}

void laxperKernel68DotBlk(void) {
	PSMSG_DEBUG("laxperKernel68DotBlk")
}

/* unchecked: */
void laxperBios(void) {
	PSMSG_DEBUG("laxperBios")
}

void laxperRP(void) {
	PSMSG_DEBUG("laxperRP")
}

#endif

#endif
