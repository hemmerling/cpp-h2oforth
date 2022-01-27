#ifndef H2OLAPE2
#define H2OLAPE2

/* The "Laxon & Perry 2.0" ( FORTH-83 ) FORTH */

/* Primitives */

#if (H2O_FORTH_PRIMITIVES == LAXONPERRY_FORTH) || \
    (H2O_FORTH_PRIMITIVES == LAXONPERRY_PC_FORTH) || \
    (H2O_FORTH_PRIMITIVES == LAXONPERRY_CPM_FORTH) || \
	(H2O_FORTH_PRIMITIVES == LAXONPERRY_CPM68K_FORTH)
void laxperEmpty(void) {
#if defined (__DEBUG__)
	printf("laxperEmpty\n");
#endif
}

void laxperMark(void) {
#if defined (__DEBUG__)
	printf("laxperMark\n");
#endif
}

void laxperHello(void) {
#if defined (__DEBUG__)
	printf("laxperHello\n");
#endif
}

void laxperBackgroundColon(void) {
#if defined (__DEBUG__)
	printf("laxperBackgroundColon\n");
#endif
}

void laxperActivate(void) {
#if defined (__DEBUG__)
	printf("laxperActivate\n");
#endif
}

void laxperSetTask(void){
#if defined (__DEBUG__)
	printf("laxperSetTask\n");
#endif
}

void laxperTaskColon(void){
#if defined (__DEBUG__)
	printf("laxperTaskColon\n");
#endif
}

void laxperResume(void){
#if defined (__DEBUG__)
	printf("laxperResume\n");
#endif
}

void laxperDebug(void){
#if defined (__DEBUG__)
	printf("laxperDebug\n");
#endif
}

void laxperListing(void){
#if defined (__DEBUG__)
	printf("laxperListing\n");
#endif
}

void laxperShow(void){
#if defined (__DEBUG__)
	printf("laxperShow\n");
#endif
}

void laxperYSemit(void){
#if defined (__DEBUG__)
	printf("laxperYSemit\n");
#endif
}

void laxperYPage(void){
#if defined (__DEBUG__)
	printf("laxperYPage\n");
#endif
}

void laxperFormFeed(void){
#if defined (__DEBUG__)
	printf("laxperFormFeed\n");
#endif
}

void laxperPage(void){
#if defined (__DEBUG__)
	printf("laxperPage\n");
#endif
}

void laxperNumPage(void){
#if defined (__DEBUG__)
	printf("laxperNumPage\n");
#endif
}

void laxperLogo(void){
#if defined (__DEBUG__)
	printf("laxperLogo\n");
#endif
}

void laxperLSlashPage(void){
#if defined (__DEBUG__)
	printf("laxperLSlashPage\n");
#endif
}

void laxperFooting(void){
#if defined (__DEBUG__)
	printf("laxperFooting\n");
#endif
}

void laxperInitPr(void){
#if defined (__DEBUG__)
	printf("laxperInitPr\n");
#endif
}

void laxperEpson(void){
#if defined (__DEBUG__)
	printf("laxperEpson\n");
#endif
}

void laxperSee(void){
#if defined (__DEBUG__)
	printf("laxperSee\n");
#endif
}

void laxperYSee(void){
#if defined (__DEBUG__)
	printf("laxperYSee\n");
#endif
}

void laxperAssociativeColon(void){
#if defined (__DEBUG__)
	printf("laxperAssociativeColon\n");
#endif
}

void laxperCaseColon(void){
#if defined (__DEBUG__)
	printf("laxperCaseColon\n");
#endif
}

void laxperMap(void){
#if defined (__DEBUG__)
	printf("laxperMap\n");
#endif
}

void laxperOut(void){
#if defined (__DEBUG__)
	printf("laxperOut\n");
#endif
}

void laxperDL(void){
#if defined (__DEBUG__)
	printf("laxperDL\n");
#endif
}

void laxperDU(void){
#if defined (__DEBUG__)
	printf("laxperDU\n");
#endif
}

void laxperDump(void){
#if defined (__DEBUG__)
	printf("laxperDump\n");
#endif
}

void laxperDotHead(void){
#if defined (__DEBUG__)
	printf("laxperDotHead\n");
#endif
}

void laxperQDotA(void){
#if defined (__DEBUG__)
	printf("laxperQDotA\n");
#endif
}

void laxperQDotN(void){
#if defined (__DEBUG__)
	printf("laxperQDotN\n");
#endif
}

void laxperDln(void){
#if defined (__DEBUG__)
	printf("laxperDln\n");
#endif
}

void laxperEmitDot(void){
#if defined (__DEBUG__)
	printf("laxperEmitDot\n");
#endif
}

void laxperDDotTwo(void){
#if defined (__DEBUG__)
	printf("laxperDDotTwo\n");
#endif
}

void laxperDotTwo(void){
#if defined (__DEBUG__)
	printf("laxperDotTwo\n");
#endif
}

void laxperA(void){
#if defined (__DEBUG__)
	printf("laxperA\n");
#endif
}

void laxperShadow(void){
#if defined (__DEBUG__)
	printf("laxperShadow\n");
#endif
}

void laxperYWhere(void){
#if defined (__DEBUG__)
	printf("laxperYWhere\n");
#endif
}

void laxperFix(void){
#if defined (__DEBUG__)
	printf("laxperFix\n");
#endif
}

void laxperEdit(void){
#if defined (__DEBUG__)
	printf("laxperEdit\n");
#endif
}

void laxperEd(void){
#if defined (__DEBUG__)
	printf("laxperEd\n");
#endif
}

void laxperDone(void){
#if defined (__DEBUG__)
	printf("laxperDone\n");
#endif
}

void laxperEditor(void){
#if defined (__DEBUG__)
	printf("laxperEditor\n");
#endif
}

void laxperDark(void){
#if defined (__DEBUG__)
	printf("laxperDark\n");
#endif
}

void laxperAt(void){
#if defined (__DEBUG__)
	printf("laxperAt\n");
#endif
}

void laxperMinusLine(void){
#if defined (__DEBUG__)
	printf("laxperMinusLine\n");
#endif
}

void laxperBlot(void){
#if defined (__DEBUG__)
	printf("laxperBlot\n");
#endif
}

void laxperReplace(void){
#if defined (__DEBUG__)
	printf("laxperReplace\n");
#endif
}

void laxperInsert(void){
#if defined (__DEBUG__)
	printf("laxperInsert\n");
#endif
}

void laxperDelete(void){
#if defined (__DEBUG__)
	printf("laxperDelete\n");
#endif
}

void laxperSearch(void){
#if defined (__DEBUG__)
	printf("laxperSearch\n");
#endif
}

void laxperScanFirst(void){
#if defined (__DEBUG__)
	printf("laxperScanFirst\n");
#endif
}

void laxperFound(void){
#if defined (__DEBUG__)
	printf("laxperFound\n");
#endif
}

void laxperTo(void){
#if defined (__DEBUG__)
	printf("laxperTo\n");
#endif
}

void laxperCorvey(void){
#if defined (__DEBUG__)
	printf("laxperCorvey\n");
#endif
}

void laxperYConvey(void){
#if defined (__DEBUG__)
	printf("laxperYConvey\n");
#endif
}

void laxperDotTo(void){
#if defined (__DEBUG__)
	printf("laxperDotTo\n");
#endif
}

void laxperHop(void){
#if defined (__DEBUG__)
	printf("laxperHop\n");
#endif
}

void laxperConveyCopy(void){
#if defined (__DEBUG__)
	printf("laxperConveyCopy\n");
#endif
}

void laxperUSlashD(void){
#if defined (__DEBUG__)
	printf("laxperUSlashD\n");
#endif
}

void laxperHopped(void){
#if defined (__DEBUG__)
	printf("laxperHopped\n");
#endif
}

void laxperView(void){
#if defined (__DEBUG__)
	printf("laxperView\n");
#endif
}

void laxperFetchView(void){
#if defined (__DEBUG__)
	printf("laxperFetchView\n");
#endif
}

void laxperCopy(void){
#if defined (__DEBUG__)
	printf("laxperCopy\n");
#endif
}

void laxperYCopy(void){
#if defined (__DEBUG__)
	printf("laxperYCopy\n");
#endif
}

