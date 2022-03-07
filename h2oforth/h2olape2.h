#ifndef H2OLAPE2
#define H2OLAPE2

/* The "Laxon & Perry 2.0" ( FORTH-83 ) FORTH */

/* Primitives */

#if (H2O_FORTH_PRIMITIVES == LAXONPERRY_FORTH) || \
    (H2O_FORTH_PRIMITIVES == LAXONPERRY_PC_FORTH) || \
    (H2O_FORTH_PRIMITIVES == LAXONPERRY_CPM_FORTH) || \
	(H2O_FORTH_PRIMITIVES == LAXONPERRY_CPM68K_FORTH)
void laxperEmpty(void) {
	SMSG_DEBUG("laxperEmpty")
}

void laxperMark(void) {
	SMSG_DEBUG("laxperMark")
}

void laxperHello(void) {
	SMSG_DEBUG("laxperHello")
}

void laxperBackgroundColon(void) {
	SMSG_DEBUG("laxperBackgroundColon")
}

void laxperActivate(void) {
	SMSG_DEBUG("laxperActivate")
}

void laxperSetTask(void) {
	SMSG_DEBUG("laxperSetTask")
}

void laxperTaskColon(void) {
	SMSG_DEBUG("laxperTaskColon")
}

void laxperResume(void) {
	SMSG_DEBUG("laxperResume")
}

void laxperDebug(void) {
	SMSG_DEBUG("laxperDebug")
}

void laxperListing(void) {
	SMSG_DEBUG("laxperListing")
}

void laxperShow(void) {
	SMSG_DEBUG("laxperShow")
}

void laxperYSemit(void) {
	SMSG_DEBUG("laxperYSemit")
}

void laxperYPage(void) {
	SMSG_DEBUG("laxperYPage")
}

void laxperFormFeed(void) {
	SMSG_DEBUG("laxperFormFeed")
}

void laxperPage(void) {
	SMSG_DEBUG("laxperPage")
}

void laxperNumPage(void) {
	SMSG_DEBUG("laxperNumPage")
}

void laxperLogo(void) {
	SMSG_DEBUG("laxperLogo")
}

void laxperLSlashPage(void) {
	SMSG_DEBUG("laxperLSlashPage")
}

void laxperFooting(void) {
	SMSG_DEBUG("laxperFooting")
}

void laxperInitPr(void) {
	SMSG_DEBUG("laxperInitPr")
}

void laxperEpson(void) {
	SMSG_DEBUG("laxperEpson")
}

void laxperSee(void) {
	SMSG_DEBUG("laxperSee")
}

void laxperYSee(void) {
	SMSG_DEBUG("laxperYSee")
}

void laxperAssociativeColon(void) {
	SMSG_DEBUG("laxperAssociativeColon")
}

void laxperCaseColon(void) {
	SMSG_DEBUG("laxperCaseColon")
}

void laxperMap(void) {
	SMSG_DEBUG("laxperMap")
}

void laxperOut(void) {
	SMSG_DEBUG("laxperOut")
}

void laxperDL(void) {
	SMSG_DEBUG("laxperDL")
}

void laxperDU(void) {
	SMSG_DEBUG("laxperDU")
}

void laxperDump(void) {
	SMSG_DEBUG("laxperDump")
}

void laxperDotHead(void) {
	SMSG_DEBUG("laxperDotHead")
}

void laxperQDotA(void) {
	SMSG_DEBUG("laxperQDotA")
}

void laxperQDotN(void) {
	SMSG_DEBUG("laxperQDotN")
}

void laxperDln(void) {
	SMSG_DEBUG("laxperDln")
}

void laxperEmitDot(void) {
	SMSG_DEBUG("laxperEmitDot")
}

void laxperDDotTwo(void) {
	SMSG_DEBUG("laxperDDotTwo")
}

void laxperDotTwo(void) {
	SMSG_DEBUG("laxperDotTwo")
}

void laxperA(void) {
	SMSG_DEBUG("laxperA")
}

void laxperShadow(void) {
	SMSG_DEBUG("laxperShadow")
}

void laxperYWhere(void) {
	SMSG_DEBUG("laxperYWhere")
}

void laxperFix(void) {
	SMSG_DEBUG("laxperFix")
}

void laxperEdit(void) {
	SMSG_DEBUG("laxperEdit")
}

void laxperEd(void) {
	SMSG_DEBUG("laxperEd")
}

void laxperDone(void) {
	SMSG_DEBUG("laxperDone")
}

void laxperEditor(void) {
	SMSG_DEBUG("laxperEditor")
}

void laxperDark(void) {
	SMSG_DEBUG("laxperDark")
}

void laxperAt(void) {
	SMSG_DEBUG("laxperAt")
}

void laxperMinusLine(void) {
	SMSG_DEBUG("laxperMinusLine")
}

void laxperBlot(void) {
	SMSG_DEBUG("laxperBlot")
}

void laxperReplace(void) {
	SMSG_DEBUG("laxperReplace")
}

void laxperInsert(void) {
	SMSG_DEBUG("laxperInsert")
}

void laxperDelete(void) {
	SMSG_DEBUG("laxperDelete")
}

void laxperSearch(void) {
	SMSG_DEBUG("laxperSearch")
}

void laxperScanFirst(void) {
	SMSG_DEBUG("laxperScanFirst")
}

void laxperFound(void) {
	SMSG_DEBUG("laxperFound")
}

void laxperTo(void) {
	SMSG_DEBUG("laxperTo")
}

void laxperCorvey(void) {
	SMSG_DEBUG("laxperCorvey")
}

void laxperYConvey(void) {
	SMSG_DEBUG("laxperYConvey")
}

void laxperDotTo(void) {
	SMSG_DEBUG("laxperDotTo")
}

void laxperHop(void) {
	SMSG_DEBUG("laxperHop")
}

void laxperConveyCopy(void) {
	SMSG_DEBUG("laxperConveyCopy")
}

void laxperUSlashD(void) {
	SMSG_DEBUG("laxperUSlashD")
}

void laxperHopped(void) {
	SMSG_DEBUG("laxperHopped")
}

void laxperView(void) {
	SMSG_DEBUG("laxperView")
}

void laxperFetchView(void) {
	SMSG_DEBUG("laxperFetchView")
}

void laxperCopy(void) {
	SMSG_DEBUG("laxperCopy")
}

