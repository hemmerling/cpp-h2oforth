#ifndef H2ONELS2
#define H2ONELS2

/* Brad Nelson's "ESP32Forth v.7.05" & "MicroEforth ( uEForth ) 7.0.6.9" FORTHs */

/* Primitives */

#if H2O_FORTH_PRIMITIVES == NELSON_FORTH || \
	H2O_FORTH_PRIMITIVES == NELSON_ESP_FORTH || \
	H2O_FORTH_PRIMITIVES == NELSON_UE_FORTH
void nelsonForth(void) {
	PSMSG_DEBUG("nelsonForth")
}

void nelsonTo(void) {
	PSMSG_DEBUG("nelsonTo")
}

void nelsonPlusTo(void) {
	PSMSG_DEBUG("nelsonPlusTo")
}

void nelsonSemicolon(void) {
	PSMSG_DEBUG("nelsonSemicolon")
}

void nelsonLeftBrace(void) {
	PSMSG_DEBUG("nelsonLeftBrace")
}

void nelsonEditor(void) {
	PSMSG_DEBUG("nelsonEditor")
}

void nelsonList(void) {
	PSMSG_DEBUG("nelsonList")
}

void nelsonCopy(void) {
	PSMSG_DEBUG("nelsonCopy")
}

void nelsonThru(void) {
	PSMSG_DEBUG("nelsonThru")
}

void nelsonLoad(void) {
	PSMSG_DEBUG("nelsonLoad")
}

void nelsonFlush(void) {
	PSMSG_DEBUG("nelsonFlush")
}

void nelsonUpdate(void) {
	PSMSG_DEBUG("nelsonUpdate")
}

void nelsonEmptyBuffers(void) {
	PSMSG_DEBUG("nelsonEmptyBuffers")
}

void nelsonBuffer(void) {
	PSMSG_DEBUG("nelsonBuffer")
}

void nelsonBlock(void) {
	PSMSG_DEBUG("nelsonBlock")
}

void nelsonSaveBuffers(void) {
	PSMSG_DEBUG("nelsonBlock")
}

void nelsonDefaultUse(void) {
	PSMSG_DEBUG("nelsonDefaultUse")
}

void nelsonUse(void) {
	PSMSG_DEBUG("nelsonUse")
}

void nelsonOpenBlocks(void) {
	PSMSG_DEBUG("nelsonOpenBlocks")
}

void nelsonBlockId(void) {
	PSMSG_DEBUG("nelsonBlockId")
}

void nelsonScr(void) {
	PSMSG_DEBUG("nelsonScr")
}

void nelsonBlockFid(void) {
	PSMSG_DEBUG("nelsonBlockFid")
}

void nelsonStreams(void) {
	PSMSG_DEBUG("nelsonStreams")
}

void nelsonReset(void) {
	PSMSG_DEBUG("nelsonReset")
}

void nelsonRevive(void) {
	PSMSG_DEBUG("nelsonRevive")
}

void nelsonStartup(void) {
	PSMSG_DEBUG("nelsonStartup")
}

void nelsonRemember(void) {
	PSMSG_DEBUG("nelsonRemember")
}

void nelsonRestore(void) {
	PSMSG_DEBUG("nelsonRestore")
}

void nelsonSave(void) {
	PSMSG_DEBUG("nelsonSave")
}

void nelsonDumpFile(void) {
	PSMSG_DEBUG("nelsonDumpFile")
}

void nelsonWords(void) {
	PSMSG_DEBUG("nelsonWords")
}

void nelsonVlist(void) {
	PSMSG_DEBUG("nelsonWords")
}

void nelsonOrder(void) {
	PSMSG_DEBUG("nelsonOrder")
}

void nelsonSee(void) {
	PSMSG_DEBUG("nelsonSee")
}

void nelsonDotS(void) {
	PSMSG_DEBUG("nelsonDotS")
}

void nelsonStartsWithQ(void) {
	PSMSG_DEBUG("nelsonStartsWithQ")
}

void nelsonStrEqual(void) {
	PSMSG_DEBUG("nelsonStrEqual")
}

void nelsonColonNoname(void) {
	PSMSG_DEBUG("nelsonColonNoname")
}

void nelsonSmudge(void) {
	PSMSG_DEBUG("nelsonSmudge")
}

void nelsonForget(void) {
	PSMSG_DEBUG("nelsonForget")
}

void nelsonDump(void) {
	PSMSG_DEBUG("nelsonDump")
}

void nelsonAssert(void) {
	PSMSG_DEBUG("nelsonAssert")
}

