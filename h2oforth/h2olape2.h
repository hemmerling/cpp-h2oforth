#ifndef H2OLAPE2
#define H2OLAPE2

/* The "Laxon & Perry 2.0" ( FORTH-83 ) FORTH */

/* Primitives */

#if (H2O_FORTH_PRIMITIVES == LAXONPERRY_FORTH) || \
    (H2O_FORTH_PRIMITIVES == LAXONPERRY_PC_FORTH) || \
    (H2O_FORTH_PRIMITIVES == LAXONPERRY_CPM_FORTH) || \
	(H2O_FORTH_PRIMITIVES == LAXONPERRY_CPM68K_FORTH)
void laxperEmpty(void) {
	MESSSAGE_DEBUG("laxperEmpty")
}

void laxperMark(void) {
	MESSSAGE_DEBUG("laxperMark")
}

void laxperHello(void) {
	MESSSAGE_DEBUG("laxperHello")
}

void laxperBackgroundColon(void) {
	MESSSAGE_DEBUG("laxperBackgroundColon")
}

void laxperActivate(void) {
	MESSSAGE_DEBUG("laxperActivate")
}

void laxperSetTask(void) {
	MESSSAGE_DEBUG("laxperSetTask")
}

void laxperTaskColon(void) {
	MESSSAGE_DEBUG("laxperTaskColon")
}

void laxperResume(void) {
	MESSSAGE_DEBUG("laxperResume")
}

void laxperDebug(void) {
	MESSSAGE_DEBUG("laxperDebug")
}

void laxperListing(void) {
	MESSSAGE_DEBUG("laxperListing")
}

void laxperShow(void) {
	MESSSAGE_DEBUG("laxperShow")
}

void laxperYSemit(void) {
	MESSSAGE_DEBUG("laxperYSemit")
}

void laxperYPage(void) {
	MESSSAGE_DEBUG("laxperYPage")
}

void laxperFormFeed(void) {
	MESSSAGE_DEBUG("laxperFormFeed")
}

void laxperPage(void) {
	MESSSAGE_DEBUG("laxperPage")
}

void laxperNumPage(void) {
	MESSSAGE_DEBUG("laxperNumPage")
}

void laxperLogo(void) {
	MESSSAGE_DEBUG("laxperLogo")
}

void laxperLSlashPage(void) {
	MESSSAGE_DEBUG("laxperLSlashPage")
}

void laxperFooting(void) {
	MESSSAGE_DEBUG("laxperFooting")
}

void laxperInitPr(void) {
	MESSSAGE_DEBUG("laxperInitPr")
}

void laxperEpson(void) {
	MESSSAGE_DEBUG("laxperEpson")
}

void laxperSee(void) {
	MESSSAGE_DEBUG("laxperSee")
}

void laxperYSee(void) {
	MESSSAGE_DEBUG("laxperYSee")
}

void laxperAssociativeColon(void) {
	MESSSAGE_DEBUG("laxperAssociativeColon")
}

void laxperCaseColon(void) {
	MESSSAGE_DEBUG("laxperCaseColon")
}

void laxperMap(void) {
	MESSSAGE_DEBUG("laxperMap")
}

void laxperOut(void) {
	MESSSAGE_DEBUG("laxperOut")
}

void laxperDL(void) {
	MESSSAGE_DEBUG("laxperDL")
}

void laxperDU(void) {
	MESSSAGE_DEBUG("laxperDU")
}

void laxperDump(void) {
	MESSSAGE_DEBUG("laxperDump")
}

void laxperDotHead(void) {
	MESSSAGE_DEBUG("laxperDotHead")
}

void laxperQDotA(void) {
	MESSSAGE_DEBUG("laxperQDotA")
}

void laxperQDotN(void) {
	MESSSAGE_DEBUG("laxperQDotN")
}

void laxperDln(void) {
	MESSSAGE_DEBUG("laxperDln")
}

void laxperEmitDot(void) {
	MESSSAGE_DEBUG("laxperEmitDot")
}

void laxperDDotTwo(void) {
	MESSSAGE_DEBUG("laxperDDotTwo")
}

void laxperDotTwo(void) {
	MESSSAGE_DEBUG("laxperDotTwo")
}

void laxperA(void) {
	MESSSAGE_DEBUG("laxperA")
}

void laxperShadow(void) {
	MESSSAGE_DEBUG("laxperShadow")
}

void laxperYWhere(void) {
	MESSSAGE_DEBUG("laxperYWhere")
}

void laxperFix(void) {
	MESSSAGE_DEBUG("laxperFix")
}

void laxperEdit(void) {
	MESSSAGE_DEBUG("laxperEdit")
}

void laxperEd(void) {
	MESSSAGE_DEBUG("laxperEd")
}

void laxperDone(void) {
	MESSSAGE_DEBUG("laxperDone")
}

void laxperEditor(void) {
	MESSSAGE_DEBUG("laxperEditor")
}

void laxperDark(void) {
	MESSSAGE_DEBUG("laxperDark")
}

void laxperAt(void) {
	MESSSAGE_DEBUG("laxperAt")
}

void laxperMinusLine(void) {
	MESSSAGE_DEBUG("laxperMinusLine")
}

void laxperBlot(void) {
	MESSSAGE_DEBUG("laxperBlot")
}

void laxperReplace(void) {
	MESSSAGE_DEBUG("laxperReplace")
}

void laxperInsert(void) {
	MESSSAGE_DEBUG("laxperInsert")
}

void laxperDelete(void) {
	MESSSAGE_DEBUG("laxperDelete")
}

void laxperSearch(void) {
	MESSSAGE_DEBUG("laxperSearch")
}

void laxperScanFirst(void) {
	MESSSAGE_DEBUG("laxperScanFirst")
}

void laxperFound(void) {
	MESSSAGE_DEBUG("laxperFound")
}

void laxperTo(void) {
	MESSSAGE_DEBUG("laxperTo")
}

void laxperCorvey(void) {
	MESSSAGE_DEBUG("laxperCorvey")
}

void laxperYConvey(void) {
	MESSSAGE_DEBUG("laxperYConvey")
}

void laxperDotTo(void) {
	MESSSAGE_DEBUG("laxperDotTo")
}

void laxperHop(void) {
	MESSSAGE_DEBUG("laxperHop")
}

void laxperConveyCopy(void) {
	MESSSAGE_DEBUG("laxperConveyCopy")
}

void laxperUSlashD(void) {
	MESSSAGE_DEBUG("laxperUSlashD")
}

void laxperHopped(void) {
	MESSSAGE_DEBUG("laxperHopped")
}

void laxperView(void) {
	MESSSAGE_DEBUG("laxperView")
}

void laxperFetchView(void) {
	MESSSAGE_DEBUG("laxperFetchView")
}

void laxperCopy(void) {
	MESSSAGE_DEBUG("laxperCopy")
}

