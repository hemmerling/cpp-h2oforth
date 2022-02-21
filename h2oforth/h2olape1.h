#ifndef H2OLAPE1
#define H2OLAPE1

/* The "Laxon & Perry 2.0" ( FORTH-83 ) FORTH */

/* Definitions */

#if (H2O_FORTH_PRIMITIVES == LAXONPERRY_FORTH) || \
    (H2O_FORTH_PRIMITIVES == LAXONPERRY_PC_FORTH) || \
    (H2O_FORTH_PRIMITIVES == LAXONPERRY_CPM_FORTH) || \
	(H2O_FORTH_PRIMITIVES == LAXONPERRY_CPM68K_FORTH)
void laxperEmpty(void);
void laxperMark(void);
void laxperHello(void);
void laxperBackgroundColon(void);
void laxperActivate(void);
void laxperSetTask(void);
void laxperTaskColon(void);
void laxperResume(void);
void laxperDebug(void);
void laxperListing(void);
void laxperShow(void);
void laxperYSemit(void);
void laxperYPage(void);
void laxperFormFeed(void);
void laxperPage(void);
void laxperNumPage(void);
void laxperLogo(void);
void laxperLSlashPage(void);
void laxperFooting(void);
void laxperInitPr(void);
void laxperEpson(void);
void laxperSee(void);
void laxperYSee(void);
void laxperAssociativeColon(void);
void laxperCaseColon(void);
void laxperMap(void);
void laxperOut(void);
void laxperDL(void);
void laxperDU(void);
void laxperDump(void);
void laxperDotHead(void);
void laxperQDotA(void);
void laxperQDotN(void);
void laxperDln(void);
void laxperEmitDot(void);
void laxperDDotTwo(void);
void laxperDotTwo(void);
void laxperA(void);
void laxperShadow(void);
void laxperYWhere(void);
void laxperFix(void);
void laxperEdit(void);
void laxperEd(void);
void laxperDone(void);
void laxperEditor(void);
void laxperDark(void);
void laxperAt(void);
void laxperMinusLine(void);
void laxperBlot(void);
void laxperReplace(void);
void laxperInsert(void);
void laxperDelete(void);
void laxperSearch(void);
void laxperScanFirst(void);
void laxperFound(void);
void laxperTo(void);
void laxperCorvey(void);
void laxperYConvey(void);
void laxperDotTo(void);
void laxperHop(void);
void laxperConveyCopy(void);
void laxperUSlashD(void);
void laxperHopped(void);
void laxperView(void);
void laxperFetchView(void);
void laxperCopy(void);
void laxperYCopy(void);
void laxperEstablish(void);
void laxperL(void);
void laxperB(void);
void laxperN(void);
void laxperColonColon(void);
void laxperMany(void);
void laxperTimes(void);
void laxperNumTimes(void);
void laxperWords(void);
void laxperLargest(void);
void laxperInd(void);
void laxperIndex(void);
void laxperDotLineZero(void);
void laxperTriad(void);
void laxperList(void);
void laxperDotScr(void);
void laxperQCr(void);
void laxperQLine(void);
void laxperRMargin(void);
void laxperLMargin(void);
void laxperHidden(void);
void laxperZeroLessEqual(void);
void laxperZeroGreaterEqual(void);
void laxperGreaterEqual(void);
void laxperLessEqual(void);
void laxperUGreaterEqual(void);
void laxperULessEqual(void);
void laxperMs(void);
void laxperFudge(void);
void laxperPCStore(void);
void laxperPCFetch(void);
void laxperMulti(void);
void laxperSingle(void);
void laxperStop(void);
void laxperWake(void);
void laxperSleep(void);
void laxperStoreLink(void);
void laxperFetchLink(void);
void laxperLocal(void);
void laxperRestart(void);
void laxperYPause(void);
void laxperUnbug(void);
void laxperBug(void);
void laxperDoesQ(void);
void laxperDoesSize(void);
void laxperDoesOp(void);
void laxperLabel(void);
void laxperUtilityDotBlk(void);
void laxperViews(void);
void laxperViewFiles(void);
void laxperSaveSystem(void);
void laxperForm(void);
void laxperOpen(void);
void laxperDefine(void);
void laxperBColon(void);
void laxperAColon(void);
void laxperDriveQ(void);
void laxperDir(void);
void laxperCreateFile(void);
void laxperMore(void);
void laxperRoot(void);
void laxperTo(void);
void laxperPlusThru(void);
void laxperThru(void);
void laxperQEnough(void);
void laxperQ(void);
void laxperParenS(void);
void laxperBackslash(void);
void laxperLSlashScr(void);
void laxperCSlashL(void);
void laxperRecurse(void);
void laxperDump(void);
void laxperDotId(void);
void laxperDotS(void);
void laxperDepth(void);
void laxperBye(void);
void laxperStart(void);
void laxperOk(void);
void laxperInitial(void);
void laxperCold(void);
void laxperWarm(void);
void laxperBoot(void);
void laxperQuit(void);
void laxperRun(void);
void laxperIs(void);
void laxperYIs(void);
void laxperToIs(void);
void laxperUser(void);
void laxperNumUser(void);
void laxperCode(void);
void laxperAvoc(void);
void laxperTwoVariable(void);
void laxperTwoConstant(void);
void laxperDefinitions(void);
void laxperVocabulary(void);
void laxperDefer(void);
void laxperVariable(void);
void laxperConstant(void);
void laxperRecursive(void);
void laxperSemicolon(void);
void laxperColon(void);
void laxperRightBracket(void);
void laxperLeftBracket(void);
void laxperDoes(void);
void laxperSemicolonCode(void);
void laxperYSemicolonCode(void);
void laxperSemicolonUses(void);
void laxperAssembler(void);
void laxperYSemicolonUses(void);
void laxperReveal(void);
void laxperHide(void);
void laxperQCsp(void);
void laxperStoreCsp(void);
void laxperCreate(void);
void laxperBackslashCreate(void);
void laxperCommaView(void);
void laxperWhile(void);
void laxperElse(void);
void laxperIf(void);
void laxperRepeat(void);
void laxperAgain(void);
void laxperUntil(void);
void laxperPlusLoop(void);
void laxperLoop(void);
void laxperQDo(void);
void laxperDo(void);
void laxperThen(void);
void laxperBegin(void);
void laxperQLeave(void);
void laxperLeave(void);
void laxperQLessResolve(void);
void laxperQLessMark(void);
void laxperQGreaterResolve(void);
void laxperQGreaterMark(void);
void laxperLessResolve(void);
void laxperLessMark(void);
void laxperToResolve(void);
void laxperToMark(void);
void laxperQCondition(void);
void laxperAbort(void);
void laxperAbortQuote(void);
void laxperYAbortQuote(void);
void laxperYQError(void);
void laxperQError(void);
void laxperWhere(void);
void laxperForget(void);
void laxperYForget(void);
void laxperTrim(void);
void laxperFence(void);
void laxperQuote(void);
void laxperDotQuote(void);
void laxperCommaQuote(void);
void laxperYDotQuote(void);
void laxperYQuote(void);
void laxperXCompile(void);
void laxperXTick(void);
void laxperTick(void);
void laxperQMissing(void);
void laxperCrash(void);
void laxperControl(void);
void laxperAscii(void);
void laxperDLiteral(void);
void laxperLiteral(void);
void laxperImmediate(void);
void laxperCompile(void);
void laxperEven(void);
void laxperAlign(void);
void laxperCComma(void);
void laxperComma(void);
void laxperAllot(void);
void laxperInterpret(void);
void laxperStatus(void);
void laxperQStatus(void);
void laxperDefined(void);
void laxperQUppercase(void);
void laxperFind(void);
void laxperNumThreads(void);
void laxperYFind(void);
void laxperHash(void);
void laxperViewFrom(void);
void laxperToView(void);
void laxperToLink(void);
void laxperToName(void);
void laxperToBody(void);
void laxperLinkFrom(void);
void laxperNameFrom(void);
void laxperBodyFrom(void);
void laxperLGreaterName(void);
void laxperNToLink(void);
void laxperForth83(void);
void laxperDoneQ(void);
void laxperTraverse(void);
void laxperBackslashS(void);
void laxperParen(void);
void laxperDotParen(void);
void laxperToType(void);
void laxperWord(void);
void laxperTickWord(void);
void laxperParse(void);
void laxperParseWord(void);
void laxperSource(void);
void laxperYSource(void);
void laxperPlace(void);
void laxperSlashString(void);
void laxperScan(void);
void laxperSkip(void);
void laxperDDotR(void);
void laxperDDot(void);
void laxperYDDot(void);
void laxperUdDotR(void);
void laxperUdDot(void);
void laxperYUdDot(void);
void laxperDotR(void);
void laxperDot(void);
void laxperYDot(void);
void laxperUDotR(void);
void laxperUDot(void);
void laxperYUDot(void);
void laxperOctal(void);
void laxperDecimal(void);
void laxperHex(void);
void laxperNumS(void);
void laxperNum(void);
void laxperSign(void);
void laxperNumGreater(void);
void laxperLessNum(void);
void laxperHold(void);
void laxperNumber(void);
void laxperYNumber(void);
void laxperNumberQ(void);
void laxperYNumberQ(void);
void laxperConvert(void);
void laxperDoubleQ(void);
void laxperDigit(void);
void laxperLoad(void);
void laxperYLoad(void);
void laxperDefault(void);
void laxperViewNum(void);
void laxperFlush(void);
void laxperSaveBuffers(void);
void laxperEmptyBuffers(void);
void laxperInBlock(void);
void laxperBlock(void);
void laxperYBlock(void);
void laxperBuffer(void);
void laxperYBuffer(void);
void laxperMissing(void);
void laxperDiscord(void);
void laxperUpdate(void);
void laxperAbsentQ(void);
void laxperLatestQ(void);
void laxperCapacity(void);
void laxperDos(void);
void laxperSwitch(void);
void laxperFileQ(void);
void laxperDotFile(void);
void laxperWriteBlock(void);
void laxperReadBlock(void);
void laxperToUpdate(void);
void laxperBuffersNum(void);
void laxperToEnd(void);
void laxperToBuffers(void);
void laxperInitR0(void);
void laxperFirst(void);
void laxperToSize(void);
void laxperLimit(void);
void laxperDiskError(void);
void laxperBSlashFcb(void);
void laxperRecSlashBlk(void);
void laxperBSlashRec(void);
void laxperBSlashBuf(void);
void laxperNumBuffers(void);
void laxperQuery(void);
void laxperTib(void);
void laxperExpect(void);
void laxperCcForth(void);
void laxperCc(void);
void laxperDelIn(void);
void laxperChar(void);
void laxperYChar(void);
void laxperCrIn(void);
void laxperPIn(void);
void laxperResIn(void);
void laxperBackUp(void);
void laxperYDelIn(void);
void laxperBsIn(void);
void laxperBeep(void);
void laxperBackspaces(void);
void laxperSpaces(void);
void laxperSpace(void);
void laxperType(void);
void laxperCrLf(void);
void laxperYEmit(void);
void laxperYPrint(void);
void laxperPrStat(void);
void laxperCr(void);
void laxperKey(void);
void laxperKeyQ(void);
void laxperYConsole(void);
void laxperYKey(void);
void laxperYKeyQ(void);
void laxperBdos(void);
void laxperCompare(void);
void laxperCapsComp(void);
void laxperComp(void);
void laxperMinusTrailing(void);
void laxperPad(void);
void laxperHere(void);
void laxperUpper(void);
void laxperUpc(void);
void laxperMove(void);
void laxperLength(void);
void laxperCount(void);
void laxperBlank(void);
void laxperErase(void);
void laxperFill(void);
void laxperCaps(void);
void laxperBell(void);
void laxperBs(void);
void laxperBl(void);
void laxperEndQ(void);
void laxperNumTib(void);
void laxperSpan(void);
void laxperToIn(void);
void laxperBlk(void);
void laxperVocLink(void);
void laxperWidth(void);
void laxperTickTib(void);
void laxperContext(void);
void laxperNumVocs(void);
void laxperCurrent(void);
void laxperCsp(void);
void laxperLast(void);
void laxperRNum(void);
void laxperDpl(void);
void laxperWarning(void);
void laxperState(void);
void laxperPrior(void);
void laxperScr(void);
void laxperEmit(void);
void laxperPrinting(void);
void laxperInFile(void);
void laxperFile(void);
void laxperHld(void);
void laxperBase(void);
void laxperOffset(void);
void laxperNumLine(void);
void laxperNumOut(void);
void laxperDP(void);
void laxperRP0(void);
void laxperSP0(void);
void laxperLink(void);
void laxperEntry(void);
void laxperTos(void);
void laxperStarSlash(void);
void laxperStarSlashMod(void);
void laxperMod(void);
void laxperSlash(void);
void laxperSlashMod(void);
void laxperStar(void);
void laxperMuSlashMod(void);
void laxperMSlashMod(void);
void laxperStarD(void);
void laxperDMax(void);
void laxperDMin(void);
void laxperDGreater(void);
void laxperDLess(void);
void laxperDULess(void);
void laxperDEqual(void);
void laxperD0Equal(void);
void laxperQDNegate(void);
void laxperDMinus(void);
void laxperD2Slash(void);
void laxperD2Star(void);
void laxperDAbs(void);
void laxperSToD(void);
void laxperDNegate(void);
void laxperDPLus(void);
void laxperTwoRot(void);
void laxperFourDup(void);
void laxperThreeDup(void);
void laxperTwoOver(void);
void laxperTwoSwap(void);
void laxperTwoDup(void);
void laxperTwoDrop(void);
void laxperTwoStore(void);
void laxperTwoFetch(void);
void laxperWithin(void);
void laxperBetween(void);
void laxperMax(void);
void laxperMin(void);
void laxperGreater(void);
void laxperLess(void);
void laxperUGreater(void);
void laxperULess(void);
void laxperQNegate(void);
void laxperUnequal(void);
void laxperEqual(void);
void laxperZeroUnequal(void);
void laxperZeroGreater(void);
void laxperZeroLess(void);
void laxperZeroEqual(void);
void laxperUmSlashMod(void);
void laxperUStarD(void);
void laxperUmStar(void);
void laxperTwoMinus(void);
void laxperOneMinus(void);
void laxperTwoPlus(void);
void laxperOnePlus(void);
void laxperEightStar(void);
void laxperU2Slash(void);
void laxperTwoSlash(void);
void laxperTwoStar(void);
void laxperThree(void);
void laxperTwo(void);
void laxperOne(void);
void laxperZero(void);
void laxperPlusStore(void);
void laxperAbs(void);
void laxperMinus(void);
void laxperNegate(void);
void laxperPlus(void);
void laxperOff(void);
void laxperOn(void);
void laxperCToggle(void);
void laxperCReset(void);
void laxperCSet(void);
void laxperFalse(void);
void laxperTrue(void);
void laxperNot(void);
void laxperYor(void);
void laxperOr(void);
void laxperAnd(void);
void laxperRoll(void);
void laxperPick(void);
void laxperRFetch(void);
void laxperToR(void);
void laxperRFrom(void);
void laxperQDup(void);
void laxperFlip(void);
void laxperMinusRot(void);
void laxperRot(void);
void laxperNip(void);
void laxperTuck(void);
void laxperOver(void);
void laxperSwap(void);
void laxperDup(void);
void laxperDrop(void);
void laxperRPStore(void);
void laxperRPFetch(void);
void laxperSPStore(void);
void laxperSPFetch(void);
void laxperCMoveFrom(void);
void laxperCMove(void);
void laxperCStore(void);
void laxperCFetch(void);
void laxperStore(void);
void laxperFetch(void);
void laxperYQLeave(void);
void laxperYLeave(void);
void laxperJ(void);
void laxperI(void);
void laxperPause(void);
void laxperNoop(void);
void laxperGo(void);
void laxperPerform(void);
void laxperExecute(void);
void laxperToNext(void);
void laxperBounds(void);
void laxperYQDo(void);
void laxperYDo(void);
void laxperYPlusLoop(void);
void laxperYLoop(void);
void laxperQBranch(void);
void laxperBranch(void);
void laxperYLit(void);
void laxperUp(void);
void laxperUnnest(void);
void laxperExit(void);
void laxperForth(void);
#endif