void laxperEstablish(void){
#if defined (__DEBUG__)
	printf("laxperEstablish\n");
#endif
}

void laxperL(void){
#if defined (__DEBUG__)
	printf("laxperL\n");
#endif
}

void laxperB(void){
#if defined (__DEBUG__)
	printf("laxperB\n");
#endif
}

void laxperN(void){
#if defined (__DEBUG__)
	printf("laxperN\n");
#endif
}

void laxperColonColon(void){
#if defined (__DEBUG__)
	printf("laxperColonColon\n");
#endif
}

void laxperMany(void){
#if defined (__DEBUG__)
	printf("laxperMany\n");
#endif
}

void laxperTimes(void){
#if defined (__DEBUG__)
	printf("laxperTimes\n");
#endif
}

void laxperNumTimes(void){
#if defined (__DEBUG__)
	printf("laxperNumTimes\n");
#endif
}

void laxperWords(void){
#if defined (__DEBUG__)
	printf("laxperWords\n");
#endif
}

void laxperLargest(void){
#if defined (__DEBUG__)
	printf("laxperLargest\n");
#endif
}

void laxperInd(void){
#if defined (__DEBUG__)
	printf("laxperInd\n");
#endif
}

void laxperIndex(void){
#if defined (__DEBUG__)
	printf("laxperIndex\n");
#endif
}

void laxperDotLineZero(void){
#if defined (__DEBUG__)
	printf("laxperDotLineZero\n");
#endif
}

void laxperTriad(void){
#if defined (__DEBUG__)
	printf("laxperTriad\n");
#endif
}

void laxperList(void){
#if defined (__DEBUG__)
	printf("laxperList\n");
#endif
}

void laxperDotScr(void){
#if defined (__DEBUG__)
	printf("laxperDotScr\n");
#endif
}

void laxperQCr(void){
#if defined (__DEBUG__)
	printf("laxperQCr\n");
#endif
}

void laxperQLine(void){
#if defined (__DEBUG__)
	printf("laxperQLine\n");
#endif
}

void laxperRMargin(void){
#if defined (__DEBUG__)
	printf("laxperRMargin\n");
#endif
}

void laxperLMargin(void){
#if defined (__DEBUG__)
	printf("laxperLMargin\n");
#endif
}

void laxperHidden(void){
#if defined (__DEBUG__)
	printf("laxperHidden\n");
#endif
}

void laxperZeroLessEqual(void){
#if defined (__DEBUG__)
	printf("laxperZeroLessEqual\n");
#endif
}

void laxperZeroGreaterEqual(void){
#if defined (__DEBUG__)
	printf("laxperZeroGreaterEqual\n");
#endif
}

void laxperGreaterEqual(void){
#if defined (__DEBUG__)
	printf("laxperGreaterEqual\n");
#endif
}

void laxperLessEqual(void){
#if defined (__DEBUG__)
	printf("laxperLessEqual\n");
#endif
}

void laxperUGreaterEqual(void){
#if defined (__DEBUG__)
	printf("laxperUGreaterEqual\n");
#endif
}

void laxperULessEqual(void){
#if defined (__DEBUG__)
	printf("laxperULessEqual\n");
#endif
}

void laxperMs(void){
#if defined (__DEBUG__)
	printf("laxperMs\n");
#endif
}

void laxperFudge(void){
#if defined (__DEBUG__)
	printf("laxperFudge\n");
#endif
}

void laxperPCStore(void){
#if defined (__DEBUG__)
	printf("laxperPCStore\n");
#endif
}

void laxperPCFetch(void){
#if defined (__DEBUG__)
	printf("laxperPCFetch\n");
#endif
}

void laxperMulti(void){
#if defined (__DEBUG__)
	printf("laxperMulti\n");
#endif
}

void laxperSingle(void){
#if defined (__DEBUG__)
	printf("laxperSingle\n");
#endif
}

void laxperStop(void){
#if defined (__DEBUG__)
	printf("laxperStop\n");
#endif
}

void laxperWake(void){
#if defined (__DEBUG__)
	printf("laxperWake\n");
#endif
}

void laxperSleep(void){
#if defined (__DEBUG__)
	printf("laxperSleep\n");
#endif
}

void laxperStoreLink(void){
#if defined (__DEBUG__)
	printf("laxperStoreLink\n");
#endif
}

void laxperFetchLink(void){
#if defined (__DEBUG__)
	printf("laxperFetchLink\n");
#endif
}

void laxperLocal(void){
#if defined (__DEBUG__)
	printf("laxperLocal\n");
#endif
}

void laxperRestart(void){
#if defined (__DEBUG__)
	printf("laxperRestart\n");
#endif
}

void laxperYPause(void){
#if defined (__DEBUG__)
	printf("laxperYPause\n");
#endif
}

void laxperUnbug(void){
#if defined (__DEBUG__)
	printf("laxperUnbug\n");
#endif
}

void laxperBug(void){
#if defined (__DEBUG__)
	printf("laxperBug\n");
#endif
}

void laxperDoesQ(void){
#if defined (__DEBUG__)
	printf("laxperDoesQ\n");
#endif
}

void laxperDoesSize(void){
#if defined (__DEBUG__)
	printf("laxperDoesSize\n");
#endif
}

void laxperDoesOp(void){
#if defined (__DEBUG__)
	printf("laxperDoesOp\n");
#endif
}

void laxperLabel(void){
#if defined (__DEBUG__)
	printf("laxperLabel\n");
#endif
}

void laxperUtilityDotBlk(void){
#if defined (__DEBUG__)
	printf("laxperUtilityDotBlk\n");
#endif
}

void laxperViews(void){
#if defined (__DEBUG__)
	printf("laxperViews\n");
#endif
}

void laxperViewFiles(void){
#if defined (__DEBUG__)
	printf("laxperViewFiles\n");
#endif
}

void laxperSaveSystem(void){
#if defined (__DEBUG__)
	printf("laxperSaveSystem\n");
#endif
}

void laxperForm(void){
#if defined (__DEBUG__)
	printf("laxperForm\n");
#endif
}

void laxperOpen(void){
#if defined (__DEBUG__)
	printf("laxperOpen\n");
#endif
}

void laxperDefine(void){
#if defined (__DEBUG__)
	printf("laxperDefine\n");
#endif
}

void laxperBColon(void){
#if defined (__DEBUG__)
	printf("laxperBColon\n");
#endif
}

void laxperAColon(void){
#if defined (__DEBUG__)
	printf("laxperAColon\n");
#endif
}

void laxperDriveQ(void){
#if defined (__DEBUG__)
	printf("laxperDriveQ\n");
#endif
}

void laxperDir(void){
#if defined (__DEBUG__)
	printf("laxperDir\n");
#endif
}

void laxperCreateFile(void){
#if defined (__DEBUG__)
	printf("laxperCreateFile\n");
#endif
}

void laxperMore(void){
#if defined (__DEBUG__)
	printf("laxperMore\n");
#endif
}

void laxperRoot(void){
#if defined (__DEBUG__)
	printf("laxperRoot\n");
#endif
}

void laxperNextBlock(void){
#if defined (__DEBUG__)
	printf("laxperNextBlock\n");
#endif
}

void laxperPlusThru(void){
#if defined (__DEBUG__)
	printf("laxperPlusThru\n");
#endif
}

void laxperThru(void){
#if defined (__DEBUG__)
	printf("laxperThru\n");
#endif
}

void laxperQEnough(void){
#if defined (__DEBUG__)
	printf("laxperQEnough\n");
#endif
}

void laxperQ(void){
#if defined (__DEBUG__)
	printf("laxperQ\n");
#endif
}

void laxperParenS(void){
#if defined (__DEBUG__)
	printf("laxperParenS\n");
#endif
}

void laxperBackslash(void){
#if defined (__DEBUG__)
	printf("laxperBackslash\n");
#endif
}

void laxperLSlashScr(void){
#if defined (__DEBUG__)
	printf("laxperLSlashScr\n");
#endif
}

void laxperCSlashL(void){
#if defined (__DEBUG__)
	printf("laxperCSlashL\n");
#endif
}

void laxperRecurse(void){
#if defined (__DEBUG__)
	printf("laxperRecurse\n");
#endif
}

void laxperDotId(void){
#if defined (__DEBUG__)
	printf("laxperDotId\n");
#endif
}

