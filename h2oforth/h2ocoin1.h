#ifndef H2OCOIN1
#define H2OCOIN2

/* The ATARI Coin-op Forth, ATARI Colleen Forth, fig-FORTH on ATARI-8bit */

/* Definitions */

/* Unavailable words */
void coinupMinusMove(void);
void coinupDollar(void);
void coinupPercent(void);
void coinupDl(void);
void coinupDoit(void);
void coinupHl(void);
void coinupIl(void);
void coinupLl(void);
void coinupRl(void);
void coinupSl(void);
void coinupTl(void);
void coinupTopFlag(void);
void coinupUl(void);
void coinupUll(void);
void coinupR0(void);
void coinupS0(void);
void coinupX(void);

/* Words */
void coinupTask(void);
void coinupSaveNfas(void);
void coinupFormy(void);
void coinupLpWords(void);
void coinupWhere(void);
void coinupN(void);
void coinupL(void);
void coinupShow(void);
void coinupList(void);
void coinupCopy(void);
void coinupLine(void);
void coinupNumOfLines(void);
void coinupText(void);
void coinupEdit(void);
void coinupNoPly(void);
void coinupColpmStore(void);
void coinupSizeStore(void);
void coinupHPosStore(void);
void coinupPlayer(void);
void coinupGPrior(void);
void coinupColpm(void);
void coinupVDelay(void);
void coinupPrior(void);
void coinupPmBase(void);
void coinupGractl(void);
void coinupDmaCtl(void);
void coinupRnd(void);
void coinupStrig(void);
void coinupStick(void);
void coinupPTrig(void);
void coinupPaddle(void);
void coinupSound(void);
void coinupXio18(void);
void coinupClear(void);
void coinupDrawTo(void);
void coinupPosition(void);
void coinupColor(void);
void coinupSetColor(void);
void coinupLocate(void);
void coinupPlot(void);
void coinupDrDot(void);
void coinupSeDot(void);
void coinupPlDot(void);
void coinupPut(void);
void coinupCDot(void);
void coinupLocDot(void);
void coinupGraphics(void);
void coinupGrDot(void);
void coinupPosDot(void);
void coinupSpb(void);
void coinupPBase(void);
void coinupQBase(void);
void coinupFilDat(void);
void coinupSColon(void);
void coinupAcIo(void);
void coinupOpen(void);
void coinupClose(void);
void coinupGet(void);
void coinupCIo(void);
void coinupI2Cax(void);
void coinupI1Cax(void);
void coinupIcbll(void);
void coinupIcptl(void);
void coinupIcbal(void);
void coinupIcsta(void);
void coinupIccom(void);
void coinupIcdno(void);
void coinupDotIoc(void);
void coinupIocb(void);
void coinupIob(void);
void coinupIoc(void);
void coinupAtaChr(void);
void coinupLMargn(void);
void coinupBotsC(void);
void coinupCh(void);
void coinupConsol(void);
void coinupCol4(void);
void coinupCol3(void);
void coinupCol2(void);
void coinupCol1(void);
void coinupCol0(void);
void coinupChBas(void);
void coinupCrsinh(void);
void coinupRtClk(void);
void coinupDmct(void);
void coinupDlst(void);
void coinupAudCtl(void);
void coinupSkCtl(void);
void coinupC4Aud(void);
void coinupF4Aud(void);
void coinupC3Aud(void);
void coinupF3Aud(void);
void coinupC2Aud(void);
void coinupF2Aud(void);
void coinupC1Aud(void);
void coinupF1Aud(void);
void coinupCn(void);
void coinupEditor(void);
void coinupArray(void);
void coinupAlloc(void);
void coinupTbl(void);
void coinupBackslashBackslash(void);
void coinupBDump(void);
void coinupHQ(void);
void coinupHh(void);
void coinupChQ(void);
void coinupChH(void);
void coinupHd(void);
void coinupTwoStar(void);
void coinupZeroSet(void);
void coinupOneMinus(void);
void coinupOnePlusStore(void);
void coinupCode(void);
void coinupAssembler(void);
void coinupVList(void);
void coinupTriad(void);
void coinupIndex(void);
void coinupQ(void);
void coinupDot(void);
void coinupDotR(void);
void coinupDDot(void);
void coinupDDotR(void);
void coinupNumS(void);
void coinupNum(void);
void coinupSign(void);
void coinupNumGreater(void);
void coinupLessNum(void);
void coinupSpaces(void);
void coinupWhile(void);
void coinupElse(void);
void coinupIf(void);
void coinupRepeat(void);
void coinupAgain(void);
void coinupEnd(void);
void coinupUntil(void);
void coinupPlusLoop(void);
void coinupLoop(void);
void coinupDo(void);
void coinupThen(void);
void coinupEndIf(void);
void coinupBegin(void);
void coinupBack(void);
void coinupForget(void);
void coinupTick(void);
void coinupUpdate(void);
void coinupFlush(void);
void coinupRSlashW(void);
void coinupDdIo(void);
void coinupDIo(void);
void coinupSecIo(void);
void coinupSio(void);
void coinupDecMap(void);
void coinupType(void);
void coinupQTerminal(void);
void coinupCr(void);
void coinupEmit(void);
void coinupKey(void);
void coinupTciov(void);
void coinupIcAl(void);
void coinupIcLl(void);
void coinupIcCm(void);
void coinupTo(void);
void coinupLoad(void);
void coinupMessage(void);
void coinupDotLine(void);
void coinupYLine(void);
void coinupBlock(void);
void coinupBuffer(void);
void coinupBfnd(void);
void coinupDr1(void);
void coinupDr0(void);
void coinupEmptyBuffers(void);
void coinupAlt(void);
void coinupPrev(void);
void coinupPtab(void);
void coinupMSlashMod(void);
void coinupStarSlash(void);
void coinupStarSlashMod(void);
void coinupMod(void);
void coinupSlash(void);
void coinupslashMod(void);
void coinupStar(void);
void coinupMSlash(void);
void coinupMStar(void);
void coinupMax(void);
void coinupMin(void);
void coinupDAbs(void);
void coinupAbs(void);
void coinupDPlusMinus(void);
void coinupPlusMinus(void);
void coinupSToD(void);
void coinupCold(void);
void coinupAbort(void);
void coinupQuit(void);
void coinupParen(void);
void coinupDefinitions(void);
void coinupForth(void);
void coinupVocabulary(void);
void coinupImmediate(void);
void coinupInterpret(void);
void coinupQStack(void);
void coinupDLiteral(void);
void coinupLiteral(void);
void coinupXCompile(void);
void coinupCreate(void);
void coinupIdDot(void);
void coinupError(void);
void coinupYAbort(void);
void coinupMinusFind(void);
void coinupHash(void);
void coinupNumber(void);
void coinupYNumber(void);
void coinup7Bits(void);
void coinupWord(void);
void coinupPad(void);
void coinupHold(void);
void coinupBlanks(void);
void coinupErase(void);
void coinupFill(void);
void coinupHeart(void);
void coinupQuery(void);
void coinupExpect(void);
void coinupDotQuote(void);
void coinupParenDotQuote(void);
void coinupTrailing(void);
void coinupCount(void);
void coinupDoes(void);
void coinupBuilds(void);
void coinupSemicolonCode(void);
void coinupYSemicolonCode(void);
void coinupDecimal(void);
void coinupHex(void);
void coinupSmudge(void);
void coinupRightBracket(void);
void coinupLeftBracket(void);
void coinupCompile(void);
void coinupQLoading(void);
void coinupQCsp(void);
void coinupQPairs(void);
void coinupQExec(void);
void coinupQComp(void);
void coinupQError(void);
void coinupStoreCsp(void);
void coinupLfa(void);
void coinupPfa(void);
void coinupNfa(void);
void coinupCfa(void);
void coinupLatest(void);
void coinupTraverse(void);
void coinupMinusDup(void);
void coinupSpace(void);
void coinupRot(void);
void coinupGreater(void);
void coinupEqual(void);
void coinupMinus(void);
void coinupCComma(void);
void coinupComma(void);
void coinupAllot(void);
void coinupHere(void);
void coinupTwoPlus(void);
void coinupOnePlus(void);
void coinupPhysOff(void);
void coinupInpt(void);
void coinupHld(void);
void coinupRNum(void);
void coinupCsp(void);
void coinupFld(void);
void coinupDpl(void);
void coinupBase(void);
void coinupState(void);
void coinupCurrent(void);
void coinupContext(void);
void coinupOffset(void);
void coinupScr(void);
void coinupOut(void);
void coinupIn(void);
void coinupBlk(void);
void coinupVocLink(void);
void coinupDp(void);
void coinupFence(void);
void coinupWarning(void);
void coinupWidth(void);
void coinupTib(void);
void coinupPlusOrigin(void);
void coinupHimem(void);
void coinupBSlashScr(void);
void coinupBSlashBuf(void);
void coinupLimit(void);
void coinupFirst(void);
void coinupNumLinks(void);
void coinupCSlashL(void);
void coinupCl(void);
void coinupBl(void);
void coinupThree(void);
void coinupTwo(void);
void coinupOne(void);
void coinupZero(void);
void coinupUser(void);
void coinupVariable(void);
void coinupConstant(void);
void coinupSemicolon(void);
void coinupColon(void);
void coinupCStore(void);
void coinupStore(void);
void coinupCFetch(void);
void coinupFetch(void);
void coinupToggle(void);
void coinupPlusStore(void);
void coinupDup(void);
void coinupSwap(void);
void coinupDrop(void);
void coinupOver(void);
void coinupDMinus(void);
void coinupMinusWord(void);
void coinupDPlus(void);
void coinupPlus(void);
void coinupLess(void);
void coinupULess(void);
void coinupZeroLess(void);
void coinupZeroEqual(void);
void coinupR(void);
void coinupRTo(void);
void coinupGreaterR(void);
void coinupLeave(void);
void coinupSemicolonS(void);
void coinupRPStoreye(void);
void coinupSPStore(void);
void coinupSPFetch(void);
void coinupXor(void);
void coinupOr(void);
void coinupAnd(void);
void coinupUSlash(void);
void coinupUStar(void);
void coinupCMove(void);
void coinupD8uStar(void);
void coinupEnclose(void);
void coinupYFind(void);
void coinupDigit(void);
void coinupJ(void);
void coinupI(void);
void coinupYDo(void);
void coinupYPlusLoop(void);
void coinupYLoop(void);
void coinupZeroBranch(void);
void coinupBranch(void);
void coinupExecute(void);
void coinupLit(void);

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