void laxperYCopy(void) {
	SMSG_DEBUG("laxperYCopy")
}

void laxperEstablish(void) {
	SMSG_DEBUG("laxperEstablish")
}

void laxperL(void) {
	SMSG_DEBUG("laxperL")
}

void laxperB(void) {
	SMSG_DEBUG("laxperB")
}

void laxperN(void) {
	SMSG_DEBUG("laxperN")
}

void laxperColonColon(void) {
	SMSG_DEBUG("laxperColonColon")
}

void laxperMany(void) {
	SMSG_DEBUG("laxperMany")
}

void laxperTimes(void) {
	SMSG_DEBUG("laxperTimes")
}

void laxperNumTimes(void) {
	SMSG_DEBUG("laxperNumTimes")
}

void laxperWords(void) {
	SMSG_DEBUG("laxperWords")
}

void laxperLargest(void) {
	SMSG_DEBUG("laxperLargest")
}

void laxperInd(void) {
	SMSG_DEBUG("laxperInd")
}

void laxperIndex(void) {
	SMSG_DEBUG("laxperIndex")
}

void laxperDotLineZero(void) {
	SMSG_DEBUG("laxperDotLineZero")
}

void laxperTriad(void) {
	SMSG_DEBUG("laxperTriad")
}

void laxperList(void) {
	SMSG_DEBUG("laxperList")
}

void laxperDotScr(void) {
	SMSG_DEBUG("laxperDotScr")
}

void laxperQCr(void) {
	SMSG_DEBUG("laxperQCr")
}

void laxperQLine(void) {
	SMSG_DEBUG("laxperQLine")
}

void laxperRMargin(void) {
	SMSG_DEBUG("laxperRMargin")
}

void laxperLMargin(void) {
	SMSG_DEBUG("laxperLMargin")
}

void laxperHidden(void) {
	SMSG_DEBUG("laxperHidden")
}

void laxperZeroLessEqual(void) {
	SMSG_DEBUG("laxperZeroLessEqual")
}

void laxperZeroGreaterEqual(void) {
	SMSG_DEBUG("laxperZeroGreaterEqual")
}

void laxperGreaterEqual(void) {
	SMSG_DEBUG("laxperGreaterEqual")
}

void laxperLessEqual(void) {
	SMSG_DEBUG("laxperLessEqual")
}

void laxperUGreaterEqual(void) {
	SMSG_DEBUG("laxperUGreaterEqual")
}

void laxperULessEqual(void) {
	SMSG_DEBUG("laxperULessEqual")
}

void laxperMs(void) {
	SMSG_DEBUG("laxperMs")
}

void laxperFudge(void) {
	SMSG_DEBUG("laxperFudge")
}

void laxperPCStore(void) {
	SMSG_DEBUG("laxperPCStore")
}

void laxperPCFetch(void) {
	SMSG_DEBUG("laxperPCFetch")
}

void laxperMulti(void) {
	SMSG_DEBUG("laxperMulti")
}

void laxperSingle(void) {
	SMSG_DEBUG("laxperSingle")
}

void laxperStop(void) {
	SMSG_DEBUG("laxperStop")
}

void laxperWake(void) {
	SMSG_DEBUG("laxperWake")
}

void laxperSleep(void) {
	SMSG_DEBUG("laxperSleep")
}

void laxperStoreLink(void) {
	SMSG_DEBUG("laxperStoreLink")
}

void laxperFetchLink(void) {
	SMSG_DEBUG("laxperFetchLink")
}

void laxperLocal(void) {
	SMSG_DEBUG("laxperLocal")
}

void laxperRestart(void) {
	SMSG_DEBUG("laxperRestart")
}

void laxperYPause(void) {
	SMSG_DEBUG("laxperYPause")
}

void laxperUnbug(void) {
	SMSG_DEBUG("laxperUnbug")
}

void laxperBug(void) {
	SMSG_DEBUG("laxperBug")
}

void laxperDoesQ(void) {
	SMSG_DEBUG("laxperDoesQ")
}

void laxperDoesSize(void) {
	SMSG_DEBUG("laxperDoesSize")
}

void laxperDoesOp(void) {
	SMSG_DEBUG("laxperDoesOp")
}

void laxperLabel(void) {
	SMSG_DEBUG("laxperLabel")
}

void laxperUtilityDotBlk(void) {
	SMSG_DEBUG("laxperUtilityDotBlk")
}

void laxperViews(void) {
	SMSG_DEBUG("laxperViews")
}

void laxperViewFiles(void) {
	SMSG_DEBUG("laxperViewFiles")
}

void laxperSaveSystem(void) {
	SMSG_DEBUG("laxperSaveSystem")
}

void laxperForm(void) {
	SMSG_DEBUG("laxperForm")
}

void laxperOpen(void) {
	SMSG_DEBUG("laxperOpen")
}

void laxperDefine(void) {
	SMSG_DEBUG("laxperDefine")
}

void laxperBColon(void) {
	SMSG_DEBUG("laxperBColon")
}

void laxperAColon(void) {
	SMSG_DEBUG("laxperAColon")
}

void laxperDriveQ(void) {
	SMSG_DEBUG("laxperDriveQ")
}

void laxperDir(void) {
	SMSG_DEBUG("laxperDir")
}

void laxperCreateFile(void) {
	SMSG_DEBUG("laxperCreateFile")
}

void laxperMore(void) {
	SMSG_DEBUG("laxperMore")
}

void laxperRoot(void) {
	SMSG_DEBUG("laxperRoot")
}

void laxperNextBlock(void) {
	SMSG_DEBUG("laxperNextBlock")
}

void laxperPlusThru(void) {
	SMSG_DEBUG("laxperPlusThru")
}

void laxperThru(void) {
	SMSG_DEBUG("laxperThru")
}

void laxperQEnough(void) {
	SMSG_DEBUG("laxperQEnough")
}

void laxperQ(void) {
	SMSG_DEBUG("laxperQ")
}

void laxperParenS(void) {
	SMSG_DEBUG("laxperParenS")
}

void laxperBackslash(void) {
	SMSG_DEBUG("laxperBackslash")
}

void laxperLSlashScr(void) {
	SMSG_DEBUG("laxperLSlashScr")
}

void laxperCSlashL(void) {
	SMSG_DEBUG("laxperCSlashL")
}

void laxperRecurse(void) {
	SMSG_DEBUG("laxperRecurse")
}