void laxperDotS(void){
#if defined (__DEBUG__)
	printf("laxperDotS\n");
#endif
}

void laxperDepth(void){
#if defined (__DEBUG__)
	printf("laxperDepth\n");
#endif
}

void laxperBye(void){
#if defined (__DEBUG__)
	printf("laxperBye\n");
#endif
}

void laxperStart(void){
#if defined (__DEBUG__)
	printf("laxperStart\n");
#endif
}

void laxperOk(void){
#if defined (__DEBUG__)
	printf("laxperOk\n");
#endif
}

void laxperInitial(void){
#if defined (__DEBUG__)
	printf("laxperInitial\n");
#endif
}

void laxperCold(void){
#if defined (__DEBUG__)
	printf("laxperCold\n");
#endif
}

void laxperWarm(void){
#if defined (__DEBUG__)
	printf("laxperWarm\n");
#endif
}

void laxperBoot(void){
#if defined (__DEBUG__)
	printf("laxperBoot\n");
#endif
}

void laxperQuit(void){
#if defined (__DEBUG__)
	printf("laxperQuit\n");
#endif
}

void laxperRun(void){
#if defined (__DEBUG__)
	printf("laxperRun\n");
#endif
}

void laxperIs(void){
#if defined (__DEBUG__)
	printf("laxperIs\n");
#endif
}

void laxperYIs(void){
#if defined (__DEBUG__)
	printf("laxperYIs\n");
#endif
}

void laxperToIs(void){
#if defined (__DEBUG__)
	printf("laxperToIs\n");
#endif
}

void laxperUser(void){
#if defined (__DEBUG__)
	printf("laxperUser\n");
#endif
}

void laxperNumUser(void){
#if defined (__DEBUG__)
	printf("laxperNumUser\n");
#endif
}

void laxperCode(void){
#if defined (__DEBUG__)
	printf("laxperCode\n");
#endif
}

void laxperAvoc(void){
#if defined (__DEBUG__)
	printf("laxperAvoc\n");
#endif
}

void laxperTwoVariable(void){
#if defined (__DEBUG__)
	printf("laxperTwoVariable\n");
#endif
}

void laxperTwoConstant(void){
#if defined (__DEBUG__)
	printf("laxperTwoConstant\n");
#endif
}

void laxperDefinitions(void){
#if defined (__DEBUG__)
	printf("laxperDefinitions\n");
#endif
}

void laxperVocabulary(void){
#if defined (__DEBUG__)
	printf("laxperVocabulary\n");
#endif
}

void laxperDefer(void){
#if defined (__DEBUG__)
	printf("laxperDefer\n");
#endif
}

void laxperVariable(void){
#if defined (__DEBUG__)
	printf("laxperVariable\n");
#endif
}

void laxperConstant(void){
#if defined (__DEBUG__)
	printf("laxperConstant\n");
#endif
}

void laxperRecursive(void){
#if defined (__DEBUG__)
	printf("laxperRecursive\n");
#endif
}

void laxperSemicolon(void){
#if defined (__DEBUG__)
	printf("laxperSemicolon\n");
#endif
}

void laxperColon(void){
#if defined (__DEBUG__)
	printf("laxperColon\n");
#endif
}

void laxperRightBracket(void){
#if defined (__DEBUG__)
	printf("laxperRightBracket\n");
#endif
}

void laxperLeftBracket(void){
#if defined (__DEBUG__)
	printf("laxperLeftBracket\n");
#endif
}

void laxperDoes(void){
#if defined (__DEBUG__)
	printf("laxperDoes\n");
#endif
}

void laxperSemicolonCode(void){
#if defined (__DEBUG__)
	printf("laxperSemicolonCode\n");
#endif
}

void laxperYSemicolonCode(void){
#if defined (__DEBUG__)
	printf("laxperYSemicolonCode\n");
#endif
}

void laxperSemicolonUses(void){
#if defined (__DEBUG__)
	printf("laxperSemicolonUses\n");
#endif
}

void laxperAssembler(void){
#if defined (__DEBUG__)
	printf("laxperAssembler\n");
#endif
}

void laxperYSemicolonUses(void){
#if defined (__DEBUG__)
	printf("laxperYSemicolonUses\n");
#endif
}

void laxperReveal(void){
#if defined (__DEBUG__)
	printf("laxperReveal\n");
#endif
}

void laxperHide(void){
#if defined (__DEBUG__)
	printf("laxperHide\n");
#endif
}

void laxperQCsp(void){
#if defined (__DEBUG__)
	printf("laxperQCsp\n");
#endif
}

void laxperStoreCsp(void){
#if defined (__DEBUG__)
	printf("laxperStoreCsp\n");
#endif
}

void laxperCreate(void){
#if defined (__DEBUG__)
	printf("laxperCreate\n");
#endif
}

void laxperBackslashCreate(void){
#if defined (__DEBUG__)
	printf("laxperBackslashCreate\n");
#endif
}

void laxperCommaView(void){
#if defined (__DEBUG__)
	printf("laxperCommaView\n");
#endif
}

void laxperWhile(void){
#if defined (__DEBUG__)
	printf("laxperWhile\n");
#endif
}

void laxperElse(void){
#if defined (__DEBUG__)
	printf("laxperElse\n");
#endif
}

void laxperIf(void){
#if defined (__DEBUG__)
	printf("laxperIf\n");
#endif
}

void laxperRepeat(void){
#if defined (__DEBUG__)
	printf("laxperRepeat\n");
#endif
}

void laxperAgain(void){
#if defined (__DEBUG__)
	printf("laxperAgain\n");
#endif
}

void laxperUntil(void){
#if defined (__DEBUG__)
	printf("laxperUntil\n");
#endif
}

void laxperPlusLoop(void){
#if defined (__DEBUG__)
	printf("laxperPlusLoop\n");
#endif
}

void laxperLoop(void){
#if defined (__DEBUG__)
	printf("laxperLoop\n");
#endif
}

void laxperQDo(void){
#if defined (__DEBUG__)
	printf("laxperQDo\n");
#endif
}

void laxperDo(void){
#if defined (__DEBUG__)
	printf("laxperDo\n");
#endif
}

void laxperThen(void){
#if defined (__DEBUG__)
	printf("laxperThen\n");
#endif
}

void laxperBegin(void){
#if defined (__DEBUG__)
	printf("laxperBegin\n");
#endif
}

void laxperQLeave(void){
#if defined (__DEBUG__)
	printf("laxperQLeave\n");
#endif
}

void laxperLeave(void){
#if defined (__DEBUG__)
	printf("laxperLeave\n");
#endif
}

void laxperQLessResolve(void){
#if defined (__DEBUG__)
	printf("laxperQLessResolve\n");
#endif
}

void laxperQLessMark(void){
#if defined (__DEBUG__)
	printf("laxperQLessMark\n");
#endif
}

void laxperQGreaterResolve(void){
#if defined (__DEBUG__)
	printf("laxperQGreaterResolve\n");
#endif
}

void laxperQGreaterMark(void){
#if defined (__DEBUG__)
	printf("laxperQGreaterMark\n");
#endif
}

void laxperLessResolve(void){
#if defined (__DEBUG__)
	printf("laxperLessResolve\n");
#endif
}

void laxperLessMark(void){
#if defined (__DEBUG__)
	printf("laxperLessMark\n");
#endif
}

void laxperToResolve(void){
#if defined (__DEBUG__)
	printf("laxperToResolve\n");
#endif
}

void laxperToMark(void){
#if defined (__DEBUG__)
	printf("laxperToMark\n");
#endif
}

void laxperQCondition(void){
#if defined (__DEBUG__)
	printf("laxperQCondition\n");
#endif
}

void laxperAbort(void){
#if defined (__DEBUG__)
	printf("laxperAbort\n");
#endif
}

void laxperAbortQuote(void){
#if defined (__DEBUG__)
	printf("laxperAbortQuote\n");
#endif
}

void laxperYAbortQuote(void){
#if defined (__DEBUG__)
	printf("laxperYAbortQuote\n");
#endif
}

void laxperYQError(void){
#if defined (__DEBUG__)
	printf("laxperYQError\n");
#endif
}

void laxperQError(void){
#if defined (__DEBUG__)
	printf("laxperQError\n");
#endif
}

