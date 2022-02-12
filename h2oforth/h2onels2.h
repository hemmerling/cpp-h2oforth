#ifndef H2ONELS2
#define H2ONELS2

/* Brad Nelson's "ESP32Forth v.7.05" & "MicroEforth ( uEForth ) 7.0.6.9" FORTHs */

/* Primitives */

#if H2O_FORTH_PRIMITIVES == NELSON_FORTH || \
	H2O_FORTH_PRIMITIVES == NELSON_ESP_FORTH || \
	H2O_FORTH_PRIMITIVES == NELSON_UE_FORTH
void nelsonForth(void) {
#if defined (__DEBUG__)
	printf("nelsonForth\n");
#endif
}

void nelsonTo(void) {
#if defined (__DEBUG__)
	printf("nelsonTo\n");
#endif
}

void nelsonPlusTo(void) {
#if defined (__DEBUG__)
	printf("nelsonPlusTo\n");
#endif
}

void nelsonSemicolon(void) {
#if defined (__DEBUG__)
	printf("nelsonSemicolon\n");
#endif
}

void nelsonLeftBrace(void) {
#if defined (__DEBUG__)
	printf("nelsonLeftBrace\n");
#endif
}

void nelsonEditor(void) {
#if defined (__DEBUG__)
	printf("nelsonEditor\n");
#endif
}

void nelsonList(void) {
#if defined (__DEBUG__)
	printf("nelsonList\n");
#endif
}

void nelsonCopy(void) {
#if defined (__DEBUG__)
	printf("nelsonCopy\n");
#endif
}

void nelsonThru(void) {
#if defined (__DEBUG__)
	printf("nelsonThru\n");
#endif
}

void nelsonLoad(void) {
#if defined (__DEBUG__)
	printf("nelsonLoad\n");
#endif
}

void nelsonFlush(void) {
#if defined (__DEBUG__)
	printf("nelsonFlush\n");
#endif
}

void nelsonUpdate(void) {
#if defined (__DEBUG__)
	printf("nelsonUpdate\n");
#endif
}

void nelsonEmptyBuffers(void) {
#if defined (__DEBUG__)
	printf("nelsonEmptyBuffers\n");
#endif
}

void nelsonBuffer(void) {
#if defined (__DEBUG__)
	printf("nelsonBuffer\n");
#endif
}

void nelsonBlock(void) {
#if defined (__DEBUG__)
	printf("nelsonBlock\n");
#endif
}

void nelsonSaveBuffers(void) {
#if defined (__DEBUG__)
	printf("nelsonBlock\n");
#endif
}

void nelsonDefaultUse(void) {
#if defined (__DEBUG__)
	printf("nelsonDefaultUse\n");
#endif
}

void nelsonUse(void) {
#if defined (__DEBUG__)
	printf("nelsonUse\n");
#endif
}

void nelsonOpenBlocks(void) {
#if defined (__DEBUG__)
	printf("nelsonOpenBlocks\n");
#endif
}

void nelsonBlockId(void) {
#if defined (__DEBUG__)
	printf("nelsonBlockId\n");
#endif
}

void nelsonScr(void) {
#if defined (__DEBUG__)
	printf("nelsonScr\n");
#endif
}

void nelsonBlockFid(void) {
#if defined (__DEBUG__)
	printf("nelsonBlockFid\n");
#endif
}

void nelsonStreams(void) {
#if defined (__DEBUG__)
	printf("nelsonStreams\n");
#endif
}

void nelsonReset(void) {
#if defined (__DEBUG__)
	printf("nelsonReset\n");
#endif
}

void nelsonRevive(void) {
#if defined (__DEBUG__)
	printf("nelsonRevive\n");
#endif
}

void nelsonStartup(void) {
#if defined (__DEBUG__)
	printf("nelsonStartup\n");
#endif
}

void nelsonRemember(void) {
#if defined (__DEBUG__)
	printf("nelsonRemember\n");
#endif
}

void nelsonRestore(void) {
#if defined (__DEBUG__)
	printf("nelsonRestore\n");
#endif
}

void nelsonSave(void) {
#if defined (__DEBUG__)
	printf("nelsonSave\n");
#endif
}

void nelsonDumpFile(void) {
#if defined (__DEBUG__)
	printf("nelsonDumpFile\n");
#endif
}

void nelsonWords(void) {
#if defined (__DEBUG__)
	printf("nelsonWords\n");
#endif
}

void nelsonVlist(void) {
#if defined (__DEBUG__)
	printf("nelsonWords\n");
#endif
}

void nelsonOrder(void) {
#if defined (__DEBUG__)
	printf("nelsonOrder\n");
#endif
}

void nelsonSee(void) {
#if defined (__DEBUG__)
	printf("nelsonSee\n");
#endif
}

void nelsonDotS(void) {
#if defined (__DEBUG__)
	printf("nelsonDotS\n");
#endif
}

void nelsonStartsWithQ(void) {
#if defined (__DEBUG__)
	printf("nelsonStartsWithQ\n");
#endif
}

void nelsonStrEqual(void) {
#if defined (__DEBUG__)
	printf("nelsonStrEqual\n");
#endif
}

void nelsonColonNoname(void) {
#if defined (__DEBUG__)
	printf("nelsonColonNoname\n");
#endif
}

void nelsonSmudge(void) {
#if defined (__DEBUG__)
	printf("nelsonSmudge\n");
#endif
}

void nelsonForget(void) {
#if defined (__DEBUG__)
	printf("nelsonForget\n");
#endif
}

void nelsonDump(void) {
#if defined (__DEBUG__)
	printf("nelsonDump\n");
#endif
}

void nelsonAssert(void) {
#if defined (__DEBUG__)
	printf("nelsonAssert\n");
#endif
}