void laxperDotId(void) {
	SMSG_DEBUG("laxperDotId")
}

void laxperDotS(void) {
	SMSG_DEBUG("laxperDotS")
}

void laxperDepth(void) {
	SMSG_DEBUG("laxperDepth")
}

void laxperBye(void) {
	SMSG_DEBUG("laxperBye")
}

void laxperStart(void) {
	SMSG_DEBUG("laxperStart")
}

void laxperOk(void) {
	SMSG_DEBUG("laxperOk")
}

void laxperInitial(void) {
	SMSG_DEBUG("laxperInitial")
}

void laxperCold(void) {
	SMSG_DEBUG("laxperCold")
}

void laxperWarm(void) {
	SMSG_DEBUG("laxperWarm")
}

void laxperBoot(void) {
	SMSG_DEBUG("laxperBoot")
}

void laxperQuit(void) {
	SMSG_DEBUG("laxperQuit")
}

void laxperRun(void) {
	SMSG_DEBUG("laxperRun")
}

void laxperIs(void) {
	SMSG_DEBUG("laxperIs")
}

void laxperYIs(void) {
	SMSG_DEBUG("laxperYIs")
}

void laxperToIs(void) {
	SMSG_DEBUG("laxperToIs")
}

void laxperUser(void) {
	SMSG_DEBUG("laxperUser")
}

void laxperNumUser(void) {
	SMSG_DEBUG("laxperNumUser")
}

void laxperCode(void) {
	SMSG_DEBUG("laxperCode")
}

void laxperAvoc(void) {
	SMSG_DEBUG("laxperAvoc")
}

void laxperTwoVariable(void) {
	SMSG_DEBUG("laxperTwoVariable")
}

void laxperTwoConstant(void) {
	SMSG_DEBUG("laxperTwoConstant")
}

void laxperDefinitions(void) {
	SMSG_DEBUG("laxperDefinitions")
}

void laxperVocabulary(void) {
	SMSG_DEBUG("laxperVocabulary")
}

void laxperDefer(void) {
	SMSG_DEBUG("laxperDefer")
}

void laxperVariable(void) {
	SMSG_DEBUG("laxperVariable")
}

void laxperConstant(void) {
	SMSG_DEBUG("laxperConstant")
}

void laxperRecursive(void) {
	SMSG_DEBUG("laxperRecursive")
}

void laxperSemicolon(void) {
	SMSG_DEBUG("laxperSemicolon")
}

void laxperColon(void) {
	SMSG_DEBUG("laxperColon")
}

void laxperRightBracket(void) {
	SMSG_DEBUG("laxperRightBracket")
}

void laxperLeftBracket(void) {
	SMSG_DEBUG("laxperLeftBracket")
}

void laxperDoes(void) {
	SMSG_DEBUG("laxperDoes")
}

void laxperSemicolonCode(void) {
	SMSG_DEBUG("laxperSemicolonCode")
}

void laxperYSemicolonCode(void) {
	SMSG_DEBUG("laxperYSemicolonCode")
}

void laxperSemicolonUses(void) {
	SMSG_DEBUG("laxperSemicolonUses")
}

void laxperAssembler(void) {
	SMSG_DEBUG("laxperAssembler")
}

void laxperYSemicolonUses(void) {
	SMSG_DEBUG("laxperYSemicolonUses")
}

void laxperReveal(void) {
	SMSG_DEBUG("laxperReveal")
}

void laxperHide(void) {
	SMSG_DEBUG("laxperHide")
}

void laxperQCsp(void) {
	SMSG_DEBUG("laxperQCsp")
}

void laxperStoreCsp(void) {
	SMSG_DEBUG("laxperStoreCsp")
}

void laxperCreate(void) {
	SMSG_DEBUG("laxperCreate")
}

void laxperBackslashCreate(void) {
	SMSG_DEBUG("laxperBackslashCreate")
}

void laxperCommaView(void) {
	SMSG_DEBUG("laxperCommaView")
}

void laxperWhile(void) {
	SMSG_DEBUG("laxperWhile")
}

void laxperElse(void) {
	SMSG_DEBUG("laxperElse")
}

void laxperIf(void) {
	SMSG_DEBUG("laxperIf")
}

void laxperRepeat(void) {
	SMSG_DEBUG("laxperRepeat")
}

void laxperAgain(void) {
	SMSG_DEBUG("laxperAgain")
}

void laxperUntil(void) {
	SMSG_DEBUG("laxperUntil")
}

void laxperPlusLoop(void) {
	SMSG_DEBUG("laxperPlusLoop")
}

void laxperLoop(void) {
	SMSG_DEBUG("laxperLoop")
}

void laxperQDo(void) {
	SMSG_DEBUG("laxperQDo")
}

void laxperDo(void) {
	SMSG_DEBUG("laxperDo")
}

void laxperThen(void) {
	SMSG_DEBUG("laxperThen")
}

void laxperBegin(void) {
	SMSG_DEBUG("laxperBegin")
}

void laxperQLeave(void) {
	SMSG_DEBUG("laxperQLeave")
}

void laxperLeave(void) {
	SMSG_DEBUG("laxperLeave")
}

void laxperQLessResolve(void) {
	SMSG_DEBUG("laxperQLessResolve")
}

void laxperQLessMark(void) {
	SMSG_DEBUG("laxperQLessMark")
}

void laxperQGreaterResolve(void) {
	SMSG_DEBUG("laxperQGreaterResolve")
}

void laxperQGreaterMark(void) {
	SMSG_DEBUG("laxperQGreaterMark")
}

void laxperLessResolve(void) {
	SMSG_DEBUG("laxperLessResolve")
}

void laxperLessMark(void) {
	SMSG_DEBUG("laxperLessMark")
}

void laxperToResolve(void) {
	SMSG_DEBUG("laxperToResolve")
}

void laxperToMark(void) {
	SMSG_DEBUG("laxperToMark")
}

void laxperQCondition(void) {
	SMSG_DEBUG("laxperQCondition")
}

void laxperAbort(void) {
	SMSG_DEBUG("laxperAbort")
}

void laxperAbortQuote(void) {
	SMSG_DEBUG("laxperAbortQuote")
}

void laxperYAbortQuote(void) {
	SMSG_DEBUG("laxperYAbortQuote")
}

void laxperYQError(void) {
	SMSG_DEBUG("laxperYQError")
}