void laxperWhere(void){
#if defined (__DEBUG__)
	printf("laxperWhere\n");
#endif
}

void laxperForget(void){
#if defined (__DEBUG__)
	printf("laxperForget\n");
#endif
}

void laxperYForget(void){
#if defined (__DEBUG__)
	printf("laxperYForget\n");
#endif
}

void laxperTrim(void){
#if defined (__DEBUG__)
	printf("laxperTrim\n");
#endif
}

void laxperFence(void){
#if defined (__DEBUG__)
	printf("laxperFence\n");
#endif
}

void laxperQuote(void){
#if defined (__DEBUG__)
	printf("laxperQuoten\n");
#endif
}

void laxperDotQuote(void){
#if defined (__DEBUG__)
	printf("laxperDotQuote\n");
#endif
}

void laxperCommaQuote(void){
#if defined (__DEBUG__)
	printf("laxperCommaQuote\n");
#endif
}

void laxperYDotQuote(void){
#if defined (__DEBUG__)
	printf("laxperYDotQuote\n");
#endif
}

void laxperYQuote(void){
#if defined (__DEBUG__)
	printf("laxperYQuote\n");
#endif
}

void laxperXCompile(void){
#if defined (__DEBUG__)
	printf("laxperXCompile\n");
#endif
}

void laxperXTick(void){
#if defined (__DEBUG__)
	printf("laxperXTick\n");
#endif
}

void laxperTick(void){
#if defined (__DEBUG__)
	printf("laxperTick\n");
#endif
}

void laxperQMissing(void){
#if defined (__DEBUG__)
	printf("laxperQMissing\n");
#endif
}

void laxperCrash(void){
#if defined (__DEBUG__)
	printf("laxperCrash\n");
#endif
}

void laxperControl(void){
#if defined (__DEBUG__)
	printf("laxperControl\n");
#endif
}

void laxperAscii(void){
#if defined (__DEBUG__)
	printf("laxperAscii\n");
#endif
}

void laxperDLiteral(void){
#if defined (__DEBUG__)
	printf("laxperDLiteral\n");
#endif
}

void laxperLiteral(void){
#if defined (__DEBUG__)
	printf("laxperLiteral\n");
#endif
}

void laxperImmediate(void){
#if defined (__DEBUG__)
	printf("laxperImmediate\n");
#endif
}

void laxperCompile(void){
#if defined (__DEBUG__)
	printf("laxperCompile\n");
#endif
}

void laxperEven(void){
#if defined (__DEBUG__)
	printf("laxperEven\n");
#endif
}

void laxperAlign(void){
#if defined (__DEBUG__)
	printf("laxperAlign\n");
#endif
}

void laxperCComma(void){
#if defined (__DEBUG__)
	printf("laxperCComma\n");
#endif
}

void laxperComma(void){
#if defined (__DEBUG__)
	printf("laxperComma\n");
#endif
}

void laxperAllot(void){
#if defined (__DEBUG__)
	printf("laxperAllot\n");
#endif
}

void laxperInterpret(void){
#if defined (__DEBUG__)
	printf("laxperInterpret\n");
#endif
}

void laxperStatus(void){
#if defined (__DEBUG__)
	printf("laxperStatus\n");
#endif
}

void laxperQStatus(void){
#if defined (__DEBUG__)
	printf("laxperQStatus\n");
#endif
}

void laxperDefined(void){
#if defined (__DEBUG__)
	printf("laxperDefined\n");
#endif
}

void laxperQUppercase(void){
#if defined (__DEBUG__)
	printf("laxperQUppercase\n");
#endif
}

void laxperFind(void){
#if defined (__DEBUG__)
	printf("laxperFind\n");
#endif
}

void laxperNumThreads(void){
#if defined (__DEBUG__)
	printf("laxperNumThreads\n");
#endif
}

void laxperYFind(void){
#if defined (__DEBUG__)
	printf("laxperYFind\n");
#endif
}

void laxperHash(void){
#if defined (__DEBUG__)
	printf("laxperHash\n");
#endif
}

void laxperViewFrom(void){
#if defined (__DEBUG__)
	printf("laxperViewFrom\n");
#endif
}

void laxperToView(void){
#if defined (__DEBUG__)
	printf("laxperToView\n");
#endif
}

void laxperToLink(void){
#if defined (__DEBUG__)
	printf("laxperToLink\n");
#endif
}

void laxperToName(void){
#if defined (__DEBUG__)
	printf("laxperToName\n");
#endif
}

void laxperToBody(void){
#if defined (__DEBUG__)
	printf("laxperToBody\n");
#endif
}

void laxperLinkFrom(void){
#if defined (__DEBUG__)
	printf("laxperLinkFrom\n");
#endif
}

void laxperNameFrom(void){
#if defined (__DEBUG__)
	printf("laxperNameFrom\n");
#endif
}

void laxperBodyFrom(void){
#if defined (__DEBUG__)
	printf("laxperBodyFrom\n");
#endif
}

void laxperLGreaterName(void){
#if defined (__DEBUG__)
	printf("laxperLGreaterName\n");
#endif
}

void laxperNToLink(void){
#if defined (__DEBUG__)
	printf("laxperNToLink\n");
#endif
}

void laxperForth83(void){
#if defined (__DEBUG__)
	printf("laxperForth83\n");
#endif
}

void laxperDoneQ(void){
#if defined (__DEBUG__)
	printf("laxperDoneQ\n");
#endif
}

void laxperTraverse(void){
#if defined (__DEBUG__)
	printf("laxperTraverse\n");
#endif
}

void laxperBackslashS(void){
#if defined (__DEBUG__)
	printf("laxperBackslashS\n");
#endif
}

void laxperParen(void){
#if defined (__DEBUG__)
	printf("laxperParen\n");
#endif
}

void laxperDotParen(void){
#if defined (__DEBUG__)
	printf("laxperDotParen\n");
#endif
}

void laxperToType(void){
#if defined (__DEBUG__)
	printf("laxperToType\n");
#endif
}

void laxperWord(void){
#if defined (__DEBUG__)
	printf("laxperWord\n");
#endif
}

void laxperTickWord(void){
#if defined (__DEBUG__)
	printf("laxperTickWord\n");
#endif
}

void laxperParse(void){
#if defined (__DEBUG__)
	printf("laxperParse\n");
#endif
}

void laxperParseWord(void){
#if defined (__DEBUG__)
	printf("laxperParseWord\n");
#endif
}

void laxperSource(void){
#if defined (__DEBUG__)
	printf("laxperSource\n");
#endif
}

void laxperYSource(void){
#if defined (__DEBUG__)
	printf("laxperYSource\n");
#endif
}

void laxperPlace(void){
#if defined (__DEBUG__)
	printf("laxperPlace\n");
#endif
}

void laxperSlashString(void){
#if defined (__DEBUG__)
	printf("laxperSlashString\n");
#endif
}

void laxperScan(void){
#if defined (__DEBUG__)
	printf("laxperScan\n");
#endif
}

void laxperSkip(void){
#if defined (__DEBUG__)
	printf("laxperSkip\n");
#endif
}

void laxperDDotR(void){
#if defined (__DEBUG__)
	printf("laxperDDotR\n");
#endif
}

void laxperDDot(void){
#if defined (__DEBUG__)
	printf("laxperDDot\n");
#endif
}

void laxperYDDot(void){
#if defined (__DEBUG__)
	printf("laxperYDDot\n");
#endif
}

void laxperUdDotR(void){
#if defined (__DEBUG__)
	printf("laxperUdDotR\n");
#endif
}

void laxperUdDot(void){
#if defined (__DEBUG__)
	printf("laxperUdDot\n");
#endif
}

void laxperYUdDot(void){
#if defined (__DEBUG__)
	printf("laxperYUdDo\n");
#endif
}

void laxperDotR(void){
#if defined (__DEBUG__)
	printf("laxperDotR\n");
#endif
}

void laxperDot(void){
#if defined (__DEBUG__)
	printf("laxperDot\n");
#endif
}

void laxperYDot(void){
#if defined (__DEBUG__)
	printf("laxperYDot\n");
#endif
}

void laxperUDotR(void){
#if defined (__DEBUG__)
	printf("laxperUDotR\n");
#endif
}