void laxperYCopy(void) {
	MESSSAGE_DEBUG("laxperYCopy")
}

void laxperEstablish(void) {
	MESSSAGE_DEBUG("laxperEstablish")
}

void laxperL(void) {
	MESSSAGE_DEBUG("laxperL")
}

void laxperB(void) {
	MESSSAGE_DEBUG("laxperB")
}

void laxperN(void) {
	MESSSAGE_DEBUG("laxperN")
}

void laxperColonColon(void) {
	MESSSAGE_DEBUG("laxperColonColon")
}

void laxperMany(void) {
	MESSSAGE_DEBUG("laxperMany")
}

void laxperTimes(void) {
	MESSSAGE_DEBUG("laxperTimes")
}

void laxperNumTimes(void) {
	MESSSAGE_DEBUG("laxperNumTimes")
}

void laxperWords(void) {
	MESSSAGE_DEBUG("laxperWords")
}

void laxperLargest(void) {
	MESSSAGE_DEBUG("laxperLargest")
}

void laxperInd(void) {
	MESSSAGE_DEBUG("laxperInd")
}

void laxperIndex(void) {
	MESSSAGE_DEBUG("laxperIndex")
}

void laxperDotLineZero(void) {
	MESSSAGE_DEBUG("laxperDotLineZero")
}

void laxperTriad(void) {
	MESSSAGE_DEBUG("laxperTriad")
}

void laxperList(void) {
	MESSSAGE_DEBUG("laxperList")
}

void laxperDotScr(void) {
	MESSSAGE_DEBUG("laxperDotScr")
}

void laxperQCr(void) {
	MESSSAGE_DEBUG("laxperQCr")
}

void laxperQLine(void) {
	MESSSAGE_DEBUG("laxperQLine")
}

void laxperRMargin(void) {
	MESSSAGE_DEBUG("laxperRMargin")
}

void laxperLMargin(void) {
	MESSSAGE_DEBUG("laxperLMargin")
}

void laxperHidden(void) {
	MESSSAGE_DEBUG("laxperHidden")
}

void laxperZeroLessEqual(void) {
	MESSSAGE_DEBUG("laxperZeroLessEqual")
}

void laxperZeroGreaterEqual(void) {
	MESSSAGE_DEBUG("laxperZeroGreaterEqual")
}

void laxperGreaterEqual(void) {
	MESSSAGE_DEBUG("laxperGreaterEqual")
}

void laxperLessEqual(void) {
	MESSSAGE_DEBUG("laxperLessEqual")
}

void laxperUGreaterEqual(void) {
	MESSSAGE_DEBUG("laxperUGreaterEqual")
}

void laxperULessEqual(void) {
	MESSSAGE_DEBUG("laxperULessEqual")
}

void laxperMs(void) {
	MESSSAGE_DEBUG("laxperMs")
}

void laxperFudge(void) {
	MESSSAGE_DEBUG("laxperFudge")
}

void laxperPCStore(void) {
	MESSSAGE_DEBUG("laxperPCStore")
}

void laxperPCFetch(void) {
	MESSSAGE_DEBUG("laxperPCFetch")
}

void laxperMulti(void) {
	MESSSAGE_DEBUG("laxperMulti")
}

void laxperSingle(void) {
	MESSSAGE_DEBUG("laxperSingle")
}

void laxperStop(void) {
	MESSSAGE_DEBUG("laxperStop")
}

void laxperWake(void) {
	MESSSAGE_DEBUG("laxperWake")
}

void laxperSleep(void) {
	MESSSAGE_DEBUG("laxperSleep")
}

void laxperStoreLink(void) {
	MESSSAGE_DEBUG("laxperStoreLink")
}

void laxperFetchLink(void) {
	MESSSAGE_DEBUG("laxperFetchLink")
}

void laxperLocal(void) {
	MESSSAGE_DEBUG("laxperLocal")
}

void laxperRestart(void) {
	MESSSAGE_DEBUG("laxperRestart")
}

void laxperYPause(void) {
	MESSSAGE_DEBUG("laxperYPause")
}

void laxperUnbug(void) {
	MESSSAGE_DEBUG("laxperUnbug")
}

void laxperBug(void) {
	MESSSAGE_DEBUG("laxperBug")
}

void laxperDoesQ(void) {
	MESSSAGE_DEBUG("laxperDoesQ")
}

void laxperDoesSize(void) {
	MESSSAGE_DEBUG("laxperDoesSize")
}

void laxperDoesOp(void) {
	MESSSAGE_DEBUG("laxperDoesOp")
}

void laxperLabel(void) {
	MESSSAGE_DEBUG("laxperLabel")
}

void laxperUtilityDotBlk(void) {
	MESSSAGE_DEBUG("laxperUtilityDotBlk")
}

void laxperViews(void) {
	MESSSAGE_DEBUG("laxperViews")
}

void laxperViewFiles(void) {
	MESSSAGE_DEBUG("laxperViewFiles")
}

void laxperSaveSystem(void) {
	MESSSAGE_DEBUG("laxperSaveSystem")
}

void laxperForm(void) {
	MESSSAGE_DEBUG("laxperForm")
}

void laxperOpen(void) {
	MESSSAGE_DEBUG("laxperOpen")
}

void laxperDefine(void) {
	MESSSAGE_DEBUG("laxperDefine")
}

void laxperBColon(void) {
	MESSSAGE_DEBUG("laxperBColon")
}

void laxperAColon(void) {
	MESSSAGE_DEBUG("laxperAColon")
}

void laxperDriveQ(void) {
	MESSSAGE_DEBUG("laxperDriveQ")
}

void laxperDir(void) {
	MESSSAGE_DEBUG("laxperDir")
}

void laxperCreateFile(void) {
	MESSSAGE_DEBUG("laxperCreateFile")
}

void laxperMore(void) {
	MESSSAGE_DEBUG("laxperMore")
}

void laxperRoot(void) {
	MESSSAGE_DEBUG("laxperRoot")
}

void laxperNextBlock(void) {
	MESSSAGE_DEBUG("laxperNextBlock")
}

void laxperPlusThru(void) {
	MESSSAGE_DEBUG("laxperPlusThru")
}

void laxperThru(void) {
	MESSSAGE_DEBUG("laxperThru")
}

void laxperQEnough(void) {
	MESSSAGE_DEBUG("laxperQEnough")
}

void laxperQ(void) {
	MESSSAGE_DEBUG("laxperQ")
}

void laxperParenS(void) {
	MESSSAGE_DEBUG("laxperParenS")
}

void laxperBackslash(void) {
	MESSSAGE_DEBUG("laxperBackslash")
}

void laxperLSlashScr(void) {
	MESSSAGE_DEBUG("laxperLSlashScr")
}

void laxperCSlashL(void) {
	MESSSAGE_DEBUG("laxperCSlashL")
}

void laxperRecurse(void) {
	MESSSAGE_DEBUG("laxperRecurse")
}