void nelsonStartTask(void) {
#if defined (__DEBUG__)
	printf("nelsonStartTask\n");
#endif
}

void nelsonTask(void) {
#if defined (__DEBUG__)
	printf("nelsonTask\n");
#endif
}

void nelsonPause(void) {
#if defined (__DEBUG__)
	printf("nelsonPause\n");
#endif
}

void nelsonTasks(void) {
#if defined (__DEBUG__)
	printf("nelsonTasks\n");
#endif
}

void nelsonInclude(void) {
#if defined (__DEBUG__)
	printf("nelsonInclude\n");
#endif
}

void nelsonIncluded(void) {
#if defined (__DEBUG__)
	printf("nelsonIncluded\n");
#endif
}

void nelsonResize(void) {
#if defined (__DEBUG__)
	printf("nelsonResize\n");
#endif
}

void nelsonFree(void) {
#if defined (__DEBUG__)
	printf("nelsonFree\n");
#endif
}

void nelsonAllocate(void) {
#if defined (__DEBUG__)
	printf("nelsonAllocate\n");
#endif
}

void nelsonOk(void) {
#if defined (__DEBUG__)
	printf("nelsonOk\n");
#endif
}

void nelsonMs(void) {
#if defined (__DEBUG__)
	printf("nelsonMs\n");
#endif
}

void nelsonFileSize(void) {
#if defined (__DEBUG__)
	printf("nelsonFileSize\n");
#endif
}

void nelsonResizeFile(void) {
#if defined (__DEBUG__)
	printf("nelsonResizeFile\n");
#endif
}

void nelsonRepositionFile(void) {
#if defined (__DEBUG__)
	printf("nelsonRepositionFile\n");
#endif
}

void nelsonFilePosition(void) {
#if defined (__DEBUG__)
	printf("nelsonFilePosition\n");
#endif
}

void nelsonReadFile(void) {
#if defined (__DEBUG__)
	printf("nelsonReadFile\n");
#endif
}

void nelsonWriteFile(void) {
#if defined (__DEBUG__)
	printf("nelsonWriteFile\n");
#endif
}

void nelsonDeleteFile(void) {
#if defined (__DEBUG__)
	printf("nelsonDeleteFile\n");
#endif
}

void nelsonCreateFile(void) {
#if defined (__DEBUG__)
	printf("nelsonCreateFile\n");
#endif
}

void nelsonOpenFile(void) {
#if defined (__DEBUG__)
	printf("nelsonOpenFile\n");
#endif
}

void nelsonFlushFile(void) {
#if defined (__DEBUG__)
	printf("nelsonFlushFile\n");
#endif
}

void nelsonCloseFile(void) {
#if defined (__DEBUG__)
	printf("nelsonCloseFile\n");
#endif
}

void nelsonRSlashW(void) {
#if defined (__DEBUG__)
	printf("nelsonRSlashW\n");
#endif
}

void nelsonWSlashO(void) {
#if defined (__DEBUG__)
	printf("nelsonWSlashO\n");
#endif
}

void nelsonRSlashO(void) {
#if defined (__DEBUG__)
	printf("nelsonRSlashO\n");
#endif
}

void nelsonPage(void) {
#if defined (__DEBUG__)
	printf("nelsonPage\n");
#endif
}



void nelsonInternals(void) {
#if defined (__DEBUG__)
	printf("nelsonInternals\n");
#endif
}

void nelsonSealed(void) {
#if defined (__DEBUG__)
	printf("nelsonSealed\n");
#endif
}

void nelsonAlso(void) {
#if defined (__DEBUG__)
	printf("nelsonAlso\n");
#endif
}

void nelsonOnly(void) {
#if defined (__DEBUG__)
	printf("nelsonOnly\n");
#endif
}

void nelsonTransferLeftBrace(void) {
#if defined (__DEBUG__)
	printf("nelsonTransferLeftBrace\n");
#endif
}

void nelsonRightBraceTransfer(void) {
#if defined (__DEBUG__)
	printf("nelsonRightBraceTransfer\n");
#endif
}

void nelsonTransfer(void) {
#if defined (__DEBUG__)
	printf("nelsonTransfer\n");
#endif
}

void nelsonDefinitions(void) {
#if defined (__DEBUG__)
	printf("nelsonDefinitions\n");
#endif
}

void nelsonVocabulary(void) {
#if defined (__DEBUG__)
	printf("nelsonVocabulary\n");
#endif
}

void nelsonXif(void) {
#if defined (__DEBUG__)
	printf("nelsonXif\n");
#endif
}

void nelsonXElse(void) {
#if defined (__DEBUG__)
	printf("nelsonXElse\n");
#endif
}

void nelsonXThen(void) {
#if defined (__DEBUG__)
	printf("nelsonXThen\n");
#endif
}

void nelsonDefinedQ(void) {
#if defined (__DEBUG__)
	printf("nelsonDefinedQ\n");
#endif
}

void nelsonQuit(void) {
#if defined (__DEBUG__)
	printf("nelsonQuit\n");
#endif
}

void nelsonEvaluate(void) {
#if defined (__DEBUG__)
	printf("nelsonEvaluate\n");
#endif
}

void nelsonPrompt(void) {
#if defined (__DEBUG__)
	printf("nelsonPrompt\n");
#endif
}

void nelsonRefill(void) {
#if defined (__DEBUG__)
	printf("nelsonRefill\n");
#endif
}

void nelsonTib(void) {
#if defined (__DEBUG__)
	printf("nelsonTib\n");
#endif
}

void nelsonAccept(void) {
#if defined (__DEBUG__)
	printf("nelsonAccept\n");
#endif
}

void nelsonEcho(void) {
#if defined (__DEBUG__)
	printf("nelsonEcho\n");
#endif
}