void laxperUDot(void){
#if defined (__DEBUG__)
	printf("laxperUDot\n");
#endif
}

void laxperYUDot(void){
#if defined (__DEBUG__)
	printf("laxperYUDot\n");
#endif
}

void laxperOctal(void){
#if defined (__DEBUG__)
	printf("laxperOctal\n");
#endif
}

void laxperDecimal(void){
#if defined (__DEBUG__)
	printf("laxperDecimal\n");
#endif
}

void laxperHex(void){
#if defined (__DEBUG__)
	printf("laxperHex\n");
#endif
}

void laxperNumS(void){
#if defined (__DEBUG__)
	printf("laxperNumS\n");
#endif
}

void laxperNum(void){
#if defined (__DEBUG__)
	printf("laxperNum\n");
#endif
}

void laxperSign(void){
#if defined (__DEBUG__)
	printf("laxperSign\n");
#endif
}

void laxperNumGreater(void){
#if defined (__DEBUG__)
	printf("laxperNumGreater\n");
#endif
}

void laxperLessNum(void){
#if defined (__DEBUG__)
	printf("laxperLessNum\n");
#endif
}

void laxperHold(void){
#if defined (__DEBUG__)
	printf("laxperHold\n");
#endif
}

void laxperNumber(void){
#if defined (__DEBUG__)
	printf("laxperNumber\n");
#endif
}

void laxperYNumber(void){
#if defined (__DEBUG__)
	printf("laxperYNumber\n");
#endif
}

void laxperNumberQ(void){
#if defined (__DEBUG__)
	printf("laxperNumberQ\n");
#endif
}

void laxperYNumberQ(void){
#if defined (__DEBUG__)
	printf("laxperYNumberQ\n");
#endif
}

void laxperConvert(void){
#if defined (__DEBUG__)
	printf("laxperConvert\n");
#endif
}

void laxperDoubleQ(void){
#if defined (__DEBUG__)
	printf("laxperDoubleQ\n");
#endif
}

void laxperDigit(void){
#if defined (__DEBUG__)
	printf("laxperDigit\n");
#endif
}

void laxperLoad(void){
#if defined (__DEBUG__)
	printf("laxperLoad\n");
#endif
}

void laxperYLoad(void){
#if defined (__DEBUG__)
	printf("laxperYLoad\n");
#endif
}

void laxperDefault(void){
#if defined (__DEBUG__)
	printf("laxperDefault\n");
#endif
}

void laxperViewNum(void){
#if defined (__DEBUG__)
	printf("laxperViewNum\n");
#endif
}

void laxperFlush(void){
#if defined (__DEBUG__)
	printf("laxperFlush\n");
#endif
}

void laxperSaveBuffers(void){
#if defined (__DEBUG__)
	printf("laxperSaveBuffers\n");
#endif
}

void laxperEmptyBuffers(void){
#if defined (__DEBUG__)
	printf("laxperEmptyBuffers\n");
#endif
}

void laxperInBlock(void){
#if defined (__DEBUG__)
	printf("laxperInBlock\n");
#endif
}

void laxperBlock(void){
#if defined (__DEBUG__)
	printf("laxperBlock\n");
#endif
}

void laxperYBlock(void){
#if defined (__DEBUG__)
	printf("laxperYBlock\n");
#endif
}

void laxperBuffer(void){
#if defined (__DEBUG__)
	printf("laxperBuffer\n");
#endif
}

void laxperYBuffer(void){
#if defined (__DEBUG__)
	printf("laxperYBuffer\n");
#endif
}

void laxperMissing(void){
#if defined (__DEBUG__)
	printf("laxperMissing\n");
#endif
}

void laxperDiscord(void){
#if defined (__DEBUG__)
	printf("laxperDiscord\n");
#endif
}

void laxperUpdate(void){
#if defined (__DEBUG__)
	printf("laxperUpdate\n");
#endif
}

void laxperAbsentQ(void){
#if defined (__DEBUG__)
	printf("laxperAbsentQ\n");
#endif
}

void laxperLatestQ(void){
#if defined (__DEBUG__)
	printf("laxperLatestQ\n");
#endif
}

void laxperCapacity(void){
#if defined (__DEBUG__)
	printf("laxperCapacity\n");
#endif
}

void laxperDos(void){
#if defined (__DEBUG__)
	printf("laxperDos\n");
#endif
}

void laxperSwitch(void){
#if defined (__DEBUG__)
	printf("laxperSwitch\n");
#endif
}

void laxperFileQ(void){
#if defined (__DEBUG__)
	printf("laxperFileQ\n");
#endif
}

void laxperDotFile(void){
#if defined (__DEBUG__)
	printf("laxperDotFile\n");
#endif
}

void laxperWriteBlock(void){
#if defined (__DEBUG__)
	printf("laxperWriteBlock\n");
#endif
}

void laxperReadBlock(void){
#if defined (__DEBUG__)
	printf("laxperReadBlock\n");
#endif
}

void laxperToUpdate(void){
#if defined (__DEBUG__)
	printf("laxperToUpdate\n");
#endif
}

void laxperBuffersNum(void){
#if defined (__DEBUG__)
	printf("laxperBuffersNum\n");
#endif
}

void laxperToEnd(void){
#if defined (__DEBUG__)
	printf("laxperToEnd\n");
#endif
}

void laxperToBuffers(void){
#if defined (__DEBUG__)
	printf("laxperToBuffers\n");
#endif
}

void laxperInitR0(void){
#if defined (__DEBUG__)
	printf("laxperInitR0\n");
#endif
}

void laxperFirst(void){
#if defined (__DEBUG__)
	printf("laxperFirst\n");
#endif
}

void laxperToSize(void){
#if defined (__DEBUG__)
	printf("laxperToSize\n");
#endif
}

void laxperLimit(void){
#if defined (__DEBUG__)
	printf("laxperLimit\n");
#endif
}

void laxperDiskError(void){
#if defined (__DEBUG__)
	printf("laxperDiskError\n");
#endif
}

void laxperBSlashFcb(void){
#if defined (__DEBUG__)
	printf("laxperBSlashFcb\n");
#endif
}

void laxperRecSlashBlk(void){
#if defined (__DEBUG__)
	printf("laxperRecSlashBlk\n");
#endif
}

void laxperBSlashRec(void){
#if defined (__DEBUG__)
	printf("laxperBSlashRec\n");
#endif
}

void laxperBSlashBuf(void){
#if defined (__DEBUG__)
	printf("laxperBSlashBuf\n");
#endif
}

void laxperNumBuffers(void){
#if defined (__DEBUG__)
	printf("laxperNumBuffers\n");
#endif
}

void laxperQuery(void){
#if defined (__DEBUG__)
	printf("laxperQuery\n");
#endif
}

void laxperTib(void){
#if defined (__DEBUG__)
	printf("laxperTib\n");
#endif
}

void laxperExpect(void){
#if defined (__DEBUG__)
	printf("laxperExpect\n");
#endif
}

void laxperCcForth(void){
#if defined (__DEBUG__)
	printf("laxperCcForth\n");
#endif
}

void laxperCc(void){
#if defined (__DEBUG__)
	printf("laxperCc\n");
#endif
}

void laxperDelIn(void){
#if defined (__DEBUG__)
	printf("laxperDelIn\n");
#endif
}

void laxperChar(void){
#if defined (__DEBUG__)
	printf("laxperChar\n");
#endif
}

void laxperYChar(void){
#if defined (__DEBUG__)
	printf("laxperYChar\n");
#endif
}

void laxperCrIn(void){
#if defined (__DEBUG__)
	printf("laxperCrIn\n");
#endif
}

void laxperPIn(void){
#if defined (__DEBUG__)
	printf("laxperPIn\n");
#endif
}

void laxperResIn(void){
#if defined (__DEBUG__)
	printf("laxperResIn\n");
#endif
}

void laxperBackUp(void){
#if defined (__DEBUG__)
	printf("laxperBackUp\n");
#endif
}

void laxperYDelIn(void){
#if defined (__DEBUG__)
	printf("laxperYDelIn\n");
#endif
}

void laxperBsIn(void){
#if defined (__DEBUG__)
	printf("laxperBsIn\n");
#endif
}

void laxperBeep(void){
#if defined (__DEBUG__)
	printf("laxperBeep\n");
#endif
}