void laxperQError(void) {
	SMSG_DEBUG("laxperQError")
}

void laxperWhere(void) {
	SMSG_DEBUG("laxperWhere")
}

void laxperForget(void) {
	SMSG_DEBUG("laxperForget")
}

void laxperYForget(void) {
	SMSG_DEBUG("laxperYForget")
}

void laxperTrim(void) {
	SMSG_DEBUG("laxperTrim")
}

void laxperFence(void) {
	SMSG_DEBUG("laxperFence")
}

void laxperQuote(void) {
	SMSG_DEBUG("laxperQuoten")
}

void laxperDotQuote(void) {
	SMSG_DEBUG("laxperDotQuote")
}

void laxperCommaQuote(void) {
	SMSG_DEBUG("laxperCommaQuote")
}

void laxperYDotQuote(void) {
	SMSG_DEBUG("laxperYDotQuote")
}

void laxperYQuote(void) {
	SMSG_DEBUG("laxperYQuote")
}

void laxperXCompile(void) {
	SMSG_DEBUG("laxperXCompile")
}

void laxperXTick(void) {
	SMSG_DEBUG("laxperXTick")
}

void laxperTick(void) {
	SMSG_DEBUG("laxperTick")
}

void laxperQMissing(void) {
	SMSG_DEBUG("laxperQMissing")
}

void laxperCrash(void) {
	SMSG_DEBUG("laxperCrash")
}

void laxperControl(void) {
	SMSG_DEBUG("laxperControl")
}

void laxperAscii(void) {
	SMSG_DEBUG("laxperAscii")
}

void laxperDLiteral(void) {
	SMSG_DEBUG("laxperDLiteral")
}

void laxperLiteral(void) {
	SMSG_DEBUG("laxperLiteral")
}

void laxperImmediate(void) {
	SMSG_DEBUG("laxperImmediate")
}

void laxperCompile(void) {
	SMSG_DEBUG("laxperCompile")
}

void laxperEven(void) {
	SMSG_DEBUG("laxperEven")
}

void laxperAlign(void) {
	SMSG_DEBUG("laxperAlign")
}

void laxperCComma(void) {
	SMSG_DEBUG("laxperCComma")
}

void laxperComma(void) {
	SMSG_DEBUG("laxperComma")
}

void laxperAllot(void) {
	SMSG_DEBUG("laxperAllot")
}

void laxperInterpret(void) {
	SMSG_DEBUG("laxperInterpret")
}

void laxperStatus(void) {
	SMSG_DEBUG("laxperStatus")
}

void laxperQStatus(void) {
	SMSG_DEBUG("laxperQStatus")
}

void laxperDefined(void) {
	SMSG_DEBUG("laxperDefined")
}

void laxperQUppercase(void) {
	SMSG_DEBUG("laxperQUppercase")
}

void laxperFind(void) {
	SMSG_DEBUG("laxperFind")
}

void laxperNumThreads(void) {
	SMSG_DEBUG("laxperNumThreads")
}

void laxperYFind(void) {
	SMSG_DEBUG("laxperYFind")
}

void laxperHash(void) {
	SMSG_DEBUG("laxperHash")
}

void laxperViewFrom(void) {
	SMSG_DEBUG("laxperViewFrom")
}

void laxperToView(void) {
	SMSG_DEBUG("laxperToView")
}

void laxperToLink(void) {
	SMSG_DEBUG("laxperToLink")
}

void laxperToName(void) {
	SMSG_DEBUG("laxperToName")
}

void laxperToBody(void) {
	SMSG_DEBUG("laxperToBody")
}

void laxperLinkFrom(void) {
	SMSG_DEBUG("laxperLinkFrom")
}

void laxperNameFrom(void) {
	SMSG_DEBUG("laxperNameFrom")
}

void laxperBodyFrom(void) {
	SMSG_DEBUG("laxperBodyFrom")
}

void laxperLGreaterName(void) {
	SMSG_DEBUG("laxperLGreaterName")
}

void laxperNToLink(void) {
	SMSG_DEBUG("laxperNToLink")
}

void laxperForth83(void) {
	SMSG_DEBUG("laxperForth83")
}

void laxperDoneQ(void) {
	SMSG_DEBUG("laxperDoneQ")
}

void laxperTraverse(void) {
	SMSG_DEBUG("laxperTraverse")
}

void laxperBackslashS(void) {
	SMSG_DEBUG("laxperBackslashS")
}

void laxperParen(void) {
	SMSG_DEBUG("laxperParen")
}

void laxperDotParen(void) {
	SMSG_DEBUG("laxperDotParen")
}

void laxperToType(void) {
	SMSG_DEBUG("laxperToType")
}

void laxperWord(void) {
	SMSG_DEBUG("laxperWord")
}

void laxperTickWord(void) {
	SMSG_DEBUG("laxperTickWord")
}

void laxperParse(void) {
	SMSG_DEBUG("laxperParse")
}

void laxperParseWord(void) {
	SMSG_DEBUG("laxperParseWord")
}

void laxperSource(void) {
	SMSG_DEBUG("laxperSource")
}

void laxperYSource(void) {
	SMSG_DEBUG("laxperYSource")
}

void laxperPlace(void) {
	SMSG_DEBUG("laxperPlace")
}

void laxperSlashString(void) {
	SMSG_DEBUG("laxperSlashString")
}

void laxperScan(void) {
	SMSG_DEBUG("laxperScan")
}

void laxperSkip(void) {
	SMSG_DEBUG("laxperSkip")
}

void laxperDDotR(void) {
	SMSG_DEBUG("laxperDDotR")
}

void laxperDDot(void) {
	SMSG_DEBUG("laxperDDot")
}

void laxperYDDot(void) {
	SMSG_DEBUG("laxperYDDot")
}

void laxperUdDotR(void) {
	SMSG_DEBUG("laxperUdDotR")
}

void laxperUdDot(void) {
	SMSG_DEBUG("laxperUdDot")
}

void laxperYUdDot(void) {
	SMSG_DEBUG("laxperYUdDo")
}

void laxperDotR(void) {
	SMSG_DEBUG("laxperDotR")
}

void laxperDot(void) {
	SMSG_DEBUG("laxperDot")
}

void laxperYDot(void) {
	SMSG_DEBUG("laxperYDot")
}

void laxperUDotR(void) {
	SMSG_DEBUG("laxperUDotR")
}