void nelsonFill(void) {
#if defined (__DEBUG__)
	printf("nelsonFill\n");
#endif
}

void nelsonCMoveFrom(void) {
#if defined (__DEBUG__)
	printf("nelsonCMoveFrom\n");
#endif
}

void nelsonCMove(void) {
#if defined (__DEBUG__)
	printf("nelsonCMove\n");
#endif
}

void nelsonYGreaterS(void) {
#if defined (__DEBUG__)
	printf("nelsonYGreaterS\n");
#endif
}

void nelsonSGreaterZ(void) {
#if defined (__DEBUG__)
	printf("nelsonSGreaterZ\n");
#endif
}

void nelsonRVerticalBar(void) {
#if defined (__DEBUG__)
	printf("nelsonRVerticalBar\n");
#endif
}

void nelsonRQuote(void) {
#if defined (__DEBUG__)
	printf("nelsonRVerticalBar\n");
#endif
}

void nelsonYQuote(void) {
#if defined (__DEBUG__)
	printf("nelsonYQuote\n");
#endif
}

void nelsonDotQuote(void) {
#if defined (__DEBUG__)
	printf("nelsonDotQuote\n");
#endif
}

void nelsonSQuote(void) {
#if defined (__DEBUG__)
	printf("nelsonSQuote\n");
#endif
}

void nelsonDollarPlace(void) {
#if defined (__DEBUG__)
	printf("nelsonDollarPlace\n");
#endif
}

void nelsonNDot(void) {
#if defined (__DEBUG__)
	printf("nelsonNDot\n");
#endif
}

void nelsonQ(void) {
#if defined (__DEBUG__)
	printf("nelsonQ\n");
#endif
}

void nelsonDot(void) {
#if defined (__DEBUG__)
	printf("nelsonDot\n");
#endif
}

void nelsonUDot(void) {
#if defined (__DEBUG__)
	printf("nelsonUDot\n");
#endif
}

void nelsonBinary(void) {
#if defined (__DEBUG__)
	printf("nelsonBinary\n");
#endif
}

void nelsonDecimal(void) {
#if defined (__DEBUG__)
	printf("nelsonDecimal\n");
#endif
}

void nelsonOctal(void) {
#if defined (__DEBUG__)
	printf("nelsonOctal\n");
#endif
}

void nelsonHex(void) {
#if defined (__DEBUG__)
	printf("nelsonHex\n");
#endif
}

void nelsonStr(void) {
#if defined (__DEBUG__)
	printf("nelsonStr\n");
#endif
}

void nelsonNumFrom(void) {
#if defined (__DEBUG__)
	printf("nelsonNumFrom\n");
#endif
}

void nelsonSign(void) {
#if defined (__DEBUG__)
	printf("nelsonSign\n");
#endif
}

void nelsonNumS(void) {
#if defined (__DEBUG__)
	printf("nelsonNumS\n");
#endif
}

void nelsonNum(void) {
#if defined (__DEBUG__)
	printf("nelsonNum\n");
#endif
}

void nelsonHold(void) {
#if defined (__DEBUG__)
	printf("nelsonHold\n");
#endif
}

void nelsonLessNum(void) {
#if defined (__DEBUG__)
	printf("nelsonLessNum\n");
#endif
}

void nelsonExtract(void) {
#if defined (__DEBUG__)
	printf("nelsonExtractm\n");
#endif
}

void nelsonPad(void) {
#if defined (__DEBUG__)
	printf("nelsonPad\n");
#endif
}

void nelsonHld(void) {
#if defined (__DEBUG__)
	printf("nelsonHld\n");
#endif
}

void nelsonCr(void) {
#if defined (__DEBUG__)
	printf("nelsonCr\n");
#endif
}

void nelsonSpace(void) {
#if defined (__DEBUG__)
	printf("nelsonSpace\n");
#endif
}

void nelsonEmit(void) {
#if defined (__DEBUG__)
	printf("nelsonEmit\n");
#endif
}

void nelsonBye(void) {
#if defined (__DEBUG__)
	printf("nelsonBye\n");
#endif
}

void nelsonKeyQ(void) {
#if defined (__DEBUG__)
	printf("nelsonKeyQ\n");
#endif
}

void nelsonKey(void) {
#if defined (__DEBUG__)
	printf("nelsonKey\n");
#endif
}

void nelsonType(void) {
#if defined (__DEBUG__)
	printf("nelsonType\n");
#endif
}

void nelsonIs(void) {
#if defined (__DEBUG__)
	printf("nelsonIs\n");
#endif
}

void nelsonDefer(void) {
#if defined (__DEBUG__)
	printf("nelsonDefer\n");
#endif
}

void nelsonValue(void) {
#if defined (__DEBUG__)
	printf("nelsonValue\n");
#endif
}

void nelsonThrow(void) {
#if defined (__DEBUG__)
	printf("nelsonThrow\n");
#endif
}

void nelsonCatch(void) {
#if defined (__DEBUG__)
	printf("nelsonCatch\n");
#endif
}

void nelsonHandler(void) {
#if defined (__DEBUG__)
	printf("nelsonHandler\n");
#endif
}

void nelsonJ(void) {
#if defined (__DEBUG__)
	printf("nelsonJ\n");
#endif
}

void nelsonI(void) {
#if defined (__DEBUG__)
	printf("nelsonI\n");
#endif
}

void nelsonLoop(void) {
#if defined (__DEBUG__)
	printf("nelsonLoop\n");
#endif
}

void nelsonPlusLoop(void) {
#if defined (__DEBUG__)
	printf("nelsonPlusLoop\n");
#endif
}

void nelsonLeave(void) {
#if defined (__DEBUG__)
	printf("nelsonLeave\n");
#endif
}