void nelsonStartTask(void) {
	PSMSG_DEBUG("nelsonStartTask")
}

void nelsonTask(void) {
	PSMSG_DEBUG("nelsonTask")
}

void nelsonPause(void) {
	PSMSG_DEBUG("nelsonPause")
}

void nelsonTasks(void) {
	PSMSG_DEBUG("nelsonTasks")
}

void nelsonInclude(void) {
	PSMSG_DEBUG("nelsonInclude")
}

void nelsonIncluded(void) {
	PSMSG_DEBUG("nelsonIncluded")
}

void nelsonResize(void) {
	PSMSG_DEBUG("nelsonResize")
}

void nelsonFree(void) {
	PSMSG_DEBUG("nelsonFree")
}

void nelsonAllocate(void) {
	PSMSG_DEBUG("nelsonAllocate")
}

void nelsonOk(void) {
	PSMSG_DEBUG("nelsonOk")
}

void nelsonMs(void) {
	PSMSG_DEBUG("nelsonMs")
}

void nelsonFileSize(void) {
	PSMSG_DEBUG("nelsonFileSize")
}

void nelsonResizeFile(void) {
	PSMSG_DEBUG("nelsonResizeFile")
}

void nelsonRepositionFile(void) {
	PSMSG_DEBUG("nelsonRepositionFile")
}

void nelsonFilePosition(void) {
	PSMSG_DEBUG("nelsonFilePosition")
}

void nelsonReadFile(void) {
	PSMSG_DEBUG("nelsonReadFile")
}

void nelsonWriteFile(void) {
	PSMSG_DEBUG("nelsonWriteFile")
}

void nelsonDeleteFile(void) {
	PSMSG_DEBUG("nelsonDeleteFile")
}

void nelsonCreateFile(void) {
	PSMSG_DEBUG("nelsonCreateFile")
}

void nelsonOpenFile(void) {
	PSMSG_DEBUG("nelsonOpenFile")
}

void nelsonFlushFile(void) {
	PSMSG_DEBUG("nelsonFlushFile")
}

void nelsonCloseFile(void) {
	PSMSG_DEBUG("nelsonCloseFile")
}

void nelsonRSlashW(void) {
	PSMSG_DEBUG("nelsonRSlashW")
}

void nelsonWSlashO(void) {
	PSMSG_DEBUG("nelsonWSlashO")
}

void nelsonRSlashO(void) {
	PSMSG_DEBUG("nelsonRSlashO")
}

void nelsonPage(void) {
	PSMSG_DEBUG("nelsonPage")
}



void nelsonInternals(void) {
	PSMSG_DEBUG("nelsonInternals")
}

void nelsonSealed(void) {
	PSMSG_DEBUG("nelsonSealed")
}

void nelsonAlso(void) {
	PSMSG_DEBUG("nelsonAlso")
}

void nelsonOnly(void) {
	PSMSG_DEBUG("nelsonOnly")
}

void nelsonTransferLeftBrace(void) {
	PSMSG_DEBUG("nelsonTransferLeftBrace")
}

void nelsonRightBraceTransfer(void) {
	PSMSG_DEBUG("nelsonRightBraceTransfer")
}

void nelsonTransfer(void) {
	PSMSG_DEBUG("nelsonTransfer")
}

void nelsonDefinitions(void) {
	PSMSG_DEBUG("nelsonDefinitions")
}

void nelsonVocabulary(void) {
	PSMSG_DEBUG("nelsonVocabulary")
}

void nelsonXif(void) {
	PSMSG_DEBUG("nelsonXif")
}

void nelsonXElse(void) {
	PSMSG_DEBUG("nelsonXElse")
}

void nelsonXThen(void) {
	PSMSG_DEBUG("nelsonXThen")
}

void nelsonDefinedQ(void) {
	PSMSG_DEBUG("nelsonDefinedQ")
}

void nelsonQuit(void) {
	PSMSG_DEBUG("nelsonQuit")
}

void nelsonEvaluate(void) {
	PSMSG_DEBUG("nelsonEvaluate")
}

void nelsonPrompt(void) {
	PSMSG_DEBUG("nelsonPrompt")
}

void nelsonRefill(void) {
	PSMSG_DEBUG("nelsonRefill")
}

void nelsonTib(void) {
	PSMSG_DEBUG("nelsonTib")
}

void nelsonAccept(void) {
	PSMSG_DEBUG("nelsonAccept")
}

void nelsonEcho(void) {
	PSMSG_DEBUG("nelsonEcho")
}


