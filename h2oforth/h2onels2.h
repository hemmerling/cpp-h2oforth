#ifndef H2ONELS2
#define H2ONELS2

/* Brad Nelson's "ESP32Forth v.7.05" & "MicroEforth ( uEForth ) 7.0.6.9" FORTHs */

/* Primitives */

#if H2O_FORTH_PRIMITIVES == NELSON_FORTH || \
	H2O_FORTH_PRIMITIVES == NELSON_ESP_FORTH || \
	H2O_FORTH_PRIMITIVES == NELSON_UE_FORTH
void nelsonForth(void) {
	MESSSAGE_DEBUG("nelsonForth")
}

void nelsonTo(void) {
	MESSSAGE_DEBUG("nelsonTo")
}

void nelsonPlusTo(void) {
	MESSSAGE_DEBUG("nelsonPlusTo")
}

void nelsonSemicolon(void) {
	MESSSAGE_DEBUG("nelsonSemicolon")
}

void nelsonLeftBrace(void) {
	MESSSAGE_DEBUG("nelsonLeftBrace")
}

void nelsonEditor(void) {
	MESSSAGE_DEBUG("nelsonEditor")
}

void nelsonList(void) {
	MESSSAGE_DEBUG("nelsonList")
}

void nelsonCopy(void) {
	MESSSAGE_DEBUG("nelsonCopy")
}

void nelsonThru(void) {
	MESSSAGE_DEBUG("nelsonThru")
}

void nelsonLoad(void) {
	MESSSAGE_DEBUG("nelsonLoad")
}

void nelsonFlush(void) {
	MESSSAGE_DEBUG("nelsonFlush")
}

void nelsonUpdate(void) {
	MESSSAGE_DEBUG("nelsonUpdate")
}

void nelsonEmptyBuffers(void) {
	MESSSAGE_DEBUG("nelsonEmptyBuffers")
}

void nelsonBuffer(void) {
	MESSSAGE_DEBUG("nelsonBuffer")
}

void nelsonBlock(void) {
	MESSSAGE_DEBUG("nelsonBlock")
}

void nelsonSaveBuffers(void) {
	MESSSAGE_DEBUG("nelsonBlock")
}

void nelsonDefaultUse(void) {
	MESSSAGE_DEBUG("nelsonDefaultUse")
}

void nelsonUse(void) {
	MESSSAGE_DEBUG("nelsonUse")
}

void nelsonOpenBlocks(void) {
	MESSSAGE_DEBUG("nelsonOpenBlocks")
}

void nelsonBlockId(void) {
	MESSSAGE_DEBUG("nelsonBlockId")
}

void nelsonScr(void) {
	MESSSAGE_DEBUG("nelsonScr")
}

void nelsonBlockFid(void) {
	MESSSAGE_DEBUG("nelsonBlockFid")
}

void nelsonStreams(void) {
	MESSSAGE_DEBUG("nelsonStreams")
}

void nelsonReset(void) {
	MESSSAGE_DEBUG("nelsonReset")
}

void nelsonRevive(void) {
	MESSSAGE_DEBUG("nelsonRevive")
}

void nelsonStartup(void) {
	MESSSAGE_DEBUG("nelsonStartup")
}

void nelsonRemember(void) {
	MESSSAGE_DEBUG("nelsonRemember")
}

void nelsonRestore(void) {
	MESSSAGE_DEBUG("nelsonRestore")
}

void nelsonSave(void) {
	MESSSAGE_DEBUG("nelsonSave")
}

void nelsonDumpFile(void) {
	MESSSAGE_DEBUG("nelsonDumpFile")
}

void nelsonWords(void) {
	MESSSAGE_DEBUG("nelsonWords")
}

void nelsonVlist(void) {
	MESSSAGE_DEBUG("nelsonWords")
}

void nelsonOrder(void) {
	MESSSAGE_DEBUG("nelsonOrder")
}

void nelsonSee(void) {
	MESSSAGE_DEBUG("nelsonSee")
}

void nelsonDotS(void) {
	MESSSAGE_DEBUG("nelsonDotS")
}

void nelsonStartsWithQ(void) {
	MESSSAGE_DEBUG("nelsonStartsWithQ")
}

void nelsonStrEqual(void) {
	MESSSAGE_DEBUG("nelsonStrEqual")
}

void nelsonColonNoname(void) {
	MESSSAGE_DEBUG("nelsonColonNoname")
}

void nelsonSmudge(void) {
	MESSSAGE_DEBUG("nelsonSmudge")
}

void nelsonForget(void) {
	MESSSAGE_DEBUG("nelsonForget")
}

void nelsonDump(void) {
	MESSSAGE_DEBUG("nelsonDump")
}