void nelsonUnLoop(void) {
#if defined (__DEBUG__)
	printf("nelsonUnLoop\n");
#endif
}

void nelsonQDo(void) {
#if defined (__DEBUG__)
	printf("nelsonQDo\n");
#endif
}

void nelsonDo(void) {
#if defined (__DEBUG__)
	printf("nelsonDo\n");
#endif
}

void nelsonNext(void) {
#if defined (__DEBUG__)
	printf("nelsonNext\n");
#endif
}

void nelsonFor(void) {
#if defined (__DEBUG__)
	printf("nelsonFor\n");
#endif
}

void nelsonDepth(void) {
#if defined (__DEBUG__)
	printf("nelsonDepth\n");
#endif
}

void nelsonRP0(void) {
#if defined (__DEBUG__)
	printf("nelsonRP0\n");
#endif
}

void nelsonSP0(void) {
#if defined (__DEBUG__)
	printf("nelsonSP0\n");
#endif
}

void nelsonVariable(void) {
#if defined (__DEBUG__)
	printf("nelsonVariable\n");
#endif
}

void nelsonConstant(void) {
#if defined (__DEBUG__)
	printf("nelsonConstant\n");
#endif
}

void nelsonPostpone(void) {
#if defined (__DEBUG__)
	printf("nelsonPostpone\n");
#endif
}

void nelsonToBody(void) {
#if defined (__DEBUG__)
	printf("nelsonToBody\n");
#endif
}

void nelsonToFlags(void) {
#if defined (__DEBUG__)
	printf("nelsonToFlags\n");
#endif
}

void nelsonToLink(void) {
#if defined (__DEBUG__)
	printf("nelsonToLink\n");
#endif
}

void nelsonToLinkAmpersand(void) {
#if defined (__DEBUG__)
	printf("nelsonToLinkAmpersand\n");
#endif
}

void nelsonToName(void) {
#if defined (__DEBUG__)
	printf("nelsonToName\n");
#endif
}

void nelsonAbs(void) {
#if defined (__DEBUG__)
	printf("nelsonAbs\n");
#endif
}

void nelsonMax(void) {
#if defined (__DEBUG__)
	printf("nelsonMax\n");
#endif
}

void nelsonMin(void) {
#if defined (__DEBUG__)
	printf("nelsonMin\n");
#endif
}

void nelsonAft(void) {
#if defined (__DEBUG__)
	printf("nelsonAft\n");
#endif
}

void nelsonRepeat(void) {
#if defined (__DEBUG__)
	printf("nelsonRepeat\n");
#endif
}

void nelsonWhile(void) {
#if defined (__DEBUG__)
	printf("nelsonWhile\n");
#endif
}

void nelsonElse(void) {
#if defined (__DEBUG__)
	printf("nelsonElse\n");
#endif
}

void nelsonIf(void) {
#if defined (__DEBUG__)
	printf("nelsonIf\n");
#endif
}

void nelsonThen(void) {
#if defined (__DEBUG__)
	printf("nelsonThen\n");
#endif
}

void nelsonAhead(void) {
#if defined (__DEBUG__)
	printf("nelsonAhead\n");
#endif
}

void nelsonUntil(void) {
#if defined (__DEBUG__)
	printf("nelsonUntil\n");
#endif
}

void nelsonAgain(void) {
#if defined (__DEBUG__)
	printf("nelsonAgain\n");
#endif
}

void nelsonBegin(void) {
#if defined (__DEBUG__)
	printf("nelsonBegin\n");
#endif
}

void nelsonLiteral(void) {
#if defined (__DEBUG__)
	printf("nelsonLiteral\n");
#endif
}

void nelsonXChar(void) {
#if defined (__DEBUG__)
	printf("nelsonXChar\n");
#endif
}

void nelsonChar(void) {
#if defined (__DEBUG__)
	printf("nelsonChar\n");
#endif
}

void nelsonXNick(void) {
#if defined (__DEBUG__)
	printf("nelsonXNick\n");
#endif
}

void nelsonNick(void) {
#if defined (__DEBUG__)
	printf("nelsonNick\n");
#endif
}

void nelsonRightBracket(void) {
#if defined (__DEBUG__)
	printf("nelsonRightBracket\n");
#endif
}

void nelsonLeftBracket(void) {
#if defined (__DEBUG__)
	printf("nelsonLeftBracket\n");
#endif
}

void nelsonCComma(void) {
#if defined (__DEBUG__)
	printf("nelsonCComma\n");
#endif
}

void nelsonComma(void) {
#if defined (__DEBUG__)
	printf("nelsonComma\n");
#endif
}

void nelsonAlign(void) {
#if defined (__DEBUG__)
	printf("nelsonAlign\n");
#endif
}

void nelsonAligned(void) {
#if defined (__DEBUG__)
	printf("nelsonAligned\n");
#endif
}

void nelsonAllot(void) {
#if defined (__DEBUG__)
	printf("nelsonAllot\n");
#endif
}

void nelsonHere(void) {
#if defined (__DEBUG__)
	printf("nelsonHere\n");
#endif
}

void nelsonContext(void) {
#if defined (__DEBUG__)
	printf("nelsonContext\n");
#endif
}

void nelsonCurrent(void) {
#if defined (__DEBUG__)
	printf("nelsonCurrent\n");
#endif
}

void nelsonBase(void) {
#if defined (__DEBUG__)
	printf("nelsonBase\n");
#endif
}

void nelsonState(void) {
#if defined (__DEBUG__)
	printf("nelsonState\n");
#endif
}

void nelsonToIn(void) {
#if defined (__DEBUG__)
	printf("nelsonToIn\n");
#endif
}

void nelsonNumTib(void) {
#if defined (__DEBUG__)
	printf("nelsonNumTib\n");
#endif
}