void nelsonFill(void) {
	PSMSG_DEBUG("nelsonFill")
}

void nelsonCMoveFrom(void) {
	PSMSG_DEBUG("nelsonCMoveFrom")
}

void nelsonCMove(void) {
	PSMSG_DEBUG("nelsonCMove")
}

void nelsonYGreaterS(void) {
	PSMSG_DEBUG("nelsonYGreaterS")
}

void nelsonSGreaterZ(void) {
	PSMSG_DEBUG("nelsonSGreaterZ")
}

void nelsonRVerticalBar(void) {
	PSMSG_DEBUG("nelsonRVerticalBar")
}

void nelsonRQuote(void) {
	PSMSG_DEBUG("nelsonRVerticalBar")
}

void nelsonYQuote(void) {
	PSMSG_DEBUG("nelsonYQuote")
}

void nelsonDotQuote(void) {
	PSMSG_DEBUG("nelsonDotQuote")
}

void nelsonSQuote(void) {
	PSMSG_DEBUG("nelsonSQuote")
}

void nelsonDollarPlace(void) {
	PSMSG_DEBUG("nelsonDollarPlace")
}

void nelsonNDot(void) {
	PSMSG_DEBUG("nelsonNDot")
}

void nelsonQ(void) {
	PSMSG_DEBUG("nelsonQ")
}

void nelsonDot(void) {
	PSMSG_DEBUG("nelsonDot")
}

void nelsonUDot(void) {
	PSMSG_DEBUG("nelsonUDot")
}

void nelsonBinary(void) {
	PSMSG_DEBUG("nelsonBinary")
}

void nelsonDecimal(void) {
	PSMSG_DEBUG("nelsonDecimal")
}

void nelsonOctal(void) {
	PSMSG_DEBUG("nelsonOctal")
}

void nelsonHex(void) {
	PSMSG_DEBUG("nelsonHex")
}

void nelsonStr(void) {
	PSMSG_DEBUG("nelsonStr")
}

void nelsonNumFrom(void) {
	PSMSG_DEBUG("nelsonNumFrom")
}

void nelsonSign(void) {
	PSMSG_DEBUG("nelsonSign")
}

void nelsonNumS(void) {
	PSMSG_DEBUG("nelsonNumS")
}

void nelsonNum(void) {
	PSMSG_DEBUG("nelsonNum")
}

void nelsonHold(void) {
	PSMSG_DEBUG("nelsonHold")
}

void nelsonLessNum(void) {
	PSMSG_DEBUG("nelsonLessNum")
}

void nelsonExtract(void) {
	PSMSG_DEBUG("nelsonExtractm")
}

void nelsonPad(void) {
	PSMSG_DEBUG("nelsonPad")
}

void nelsonHld(void) {
	PSMSG_DEBUG("nelsonHld")
}

void nelsonCr(void) {
	PSMSG_DEBUG("nelsonCr")
}

void nelsonSpace(void) {
	PSMSG_DEBUG("nelsonSpace")
}

void nelsonEmit(void) {
	PSMSG_DEBUG("nelsonEmit")
}

void nelsonBye(void) {
	PSMSG_DEBUG("nelsonBye")
}

void nelsonKeyQ(void) {
	PSMSG_DEBUG("nelsonKeyQ")
}

void nelsonKey(void) {
	PSMSG_DEBUG("nelsonKey")
}

void nelsonType(void) {
	PSMSG_DEBUG("nelsonType")
}

void nelsonIs(void) {
	PSMSG_DEBUG("nelsonIs")
}

void nelsonDefer(void) {
	PSMSG_DEBUG("nelsonDefer")
}

void nelsonValue(void) {
	PSMSG_DEBUG("nelsonValue")
}

void nelsonThrow(void) {
	PSMSG_DEBUG("nelsonThrow")
}

void nelsonCatch(void) {
	PSMSG_DEBUG("nelsonCatch")
}

void nelsonHandler(void) {
	PSMSG_DEBUG("nelsonHandler")
}

void nelsonJ(void) {
	PSMSG_DEBUG("nelsonJ")
}

void nelsonI(void) {
	PSMSG_DEBUG("nelsonI")
}

void nelsonLoop(void) {
	PSMSG_DEBUG("nelsonLoop")
}

void nelsonPlusLoop(void) {
	PSMSG_DEBUG("nelsonPlusLoop")
}

void nelsonLeave(void) {
	PSMSG_DEBUG("nelsonLeave")
}