void laxperUDot(void) {
	SMSG_DEBUG("laxperUDot")
}

void laxperYUDot(void) {
	SMSG_DEBUG("laxperYUDot")
}

void laxperOctal(void) {
	SMSG_DEBUG("laxperOctal")
}

void laxperDecimal(void) {
	SMSG_DEBUG("laxperDecimal")
}

void laxperHex(void) {
	SMSG_DEBUG("laxperHex")
}

void laxperNumS(void) {
	SMSG_DEBUG("laxperNumS")
}

void laxperNum(void) {
	SMSG_DEBUG("laxperNum")
}

void laxperSign(void) {
	SMSG_DEBUG("laxperSign")
}

void laxperNumGreater(void) {
	SMSG_DEBUG("laxperNumGreater")
}

void laxperLessNum(void) {
	SMSG_DEBUG("laxperLessNum")
}

void laxperHold(void) {
	SMSG_DEBUG("laxperHold")
}

void laxperNumber(void) {
	SMSG_DEBUG("laxperNumber")
}

void laxperYNumber(void) {
	SMSG_DEBUG("laxperYNumber")
}

void laxperNumberQ(void) {
	SMSG_DEBUG("laxperNumberQ")
}

void laxperYNumberQ(void) {
	SMSG_DEBUG("laxperYNumberQ")
}

void laxperConvert(void) {
	SMSG_DEBUG("laxperConvert")
}

void laxperDoubleQ(void) {
	SMSG_DEBUG("laxperDoubleQ")
}

void laxperDigit(void) {
	SMSG_DEBUG("laxperDigit")
}

void laxperLoad(void) {
	SMSG_DEBUG("laxperLoad")
}

void laxperYLoad(void) {
	SMSG_DEBUG("laxperYLoad")
}

void laxperDefault(void) {
	SMSG_DEBUG("laxperDefault")
}

void laxperViewNum(void) {
	SMSG_DEBUG("laxperViewNum")
}

void laxperFlush(void) {
	SMSG_DEBUG("laxperFlush")
}

void laxperSaveBuffers(void) {
	SMSG_DEBUG("laxperSaveBuffers")
}

void laxperEmptyBuffers(void) {
	SMSG_DEBUG("laxperEmptyBuffers")
}

void laxperInBlock(void) {
	SMSG_DEBUG("laxperInBlock")
}

void laxperBlock(void) {
	SMSG_DEBUG("laxperBlock")
}

void laxperYBlock(void) {
	SMSG_DEBUG("laxperYBlock")
}

void laxperBuffer(void) {
	SMSG_DEBUG("laxperBuffer")
}

void laxperYBuffer(void) {
	SMSG_DEBUG("laxperYBuffer")
}

void laxperMissing(void) {
	SMSG_DEBUG("laxperMissing")
}

void laxperDiscord(void) {
	SMSG_DEBUG("laxperDiscord")
}

void laxperUpdate(void) {
	SMSG_DEBUG("laxperUpdate")
}

void laxperAbsentQ(void) {
	SMSG_DEBUG("laxperAbsentQ")
}

void laxperLatestQ(void) {
	SMSG_DEBUG("laxperLatestQ")
}

void laxperCapacity(void) {
	SMSG_DEBUG("laxperCapacity")
}

void laxperDos(void) {
	SMSG_DEBUG("laxperDos")
}

void laxperSwitch(void) {
	SMSG_DEBUG("laxperSwitch")
}

void laxperFileQ(void) {
	SMSG_DEBUG("laxperFileQ")
}

void laxperDotFile(void) {
	SMSG_DEBUG("laxperDotFile")
}

void laxperWriteBlock(void) {
	SMSG_DEBUG("laxperWriteBlock")
}

void laxperReadBlock(void) {
	SMSG_DEBUG("laxperReadBlock")
}

void laxperToUpdate(void) {
	SMSG_DEBUG("laxperToUpdate")
}

void laxperBuffersNum(void) {
	SMSG_DEBUG("laxperBuffersNum")
}

void laxperToEnd(void) {
	SMSG_DEBUG("laxperToEnd")
}

void laxperToBuffers(void) {
	SMSG_DEBUG("laxperToBuffers")
}

void laxperInitR0(void) {
	SMSG_DEBUG("laxperInitR0")
}

void laxperFirst(void) {
	SMSG_DEBUG("laxperFirst")
}

void laxperToSize(void) {
	SMSG_DEBUG("laxperToSize")
}

void laxperLimit(void) {
	SMSG_DEBUG("laxperLimit")
}

void laxperDiskError(void) {
	SMSG_DEBUG("laxperDiskError")
}

void laxperBSlashFcb(void) {
	SMSG_DEBUG("laxperBSlashFcb")
}

void laxperRecSlashBlk(void) {
	SMSG_DEBUG("laxperRecSlashBlk")
}

void laxperBSlashRec(void) {
	SMSG_DEBUG("laxperBSlashRec")
}

void laxperBSlashBuf(void) {
	SMSG_DEBUG("laxperBSlashBuf")
}

void laxperNumBuffers(void) {
	SMSG_DEBUG("laxperNumBuffers")
}

void laxperQuery(void) {
	SMSG_DEBUG("laxperQuery")
}

void laxperTib(void) {
	SMSG_DEBUG("laxperTib")
}

void laxperExpect(void) {
	SMSG_DEBUG("laxperExpect")
}

void laxperCcForth(void) {
	SMSG_DEBUG("laxperCcForth")
}

void laxperCc(void) {
	SMSG_DEBUG("laxperCc")
}

void laxperDelIn(void) {
	SMSG_DEBUG("laxperDelIn")
}

void laxperChar(void) {
	SMSG_DEBUG("laxperChar")
}

void laxperYChar(void) {
	SMSG_DEBUG("laxperYChar")
}

void laxperCrIn(void) {
	SMSG_DEBUG("laxperCrIn")
}

void laxperPIn(void) {
	SMSG_DEBUG("laxperPIn")
}

void laxperResIn(void) {
	SMSG_DEBUG("laxperResIn")
}

void laxperBackUp(void) {
	SMSG_DEBUG("laxperBackUp")
}

void laxperYDelIn(void) {
	SMSG_DEBUG("laxperYDelIn")
}

void laxperBsIn(void) {
	SMSG_DEBUG("laxperBsIn")
}

void laxperBeep(void) {
	SMSG_DEBUG("laxperBeep")
}