void nelsonTickTib(void) {
#if defined (__DEBUG__)
	printf("nelsonTickTib\n");
#endif
}

void nelsonTwoStore(void) {
#if defined (__DEBUG__)
	printf("nelsonTwoStore\n");
#endif
}

void nelsonTwoFetch(void) {
#if defined (__DEBUG__)
	printf("nelsonTwoFetch\n");
#endif
}

void nelsonTwoDup(void) {
#if defined (__DEBUG__)
	printf("nelsonTwoDup\n");
#endif
}

void nelsonTwoDrop(void) {
#if defined (__DEBUG__)
	printf("nelsonTwoDrop\n");
#endif
}

void nelsonCellSlash(void) {
#if defined (__DEBUG__)
	printf("nelsonCellSlash\n");
#endif
}

void nelsonCells(void) {
#if defined (__DEBUG__)
	printf("nelsonCells\n");
#endif
}

void nelsonCellPlus(void) {
#if defined (__DEBUG__)
	printf("nelsonCellPlus\n");
#endif
}

void nelsonPlusStore(void) {
#if defined (__DEBUG__)
	printf("nelsonPlusStore\n");
#endif
}

void nelsonFourSlash(void) {
#if defined (__DEBUG__)
	printf("nelsonFourSlash\n");
#endif
}

void nelsonFourStar(void) {
#if defined (__DEBUG__)
	printf("nelsonFourStar\n");
#endif
}

void nelsonTwoSlash(void) {
#if defined (__DEBUG__)
	printf("nelsonTwoSlash\n");
#endif
}

void nelsonTwoStar(void) {
#if defined (__DEBUG__)
	printf("nelsonTwoStar\n");
#endif
}

void nelsonOneMinus(void) {
#if defined (__DEBUG__)
	printf("nelsonOneMinus\n");
#endif
}

void nelsonOnePlus(void) {
#if defined (__DEBUG__)
	printf("nelsonOnePlus\n");
#endif
}

void nelsonNl(void) {
#if defined (__DEBUG__)
	printf("nelsonNl\n");
#endif
}

void nelsonBl(void) {
#if defined (__DEBUG__)
	printf("nelsonBl\n");
#endif
}

void nelsonZeroUnequal(void) {
#if defined (__DEBUG__)
	printf("nelsonZeroUnequal\n");
#endif
}

void nelsonUnequal(void) {
#if defined (__DEBUG__)
	printf("nelsonUnequal\n");
#endif
}

void nelsonEqual(void) {
#if defined (__DEBUG__)
	printf("nelsonEqual\n");
#endif
}

void nelsonGreaterEqual(void) {
#if defined (__DEBUG__)
	printf("nelsonGreaterEqual\n");
#endif
}

void nelsonLessEqual(void) {
#if defined (__DEBUG__)
	printf("nelsonLessEqual\n");
#endif
}

void nelsonGreater(void) {
#if defined (__DEBUG__)
	printf("nelsonGreater\n");
#endif
}

void nelsonLess(void) {
#if defined (__DEBUG__)
	printf("nelsonLess\n");
#endif
}

void nelsonMinusRot(void) {
#if defined (__DEBUG__)
	printf("nelsonMinusRot\n");
#endif
}

void nelsonRot(void) {
#if defined (__DEBUG__)
	printf("nelsonRot\n");
#endif
}

void nelsonMinus(void) {
#if defined (__DEBUG__)
	printf("nelsonMinus\n");
#endif
}

void nelsonNegate(void) {
#if defined (__DEBUG__)
	printf("nelsonNegate\n");
#endif
}

void nelsonInvert(void) {
#if defined (__DEBUG__)
	printf("nelsonInvert\n");
#endif
}

void nelsonMod(void) {
#if defined (__DEBUG__)
	printf("nelsonMod\n");
#endif
}

void nelsonSlash(void) {
#if defined (__DEBUG__)
	printf("nelsonSlash\n");
#endif
}

void nelsonSlashMod(void) {
#if defined (__DEBUG__)
	printf("nelsonSlashMod\n");
#endif
}

void nelsonStar(void) {
#if defined (__DEBUG__)
	printf("nelsonStar\n");
#endif
}

void nelsonStarSlash(void) {
#if defined (__DEBUG__)
	printf("nelsonStarSlash\n");
#endif
}

void nelsonRDrop(void) {
#if defined (__DEBUG__)
	printf("nelsonRDrop\n");
#endif
}

void nelsonNip(void) {
#if defined (__DEBUG__)
	printf("nelsonNip\n");
#endif
}

void nelsonBackslash(void) {
#if defined (__DEBUG__)
	printf("nelsonBackslash\n");
#endif
}

void nelsonParen(void) {
#if defined (__DEBUG__)
	printf("nelsonParen\n");
#endif
}

void nelsonExit(void) {
#if defined (__DEBUG__)
	printf("nelsonExit\n");
#endif
}

void nelsonColon(void) {
#if defined (__DEBUG__)
	printf("nelsonColon\n");
#endif
}

void nelsonImmediate(void) {
#if defined (__DEBUG__)
	printf("nelsonImmediate\n");
#endif
}

void nelsonDoes(void) {
#if defined (__DEBUG__)
	printf("nelsonDoes\n");
#endif
}

void nelsonCreate(void) {
#if defined (__DEBUG__)
	printf("nelsonCreate\n");
#endif
}

void nelsonSGreaterNumberQ(void) {
#if defined (__DEBUG__)
	printf("nelsonSGreaterNumberQ\n");
#endif
}

void nelsonParse(void) {
#if defined (__DEBUG__)
	printf("nelsonParse\n");
#endif
}

void nelsonFind(void) {
#if defined (__DEBUG__)
	printf("nelsonFind\n");
#endif
}