void nelsonUnLoop(void) {
	PSMSG_DEBUG("nelsonUnLoop")
}

void nelsonQDo(void) {
	PSMSG_DEBUG("nelsonQDo")
}

void nelsonDo(void) {
	PSMSG_DEBUG("nelsonDo")
}

void nelsonNext(void) {
	PSMSG_DEBUG("nelsonNext")
}

void nelsonFor(void) {
	PSMSG_DEBUG("nelsonFor")
}

void nelsonDepth(void) {
	PSMSG_DEBUG("nelsonDepth")
}

void nelsonRP0(void) {
	PSMSG_DEBUG("nelsonRP0")
}

void nelsonSP0(void) {
	PSMSG_DEBUG("nelsonSP0")
}

void nelsonVariable(void) {
	PSMSG_DEBUG("nelsonVariable")
}

void nelsonConstant(void) {
	PSMSG_DEBUG("nelsonConstant")
}

void nelsonPostpone(void) {
	PSMSG_DEBUG("nelsonPostpone")
}

void nelsonToBody(void) {
	PSMSG_DEBUG("nelsonToBody")
}

void nelsonToFlags(void) {
	PSMSG_DEBUG("nelsonToFlags")
}

void nelsonToLink(void) {
	PSMSG_DEBUG("nelsonToLink")
}

void nelsonToLinkAmpersand(void) {
	PSMSG_DEBUG("nelsonToLinkAmpersand")
}

void nelsonToName(void) {
	PSMSG_DEBUG("nelsonToName")
}

void nelsonAbs(void) {
	PSMSG_DEBUG("nelsonAbs")
}

void nelsonMax(void) {
	PSMSG_DEBUG("nelsonMax")
}

void nelsonMin(void) {
	PSMSG_DEBUG("nelsonMin")
}

void nelsonAft(void) {
	PSMSG_DEBUG("nelsonAft")
}

void nelsonRepeat(void) {
	PSMSG_DEBUG("nelsonRepeat")
}

void nelsonWhile(void) {
	PSMSG_DEBUG("nelsonWhile")
}

void nelsonElse(void) {
	PSMSG_DEBUG("nelsonElse")
}

void nelsonIf(void) {
	PSMSG_DEBUG("nelsonIf")
}

void nelsonThen(void) {
	PSMSG_DEBUG("nelsonThen")
}

void nelsonAhead(void) {
	PSMSG_DEBUG("nelsonAhead")
}

void nelsonUntil(void) {
	PSMSG_DEBUG("nelsonUntil")
}

void nelsonAgain(void) {
	PSMSG_DEBUG("nelsonAgain")
}

void nelsonBegin(void) {
	PSMSG_DEBUG("nelsonBegin")
}

void nelsonLiteral(void) {
	PSMSG_DEBUG("nelsonLiteral")
}

void nelsonXChar(void) {
	PSMSG_DEBUG("nelsonXChar")
}

void nelsonChar(void) {
	PSMSG_DEBUG("nelsonChar")
}

void nelsonXNick(void) {
	PSMSG_DEBUG("nelsonXNick")
}

void nelsonNick(void) {
	PSMSG_DEBUG("nelsonNick")
}

void nelsonRightBracket(void) {
	PSMSG_DEBUG("nelsonRightBracket")
}

void nelsonLeftBracket(void) {
	PSMSG_DEBUG("nelsonLeftBracket")
}

void nelsonCComma(void) {
	PSMSG_DEBUG("nelsonCComma")
}

void nelsonComma(void) {
	PSMSG_DEBUG("nelsonComma")
}

void nelsonAlign(void) {
	PSMSG_DEBUG("nelsonAlign")
}

void nelsonAligned(void) {
	PSMSG_DEBUG("nelsonAligned")
}

void nelsonAllot(void) {
	PSMSG_DEBUG("nelsonAllot")
}

void nelsonHere(void) {
	PSMSG_DEBUG("nelsonHere")
}

void nelsonContext(void) {
	PSMSG_DEBUG("nelsonContext")
}

void nelsonCurrent(void) {
	PSMSG_DEBUG("nelsonCurrent")
}

void nelsonBase(void) {
	PSMSG_DEBUG("nelsonBase")
}

void nelsonState(void) {
	PSMSG_DEBUG("nelsonState")
}

void nelsonToIn(void) {
	PSMSG_DEBUG("nelsonToIn")
}

void nelsonNumTib(void) {
	PSMSG_DEBUG("nelsonNumTib")
}

void nelsonTickTib(void) {
	PSMSG_DEBUG("nelsonTickTib")
}