void laxperBackspaces(void) {
	SMSG_DEBUG("laxperBackspaces")
}

void laxperSpaces(void) {
	SMSG_DEBUG("laxperSpaces")
}

void laxperSpace(void) {
	SMSG_DEBUG("laxperSpace")
}

void laxperType(void) {
	SMSG_DEBUG("laxperType")
}

void laxperCrLf(void) {
	SMSG_DEBUG("laxperCrLf")
}

void laxperYEmit(void) {
	SMSG_DEBUG("laxperYEmit")
}

void laxperYPrint(void) {
	SMSG_DEBUG("laxperYPrint")
}

void laxperPrStat(void) {
	SMSG_DEBUG("laxperPrStat")
}

void laxperCr(void) {
	SMSG_DEBUG("laxperCr")
}

void laxperKey(void) {
	SMSG_DEBUG("laxperKey")
}

void laxperKeyQ(void) {
	SMSG_DEBUG("laxperKeyQ")
}

void laxperYConsole(void) {
	SMSG_DEBUG("laxperYConsole")
}

void laxperYKey(void) {
	SMSG_DEBUG("laxperYKey")
}

void laxperYKeyQ(void) {
	SMSG_DEBUG("laxperYKeyQ")
}

void laxperBdos(void) {
	SMSG_DEBUG("laxperBdos")
}

void laxperCompare(void) {
	SMSG_DEBUG("laxperCompare")
}

void laxperCapsComp(void) {
	SMSG_DEBUG("laxperCapsComp")
}

void laxperComp(void) {
	SMSG_DEBUG("laxperComp")
}

void laxperMinusTrailing(void) {
	SMSG_DEBUG("laxperMinusTrailing")
}

void laxperPad(void) {
	SMSG_DEBUG("laxperPad")
}

void laxperHere(void) {
	SMSG_DEBUG("laxperHere")
}

void laxperUpper(void) {
	SMSG_DEBUG("laxperUpper")
}

void laxperUpc(void) {
	SMSG_DEBUG("laxperUpc")
}

void laxperMove(void) {
	SMSG_DEBUG("laxperMove")
}

void laxperLength(void) {
	SMSG_DEBUG("laxperLength")
}

void laxperCount(void) {
	SMSG_DEBUG("laxperCount")
}

void laxperBlank(void) {
	SMSG_DEBUG("laxperBlank")
}

void laxperErase(void) {
	SMSG_DEBUG("laxperErase")
}

void laxperFill(void) {
	SMSG_DEBUG("laxperFill")
}

void laxperCaps(void) {
	SMSG_DEBUG("laxperCaps")
}

void laxperBell(void) {
	SMSG_DEBUG("laxperBell")
}

void laxperBs(void) {
	SMSG_DEBUG("laxperBs")
}

void laxperBl(void) {
	SMSG_DEBUG("laxperBl")
}

void laxperEndQ(void) {
	SMSG_DEBUG("laxperEndQ")
}

void laxperNumTib(void) {
	SMSG_DEBUG("laxperNumTib")
}

void laxperSpan(void) {
	SMSG_DEBUG("laxperSpan")
}

void laxperToIn(void) {
	SMSG_DEBUG("laxperToIn")
}

void laxperBlk(void) {
	SMSG_DEBUG("laxperBlk")
}

void laxperVocLink(void) {
	SMSG_DEBUG("laxperVocLink")
}

void laxperWidth(void) {
	SMSG_DEBUG("laxperWidth")
}

void laxperTickTib(void) {
	SMSG_DEBUG("laxperTickTib")
}

void laxperContext(void) {
	SMSG_DEBUG("laxperContext")
}

void laxperNumVocs(void) {
	SMSG_DEBUG("laxperNumVocs")
}

void laxperCurrent(void) {
	SMSG_DEBUG("laxperCurrent")
}

void laxperCsp(void) {
	SMSG_DEBUG("laxperCsp")
}

void laxperLast(void) {
	SMSG_DEBUG("laxperLast")
}

void laxperRNum(void) {
	SMSG_DEBUG("laxperRNum")
}

void laxperDpl(void) {
	SMSG_DEBUG("laxperDpl")
}

void laxperWarning(void) {
	SMSG_DEBUG("laxperWarning")
}

void laxperState(void) {
	SMSG_DEBUG("laxperState")
}

void laxperPrior(void) {
	SMSG_DEBUG("laxperPrior")
}

void laxperScr(void) {
	SMSG_DEBUG("laxperScr")
}

void laxperEmit(void) {
	SMSG_DEBUG("laxperEmit")
}

void laxperPrinting(void) {
	SMSG_DEBUG("laxperPrinting")
}

void laxperInFile(void) {
	SMSG_DEBUG("laxperInFile")
}

void laxperFile(void) {
	SMSG_DEBUG("laxperFile")
}

void laxperHld(void) {
	SMSG_DEBUG("laxperHld")
}

void laxperBase(void) {
	SMSG_DEBUG("laxperBase")
}

void laxperOffset(void) {
	SMSG_DEBUG("laxperOffset")
}

void laxperNumLine(void) {
	SMSG_DEBUG("laxperOffset")
}

void laxperNumOut(void) {
	SMSG_DEBUG("laxperNumOut")
}

void laxperDP(void) {
	SMSG_DEBUG("laxperDP")
}

void laxperRP0(void) {
	SMSG_DEBUG("laxperRP0")
}

void laxperSP0(void) {
	SMSG_DEBUG("laxperSP0")
}

void laxperLink(void) {
	SMSG_DEBUG("laxperLink")
}

void laxperEntry(void) {
	SMSG_DEBUG("laxperEntry")
}

void laxperTos(void) {
	SMSG_DEBUG("laxperTos")
}

void laxperStarSlash(void) {
	SMSG_DEBUG("laxperStarSlash")
}

void laxperStarSlashMod(void) {
	SMSG_DEBUG("laxperStarSlashMod")
}

void laxperMod(void) {
	SMSG_DEBUG("laxperMod")
}

void laxperSlash(void) {
	SMSG_DEBUG("laxperSlash")
}

void laxperSlashMod(void) {
	SMSG_DEBUG("laxperSlashMod")
}

void laxperStar(void) {
	SMSG_DEBUG("laxperStar")
}

void laxperMuSlashMod(void) {
	SMSG_DEBUG("laxperMuSlashMod")
}