void laxperDotId(void) {
	MESSSAGE_DEBUG("laxperDotId")
}

void laxperDotS(void) {
	MESSSAGE_DEBUG("laxperDotS")
}

void laxperDepth(void) {
	MESSSAGE_DEBUG("laxperDepth")
}

void laxperBye(void) {
	MESSSAGE_DEBUG("laxperBye")
}

void laxperStart(void) {
	MESSSAGE_DEBUG("laxperStart")
}

void laxperOk(void) {
	MESSSAGE_DEBUG("laxperOk")
}

void laxperInitial(void) {
	MESSSAGE_DEBUG("laxperInitial")
}

void laxperCold(void) {
	MESSSAGE_DEBUG("laxperCold")
}

void laxperWarm(void) {
	MESSSAGE_DEBUG("laxperWarm")
}

void laxperBoot(void) {
	MESSSAGE_DEBUG("laxperBoot")
}

void laxperQuit(void) {
	MESSSAGE_DEBUG("laxperQuit")
}

void laxperRun(void) {
	MESSSAGE_DEBUG("laxperRun")
}

void laxperIs(void) {
	MESSSAGE_DEBUG("laxperIs")
}

void laxperYIs(void) {
	MESSSAGE_DEBUG("laxperYIs")
}

void laxperToIs(void) {
	MESSSAGE_DEBUG("laxperToIs")
}

void laxperUser(void) {
	MESSSAGE_DEBUG("laxperUser")
}

void laxperNumUser(void) {
	MESSSAGE_DEBUG("laxperNumUser")
}

void laxperCode(void) {
	MESSSAGE_DEBUG("laxperCode")
}

void laxperAvoc(void) {
	MESSSAGE_DEBUG("laxperAvoc")
}

void laxperTwoVariable(void) {
	MESSSAGE_DEBUG("laxperTwoVariable")
}

void laxperTwoConstant(void) {
	MESSSAGE_DEBUG("laxperTwoConstant")
}

void laxperDefinitions(void) {
	MESSSAGE_DEBUG("laxperDefinitions")
}

void laxperVocabulary(void) {
	MESSSAGE_DEBUG("laxperVocabulary")
}

void laxperDefer(void) {
	MESSSAGE_DEBUG("laxperDefer")
}

void laxperVariable(void) {
	MESSSAGE_DEBUG("laxperVariable")
}

void laxperConstant(void) {
	MESSSAGE_DEBUG("laxperConstant")
}

void laxperRecursive(void) {
	MESSSAGE_DEBUG("laxperRecursive")
}

void laxperSemicolon(void) {
	MESSSAGE_DEBUG("laxperSemicolon")
}

void laxperColon(void) {
	MESSSAGE_DEBUG("laxperColon")
}

void laxperRightBracket(void) {
	MESSSAGE_DEBUG("laxperRightBracket")
}

void laxperLeftBracket(void) {
	MESSSAGE_DEBUG("laxperLeftBracket")
}

void laxperDoes(void) {
	MESSSAGE_DEBUG("laxperDoes")
}

void laxperSemicolonCode(void) {
	MESSSAGE_DEBUG("laxperSemicolonCode")
}

void laxperYSemicolonCode(void) {
	MESSSAGE_DEBUG("laxperYSemicolonCode")
}

void laxperSemicolonUses(void) {
	MESSSAGE_DEBUG("laxperSemicolonUses")
}

void laxperAssembler(void) {
	MESSSAGE_DEBUG("laxperAssembler")
}

void laxperYSemicolonUses(void) {
	MESSSAGE_DEBUG("laxperYSemicolonUses")
}

void laxperReveal(void) {
	MESSSAGE_DEBUG("laxperReveal")
}

void laxperHide(void) {
	MESSSAGE_DEBUG("laxperHide")
}

void laxperQCsp(void) {
	MESSSAGE_DEBUG("laxperQCsp")
}

void laxperStoreCsp(void) {
	MESSSAGE_DEBUG("laxperStoreCsp")
}

void laxperCreate(void) {
	MESSSAGE_DEBUG("laxperCreate")
}

void laxperBackslashCreate(void) {
	MESSSAGE_DEBUG("laxperBackslashCreate")
}

void laxperCommaView(void) {
	MESSSAGE_DEBUG("laxperCommaView")
}

void laxperWhile(void) {
	MESSSAGE_DEBUG("laxperWhile")
}

void laxperElse(void) {
	MESSSAGE_DEBUG("laxperElse")
}

void laxperIf(void) {
	MESSSAGE_DEBUG("laxperIf")
}

void laxperRepeat(void) {
	MESSSAGE_DEBUG("laxperRepeat")
}

void laxperAgain(void) {
	MESSSAGE_DEBUG("laxperAgain")
}

void laxperUntil(void) {
	MESSSAGE_DEBUG("laxperUntil")
}

void laxperPlusLoop(void) {
	MESSSAGE_DEBUG("laxperPlusLoop")
}

void laxperLoop(void) {
	MESSSAGE_DEBUG("laxperLoop")
}

void laxperQDo(void) {
	MESSSAGE_DEBUG("laxperQDo")
}

void laxperDo(void) {
	MESSSAGE_DEBUG("laxperDo")
}

void laxperThen(void) {
	MESSSAGE_DEBUG("laxperThen")
}

void laxperBegin(void) {
	MESSSAGE_DEBUG("laxperBegin")
}

void laxperQLeave(void) {
	MESSSAGE_DEBUG("laxperQLeave")
}

void laxperLeave(void) {
	MESSSAGE_DEBUG("laxperLeave")
}

void laxperQLessResolve(void) {
	MESSSAGE_DEBUG("laxperQLessResolve")
}

void laxperQLessMark(void) {
	MESSSAGE_DEBUG("laxperQLessMark")
}

void laxperQGreaterResolve(void) {
	MESSSAGE_DEBUG("laxperQGreaterResolve")
}

void laxperQGreaterMark(void) {
	MESSSAGE_DEBUG("laxperQGreaterMark")
}

void laxperLessResolve(void) {
	MESSSAGE_DEBUG("laxperLessResolve")
}

void laxperLessMark(void) {
	MESSSAGE_DEBUG("laxperLessMark")
}

void laxperToResolve(void) {
	MESSSAGE_DEBUG("laxperToResolve")
}

void laxperToMark(void) {
	MESSSAGE_DEBUG("laxperToMark")
}

void laxperQCondition(void) {
	MESSSAGE_DEBUG("laxperQCondition")
}

void laxperAbort(void) {
	MESSSAGE_DEBUG("laxperAbort")
}

void laxperAbortQuote(void) {
	MESSSAGE_DEBUG("laxperAbortQuote")
}

void laxperYAbortQuote(void) {
	MESSSAGE_DEBUG("laxperYAbortQuote")
}

void laxperYQError(void) {
	MESSSAGE_DEBUG("laxperYQError")
}