#if (H2O_FORTH_PRIMITIVES == LAXONPERRY_FORTH) || \
    (H2O_FORTH_PRIMITIVES == LAXONPERRY_PC_FORTH)
void laxperPStore(void);
void laxperPFetch(void);
void laxperIntNum(void);
void laxperCpu8086DotBlk(void);
void laxperExtend86DotBlk(void);
void laxperKernel86DotBlk(void);
void laxperB(void);
void laxperQ(void);
#endif

#if (H2O_FORTH_PRIMITIVES == LAXONPERRY_FORTH) || \
    (H2O_FORTH_PRIMITIVES == LAXONPERRY_CPM_FORTH)
void laxperCpu8080DotBlk(void);
void laxperExtend80DotBlk(void);
void laxperKernel80DotBlk(void);
void laxperBios(void);
void laxperRP(void);
#endif

#if (H2O_FORTH_PRIMITIVES == LAXONPERRY_FORTH) || \
	(H2O_FORTH_PRIMITIVES == LAXONPERRY_CPM68K_FORTH)
void laxperCpu68000DotBlk(void);
void laxperExtend68DotBlk(void);
void laxperKernel68DotBlk(void);
/* unchecked: */
void laxperBios(void);
void laxperRP(void);
#endif

typedef void (*forthOperation)(void);

typedef  struct _forthWord {
	const char* forthWordName;
	const char* forthAlternativeName;
	const short int interpreted;
	const short int immediate;
	const short int implemented;
	const unsigned long forthWordNumber;
	const forthOperation  forthOpt; // function pointer 
} typedef_forthWord;

/* Variables */

#if H2O_FORTH_PRIMITIVES == LAXONPERRY_FORTH
#endif