void nelsonAssert(void) {
	MESSSAGE_DEBUG("nelsonAssert")
}

void nelsonStartTask(void) {
	MESSSAGE_DEBUG("nelsonStartTask")
}

void nelsonTask(void) {
	MESSSAGE_DEBUG("nelsonTask")
}

void nelsonPause(void) {
	MESSSAGE_DEBUG("nelsonPause")
}

void nelsonTasks(void) {
	MESSSAGE_DEBUG("nelsonTasks")
}

void nelsonInclude(void) {
	MESSSAGE_DEBUG("nelsonInclude")
}

void nelsonIncluded(void) {
	MESSSAGE_DEBUG("nelsonIncluded")
}

void nelsonResize(void) {
	MESSSAGE_DEBUG("nelsonResize")
}

void nelsonFree(void) {
	MESSSAGE_DEBUG("nelsonFree")
}

void nelsonAllocate(void) {
	MESSSAGE_DEBUG("nelsonAllocate")
}

void nelsonOk(void) {
	MESSSAGE_DEBUG("nelsonOk")
}

void nelsonMs(void) {
	MESSSAGE_DEBUG("nelsonMs")
}

void nelsonFileSize(void) {
	MESSSAGE_DEBUG("nelsonFileSize")
}

void nelsonResizeFile(void) {
	MESSSAGE_DEBUG("nelsonResizeFile")
}

void nelsonRepositionFile(void) {
	MESSSAGE_DEBUG("nelsonRepositionFile")
}

void nelsonFilePosition(void) {
	MESSSAGE_DEBUG("nelsonFilePosition")
}

void nelsonReadFile(void) {
	MESSSAGE_DEBUG("nelsonReadFile")
}

void nelsonWriteFile(void) {
	MESSSAGE_DEBUG("nelsonWriteFile")
}

void nelsonDeleteFile(void) {
	MESSSAGE_DEBUG("nelsonDeleteFile")
}

void nelsonCreateFile(void) {
	MESSSAGE_DEBUG("nelsonCreateFile")
}

void nelsonOpenFile(void) {
	MESSSAGE_DEBUG("nelsonOpenFile")
}

void nelsonFlushFile(void) {
	MESSSAGE_DEBUG("nelsonFlushFile")
}

void nelsonCloseFile(void) {
	MESSSAGE_DEBUG("nelsonCloseFile")
}

void nelsonRSlashW(void) {
	MESSSAGE_DEBUG("nelsonRSlashW")
}

void nelsonWSlashO(void) {
	MESSSAGE_DEBUG("nelsonWSlashO")
}

void nelsonRSlashO(void) {
	MESSSAGE_DEBUG("nelsonRSlashO")
}

void nelsonPage(void) {
	MESSSAGE_DEBUG("nelsonPage")
}



void nelsonInternals(void) {
	MESSSAGE_DEBUG("nelsonInternals")
}

void nelsonSealed(void) {
	MESSSAGE_DEBUG("nelsonSealed")
}

void nelsonAlso(void) {
	MESSSAGE_DEBUG("nelsonAlso")
}

void nelsonOnly(void) {
	MESSSAGE_DEBUG("nelsonOnly")
}

void nelsonTransferLeftBrace(void) {
	MESSSAGE_DEBUG("nelsonTransferLeftBrace")
}

void nelsonRightBraceTransfer(void) {
	MESSSAGE_DEBUG("nelsonRightBraceTransfer")
}

void nelsonTransfer(void) {
	MESSSAGE_DEBUG("nelsonTransfer")
}

void nelsonDefinitions(void) {
	MESSSAGE_DEBUG("nelsonDefinitions")
}

void nelsonVocabulary(void) {
	MESSSAGE_DEBUG("nelsonVocabulary")
}

void nelsonXif(void) {
	MESSSAGE_DEBUG("nelsonXif")
}

void nelsonXElse(void) {
	MESSSAGE_DEBUG("nelsonXElse")
}

void nelsonXThen(void) {
	MESSSAGE_DEBUG("nelsonXThen")
}

void nelsonDefinedQ(void) {
	MESSSAGE_DEBUG("nelsonDefinedQ")
}

void nelsonQuit(void) {
	MESSSAGE_DEBUG("nelsonQuit")
}

void nelsonEvaluate(void) {
	MESSSAGE_DEBUG("nelsonEvaluate")
}

void nelsonPrompt(void) {
	MESSSAGE_DEBUG("nelsonPrompt")
}

void nelsonRefill(void) {
	MESSSAGE_DEBUG("nelsonRefill")
}

void nelsonTib(void) {
	MESSSAGE_DEBUG("nelsonTib")
}

void nelsonAccept(void) {
	MESSSAGE_DEBUG("nelsonAccept")
}

void nelsonEcho(void) {
	MESSSAGE_DEBUG("nelsonEcho")
}