void laxperQError(void) {
	MESSSAGE_DEBUG("laxperQError")
}

void laxperWhere(void) {
	MESSSAGE_DEBUG("laxperWhere")
}

void laxperForget(void) {
	MESSSAGE_DEBUG("laxperForget")
}

void laxperYForget(void) {
	MESSSAGE_DEBUG("laxperYForget")
}

void laxperTrim(void) {
	MESSSAGE_DEBUG("laxperTrim")
}

void laxperFence(void) {
	MESSSAGE_DEBUG("laxperFence")
}

void laxperQuote(void) {
	MESSSAGE_DEBUG("laxperQuoten")
}

void laxperDotQuote(void) {
	MESSSAGE_DEBUG("laxperDotQuote")
}

void laxperCommaQuote(void) {
	MESSSAGE_DEBUG("laxperCommaQuote")
}

void laxperYDotQuote(void) {
	MESSSAGE_DEBUG("laxperYDotQuote")
}

void laxperYQuote(void) {
	MESSSAGE_DEBUG("laxperYQuote")
}

void laxperXCompile(void) {
	MESSSAGE_DEBUG("laxperXCompile")
}

void laxperXTick(void) {
	MESSSAGE_DEBUG("laxperXTick")
}

void laxperTick(void) {
	MESSSAGE_DEBUG("laxperTick")
}

void laxperQMissing(void) {
	MESSSAGE_DEBUG("laxperQMissing")
}

void laxperCrash(void) {
	MESSSAGE_DEBUG("laxperCrash")
}

void laxperControl(void) {
	MESSSAGE_DEBUG("laxperControl")
}

void laxperAscii(void) {
	MESSSAGE_DEBUG("laxperAscii")
}

void laxperDLiteral(void) {
	MESSSAGE_DEBUG("laxperDLiteral")
}

void laxperLiteral(void) {
	MESSSAGE_DEBUG("laxperLiteral")
}

void laxperImmediate(void) {
	MESSSAGE_DEBUG("laxperImmediate")
}

void laxperCompile(void) {
	MESSSAGE_DEBUG("laxperCompile")
}

void laxperEven(void) {
	MESSSAGE_DEBUG("laxperEven")
}

void laxperAlign(void) {
	MESSSAGE_DEBUG("laxperAlign")
}

void laxperCComma(void) {
	MESSSAGE_DEBUG("laxperCComma")
}

void laxperComma(void) {
	MESSSAGE_DEBUG("laxperComma")
}

void laxperAllot(void) {
	MESSSAGE_DEBUG("laxperAllot")
}

void laxperInterpret(void) {
	MESSSAGE_DEBUG("laxperInterpret")
}

void laxperStatus(void) {
	MESSSAGE_DEBUG("laxperStatus")
}

void laxperQStatus(void) {
	MESSSAGE_DEBUG("laxperQStatus")
}

void laxperDefined(void) {
	MESSSAGE_DEBUG("laxperDefined")
}

void laxperQUppercase(void) {
	MESSSAGE_DEBUG("laxperQUppercase")
}

void laxperFind(void) {
	MESSSAGE_DEBUG("laxperFind")
}

void laxperNumThreads(void) {
	MESSSAGE_DEBUG("laxperNumThreads")
}

void laxperYFind(void) {
	MESSSAGE_DEBUG("laxperYFind")
}

void laxperHash(void) {
	MESSSAGE_DEBUG("laxperHash")
}

void laxperViewFrom(void) {
	MESSSAGE_DEBUG("laxperViewFrom")
}

void laxperToView(void) {
	MESSSAGE_DEBUG("laxperToView")
}

void laxperToLink(void) {
	MESSSAGE_DEBUG("laxperToLink")
}

void laxperToName(void) {
	MESSSAGE_DEBUG("laxperToName")
}

void laxperToBody(void) {
	MESSSAGE_DEBUG("laxperToBody")
}

void laxperLinkFrom(void) {
	MESSSAGE_DEBUG("laxperLinkFrom")
}

void laxperNameFrom(void) {
	MESSSAGE_DEBUG("laxperNameFrom")
}

void laxperBodyFrom(void) {
	MESSSAGE_DEBUG("laxperBodyFrom")
}

void laxperLGreaterName(void) {
	MESSSAGE_DEBUG("laxperLGreaterName")
}

void laxperNToLink(void) {
	MESSSAGE_DEBUG("laxperNToLink")
}

void laxperForth83(void) {
	MESSSAGE_DEBUG("laxperForth83")
}

void laxperDoneQ(void) {
	MESSSAGE_DEBUG("laxperDoneQ")
}

void laxperTraverse(void) {
	MESSSAGE_DEBUG("laxperTraverse")
}

void laxperBackslashS(void) {
	MESSSAGE_DEBUG("laxperBackslashS")
}

void laxperParen(void) {
	MESSSAGE_DEBUG("laxperParen")
}

void laxperDotParen(void) {
	MESSSAGE_DEBUG("laxperDotParen")
}

void laxperToType(void) {
	MESSSAGE_DEBUG("laxperToType")
}

void laxperWord(void) {
	MESSSAGE_DEBUG("laxperWord")
}

void laxperTickWord(void) {
	MESSSAGE_DEBUG("laxperTickWord")
}

void laxperParse(void) {
	MESSSAGE_DEBUG("laxperParse")
}

void laxperParseWord(void) {
	MESSSAGE_DEBUG("laxperParseWord")
}

void laxperSource(void) {
	MESSSAGE_DEBUG("laxperSource")
}

void laxperYSource(void) {
	MESSSAGE_DEBUG("laxperYSource")
}

void laxperPlace(void) {
	MESSSAGE_DEBUG("laxperPlace")
}

void laxperSlashString(void) {
	MESSSAGE_DEBUG("laxperSlashString")
}

void laxperScan(void) {
	MESSSAGE_DEBUG("laxperScan")
}

void laxperSkip(void) {
	MESSSAGE_DEBUG("laxperSkip")
}

void laxperDDotR(void) {
	MESSSAGE_DEBUG("laxperDDotR")
}

void laxperDDot(void) {
	MESSSAGE_DEBUG("laxperDDot")
}

void laxperYDDot(void) {
	MESSSAGE_DEBUG("laxperYDDot")
}

void laxperUdDotR(void) {
	MESSSAGE_DEBUG("laxperUdDotR")
}

void laxperUdDot(void) {
	MESSSAGE_DEBUG("laxperUdDot")
}

void laxperYUdDot(void) {
	MESSSAGE_DEBUG("laxperYUdDo")
}

void laxperDotR(void) {
	MESSSAGE_DEBUG("laxperDotR")
}

void laxperDot(void) {
	MESSSAGE_DEBUG("laxperDot")
}

void laxperYDot(void) {
	MESSSAGE_DEBUG("laxperYDot")
}

void laxperUDotR(void) {
	MESSSAGE_DEBUG("laxperUDotR")
}