void nelsonCell(void) {
#if defined (__DEBUG__)
	printf("nelsonCell\n");
#endif
}

void nelsonExecute(void) {
#if defined (__DEBUG__)
	printf("nelsonExecute\n");
#endif
}

void nelsonRFetch(void) {
#if defined (__DEBUG__)
	printf("nelsonRFetch\n");
#endif
}

void nelsonRFrom(void) {
#if defined (__DEBUG__)
	printf("nelsonRFrom\n");
#endif
}

void nelsonToR(void) {
#if defined (__DEBUG__)
	printf("nelsonToR\n");
#endif
}

void nelsonRPStore(void) {
#if defined (__DEBUG__)
	printf("nelsonRPStore\n");
#endif
}

void nelsonRPFetch(void) {
#if defined (__DEBUG__)
	printf("nelsonRPFetch\n");
#endif
}

void nelsonSPStore(void) {
#if defined (__DEBUG__)
	printf("nelsonSPStore\n");
#endif
}

void nelsonSPFetch(void) {
#if defined (__DEBUG__)
	printf("nelsonSPFetch\n");
#endif
}

void nelsonCStore(void) {
#if defined (__DEBUG__)
	printf("nelsonCStore\n");
#endif
}

void nelsonLStore(void) {
#if defined (__DEBUG__)
	printf("nelsonLStore\n");
#endif
}

void nelsonStore(void) {
#if defined (__DEBUG__)
	printf("nelsonStore\n");
#endif
}

void nelsonCFetch(void) {
#if defined (__DEBUG__)
	printf("nelsonCFetch\n");
#endif
}

void nelsonLFetch(void) {
#if defined (__DEBUG__)
	printf("nelsonLFetch\n");
#endif
}

void nelsonFetch(void) {
#if defined (__DEBUG__)
	printf("nelsonFetch\n");
#endif
}

void nelsonDrop(void) {
#if defined (__DEBUG__)
	printf("nelsonDrop\n");
#endif
}

void nelsonOver(void) {
#if defined (__DEBUG__)
	printf("nelsonOver\n");
#endif
}

void nelsonSwap(void) {
#if defined (__DEBUG__)
	printf("nelsonSwap\n");
#endif
}

void nelsonDup(void) {
#if defined (__DEBUG__)
	printf("nelsonDup\n");
#endif
}

void nelsonXor(void) {
#if defined (__DEBUG__)
	printf("nelsonXor\n");
#endif
}

void nelsonOr(void) {
#if defined (__DEBUG__)
	printf("nelsonOr\n");
#endif
}

void nelsonAnd(void) {
#if defined (__DEBUG__)
	printf("nelsonAnd\n");
#endif
}

void nelsonRShift(void) {
#if defined (__DEBUG__)
	printf("nelsonRShift\n");
#endif
}

void nelsonLShift(void) {
#if defined (__DEBUG__)
	printf("nelsonLShift\n");
#endif
}

void nelsonStarSlashMod(void) {
#if defined (__DEBUG__)
	printf("nelsonStarSlashMod\n");
#endif
}

void nelsonUSlashMod(void) {
#if defined (__DEBUG__)
	printf("nelsonUSlashMod\n");
#endif
}

void nelsonPlus(void) {
#if defined (__DEBUG__)
	printf("nelsonPlus\n");
#endif
}

void nelsonZeroLess(void) {
#if defined (__DEBUG__)
	printf("nelsonZeroLess\n");
#endif
}

void nelsonZeroEqual(void) {
#if defined (__DEBUG__)
	printf("nelsonZeroEqual\n");
#endif
}

#endif


#if H2O_FORTH_PRIMITIVES == NELSON_FORTH || \
	H2O_FORTH_PRIMITIVES == NELSON_UE_FORTH

void nelsonYLocal(void) {
#if defined (__DEBUG__)
	printf("nelsonYLocal\n");
#endif
}

void nelsonProcessHeap(void) {
#if defined (__DEBUG__)
	printf("nelsonProcessHeap\n");
#endif
}

void nelsonHeapReAlloc(void) {
#if defined (__DEBUG__)
	printf("nelsonHeapReAlloc\n");
#endif
}

void nelsonHeapFree(void) {
#if defined (__DEBUG__)
	printf("nelsonHeapFree\n");
#endif
}

void nelsonHeapAlloc(void) {
#if defined (__DEBUG__)
	printf("nelsonHeapAlloc\n");
#endif
}

void nelsonGetProcessHeap(void) {
#if defined (__DEBUG__)
	printf("nelsonGetProcessHeap\n");
#endif
}

void nelsonRenameFile(void) {
#if defined (__DEBUG__)
	printf("nelsonRenameFile\n");
#endif
}

void nelsonWindows(void) {
#if defined (__DEBUG__)
	printf("nelsonWindows\n");
#endif
}

void nelsonFDotS(void) {
#if defined (__DEBUG__)
	printf("nelsonFDotS\n");
#endif
}

void nelsonFDot(void) {
#if defined (__DEBUG__)
	printf("nelsonFDot\n");
#endif
}

void nelsonNumFS(void) {
#if defined (__DEBUG__)
	printf("nelsonNumFS\n");
#endif
}

void nelsonSetPrecision(void) {
#if defined (__DEBUG__)
	printf("nelsonSetPrecision\n");
#endif
}

void nelsonPrecision(void) {
#if defined (__DEBUG__)
	printf("nelsonPrecision\n");
#endif
}

void nelsonFSqrt(void) {
#if defined (__DEBUG__)
	printf("nelsonFSqrt\n");
#endif
}

void nelsonPi(void) {
#if defined (__DEBUG__)
	printf("nelsonPi\n");
#endif
}

void nelsonFVariable(void) {
#if defined (__DEBUG__)
	printf("nelsonFVariable\n");
#endif
}