void nelsonFill(void) {
	MESSSAGE_DEBUG("nelsonFill")
}

void nelsonCMoveFrom(void) {
	MESSSAGE_DEBUG("nelsonCMoveFrom")
}

void nelsonCMove(void) {
	MESSSAGE_DEBUG("nelsonCMove")
}

void nelsonYGreaterS(void) {
	MESSSAGE_DEBUG("nelsonYGreaterS")
}

void nelsonSGreaterZ(void) {
	MESSSAGE_DEBUG("nelsonSGreaterZ")
}

void nelsonRVerticalBar(void) {
	MESSSAGE_DEBUG("nelsonRVerticalBar")
}

void nelsonRQuote(void) {
	MESSSAGE_DEBUG("nelsonRVerticalBar")
}

void nelsonYQuote(void) {
	MESSSAGE_DEBUG("nelsonYQuote")
}

void nelsonDotQuote(void) {
	MESSSAGE_DEBUG("nelsonDotQuote")
}

void nelsonSQuote(void) {
	MESSSAGE_DEBUG("nelsonSQuote")
}

void nelsonDollarPlace(void) {
	MESSSAGE_DEBUG("nelsonDollarPlace")
}

void nelsonNDot(void) {
	MESSSAGE_DEBUG("nelsonNDot")
}

void nelsonQ(void) {
	MESSSAGE_DEBUG("nelsonQ")
}

void nelsonDot(void) {
	MESSSAGE_DEBUG("nelsonDot")
}

void nelsonUDot(void) {
	MESSSAGE_DEBUG("nelsonUDot")
}

void nelsonBinary(void) {
	MESSSAGE_DEBUG("nelsonBinary")
}

void nelsonDecimal(void) {
	MESSSAGE_DEBUG("nelsonDecimal")
}

void nelsonOctal(void) {
	MESSSAGE_DEBUG("nelsonOctal")
}

void nelsonHex(void) {
	MESSSAGE_DEBUG("nelsonHex")
}

void nelsonStr(void) {
	MESSSAGE_DEBUG("nelsonStr")
}

void nelsonNumFrom(void) {
	MESSSAGE_DEBUG("nelsonNumFrom")
}

void nelsonSign(void) {
	MESSSAGE_DEBUG("nelsonSign")
}

void nelsonNumS(void) {
	MESSSAGE_DEBUG("nelsonNumS")
}

void nelsonNum(void) {
	MESSSAGE_DEBUG("nelsonNum")
}

void nelsonHold(void) {
	MESSSAGE_DEBUG("nelsonHold")
}

void nelsonLessNum(void) {
	MESSSAGE_DEBUG("nelsonLessNum")
}

void nelsonExtract(void) {
	MESSSAGE_DEBUG("nelsonExtractm")
}

void nelsonPad(void) {
	MESSSAGE_DEBUG("nelsonPad")
}

void nelsonHld(void) {
	MESSSAGE_DEBUG("nelsonHld")
}

void nelsonCr(void) {
	MESSSAGE_DEBUG("nelsonCr")
}

void nelsonSpace(void) {
	MESSSAGE_DEBUG("nelsonSpace")
}

void nelsonEmit(void) {
	MESSSAGE_DEBUG("nelsonEmit")
}

void nelsonBye(void) {
	MESSSAGE_DEBUG("nelsonBye")
}

void nelsonKeyQ(void) {
	MESSSAGE_DEBUG("nelsonKeyQ")
}

void nelsonKey(void) {
	MESSSAGE_DEBUG("nelsonKey")
}

void nelsonType(void) {
	MESSSAGE_DEBUG("nelsonType")
}

void nelsonIs(void) {
	MESSSAGE_DEBUG("nelsonIs")
}

void nelsonDefer(void) {
	MESSSAGE_DEBUG("nelsonDefer")
}

void nelsonValue(void) {
	MESSSAGE_DEBUG("nelsonValue")
}

void nelsonThrow(void) {
	MESSSAGE_DEBUG("nelsonThrow")
}

void nelsonCatch(void) {
	MESSSAGE_DEBUG("nelsonCatch")
}

void nelsonHandler(void) {
	MESSSAGE_DEBUG("nelsonHandler")
}

void nelsonJ(void) {
	MESSSAGE_DEBUG("nelsonJ")
}

void nelsonI(void) {
	MESSSAGE_DEBUG("nelsonI")
}

void nelsonLoop(void) {
	MESSSAGE_DEBUG("nelsonLoop")
}

void nelsonPlusLoop(void) {
	MESSSAGE_DEBUG("nelsonPlusLoop")
}

void nelsonLeave(void) {
	MESSSAGE_DEBUG("nelsonLeave")
}