void laxperUDot(void) {
	MESSSAGE_DEBUG("laxperUDot")
}

void laxperYUDot(void) {
	MESSSAGE_DEBUG("laxperYUDot")
}

void laxperOctal(void) {
	MESSSAGE_DEBUG("laxperOctal")
}

void laxperDecimal(void) {
	MESSSAGE_DEBUG("laxperDecimal")
}

void laxperHex(void) {
	MESSSAGE_DEBUG("laxperHex")
}

void laxperNumS(void) {
	MESSSAGE_DEBUG("laxperNumS")
}

void laxperNum(void) {
	MESSSAGE_DEBUG("laxperNum")
}

void laxperSign(void) {
	MESSSAGE_DEBUG("laxperSign")
}

void laxperNumGreater(void) {
	MESSSAGE_DEBUG("laxperNumGreater")
}

void laxperLessNum(void) {
	MESSSAGE_DEBUG("laxperLessNum")
}

void laxperHold(void) {
	MESSSAGE_DEBUG("laxperHold")
}

void laxperNumber(void) {
	MESSSAGE_DEBUG("laxperNumber")
}

void laxperYNumber(void) {
	MESSSAGE_DEBUG("laxperYNumber")
}

void laxperNumberQ(void) {
	MESSSAGE_DEBUG("laxperNumberQ")
}

void laxperYNumberQ(void) {
	MESSSAGE_DEBUG("laxperYNumberQ")
}

void laxperConvert(void) {
	MESSSAGE_DEBUG("laxperConvert")
}

void laxperDoubleQ(void) {
	MESSSAGE_DEBUG("laxperDoubleQ")
}

void laxperDigit(void) {
	MESSSAGE_DEBUG("laxperDigit")
}

void laxperLoad(void) {
	MESSSAGE_DEBUG("laxperLoad")
}

void laxperYLoad(void) {
	MESSSAGE_DEBUG("laxperYLoad")
}

void laxperDefault(void) {
	MESSSAGE_DEBUG("laxperDefault")
}

void laxperViewNum(void) {
	MESSSAGE_DEBUG("laxperViewNum")
}

void laxperFlush(void) {
	MESSSAGE_DEBUG("laxperFlush")
}

void laxperSaveBuffers(void) {
	MESSSAGE_DEBUG("laxperSaveBuffers")
}

void laxperEmptyBuffers(void) {
	MESSSAGE_DEBUG("laxperEmptyBuffers")
}

void laxperInBlock(void) {
	MESSSAGE_DEBUG("laxperInBlock")
}

void laxperBlock(void) {
	MESSSAGE_DEBUG("laxperBlock")
}

void laxperYBlock(void) {
	MESSSAGE_DEBUG("laxperYBlock")
}

void laxperBuffer(void) {
	MESSSAGE_DEBUG("laxperBuffer")
}

void laxperYBuffer(void) {
	MESSSAGE_DEBUG("laxperYBuffer")
}

void laxperMissing(void) {
	MESSSAGE_DEBUG("laxperMissing")
}

void laxperDiscord(void) {
	MESSSAGE_DEBUG("laxperDiscord")
}

void laxperUpdate(void) {
	MESSSAGE_DEBUG("laxperUpdate")
}

void laxperAbsentQ(void) {
	MESSSAGE_DEBUG("laxperAbsentQ")
}

void laxperLatestQ(void) {
	MESSSAGE_DEBUG("laxperLatestQ")
}

void laxperCapacity(void) {
	MESSSAGE_DEBUG("laxperCapacity")
}

void laxperDos(void) {
	MESSSAGE_DEBUG("laxperDos")
}

void laxperSwitch(void) {
	MESSSAGE_DEBUG("laxperSwitch")
}

void laxperFileQ(void) {
	MESSSAGE_DEBUG("laxperFileQ")
}

void laxperDotFile(void) {
	MESSSAGE_DEBUG("laxperDotFile")
}

void laxperWriteBlock(void) {
	MESSSAGE_DEBUG("laxperWriteBlock")
}

void laxperReadBlock(void) {
	MESSSAGE_DEBUG("laxperReadBlock")
}

void laxperToUpdate(void) {
	MESSSAGE_DEBUG("laxperToUpdate")
}

void laxperBuffersNum(void) {
	MESSSAGE_DEBUG("laxperBuffersNum")
}

void laxperToEnd(void) {
	MESSSAGE_DEBUG("laxperToEnd")
}

void laxperToBuffers(void) {
	MESSSAGE_DEBUG("laxperToBuffers")
}

void laxperInitR0(void) {
	MESSSAGE_DEBUG("laxperInitR0")
}

void laxperFirst(void) {
	MESSSAGE_DEBUG("laxperFirst")
}

void laxperToSize(void) {
	MESSSAGE_DEBUG("laxperToSize")
}

void laxperLimit(void) {
	MESSSAGE_DEBUG("laxperLimit")
}

void laxperDiskError(void) {
	MESSSAGE_DEBUG("laxperDiskError")
}

void laxperBSlashFcb(void) {
	MESSSAGE_DEBUG("laxperBSlashFcb")
}

void laxperRecSlashBlk(void) {
	MESSSAGE_DEBUG("laxperRecSlashBlk")
}

void laxperBSlashRec(void) {
	MESSSAGE_DEBUG("laxperBSlashRec")
}

void laxperBSlashBuf(void) {
	MESSSAGE_DEBUG("laxperBSlashBuf")
}

void laxperNumBuffers(void) {
	MESSSAGE_DEBUG("laxperNumBuffers")
}

void laxperQuery(void) {
	MESSSAGE_DEBUG("laxperQuery")
}

void laxperTib(void) {
	MESSSAGE_DEBUG("laxperTib")
}

void laxperExpect(void) {
	MESSSAGE_DEBUG("laxperExpect")
}

void laxperCcForth(void) {
	MESSSAGE_DEBUG("laxperCcForth")
}

void laxperCc(void) {
	MESSSAGE_DEBUG("laxperCc")
}

void laxperDelIn(void) {
	MESSSAGE_DEBUG("laxperDelIn")
}

void laxperChar(void) {
	MESSSAGE_DEBUG("laxperChar")
}

void laxperYChar(void) {
	MESSSAGE_DEBUG("laxperYChar")
}

void laxperCrIn(void) {
	MESSSAGE_DEBUG("laxperCrIn")
}

void laxperPIn(void) {
	MESSSAGE_DEBUG("laxperPIn")
}

void laxperResIn(void) {
	MESSSAGE_DEBUG("laxperResIn")
}

void laxperBackUp(void) {
	MESSSAGE_DEBUG("laxperBackUp")
}

void laxperYDelIn(void) {
	MESSSAGE_DEBUG("laxperYDelIn")
}

void laxperBsIn(void) {
	MESSSAGE_DEBUG("laxperBsIn")
}

void laxperBeep(void) {
	MESSSAGE_DEBUG("laxperBeep")
}