void laxperMSlashMod(void) {
	SMSG_DEBUG("laxperMSlashMod")
}

void laxperStarD(void) {
	SMSG_DEBUG("laxperStarD")
}

void laxperDMax(void) {
	SMSG_DEBUG("laxperDMax")
}

void laxperDMin(void) {
	SMSG_DEBUG("laxperDMin")
}

void laxperDGreater(void) {
	SMSG_DEBUG("laxperDGreater")
}

void laxperDLess(void) {
	SMSG_DEBUG("laxperDLess")
}

void laxperDULess(void) {
	SMSG_DEBUG("laxperDULess")
}

void laxperDEqual(void) {
	SMSG_DEBUG("laxperDEqual")
}

void laxperD0Equal(void) {
	SMSG_DEBUG("laxperD0Equal")
}

void laxperQDNegate(void) {
	SMSG_DEBUG("laxperQDNegate")
}

void laxperDMinus(void) {
	SMSG_DEBUG("laxperDMinus")
}

void laxperD2Slash(void) {
	SMSG_DEBUG("laxperD2Slash")
}

void laxperD2Star(void) {
	SMSG_DEBUG("laxperD2Star")
}

void laxperDAbs(void) {
	SMSG_DEBUG("laxperDAbs")
}

void laxperSToD(void) {
	SMSG_DEBUG("laxperSToD")
}

void laxperDNegate(void) {
	SMSG_DEBUG("laxperDNegate")
}

void laxperDPLus(void) {
	SMSG_DEBUG("laxperDPLus")
}

void laxperTwoRot(void) {
	SMSG_DEBUG("laxperTwoRot")
}

void laxperFourDup(void) {
	SMSG_DEBUG("laxperFourDup")
}

void laxperThreeDup(void) {
	SMSG_DEBUG("laxperThreeDup")
}

void laxperTwoOver(void) {
	SMSG_DEBUG("laxperTwoOver")
}

void laxperTwoSwap(void) {
	SMSG_DEBUG("laxperTwoSwap")
}

void laxperTwoDup(void) {
	SMSG_DEBUG("laxperTwoDup")
}

void laxperTwoDrop(void) {
	SMSG_DEBUG("laxperTwoDrop")
}

void laxperTwoStore(void) {
	SMSG_DEBUG("laxperTwoStore")
}

void laxperTwoFetch(void) {
	SMSG_DEBUG("laxperTwoFetch")
}

void laxperWithin(void) {
	SMSG_DEBUG("laxperWithin")
}

void laxperBetween(void) {
	SMSG_DEBUG("laxperBetween")
}

void laxperMax(void) {
	SMSG_DEBUG("laxperMax")
}

void laxperMin(void) {
	SMSG_DEBUG("laxperMin")
}

void laxperGreater(void) {
	SMSG_DEBUG("laxperGreater")
}

void laxperLess(void) {
	SMSG_DEBUG("laxperLess")
}

void laxperUGreater(void) {
	SMSG_DEBUG("laxperUGreater")
}

void laxperULess(void) {
	SMSG_DEBUG("laxperULess")
}

void laxperQNegate(void) {
	SMSG_DEBUG("laxperQNegate")
}

void laxperUnequal(void) {
	SMSG_DEBUG("laxperUnequal")
}

void laxperEqual(void) {
	SMSG_DEBUG("laxperEqual")
}

void laxperZeroUnequal(void) {
	SMSG_DEBUG("laxperZeroUnequal")
}

void laxperZeroGreater(void) {
	SMSG_DEBUG("laxperZeroGreater")
}

void laxperZeroLess(void) {
	SMSG_DEBUG("laxperZeroLess")
}

void laxperZeroEqual(void) {
	SMSG_DEBUG("laxperZeroEqual")
}

void laxperUmSlashMod(void) {
	SMSG_DEBUG("laxperUmSlashMod")
}

void laxperUStarD(void) {
	SMSG_DEBUG("laxperUStarD")
}

void laxperUmStar(void) {
	SMSG_DEBUG("laxperUmStar")
}

void laxperTwoMinus(void) {
	SMSG_DEBUG("laxperTwoMinus")
}

void laxperOneMinus(void) {
	SMSG_DEBUG("laxperOneMinus")
}

void laxperTwoPlus(void) {
	SMSG_DEBUG("laxperTwoPlus")
}

void laxperOnePlus(void) {
	SMSG_DEBUG("laxperOnePlus")
}

void laxperEightStar(void) {
	SMSG_DEBUG("laxperEightStar")
}

void laxperU2Slash(void) {
	SMSG_DEBUG("laxperU2Slash")
}

void laxperTwoSlash(void) {
	SMSG_DEBUG("laxperTwoSlash")
}

void laxperTwoStar(void) {
	SMSG_DEBUG("laxperTwoStar")
}

void laxperThree(void) {
	SMSG_DEBUG("laxperThree")
}

void laxperTwo(void) {
	SMSG_DEBUG("laxperTwo")
}

void laxperOne(void) {
	SMSG_DEBUG("laxperOne")
}

void laxperZero(void) {
	SMSG_DEBUG("laxperZero")
}

void laxperPlusStore(void) {
	SMSG_DEBUG("laxperPlusStore")
}

void laxperAbs(void) {
	SMSG_DEBUG("laxperAbs")
}

void laxperMinus(void) {
	SMSG_DEBUG("laxperMinus")
}

void laxperNegate(void) {
	SMSG_DEBUG("laxperNegate")
}

void laxperPlus(void) {
	SMSG_DEBUG("laxperPlus")
}

void laxperOff(void) {
	SMSG_DEBUG("laxperOff")
}

void laxperOn(void) {
	SMSG_DEBUG("laxperOn")
}

void laxperCToggle(void) {
	SMSG_DEBUG("laxperCToggle")
}

void laxperCReset(void) {
	SMSG_DEBUG("laxperCReset")
}

void laxperCSet(void) {
	SMSG_DEBUG("laxperCSet")
}

void laxperFalse(void) {
	SMSG_DEBUG("laxperFalse")
}

void laxperTrue(void) {
	SMSG_DEBUG("laxperTrue")
}

void laxperNot(void) {
	SMSG_DEBUG("laxperNot")
}

void laxperYor(void) {
	SMSG_DEBUG("laxperYor")
}

void laxperOr(void) {
	SMSG_DEBUG("laxperOr")
}

void laxperAnd(void) {
	SMSG_DEBUG("laxperAnd")
}