void nelsonUnLoop(void) {
	MESSSAGE_DEBUG("nelsonUnLoop")
}

void nelsonQDo(void) {
	MESSSAGE_DEBUG("nelsonQDo")
}

void nelsonDo(void) {
	MESSSAGE_DEBUG("nelsonDo")
}

void nelsonNext(void) {
	MESSSAGE_DEBUG("nelsonNext")
}

void nelsonFor(void) {
	MESSSAGE_DEBUG("nelsonFor")
}

void nelsonDepth(void) {
	MESSSAGE_DEBUG("nelsonDepth")
}

void nelsonRP0(void) {
	MESSSAGE_DEBUG("nelsonRP0")
}

void nelsonSP0(void) {
	MESSSAGE_DEBUG("nelsonSP0")
}

void nelsonVariable(void) {
	MESSSAGE_DEBUG("nelsonVariable")
}

void nelsonConstant(void) {
	MESSSAGE_DEBUG("nelsonConstant")
}

void nelsonPostpone(void) {
	MESSSAGE_DEBUG("nelsonPostpone")
}

void nelsonToBody(void) {
	MESSSAGE_DEBUG("nelsonToBody")
}

void nelsonToFlags(void) {
	MESSSAGE_DEBUG("nelsonToFlags")
}

void nelsonToLink(void) {
	MESSSAGE_DEBUG("nelsonToLink")
}

void nelsonToLinkAmpersand(void) {
	MESSSAGE_DEBUG("nelsonToLinkAmpersand")
}

void nelsonToName(void) {
	MESSSAGE_DEBUG("nelsonToName")
}

void nelsonAbs(void) {
	MESSSAGE_DEBUG("nelsonAbs")
}

void nelsonMax(void) {
	MESSSAGE_DEBUG("nelsonMax")
}

void nelsonMin(void) {
	MESSSAGE_DEBUG("nelsonMin")
}

void nelsonAft(void) {
	MESSSAGE_DEBUG("nelsonAft")
}

void nelsonRepeat(void) {
	MESSSAGE_DEBUG("nelsonRepeat")
}

void nelsonWhile(void) {
	MESSSAGE_DEBUG("nelsonWhile")
}

void nelsonElse(void) {
	MESSSAGE_DEBUG("nelsonElse")
}

void nelsonIf(void) {
	MESSSAGE_DEBUG("nelsonIf")
}

void nelsonThen(void) {
	MESSSAGE_DEBUG("nelsonThen")
}

void nelsonAhead(void) {
	MESSSAGE_DEBUG("nelsonAhead")
}

void nelsonUntil(void) {
	MESSSAGE_DEBUG("nelsonUntil")
}

void nelsonAgain(void) {
	MESSSAGE_DEBUG("nelsonAgain")
}

void nelsonBegin(void) {
	MESSSAGE_DEBUG("nelsonBegin")
}

void nelsonLiteral(void) {
	MESSSAGE_DEBUG("nelsonLiteral")
}

void nelsonXChar(void) {
	MESSSAGE_DEBUG("nelsonXChar")
}

void nelsonChar(void) {
	MESSSAGE_DEBUG("nelsonChar")
}

void nelsonXNick(void) {
	MESSSAGE_DEBUG("nelsonXNick")
}

void nelsonNick(void) {
	MESSSAGE_DEBUG("nelsonNick")
}

void nelsonRightBracket(void) {
	MESSSAGE_DEBUG("nelsonRightBracket")
}

void nelsonLeftBracket(void) {
	MESSSAGE_DEBUG("nelsonLeftBracket")
}

void nelsonCComma(void) {
	MESSSAGE_DEBUG("nelsonCComma")
}

void nelsonComma(void) {
	MESSSAGE_DEBUG("nelsonComma")
}

void nelsonAlign(void) {
	MESSSAGE_DEBUG("nelsonAlign")
}

void nelsonAligned(void) {
	MESSSAGE_DEBUG("nelsonAligned")
}

void nelsonAllot(void) {
	MESSSAGE_DEBUG("nelsonAllot")
}

void nelsonHere(void) {
	MESSSAGE_DEBUG("nelsonHere")
}

void nelsonContext(void) {
	MESSSAGE_DEBUG("nelsonContext")
}

void nelsonCurrent(void) {
	MESSSAGE_DEBUG("nelsonCurrent")
}

void nelsonBase(void) {
	MESSSAGE_DEBUG("nelsonBase")
}

void nelsonState(void) {
	MESSSAGE_DEBUG("nelsonState")
}

void nelsonToIn(void) {
	MESSSAGE_DEBUG("nelsonToIn")
}

void nelsonNumTib(void) {
	MESSSAGE_DEBUG("nelsonNumTib")
}