void nelsonFConstant(void) {
#if defined (__DEBUG__)
	printf("nelsonFConstant\n");
#endif
}

void nelsonFLiteral(void) {
#if defined (__DEBUG__)
	printf("nelsonFLiteral\n");
#endif
}

void nelsonAFLiteral(void) {
#if defined (__DEBUG__)
	printf("nelsonAFLiteral\n");
#endif
}

void nelsonSFComma(void) {
#if defined (__DEBUG__)
	printf("nelsonSFComma\n");
#endif
}

void nelsonSFloatPlus(void) {
#if defined (__DEBUG__)
	printf("nelsonSFloatPlus\n");
#endif
}

void nelsonSFloats(void) {
#if defined (__DEBUG__)
	printf("nelsonSFloats\n");
#endif
}

void nelsonSFloat(void) {
#if defined (__DEBUG__)
	printf("nelsonSFloat\n");
#endif
}

void nelsonSFGreaterEqual(void) {
#if defined (__DEBUG__)
	printf("nelsonSFGreaterEqual\n");
#endif
}

void nelsonSFLessEqual(void) {
#if defined (__DEBUG__)
	printf("nelsonSFLessEqual\n");
#endif
}

void nelsonSFUnequal(void) {
#if defined (__DEBUG__)
	printf("nelsonSFUnequal\n");
#endif
}

void nelsonSFGreater(void) {
#if defined (__DEBUG__)
	printf("nelsonSFGreater\n");
#endif
}

void nelsonSFLess(void) {
#if defined (__DEBUG__)
	printf("nelsonSFLess\n");
#endif
}

void nelsonSFEqual(void) {
#if defined (__DEBUG__)
	printf("nelsonSFEqual\n");
#endif
}

void nelsonAtXy(void) {
#if defined (__DEBUG__)
	printf("nelsonAtXy\n");
#endif
}

void nelsonNormal(void) {
#if defined (__DEBUG__)
	printf("nelsonNormal\n");
#endif
}

void nelsonBg(void) {
#if defined (__DEBUG__)
	printf("nelsonBg\n");
#endif
}

void nelsonFg(void) {
#if defined (__DEBUG__)
	printf("nelsonFg\n");
#endif
}

void nelsonAnsi(void) {
#if defined (__DEBUG__)
	printf("nelsonAnsi\n");
#endif
}

void nelsonBlank(void) {
#if defined (__DEBUG__)
	printf("nelsonBlank\n");
#endif
}

void nelsonErase(void) {
#if defined (__DEBUG__)
	printf("nelsonErase\n");
#endif
}

void nelsonYPlace(void) {
#if defined (__DEBUG__)
	printf("nelsonYPlace\n");
#endif
}

void nelsonValueBins(void) {
#if defined (__DEBUG__)
	printf("nelsonValueBins\n");
#endif
}

void nelsonNestDepth(void) {
#if defined (__DEBUG__)
	printf("nelsonNestDepth\n");
#endif
}

void nelsonFDepth(void) {
#if defined (__DEBUG__)
	printf("nelsonFDepth\n");
#endif
}

void nelsonFP0(void) {
#if defined (__DEBUG__)
	printf("nelsonFP0\n");
#endif
}

void nelsonRecurse(void) {
#if defined (__DEBUG__)
	printf("nelsonRecurse\n");
#endif
}

void nelsonYield(void) {
#if defined (__DEBUG__)
	printf("nelsonYield\n");
#endif
}

void nelsonFGreaterNumberQ(void) {
#if defined (__DEBUG__)
	printf("nelsonFGreaterNumberQ\n");
#endif
}

void nelsonFToS(void) {
#if defined (__DEBUG__)
	printf("nelsonFToS\n");
#endif
}

void nelsonSToF(void) {
#if defined (__DEBUG__)
	printf("nelsonSToF\n");
#endif
}

void nelsonOneSlashF(void) {
#if defined (__DEBUG__)
	printf("nelsonOneSlashF\n");
#endif
}

void nelsonFSlash(void) {
#if defined (__DEBUG__)
	printf("nelsonFSlash\n");
#endif
}

void nelsonFStar(void) {
#if defined (__DEBUG__)
	printf("nelsonFStar\n");
#endif
}

void nelsonFMinus(void) {
#if defined (__DEBUG__)
	printf("nelsonFMinus\n");
#endif
}

void nelsonFPlus(void) {
#if defined (__DEBUG__)
	printf("nelsonFPlus\n");
#endif
}

void nelsonF0Equal(void) {
#if defined (__DEBUG__)
	printf("nelsonF0Equal\n");
#endif
}

void nelsonF0Less(void) {
#if defined (__DEBUG__)
	printf("nelsonF0Less\n");
#endif
}

void nelsonFNegate(void) {
#if defined (__DEBUG__)
	printf("nelsonFNegate\n");
#endif
}

void nelsonFswa(void) {
#if defined (__DEBUG__)
	printf("nelsonFswa\n");
#endif
}

void nelsonFOver(void) {
#if defined (__DEBUG__)
	printf("nelsonFOver\n");
#endif
}

void nelsonFDrop(void) {
#if defined (__DEBUG__)
	printf("nelsonFDrop\n");
#endif
}

void nelsonFNip(void) {
#if defined (__DEBUG__)
	printf("nelsonFNip\n");
#endif
}

void nelsonFDup(void) {
#if defined (__DEBUG__)
	printf("nelsonFDup\n");
#endif
}

void nelsonSFStore(void) {
#if defined (__DEBUG__)
	printf("nelsonSFStore\n");
#endif
}

void nelsonSFFetch(void) {
#if defined (__DEBUG__)
	printf("nelsonSFFetch\n");
#endif
}