void nelsonTwoStore(void) {
	PSMSG_DEBUG("nelsonTwoStore")
}

void nelsonTwoFetch(void) {
	PSMSG_DEBUG("nelsonTwoFetch")
}

void nelsonTwoDup(void) {
	PSMSG_DEBUG("nelsonTwoDup")
}

void nelsonTwoDrop(void) {
	PSMSG_DEBUG("nelsonTwoDrop")
}

void nelsonCellSlash(void) {
	PSMSG_DEBUG("nelsonCellSlash")
}

void nelsonCells(void) {
	PSMSG_DEBUG("nelsonCells")
}

void nelsonCellPlus(void) {
	PSMSG_DEBUG("nelsonCellPlus")
}

void nelsonPlusStore(void) {
	PSMSG_DEBUG("nelsonPlusStore")
}

void nelsonFourSlash(void) {
	PSMSG_DEBUG("nelsonFourSlash")
}

void nelsonFourStar(void) {
	PSMSG_DEBUG("nelsonFourStar")
}

void nelsonTwoSlash(void) {
	PSMSG_DEBUG("nelsonTwoSlash")
}

void nelsonTwoStar(void) {
	PSMSG_DEBUG("nelsonTwoStar")
}

void nelsonOneMinus(void) {
	PSMSG_DEBUG("nelsonOneMinus")
}

void nelsonOnePlus(void) {
	PSMSG_DEBUG("nelsonOnePlus")
}

void nelsonNl(void) {
	PSMSG_DEBUG("nelsonNl")
}

void nelsonBl(void) {
	PSMSG_DEBUG("nelsonBl")
}

void nelsonZeroUnequal(void) {
	PSMSG_DEBUG("nelsonZeroUnequal")
}

void nelsonUnequal(void) {
	PSMSG_DEBUG("nelsonUnequal")
}

void nelsonEqual(void) {
	PSMSG_DEBUG("nelsonEqual")
}

void nelsonGreaterEqual(void) {
	PSMSG_DEBUG("nelsonGreaterEqual")
}

void nelsonLessEqual(void) {
	PSMSG_DEBUG("nelsonLessEqual")
}

void nelsonGreater(void) {
	PSMSG_DEBUG("nelsonGreater")
}

void nelsonLess(void) {
	PSMSG_DEBUG("nelsonLess")
}

void nelsonMinusRot(void) {
	PSMSG_DEBUG("nelsonMinusRot")
}

void nelsonRot(void) {
	PSMSG_DEBUG("nelsonRot")
}

void nelsonMinus(void) {
	PSMSG_DEBUG("nelsonMinus")
}

void nelsonNegate(void) {
	PSMSG_DEBUG("nelsonNegate")
}

void nelsonInvert(void) {
	PSMSG_DEBUG("nelsonInvert")
}

void nelsonMod(void) {
	PSMSG_DEBUG("nelsonMod")
}

void nelsonSlash(void) {
	PSMSG_DEBUG("nelsonSlash")
}

void nelsonSlashMod(void) {
	PSMSG_DEBUG("nelsonSlashMod")
}

void nelsonStar(void) {
	PSMSG_DEBUG("nelsonStar")
}

void nelsonStarSlash(void) {
	PSMSG_DEBUG("nelsonStarSlash")
}

void nelsonRDrop(void) {
	PSMSG_DEBUG("nelsonRDrop")
}

void nelsonNip(void) {
	PSMSG_DEBUG("nelsonNip")
}

void nelsonBackslash(void) {
	PSMSG_DEBUG("nelsonBackslash")
}

void nelsonParen(void) {
	PSMSG_DEBUG("nelsonParen")
}

void nelsonExit(void) {
	PSMSG_DEBUG("nelsonExit")
}

void nelsonColon(void) {
	PSMSG_DEBUG("nelsonColon")
}

void nelsonImmediate(void) {
	PSMSG_DEBUG("nelsonImmediate")
}

void nelsonDoes(void) {
	PSMSG_DEBUG("nelsonDoes")
}

void nelsonCreate(void) {
	PSMSG_DEBUG("nelsonCreate")
}

void nelsonSGreaterNumberQ(void) {
	PSMSG_DEBUG("nelsonSGreaterNumberQ")
}

void nelsonParse(void) {
	PSMSG_DEBUG("nelsonParse")
}

void nelsonFind(void) {
	PSMSG_DEBUG("nelsonFind")
}

void nelsonCell(void) {
	PSMSG_DEBUG("nelsonCell")
}