void nelsonTickTib(void) {
	MESSSAGE_DEBUG("nelsonTickTib")
}

void nelsonTwoStore(void) {
	MESSSAGE_DEBUG("nelsonTwoStore")
}

void nelsonTwoFetch(void) {
	MESSSAGE_DEBUG("nelsonTwoFetch")
}

void nelsonTwoDup(void) {
	MESSSAGE_DEBUG("nelsonTwoDup")
}

void nelsonTwoDrop(void) {
	MESSSAGE_DEBUG("nelsonTwoDrop")
}

void nelsonCellSlash(void) {
	MESSSAGE_DEBUG("nelsonCellSlash")
}

void nelsonCells(void) {
	MESSSAGE_DEBUG("nelsonCells")
}

void nelsonCellPlus(void) {
	MESSSAGE_DEBUG("nelsonCellPlus")
}

void nelsonPlusStore(void) {
	MESSSAGE_DEBUG("nelsonPlusStore")
}

void nelsonFourSlash(void) {
	MESSSAGE_DEBUG("nelsonFourSlash")
}

void nelsonFourStar(void) {
	MESSSAGE_DEBUG("nelsonFourStar")
}

void nelsonTwoSlash(void) {
	MESSSAGE_DEBUG("nelsonTwoSlash")
}

void nelsonTwoStar(void) {
	MESSSAGE_DEBUG("nelsonTwoStar")
}

void nelsonOneMinus(void) {
	MESSSAGE_DEBUG("nelsonOneMinus")
}

void nelsonOnePlus(void) {
	MESSSAGE_DEBUG("nelsonOnePlus")
}

void nelsonNl(void) {
	MESSSAGE_DEBUG("nelsonNl")
}

void nelsonBl(void) {
	MESSSAGE_DEBUG("nelsonBl")
}

void nelsonZeroUnequal(void) {
	MESSSAGE_DEBUG("nelsonZeroUnequal")
}

void nelsonUnequal(void) {
	MESSSAGE_DEBUG("nelsonUnequal")
}

void nelsonEqual(void) {
	MESSSAGE_DEBUG("nelsonEqual")
}

void nelsonGreaterEqual(void) {
	MESSSAGE_DEBUG("nelsonGreaterEqual")
}

void nelsonLessEqual(void) {
	MESSSAGE_DEBUG("nelsonLessEqual")
}

void nelsonGreater(void) {
	MESSSAGE_DEBUG("nelsonGreater")
}

void nelsonLess(void) {
	MESSSAGE_DEBUG("nelsonLess")
}

void nelsonMinusRot(void) {
	MESSSAGE_DEBUG("nelsonMinusRot")
}

void nelsonRot(void) {
	MESSSAGE_DEBUG("nelsonRot")
}

void nelsonMinus(void) {
	MESSSAGE_DEBUG("nelsonMinus")
}

void nelsonNegate(void) {
	MESSSAGE_DEBUG("nelsonNegate")
}

void nelsonInvert(void) {
	MESSSAGE_DEBUG("nelsonInvert")
}

void nelsonMod(void) {
	MESSSAGE_DEBUG("nelsonMod")
}

void nelsonSlash(void) {
	MESSSAGE_DEBUG("nelsonSlash")
}

void nelsonSlashMod(void) {
	MESSSAGE_DEBUG("nelsonSlashMod")
}

void nelsonStar(void) {
	MESSSAGE_DEBUG("nelsonStar")
}

void nelsonStarSlash(void) {
	MESSSAGE_DEBUG("nelsonStarSlash")
}

void nelsonRDrop(void) {
	MESSSAGE_DEBUG("nelsonRDrop")
}

void nelsonNip(void) {
	MESSSAGE_DEBUG("nelsonNip")
}

void nelsonBackslash(void) {
	MESSSAGE_DEBUG("nelsonBackslash")
}

void nelsonParen(void) {
	MESSSAGE_DEBUG("nelsonParen")
}

void nelsonExit(void) {
	MESSSAGE_DEBUG("nelsonExit")
}

void nelsonColon(void) {
	MESSSAGE_DEBUG("nelsonColon")
}

void nelsonImmediate(void) {
	MESSSAGE_DEBUG("nelsonImmediate")
}

void nelsonDoes(void) {
	MESSSAGE_DEBUG("nelsonDoes")
}

void nelsonCreate(void) {
	MESSSAGE_DEBUG("nelsonCreate")
}

void nelsonSGreaterNumberQ(void) {
	MESSSAGE_DEBUG("nelsonSGreaterNumberQ")
}

void nelsonParse(void) {
	MESSSAGE_DEBUG("nelsonParse")
}

void nelsonFind(void) {
	MESSSAGE_DEBUG("nelsonFind")
}

void nelsonCell(void) {
	MESSSAGE_DEBUG("nelsonCell")
}