void laxperBackspaces(void) {
	MESSSAGE_DEBUG("laxperBackspaces")
}

void laxperSpaces(void) {
	MESSSAGE_DEBUG("laxperSpaces")
}

void laxperSpace(void) {
	MESSSAGE_DEBUG("laxperSpace")
}

void laxperType(void) {
	MESSSAGE_DEBUG("laxperType")
}

void laxperCrLf(void) {
	MESSSAGE_DEBUG("laxperCrLf")
}

void laxperYEmit(void) {
	MESSSAGE_DEBUG("laxperYEmit")
}

void laxperYPrint(void) {
	MESSSAGE_DEBUG("laxperYPrint")
}

void laxperPrStat(void) {
	MESSSAGE_DEBUG("laxperPrStat")
}

void laxperCr(void) {
	MESSSAGE_DEBUG("laxperCr")
}

void laxperKey(void) {
	MESSSAGE_DEBUG("laxperKey")
}

void laxperKeyQ(void) {
	MESSSAGE_DEBUG("laxperKeyQ")
}

void laxperYConsole(void) {
	MESSSAGE_DEBUG("laxperYConsole")
}

void laxperYKey(void) {
	MESSSAGE_DEBUG("laxperYKey")
}

void laxperYKeyQ(void) {
	MESSSAGE_DEBUG("laxperYKeyQ")
}

void laxperBdos(void) {
	MESSSAGE_DEBUG("laxperBdos")
}

void laxperCompare(void) {
	MESSSAGE_DEBUG("laxperCompare")
}

void laxperCapsComp(void) {
	MESSSAGE_DEBUG("laxperCapsComp")
}

void laxperComp(void) {
	MESSSAGE_DEBUG("laxperComp")
}

void laxperMinusTrailing(void) {
	MESSSAGE_DEBUG("laxperMinusTrailing")
}

void laxperPad(void) {
	MESSSAGE_DEBUG("laxperPad")
}

void laxperHere(void) {
	MESSSAGE_DEBUG("laxperHere")
}

void laxperUpper(void) {
	MESSSAGE_DEBUG("laxperUpper")
}

void laxperUpc(void) {
	MESSSAGE_DEBUG("laxperUpc")
}

void laxperMove(void) {
	MESSSAGE_DEBUG("laxperMove")
}

void laxperLength(void) {
	MESSSAGE_DEBUG("laxperLength")
}

void laxperCount(void) {
	MESSSAGE_DEBUG("laxperCount")
}

void laxperBlank(void) {
	MESSSAGE_DEBUG("laxperBlank")
}

void laxperErase(void) {
	MESSSAGE_DEBUG("laxperErase")
}

void laxperFill(void) {
	MESSSAGE_DEBUG("laxperFill")
}

void laxperCaps(void) {
	MESSSAGE_DEBUG("laxperCaps")
}

void laxperBell(void) {
	MESSSAGE_DEBUG("laxperBell")
}

void laxperBs(void) {
	MESSSAGE_DEBUG("laxperBs")
}

void laxperBl(void) {
	MESSSAGE_DEBUG("laxperBl")
}

void laxperEndQ(void) {
	MESSSAGE_DEBUG("laxperEndQ")
}

void laxperNumTib(void) {
	MESSSAGE_DEBUG("laxperNumTib")
}

void laxperSpan(void) {
	MESSSAGE_DEBUG("laxperSpan")
}

void laxperToIn(void) {
	MESSSAGE_DEBUG("laxperToIn")
}

void laxperBlk(void) {
	MESSSAGE_DEBUG("laxperBlk")
}

void laxperVocLink(void) {
	MESSSAGE_DEBUG("laxperVocLink")
}

void laxperWidth(void) {
	MESSSAGE_DEBUG("laxperWidth")
}

void laxperTickTib(void) {
	MESSSAGE_DEBUG("laxperTickTib")
}

void laxperContext(void) {
	MESSSAGE_DEBUG("laxperContext")
}

void laxperNumVocs(void) {
	MESSSAGE_DEBUG("laxperNumVocs")
}

void laxperCurrent(void) {
	MESSSAGE_DEBUG("laxperCurrent")
}

void laxperCsp(void) {
	MESSSAGE_DEBUG("laxperCsp")
}

void laxperLast(void) {
	MESSSAGE_DEBUG("laxperLast")
}

void laxperRNum(void) {
	MESSSAGE_DEBUG("laxperRNum")
}

void laxperDpl(void) {
	MESSSAGE_DEBUG("laxperDpl")
}

void laxperWarning(void) {
	MESSSAGE_DEBUG("laxperWarning")
}

void laxperState(void) {
	MESSSAGE_DEBUG("laxperState")
}

void laxperPrior(void) {
	MESSSAGE_DEBUG("laxperPrior")
}

void laxperScr(void) {
	MESSSAGE_DEBUG("laxperScr")
}

void laxperEmit(void) {
	MESSSAGE_DEBUG("laxperEmit")
}

void laxperPrinting(void) {
	MESSSAGE_DEBUG("laxperPrinting")
}

void laxperInFile(void) {
	MESSSAGE_DEBUG("laxperInFile")
}

void laxperFile(void) {
	MESSSAGE_DEBUG("laxperFile")
}

void laxperHld(void) {
	MESSSAGE_DEBUG("laxperHld")
}

void laxperBase(void) {
	MESSSAGE_DEBUG("laxperBase")
}

void laxperOffset(void) {
	MESSSAGE_DEBUG("laxperOffset")
}

void laxperNumLine(void) {
	MESSSAGE_DEBUG("laxperOffset")
}

void laxperNumOut(void) {
	MESSSAGE_DEBUG("laxperNumOut")
}

void laxperDP(void) {
	MESSSAGE_DEBUG("laxperDP")
}

void laxperRP0(void) {
	MESSSAGE_DEBUG("laxperRP0")
}

void laxperSP0(void) {
	MESSSAGE_DEBUG("laxperSP0")
}

void laxperLink(void) {
	MESSSAGE_DEBUG("laxperLink")
}

void laxperEntry(void) {
	MESSSAGE_DEBUG("laxperEntry")
}

void laxperTos(void) {
	MESSSAGE_DEBUG("laxperTos")
}

void laxperStarSlash(void) {
	MESSSAGE_DEBUG("laxperStarSlash")
}

void laxperStarSlashMod(void) {
	MESSSAGE_DEBUG("laxperStarSlashMod")
}

void laxperMod(void) {
	MESSSAGE_DEBUG("laxperMod")
}

void laxperSlash(void) {
	MESSSAGE_DEBUG("laxperSlash")
}

void laxperSlashMod(void) {
	MESSSAGE_DEBUG("laxperSlashMod")
}

void laxperStar(void) {
	MESSSAGE_DEBUG("laxperStar")
}

void laxperMuSlashMod(void) {
	MESSSAGE_DEBUG("laxperMuSlashMod")
}