#if	H2O_FORTH_PRIMITIVES == LAXONPERRY_PC_FORTH
static const PROGMEM typedef_forthWord forthWords[] = { /* PC */
			{ "EMPTY", "EMPTY", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperEmpty },
			{ "MARK", "MARK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperMark },
			{ "HELLO", "HELLO", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperHello },
			{ "BACKGROUND:", "BACKGROUND:", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBackgroundColon },
			{ "ACTIVATE", "ACTIVATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperActivate },
			{ "SET-TASK", "SET-TASK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSetTask },
			{ "TASK:", "TASK:", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTaskColon },
			{ "RESUME", "RESUME", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperResume },
			{ "DEBUG", "DEBUG", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDebug },
			{ "LISTING", "LISTING", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperListing },
			{ "SHOW", "SHOW", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperShow },
			{ "(SEMIT)", "(SEMIT)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYSemit },
			{ "(PAGE)", "(PAGE)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYPage },
			{ "FORM-FEED", "FORM-FEED", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperFormFeed },
			{ "PAGE", "PAGE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperPage },
			{ "#PAGE", "#PAGE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNumPage },
			{ "LOGO", "LOGO", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLogo },
			{ "L/PAGE", "L/PAGE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLSlashPage },
			{ "FOOTING", "FOOTING", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperFooting },
			{ "INIT-PR", "INIT-PR", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperInitPr },
			{ "EPSON", "EPSON", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperEpson },
			{ "SEE", "SEE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSee },
			{ "(SEE)", "(SEE)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYSee },
			{ "ASSOCIATIVE:", "ASSOCIATIVE:", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperAssociativeColon },
			{ "CASE:", "CASE:", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCaseColon },
			{ "MAP", "MAP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperMap },
			{ "OUT", "OUT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperOut },
			{ "DL", "DL", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDL },
			{ "DU", "DU", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDU },
			{ "DUMP", "DUMP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDump },
			{ ".HEAD", ".HEAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDotHead },
			{ "?.A", "?.A", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQDotA },
			{ "?.N", "?.N", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQDotN },
			{ "DLN", "DLN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDln },
			{ "EMIT.", "EMIT.", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperEmitDot },
			{ "D.2", "D.2", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDDotTwo },
			{ ".2", ".2", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDotTwo },
			{ "A", "A", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperA },
			{ "SHADOW", "SHADOW", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperShadow },
			{ "(WHERE)", "(WHERE)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYWhere },
			{ "FIX", "FIX", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperFix },
			{ "EDIT", "EDIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperEdit },
			{ "ED", "ED", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperEd },
			{ "DONE", "DONE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDone },
			{ "EDITOR", "EDITOR", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperEditor },
			{ "DARK", "DARK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDark },
			{ "AT", "AT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperAt },
			{ "-LINE", "-LINE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperMinusLine },
			{ "BLOT", "BLOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBlot },
			{ "REPLACE", "REPLACE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperReplace },
			{ "INSERT", "INSERT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperInsert },
			{ "DELETE", "DELETE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDelete },
			{ "SEARCH", "SEARCH", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSearch },
			{ "SCAN-1ST", "SCAN-1ST", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperScanFirst },
			{ "FOUND", "FOUND", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperFound },
			{ "TO", "TO", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTo },
			{ "CONVEY", "CONVEY", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCorvey },
			{ "(CONVEY)", "(CONVEY)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYConvey },
			{ ".TO", ".TO", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDotTo },
			{ "HOP", "HOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperHop },
			{ "CONVEY-COPY", "CONVEY-COPY", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperConveyCopy },
			{ "U/D", "U/D", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUSlashD },
			{ "HOPPED", "HOPPED", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperHopped },
			{ "VIEW", "VIEW", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperView },
			{ "@VIEW", "@VIEW", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperFetchView },
			{ "COPY", "COPY", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCopy },
			{ "(COPY)", "(COPY)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYCopy },
			{ "ESTABLISH", "ESTABLISH", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperEstablish },
			{ "L", "L", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperL },
			{ "B", "B", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperB },
			{ "N", "N", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperN },
			{ "::", "::", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperColonColon },
			{ "MANY", "MANY", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperMany },
			{ "TIMES", "TIMES", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTimes },
			{ "#TIMES", "#TIMES", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNumTimes },
			{ "WORDS", "WORDS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperWords },
			{ "LARGEST", "LARGEST", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLargest },
			{ "IND", "IND", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperInd },
			{ "INDEX", "INDEX", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperIndex },
			{ ".LINE0", ".LINE0", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDotLineZero },
			{ "TRIAD", "TRIAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTriad },
			{ "LIST", "LIST", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperList },
			{ ".SCR", ".SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDotScr },
			{ "?CR", "?CR", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQCr },
			{ "?LINE", "?LINE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQLine },
			{ "RMARGIN", "RMARGIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperRMargin },
			{ "LMARGIN", "LMARGIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLMargin },
			{ "HIDDEN", "HIDDEN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperHidden },
			{ "0<=", "0<=", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperZeroLessEqual },
			{ "0>=", "0>=", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperZeroGreaterEqual },
			{ ">=", ">=", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperGreaterEqual },
			{ "<=", "<=", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLessEqual },
			{ "U>=", "U>=", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUGreaterEqual },
			{ "U<=", "U<=", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperULessEqual },
			{ "MS", "MS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperMs },
			{ "FUDGE", "FUDGE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperFudge },
			{ "P!", "P!", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperPStore },
			{ "PC!", "PC!", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperPCStore },
			{ "P@", "P@", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperPFetch },
			{ "PC@", "PC@", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperPCFetch },
			{ "MULTI", "MULTI", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperMulti },
			{ "SINGLE", "SINGLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSingle },
			{ "STOP", "STOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperStop },
			{ "WAKE", "WAKE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperWake },
			{ "SLEEP", "SLEEP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSleep },
			{ "!LINK", "!LINK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperStoreLink },
			{ "@LINK", "@LINK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperFetchLink },
			{ "LOCAL", "LOCAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLocal },
			{ "INT#", "INT#", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperIntNum },
			{ "RESTART", "RESTART", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperRestart },
			{ "(PAUSE)", "(PAUSE)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYPause },
			{ "UNBUG", "UNBUG", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUnbug },
			{ "BUG", "BUG", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBug },
			{ "DOES?", "DOES?", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDoesQ },
			{ "DOES-SIZE", "DOES-SIZE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDoesSize },
			{ "DOES-OP", "DOES-OP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDoesOp },
			{ "LABEL", "LABEL", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLabel },
			{ "UTILITY.BLK", "UTILITY.BLK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUtilityDotBlk },
			{ "CPU8086.BLK", "CPU8086.BLK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCpu8086DotBlk },
			{ "EXTEND86.BLK", "EXTEND86.BLK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperExtend86DotBlk },
			{ "KERNEL86.BLK", "KERNEL86.BLK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperKernel86DotBlk },
			{ "VIEWS", "VIEWS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperViews },
			{ "VIEW-FILES", "VIEW-FILES", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperViewFiles },
			{ "SAVE-SYSTEM", "SAVE-SYSTEM", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSaveSystem },
			{ "FROM", "FROM", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperForm },
			{ "OPEN", "OPEN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperOpen },
			{ "DEFINE", "DEFINE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDefine },
			{ "B:", "B:", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBColon },
			{ "A:", "A:", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperAColon },
			{ "DRIVE?", "DRIVE?", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDriveQ },
			{ "DIR", "DIR", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDir },
			{ "CREATE-FILE", "CREATE-FILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCreateFile },
			{ "MORE", "MORE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperMore },
			{ "ROOT", "ROOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperRoot },
			{ "-->", "-->", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTo },
			{ "+THRU", "+THRU", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperPlusThru },
			{ "THRU", "THRU", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperThru },
			{ "?ENOUGH", "?ENOUGH", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQEnough },
			{ "?", "?", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQ },
			{ "(S", "(S", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperParenS },
			{ "\\", "\\", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBackslash },
			{ "L/SCR", "L/SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLSlashScr },
			{ "C/L", "C/L", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCSlashL },
			{ "RECURSE", "RECURSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperRecurse },
			{ "B", "B", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperB },
			{ "Q", "Q", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQ },
			{ "DUMP", "DUMP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDump },
			{ ".ID", ".ID", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDotId },
			{ ".S", ".S", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDotS },
			{ "DEPTH", "DEPTH", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDepth },
			{ "BYE", "BYE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBye },
			{ "START", "START", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperStart },
			{ "OK", "OK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperOk },
			{ "INITIAL", "INITIAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperInitial },
			{ "COLD", "COLD", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCold },
			{ "WARM", "WARM", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperWarm },
			{ "BOOT", "BOOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBoot },
			{ "QUIT", "QUIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQuit },
			{ "RUN", "RUN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperRun },
			{ "IS", "IS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperIs },
			{ "(IS)", "(IS)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYIs },
			{ ">IS", ">IS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperToIs },
			{ "USER", "USER", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUser },
			{ "#USER", "#USER", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNumUser },
			{ "CODE", "CODE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCode },
			{ "AVOC", "AVOC", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperAvoc },
			{ "2VARIABLE", "2VARIABLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTwoVariable },
			{ "2CONSTANT", "2CONSTANT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTwoConstant },
			{ "DEFINITIONS", "DEFINITIONS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDefinitions },
			{ "VOCABULARY", "VOCABULARY", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperVocabulary },
			{ "DEFER", "DEFER", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDefer },
			{ "VARIABLE", "VARIABLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperVariable },
			{ "CONSTANT", "CONSTANT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperConstant },
			{ "RECURSIVE", "RECURSIVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperRecursive },
			{ ";", ";", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSemicolon },
			{ ":", ":", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperColon },
			{ "]", "]", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperRightBracket },
			{ "[", "[", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLeftBracket },
			{ "DOES>", "DOES>", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDoes },
			{ ";CODE", ";CODE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSemicolonCode },
			{ "(;CODE)", "(;CODE)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYSemicolonCode },
			{ ";USES", ";USES", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSemicolonUses },
			{ "ASSEMBLER", "ASSEMBLER", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperAssembler },
			{ "(;USES)", "(;USES)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYSemicolonUses },
			{ "REVEAL", "REVEAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperReveal },
			{ "HIDE", "HIDE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperHide },
			{ "?CSP", "?CSP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQCsp },
			{ "!CSP", "!CSP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperStoreCsp },
			{ "CREATE", "CREATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCreate },
			{ "\"CREATE", "\"CREATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBackslashCreate },
			{ ",VIEW", ",VIEW", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCommaView },
			{ "WHILE", "WHILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperWhile },
			{ "ELSE", "ELSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperElse },
			{ "IF", "IF", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperIf },
			{ "REPEAT", "REPEAT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperRepeat },
			{ "AGAIN", "AGAIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperAgain },
			{ "UNTIL", "UNTIL", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUntil },
			{ "+LOOP", "+LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperPlusLoop },
			{ "LOOP", "LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLoop },
			{ "?DO", "?DO", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQDo },
			{ "DO", "DO", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDo },
			{ "THEN", "THEN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperThen },
			{ "BEGIN", "BEGIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBegin },
			{ "?LEAVE", "?LEAVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQLeave },
			{ "LEAVE", "LEAVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLeave },
			{ "?<RESOLVE", "?<RESOLVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQLessResolve },
			{ "?<MARK", "?<MARK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQLessMark },
			{ "?>RESOLVE", "?>RESOLVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQGreaterResolve },
			{ "?>MARK", "?>MARK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQGreaterMark },
			{ "<RESOLVE", "<RESOLVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLessResolve },
			{ "<MARK", "<MARK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLessMark },
			{ ">RESOLVE", ">RESOLVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperToResolve },
			{ ">MARK", ">MARK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperToMark },
			{ "?CONDITION", "?CONDITION", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQCondition },
			{ "ABORT", "ABORT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperAbort },
			{ "ABORT\"", "ABORT\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperAbortQuote },
			{ "(ABORT\")", "(ABORT\")", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYAbortQuote },
			{ "(?ERROR)", "(?ERROR)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYQError },
			{ "?ERROR", "?ERROR", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQError },
			{ "WHERE", "WHERE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperWhere },
			{ "FORGET", "FORGET", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperForget },
			{ "(FORGET)", "(FORGET)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYForget },
			{ "TRIM", "TRIM", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTrim },
			{ "FENCE", "FENCE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperFence },
			{ "\"", "\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQuote },
			{ ".\"", ".\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDotQuote },
			{ ",\"", ",\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCommaQuote },
			{ "(.\")", "", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYDotQuote },
			{ "(\")", "(\")", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYQuote },
			{ "[COMPILE]", "[COMPILE]", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperXCompile },
			{ "[']", "[']", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperXTick },
			{ "'", "'", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTick },
			{ "?MISSING", "?MISSING", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQMissing },
			{ "CRASH", "CRASH", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCrash },
			{ "CONTROL", "CONTROL", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperControl },
			{ "ASCII", "ASCII", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperAscii },
			{ "DLITERAL", "DLITERAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDLiteral },
			{ "LITERAL", "LITERAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLiteral },
			{ "IMMEDIATE", "IMMEDIATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperImmediate },
			{ "COMPILE", "COMPILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCompile },
			{ "EVEN", "EVEN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperEven },
			{ "ALIGN", "ALIGN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperAlign },
			{ "C,", "C,", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCComma },
			{ ",", ",", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperComma },
			{ "ALLOT", "ALLOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperAllot },
			{ "INTERPRET", "INTERPRET", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperInterpret },
			{ "STATUS", "STATUS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperStatus },
			{ "?STACK", "?STACK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQStatus },
			{ "DEFINED", "DEFINED", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDefined },
			{ "?UPPERCASE", "?UPPERCASE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQUppercase },
			{ "FIND", "FIND", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperFind },
			{ "#THREADS", "#THREADS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNumThreads },
			{ "(FIND)", "(FIND)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYFind },
			{ "HASH", "HASH", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperHash },
			{ "VIEW>", "VIEW>", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperViewFrom },
			{ ">VIEW", ">VIEW", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperToView },
			{ ">LINK", ">LINK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperToLink },
			{ ">NAME", ">NAME", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperToName },
			{ ">BODY", ">BODY", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperToBody },
			{ "LINK>", "LINK>", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLinkFrom },
			{ "NAME>", "NAME>", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNameFrom },
			{ "BODY>", "BODY>", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBodyFrom },
			{ "L>NAME", "L>NAME", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLGreaterName },
			{ "N>LINK", "N>LINK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNToLink },
			{ "FORTH-83", "FORTH-83", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperForth83 },
			{ "DONE?", "DONE?", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDoneQ },
			{ "TRAVERSE", "TRAVERSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTraverse },
			{ "\\S", "\\S", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBackslashS },
			{ "(", "(", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperParen},
			{ ".(", ".(", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDotParen },
			{ ">TYPE", ">TYPE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperToType },
			{ "WORD", "WORD", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperWord },
			{ "'WORD", "'WORD", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTickWord },
			{ "PARSE", "PARSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperParse },
			{ "PARSE-WORD", "PARSE-WORD", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperParseWord },
			{ "SOURCE", "SOURCE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSource },
			{ "(SOURCE)", "(SOURCE)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYSource },
			{ "PLACE", "PLACE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperPlace },
			{ "/STRING", "/STRING", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSlashString },
			{ "SCAN", "SCAN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperScan },
			{ "SKIP", "SKIP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSkip },
			{ "D.R", "D.R", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDDotR },
			{ "D.", "D.", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDDot },
			{ "(D.)", "(D.)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYDDot },
			{ "UD.R", "UD.R", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUdDotR },
			{ "UD.", "UD.", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUdDot },
			{ "(UD.)", "(UD.)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYUdDot },
			{ ".R", ".R", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDotR },
			{ ".", ".", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDot },
			{ "(.)", "(.)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYDot },
			{ "U.R", "U.R", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUDotR },
			{ "U.", "U.", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUDot },
			{ "(U.)", "(U.)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYUDot },
			{ "OCTAL", "OCTAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperOctal },
			{ "DECIMAL", "DECIMAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDecimal },
			{ "HEX", "HEX", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperHex },
			{ "#S", "#S", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNumS },
			{ "#", "#", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNum },
			{ "SIGN", "SIGN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSign },
			{ "#>", "#>", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNumGreater },
			{ "<#", "<#", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLessNum },
			{ "HOLD", "HOLD", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperHold },
			{ "NUMBER", "NUMBER", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNumber },
			{ "(NUMBER)", "(NUMBER)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYNumber },
			{ "NUMBER?", "NUMBER?", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNumberQ },
			{ "(NUMBER?)", "(NUMBER?)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYNumberQ },
			{ "CONVERT", "CONVERT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperConvert },
			{ "DOUBLE?", "DOUBLE?", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDoubleQ },
			{ "DIGIT", "DIGIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDigit },
			{ "LOAD", "LOAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLoad },
			{ "(LOAD)", "(LOAD)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYLoad },
			{ "DEFAULT", "DEFAULT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDefault },
			{ "VIEW#", "VIEW#", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperViewNum },
			{ "FLUSH", "FLUSH", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperFlush },
			{ "SAVE-BUFFERS", "SAVE-BUFFERS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSaveBuffers },
			{ "EMPTY-BUFFERS", "EMPTY-BUFFERS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperEmptyBuffers },
			{ "IN-BLOCK", "IN-BLOCK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperInBlock },
			{ "BLOCK", "BLOCK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBlock },
			{ "(BLOCK)", "(BLOCK)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYBlock },
			{ "BUFFER", "BUFFER", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBuffer },
			{ "(BUFFER)", "(BUFFER)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYBuffer },
			{ "MISSING", "MISSING", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperMissing },
			{ "DISCARD", "DISCARD", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDiscord },
			{ "UPDATE", "UPDATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUpdate },
			{ "ABSENT?", "ABSENT?", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperAbsentQ },
			{ "LATEST?", "LATEST?", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLatestQ },
			{ "CAPACITY", "CAPACITY", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCapacity },
			{ "DOS", "DOS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDos },
			{ "SWITCH", "SWITCH", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSwitch },
			{ "FILE?", "FILE?", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperFileQ },
			{ ".FILE", ".FILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDotFile },
			{ "WRITE-BLOCK", "WRITE-BLOCK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperWriteBlock },
			{ "READ-BLOCK", "READ-BLOCK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperReadBlock },
			{ ">UPDATE", ">UPDATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperToUpdate },
			{ "BUFFER#", "BUFFER#", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBuffersNum },
			{ ">END", ">END", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperToEnd },
			{ ">BUFFERS", ">BUFFERS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperToBuffers },
			{ "INIT-R0", "INIT-R0", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperInitR0 },
			{ "FIRST", "FIRST", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperFirst },
			{ ">SIZE", ">SIZE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperToSize },
			{ "LIMIT", "LIMIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLimit },
			{ "DISK-ERROR", "DISK-ERROR", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDiskError },
			{ "B/FCB", "B/FCB", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBSlashFcb },
			{ "REC/BLK", "REC/BLK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperRecSlashBlk },
			{ "B/REC", "B/REC", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBSlashRec },
			{ "B/BUF", "B/BUF", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBSlashBuf },
			{ "#BUFFERS", "#BUFFERS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNumBuffers },
			{ "QUERY", "QUERY", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQuery },
			{ "TIB", "TIB", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTib },
			{ "EXPECT", "EXPECT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperExpect },
			{ "CC-FORTH", "CC-FORTH", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCcForth },
			{ "CC", "CC", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCc },
			{ "DEL-IN", "DEL-IN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDelIn },
			{ "CHAR", "CHAR", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperChar },
			{ "(CHAR)", "(CHAR)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYChar },
			{ "CR-IN", "CR-IN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCrIn },
			{ "P-IN", "P-IN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperPIn },
			{ "RES-IN", "RES-IN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperResIn },
			{ "BACK-UP", "BACK-UP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBackUp },
			{ "(DEL-IN)", "(DEL-IN)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYDelIn },
			{ "BS-IN", "BS-IN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBsIn },
			{ "BEEP", "BEEP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBeep },
			{ "BACKSPACES", "BACKSPACES", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBackspaces },
			{ "SPACES", "SPACES", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSpaces },
			{ "SPACE", "SPACE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSpace },
			{ "TYPE", "TYPE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperType },
			{ "CRLF", "CRLF", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCrLf },
			{ "(EMIT)", "(EMIT)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYEmit },
			{ "(PRINT)", "(PRINT)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYPrint },
			{ "PR-STAT", "PR-STAT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperPrStat },
			{ "CR", "CR", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCr },
			{ "KEY", "KEY", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperKey },
			{ "KEY?", "KEY?", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperKeyQ },
			{ "(CONSOLE)", "(CONSOLE)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYConsole },
			{ "(KEY)", "(KEY)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYKey },
			{ "(KEY?)", "(KEY?)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYKeyQ },
			{ "BDOS", "BDOS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBdos },
			{ "COMPARE", "COMPARE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCompare },
			{ "CAPS-COMP", "CAPS-COMP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCapsComp },
			{ "COMP", "COMP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperComp },
			{ "-TRAILING", "-TRAILING", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperMinusTrailing },
			{ "PAD", "PAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperPad },
			{ "HERE", "HERE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperHere },
			{ "UPPER", "UPPER", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUpper },
			{ "UPC", "UPC", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUpc },
			{ "MOVE", "MOVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperMove },
			{ "LENGTH", "LENGTH", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLength },
			{ "COUNT", "COUNT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCount },
			{ "BLANK", "BLANK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBlank },
			{ "ERASE", "ERASE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperErase },
			{ "FILL", "FILL", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperFill },
			{ "CAPS", "CAPS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCaps },
			{ "BELL", "BELL", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBell },
			{ "BS", "BS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBs },
			{ "BL", "BL", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBl },
			{ "END?", "END?", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperEndQ },
			{ "#TIB", "#TIB", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNumTib },
			{ "SPAN", "SPAN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSpan },
			{ ">IN", ">IN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperToIn },
			{ "BLK", "BLK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBlk },
			{ "VOC-LINK", "VOC-LINK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperVocLink },
			{ "WIDTH", "WIDTH", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperWidth },
			{ "'TIB", "'TIB", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTickTib },
			{ "CONTEXT", "CONTEXT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperContext },
			{ "#VOCS", "#VOCS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNumVocs },
			{ "CURRENT", "CURRENT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCurrent },
			{ "CSP", "CSP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCsp },
			{ "LAST", "LAST", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLast },
			{ "R#", "R#", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperRNum },
			{ "DPL", "DPL", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDpl },
			{ "WARNING", "WARNING", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperWarning },
			{ "STATE", "STATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperState },
			{ "PRIOR", "PRIOR", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperPrior },
			{ "SCR", "SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperScr },
			{ "EMIT", "EMIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperEmit },
			{ "PRINTING", "", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperPrinting },
			{ "IN-FILE", "IN-FILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperInFile },
			{ "FILE", "FILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperFile },
			{ "HLD", "HLD", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperHld },
			{ "BASE", "BASE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBase },
			{ "OFFSET", "OFFSET", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperOffset },
			{ "#LINE", "#LINE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNumLine },
			{ "#OUT", "#OUT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNumOut },
			{ "DP", "DP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDP },
			{ "RP0", "RP0", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperRP0 },
			{ "SP0", "SP0", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSP0 },
			{ "LINK", "LINK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLink },
			{ "ENTRY", "ENTRY", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperEntry },
			{ "TOS", "TOS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTos },
			{ "*/", "*/", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperStarSlash },
			{ "*/MOD", "*/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperStarSlashMod },
			{ "MOD", "MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperMod },
			{ "/", "/", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSlash },
			{ "/MOD", "/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSlashMod },
			{ "*", "*", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperStar },
			{ "MU/MOD", "MU/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperMuSlashMod },
			{ "M/MOD", "M/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperMSlashMod },
			{ "*D", "*D", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperStarD },
			{ "DMAX", "DMAX", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDMax },
			{ "DMIN", "DMIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDMin },
			{ "D>", "D>", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDGreater },
			{ "D<", "D<", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDLess },
			{ "DU<", "DU<", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDULess },
			{ "D=", "D=", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDEqual },
			{ "D0=", "D0=", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperD0Equal },
			{ "?DNEGATE", "?DNEGATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQDNegate },
			{ "D-", "D-", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDMinus },
			{ "D2/", "D2/", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperD2Slash },
			{ "D2*", "D2*", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperD2Star },
			{ "DABS", "DABS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDAbs },
			{ "S>D", "S>D", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSToD },
			{ "DNEGATE", "DNEGATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDNegate },
			{ "D+", "D+", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDPLus },
			{ "2ROT", "2ROT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTwoRot },
			{ "4DUP", "4DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperFourDup },
			{ "3DUP", "3DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperThreeDup },
			{ "2OVER", "2OVER", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTwoOver },
			{ "2SWAP", "2SWAP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTwoSwap },
			{ "2DUP", "2DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTwoDup },
			{ "2DROP", "2DROP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTwoDrop },
			{ "2!", "2!", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTwoStore },
			{ "2@", "2@", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTwoFetch },
			{ "WITHIN", "WITHIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperWithin },
			{ "BETWEEN", "BETWEEN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBetween },
			{ "MAX", "MAX", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperMax },
			{ "MIN", "MIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperMin },
			{ ">", ">", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperGreater },
			{ "<", "<", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLess },
			{ "U>", "U>", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUGreater },
			{ "U<", "U<", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperULess },
			{ "?NEGATE", "?NEGATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQNegate },
			{ "<>", "<>", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUnequal },
			{ "=", "=", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperEqual },
			{ "0<>", "0<>", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperZeroUnequal },
			{ "0>", "0>", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperZeroGreater },
			{ "0<", "0<", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperZeroLess },
			{ "0=", "0=", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperZeroEqual },
			{ "UM/MOD", "UM/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUmSlashMod },
			{ "U*D", "U*D", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUStarD },
			{ "UM*", "UM*", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUmStar },
			{ "2-", "2-", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTwoMinus },
			{ "1-", "1-", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperOneMinus },
			{ "2+", "2+", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTwoPlus },
			{ "1+", "1+", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperOnePlus },
			{ "8*", "8*", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperEightStar },
			{ "U2/", "U2/", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperU2Slash },
			{ "2/", "2/", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTwoSlash },
			{ "2*", "2*", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTwoStar },
			{ "3", "3", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperThree },
			{ "2", "2", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTwo },
			{ "1", "1", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperOne },
			{ "0", "0", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperZero },
			{ "+!", "+!", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperPlusStore },
			{ "ABS", "ABS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperAbs },
			{ "-", "-", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperMinus },
			{ "NEGATE", "NEGATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNegate },
			{ "+", "+", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperPlus },
			{ "OFF", "OFF", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperOff },
			{ "ON", "ON", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperOn },
			{ "CTOGGLE", "CTOGGLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCToggle },
			{ "CRESET", "CRESET", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCReset },
			{ "CSET", "CSET", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCSet },
			{ "FALSE", "FALSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperFalse },
			{ "TRUE", "TRUE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTrue },
			{ "NOT", "NOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNot },
			{ "XOR", "XOR", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYor },
			{ "OR", "OR", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperOr },
			{ "AND", "AND", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperAnd },
			{ "ROLL", "ROLL", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperRoll },
			{ "PICK", "PICK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperPick },
			{ "R@", "R@", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperRFetch },
			{ ">R", ">R", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperToR },
			{ "R>", "R>", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperRFrom },
			{ "?DUP", "?DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQDup },
			{ "FLIP", "FLIP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperFlip },
			{ "-ROT", "-ROT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperMinusRot },
			{ "ROT", "ROT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperRot },
			{ "NIP", "NIP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNip },
			{ "TUCK", "TUCK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTuck },
			{ "OVER", "OVER", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperOver },
			{ "SWAP", "SWAP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSwap },
			{ "DUP", "DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDup },
			{ "DROP", "DROP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDrop },
			{ "RP!", "RP!", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperRPStore },
			{ "RP@", "RP@", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperRPFetch },
			{ "SP!", "SP!", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSPStore },
			{ "SP@", "SP@", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSPFetch },
			{ "CMOVE>", "CMOVE>", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCMoveFrom },
			{ "CMOVE", "CMOVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCMove },
			{ "C!", "C!", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCStore },
			{ "C@", "C@", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCFetch },
			{ "!", "!", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperStore },
			{ "@", "@", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperFetch },
			{ "(?LEAVE)", "(?LEAVE)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYQLeave },
			{ "(LEAVE)", "(LEAVE)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYLeave },
			{ "J", "J", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperJ },
			{ "I", "I", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperI },
			{ "PAUSE", "PAUSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperPause },
			{ "NOOP", "NOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNoop },
			{ "GO", "GO", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperGo },
			{ "PERFORM", "PERFORM", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperPerform },
			{ "EXECUTE", "EXECUTE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperExecute },
			{ ">NEXT", ">NEXT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperToNext },
			{ "BOUNDS", "BOUNDS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBounds },
			{ "(?DO)", "(?DO)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYQDo },
			{ "(DO)", "(DO)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYDo },
			{ "(+LOOP)", "(+LOOP)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYPlusLoop },
			{ "(LOOP)", "(LOOP)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYLoop },
			{ "?BRANCH", "?BRANCH", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQBranch },
			{ "BRANCH", "BRANCH", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBranch },
			{ "(LIT)", "(LIT)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYLit },
			{ "UP", "UP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUp },
			{ "UNNEST", "UNNEST", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUnnest },
			{ "EXIT", "EXIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperExit },
			{ "FORTH", "FORTH", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperForth },
			{ "H2OFORTH", "H2OFORTH", TRUE, FALSE, FALSE, MAX_FORTHWORD_ID, (forthOperation)NULL }
};

//                                   
#endif

#if	H2O_FORTH_PRIMITIVES == LAXONPERRY_CPM_FORTH
static const typedef_forthWord forthWords[] = { /* CP/M */
			{ "EMPTY", "EMPTY", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperEmpty },
			{ "MARK", "MARK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperMark },
			{ "HELLO", "HELLO", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperHello },
			{ "BACKGROUND:", "BACKGROUND:", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBackgroundColon },
			{ "ACTIVATE", "ACTIVATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperActivate },
			{ "SET-TASK", "SET-TASK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSetTask },
			{ "TASK:", "TASK:", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTaskColon },
			{ "RESUME", "RESUME", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperResume },
			{ "DEBUG", "DEBUG", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDebug },
			{ "LISTING", "LISTING", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperListing },
			{ "SHOW", "SHOW", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperShow },
			{ "(SEMIT)", "(SEMIT)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYSemit },
			{ "(PAGE)", "(PAGE)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYPage },
			{ "FORM-FEED", "FORM-FEED", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperFormFeed },
			{ "PAGE", "PAGE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperPage },
			{ "#PAGE", "#PAGE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNumPage },
			{ "LOGO", "LOGO", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLogo },
			{ "L/PAGE", "L/PAGE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLSlashPage },
			{ "FOOTING", "FOOTING", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperFooting },
			{ "INIT-PR", "INIT-PR", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperInitPr },
			{ "EPSON", "EPSON", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperEpson },
			{ "SEE", "SEE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSee },
			{ "(SEE)", "(SEE)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYSee },
			{ "ASSOCIATIVE:", "ASSOCIATIVE:", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperAssociativeColon },
			{ "CASE:", "CASE:", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCaseColon },
			{ "MAP", "MAP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperMap },
			{ "OUT", "OUT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperOut },
			{ "DL", "DL", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDL },
			{ "DU", "DU", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDU },
			{ "DUMP", "DUMP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDump },
			{ ".HEAD", ".HEAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDotHead },
			{ "?.A", "?.A", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQDotA },
			{ "?.N", "?.N", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQDotN },
			{ "DLN", "DLN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDln },
			{ "EMIT.", "EMIT.", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperEmitDot },
			{ "D.2", "D.2", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDDotTwo },
			{ ".2", ".2", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDotTwo },
			{ "A", "A", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperA },
			{ "SHADOW", "SHADOW", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperShadow },
			{ "(WHERE)", "(WHERE)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYWhere },
			{ "FIX", "FIX", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperFix },
			{ "EDIT", "EDIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperEdit },
			{ "ED", "ED", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperEd },
			{ "DONE", "DONE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDone },
			{ "EDITOR", "EDITOR", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperEditor },
			{ "DARK", "DARK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDark },
			{ "AT", "AT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperAt },
			{ "-LINE", "-LINE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperMinusLine },
			{ "BLOT", "BLOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBlot },
			{ "REPLACE", "REPLACE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperReplace },
			{ "INSERT", "INSERT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperInsert },
			{ "DELETE", "DELETE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDelete },
			{ "SEARCH", "SEARCH", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSearch },
			{ "SCAN-1ST", "SCAN-1ST", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperScanFirst },
			{ "FOUND", "FOUND", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperFound },
			{ "TO", "TO", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTo },
			{ "CONVEY", "CONVEY", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCorvey },
			{ "(CONVEY)", "(CONVEY)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYConvey },
			{ ".TO", ".TO", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDotTo },
			{ "HOP", "HOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperHop },
			{ "CONVEY-COPY", "CONVEY-COPY", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperConveyCopy },
			{ "U/D", "U/D", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUSlashD },
			{ "HOPPED", "HOPPED", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperHopped },
			{ "VIEW", "VIEW", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperView },
			{ "@VIEW", "@VIEW", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperFetchView },
			{ "COPY", "COPY", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCopy },
			{ "(COPY)", "(COPY)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYCopy },
			{ "ESTABLISH", "ESTABLISH", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperEstablish },
			{ "L", "L", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperL },
			{ "B", "B", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperB },
			{ "N", "N", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperN },
			{ "::", "::", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperColonColon },
			{ "MANY", "MANY", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperMany },
			{ "TIMES", "TIMES", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTimes },
			{ "#TIMES", "#TIMES", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNumTimes },
			{ "WORDS", "WORDS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperWords },
			{ "LARGEST", "LARGEST", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLargest },
			{ "IND", "IND", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperInd },
			{ "INDEX", "INDEX", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperIndex },
			{ ".LINE0", ".LINE0", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDotLineZero },
			{ "TRIAD", "TRIAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTriad },
			{ "LIST", "LIST", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperList },
			{ ".SCR", ".SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDotScr },
			{ "?CR", "?CR", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQCr },
			{ "?LINE", "?LINE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQLine },
			{ "RMARGIN", "RMARGIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperRMargin },
			{ "LMARGIN", "LMARGIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLMargin },
			{ "HIDDEN", "HIDDEN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperHidden },
			{ "0<=", "0<=", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperZeroLessEqual },
			{ "0>=", "0>=", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperZeroGreaterEqual },
			{ ">=", ">=", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperGreaterEqual },
			{ "<=", "<=", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLessEqual },
			{ "U>=", "U>=", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUGreaterEqual },
			{ "U<=", "U<=", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperULessEqual },
			{ "MS", "MS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperMs },
			{ "FUDGE", "FUDGE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperFudge },
			{ "PC!", "PC!", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperPCStore },
			{ "PC@", "PC@", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperPCFetch },
			{ "MULTI", "MULTI", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperMulti },
			{ "SINGLE", "SINGLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSingle },
			{ "STOP", "STOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperStop },
			{ "WAKE", "WAKE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperWake },
			{ "SLEEP", "SLEEP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSleep },
			{ "!LINK", "!LINK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperStoreLink },
			{ "@LINK", "@LINK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperFetchLink },
			{ "LOCAL", "LOCAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLocal },
			{ "RESTART", "RESTART", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperRestart },
			{ "(PAUSE)", "(PAUSE)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYPause },
			{ "UNBUG", "UNBUG", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUnbug },
			{ "BUG", "BUG", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBug },
			{ "DOES?", "DOES?", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDoesQ },
			{ "DOES-SIZE", "DOES-SIZE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDoesSize },
			{ "DOES-OP", "DOES-OP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDoesOp },
			{ "LABEL", "LABEL", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLabel },
			{ "UTILITY.BLK", "UTILITY.BLK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUtilityDotBlk },
			{ "CPU8080.BLK", "CPU8080.BLK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCpu8080DotBlk },
			{ "EXTEND80.BLK", "EXTEND80.BLK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperExtend80DotBlk },
			{ "KERNEL80.BLK", "KERNEL80.BLK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperKernel80DotBlk },
			{ "VIEWS", "VIEWS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperViews },
			{ "VIEW-FILES", "VIEW-FILES", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperViewFiles },
			{ "SAVE-SYSTEM", "SAVE-SYSTEM", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSaveSystem },
			{ "FROM", "FROM", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperForm },
			{ "OPEN", "OPEN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperOpen },
			{ "DEFINE", "DEFINE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDefine },
			{ "B:", "B:", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBColon },
			{ "A:", "A:", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperAColon },
			{ "DRIVE?", "DRIVE?", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDriveQ },
			{ "DIR", "DIR", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDir },
			{ "CREATE-FILE", "CREATE-FILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCreateFile },
			{ "MORE", "MORE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperMore },
			{ "ROOT", "ROOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperRoot },
			{ "-->", "-->", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTo },
			{ "+THRU", "+THRU", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperPlusThru },
			{ "THRU", "THRU", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperThru },
			{ "?ENOUGH", "?ENOUGH", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQEnough },
			{ "?", "?", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQ },
			{ "(S", "(S", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperParenS },
			{ "\\", "\\", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBackslash },
			{ "L/SCR", "L/SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLSlashScr },
			{ "C/L", "C/L", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCSlashL },
			{ "RECURSE", "RECURSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperRecurse },
			{ "DUMP", "DUMP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDump },
			{ ".ID", ".ID", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDotId },
			{ ".S", ".S", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDotS },
			{ "DEPTH", "DEPTH", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDepth },
			{ "BYE", "BYE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBye },
			{ "START", "START", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperStart },
			{ "OK", "OK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperOk },
			{ "INITIAL", "INITIAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperInitial },
			{ "COLD", "COLD", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCold },
			{ "WARM", "WARM", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperWarm },
			{ "BOOT", "BOOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBoot },
			{ "QUIT", "QUIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQuit },
			{ "RUN", "RUN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperRun },
			{ "IS", "IS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperIs },
			{ "(IS)", "(IS)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYIs },
			{ ">IS", ">IS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperToIs },
			{ "USER", "USER", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUser },
			{ "#USER", "#USER", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNumUser },
			{ "CODE", "CODE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCode },
			{ "AVOC", "AVOC", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperAvoc },
			{ "2VARIABLE", "2VARIABLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTwoVariable },
			{ "2CONSTANT", "2CONSTANT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTwoConstant },
			{ "DEFINITIONS", "DEFINITIONS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDefinitions },
			{ "VOCABULARY", "VOCABULARY", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperVocabulary },
			{ "DEFER", "DEFER", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDefer },
			{ "VARIABLE", "VARIABLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperVariable },
			{ "CONSTANT", "CONSTANT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperConstant },
			{ "RECURSIVE", "RECURSIVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperRecursive },
			{ ";", ";", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSemicolon },
			{ ":", ":", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperColon },
			{ "]", "]", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperRightBracket },
			{ "[", "[", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLeftBracket },
			{ "DOES>", "DOES>", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDoes },
			{ ";CODE", ";CODE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSemicolonCode },
			{ "(;CODE)", "(;CODE)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYSemicolonCode },
			{ ";USES", ";USES", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSemicolonUses },
			{ "ASSEMBLER", "ASSEMBLER", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperAssembler },
			{ "(;USES)", "(;USES)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYSemicolonUses },
			{ "REVEAL", "REVEAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperReveal },
			{ "HIDE", "HIDE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperHide },
			{ "?CSP", "?CSP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQCsp },
			{ "!CSP", "!CSP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperStoreCsp },
			{ "CREATE", "CREATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCreate },
			{ "\"CREATE", "\"CREATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBackslashCreate },
			{ ",VIEW", ",VIEW", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCommaView },
			{ "WHILE", "WHILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperWhile },
			{ "ELSE", "ELSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperElse },
			{ "IF", "IF", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperIf },
			{ "REPEAT", "REPEAT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperRepeat },
			{ "AGAIN", "AGAIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperAgain },
			{ "UNTIL", "UNTIL", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUntil },
			{ "+LOOP", "+LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperPlusLoop },
			{ "LOOP", "LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLoop },
			{ "?DO", "?DO", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQDo },
			{ "DO", "DO", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDo },
			{ "THEN", "THEN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperThen },
			{ "BEGIN", "BEGIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBegin },
			{ "?LEAVE", "?LEAVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQLeave },
			{ "LEAVE", "LEAVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLeave },
			{ "?<RESOLVE", "?<RESOLVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQLessResolve },
			{ "?<MARK", "?<MARK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQLessMark },
			{ "?>RESOLVE", "?>RESOLVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQGreaterResolve },
			{ "?>MARK", "?>MARK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQGreaterMark },
			{ "<RESOLVE", "<RESOLVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLessResolve },
			{ "<MARK", "<MARK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLessMark },
			{ ">RESOLVE", ">RESOLVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperToResolve },
			{ ">MARK", ">MARK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperToMark },
			{ "?CONDITION", "?CONDITION", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQCondition },
			{ "ABORT", "ABORT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperAbort },
			{ "ABORT\"", "ABORT\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperAbortQuote },
			{ "(ABORT\")", "(ABORT\")", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYAbortQuote },
			{ "(?ERROR)", "(?ERROR)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYQError },
			{ "?ERROR", "?ERROR", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQError },
			{ "WHERE", "WHERE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperWhere },
			{ "FORGET", "FORGET", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperForget },
			{ "(FORGET)", "(FORGET)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYForget },
			{ "TRIM", "TRIM", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTrim },
			{ "FENCE", "FENCE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperFence },
			{ "\"", "\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQuote },
			{ ".\"", ".\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDotQuote },
			{ ",\"", ",\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCommaQuote },
			{ "(.\")", "", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYDotQuote },
			{ "(\")", "(\")", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYQuote },
			{ "[COMPILE]", "[COMPILE]", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperXCompile },
			{ "[']", "[']", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperXTick },
			{ "'", "'", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTick },
			{ "?MISSING", "?MISSING", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQMissing },
			{ "CRASH", "CRASH", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCrash },
			{ "CONTROL", "CONTROL", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperControl },
			{ "ASCII", "ASCII", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperAscii },
			{ "DLITERAL", "DLITERAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDLiteral },
			{ "LITERAL", "LITERAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLiteral },
			{ "IMMEDIATE", "IMMEDIATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperImmediate },
			{ "COMPILE", "COMPILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCompile },
			{ "EVEN", "EVEN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperEven },
			{ "ALIGN", "ALIGN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperAlign },
			{ "C,", "C,", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCComma },
			{ ",", ",", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperComma },
			{ "ALLOT", "ALLOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperAllot },
			{ "INTERPRET", "INTERPRET", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperInterpret },
			{ "STATUS", "STATUS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperStatus },
			{ "?STACK", "?STACK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQStatus },
			{ "DEFINED", "DEFINED", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDefined },
			{ "?UPPERCASE", "?UPPERCASE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQUppercase },
			{ "FIND", "FIND", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperFind },
			{ "#THREADS", "#THREADS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNumThreads },
			{ "(FIND)", "(FIND)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYFind },
			{ "HASH", "HASH", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperHash },
			{ "VIEW>", "VIEW>", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperViewFrom },
			{ ">VIEW", ">VIEW", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperToView },
			{ ">LINK", ">LINK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperToLink },
			{ ">NAME", ">NAME", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperToName },
			{ ">BODY", ">BODY", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperToBody },
			{ "LINK>", "LINK>", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLinkFrom },
			{ "NAME>", "NAME>", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNameFrom },
			{ "BODY>", "BODY>", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBodyFrom },
			{ "L>NAME", "L>NAME", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLGreaterName },
			{ "N>LINK", "N>LINK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNToLink },
			{ "FORTH-83", "FORTH-83", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperForth83 },
			{ "DONE?", "DONE?", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDoneQ },
			{ "TRAVERSE", "TRAVERSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTraverse },
			{ "\\S", "\\S", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBackslashS },
			{ "(", "(", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperParen},
			{ ".(", ".(", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDotParen },
			{ ">TYPE", ">TYPE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperToType },
			{ "WORD", "WORD", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperWord },
			{ "'WORD", "'WORD", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTickWord },
			{ "PARSE", "PARSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperParse },
			{ "PARSE-WORD", "PARSE-WORD", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperParseWord },
			{ "SOURCE", "SOURCE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSource },
			{ "(SOURCE)", "(SOURCE)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYSource },
			{ "PLACE", "PLACE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperPlace },
			{ "/STRING", "/STRING", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSlashString },
			{ "SCAN", "SCAN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperScan },
			{ "SKIP", "SKIP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSkip },
			{ "D.R", "D.R", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDDotR },
			{ "D.", "D.", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDDot },
			{ "(D.)", "(D.)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYDDot },
			{ "UD.R", "UD.R", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUdDotR },
			{ "UD.", "UD.", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUdDot },
			{ "(UD.)", "(UD.)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYUdDot },
			{ ".R", ".R", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDotR },
			{ ".", ".", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDot },
			{ "(.)", "(.)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYDot },
			{ "U.R", "U.R", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUDotR },
			{ "U.", "U.", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUDot },
			{ "(U.)", "(U.)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYUDot },
			{ "OCTAL", "OCTAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperOctal },
			{ "DECIMAL", "DECIMAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDecimal },
			{ "HEX", "HEX", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperHex },
			{ "#S", "#S", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNumS },
			{ "#", "#", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNum },
			{ "SIGN", "SIGN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSign },
			{ "#>", "#>", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNumGreater },
			{ "<#", "<#", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLessNum },
			{ "HOLD", "HOLD", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperHold },
			{ "NUMBER", "NUMBER", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNumber },
			{ "(NUMBER)", "(NUMBER)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYNumber },
			{ "NUMBER?", "NUMBER?", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNumberQ },
			{ "(NUMBER?)", "(NUMBER?)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYNumberQ },
			{ "CONVERT", "CONVERT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperConvert },
			{ "DOUBLE?", "DOUBLE?", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDoubleQ },
			{ "DIGIT", "DIGIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDigit },
			{ "LOAD", "LOAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLoad },
			{ "(LOAD)", "(LOAD)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYLoad },
			{ "DEFAULT", "DEFAULT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDefault },
			{ "VIEW#", "VIEW#", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperViewNum },
			{ "FLUSH", "FLUSH", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperFlush },
			{ "SAVE-BUFFERS", "SAVE-BUFFERS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSaveBuffers },
			{ "EMPTY-BUFFERS", "EMPTY-BUFFERS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperEmptyBuffers },
			{ "IN-BLOCK", "IN-BLOCK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperInBlock },
			{ "BLOCK", "BLOCK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBlock },
			{ "(BLOCK)", "(BLOCK)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYBlock },
			{ "BUFFER", "BUFFER", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBuffer },
			{ "(BUFFER)", "(BUFFER)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYBuffer },
			{ "MISSING", "MISSING", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperMissing },
			{ "DISCARD", "DISCARD", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDiscord },
			{ "UPDATE", "UPDATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUpdate },
			{ "ABSENT?", "ABSENT?", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperAbsentQ },
			{ "LATEST?", "LATEST?", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLatestQ },
			{ "CAPACITY", "CAPACITY", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCapacity },
			{ "DOS", "DOS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDos },
			{ "SWITCH", "SWITCH", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSwitch },
			{ "FILE?", "FILE?", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperFileQ },
			{ ".FILE", ".FILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDotFile },
			{ "WRITE-BLOCK", "WRITE-BLOCK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperWriteBlock },
			{ "READ-BLOCK", "READ-BLOCK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperReadBlock },
			{ ">UPDATE", ">UPDATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperToUpdate },
			{ "BUFFER#", "BUFFER#", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBuffersNum },
			{ ">END", ">END", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperToEnd },
			{ ">BUFFERS", ">BUFFERS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperToBuffers },
			{ "INIT-R0", "INIT-R0", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperInitR0 },
			{ "FIRST", "FIRST", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperFirst },
			{ ">SIZE", ">SIZE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperToSize },
			{ "LIMIT", "LIMIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLimit },
			{ "DISK-ERROR", "DISK-ERROR", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDiskError },
			{ "B/FCB", "B/FCB", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBSlashFcb },
			{ "REC/BLK", "REC/BLK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperRecSlashBlk },
			{ "B/REC", "B/REC", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBSlashRec },
			{ "B/BUF", "B/BUF", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBSlashBuf },
			{ "#BUFFERS", "#BUFFERS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNumBuffers },
			{ "QUERY", "QUERY", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQuery },
			{ "TIB", "TIB", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTib },
			{ "EXPECT", "EXPECT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperExpect },
			{ "CC-FORTH", "CC-FORTH", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCcForth },
			{ "CC", "CC", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCc },
			{ "DEL-IN", "DEL-IN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDelIn },
			{ "CHAR", "CHAR", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperChar },
			{ "(CHAR)", "(CHAR)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYChar },
			{ "CR-IN", "CR-IN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCrIn },
			{ "P-IN", "P-IN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperPIn },
			{ "RES-IN", "RES-IN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperResIn },
			{ "BACK-UP", "BACK-UP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBackUp },
			{ "(DEL-IN)", "(DEL-IN)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYDelIn },
			{ "BS-IN", "BS-IN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBsIn },
			{ "BEEP", "BEEP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBeep },
			{ "BACKSPACES", "BACKSPACES", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBackspaces },
			{ "SPACES", "SPACES", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSpaces },
			{ "SPACE", "SPACE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSpace },
			{ "TYPE", "TYPE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperType },
			{ "CRLF", "CRLF", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCrLf },
			{ "(EMIT)", "(EMIT)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYEmit },
			{ "(PRINT)", "(PRINT)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYPrint },
			{ "PR-STAT", "PR-STAT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperPrStat },
			{ "CR", "CR", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCr },
			{ "KEY", "KEY", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperKey },
			{ "KEY?", "KEY?", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperKeyQ },
			{ "(CONSOLE)", "(CONSOLE)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYConsole },
			{ "(KEY)", "(KEY)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYKey },
			{ "(KEY?)", "(KEY?)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYKeyQ },
			{ "BIOS", "BIOS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBios },
			{ "BDOS", "BDOS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBdos },
			{ "COMPARE", "COMPARE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCompare },
			{ "CAPS-COMP", "CAPS-COMP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCapsComp },
			{ "COMP", "COMP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperComp },
			{ "-TRAILING", "-TRAILING", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperMinusTrailing },
			{ "PAD", "PAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperPad },
			{ "HERE", "HERE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperHere },
			{ "UPPER", "UPPER", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUpper },
			{ "UPC", "UPC", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUpc },
			{ "MOVE", "MOVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperMove },
			{ "LENGTH", "LENGTH", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLength },
			{ "COUNT", "COUNT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCount },
			{ "BLANK", "BLANK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBlank },
			{ "ERASE", "ERASE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperErase },
			{ "FILL", "FILL", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperFill },
			{ "CAPS", "CAPS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCaps },
			{ "BELL", "BELL", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBell },
			{ "BS", "BS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBs },
			{ "BL", "BL", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBl },
			{ "END?", "END?", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperEndQ },
			{ "#TIB", "#TIB", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNumTib },
			{ "SPAN", "SPAN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSpan },
			{ ">IN", ">IN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperToIn },
			{ "BLK", "BLK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBlk },
			{ "VOC-LINK", "VOC-LINK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperVocLink },
			{ "WIDTH", "WIDTH", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperWidth },
			{ "'TIB", "'TIB", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTickTib },
			{ "CONTEXT", "CONTEXT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperContext },
			{ "#VOCS", "#VOCS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNumVocs },
			{ "CURRENT", "CURRENT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCurrent },
			{ "CSP", "CSP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCsp },
			{ "LAST", "LAST", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLast },
			{ "R#", "R#", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperRNum },
			{ "DPL", "DPL", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDpl },
			{ "WARNING", "WARNING", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperWarning },
			{ "STATE", "STATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperState },
			{ "PRIOR", "PRIOR", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperPrior },
			{ "SCR", "SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperScr },
			{ "EMIT", "EMIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperEmit },
			{ "PRINTING", "", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperPrinting },
			{ "IN-FILE", "IN-FILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperInFile },
			{ "FILE", "FILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperFile },
			{ "HLD", "HLD", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperHld },
			{ "BASE", "BASE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBase },
			{ "OFFSET", "OFFSET", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperOffset },
			{ "#LINE", "#LINE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNumLine },
			{ "#OUT", "#OUT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNumOut },
			{ "DP", "DP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDP },
			{ "RP0", "RP0", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperRP0 },
			{ "SP0", "SP0", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSP0 },
			{ "LINK", "LINK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLink },
			{ "ENTRY", "ENTRY", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperEntry },
			{ "TOS", "TOS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTos },
			{ "*/", "*/", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperStarSlash },
			{ "*/MOD", "*/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperStarSlashMod },
			{ "MOD", "MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperMod },
			{ "/", "/", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSlash },
			{ "/MOD", "/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSlashMod },
			{ "*", "*", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperStar },
			{ "MU/MOD", "MU/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperMuSlashMod },
			{ "M/MOD", "M/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperMSlashMod },
			{ "*D", "*D", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperStarD },
			{ "DMAX", "DMAX", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDMax },
			{ "DMIN", "DMIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDMin },
			{ "D>", "D>", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDGreater },
			{ "D<", "D<", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDLess },
			{ "DU<", "DU<", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDULess },
			{ "D=", "D=", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDEqual },
			{ "D0=", "D0=", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperD0Equal },
			{ "?DNEGATE", "?DNEGATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQDNegate },
			{ "D-", "D-", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDMinus },
			{ "D2/", "D2/", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperD2Slash },
			{ "D2*", "D2*", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperD2Star },
			{ "DABS", "DABS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDAbs },
			{ "S>D", "S>D", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSToD },
			{ "DNEGATE", "DNEGATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDNegate },
			{ "D+", "D+", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDPLus },
			{ "2ROT", "2ROT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTwoRot },
			{ "4DUP", "4DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperFourDup },
			{ "3DUP", "3DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperThreeDup },
			{ "2OVER", "2OVER", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTwoOver },
			{ "2SWAP", "2SWAP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTwoSwap },
			{ "2DUP", "2DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTwoDup },
			{ "2DROP", "2DROP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTwoDrop },
			{ "2!", "2!", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTwoStore },
			{ "2@", "2@", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTwoFetch },
			{ "WITHIN", "WITHIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperWithin },
			{ "BETWEEN", "BETWEEN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBetween },
			{ "MAX", "MAX", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperMax },
			{ "MIN", "MIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperMin },
			{ ">", ">", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperGreater },
			{ "<", "<", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLess },
			{ "U>", "U>", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUGreater },
			{ "U<", "U<", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperULess },
			{ "?NEGATE", "?NEGATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQNegate },
			{ "<>", "<>", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUnequal },
			{ "=", "=", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperEqual },
			{ "0<>", "0<>", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperZeroUnequal },
			{ "0>", "0>", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperZeroGreater },
			{ "0<", "0<", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperZeroLess },
			{ "0=", "0=", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperZeroEqual },
			{ "UM/MOD", "UM/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUmSlashMod },
			{ "U*D", "U*D", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUStarD },
			{ "UM*", "UM*", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUmStar },
			{ "2-", "2-", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTwoMinus },
			{ "1-", "1-", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperOneMinus },
			{ "2+", "2+", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTwoPlus },
			{ "1+", "1+", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperOnePlus },
			{ "8*", "8*", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperEightStar },
			{ "U2/", "U2/", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperU2Slash },
			{ "2/", "2/", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTwoSlash },
			{ "2*", "2*", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTwoStar },
			{ "3", "3", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperThree },
			{ "2", "2", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTwo },
			{ "1", "1", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperOne },
			{ "0", "0", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperZero },
			{ "+!", "+!", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperPlusStore },
			{ "ABS", "ABS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperAbs },
			{ "-", "-", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperMinus },
			{ "NEGATE", "NEGATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNegate },
			{ "+", "+", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperPlus },
			{ "OFF", "OFF", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperOff },
			{ "ON", "ON", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperOn },
			{ "CTOGGLE", "CTOGGLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCToggle },
			{ "CRESET", "CRESET", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCReset },
			{ "CSET", "CSET", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCSet },
			{ "FALSE", "FALSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperFalse },
			{ "TRUE", "TRUE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTrue },
			{ "NOT", "NOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNot },
			{ "XOR", "XOR", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYor },
			{ "OR", "OR", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperOr },
			{ "AND", "AND", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperAnd },
			{ "ROLL", "ROLL", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperRoll },
			{ "PICK", "PICK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperPick },
			{ "R@", "R@", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperRFetch },
			{ ">R", ">R", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperToR },
			{ "R>", "R>", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperRFrom },
			{ "?DUP", "?DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQDup },
			{ "FLIP", "FLIP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperFlip },
			{ "-ROT", "-ROT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperMinusRot },
			{ "ROT", "ROT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperRot },
			{ "NIP", "NIP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNip },
			{ "TUCK", "TUCK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTuck },
			{ "OVER", "OVER", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperOver },
			{ "SWAP", "SWAP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSwap },
			{ "DUP", "DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDup },
			{ "DROP", "DROP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDrop },
			{ "RP!", "RP!", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperRPStore },
			{ "RP@", "RP@", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperRPFetch },
			{ "SP!", "SP!", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSPStore },
			{ "SP@", "SP@", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSPFetch },
			{ "CMOVE>", "CMOVE>", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCMoveFrom },
			{ "CMOVE", "CMOVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCMove },
			{ "C!", "C!", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCStore },
			{ "C@", "C@", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCFetch },
			{ "!", "!", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperStore },
			{ "@", "@", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperFetch },
			{ "(?LEAVE)", "(?LEAVE)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYQLeave },
			{ "(LEAVE)", "(LEAVE)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYLeave },
			{ "J", "J", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperJ },
			{ "I", "I", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperI },
			{ "PAUSE", "PAUSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperPause },
			{ "NOOP", "NOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNoop },
			{ "GO", "GO", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperGo },
			{ "PERFORM", "PERFORM", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperPerform },
			{ "EXECUTE", "EXECUTE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperExecute },
			{ ">NEXT", ">NEXT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperToNext },
			{ "BOUNDS", "BOUNDS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBounds },
			{ "(?DO)", "(?DO)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYQDo },
			{ "(DO)", "(DO)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYDo },
			{ "(+LOOP)", "(+LOOP)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYPlusLoop },
			{ "(LOOP)", "(LOOP)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYLoop },
			{ "?BRANCH", "?BRANCH", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQBranch },
			{ "BRANCH", "BRANCH", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBranch },
			{ "(LIT)", "(LIT)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYLit },
			{ "UP", "UP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUp },
			{ "UNNEST", "UNNEST", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUnnest },
			{ "EXIT", "EXIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperExit },
			{ "RP", "RP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperRP },
			{ "FORTH", "FORTH", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperForth },
			{ "H2OFORTH", "H2OFORTH", TRUE, FALSE, FALSE, MAX_FORTHWORD_ID, (forthOperation)NULL }
};

#endif

#if H2O_FORTH_PRIMITIVES == LAXONPERRY_CPM68K_FORTH
static const typedef_forthWord forthWords[] = { /* CP/M 68 K, unchecked wordlist */
			{ "EMPTY", "EMPTY", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperEmpty },
			{ "MARK", "MARK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperMark },
			{ "HELLO", "HELLO", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperHello },
			{ "BACKGROUND:", "BACKGROUND:", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBackgroundColon },
			{ "ACTIVATE", "ACTIVATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperActivate },
			{ "SET-TASK", "SET-TASK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSetTask },
			{ "TASK:", "TASK:", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTaskColon },
			{ "RESUME", "RESUME", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperResume },
			{ "DEBUG", "DEBUG", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDebug },
			{ "LISTING", "LISTING", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperListing },
			{ "SHOW", "SHOW", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperShow },
			{ "(SEMIT)", "(SEMIT)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYSemit },
			{ "(PAGE)", "(PAGE)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYPage },
			{ "FORM-FEED", "FORM-FEED", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperFormFeed },
			{ "PAGE", "PAGE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperPage },
			{ "#PAGE", "#PAGE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNumPage },
			{ "LOGO", "LOGO", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLogo },
			{ "L/PAGE", "L/PAGE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLSlashPage },
			{ "FOOTING", "FOOTING", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperFooting },
			{ "INIT-PR", "INIT-PR", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperInitPr },
			{ "EPSON", "EPSON", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperEpson },
			{ "SEE", "SEE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSee },
			{ "(SEE)", "(SEE)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYSee },
			{ "ASSOCIATIVE:", "ASSOCIATIVE:", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperAssociativeColon },
			{ "CASE:", "CASE:", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCaseColon },
			{ "MAP", "MAP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperMap },
			{ "OUT", "OUT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperOut },
			{ "DL", "DL", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDL },
			{ "DU", "DU", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDU },
			{ "DUMP", "DUMP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDump },
			{ ".HEAD", ".HEAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDotHead },
			{ "?.A", "?.A", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQDotA },
			{ "?.N", "?.N", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQDotN },
			{ "DLN", "DLN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDln },
			{ "EMIT.", "EMIT.", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperEmitDot },
			{ "D.2", "D.2", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDDotTwo },
			{ ".2", ".2", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDotTwo },
			{ "A", "A", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperA },
			{ "SHADOW", "SHADOW", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperShadow },
			{ "(WHERE)", "(WHERE)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYWhere },
			{ "FIX", "FIX", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperFix },
			{ "EDIT", "EDIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperEdit },
			{ "ED", "ED", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperEd },
			{ "DONE", "DONE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDone },
			{ "EDITOR", "EDITOR", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperEditor },
			{ "DARK", "DARK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDark },
			{ "AT", "AT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperAt },
			{ "-LINE", "-LINE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperMinusLine },
			{ "BLOT", "BLOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBlot },
			{ "REPLACE", "REPLACE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperReplace },
			{ "INSERT", "INSERT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperInsert },
			{ "DELETE", "DELETE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDelete },
			{ "SEARCH", "SEARCH", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSearch },
			{ "SCAN-1ST", "SCAN-1ST", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperScanFirst },
			{ "FOUND", "FOUND", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperFound },
			{ "TO", "TO", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTo },
			{ "CONVEY", "CONVEY", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCorvey },
			{ "(CONVEY)", "(CONVEY)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYConvey },
			{ ".TO", ".TO", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDotTo },
			{ "HOP", "HOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperHop },
			{ "CONVEY-COPY", "CONVEY-COPY", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperConveyCopy },
			{ "U/D", "U/D", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUSlashD },
			{ "HOPPED", "HOPPED", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperHopped },
			{ "VIEW", "VIEW", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperView },
			{ "@VIEW", "@VIEW", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperFetchView },
			{ "COPY", "COPY", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCopy },
			{ "(COPY)", "(COPY)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYCopy },
			{ "ESTABLISH", "ESTABLISH", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperEstablish },
			{ "L", "L", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperL },
			{ "B", "B", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperB },
			{ "N", "N", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperN },
			{ "::", "::", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperColonColon },
			{ "MANY", "MANY", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperMany },
			{ "TIMES", "TIMES", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTimes },
			{ "#TIMES", "#TIMES", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNumTimes },
			{ "WORDS", "WORDS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperWords },
			{ "LARGEST", "LARGEST", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLargest },
			{ "IND", "IND", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperInd },
			{ "INDEX", "INDEX", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperIndex },
			{ ".LINE0", ".LINE0", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDotLineZero },
			{ "TRIAD", "TRIAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTriad },
			{ "LIST", "LIST", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperList },
			{ ".SCR", ".SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDotScr },
			{ "?CR", "?CR", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQCr },
			{ "?LINE", "?LINE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQLine },
			{ "RMARGIN", "RMARGIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperRMargin },
			{ "LMARGIN", "LMARGIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLMargin },
			{ "HIDDEN", "HIDDEN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperHidden },
			{ "0<=", "0<=", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperZeroLessEqual },
			{ "0>=", "0>=", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperZeroGreaterEqual },
			{ ">=", ">=", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperGreaterEqual },
			{ "<=", "<=", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLessEqual },
			{ "U>=", "U>=", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUGreaterEqual },
			{ "U<=", "U<=", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperULessEqual },
			{ "MS", "MS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperMs },
			{ "FUDGE", "FUDGE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperFudge },
			{ "PC!", "PC!", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperPCStore },
			{ "PC@", "PC@", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperPCFetch },
			{ "MULTI", "MULTI", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperMulti },
			{ "SINGLE", "SINGLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSingle },
			{ "STOP", "STOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperStop },
			{ "WAKE", "WAKE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperWake },
			{ "SLEEP", "SLEEP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSleep },
			{ "!LINK", "!LINK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperStoreLink },
			{ "@LINK", "@LINK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperFetchLink },
			{ "LOCAL", "LOCAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLocal },
			{ "RESTART", "RESTART", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperRestart },
			{ "(PAUSE)", "(PAUSE)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYPause },
			{ "UNBUG", "UNBUG", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUnbug },
			{ "BUG", "BUG", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBug },
			{ "DOES?", "DOES?", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDoesQ },
			{ "DOES-SIZE", "DOES-SIZE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDoesSize },
			{ "DOES-OP", "DOES-OP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDoesOp },
			{ "LABEL", "LABEL", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLabel },
			{ "UTILITY.BLK", "UTILITY.BLK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUtilityDotBlk },
			{ "CPU68000.BLK", "CPU68000.BLK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCpu68000DotBlk },
			{ "EXTEND68.BLK", "EXTEND68.BLK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperExtend68DotBlk },
			{ "KERNEL68.BLK", "KERNEL68.BLK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperKernel68DotBlk },
			{ "VIEWS", "VIEWS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperViews },
			{ "VIEW-FILES", "VIEW-FILES", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperViewFiles },
			{ "SAVE-SYSTEM", "SAVE-SYSTEM", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSaveSystem },
			{ "FROM", "FROM", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperForm },
			{ "OPEN", "OPEN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperOpen },
			{ "DEFINE", "DEFINE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDefine },
			{ "B:", "B:", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBColon },
			{ "A:", "A:", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperAColon },
			{ "DRIVE?", "DRIVE?", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDriveQ },
			{ "DIR", "DIR", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDir },
			{ "CREATE-FILE", "CREATE-FILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCreateFile },
			{ "MORE", "MORE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperMore },
			{ "ROOT", "ROOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperRoot },
			{ "-->", "-->", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTo },
			{ "+THRU", "+THRU", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperPlusThru },
			{ "THRU", "THRU", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperThru },
			{ "?ENOUGH", "?ENOUGH", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQEnough },
			{ "?", "?", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQ },
			{ "(S", "(S", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperParenS },
			{ "\\", "\\", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBackslash },
			{ "L/SCR", "L/SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLSlashScr },
			{ "C/L", "C/L", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCSlashL },
			{ "RECURSE", "RECURSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperRecurse },
			{ "DUMP", "DUMP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDump },
			{ ".ID", ".ID", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDotId },
			{ ".S", ".S", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDotS },
			{ "DEPTH", "DEPTH", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDepth },
			{ "BYE", "BYE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBye },
			{ "START", "START", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperStart },
			{ "OK", "OK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperOk },
			{ "INITIAL", "INITIAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperInitial },
			{ "COLD", "COLD", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCold },
			{ "WARM", "WARM", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperWarm },
			{ "BOOT", "BOOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBoot },
			{ "QUIT", "QUIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQuit },
			{ "RUN", "RUN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperRun },
			{ "IS", "IS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperIs },
			{ "(IS)", "(IS)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYIs },
			{ ">IS", ">IS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperToIs },
			{ "USER", "USER", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUser },
			{ "#USER", "#USER", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNumUser },
			{ "CODE", "CODE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCode },
			{ "AVOC", "AVOC", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperAvoc },
			{ "2VARIABLE", "2VARIABLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTwoVariable },
			{ "2CONSTANT", "2CONSTANT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTwoConstant },
			{ "DEFINITIONS", "DEFINITIONS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDefinitions },
			{ "VOCABULARY", "VOCABULARY", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperVocabulary },
			{ "DEFER", "DEFER", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDefer },
			{ "VARIABLE", "VARIABLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperVariable },
			{ "CONSTANT", "CONSTANT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperConstant },
			{ "RECURSIVE", "RECURSIVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperRecursive },
			{ ";", ";", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSemicolon },
			{ ":", ":", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperColon },
			{ "]", "]", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperRightBracket },
			{ "[", "[", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLeftBracket },
			{ "DOES>", "DOES>", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDoes },
			{ ";CODE", ";CODE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSemicolonCode },
			{ "(;CODE)", "(;CODE)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYSemicolonCode },
			{ ";USES", ";USES", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSemicolonUses },
			{ "ASSEMBLER", "ASSEMBLER", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperAssembler },
			{ "(;USES)", "(;USES)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYSemicolonUses },
			{ "REVEAL", "REVEAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperReveal },
			{ "HIDE", "HIDE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperHide },
			{ "?CSP", "?CSP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQCsp },
			{ "!CSP", "!CSP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperStoreCsp },
			{ "CREATE", "CREATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCreate },
			{ "\"CREATE", "\"CREATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBackslashCreate },
			{ ",VIEW", ",VIEW", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCommaView },
			{ "WHILE", "WHILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperWhile },
			{ "ELSE", "ELSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperElse },
			{ "IF", "IF", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperIf },
			{ "REPEAT", "REPEAT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperRepeat },
			{ "AGAIN", "AGAIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperAgain },
			{ "UNTIL", "UNTIL", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUntil },
			{ "+LOOP", "+LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperPlusLoop },
			{ "LOOP", "LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLoop },
			{ "?DO", "?DO", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQDo },
			{ "DO", "DO", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDo },
			{ "THEN", "THEN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperThen },
			{ "BEGIN", "BEGIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBegin },
			{ "?LEAVE", "?LEAVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQLeave },
			{ "LEAVE", "LEAVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLeave },
			{ "?<RESOLVE", "?<RESOLVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQLessResolve },
			{ "?<MARK", "?<MARK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQLessMark },
			{ "?>RESOLVE", "?>RESOLVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQGreaterResolve },
			{ "?>MARK", "?>MARK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQGreaterMark },
			{ "<RESOLVE", "<RESOLVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLessResolve },
			{ "<MARK", "<MARK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLessMark },
			{ ">RESOLVE", ">RESOLVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperToResolve },
			{ ">MARK", ">MARK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperToMark },
			{ "?CONDITION", "?CONDITION", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQCondition },
			{ "ABORT", "ABORT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperAbort },
			{ "ABORT\"", "ABORT\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperAbortQuote },
			{ "(ABORT\")", "(ABORT\")", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYAbortQuote },
			{ "(?ERROR)", "(?ERROR)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYQError },
			{ "?ERROR", "?ERROR", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQError },
			{ "WHERE", "WHERE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperWhere },
			{ "FORGET", "FORGET", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperForget },
			{ "(FORGET)", "(FORGET)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYForget },
			{ "TRIM", "TRIM", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTrim },
			{ "FENCE", "FENCE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperFence },
			{ "\"", "\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQuote },
			{ ".\"", ".\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDotQuote },
			{ ",\"", ",\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCommaQuote },
			{ "(.\")", "", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYDotQuote },
			{ "(\")", "(\")", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYQuote },
			{ "[COMPILE]", "[COMPILE]", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperXCompile },
			{ "[']", "[']", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperXTick },
			{ "'", "'", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTick },
			{ "?MISSING", "?MISSING", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQMissing },
			{ "CRASH", "CRASH", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCrash },
			{ "CONTROL", "CONTROL", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperControl },
			{ "ASCII", "ASCII", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperAscii },
			{ "DLITERAL", "DLITERAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDLiteral },
			{ "LITERAL", "LITERAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLiteral },
			{ "IMMEDIATE", "IMMEDIATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperImmediate },
			{ "COMPILE", "COMPILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCompile },
			{ "EVEN", "EVEN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperEven },
			{ "ALIGN", "ALIGN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperAlign },
			{ "C,", "C,", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCComma },
			{ ",", ",", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperComma },
			{ "ALLOT", "ALLOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperAllot },
			{ "INTERPRET", "INTERPRET", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperInterpret },
			{ "STATUS", "STATUS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperStatus },
			{ "?STACK", "?STACK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQStatus },
			{ "DEFINED", "DEFINED", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDefined },
			{ "?UPPERCASE", "?UPPERCASE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQUppercase },
			{ "FIND", "FIND", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperFind },
			{ "#THREADS", "#THREADS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNumThreads },
			{ "(FIND)", "(FIND)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYFind },
			{ "HASH", "HASH", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperHash },
			{ "VIEW>", "VIEW>", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperViewFrom },
			{ ">VIEW", ">VIEW", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperToView },
			{ ">LINK", ">LINK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperToLink },
			{ ">NAME", ">NAME", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperToName },
			{ ">BODY", ">BODY", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperToBody },
			{ "LINK>", "LINK>", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLinkFrom },
			{ "NAME>", "NAME>", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNameFrom },
			{ "BODY>", "BODY>", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBodyFrom },
			{ "L>NAME", "L>NAME", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLGreaterName },
			{ "N>LINK", "N>LINK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNToLink },
			{ "FORTH-83", "FORTH-83", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperForth83 },
			{ "DONE?", "DONE?", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDoneQ },
			{ "TRAVERSE", "TRAVERSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTraverse },
			{ "\\S", "\\S", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBackslashS },
			{ "(", "(", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperParen},
			{ ".(", ".(", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDotParen },
			{ ">TYPE", ">TYPE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperToType },
			{ "WORD", "WORD", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperWord },
			{ "'WORD", "'WORD", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTickWord },
			{ "PARSE", "PARSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperParse },
			{ "PARSE-WORD", "PARSE-WORD", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperParseWord },
			{ "SOURCE", "SOURCE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSource },
			{ "(SOURCE)", "(SOURCE)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYSource },
			{ "PLACE", "PLACE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperPlace },
			{ "/STRING", "/STRING", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSlashString },
			{ "SCAN", "SCAN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperScan },
			{ "SKIP", "SKIP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSkip },
			{ "D.R", "D.R", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDDotR },
			{ "D.", "D.", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDDot },
			{ "(D.)", "(D.)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYDDot },
			{ "UD.R", "UD.R", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUdDotR },
			{ "UD.", "UD.", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUdDot },
			{ "(UD.)", "(UD.)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYUdDot },
			{ ".R", ".R", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDotR },
			{ ".", ".", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDot },
			{ "(.)", "(.)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYDot },
			{ "U.R", "U.R", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUDotR },
			{ "U.", "U.", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUDot },
			{ "(U.)", "(U.)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYUDot },
			{ "OCTAL", "OCTAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperOctal },
			{ "DECIMAL", "DECIMAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDecimal },
			{ "HEX", "HEX", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperHex },
			{ "#S", "#S", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNumS },
			{ "#", "#", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNum },
			{ "SIGN", "SIGN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSign },
			{ "#>", "#>", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNumGreater },
			{ "<#", "<#", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLessNum },
			{ "HOLD", "HOLD", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperHold },
			{ "NUMBER", "NUMBER", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNumber },
			{ "(NUMBER)", "(NUMBER)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYNumber },
			{ "NUMBER?", "NUMBER?", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNumberQ },
			{ "(NUMBER?)", "(NUMBER?)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYNumberQ },
			{ "CONVERT", "CONVERT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperConvert },
			{ "DOUBLE?", "DOUBLE?", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDoubleQ },
			{ "DIGIT", "DIGIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDigit },
			{ "LOAD", "LOAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLoad },
			{ "(LOAD)", "(LOAD)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYLoad },
			{ "DEFAULT", "DEFAULT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDefault },
			{ "VIEW#", "VIEW#", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperViewNum },
			{ "FLUSH", "FLUSH", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperFlush },
			{ "SAVE-BUFFERS", "SAVE-BUFFERS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSaveBuffers },
			{ "EMPTY-BUFFERS", "EMPTY-BUFFERS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperEmptyBuffers },
			{ "IN-BLOCK", "IN-BLOCK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperInBlock },
			{ "BLOCK", "BLOCK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBlock },
			{ "(BLOCK)", "(BLOCK)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYBlock },
			{ "BUFFER", "BUFFER", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBuffer },
			{ "(BUFFER)", "(BUFFER)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYBuffer },
			{ "MISSING", "MISSING", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperMissing },
			{ "DISCARD", "DISCARD", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDiscord },
			{ "UPDATE", "UPDATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUpdate },
			{ "ABSENT?", "ABSENT?", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperAbsentQ },
			{ "LATEST?", "LATEST?", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLatestQ },
			{ "CAPACITY", "CAPACITY", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCapacity },
			{ "DOS", "DOS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDos },
			{ "SWITCH", "SWITCH", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSwitch },
			{ "FILE?", "FILE?", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperFileQ },
			{ ".FILE", ".FILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDotFile },
			{ "WRITE-BLOCK", "WRITE-BLOCK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperWriteBlock },
			{ "READ-BLOCK", "READ-BLOCK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperReadBlock },
			{ ">UPDATE", ">UPDATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperToUpdate },
			{ "BUFFER#", "BUFFER#", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBuffersNum },
			{ ">END", ">END", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperToEnd },
			{ ">BUFFERS", ">BUFFERS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperToBuffers },
			{ "INIT-R0", "INIT-R0", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperInitR0 },
			{ "FIRST", "FIRST", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperFirst },
			{ ">SIZE", ">SIZE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperToSize },
			{ "LIMIT", "LIMIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLimit },
			{ "DISK-ERROR", "DISK-ERROR", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDiskError },
			{ "B/FCB", "B/FCB", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBSlashFcb },
			{ "REC/BLK", "REC/BLK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperRecSlashBlk },
			{ "B/REC", "B/REC", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBSlashRec },
			{ "B/BUF", "B/BUF", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBSlashBuf },
			{ "#BUFFERS", "#BUFFERS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNumBuffers },
			{ "QUERY", "QUERY", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQuery },
			{ "TIB", "TIB", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTib },
			{ "EXPECT", "EXPECT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperExpect },
			{ "CC-FORTH", "CC-FORTH", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCcForth },
			{ "CC", "CC", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCc },
			{ "DEL-IN", "DEL-IN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDelIn },
			{ "CHAR", "CHAR", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperChar },
			{ "(CHAR)", "(CHAR)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYChar },
			{ "CR-IN", "CR-IN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCrIn },
			{ "P-IN", "P-IN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperPIn },
			{ "RES-IN", "RES-IN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperResIn },
			{ "BACK-UP", "BACK-UP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBackUp },
			{ "(DEL-IN)", "(DEL-IN)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYDelIn },
			{ "BS-IN", "BS-IN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBsIn },
			{ "BEEP", "BEEP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBeep },
			{ "BACKSPACES", "BACKSPACES", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBackspaces },
			{ "SPACES", "SPACES", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSpaces },
			{ "SPACE", "SPACE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSpace },
			{ "TYPE", "TYPE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperType },
			{ "CRLF", "CRLF", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCrLf },
			{ "(EMIT)", "(EMIT)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYEmit },
			{ "(PRINT)", "(PRINT)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYPrint },
			{ "PR-STAT", "PR-STAT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperPrStat },
			{ "CR", "CR", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCr },
			{ "KEY", "KEY", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperKey },
			{ "KEY?", "KEY?", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperKeyQ },
			{ "(CONSOLE)", "(CONSOLE)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYConsole },
			{ "(KEY)", "(KEY)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYKey },
			{ "(KEY?)", "(KEY?)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYKeyQ },
			{ "BIOS", "BIOS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBios },
			{ "BDOS", "BDOS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBdos },
			{ "COMPARE", "COMPARE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCompare },
			{ "CAPS-COMP", "CAPS-COMP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCapsComp },
			{ "COMP", "COMP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperComp },
			{ "-TRAILING", "-TRAILING", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperMinusTrailing },
			{ "PAD", "PAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperPad },
			{ "HERE", "HERE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperHere },
			{ "UPPER", "UPPER", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUpper },
			{ "UPC", "UPC", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUpc },
			{ "MOVE", "MOVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperMove },
			{ "LENGTH", "LENGTH", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLength },
			{ "COUNT", "COUNT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCount },
			{ "BLANK", "BLANK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBlank },
			{ "ERASE", "ERASE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperErase },
			{ "FILL", "FILL", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperFill },
			{ "CAPS", "CAPS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCaps },
			{ "BELL", "BELL", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBell },
			{ "BS", "BS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBs },
			{ "BL", "BL", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBl },
			{ "END?", "END?", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperEndQ },
			{ "#TIB", "#TIB", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNumTib },
			{ "SPAN", "SPAN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSpan },
			{ ">IN", ">IN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperToIn },
			{ "BLK", "BLK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBlk },
			{ "VOC-LINK", "VOC-LINK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperVocLink },
			{ "WIDTH", "WIDTH", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperWidth },
			{ "'TIB", "'TIB", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTickTib },
			{ "CONTEXT", "CONTEXT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperContext },
			{ "#VOCS", "#VOCS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNumVocs },
			{ "CURRENT", "CURRENT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCurrent },
			{ "CSP", "CSP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCsp },
			{ "LAST", "LAST", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLast },
			{ "R#", "R#", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperRNum },
			{ "DPL", "DPL", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDpl },
			{ "WARNING", "WARNING", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperWarning },
			{ "STATE", "STATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperState },
			{ "PRIOR", "PRIOR", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperPrior },
			{ "SCR", "SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperScr },
			{ "EMIT", "EMIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperEmit },
			{ "PRINTING", "", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperPrinting },
			{ "IN-FILE", "IN-FILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperInFile },
			{ "FILE", "FILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperFile },
			{ "HLD", "HLD", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperHld },
			{ "BASE", "BASE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBase },
			{ "OFFSET", "OFFSET", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperOffset },
			{ "#LINE", "#LINE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNumLine },
			{ "#OUT", "#OUT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNumOut },
			{ "DP", "DP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDP },
			{ "RP0", "RP0", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperRP0 },
			{ "SP0", "SP0", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSP0 },
			{ "LINK", "LINK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLink },
			{ "ENTRY", "ENTRY", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperEntry },
			{ "TOS", "TOS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTos },
			{ "*/", "*/", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperStarSlash },
			{ "*/MOD", "*/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperStarSlashMod },
			{ "MOD", "MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperMod },
			{ "/", "/", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSlash },
			{ "/MOD", "/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSlashMod },
			{ "*", "*", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperStar },
			{ "MU/MOD", "MU/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperMuSlashMod },
			{ "M/MOD", "M/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperMSlashMod },
			{ "*D", "*D", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperStarD },
			{ "DMAX", "DMAX", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDMax },
			{ "DMIN", "DMIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDMin },
			{ "D>", "D>", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDGreater },
			{ "D<", "D<", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDLess },
			{ "DU<", "DU<", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDULess },
			{ "D=", "D=", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDEqual },
			{ "D0=", "D0=", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperD0Equal },
			{ "?DNEGATE", "?DNEGATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQDNegate },
			{ "D-", "D-", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDMinus },
			{ "D2/", "D2/", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperD2Slash },
			{ "D2*", "D2*", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperD2Star },
			{ "DABS", "DABS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDAbs },
			{ "S>D", "S>D", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSToD },
			{ "DNEGATE", "DNEGATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDNegate },
			{ "D+", "D+", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDPLus },
			{ "2ROT", "2ROT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTwoRot },
			{ "4DUP", "4DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperFourDup },
			{ "3DUP", "3DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperThreeDup },
			{ "2OVER", "2OVER", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTwoOver },
			{ "2SWAP", "2SWAP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTwoSwap },
			{ "2DUP", "2DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTwoDup },
			{ "2DROP", "2DROP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTwoDrop },
			{ "2!", "2!", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTwoStore },
			{ "2@", "2@", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTwoFetch },
			{ "WITHIN", "WITHIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperWithin },
			{ "BETWEEN", "BETWEEN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBetween },
			{ "MAX", "MAX", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperMax },
			{ "MIN", "MIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperMin },
			{ ">", ">", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperGreater },
			{ "<", "<", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperLess },
			{ "U>", "U>", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUGreater },
			{ "U<", "U<", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperULess },
			{ "?NEGATE", "?NEGATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQNegate },
			{ "<>", "<>", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUnequal },
			{ "=", "=", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperEqual },
			{ "0<>", "0<>", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperZeroUnequal },
			{ "0>", "0>", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperZeroGreater },
			{ "0<", "0<", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperZeroLess },
			{ "0=", "0=", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperZeroEqual },
			{ "UM/MOD", "UM/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUmSlashMod },
			{ "U*D", "U*D", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUStarD },
			{ "UM*", "UM*", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUmStar },
			{ "2-", "2-", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTwoMinus },
			{ "1-", "1-", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperOneMinus },
			{ "2+", "2+", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTwoPlus },
			{ "1+", "1+", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperOnePlus },
			{ "8*", "8*", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperEightStar },
			{ "U2/", "U2/", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperU2Slash },
			{ "2/", "2/", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTwoSlash },
			{ "2*", "2*", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTwoStar },
			{ "3", "3", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperThree },
			{ "2", "2", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTwo },
			{ "1", "1", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperOne },
			{ "0", "0", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperZero },
			{ "+!", "+!", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperPlusStore },
			{ "ABS", "ABS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperAbs },
			{ "-", "-", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperMinus },
			{ "NEGATE", "NEGATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNegate },
			{ "+", "+", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperPlus },
			{ "OFF", "OFF", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperOff },
			{ "ON", "ON", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperOn },
			{ "CTOGGLE", "CTOGGLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCToggle },
			{ "CRESET", "CRESET", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCReset },
			{ "CSET", "CSET", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCSet },
			{ "FALSE", "FALSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperFalse },
			{ "TRUE", "TRUE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTrue },
			{ "NOT", "NOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNot },
			{ "XOR", "XOR", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYor },
			{ "OR", "OR", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperOr },
			{ "AND", "AND", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperAnd },
			{ "ROLL", "ROLL", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperRoll },
			{ "PICK", "PICK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperPick },
			{ "R@", "R@", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperRFetch },
			{ ">R", ">R", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperToR },
			{ "R>", "R>", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperRFrom },
			{ "?DUP", "?DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQDup },
			{ "FLIP", "FLIP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperFlip },
			{ "-ROT", "-ROT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperMinusRot },
			{ "ROT", "ROT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperRot },
			{ "NIP", "NIP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNip },
			{ "TUCK", "TUCK", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperTuck },
			{ "OVER", "OVER", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperOver },
			{ "SWAP", "SWAP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSwap },
			{ "DUP", "DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDup },
			{ "DROP", "DROP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperDrop },
			{ "RP!", "RP!", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperRPStore },
			{ "RP@", "RP@", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperRPFetch },
			{ "SP!", "SP!", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSPStore },
			{ "SP@", "SP@", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperSPFetch },
			{ "CMOVE>", "CMOVE>", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCMoveFrom },
			{ "CMOVE", "CMOVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCMove },
			{ "C!", "C!", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCStore },
			{ "C@", "C@", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperCFetch },
			{ "!", "!", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperStore },
			{ "@", "@", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperFetch },
			{ "(?LEAVE)", "(?LEAVE)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYQLeave },
			{ "(LEAVE)", "(LEAVE)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYLeave },
			{ "J", "J", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperJ },
			{ "I", "I", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperI },
			{ "PAUSE", "PAUSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperPause },
			{ "NOOP", "NOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperNoop },
			{ "GO", "GO", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperGo },
			{ "PERFORM", "PERFORM", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperPerform },
			{ "EXECUTE", "EXECUTE", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperExecute },
			{ ">NEXT", ">NEXT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperToNext },
			{ "BOUNDS", "BOUNDS", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBounds },
			{ "(?DO)", "(?DO)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYQDo },
			{ "(DO)", "(DO)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYDo },
			{ "(+LOOP)", "(+LOOP)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYPlusLoop },
			{ "(LOOP)", "(LOOP)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYLoop },
			{ "?BRANCH", "?BRANCH", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperQBranch },
			{ "BRANCH", "BRANCH", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperBranch },
			{ "(LIT)", "(LIT)", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperYLit },
			{ "UP", "UP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUp },
			{ "UNNEST", "UNNEST", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperUnnest },
			{ "EXIT", "EXIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperExit },
			{ "RP", "RP", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperRP },
			{ "FORTH", "FORTH", TRUE, FALSE, FALSE, 0UL, (forthOperation)laxperForth },
			{ "H2OFORTH", "H2OFORTH", TRUE, FALSE, FALSE, MAX_FORTHWORD_ID, (forthOperation)NULL }
};
#endif
#endif