void nelsonExecute(void) {
	MESSSAGE_DEBUG("nelsonExecute")
}

void nelsonRFetch(void) {
	MESSSAGE_DEBUG("nelsonRFetch")
}

void nelsonRFrom(void) {
	MESSSAGE_DEBUG("nelsonRFrom")
}

void nelsonToR(void) {
	MESSSAGE_DEBUG("nelsonToR")
}

void nelsonRPStore(void) {
	MESSSAGE_DEBUG("nelsonRPStore")
}

void nelsonRPFetch(void) {
	MESSSAGE_DEBUG("nelsonRPFetch")
}

void nelsonSPStore(void) {
	MESSSAGE_DEBUG("nelsonSPStore")
}

void nelsonSPFetch(void) {
	MESSSAGE_DEBUG("nelsonSPFetch")
}

void nelsonCStore(void) {
	MESSSAGE_DEBUG("nelsonCStore")
}

void nelsonLStore(void) {
	MESSSAGE_DEBUG("nelsonLStore")
}

void nelsonStore(void) {
	MESSSAGE_DEBUG("nelsonStore")
}

void nelsonCFetch(void) {
	MESSSAGE_DEBUG("nelsonCFetch")
}

void nelsonLFetch(void) {
	MESSSAGE_DEBUG("nelsonLFetch")
}

void nelsonFetch(void) {
	MESSSAGE_DEBUG("nelsonFetch")
}

void nelsonDrop(void) {
	MESSSAGE_DEBUG("nelsonDrop")
}

void nelsonOver(void) {
	MESSSAGE_DEBUG("nelsonOver")
}

void nelsonSwap(void) {
	MESSSAGE_DEBUG("nelsonSwap")
}

void nelsonDup(void) {
	MESSSAGE_DEBUG("nelsonDup")
}

void nelsonXor(void) {
	MESSSAGE_DEBUG("nelsonXor")
}

void nelsonOr(void) {
	MESSSAGE_DEBUG("nelsonOr")
}

void nelsonAnd(void) {
	MESSSAGE_DEBUG("nelsonAnd")
}

void nelsonRShift(void) {
	MESSSAGE_DEBUG("nelsonRShift")
}

void nelsonLShift(void) {
	MESSSAGE_DEBUG("nelsonLShift")
}

void nelsonStarSlashMod(void) {
	MESSSAGE_DEBUG("nelsonStarSlashMod")
}

void nelsonUSlashMod(void) {
	MESSSAGE_DEBUG("nelsonUSlashMod")
}

void nelsonPlus(void) {
	MESSSAGE_DEBUG("nelsonPlus")
}

void nelsonZeroLess(void) {
	MESSSAGE_DEBUG("nelsonZeroLess")
}

void nelsonZeroEqual(void) {
	MESSSAGE_DEBUG("nelsonZeroEqual")
}

#endif


#if H2O_FORTH_PRIMITIVES == NELSON_FORTH || \
	H2O_FORTH_PRIMITIVES == NELSON_UE_FORTH

void nelsonYLocal(void) {
	MESSSAGE_DEBUG("nelsonYLocal")
}

void nelsonProcessHeap(void) {
	MESSSAGE_DEBUG("nelsonProcessHeap")
}

void nelsonHeapReAlloc(void) {
	MESSSAGE_DEBUG("nelsonHeapReAlloc")
}

void nelsonHeapFree(void) {
	MESSSAGE_DEBUG("nelsonHeapFree")
}

void nelsonHeapAlloc(void) {
	MESSSAGE_DEBUG("nelsonHeapAlloc")
}

void nelsonGetProcessHeap(void) {
	MESSSAGE_DEBUG("nelsonGetProcessHeap")
}

void nelsonRenameFile(void) {
	MESSSAGE_DEBUG("nelsonRenameFile")
}

void nelsonWindows(void) {
	MESSSAGE_DEBUG("nelsonWindows")
}

void nelsonFDotS(void) {
	MESSSAGE_DEBUG("nelsonFDotS")
}

void nelsonFDot(void) {
	MESSSAGE_DEBUG("nelsonFDot")
}

void nelsonNumFS(void) {
	MESSSAGE_DEBUG("nelsonNumFS")
}

void nelsonSetPrecision(void) {
	MESSSAGE_DEBUG("nelsonSetPrecision")
}

void nelsonPrecision(void) {
	MESSSAGE_DEBUG("nelsonPrecision")
}

void nelsonFSqrt(void) {
	MESSSAGE_DEBUG("nelsonFSqrt")
}

void nelsonPi(void) {
	MESSSAGE_DEBUG("nelsonPi")
}

void nelsonFVariable(void) {
	MESSSAGE_DEBUG("nelsonFVariable")
}