void nelsonExecute(void) {
	PSMSG_DEBUG("nelsonExecute")
}

void nelsonRFetch(void) {
	PSMSG_DEBUG("nelsonRFetch")
}

void nelsonRFrom(void) {
	PSMSG_DEBUG("nelsonRFrom")
}

void nelsonToR(void) {
	PSMSG_DEBUG("nelsonToR")
}

void nelsonRPStore(void) {
	PSMSG_DEBUG("nelsonRPStore")
}

void nelsonRPFetch(void) {
	PSMSG_DEBUG("nelsonRPFetch")
}

void nelsonSPStore(void) {
	PSMSG_DEBUG("nelsonSPStore")
}

void nelsonSPFetch(void) {
	PSMSG_DEBUG("nelsonSPFetch")
}

void nelsonCStore(void) {
	PSMSG_DEBUG("nelsonCStore")
}

void nelsonLStore(void) {
	PSMSG_DEBUG("nelsonLStore")
}

void nelsonStore(void) {
	PSMSG_DEBUG("nelsonStore")
}

void nelsonCFetch(void) {
	PSMSG_DEBUG("nelsonCFetch")
}

void nelsonLFetch(void) {
	PSMSG_DEBUG("nelsonLFetch")
}

void nelsonFetch(void) {
	PSMSG_DEBUG("nelsonFetch")
}

void nelsonDrop(void) {
	PSMSG_DEBUG("nelsonDrop")
}

void nelsonOver(void) {
	PSMSG_DEBUG("nelsonOver")
}

void nelsonSwap(void) {
	PSMSG_DEBUG("nelsonSwap")
}

void nelsonDup(void) {
	PSMSG_DEBUG("nelsonDup")
}

void nelsonXor(void) {
	PSMSG_DEBUG("nelsonXor")
}

void nelsonOr(void) {
	PSMSG_DEBUG("nelsonOr")
}

void nelsonAnd(void) {
	PSMSG_DEBUG("nelsonAnd")
}

void nelsonRShift(void) {
	PSMSG_DEBUG("nelsonRShift")
}

void nelsonLShift(void) {
	PSMSG_DEBUG("nelsonLShift")
}

void nelsonStarSlashMod(void) {
	PSMSG_DEBUG("nelsonStarSlashMod")
}

void nelsonUSlashMod(void) {
	PSMSG_DEBUG("nelsonUSlashMod")
}

void nelsonPlus(void) {
	PSMSG_DEBUG("nelsonPlus")
}

void nelsonZeroLess(void) {
	PSMSG_DEBUG("nelsonZeroLess")
}

void nelsonZeroEqual(void) {
	PSMSG_DEBUG("nelsonZeroEqual")
}

#endif


#if H2O_FORTH_PRIMITIVES == NELSON_FORTH || \
	H2O_FORTH_PRIMITIVES == NELSON_UE_FORTH

void nelsonYLocal(void) {
	PSMSG_DEBUG("nelsonYLocal")
}

void nelsonProcessHeap(void) {
	PSMSG_DEBUG("nelsonProcessHeap")
}

void nelsonHeapReAlloc(void) {
	PSMSG_DEBUG("nelsonHeapReAlloc")
}

void nelsonHeapFree(void) {
	PSMSG_DEBUG("nelsonHeapFree")
}

void nelsonHeapAlloc(void) {
	PSMSG_DEBUG("nelsonHeapAlloc")
}

void nelsonGetProcessHeap(void) {
	PSMSG_DEBUG("nelsonGetProcessHeap")
}

void nelsonRenameFile(void) {
	PSMSG_DEBUG("nelsonRenameFile")
}

void nelsonWindows(void) {
	PSMSG_DEBUG("nelsonWindows")
}

void nelsonFDotS(void) {
	PSMSG_DEBUG("nelsonFDotS")
}

void nelsonFDot(void) {
	PSMSG_DEBUG("nelsonFDot")
}

void nelsonNumFS(void) {
	PSMSG_DEBUG("nelsonNumFS")
}

void nelsonSetPrecision(void) {
	PSMSG_DEBUG("nelsonSetPrecision")
}

void nelsonPrecision(void) {
	PSMSG_DEBUG("nelsonPrecision")
}

void nelsonFSqrt(void) {
	PSMSG_DEBUG("nelsonFSqrt")
}

void nelsonPi(void) {
	PSMSG_DEBUG("nelsonPi")
}

void nelsonFVariable(void) {
	PSMSG_DEBUG("nelsonFVariable")
}