/* List of FORTH words */

static const PROGMEM typedef_forthWord forthWords[] = {
			{ "-MOVE", "-MOVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupMinusMove }, /* Unavailable words, for fig Editor */
			{ "$", "$", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDollar },
			{ "%", "%", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupPercent },
			{ "DL", "DL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDl },
			{ "DOIT", "DOIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDoit },
			{ "HL", "HL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupHl },
			{ "IL", "IL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupIl },
			{ "LL", "LL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupLl },
			{ "RL", "RL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupRl },
			{ "SL", "SL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupSl },
			{ "TL", "TL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupTl },
			{ "TOPFLAG", "TOPFLAG", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupTopFlag },
			{ "UL", "UL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupUl },
			{ "ULL", "ULL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupUll },
			{ "R0", "R0", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupR0 },
			{ "S0", "S0", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupS0 },
			{ "X", "X", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupX }, /* Unavailable word, for Coin-Up kernel */

			{ "TASK", "TASK", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupTask }, /* Coin-Up kernel */
			{ "SAVENFAS", "SAVENFAs", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupSaveNfas }, /* Coin-Up ATARI extensions */
			{ "FORMY", "FORMY", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupFormy },
			{ "LPWORDS", "LPWORDS", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupLpWords },
			{ "WHERE", "WHERE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupWhere }, /* fig Editor */
			{ "N", "N", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupN },
			{ "L", "L", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupL },
			{ "SHOW", "SHOW", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupShow },
			{ "LIST", "LIST", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupList },
			{ "COPY", "COPY", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupCopy },
			{ "LINE", "LINE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupLine },
			{ "#OFLINES", "#OFLINES", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupNumOfLines },
			{ "TEXT", "TEXT", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupText },
			{ "EDIT", "EDIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupEdit },
			{ "NOPLY", "NOPLY", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupNoPly }, /* Coin-Up ATARI extensions */
			{ "COLPM!", "COLPM!", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupColpmStore },
			{ "SIZE!", "SIZE!", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupSizeStore },
			{ "HPOS!", "HPOS!", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupHPosStore },
			{ "PLAYER", "PLAYER", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupPlayer },
			{ "GPRIOR", "GPRIOR", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupGPrior }, /* Mentioned in manual, but not in the wordlists of the manual */
			{ "COLPM", "COLPM", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupColpm },
			{ "VDELAY", "VDELAY", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupVDelay },
			{ "PRIOR", "PRIOR", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupPrior },
			{ "PMBASE", "PMBASE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupPmBase },
			{ "GRACTL", "GRACTL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupGractl },
			{ "DMACTL", "DMACTL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDmaCtl },
			{ "RND", "RND", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupRnd },
			{ "STRIG", "STRIG", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupStrig },
			{ "STICK", "STICK", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupStick },
			{ "PTRIG", "PTRIG", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupPTrig },
			{ "PADDLE", "PADDLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupPaddle },
			{ "SOUND", "SOUND", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupSound },
			{ "XIO18", "XIO18", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupXio18 },
			{ "CLEAR", "CLEAR", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupClear },
			{ "DRAWTO", "DRAWTO", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDrawTo },
			{ "POSITION", "POSITION", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupPosition },
			{ "COLOR", "COLOR", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupColor },
			{ "SETCOLOR", "SETCOLOR", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupSetColor },
			{ "LOCATE", "LOCATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupLocate },
			{ "PLOT", "PLOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupPlot },
			{ "DR.", "DR.", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDrDot },
			{ "SE.", "SE.", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupSeDot },
			{ "PL.", "PL.", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupPlDot },
			{ "PUT", "PUT", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupPut },
			{ "C.", "C.", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupCDot },
			{ "Color", "Color", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupColor },
			{ "LOC.", "LOC.", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupLocDot },
			{ "GRAPHICS", "GRAPHICS", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupGraphics },
			{ "GR.", "GR.", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupGrDot },
			{ "POS.", "POS.", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupPosDot },
			{ "SPB", "SPB", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupSpb },
			{ "PBASE", "PBASE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupPBase },
			{ "QBASE", "Qbase", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupQBase },
			{ "FILDAT", "FILDAT", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupFilDat },
			{ "S:", "S:", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupSColon },
			{ "ACIO", "ACIO", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupAcIo },
			{ "OPEN", "OPEN", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupOpen },
			{ "CLOSE", "CLOSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupClose },
			{ "GET", "GET", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupGet },
			{ "Get", "Get", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupGet },
			{ "CIO", "CIO", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupCIo },
			{ "I2CAX", "I2CAX", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupI2Cax },
			{ "I1CAX", "I1CAX", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupI1Cax },
			{ "ICBLL", "ICBLL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupIcbll },
			{ "ICPTL", "ICPTL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupIcptl },
			{ "ICBAL", "ICBAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupIcbal },
			{ "ICSTA", "ICSTA", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupIcsta },
			{ "ICCOM", "ICCOM", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupIccom },
			{ "ICDNO", "ICDNO", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupIcdno },
			{ ".IOC", ".IOC", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDotIoc },
			{ "IOCB", "IOCB", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupIocb },
			{ "IOB", "IOB", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupIob },
			{ "IOC", "IOC", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupIoc },
			{ "ATACHR", "ATACHR", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupAtaChr },
			{ "LMARGN", "LMARGN", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupLMargn },
			{ "BOTSC", "BOTSC", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupBotsC },
			{ "CH", "CH", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupCh },
			{ "CONSOL", "CONSOL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupConsol },
			{ "COL4", "COL4", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupCol4 },
			{ "COL3", "COL3", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupCol3 },
			{ "COL2", "COL2", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupCol2 },
			{ "COL1", "COL1", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupCol1 },
			{ "COL0", "COL0", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupCol0 },
			{ "CHBAS", "CHBAS", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupChBas },
			{ "CRSINH", "CRSINH", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupCrsinh },
			{ "RTCLK", "RTCLK", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupRtClk },
			{ "DMCT", "DMCT", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDmct },
			{ "DLST", "DLST", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDlst },
			{ "AUDCTL", "AUDCTL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupAudCtl },
			{ "SKCTL", "SKCTL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupSkCtl },
			{ "C4AUD", "C4AUD", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupC4Aud },
			{ "F4AUD", "F4AUD", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupF4Aud },
			{ "C3AUD", "C3AUD", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupC3Aud },
			{ "F3AUD", "F3AUD", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupF3Aud },
			{ "C2AUD", "C2AUD", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupC2Aud },
			{ "F2AUD", "F2AUD", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupF2Aud },
			{ "C1AUD", "C1AUD", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupC1Aud },
			{ "F1AUD", "F1AUD", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupF1Aud },
			{ "CN", "CN", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupCn },
			{ "EDITOR", "EDITOR", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupEditor },
			{ "ARRAY", "ARRAY", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupArray },
			{ "ALLOC", "ALLOC", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupAlloc },
			{ "TBL", "TBL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupTbl },
			{ "\\", "\\", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupBackslashBackslash },
			{ "BDUMP", "BDUMP", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupBDump },
			{ "H?", "H?", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupHQ },
			{ "HH", "HH", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupHh },
			{ "CH?", "CH?", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupChQ },
			{ "CHH", "CHH", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupChH },
			{ "HD", "HD", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupHd },
			{ "2*", "2*", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupTwoStar },
			{ "0SET", "0SET", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupZeroSet },
			{ "1-", "1-", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupOneMinus },
			{ "1+!", "1+!", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupOnePlusStore },
			{ "CODE", "CODE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupCode }, /* Coin-Up Assembler */
			{ "ASSEMBLER", "ASSEMBLER", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupAssembler }, /* Coin-Up Assembler */
			{ "VLIST", "VLIST", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupVList }, /* Coin-Up kernel */
			{ "TRIAD", "TRIAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupTriad },
			{ "INDEX", "INDEX", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupIndex },
			{ "LIST", "LIST", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupList },  /* fig Editor */
			{ "?", "?", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupQ }, /* Coin-Up kernel */
			{ ".", ".", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDot },
			{ ".R", ".R", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDotR },
			{ "D.", "D.", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDDot },
			{ "D.R", "D.R", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDDotR },
			{ "#S", "#S", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupNumS },
			{ "#", "#", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupNum },
			{ "SIGN", "SIGN", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupSign },
			{ "#>", "#>", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupNumGreater },
			{ "<#", "<#", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupLessNum },
			{ "SPACES", "SPACES", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupSpaces },
			{ "WHILE", "WHILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupWhile },
			{ "ELSE", "ELSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupElse },
			{ "IF", "IF", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupIf },
			{ "REPEAT", "REPEAT", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupRepeat },
			{ "AGAIN", "AGAIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupAgain },
			{ "END", "END", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupEnd },
			{ "UNTIL", "UNTIL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupUntil },
			{ "+LOOP", "+LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupPlusLoop },
			{ "LOOP", "LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupLoop },
			{ "DO", "DO", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDo },
			{ "THEN", "THEN", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupThen },
			{ "ENDIF", "ENDIF", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupEndIf },
			{ "BEGIN", "BEGIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupBegin },
			{ "BACK", "BACK", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupBack },
			{ "FORGET", "FORGET", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupForget },
			{ "'", "'", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupTick },
			{ "UPDATE", "UPDATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupUpdate },
			{ "FLUSH", "FLUSH", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupFlush }, /* Both fig Editor word and Coin-up kernel word. ATARI-8bit specific, not figFORTH */
			{ "R/W", "R/W", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupRSlashW },
			{ "DDIO", "DDIO", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDdIo }, /* ATARI-8bit specific, not figFORTH */
			{ "DIO", "DIO", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDIo }, /* ATARI-8bit specific, not figFORTH */
			{ "SECIO", "SECIO", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupSecIo }, /* ATARI-8bit specific, not figFORTH */
			{ "SIO", "SIO", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupSio }, /* ATARI-8bit specific, not figFORTH */
			{ "DECMAP", "DECMAP", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDecMap }, /* ATARI-8bit specific, not figFORTH */
			{ "TYPE", "TYPE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupType },
			{ "?TERMINAL", "?TERMINAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupQTerminal },
			{ "CR", "CR", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupCr },
			{ "EMIT", "EMIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupEmit },
			{ "KEY", "KEY", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupKey },
			{ "TCIOV", "TCIOV", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupTciov }, /* ATARI-8bit specific, not figFORTH */
			{ "ICAL", "ICAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupIcAl }, /* ATARI-8bit specific, not figFORTH */
			{ "ICLL", "ICLL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupIcLl }, /* ATARI-8bit specific, not figFORTH */
			{ "ICCM", "ICCM", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupIcCm }, /* ATARI-8bit specific, not figFORTH */
			{ "-->", "-->", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupTo },
			{ "LOAD", "LOAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupLoad },
			{ "MESSAGE", "MESSAGE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupMessage },
			{ ".LINE", ".LINE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDotLine },
			{ "(LINE)", "(LINE)", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupYLine },
			{ "BLOCK", "BLOCK", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupBlock },
			{ "BUFFER", "BUFFER", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupBuffer },
			{ "BFND", "BFND", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupBfnd }, /* ATARI-8bit specific, not figFORTH */
			{ "DR1", "DR1", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDr1 },
			{ "DR0", "DR0", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDr0 },
			{ "EMPTY-BUFFERS", "EMPTY-BUFFERS", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupEmptyBuffers },
			{ "ALT", "ALT", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupAlt }, /* ATARI-8bit specific, not figFORTH */
			{ "PREV", "PREV", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupPrev },
			{ "PTAB", "PTAB", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupPtab }, /* ATARI-8bit specific, not figFORTH */
			{ "M/MOD", "M/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupMSlashMod },
			{ "*/", "*/", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupStarSlash },
			{ "*/MOD", "*/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupStarSlashMod },
			{ "MOD", "MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupMod },
			{ "/", "/", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupSlash },
			{ "/MOD", "/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupslashMod },
			{ "*", "*", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupStar },
			{ "M/", "M/", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupMSlash },
			{ "M*", "M*", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupMStar },
			{ "MAX", "MAX", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupMax },
			{ "MIN", "MIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupMin },
			{ "DABS", "DABS", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDAbs },
			{ "ABS", "ABS", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupAbs },
			{ "D+-", "D+-", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDPlusMinus },
			{ "+-", "+-", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupPlusMinus },
			{ "S->D", "S->D", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupSToD },
			{ "COLD", "COLD", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupCold },
			{ "ABORT", "ABORT", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupAbort },
			{ "QUIT", "QUIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupQuit },
			{ "(", "(", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupParen },
			{ "DEFINITIONS", "DEFINITIONS", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDefinitions },
			{ "FORTH", "FORTH", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupForth },
			{ "VOCABULARY", "VOCABULARY", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupVocabulary },
			{ "IMMEDIATE", "IMMEDIATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupImmediate },
			{ "INTERPRET", "INTERPRET", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupInterpret },
			{ "?STACK", "?STACK", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupQStack },
			{ "DLITERAL", "DLITERAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDLiteral },
			{ "LITERAL", "LITERAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupLiteral },
			{ "[COMPILE]", "[COMPILE]", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupXCompile },
			{ "CREATE", "CREATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupCreate },
			{ "ID.", "ID.", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupIdDot },
			{ "ERROR", "ERROR", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupError },
			{ "(ABORT)", "(ABORT)", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupYAbort },
			{ "-FIND", "-FIND", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupMinusFind },
			{ "HASH", "HASH", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupHash }, /* ATARI-8bit specific, not figFORTH */
			{ "NUMBER", "NUMBER", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupNumber },
			{ "(NUMBER)", "(NUMBER)", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupYNumber },
			{ "7BITS", "7BITS", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinup7Bits }, /* ATARI-8bit specific, not figFORTH */
			{ "WORD", "WORD", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupWord },
			{ "PAD", "PAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupPad },
			{ "HOLD", "HOLD", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupHold },
			{ "BLANKS", "BLANKS", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupBlanks },
			{ "ERASE", "ERASE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupErase },
			{ "FILL", "FILL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupFill },
			{ "♣", "♣", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupHeart }, /* Not mentioned in the manual, just listed by VLIST */
			{ "QUERY", "QUERY", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupQuery },
			{ "EXPECT", "EXPECT", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupExpect },
			{ ".\"", ".\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDotQuote },
			{ "(.\")", "(.\")", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupParenDotQuote },
			{ "-TRAILING", "-TRAILING", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupTrailing },
			{ "COUNT", "COUNT", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupCount },
			{ "DOES>", "DOES>", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDoes },
			{ "<BUILDS", "<BUILDS", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupBuilds },
			{ ";CODE", ";CODE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupSemicolonCode },
			{ "(;CODE)", "(;CODE)", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupYSemicolonCode },
			{ "DECIMAL", "DECIMAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDecimal },
			{ "HEX", "HEX", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupHex },
			{ "SMUDGE", "SMUDGE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupSmudge },
			{ "]", "]", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupRightBracket },
			{ "[", "[", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupLeftBracket },
			{ "COMPILE", "COMPILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupCompile },
			{ "?LOADING", "?LOADING", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupQLoading },
			{ "?CSP", "?CSP", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupQCsp },
			{ "?PAIRS", "?PAIRS", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupQPairs },
			{ "?EXEC", "?EXEC", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupQExec },
			{ "?COMP", "?COMP", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupQComp },
			{ "?ERROR", "?ERROR", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupQError },
			{ "!CSP", "!CSP", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupStoreCsp },
			{ "LFA", "LFA", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupLfa },
			{ "PFA", "PFA", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupPfa },
			{ "NFA", "NFA", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupNfa },
			{ "CFA", "CFA", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupCfa },
			{ "LATEST", "LATEST", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupLatest },
			{ "TRAVERSE", "TRAVERSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupTraverse },
			{ "-DUP", "-DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupMinusDup },
			{ "SPACE", "SPACE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupSpace },
			{ "ROT", "ROT", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupRot },
			{ ">", ">", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupGreater },
			{ "=", "=", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupEqual },
			{ "-", "-", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupMinus },
			{ "C,", "C,", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupCComma },
			{ ",", ",", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupComma },
			{ "ALLOT", "ALLOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupAllot },
			{ "HERE", "HERE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupHere },
			{ "2+", "2+", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupTwoPlus },
			{ "1+", "1+", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupOnePlus },
			{ "PHYSOFF", "PHYSOFF", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupPhysOff }, /* ATARI-8bit specific, not figFORTH */
			{ "INPT", "INPT", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupInpt },
			{ "HLD", "HLD", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupHld },
			{ "R#", "R#", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupRNum },
			{ "CSP", "CSP", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupCsp },
			{ "FLD", "FLD", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupFld },
			{ "DPL", "DPL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDpl },
			{ "BASE", "BASE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupBase },
			{ "STATE", "STATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupState },
			{ "CURRENT", "CURRENT", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupCurrent },
			{ "CONTEXT", "CONTEXT", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupContext },
			{ "OFFSET", "OFFSET", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupOffset },
			{ "SCR", "SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupScr },
			{ "OUT", "OUT", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupOut },
			{ "IN", "IN", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupIn },
			{ "BLK", "BLK", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupBlk },
			{ "VOC-LINK", "VOC-LINK", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupVocLink },
			{ "DP", "DP", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDp },
			{ "FENCE", "FENCE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupFence },
			{ "WARNING", "WARNING", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupWarning },
			{ "WIDTH", "WIDTH", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupWidth },
			{ "TIB", "TIB", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupTib },
			{ "+ORIGIN", "+ORIGIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupPlusOrigin },
			{ "HIMEM", "HIMEM", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupHimem }, /* ATARI-8bit specific, not figFORTH */
			{ "B/SCR", "B/SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupBSlashScr },
			{ "B/BUF", "B/BUF", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupBSlashBuf },
			{ "LIMIT", "LIMIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupLimit },
			{ "FIRST", "FIRST", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupFirst },
			{ "#LINKS", "#LINKS", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupNumLinks }, /* ATARI-8bit specific, not figFORTH */
			{ "C/L", "C/L", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupCSlashL },
			{ "CL", "CL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupCl }, /* fig Editor */
			{ "BL", "BL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupBl },
			{ "3", "3", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupThree }, /* Coin-Up kernel */
			{ "2", "2", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupTwo },
			{ "1", "1", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupOne },
			{ "0", "0", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupZero },
			{ "USER", "USER", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupUser },
			{ "VARIABLE", "VARIABLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupVariable },
			{ "CONSTANT", "CONSTANT", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupConstant },
			{ ";", ";", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupSemicolon },
			{ ":", ":", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupColon },
			{ "C!", "C!", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupCStore },
			{ "!", "!", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupStore },
			{ "C@", "C@", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupCFetch },
			{ "@", "@", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupFetch },
			{ "TOGGLE", "TOGGLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupToggle },
			{ "+!", "+!", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupPlusStore },
			{ "DUP", "DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDup },
			{ "SWAP", "SWAP", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupSwap },
			{ "DROP", "DROP", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDrop },
			{ "OVER", "OVER", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupOver },
			{ "DMINUS", "DMINUS", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDMinus },
			{ "MINUS", "MINUS", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupMinusWord },
			{ "D+", "D+", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDPlus },
			{ "+", "+", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupPlus },
			{ "<", "<", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupLess },
			{ "U<", "U<", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupULess },
			{ "0<", "0<", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupZeroLess },
			{ "0=", "0=", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupZeroEqual },
			{ "R", "R", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupR },
			{ "R>", "R>", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupRTo },
			{ ">R", ">R", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupGreaterR },
			{ "LEAVE", "LEAVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupLeave },
			{ ";S", ";S", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupSemicolonS },
			{ "RP!", "RP!", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupRPStoreye },
			{ "SP!", "SP!", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupSPStore },
			{ "SP@", "SP@", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupSPFetch },
			{ "XOR", "XOR", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupXor },
			{ "OR", "OR", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupOr },
			{ "AND", "AND", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupAnd },
			{ "U/", "U/", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupUSlash },
			{ "U*", "U*", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupUStar },
			{ "CMOVE", "CMOVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupCMove },
			{ "D8U*", "D8U*", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupD8uStar }, /* ATARI-8bit specific, not figFORTH */
			{ "ENCLOSE", "ENCLOSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupEnclose },
			{ "(FIND)", "(FIND)", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupYFind },
			{ "DIGIT", "DIGIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDigit },
			{ "J", "J", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupJ }, /* ATARI-8bit specific, not figFORTH */
			{ "I", "I", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupI },
			{ "(DO)", "(DO)", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupYDo },
			{ "(+LOOP)", "(+LOOP)", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupYPlusLoop },
			{ "(LOOP)", "(LOOP)", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupYLoop },
			{ "0BRANCH", "0BRANCH", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupZeroBranch },
			{ "BRANCH", "BRANCH", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupBranch },
			{ "EXECUTE", "EXECUTE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupExecute },
			{ "LIT", "LIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupLit }
};

/* This vocabulary is not in the order of the VLIST / WORDS listing! */
static const typedef_forthWord forthWordsSorted[] = {
			{ ".IOC", ".IOC", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDotIoc }, /* Coin-Up ATARI extensions */
			{ "0SET", "0SET", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupZeroSet },
			{ "1+!", "1+!", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupOnePlusStore },
			{ "1-", "1-", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupOneMinus },
			{ "2*", "2*", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupTwoStar },
			{ "ACIO", "ACIO", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupAcIo },
			{ "ALLOC", "ALLOC", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupAlloc },
			{ "ARRAY", "ARRAY", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupArray },
			{ "ATACHR", "ATACHR", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupAtaChr },
			{ "AUDCTL", "AUDCTL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupAudCtl },
			{ "BOTSC", "BOTSC", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupBotsC },
			{ "BDUMP", "BDUMP", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupBDump },
			{ "C.", "C.", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupCDot },
			{ "C1AUD", "C1AUD", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupC1Aud },
			{ "C2AUD", "C2AUD", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupC2Aud },
			{ "C3AUD", "C3AUD", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupC3Aud },
			{ "C4AUD", "C4AUD", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupC4Aud },
			{ "CH", "CH", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupCh },
			{ "CH?", "CH?", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupChQ },
			{ "CHBAS", "CHBAS", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupChBas },
			{ "CHH", "CHH", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupChH },
			{ "CIO", "CIO", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupCIo },
			{ "CLEAR", "CLEAR", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupClear },
			{ "CLOSE", "CLOSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupClose },
			{ "CN", "CN", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupCn },
			{ "COL0", "COL0", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupCol0 },
			{ "COL1", "COL1", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupCol1 },
			{ "COL2", "COL2", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupCol2 },
			{ "COL3", "COL3", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupCol3 },
			{ "COL4", "COL4", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupCol4 },
			{ "COLOR", "COLOR", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupColor },
			{ "COLPM", "COLPM", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupColpm },
			{ "COLPM!", "COLPM!", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupColpmStore },
			{ "CONSOL", "CONSOL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupConsol },
			{ "CRSINH", "CRSINH", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupCrsinh },
			{ "Color", "Color", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupColor },
			{ "DLST", "DLST", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDlst },
			{ "DMACTL", "DMACTL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDmaCtl },
			{ "DMCT", "DMCT", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDmct },
			{ "DR.", "DR.", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDrDot },
			{ "DRAWTO", "DRAWTO", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDrawTo },
			{ "F1AUD", "F1AUD", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupF1Aud },
			{ "F2AUD", "F2AUD", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupF2Aud },
			{ "F3AUD", "F3AUD", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupF3Aud },
			{ "F4AUD", "F4AUD", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupF4Aud },
			{ "FILDAT", "FILDAT", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupFilDat },
			{ "FORMY", "FORMY", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupFormy },
			{ "GET", "GET", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupGet },
			{ "GR.", "GR.", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupGrDot },
			{ "GRACTL", "GRACTL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupGractl },
			{ "GRAPHICS", "GRAPHICS", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupGraphics },
			{ "GPRIOR", "GPRIOR", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupGPrior }, /* Mentioned in manual, but not in the wordlists of the manual */
			{ "Get", "Get", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupGet },
			{ "H?", "H?", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupHQ },
			{ "HD", "HD", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupHd },
			{ "HH", "HH", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupHh },
			{ "HPOS!", "HPOS!", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupHPosStore },
			{ "I1CAX", "I1CAX", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupI1Cax },
			{ "I2CAX", "I2CAX", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupI2Cax },
			{ "ICBAL", "ICBAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupIcbal },
			{ "ICBLL", "ICBLL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupIcbll },
			{ "ICCOM", "ICCOM", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupIccom },
			{ "ICDNO", "ICDNO", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupIcdno },
			{ "ICPTL", "ICPTL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupIcptl },
			{ "ICSTA", "ICSTA", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupIcsta },
			{ "IOB", "IOB", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupIob },
			{ "IOC", "IOC", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupIoc },
			{ "IOCB", "IOCB", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupIocb },
			{ "LMARGN", "LMARGN", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupLMargn },
			{ "LOC.", "LOC.", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupLocDot },
			{ "LOCATE", "LOCATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupLocate },
			{ "LPWORDS", "LPWORDS", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupLpWords },
			{ "NOPLY", "NOPLY", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupNoPly },
			{ "OPEN", "OPEN", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupOpen },
			{ "PADDLE", "PADDLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupPaddle },
			{ "PBASE", "PBASE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupPBase },
			{ "PL.", "PL.", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupPlDot },
			{ "PLAYER", "PLAYER", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupPlayer },
			{ "PLOT", "PLOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupPlot },
			{ "PMBASE", "PMBASE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupPmBase },
			{ "POS.", "POS.", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupPosDot },
			{ "POSITION", "POSITION", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupPosition },
			{ "PRIOR", "PRIOR", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupPrior },
			{ "PTRIG", "PTRIG", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupPTrig },
			{ "PUT", "PUT", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupPut },
			{ "QBASE", "Qbase", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupQBase },
			{ "RND", "RND", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupRnd },
			{ "RTCLK", "RTCLK", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupRtClk },
			{ "S:", "S:", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupSColon },
			{ "SAVENFAS", "SAVENFAs", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupSaveNfas },
			{ "SE.", "SE.", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupSeDot },
			{ "SETCOLOR", "SETCOLOR", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupSetColor },
			{ "SIZE!", "SIZE!", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupSizeStore },
			{ "SKCTL", "SKCTL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupSkCtl },
			{ "SOUND", "SOUND", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupSound },
			{ "SPB", "SPB", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupSpb },
			{ "STICK", "STICK", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupStick },
			{ "STRIG", "STRIG", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupStrig },
			{ "TBL", "TBL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupTbl },
			{ "VDELAY", "VDELAY", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupVDelay },
			{ "XIO18", "XIO18", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupXio18 },
			{ "\\", "\\", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupBackslashBackslash },
			{ "♣", "♣", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupHeart }, /* Not mentioned in the manual, just listed by VLIST */
			{ "#OFLINES", "#OFLINES", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupNumOfLines }, /* fig Editor */
			{ "-MOVE", "-MOVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupMinusMove }, /* Unavailable word, for fig Editor */
			{ "$", "$", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDollar }, /* Unavailable word, for fig Editor */
			{ "%", "%", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupPercent }, /* Unavailable word, for fig Editor */
			{ "BL", "BL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupBl }, /* Both fig Editor word and Coin-up kernel word  */
			{ "COPY", "COPY", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupCopy },
			{ "C/L", "C/L", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupCSlashL },
			{ "DL", "DL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDl }, /* Unavailable word, for fig Editor */
			{ "DOIT", "DOIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDoit }, /* Unavailable word, for fig Editor */
			{ "EDIT", "EDIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupEdit },
			{ "EDITOR", "EDITOR", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupEditor },
			{ "FLUSH", "FLUSH", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupFlush }, /* Both fig Editor word and Coin-up kernel word  */
			{ "HL", "HL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupHl }, /* Unavailable word, for fig Editor */
			{ "IL", "IL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupIl }, /* Unavailable word, for fig Editor */
			{ "L", "L", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupL },
			{ "LINE", "LINE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupLine },
			{ "LIST", "LIST", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupList },
			{ "LL", "LL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupLl }, /* Unavailable word, for fig Editor */
			{ "N", "N", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupN },
			{ "RL", "RL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupRl }, /* Unavailable word, for fig Editor */
			{ "SHOW", "SHOW", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupShow },
			{ "SL", "SL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupSl }, /* Unavailable word, for fig Editor */
			{ "TEXT", "TEXT", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupText },
			{ "TL", "TL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupTl }, /* Unavailable word, for fig Editor */
			{ "TOPFLAG", "TOPFLAG", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupTopFlag }, /* Unavailable word, for fig Editor */
			{ "UL", "UL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupUl }, /* Unavailable word, for fig Editor */
			{ "ULL", "ULL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupUll }, /* Unavailable word, for fig Editor */
			{ "WHERE", "WHERE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupWhere },
			{ "ASSEMBLER", "ASSEMBLER", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupAssembler }, /* Coin-Up Assembler */
			{ "CODE", "CODE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupCode },
			{ "!", "!", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupStore }, /* Coin-Up kernel */
			{ "!CSP", "!CSP", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupStoreCsp },
			{ "#", "#", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupNum },
			{ "#>", "#>", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupNumGreater },
			{ "#LINKS", "#LINKS", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupNumLinks }, /* ATARI-8bit specific, not figFORTH */
			{ "#S", "#S", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupNumS },
			{ "'", "'", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupTick },
			{ "(", "(", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupParen },
			{ "(+LOOP)", "(+LOOP)", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupYPlusLoop },
			{ "(.\")", "(.\")", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupParenDotQuote },
			{ "(;CODE)", "(;CODE)", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupYSemicolonCode },
			{ "(ABORT)", "(ABORT)", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupYAbort },
			{ "(DO)", "(DO)", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupYDo },
			{ "(FIND)", "(FIND)", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupYFind },
			{ "(LINE)", "(LINE)", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupYLine },
			{ "(LOOP)", "(LOOP)", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupYLoop },
			{ "(NUMBER)", "(NUMBER)", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupYNumber },
			{ "+", "+", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupPlus },
			{ "+!", "+!", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupPlusStore },
			{ "+-", "+-", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupPlusMinus },
			{ "+LOOP", "+LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupPlusLoop },
			{ "+ORIGIN", "+ORIGIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupPlusOrigin },
			{ ",", ",", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupComma },
			{ "-", "-", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupMinus },
			{ "-->", "-->", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupTo },
			{ "-DUP", "-DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupMinusDup },
			{ "-FIND", "-FIND", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupMinusFind },
			{ "-TRAILING", "-TRAILING", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupTrailing },
			{ "*", "*", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupStar },
			{ "*/", "*/", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupStarSlash },
			{ "*/MOD", "*/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupStarSlashMod },
			{ ".", ".", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDot },
			{ ".\"", ".\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDotQuote },
			{ ".LINE", ".LINE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDotLine },
			{ ".R", ".R", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDotR },
			{ "/", "/", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupSlash },
			{ "/MOD", "/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupslashMod },
			{ "0", "0", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupZero },
			{ "1", "1", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupOne },
			{ "2", "2", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupTwo },
			{ "3", "3", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupThree },
			{ "0<", "0<", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupZeroLess },
			{ "0=", "0=", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupZeroEqual },
			{ "0BRANCH", "0BRANCH", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupZeroBranch },
			{ "1+", "1+", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupOnePlus },
			{ "2+", "2+", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupTwoPlus },
			{ "7BITS", "7BITS", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinup7Bits }, /* ATARI-8bit specific, not figFORTH */
			{ ":", ":", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupColon },
			{ ";", ";", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupSemicolon },
			{ ";CODE", ";CODE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupSemicolonCode },
			{ ";S", ";S", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupSemicolonS },
			{ "<", "<", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupLess },
			{ "<#", "<#", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupLessNum },
			{ "<BUILDS", "<BUILDS", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupBuilds },
			{ "=", "=", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupEqual },
			{ ">", ">", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupGreater },
			{ ">R", ">R", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupGreaterR },
			{ "?", "?", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupQ },
			{ "?COMP", "?COMP", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupQComp },
			{ "?CSP", "?CSP", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupQCsp },
			{ "?ERROR", "?ERROR", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupQError },
			{ "?EXEC", "?EXEC", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupQExec },
			{ "?LOADING", "?LOADING", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupQLoading },
			{ "?PAIRS", "?PAIRS", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupQPairs },
			{ "?STACK", "?STACK", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupQStack },
			{ "?TERMINAL", "?TERMINAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupQTerminal },
			{ "@", "@", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupFetch },
			{ "ABORT", "ABORT", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupAbort },
			{ "ABS", "ABS", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupAbs },
			{ "AGAIN", "AGAIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupAgain },
			{ "ALLOT", "ALLOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupAllot },
			{ "ALT", "ALT", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupAlt }, /* ATARI-8bit specific, not figFORTH */
			{ "AND", "AND", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupAnd },
			{ "B/BUF", "B/BUF", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupBSlashBuf },
			{ "B/SCR", "B/SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupBSlashScr },
			{ "BACK", "BACK", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupBack },
			{ "BASE", "BASE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupBase },
			{ "BEGIN", "BEGIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupBegin },
			{ "BFND", "BFND", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupBfnd }, /* ATARI-8bit specific, not figFORTH */
			{ "BL", "BL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupBl },
			{ "BLANKS", "BLANKS", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupBlanks },
			{ "BLK", "BLK", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupBlk },
			{ "BLOCK", "BLOCK", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupBlock },
			{ "BRANCH", "BRANCH", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupBranch },
			{ "BUFFER", "BUFFER", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupBuffer },
			{ "C!", "C!", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupCStore },
			{ "CL", "CL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupCl },
			{ "C,", "C,", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupCComma },
			{ "C@", "C@", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupCFetch },
			{ "CFA", "CFA", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupCfa },
			{ "CMOVE", "CMOVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupCMove },
			{ "COLD", "COLD", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupCold },
			{ "COMPILE", "COMPILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupCompile },
			{ "CONSTANT", "CONSTANT", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupConstant },
			{ "CONTEXT", "CONTEXT", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupContext },
			{ "COUNT", "COUNT", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupCount },
			{ "CR", "CR", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupCr },
			{ "CREATE", "CREATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupCreate },
			{ "CSP", "CSP", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupCsp },
			{ "CURRENT", "CURRENT", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupCurrent },
			{ "D+", "D+", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDPlus },
			{ "D+-", "D+-", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDPlusMinus },
			{ "D.", "D.", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDDot },
			{ "D.R", "D.R", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDDotR },
			{ "D8U*", "D8U*", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupD8uStar }, /* ATARI-8bit specific, not figFORTH */
			{ "DABS", "DABS", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDAbs },
			{ "DDIO", "DDIO", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDdIo }, /* ATARI-8bit specific, not figFORTH */
			{ "DECIMAL", "DECIMAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDecimal },
			{ "DECMAP", "DECMAP", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDecMap }, /* ATARI-8bit specific, not figFORTH */
			{ "DEFINITIONS", "DEFINITIONS", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDefinitions },
			{ "DIGIT", "DIGIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDigit },
			{ "DIO", "DIO", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDIo }, /* ATARI-8bit specific, not figFORTH */
			{ "DLITERAL", "DLITERAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDLiteral },
			{ "DMINUS", "DMINUS", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDMinus },
			{ "DO", "DO", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDo },
			{ "DOES>", "DOES>", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDoes },
			{ "DP", "DP", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDp },
			{ "DPL", "DPL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDpl },
			{ "DR0", "DR0", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDr0 },
			{ "DR1", "DR1", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDr1 },
			{ "DROP", "DROP", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDrop },
			{ "DUP", "DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupDup },
			{ "ELSE", "ELSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupElse },
			{ "EMIT", "EMIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupEmit },
			{ "EMPTY-BUFFERS", "EMPTY-BUFFERS", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupEmptyBuffers },
			{ "ENCLOSE", "ENCLOSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupEnclose },
			{ "END", "END", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupEnd },
			{ "ENDIF", "ENDIF", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupEndIf },
			{ "ERASE", "ERASE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupErase },
			{ "ERROR", "ERROR", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupError },
			{ "EXECUTE", "EXECUTE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupExecute },
			{ "EXPECT", "EXPECT", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupExpect },
			{ "FENCE", "FENCE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupFence },
			{ "FILL", "FILL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupFill },
			{ "FIRST", "FIRST", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupFirst },
			{ "FLD", "FLD", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupFld },
			{ "FLUSH", "FLUSH", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupFlush }, /* ATARI-8bit specific, not figFORTH */
			{ "FORGET", "FORGET", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupForget },
			{ "FORTH", "FORTH", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupForth },
			{ "HASH", "HASH", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupHash }, /* ATARI-8bit specific, not figFORTH */
			{ "HERE", "HERE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupHere },
			{ "HEX", "HEX", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupHex },
			{ "HIMEM", "HIMEM", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupHimem }, /* ATARI-8bit specific, not figFORTH */
			{ "HLD", "HLD", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupHld },
			{ "HOLD", "HOLD", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupHold },
			{ "I", "I", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupI },
			{ "ICAL", "ICAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupIcAl }, /* ATARI-8bit specific, not figFORTH */
			{ "ICCM", "ICCM", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupIcCm }, /* ATARI-8bit specific, not figFORTH */
			{ "ICLL", "ICLL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupIcLl }, /* ATARI-8bit specific, not figFORTH */
			{ "ID.", "ID.", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupIdDot },
			{ "IF", "IF", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupIf },
			{ "IMMEDIATE", "IMMEDIATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupImmediate },
			{ "IN", "IN", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupIn },
			{ "INDEX", "INDEX", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupIndex },
			{ "INPT", "INPT", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupInpt },
			{ "INTERPRET", "INTERPRET", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupInterpret },
			{ "J", "J", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupJ }, /* ATARI-8bit specific, not figFORTH */
			{ "KEY", "KEY", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupKey },
			{ "LATEST", "LATEST", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupLatest },
			{ "LEAVE", "LEAVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupLeave },
			{ "LFA", "LFA", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupLfa},
			{ "LIMIT", "LIMIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupLimit },
			{ "LIST", "LIST", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupList },
			{ "LIT", "LIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupLit },
			{ "LITERAL", "LITERAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupLiteral },
			{ "LOAD", "LOAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupLoad },
			{ "LOOP", "LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupLoop },
			{ "M*", "M*", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupMStar },
			{ "M/", "M/", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupMSlash },
			{ "M/MOD", "M/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupMSlashMod },
			{ "MAX", "MAX", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupMax },
			{ "MESSAGE", "MESSAGE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupMessage },
			{ "MIN", "MIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupMin },
			{ "MINUS", "MINUS", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupMinus },
			{ "MOD", "MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupMod },
			{ "NFA", "NFA", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupNfa },
			{ "NUMBER", "NUMBER", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupNumber },
			{ "OFFSET", "OFFSET", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupOffset },
			{ "OR", "OR", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupOr },
			{ "OUT", "OUT", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupOut },
			{ "OVER", "OVER", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupOver },
			{ "PAD", "PAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupPad },
			{ "PFA", "PFA", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupPfa },
			{ "PHYSOFF", "PHYSOFF", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupPhysOff }, /* ATARI-8bit specific, not figFORTH */
			{ "PREV", "PREV", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupPrev },
			{ "PTAB", "PTAB", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupPtab }, /* ATARI-8bit specific, not figFORTH */
			{ "QUERY", "QUERY", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupQuery },
			{ "QUIT", "QUIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupQuit },
			{ "R", "R", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupR },
			{ "R#", "R#", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupRNum },
			{ "R/W", "R/W", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupRSlashW },
			{ "R0", "R0", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupR0 }, /* Unavailable word, for fig Editor */
			{ "R>", "R>", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupRTo },
			{ "REPEAT", "REPEAT", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupRepeat },
			{ "ROT", "ROT", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupRot },
			{ "RP!", "RP!", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupRPStoreye },
			{ "S->D", "S->D", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupSToD },
			{ "S0", "S0", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupS0 }, /* Unavailable word, for fig Editor */
			{ "SCR", "SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupScr },
			{ "SECIO", "SECIO", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupSecIo }, /* ATARI-8bit specific, not figFORTH */
			{ "SIGN", "SIGN", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupSign },
			{ "SIO", "SIO", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupSio }, /* ATARI-8bit specific, not figFORTH */
			{ "SMUDGE", "SMUDGE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupSmudge },
			{ "SP!", "SP!", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupSPStore },
			{ "SP@", "SP@", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupSPFetch },
			{ "SPACE", "SPACE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupSpace },
			{ "SPACES", "SPACES", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupSpaces },
			{ "STATE", "STATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupState },
			{ "SWAP", "SWAP", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupSwap },
			{ "TASK", "TASK", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupTask },
			{ "TCIOV", "TCIOV", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupTciov }, /* ATARI-8bit specific, not figFORTH */
			{ "THEN", "THEN", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupThen },
			{ "TIB", "TIB", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupTib },
			{ "TOGGLE", "TOGGLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupToggle },
			{ "TRAVERSE", "TRAVERSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupTraverse },
			{ "TRIAD", "TRIAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupTriad },
			{ "TYPE", "TYPE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupType },
			{ "U*", "U*", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupUStar },
			{ "U/", "U/", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupUSlash },
			{ "TCIOV", "TCIOV", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupTciov }, /* ATARI-8bit specific, not figFORTH */
			{ "U<", "U<", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupULess },
			{ "UNTIL", "UNTIL", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupUntil },
			{ "UPDATE", "UPDATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupUpdate },
			{ "USER", "USER", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupUser },
			{ "VARIABLE", "VARIABLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupVariable },
			{ "VLIST", "VLIST", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupVList },
			{ "VOC-LINK", "VOC-LINK", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupVocLink },
			{ "VOCABULARY", "VOCABULARY", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupVocabulary },
			{ "WARNING", "WARNING", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupWarning },
			{ "WHILE", "WHILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupWhile },
			{ "WIDTH", "WIDTH", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupWidth },
			{ "WORD", "WORD", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupWord },
			{ "X", "X", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupX },
			{ "XOR", "XOR", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupXor },
			{ "[", "[", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupLeftBracket },
			{ "[COMPILE]", "[COMPILE]", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupXCompile },
			{ "]", "]", TRUE, FALSE, FALSE, 0UL, (forthOperation)coinupRightBracket },
			{ "H2OFORTH", "H2OFORTH", TRUE, FALSE, FALSE, MAX_FORTHWORD_ID, (forthOperation)NULL }
};

// The following fig-FORTH words are not included in Coin-Op FORTH:
//  +BUF , BLOCK-READ , BLOCK-WRITE, DLIST (this word was used to list the vocabulary; it had nothing to do with graphics display
// lists), DUMP , MON , MOVE , USE

#endif