void nelsonFConstant(void) {
	MESSSAGE_DEBUG("nelsonFConstant")
}

void nelsonFLiteral(void) {
	MESSSAGE_DEBUG("nelsonFLiteral")
}

void nelsonAFLiteral(void) {
	MESSSAGE_DEBUG("nelsonAFLiteral")
}

void nelsonSFComma(void) {
	MESSSAGE_DEBUG("nelsonSFComma")
}

void nelsonSFloatPlus(void) {
	MESSSAGE_DEBUG("nelsonSFloatPlus")
}

void nelsonSFloats(void) {
	MESSSAGE_DEBUG("nelsonSFloats")
}

void nelsonSFloat(void) {
	MESSSAGE_DEBUG("nelsonSFloat")
}

void nelsonSFGreaterEqual(void) {
	MESSSAGE_DEBUG("nelsonSFGreaterEqual")
}

void nelsonSFLessEqual(void) {
	MESSSAGE_DEBUG("nelsonSFLessEqual")
}

void nelsonSFUnequal(void) {
	MESSSAGE_DEBUG("nelsonSFUnequal")
}

void nelsonSFGreater(void) {
	MESSSAGE_DEBUG("nelsonSFGreater")
}

void nelsonSFLess(void) {
	MESSSAGE_DEBUG("nelsonSFLess")
}

void nelsonSFEqual(void) {
	MESSSAGE_DEBUG("nelsonSFEqual")
}

void nelsonAtXy(void) {
	MESSSAGE_DEBUG("nelsonAtXy")
}

void nelsonNormal(void) {
	MESSSAGE_DEBUG("nelsonNormal")
}

void nelsonBg(void) {
	MESSSAGE_DEBUG("nelsonBg")
}

void nelsonFg(void) {
	MESSSAGE_DEBUG("nelsonFg")
}

void nelsonAnsi(void) {
	MESSSAGE_DEBUG("nelsonAnsi")
}

void nelsonBlank(void) {
	MESSSAGE_DEBUG("nelsonBlank")
}

void nelsonErase(void) {
	MESSSAGE_DEBUG("nelsonErase")
}

void nelsonYPlace(void) {
	MESSSAGE_DEBUG("nelsonYPlace")
}

void nelsonValueBins(void) {
	MESSSAGE_DEBUG("nelsonValueBins")
}

void nelsonNestDepth(void) {
	MESSSAGE_DEBUG("nelsonNestDepth")
}

void nelsonFDepth(void) {
	MESSSAGE_DEBUG("nelsonFDepth")
}

void nelsonFP0(void) {
	MESSSAGE_DEBUG("nelsonFP0")
}

void nelsonRecurse(void) {
	MESSSAGE_DEBUG("nelsonRecurse")
}

void nelsonYield(void) {
	MESSSAGE_DEBUG("nelsonYield")
}

void nelsonFGreaterNumberQ(void) {
	MESSSAGE_DEBUG("nelsonFGreaterNumberQ")
}

void nelsonFToS(void) {
	MESSSAGE_DEBUG("nelsonFToS")
}

void nelsonSToF(void) {
	MESSSAGE_DEBUG("nelsonSToF")
}

void nelsonOneSlashF(void) {
	MESSSAGE_DEBUG("nelsonOneSlashF")
}

void nelsonFSlash(void) {
	MESSSAGE_DEBUG("nelsonFSlash")
}

void nelsonFStar(void) {
	MESSSAGE_DEBUG("nelsonFStar")
}

void nelsonFMinus(void) {
	MESSSAGE_DEBUG("nelsonFMinus")
}

void nelsonFPlus(void) {
	MESSSAGE_DEBUG("nelsonFPlus")
}

void nelsonF0Equal(void) {
	MESSSAGE_DEBUG("nelsonF0Equal")
}

void nelsonF0Less(void) {
	MESSSAGE_DEBUG("nelsonF0Less")
}

void nelsonFNegate(void) {
	MESSSAGE_DEBUG("nelsonFNegate")
}

void nelsonFswa(void) {
	MESSSAGE_DEBUG("nelsonFswa")
}

void nelsonFOver(void) {
	MESSSAGE_DEBUG("nelsonFOver")
}

void nelsonFDrop(void) {
	MESSSAGE_DEBUG("nelsonFDrop")
}

void nelsonFNip(void) {
	MESSSAGE_DEBUG("nelsonFNip")
}

void nelsonFDup(void) {
	MESSSAGE_DEBUG("nelsonFDup")
}

void nelsonSFStore(void) {
	MESSSAGE_DEBUG("nelsonSFStore")
}

void nelsonSFFetch(void) {
	MESSSAGE_DEBUG("nelsonSFFetch")
}