void nelsonFConstant(void) {
	PSMSG_DEBUG("nelsonFConstant")
}

void nelsonFLiteral(void) {
	PSMSG_DEBUG("nelsonFLiteral")
}

void nelsonAFLiteral(void) {
	PSMSG_DEBUG("nelsonAFLiteral")
}

void nelsonSFComma(void) {
	PSMSG_DEBUG("nelsonSFComma")
}

void nelsonSFloatPlus(void) {
	PSMSG_DEBUG("nelsonSFloatPlus")
}

void nelsonSFloats(void) {
	PSMSG_DEBUG("nelsonSFloats")
}

void nelsonSFloat(void) {
	PSMSG_DEBUG("nelsonSFloat")
}

void nelsonSFGreaterEqual(void) {
	PSMSG_DEBUG("nelsonSFGreaterEqual")
}

void nelsonSFLessEqual(void) {
	PSMSG_DEBUG("nelsonSFLessEqual")
}

void nelsonSFUnequal(void) {
	PSMSG_DEBUG("nelsonSFUnequal")
}

void nelsonSFGreater(void) {
	PSMSG_DEBUG("nelsonSFGreater")
}

void nelsonSFLess(void) {
	PSMSG_DEBUG("nelsonSFLess")
}

void nelsonSFEqual(void) {
	PSMSG_DEBUG("nelsonSFEqual")
}

void nelsonAtXy(void) {
	PSMSG_DEBUG("nelsonAtXy")
}

void nelsonNormal(void) {
	PSMSG_DEBUG("nelsonNormal")
}

void nelsonBg(void) {
	PSMSG_DEBUG("nelsonBg")
}

void nelsonFg(void) {
	PSMSG_DEBUG("nelsonFg")
}

void nelsonAnsi(void) {
	PSMSG_DEBUG("nelsonAnsi")
}

void nelsonBlank(void) {
	PSMSG_DEBUG("nelsonBlank")
}

void nelsonErase(void) {
	PSMSG_DEBUG("nelsonErase")
}

void nelsonYPlace(void) {
	PSMSG_DEBUG("nelsonYPlace")
}

void nelsonValueBins(void) {
	PSMSG_DEBUG("nelsonValueBins")
}

void nelsonNestDepth(void) {
	PSMSG_DEBUG("nelsonNestDepth")
}

void nelsonFDepth(void) {
	PSMSG_DEBUG("nelsonFDepth")
}

void nelsonFP0(void) {
	PSMSG_DEBUG("nelsonFP0")
}

void nelsonRecurse(void) {
	PSMSG_DEBUG("nelsonRecurse")
}

void nelsonYield(void) {
	PSMSG_DEBUG("nelsonYield")
}

void nelsonFGreaterNumberQ(void) {
	PSMSG_DEBUG("nelsonFGreaterNumberQ")
}

void nelsonFToS(void) {
	PSMSG_DEBUG("nelsonFToS")
}

void nelsonSToF(void) {
	PSMSG_DEBUG("nelsonSToF")
}

void nelsonOneSlashF(void) {
	PSMSG_DEBUG("nelsonOneSlashF")
}

void nelsonFSlash(void) {
	PSMSG_DEBUG("nelsonFSlash")
}

void nelsonFStar(void) {
	PSMSG_DEBUG("nelsonFStar")
}

void nelsonFMinus(void) {
	PSMSG_DEBUG("nelsonFMinus")
}

void nelsonFPlus(void) {
	PSMSG_DEBUG("nelsonFPlus")
}

void nelsonF0Equal(void) {
	PSMSG_DEBUG("nelsonF0Equal")
}

void nelsonF0Less(void) {
	PSMSG_DEBUG("nelsonF0Less")
}

void nelsonFNegate(void) {
	PSMSG_DEBUG("nelsonFNegate")
}

void nelsonFswa(void) {
	PSMSG_DEBUG("nelsonFswa")
}

void nelsonFOver(void) {
	PSMSG_DEBUG("nelsonFOver")
}

void nelsonFDrop(void) {
	PSMSG_DEBUG("nelsonFDrop")
}

void nelsonFNip(void) {
	PSMSG_DEBUG("nelsonFNip")
}

void nelsonFDup(void) {
	PSMSG_DEBUG("nelsonFDup")
}

void nelsonSFStore(void) {
	PSMSG_DEBUG("nelsonSFStore")
}

void nelsonSFFetch(void) {
	PSMSG_DEBUG("nelsonSFFetch")
}

void nelsonSF(void) {
	PSMSG_DEBUG("nelsonSF")
}