void laxperMSlashMod(void) {
	MESSSAGE_DEBUG("laxperMSlashMod")
}

void laxperStarD(void) {
	MESSSAGE_DEBUG("laxperStarD")
}

void laxperDMax(void) {
	MESSSAGE_DEBUG("laxperDMax")
}

void laxperDMin(void) {
	MESSSAGE_DEBUG("laxperDMin")
}

void laxperDGreater(void) {
	MESSSAGE_DEBUG("laxperDGreater")
}

void laxperDLess(void) {
	MESSSAGE_DEBUG("laxperDLess")
}

void laxperDULess(void) {
	MESSSAGE_DEBUG("laxperDULess")
}

void laxperDEqual(void) {
	MESSSAGE_DEBUG("laxperDEqual")
}

void laxperD0Equal(void) {
	MESSSAGE_DEBUG("laxperD0Equal")
}

void laxperQDNegate(void) {
	MESSSAGE_DEBUG("laxperQDNegate")
}

void laxperDMinus(void) {
	MESSSAGE_DEBUG("laxperDMinus")
}

void laxperD2Slash(void) {
	MESSSAGE_DEBUG("laxperD2Slash")
}

void laxperD2Star(void) {
	MESSSAGE_DEBUG("laxperD2Star")
}

void laxperDAbs(void) {
	MESSSAGE_DEBUG("laxperDAbs")
}

void laxperSToD(void) {
	MESSSAGE_DEBUG("laxperSToD")
}

void laxperDNegate(void) {
	MESSSAGE_DEBUG("laxperDNegate")
}

void laxperDPLus(void) {
	MESSSAGE_DEBUG("laxperDPLus")
}

void laxperTwoRot(void) {
	MESSSAGE_DEBUG("laxperTwoRot")
}

void laxperFourDup(void) {
	MESSSAGE_DEBUG("laxperFourDup")
}

void laxperThreeDup(void) {
	MESSSAGE_DEBUG("laxperThreeDup")
}

void laxperTwoOver(void) {
	MESSSAGE_DEBUG("laxperTwoOver")
}

void laxperTwoSwap(void) {
	MESSSAGE_DEBUG("laxperTwoSwap")
}

void laxperTwoDup(void) {
	MESSSAGE_DEBUG("laxperTwoDup")
}

void laxperTwoDrop(void) {
	MESSSAGE_DEBUG("laxperTwoDrop")
}

void laxperTwoStore(void) {
	MESSSAGE_DEBUG("laxperTwoStore")
}

void laxperTwoFetch(void) {
	MESSSAGE_DEBUG("laxperTwoFetch")
}

void laxperWithin(void) {
	MESSSAGE_DEBUG("laxperWithin")
}

void laxperBetween(void) {
	MESSSAGE_DEBUG("laxperBetween")
}

void laxperMax(void) {
	MESSSAGE_DEBUG("laxperMax")
}

void laxperMin(void) {
	MESSSAGE_DEBUG("laxperMin")
}

void laxperGreater(void) {
	MESSSAGE_DEBUG("laxperGreater")
}

void laxperLess(void) {
	MESSSAGE_DEBUG("laxperLess")
}

void laxperUGreater(void) {
	MESSSAGE_DEBUG("laxperUGreater")
}

void laxperULess(void) {
	MESSSAGE_DEBUG("laxperULess")
}

void laxperQNegate(void) {
	MESSSAGE_DEBUG("laxperQNegate")
}

void laxperUnequal(void) {
	MESSSAGE_DEBUG("laxperUnequal")
}

void laxperEqual(void) {
	MESSSAGE_DEBUG("laxperEqual")
}

void laxperZeroUnequal(void) {
	MESSSAGE_DEBUG("laxperZeroUnequal")
}

void laxperZeroGreater(void) {
	MESSSAGE_DEBUG("laxperZeroGreater")
}

void laxperZeroLess(void) {
	MESSSAGE_DEBUG("laxperZeroLess")
}

void laxperZeroEqual(void) {
	MESSSAGE_DEBUG("laxperZeroEqual")
}

void laxperUmSlashMod(void) {
	MESSSAGE_DEBUG("laxperUmSlashMod")
}

void laxperUStarD(void) {
	MESSSAGE_DEBUG("laxperUStarD")
}

void laxperUmStar(void) {
	MESSSAGE_DEBUG("laxperUmStar")
}

void laxperTwoMinus(void) {
	MESSSAGE_DEBUG("laxperTwoMinus")
}

void laxperOneMinus(void) {
	MESSSAGE_DEBUG("laxperOneMinus")
}

void laxperTwoPlus(void) {
	MESSSAGE_DEBUG("laxperTwoPlus")
}

void laxperOnePlus(void) {
	MESSSAGE_DEBUG("laxperOnePlus")
}

void laxperEightStar(void) {
	MESSSAGE_DEBUG("laxperEightStar")
}

void laxperU2Slash(void) {
	MESSSAGE_DEBUG("laxperU2Slash")
}

void laxperTwoSlash(void) {
	MESSSAGE_DEBUG("laxperTwoSlash")
}

void laxperTwoStar(void) {
	MESSSAGE_DEBUG("laxperTwoStar")
}

void laxperThree(void) {
	MESSSAGE_DEBUG("laxperThree")
}

void laxperTwo(void) {
	MESSSAGE_DEBUG("laxperTwo")
}

void laxperOne(void) {
	MESSSAGE_DEBUG("laxperOne")
}

void laxperZero(void) {
	MESSSAGE_DEBUG("laxperZero")
}

void laxperPlusStore(void) {
	MESSSAGE_DEBUG("laxperPlusStore")
}

void laxperAbs(void) {
	MESSSAGE_DEBUG("laxperAbs")
}

void laxperMinus(void) {
	MESSSAGE_DEBUG("laxperMinus")
}

void laxperNegate(void) {
	MESSSAGE_DEBUG("laxperNegate")
}

void laxperPlus(void) {
	MESSSAGE_DEBUG("laxperPlus")
}

void laxperOff(void) {
	MESSSAGE_DEBUG("laxperOff")
}

void laxperOn(void) {
	MESSSAGE_DEBUG("laxperOn")
}

void laxperCToggle(void) {
	MESSSAGE_DEBUG("laxperCToggle")
}

void laxperCReset(void) {
	MESSSAGE_DEBUG("laxperCReset")
}

void laxperCSet(void) {
	MESSSAGE_DEBUG("laxperCSet")
}

void laxperFalse(void) {
	MESSSAGE_DEBUG("laxperFalse")
}

void laxperTrue(void) {
	MESSSAGE_DEBUG("laxperTrue")
}

void laxperNot(void) {
	MESSSAGE_DEBUG("laxperNot")
}

void laxperYor(void) {
	MESSSAGE_DEBUG("laxperYor")
}

void laxperOr(void) {
	MESSSAGE_DEBUG("laxperOr")
}