void laxperBackspaces(void){
#if defined (__DEBUG__)
	printf("laxperBackspaces\n");
#endif
}

void laxperSpaces(void){
#if defined (__DEBUG__)
	printf("laxperSpaces\n");
#endif
}

void laxperSpace(void){
#if defined (__DEBUG__)
	printf("laxperSpace\n");
#endif
}

void laxperType(void){
#if defined (__DEBUG__)
	printf("laxperType\n");
#endif
}

void laxperCrLf(void){
#if defined (__DEBUG__)
	printf("laxperCrLf\n");
#endif
}

void laxperYEmit(void){
#if defined (__DEBUG__)
	printf("laxperYEmit\n");
#endif
}

void laxperYPrint(void){
#if defined (__DEBUG__)
	printf("laxperYPrint\n");
#endif
}

void laxperPrStat(void){
#if defined (__DEBUG__)
	printf("laxperPrStat\n");
#endif
}

void laxperCr(void){
#if defined (__DEBUG__)
	printf("laxperCr\n");
#endif
}

void laxperKey(void){
#if defined (__DEBUG__)
	printf("laxperKey\n");
#endif
}

void laxperKeyQ(void){
#if defined (__DEBUG__)
	printf("laxperKeyQ\n");
#endif
}

void laxperYConsole(void){
#if defined (__DEBUG__)
	printf("laxperYConsole\n");
#endif
}

void laxperYKey(void){
#if defined (__DEBUG__)
	printf("laxperYKey\n");
#endif
}

void laxperYKeyQ(void){
#if defined (__DEBUG__)
	printf("laxperYKeyQ\n");
#endif
}

void laxperBdos(void){
#if defined (__DEBUG__)
	printf("laxperBdos\n");
#endif
}

void laxperCompare(void){
#if defined (__DEBUG__)
	printf("laxperCompare\n");
#endif
}

void laxperCapsComp(void){
#if defined (__DEBUG__)
	printf("laxperCapsComp\n");
#endif
}

void laxperComp(void){
#if defined (__DEBUG__)
	printf("laxperComp\n");
#endif
}

void laxperMinusTrailing(void){
#if defined (__DEBUG__)
	printf("laxperMinusTrailing\n");
#endif
}

void laxperPad(void){
#if defined (__DEBUG__)
	printf("laxperPad\n");
#endif
}

void laxperHere(void){
#if defined (__DEBUG__)
	printf("laxperHere\n");
#endif
}

void laxperUpper(void){
#if defined (__DEBUG__)
	printf("laxperUpper\n");
#endif
}

void laxperUpc(void){
#if defined (__DEBUG__)
	printf("laxperUpc\n");
#endif
}

void laxperMove(void){
#if defined (__DEBUG__)
	printf("laxperMove\n");
#endif
}

void laxperLength(void){
#if defined (__DEBUG__)
	printf("laxperLength\n");
#endif
}

void laxperCount(void){
#if defined (__DEBUG__)
	printf("laxperCount\n");
#endif
}

void laxperBlank(void){
#if defined (__DEBUG__)
	printf("laxperBlank\n");
#endif
}

void laxperErase(void){
#if defined (__DEBUG__)
	printf("laxperErase\n");
#endif
}

void laxperFill(void){
#if defined (__DEBUG__)
	printf("laxperFill\n");
#endif
}

void laxperCaps(void){
#if defined (__DEBUG__)
	printf("laxperCaps\n");
#endif
}

void laxperBell(void){
#if defined (__DEBUG__)
	printf("laxperBell\n");
#endif
}

void laxperBs(void){
#if defined (__DEBUG__)
	printf("laxperBs\n");
#endif
}

void laxperBl(void){
#if defined (__DEBUG__)
	printf("laxperBl\n");
#endif
}

void laxperEndQ(void){
#if defined (__DEBUG__)
	printf("laxperEndQ\n");
#endif
}

void laxperNumTib(void){
#if defined (__DEBUG__)
	printf("laxperNumTib\n");
#endif
}

void laxperSpan(void){
#if defined (__DEBUG__)
	printf("laxperSpan\n");
#endif
}

void laxperToIn(void){
#if defined (__DEBUG__)
	printf("laxperToIn\n");
#endif
}

void laxperBlk(void){
#if defined (__DEBUG__)
	printf("laxperBlk\n");
#endif
}

void laxperVocLink(void){
#if defined (__DEBUG__)
	printf("laxperVocLink\n");
#endif
}

void laxperWidth(void){
#if defined (__DEBUG__)
	printf("laxperWidth\n");
#endif
}

void laxperTickTib(void){
#if defined (__DEBUG__)
	printf("laxperTickTib\n");
#endif
}

void laxperContext(void){
#if defined (__DEBUG__)
	printf("laxperContext\n");
#endif
}

void laxperNumVocs(void){
#if defined (__DEBUG__)
	printf("laxperNumVocs\n");
#endif
}

void laxperCurrent(void){
#if defined (__DEBUG__)
	printf("laxperCurrent\n");
#endif
}

void laxperCsp(void){
#if defined (__DEBUG__)
	printf("laxperCsp\n");
#endif
}

void laxperLast(void){
#if defined (__DEBUG__)
	printf("laxperLast\n");
#endif
}

void laxperRNum(void){
#if defined (__DEBUG__)
	printf("laxperRNum\n");
#endif
}

void laxperDpl(void){
#if defined (__DEBUG__)
	printf("laxperDpl\n");
#endif
}

void laxperWarning(void){
#if defined (__DEBUG__)
	printf("laxperWarning\n");
#endif
}

void laxperState(void){
#if defined (__DEBUG__)
	printf("laxperState\n");
#endif
}

void laxperPrior(void){
#if defined (__DEBUG__)
	printf("laxperPrior\n");
#endif
}

void laxperScr(void){
#if defined (__DEBUG__)
	printf("laxperScr\n");
#endif
}

void laxperEmit(void){
#if defined (__DEBUG__)
	printf("laxperEmit\n");
#endif
}

void laxperPrinting(void){
#if defined (__DEBUG__)
	printf("laxperPrinting\n");
#endif
}

void laxperInFile(void){
#if defined (__DEBUG__)
	printf("laxperInFile\n");
#endif
}

void laxperFile(void){
#if defined (__DEBUG__)
	printf("laxperFile\n");
#endif
}

void laxperHld(void){
#if defined (__DEBUG__)
	printf("laxperHld\n");
#endif
}

void laxperBase(void){
#if defined (__DEBUG__)
	printf("laxperBase\n");
#endif
}

void laxperOffset(void){
#if defined (__DEBUG__)
	printf("laxperOffset\n");
#endif
}

void laxperNumLine(void){
#if defined (__DEBUG__)
	printf("laxperOffset\n");
#endif
}

void laxperNumOut(void){
#if defined (__DEBUG__)
	printf("laxperNumOut\n");
#endif
}

void laxperDP(void){
#if defined (__DEBUG__)
	printf("laxperDP\n");
#endif
}

void laxperRP0(void){
#if defined (__DEBUG__)
	printf("laxperRP0\n");
#endif
}

void laxperSP0(void){
#if defined (__DEBUG__)
	printf("laxperSP0\n");
#endif
}

void laxperLink(void){
#if defined (__DEBUG__)
	printf("laxperLink\n");
#endif
}

void laxperEntry(void){
#if defined (__DEBUG__)
	printf("laxperEntry\n");
#endif
}

void laxperTos(void){
#if defined (__DEBUG__)
	printf("laxperTos\n");
#endif
}

void laxperStarSlash(void){
#if defined (__DEBUG__)
	printf("laxperStarSlash\n");
#endif
}

void laxperStarSlashMod(void){
#if defined (__DEBUG__)
	printf("laxperStarSlashMod\n");
#endif
}

void laxperMod(void){
#if defined (__DEBUG__)
	printf("laxperMod\n");
#endif
}

void laxperSlash(void){
#if defined (__DEBUG__)
	printf("laxperSlash\n");
#endif
}

void laxperSlashMod(void){
#if defined (__DEBUG__)
	printf("laxperSlashMod\n");
#endif
}

void laxperStar(void){
#if defined (__DEBUG__)
	printf("laxperStar\n");
#endif
}