void nelsonFPStore(void) {
	PSMSG_DEBUG("nelsonFPStore")
}

void nelsonFPFetch(void) {
	PSMSG_DEBUG("nelsonFPFetch")
}

void nelsonLoadLibraryA(void) {
	PSMSG_DEBUG("nelsonLoadLibraryA")
}

void nelsonGetProcAddress(void) {
	PSMSG_DEBUG("nelsonGetProcAddress")
}


#endif


#if H2O_FORTH_PRIMITIVES == NELSON_FORTH || \
	H2O_FORTH_PRIMITIVES == NELSON_ESP_FORTH

void nelsonTelnetD(void) {
	PSMSG_DEBUG("nelsonTelnetD")
}

void nelsonBTerm(void) {
	PSMSG_DEBUG("nelsonBTerm")
}

void nelsonTimers(void) {
	PSMSG_DEBUG("nelsonTimers")
}

void nelsonRegisters(void) {
	PSMSG_DEBUG("nelsonRegisters")
}

void nelsonWebUI(void) {
	PSMSG_DEBUG("nelsonWebUI")
}

void nelsonLogin(void) {
	PSMSG_DEBUG("nelsonLogin")
}

void nelsonWebInterface(void) {
	PSMSG_DEBUG("nelsonWebInterface")
}

void nelsonRtos(void) {
	PSMSG_DEBUG("nelsonRtos")
}

void nelsonInterrupts(void) {
	PSMSG_DEBUG("nelsonInterrupts")
}

void nelsonSockets(void) {
	PSMSG_DEBUG("nelsonSockets")
}

void nelsonSerial(void) {
	PSMSG_DEBUG("nelsonSerial")
}

void nelsonLedC(void) {
	PSMSG_DEBUG("nelsonLedC")
}

void nelsonSpiffs(void) {
	PSMSG_DEBUG("nelsonSpiffs")
}

void nelsonSdMmc(void) {
	PSMSG_DEBUG("nelsonSdMmc")
}

void nelsonWifi(void) {
	PSMSG_DEBUG("nelsonWifi")
}

void nelsonWebserver(void) {
	PSMSG_DEBUG("nelsonWebserver")
}

void nelsonWire(void) {
	PSMSG_DEBUG("nelsonWire")
}

void nelsonLed(void) {
	PSMSG_DEBUG("nelsonLed")
}

void nelsonOutput(void) {
	PSMSG_DEBUG("nelsonOutput")
}

void nelsonInput(void) {
	PSMSG_DEBUG("nelsonInput")
}

void nelsonHigh(void) {
	PSMSG_DEBUG("nelsonHigh")
}

void nelsonLow(void) {
	PSMSG_DEBUG("nelsonLow")
}

void nelsonTone(void) {
	PSMSG_DEBUG("nelsonTone")
}

void nelsonFreq(void) {
	PSMSG_DEBUG("nelsonFreq")
}

void nelsonDuty(void) {
	PSMSG_DEBUG("nelsonDuty")
}

void nelsonAdc(void) {
	PSMSG_DEBUG("nelsonAdc")
}

void nelsonPin(void) {
	PSMSG_DEBUG("nelsonPin")
}

void nelsonTimerIsrRegister(void) {
	PSMSG_DEBUG("nelsonTimerIsrRegister")
}

void nelsonSdMmcDotBegin(void) {
	PSMSG_DEBUG("nelsonSdMmcDotBegin")
}

void nelsonMdnsDotBegin(void) {
	PSMSG_DEBUG("nelsonMdnsDotBegin")
}

void nelsonBin(void) {
	PSMSG_DEBUG("nelsonBin")
}

void nelsonTerminate(void) {
	PSMSG_DEBUG("nelsonTerminate")
}

void nelsonMSTicks(void) {
	PSMSG_DEBUG("nelsonMSTicks")
}

void nelsonDacWrite(void) {
	PSMSG_DEBUG("nelsonDacWrite")
}

void nelsonPulsIn(void) {
	PSMSG_DEBUG("nelsonPulsIn")
}

void nelsonAnalogRead(void) {
	PSMSG_DEBUG("nelsonAnalogRead")
}

void nelsonDigitalRead(void) {
	PSMSG_DEBUG("nelsonDigitalRead")
}

void nelsonDigitalWrite(void) {
	PSMSG_DEBUG("nelsonDigitalWrite")
}

void nelsonPinMode(void) {
	PSMSG_DEBUG("nelsonPinMode")
}

#endif

#endif