void nelsonSF(void) {
	MESSSAGE_DEBUG("nelsonSF")
}

void nelsonFPStore(void) {
	MESSSAGE_DEBUG("nelsonFPStore")
}

void nelsonFPFetch(void) {
	MESSSAGE_DEBUG("nelsonFPFetch")
}

void nelsonLoadLibraryA(void) {
	MESSSAGE_DEBUG("nelsonLoadLibraryA")
}

void nelsonGetProcAddress(void) {
	MESSSAGE_DEBUG("nelsonGetProcAddress")
}


#endif


#if H2O_FORTH_PRIMITIVES == NELSON_FORTH || \
	H2O_FORTH_PRIMITIVES == NELSON_ESP_FORTH

void nelsonTelnetD(void) {
	MESSSAGE_DEBUG("nelsonTelnetD")
}

void nelsonBTerm(void) {
	MESSSAGE_DEBUG("nelsonBTerm")
}

void nelsonTimers(void) {
	MESSSAGE_DEBUG("nelsonTimers")
}

void nelsonRegisters(void) {
	MESSSAGE_DEBUG("nelsonRegisters")
}

void nelsonWebUI(void) {
	MESSSAGE_DEBUG("nelsonWebUI")
}

void nelsonLogin(void) {
	MESSSAGE_DEBUG("nelsonLogin")
}

void nelsonWebInterface(void) {
	MESSSAGE_DEBUG("nelsonWebInterface")
}

void nelsonRtos(void) {
	MESSSAGE_DEBUG("nelsonRtos")
}

void nelsonInterrupts(void) {
	MESSSAGE_DEBUG("nelsonInterrupts")
}

void nelsonSockets(void) {
	MESSSAGE_DEBUG("nelsonSockets")
}

void nelsonSerial(void) {
	MESSSAGE_DEBUG("nelsonSerial")
}

void nelsonLedC(void) {
	MESSSAGE_DEBUG("nelsonLedC")
}

void nelsonSpiffs(void) {
	MESSSAGE_DEBUG("nelsonSpiffs")
}

void nelsonSdMmc(void) {
	MESSSAGE_DEBUG("nelsonSdMmc")
}

void nelsonWifi(void) {
	MESSSAGE_DEBUG("nelsonWifi")
}

void nelsonWebserver(void) {
	MESSSAGE_DEBUG("nelsonWebserver")
}

void nelsonWire(void) {
	MESSSAGE_DEBUG("nelsonWire")
}

void nelsonLed(void) {
	MESSSAGE_DEBUG("nelsonLed")
}

void nelsonOutput(void) {
	MESSSAGE_DEBUG("nelsonOutput")
}

void nelsonInput(void) {
	MESSSAGE_DEBUG("nelsonInput")
}

void nelsonHigh(void) {
	MESSSAGE_DEBUG("nelsonHigh")
}

void nelsonLow(void) {
	MESSSAGE_DEBUG("nelsonLow")
}

void nelsonTone(void) {
	MESSSAGE_DEBUG("nelsonTone")
}

void nelsonFreq(void) {
	MESSSAGE_DEBUG("nelsonFreq")
}

void nelsonDuty(void) {
	MESSSAGE_DEBUG("nelsonDuty")
}

void nelsonAdc(void) {
	MESSSAGE_DEBUG("nelsonAdc")
}

void nelsonPin(void) {
	MESSSAGE_DEBUG("nelsonPin")
}

void nelsonTimerIsrRegister(void) {
	MESSSAGE_DEBUG("nelsonTimerIsrRegister")
}

void nelsonSdMmcDotBegin(void) {
	MESSSAGE_DEBUG("nelsonSdMmcDotBegin")
}

void nelsonMdnsDotBegin(void) {
	MESSSAGE_DEBUG("nelsonMdnsDotBegin")
}

void nelsonBin(void) {
	MESSSAGE_DEBUG("nelsonBin")
}

void nelsonTerminate(void) {
	MESSSAGE_DEBUG("nelsonTerminate")
}

void nelsonMSTicks(void) {
	MESSSAGE_DEBUG("nelsonMSTicks")
}

void nelsonDacWrite(void) {
	MESSSAGE_DEBUG("nelsonDacWrite")
}

void nelsonPulsIn(void) {
	MESSSAGE_DEBUG("nelsonPulsIn")
}

void nelsonAnalogRead(void) {
	MESSSAGE_DEBUG("nelsonAnalogRead")
}

void nelsonDigitalRead(void) {
	MESSSAGE_DEBUG("nelsonDigitalRead")
}

void nelsonDigitalWrite(void) {
	MESSSAGE_DEBUG("nelsonDigitalWrite")
}

void nelsonPinMode(void) {
	MESSSAGE_DEBUG("nelsonPinMode")
}

#endif

#endif