void laxperMuSlashMod(void){
#if defined (__DEBUG__)
	printf("laxperMuSlashMod\n");
#endif
}

void laxperMSlashMod(void){
#if defined (__DEBUG__)
	printf("laxperMSlashMod\n");
#endif
}

void laxperStarD(void){
#if defined (__DEBUG__)
	printf("laxperStarD\n");
#endif
}

void laxperDMax(void){
#if defined (__DEBUG__)
	printf("laxperDMax\n");
#endif
}

void laxperDMin(void){
#if defined (__DEBUG__)
	printf("laxperDMin\n");
#endif
}

void laxperDGreater(void){
#if defined (__DEBUG__)
	printf("laxperDGreater\n");
#endif
}

void laxperDLess(void){
#if defined (__DEBUG__)
	printf("laxperDLess\n");
#endif
}

void laxperDULess(void){
#if defined (__DEBUG__)
	printf("laxperDULess\n");
#endif
}

void laxperDEqual(void){
#if defined (__DEBUG__)
	printf("laxperDEqual\n");
#endif
}

void laxperD0Equal(void){
#if defined (__DEBUG__)
	printf("laxperD0Equal\n");
#endif
}

void laxperQDNegate(void){
#if defined (__DEBUG__)
	printf("laxperQDNegate\n");
#endif
}

void laxperDMinus(void){
#if defined (__DEBUG__)
	printf("laxperDMinus\n");
#endif
}

void laxperD2Slash(void){
#if defined (__DEBUG__)
	printf("laxperD2Slash\n");
#endif
}

void laxperD2Star(void){
#if defined (__DEBUG__)
	printf("laxperD2Star\n");
#endif
}

void laxperDAbs(void){
#if defined (__DEBUG__)
	printf("laxperDAbs\n");
#endif
}

void laxperSToD(void){
#if defined (__DEBUG__)
	printf("laxperSToD\n");
#endif
}

void laxperDNegate(void){
#if defined (__DEBUG__)
	printf("laxperDNegate\n");
#endif
}

void laxperDPLus(void){
#if defined (__DEBUG__)
	printf("laxperDPLus\n");
#endif
}

void laxperTwoRot(void){
#if defined (__DEBUG__)
	printf("laxperTwoRot\n");
#endif
}

void laxperFourDup(void){
#if defined (__DEBUG__)
	printf("laxperFourDup\n");
#endif
}

void laxperThreeDup(void){
#if defined (__DEBUG__)
	printf("laxperThreeDup\n");
#endif
}

void laxperTwoOver(void){
#if defined (__DEBUG__)
	printf("laxperTwoOver\n");
#endif
}

void laxperTwoSwap(void){
#if defined (__DEBUG__)
	printf("laxperTwoSwap\n");
#endif
}

void laxperTwoDup(void){
#if defined (__DEBUG__)
	printf("laxperTwoDup\n");
#endif
}

void laxperTwoDrop(void){
#if defined (__DEBUG__)
	printf("laxperTwoDrop\n");
#endif
}

void laxperTwoStore(void){
#if defined (__DEBUG__)
	printf("laxperTwoStore\n");
#endif
}

void laxperTwoFetch(void){
#if defined (__DEBUG__)
	printf("laxperTwoFetch\n");
#endif
}

void laxperWithin(void){
#if defined (__DEBUG__)
	printf("laxperWithin\n");
#endif
}

void laxperBetween(void){
#if defined (__DEBUG__)
	printf("laxperBetween\n");
#endif
}

void laxperMax(void){
#if defined (__DEBUG__)
	printf("laxperMax\n");
#endif
}

void laxperMin(void){
#if defined (__DEBUG__)
	printf("laxperMin\n");
#endif
}

void laxperGreater(void){
#if defined (__DEBUG__)
	printf("laxperGreater\n");
#endif
}

void laxperLess(void){
#if defined (__DEBUG__)
	printf("laxperLess\n");
#endif
}

void laxperUGreater(void){
#if defined (__DEBUG__)
	printf("laxperUGreater\n");
#endif
}

void laxperULess(void){
#if defined (__DEBUG__)
	printf("laxperULess\n");
#endif
}

void laxperQNegate(void){
#if defined (__DEBUG__)
	printf("laxperQNegate\n");
#endif
}

void laxperUnequal(void){
#if defined (__DEBUG__)
	printf("laxperUnequal\n");
#endif
}

void laxperEqual(void){
#if defined (__DEBUG__)
	printf("laxperEqual\n");
#endif
}

void laxperZeroUnequal(void){
#if defined (__DEBUG__)
	printf("laxperZeroUnequal\n");
#endif
}

void laxperZeroGreater(void){
#if defined (__DEBUG__)
	printf("laxperZeroGreater\n");
#endif
}

void laxperZeroLess(void){
#if defined (__DEBUG__)
	printf("laxperZeroLess\n");
#endif
}

void laxperZeroEqual(void){
#if defined (__DEBUG__)
	printf("laxperZeroEqual\n");
#endif
}

void laxperUmSlashMod(void){
#if defined (__DEBUG__)
	printf("laxperUmSlashMod\n");
#endif
}

void laxperUStarD(void){
#if defined (__DEBUG__)
	printf("laxperUStarD\n");
#endif
}

void laxperUmStar(void){
#if defined (__DEBUG__)
	printf("laxperUmStar\n");
#endif
}

void laxperTwoMinus(void){
#if defined (__DEBUG__)
	printf("laxperTwoMinus\n");
#endif
}

void laxperOneMinus(void){
#if defined (__DEBUG__)
	printf("laxperOneMinus\n");
#endif
}

void laxperTwoPlus(void){
#if defined (__DEBUG__)
	printf("laxperTwoPlus\n");
#endif
}

void laxperOnePlus(void){
#if defined (__DEBUG__)
	printf("laxperOnePlus\n");
#endif
}

void laxperEightStar(void){
#if defined (__DEBUG__)
	printf("laxperEightStar\n");
#endif
}

void laxperU2Slash(void){
#if defined (__DEBUG__)
	printf("laxperU2Slash\n");
#endif
}

void laxperTwoSlash(void){
#if defined (__DEBUG__)
	printf("laxperTwoSlash\n");
#endif
}

void laxperTwoStar(void){
#if defined (__DEBUG__)
	printf("laxperTwoStar\n");
#endif
}

void laxperThree(void){
#if defined (__DEBUG__)
	printf("laxperThree\n");
#endif
}

void laxperTwo(void){
#if defined (__DEBUG__)
	printf("laxperTwo\n");
#endif
}

void laxperOne(void){
#if defined (__DEBUG__)
	printf("laxperOne\n");
#endif
}

void laxperZero(void){
#if defined (__DEBUG__)
	printf("laxperZero\n");
#endif
}

void laxperPlusStore(void){
#if defined (__DEBUG__)
	printf("laxperPlusStore\n");
#endif
}

void laxperAbs(void){
#if defined (__DEBUG__)
	printf("laxperAbs\n");
#endif
}

void laxperMinus(void){
#if defined (__DEBUG__)
	printf("laxperMinus\n");
#endif
}

void laxperNegate(void){
#if defined (__DEBUG__)
	printf("laxperNegate\n");
#endif
}

void laxperPlus(void){
#if defined (__DEBUG__)
	printf("laxperPlus\n");
#endif
}

void laxperOff(void){
#if defined (__DEBUG__)
	printf("laxperOff\n");
#endif
}

void laxperOn(void){
#if defined (__DEBUG__)
	printf("laxperOn\n");
#endif
}

void laxperCToggle(void){
#if defined (__DEBUG__)
	printf("laxperCToggle\n");
#endif
}

void laxperCReset(void){
#if defined (__DEBUG__)
	printf("laxperCReset\n");
#endif
}

void laxperCSet(void){
#if defined (__DEBUG__)
	printf("laxperCSet\n");
#endif
}

void laxperFalse(void){
#if defined (__DEBUG__)
	printf("laxperFalse\n");
#endif
}

void laxperTrue(void){
#if defined (__DEBUG__)
	printf("laxperTrue\n");
#endif
}

void laxperNot(void){
#if defined (__DEBUG__)
	printf("laxperNot\n");
#endif
}

void laxperYor(void){
#if defined (__DEBUG__)
	printf("laxperYor\n");
#endif
}