void laxperAnd(void) {
	MESSSAGE_DEBUG("laxperAnd")
}

void laxperRoll(void) {
	MESSSAGE_DEBUG("laxperRoll")
}

void laxperPick(void) {
	MESSSAGE_DEBUG("laxperPick")
}

void laxperRFetch(void) {
	MESSSAGE_DEBUG("laxperRFetch")
}

void laxperToR(void) {
	MESSSAGE_DEBUG("laxperToR")
}

void laxperRFrom(void) {
	MESSSAGE_DEBUG("laxperRFrom")
}

void laxperQDup(void) {
	MESSSAGE_DEBUG("laxperQDup")
}

void laxperFlip(void) {
	MESSSAGE_DEBUG("laxperFlip")
}

void laxperMinusRot(void) {
	MESSSAGE_DEBUG("laxperMinusRot")
}

void laxperRot(void) {
	MESSSAGE_DEBUG("laxperRot")
}

void laxperNip(void) {
	MESSSAGE_DEBUG("laxperNip")
}

void laxperTuck(void) {
	MESSSAGE_DEBUG("laxperTuck")
}

void laxperOver(void) {
	MESSSAGE_DEBUG("laxperOver")
}

void laxperSwap(void) {
	MESSSAGE_DEBUG("laxperSwap")
}

void laxperDup(void) {
	MESSSAGE_DEBUG("laxperDup")
}

void laxperDrop(void) {
	MESSSAGE_DEBUG("laxperDrop")
}

void laxperRPStore(void) {
	MESSSAGE_DEBUG("laxperRPStore")
}

void laxperRPFetch(void) {
	MESSSAGE_DEBUG("laxperRPFetch")
}

void laxperSPStore(void) {
	MESSSAGE_DEBUG("laxperSPStore")
}

void laxperSPFetch(void) {
	MESSSAGE_DEBUG("laxperSPFetch")
}

void laxperCMoveFrom(void) {
	MESSSAGE_DEBUG("laxperCMoveFrom")
}

void laxperCMove(void) {
	MESSSAGE_DEBUG("laxperCMove")
}

void laxperCStore(void) {
	MESSSAGE_DEBUG("laxperCStore")
}

void laxperCFetch(void) {
	MESSSAGE_DEBUG("laxperCFetch")
}

void laxperStore(void) {
	MESSSAGE_DEBUG("laxperStore")
}

void laxperFetch(void) {
	MESSSAGE_DEBUG("laxperFetch")
}

void laxperYQLeave(void) {
	MESSSAGE_DEBUG("laxperYQLeave")
}

void laxperYLeave(void) {
	MESSSAGE_DEBUG("laxperYLeave")
}

void laxperJ(void) {
	MESSSAGE_DEBUG("laxperJ")
}

void laxperI(void) {
	MESSSAGE_DEBUG("laxperI")
}

void laxperPause(void) {
	MESSSAGE_DEBUG("laxperPause")
}

void laxperNoop(void) {
	MESSSAGE_DEBUG("laxperNoop")
}

void laxperGo(void) {
	MESSSAGE_DEBUG("laxperGo")
}

void laxperPerform(void) {
	MESSSAGE_DEBUG("laxperPerform")
}

void laxperExecute(void) {
	MESSSAGE_DEBUG("laxperExecute")
}

void laxperToNext(void) {
	MESSSAGE_DEBUG("laxperToNext")
}

void laxperBounds(void) {
	MESSSAGE_DEBUG("laxperBounds")
}

void laxperYQDo(void) {
	MESSSAGE_DEBUG("laxperYQDo")
}

void laxperYDo(void) {
	MESSSAGE_DEBUG("laxperYDo")
}

void laxperYPlusLoop(void) {
	MESSSAGE_DEBUG("laxperYPlusLoop")
}

void laxperYLoop(void) {
	MESSSAGE_DEBUG("laxperYLoop")
}

void laxperQBranch(void) {
	MESSSAGE_DEBUG("laxperQBranch")
}

void laxperBranch(void) {
	MESSSAGE_DEBUG("laxperBranch")
}

void laxperYLit(void) {
	MESSSAGE_DEBUG("laxperYLit")
}

void laxperUp(void) {
	MESSSAGE_DEBUG("laxperUp")
}

void laxperUnnest(void) {
	MESSSAGE_DEBUG("laxperUnnest")
}

void laxperExit(void) {
	MESSSAGE_DEBUG("laxperExit")
}

void laxperForth(void) {
	MESSSAGE_DEBUG("laxperForth")
}

#endif

#if (H2O_FORTH_PRIMITIVES == LAXONPERRY_FORTH) || \
    (H2O_FORTH_PRIMITIVES == LAXONPERRY_PC_FORTH)
void laxperPStore(void) {
	MESSSAGE_DEBUG("laxperPStore")
}

void laxperPFetch(void) {
	MESSSAGE_DEBUG("laxperPFetch")
}

void laxperIntNum(void) {
	MESSSAGE_DEBUG("laxperIntNum")
}

void laxperCpu8086DotBlk(void) {
	MESSSAGE_DEBUG("laxperCpu8086DotBlk")
}

void laxperExtend86DotBlk(void) {
	MESSSAGE_DEBUG("laxperExtend86DotBlk")
}

void laxperKernel86DotBlk(void) {
	MESSSAGE_DEBUG("laxperKernel86DotBlk")
}
#endif

#if (H2O_FORTH_PRIMITIVES == LAXONPERRY_FORTH) || \
    (H2O_FORTH_PRIMITIVES == LAXONPERRY_CPM_FORTH)
void laxperCpu8080DotBlk(void) {
	MESSSAGE_DEBUG("laxperCpu8080DotBlk")
}

void laxperExtend80DotBlk(void) {
	MESSSAGE_DEBUG("laxperExtend80DotBlk")
}

void laxperKernel80DotBlk(void) {
	MESSSAGE_DEBUG("laxperKernel80DotBlk")
}

void laxperBios(void) {
	MESSSAGE_DEBUG("laxperBios")
}

void laxperRP(void) {
	MESSSAGE_DEBUG("laxperRP")
}
#endif

#if (H2O_FORTH_PRIMITIVES == LAXONPERRY_FORTH) || \
	(H2O_FORTH_PRIMITIVES == LAXONPERRY_CPM68K_FORTH)
void laxperCpu68000DotBlk(void) {
	MESSSAGE_DEBUG("laxperCpu68000DotBlk")
}

void laxperExtend68DotBlk(void) {
	MESSSAGE_DEBUG("laxperExtend68DotBlk")
}

void laxperKernel68DotBlk(void) {
	MESSSAGE_DEBUG("laxperKernel68DotBlk")
}

/* unchecked: */
void laxperBios(void) {
	MESSSAGE_DEBUG("laxperBios")
}

void laxperRP(void) {
	MESSSAGE_DEBUG("laxperRP")
}

#endif

#endif