void laxperRoll(void) {
	SMSG_DEBUG("laxperRoll")
}

void laxperPick(void) {
	SMSG_DEBUG("laxperPick")
}

void laxperRFetch(void) {
	SMSG_DEBUG("laxperRFetch")
}

void laxperToR(void) {
	SMSG_DEBUG("laxperToR")
}

void laxperRFrom(void) {
	SMSG_DEBUG("laxperRFrom")
}

void laxperQDup(void) {
	SMSG_DEBUG("laxperQDup")
}

void laxperFlip(void) {
	SMSG_DEBUG("laxperFlip")
}

void laxperMinusRot(void) {
	SMSG_DEBUG("laxperMinusRot")
}

void laxperRot(void) {
	SMSG_DEBUG("laxperRot")
}

void laxperNip(void) {
	SMSG_DEBUG("laxperNip")
}

void laxperTuck(void) {
	SMSG_DEBUG("laxperTuck")
}

void laxperOver(void) {
	SMSG_DEBUG("laxperOver")
}

void laxperSwap(void) {
	SMSG_DEBUG("laxperSwap")
}

void laxperDup(void) {
	SMSG_DEBUG("laxperDup")
}

void laxperDrop(void) {
	SMSG_DEBUG("laxperDrop")
}

void laxperRPStore(void) {
	SMSG_DEBUG("laxperRPStore")
}

void laxperRPFetch(void) {
	SMSG_DEBUG("laxperRPFetch")
}

void laxperSPStore(void) {
	SMSG_DEBUG("laxperSPStore")
}

void laxperSPFetch(void) {
	SMSG_DEBUG("laxperSPFetch")
}

void laxperCMoveFrom(void) {
	SMSG_DEBUG("laxperCMoveFrom")
}

void laxperCMove(void) {
	SMSG_DEBUG("laxperCMove")
}

void laxperCStore(void) {
	SMSG_DEBUG("laxperCStore")
}

void laxperCFetch(void) {
	SMSG_DEBUG("laxperCFetch")
}

void laxperStore(void) {
	SMSG_DEBUG("laxperStore")
}

void laxperFetch(void) {
	SMSG_DEBUG("laxperFetch")
}

void laxperYQLeave(void) {
	SMSG_DEBUG("laxperYQLeave")
}

void laxperYLeave(void) {
	SMSG_DEBUG("laxperYLeave")
}

void laxperJ(void) {
	SMSG_DEBUG("laxperJ")
}

void laxperI(void) {
	SMSG_DEBUG("laxperI")
}

void laxperPause(void) {
	SMSG_DEBUG("laxperPause")
}

void laxperNoop(void) {
	SMSG_DEBUG("laxperNoop")
}

void laxperGo(void) {
	SMSG_DEBUG("laxperGo")
}

void laxperPerform(void) {
	SMSG_DEBUG("laxperPerform")
}

void laxperExecute(void) {
	SMSG_DEBUG("laxperExecute")
}

void laxperToNext(void) {
	SMSG_DEBUG("laxperToNext")
}

void laxperBounds(void) {
	SMSG_DEBUG("laxperBounds")
}

void laxperYQDo(void) {
	SMSG_DEBUG("laxperYQDo")
}

void laxperYDo(void) {
	SMSG_DEBUG("laxperYDo")
}

void laxperYPlusLoop(void) {
	SMSG_DEBUG("laxperYPlusLoop")
}

void laxperYLoop(void) {
	SMSG_DEBUG("laxperYLoop")
}

void laxperQBranch(void) {
	SMSG_DEBUG("laxperQBranch")
}

void laxperBranch(void) {
	SMSG_DEBUG("laxperBranch")
}

void laxperYLit(void) {
	SMSG_DEBUG("laxperYLit")
}

void laxperUp(void) {
	SMSG_DEBUG("laxperUp")
}

void laxperUnnest(void) {
	SMSG_DEBUG("laxperUnnest")
}

void laxperExit(void) {
	SMSG_DEBUG("laxperExit")
}

void laxperForth(void) {
	SMSG_DEBUG("laxperForth")
}

#endif

#if (H2O_FORTH_PRIMITIVES == LAXONPERRY_FORTH) || \
    (H2O_FORTH_PRIMITIVES == LAXONPERRY_PC_FORTH)
void laxperPStore(void) {
	SMSG_DEBUG("laxperPStore")
}

void laxperPFetch(void) {
	SMSG_DEBUG("laxperPFetch")
}

void laxperIntNum(void) {
	SMSG_DEBUG("laxperIntNum")
}

void laxperCpu8086DotBlk(void) {
	SMSG_DEBUG("laxperCpu8086DotBlk")
}

void laxperExtend86DotBlk(void) {
	SMSG_DEBUG("laxperExtend86DotBlk")
}

void laxperKernel86DotBlk(void) {
	SMSG_DEBUG("laxperKernel86DotBlk")
}
#endif

#if (H2O_FORTH_PRIMITIVES == LAXONPERRY_FORTH) || \
    (H2O_FORTH_PRIMITIVES == LAXONPERRY_CPM_FORTH)
void laxperCpu8080DotBlk(void) {
	SMSG_DEBUG("laxperCpu8080DotBlk")
}

void laxperExtend80DotBlk(void) {
	SMSG_DEBUG("laxperExtend80DotBlk")
}

void laxperKernel80DotBlk(void) {
	SMSG_DEBUG("laxperKernel80DotBlk")
}

void laxperBios(void) {
	SMSG_DEBUG("laxperBios")
}

void laxperRP(void) {
	SMSG_DEBUG("laxperRP")
}
#endif

#if (H2O_FORTH_PRIMITIVES == LAXONPERRY_FORTH) || \
	(H2O_FORTH_PRIMITIVES == LAXONPERRY_CPM68K_FORTH)
void laxperCpu68000DotBlk(void) {
	SMSG_DEBUG("laxperCpu68000DotBlk")
}

void laxperExtend68DotBlk(void) {
	SMSG_DEBUG("laxperExtend68DotBlk")
}

void laxperKernel68DotBlk(void) {
	SMSG_DEBUG("laxperKernel68DotBlk")
}

/* unchecked: */
void laxperBios(void) {
	SMSG_DEBUG("laxperBios")
}

void laxperRP(void) {
	SMSG_DEBUG("laxperRP")
}

#endif

#endif