void laxperOr(void){
#if defined (__DEBUG__)
	printf("laxperOr\n");
#endif
}

void laxperAnd(void){
#if defined (__DEBUG__)
	printf("laxperAnd\n");
#endif
}

void laxperRoll(void){
#if defined (__DEBUG__)
	printf("laxperRoll\n");
#endif
}

void laxperPick(void){
#if defined (__DEBUG__)
	printf("laxperPick\n");
#endif
}

void laxperRFetch(void){
#if defined (__DEBUG__)
	printf("laxperRFetch\n");
#endif
}

void laxperToR(void){
#if defined (__DEBUG__)
	printf("laxperToR\n");
#endif
}

void laxperRFrom(void){
#if defined (__DEBUG__)
	printf("laxperRFrom\n");
#endif
}

void laxperQDup(void){
#if defined (__DEBUG__)
	printf("laxperQDup\n");
#endif
}

void laxperFlip(void){
#if defined (__DEBUG__)
	printf("laxperFlip\n");
#endif
}

void laxperMinusRot(void){
#if defined (__DEBUG__)
	printf("laxperMinusRot\n");
#endif
}

void laxperRot(void){
#if defined (__DEBUG__)
	printf("laxperRot\n");
#endif
}

void laxperNip(void){
#if defined (__DEBUG__)
	printf("laxperNip\n");
#endif
}

void laxperTuck(void){
#if defined (__DEBUG__)
	printf("laxperTuck\n");
#endif
}

void laxperOver(void){
#if defined (__DEBUG__)
	printf("laxperOver\n");
#endif
}

void laxperSwap(void){
#if defined (__DEBUG__)
	printf("laxperSwap\n");
#endif
}

void laxperDup(void){
#if defined (__DEBUG__)
	printf("laxperDup\n");
#endif
}

void laxperDrop(void){
#if defined (__DEBUG__)
	printf("laxperDrop\n");
#endif
}

void laxperRPStore(void){
#if defined (__DEBUG__)
	printf("laxperRPStore\n");
#endif
}

void laxperRPFetch(void){
#if defined (__DEBUG__)
	printf("laxperRPFetch\n");
#endif
}

void laxperSPStore(void){
#if defined (__DEBUG__)
	printf("laxperSPStore\n");
#endif
}

void laxperSPFetch(void){
#if defined (__DEBUG__)
	printf("laxperSPFetch\n");
#endif
}

void laxperCMoveFrom(void){
#if defined (__DEBUG__)
	printf("laxperCMoveFrom\n");
#endif
}

void laxperCMove(void){
#if defined (__DEBUG__)
	printf("laxperCMove\n");
#endif
}

void laxperCStore(void){
#if defined (__DEBUG__)
	printf("laxperCStore\n");
#endif
}

void laxperCFetch(void){
#if defined (__DEBUG__)
	printf("laxperCFetch\n");
#endif
}

void laxperStore(void){
#if defined (__DEBUG__)
	printf("laxperStore\n");
#endif
}

void laxperFetch(void){
#if defined (__DEBUG__)
	printf("laxperFetch\n");
#endif
}

void laxperYQLeave(void){
#if defined (__DEBUG__)
	printf("laxperYQLeave\n");
#endif
}

void laxperYLeave(void){
#if defined (__DEBUG__)
	printf("laxperYLeave\n");
#endif
}

void laxperJ(void){
#if defined (__DEBUG__)
	printf("laxperJ\n");
#endif
}

void laxperI(void){
#if defined (__DEBUG__)
	printf("laxperI\n");
#endif
}

void laxperPause(void){
#if defined (__DEBUG__)
	printf("laxperPause\n");
#endif
}

void laxperNoop(void){
#if defined (__DEBUG__)
	printf("laxperNoop\n");
#endif
}

void laxperGo(void){
#if defined (__DEBUG__)
	printf("laxperGo\n");
#endif
}

void laxperPerform(void){
#if defined (__DEBUG__)
	printf("laxperPerform\n");
#endif
}

void laxperExecute(void){
#if defined (__DEBUG__)
	printf("laxperExecute\n");
#endif
}

void laxperToNext(void){
#if defined (__DEBUG__)
	printf("laxperToNext\n");
#endif
}

void laxperBounds(void){
#if defined (__DEBUG__)
	printf("laxperBounds\n");
#endif
}

void laxperYQDo(void){
#if defined (__DEBUG__)
	printf("laxperYQDo\n");
#endif
}

void laxperYDo(void){
#if defined (__DEBUG__)
	printf("laxperYDo\n");
#endif
}

void laxperYPlusLoop(void){
#if defined (__DEBUG__)
	printf("laxperYPlusLoop\n");
#endif
}

void laxperYLoop(void){
#if defined (__DEBUG__)
	printf("laxperYLoop\n");
#endif
}

void laxperQBranch(void){
#if defined (__DEBUG__)
	printf("laxperQBranch\n");
#endif
}

void laxperBranch(void){
#if defined (__DEBUG__)
	printf("laxperBranch\n");
#endif
}

void laxperYLit(void){
#if defined (__DEBUG__)
	printf("laxperYLit\n");
#endif
}

void laxperUp(void){
#if defined (__DEBUG__)
	printf("laxperUp\n");
#endif
}

void laxperUnnest(void){
#if defined (__DEBUG__)
	printf("laxperUnnest\n");
#endif
}

void laxperExit(void){
#if defined (__DEBUG__)
	printf("laxperExit\n");
#endif
}

void laxperForth(void){
#if defined (__DEBUG__)
	printf("laxperForth\n");
#endif
}

#endif

#if (H2O_FORTH_PRIMITIVES == LAXONPERRY_FORTH) || \
    (H2O_FORTH_PRIMITIVES == LAXONPERRY_PC_FORTH)
void laxperPStore(void){
#if defined (__DEBUG__)
	printf("laxperPStore\n");
#endif
}

void laxperPFetch(void){
#if defined (__DEBUG__)
	printf("laxperPFetch\n");
#endif
}

void laxperIntNum(void){
#if defined (__DEBUG__)
	printf("laxperIntNum\n");
#endif
}

void laxperCpu8086DotBlk(void){
#if defined (__DEBUG__)
	printf("laxperCpu8086DotBlk\n");
#endif
}

void laxperExtend86DotBlk(void){
#if defined (__DEBUG__)
	printf("laxperExtend86DotBlk\n");
#endif
}

void laxperKernel86DotBlk(void){
#if defined (__DEBUG__)
	printf("laxperKernel86DotBlk\n");
#endif
}
#endif

#if (H2O_FORTH_PRIMITIVES == LAXONPERRY_FORTH) || \
    (H2O_FORTH_PRIMITIVES == LAXONPERRY_CPM_FORTH)
void laxperCpu8080DotBlk(void){
#if defined (__DEBUG__)
	printf("laxperCpu8080DotBlk\n");
#endif
}

void laxperExtend80DotBlk(void){
#if defined (__DEBUG__)
	printf("laxperExtend80DotBlk\n");
#endif
}

void laxperKernel80DotBlk(void){
#if defined (__DEBUG__)
	printf("laxperKernel80DotBlk\n");
#endif
}

void laxperBios(void){
#if defined (__DEBUG__)
	printf("laxperBios\n");
#endif
}

void laxperRP(void){
#if defined (__DEBUG__)
	printf("laxperRP\n");
#endif
}
#endif

#if (H2O_FORTH_PRIMITIVES == LAXONPERRY_FORTH) || \
	(H2O_FORTH_PRIMITIVES == LAXONPERRY_CPM68K_FORTH)
void laxperCpu68000DotBlk(void){
#if defined (__DEBUG__)
	printf("laxperCpu68000DotBlk\n");
#endif
}

void laxperExtend68DotBlk(void){
#if defined (__DEBUG__)
	printf("laxperExtend68DotBlk\n");
#endif
}

void laxperKernel68DotBlk(void){
#if defined (__DEBUG__)
	printf("laxperKernel68DotBlk\n");
#endif
}

/* unchecked: */
void laxperBios(void){
#if defined (__DEBUG__)
	printf("laxperBios\n");
#endif
}

void laxperRP(void){
#if defined (__DEBUG__)
	printf("laxperRP\n");
#endif
}

#endif

#endif