void nelsonSF(void) {
#if defined (__DEBUG__)
	printf("nelsonSF\n");
#endif
}

void nelsonFPStore(void) {
#if defined (__DEBUG__)
	printf("nelsonFPStore\n");
#endif
}

void nelsonFPFetch(void) {
#if defined (__DEBUG__)
	printf("nelsonFPFetch\n");
#endif
}

void nelsonLoadLibraryA(void) {
#if defined (__DEBUG__)
	printf("nelsonLoadLibraryA\n");
#endif
}

void nelsonGetProcAddress(void) {
#if defined (__DEBUG__)
	printf("nelsonGetProcAddress\n");
#endif
}


#endif


#if H2O_FORTH_PRIMITIVES == NELSON_FORTH || \
	H2O_FORTH_PRIMITIVES == NELSON_ESP_FORTH

void nelsonTelnetD(void) {
#if defined (__DEBUG__)
	printf("nelsonTelnetD\n");
#endif
}

void nelsonBTerm(void) {
#if defined (__DEBUG__)
	printf("nelsonBTerm\n");
#endif
}

void nelsonTimers(void) {
#if defined (__DEBUG__)
	printf("nelsonTimers\n");
#endif
}

void nelsonRegisters(void) {
#if defined (__DEBUG__)
	printf("nelsonRegisters\n");
#endif
}

void nelsonWebUI(void) {
#if defined (__DEBUG__)
	printf("nelsonWebUI\n");
#endif
}

void nelsonLogin(void) {
#if defined (__DEBUG__)
	printf("nelsonLogin\n");
#endif
}

void nelsonWebInterface(void) {
#if defined (__DEBUG__)
	printf("nelsonWebInterface\n");
#endif
}

void nelsonRtos(void) {
#if defined (__DEBUG__)
	printf("nelsonRtos\n");
#endif
}

void nelsonInterrupts(void) {
#if defined (__DEBUG__)
	printf("nelsonInterrupts\n");
#endif
}

void nelsonSockets(void) {
#if defined (__DEBUG__)
	printf("nelsonSockets\n");
#endif
}

void nelsonSerial(void) {
#if defined (__DEBUG__)
	printf("nelsonSerial\n");
#endif
}

void nelsonLedC(void) {
#if defined (__DEBUG__)
	printf("nelsonLedC\n");
#endif
}

void nelsonSpiffs(void) {
#if defined (__DEBUG__)
	printf("nelsonSpiffs\n");
#endif
}

void nelsonSdMmc(void) {
#if defined (__DEBUG__)
	printf("nelsonSdMmc\n");
#endif
}

void nelsonWifi(void) {
#if defined (__DEBUG__)
	printf("nelsonWifi\n");
#endif
}

void nelsonWebserver(void) {
#if defined (__DEBUG__)
	printf("nelsonWebserver\n");
#endif
}

void nelsonWire(void) {
#if defined (__DEBUG__)
	printf("nelsonWire\n");
#endif
}

void nelsonLed(void) {
#if defined (__DEBUG__)
	printf("nelsonLed\n");
#endif
}

void nelsonOutput(void) {
#if defined (__DEBUG__)
	printf("nelsonOutput\n");
#endif
}

void nelsonInput(void) {
#if defined (__DEBUG__)
	printf("nelsonInput\n");
#endif
}

void nelsonHigh(void) {
#if defined (__DEBUG__)
	printf("nelsonHigh\n");
#endif
}

void nelsonLow(void) {
#if defined (__DEBUG__)
	printf("nelsonLow\n");
#endif
}

void nelsonTone(void) {
#if defined (__DEBUG__)
	printf("nelsonTone\n");
#endif
}

void nelsonFreq(void) {
#if defined (__DEBUG__)
	printf("nelsonFreq\n");
#endif
}

void nelsonDuty(void) {
#if defined (__DEBUG__)
	printf("nelsonDuty\n");
#endif
}

void nelsonAdc(void) {
#if defined (__DEBUG__)
	printf("nelsonAdc\n");
#endif
}

void nelsonPin(void) {
#if defined (__DEBUG__)
	printf("nelsonPin\n");
#endif
}

void nelsonTimerIsrRegister(void) {
#if defined (__DEBUG__)
	printf("nelsonTimerIsrRegister\n");
#endif
}

void nelsonSdMmcDotBegin(void) {
#if defined (__DEBUG__)
	printf("nelsonSdMmcDotBegin\n");
#endif
}

void nelsonMdnsDotBegin(void) {
#if defined (__DEBUG__)
	printf("nelsonMdnsDotBegin\n");
#endif
}

void nelsonBin(void) {
#if defined (__DEBUG__)
	printf("nelsonBin\n");
#endif
}

void nelsonTerminate(void) {
#if defined (__DEBUG__)
	printf("nelsonTerminate\n");
#endif
}

void nelsonMSTicks(void) {
#if defined (__DEBUG__)
	printf("nelsonMSTicks\n");
#endif
}

void nelsonDacWrite(void) {
#if defined (__DEBUG__)
	printf("nelsonDacWrite\n");
#endif
}

void nelsonPulsIn(void) {
#if defined (__DEBUG__)
	printf("nelsonPulsIn\n");
#endif
}

void nelsonAnalogRead(void) {
#if defined (__DEBUG__)
	printf("nelsonAnalogRead\n");
#endif
}

void nelsonDigitalRead(void) {
#if defined (__DEBUG__)
	printf("nelsonDigitalRead\n");
#endif
}

void nelsonDigitalWrite(void) {
#if defined (__DEBUG__)
	printf("nelsonDigitalWrite\n");
#endif
}

void nelsonPinMode(void) {
#if defined (__DEBUG__)
	printf("nelsonPinMode\n");
#endif
}

#endif

#endif
