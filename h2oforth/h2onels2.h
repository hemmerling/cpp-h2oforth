#ifndef H2ONELS2
#define H2ONELS2

/* Brad Nelson's "ESP32Forth v.7.05" & "MicroEforth ( uEForth ) 7.0.6.9" FORTHs */

/* Primitives */

#if H2O_FORTH_PRIMITIVES == NELSON_FORTH || \
	H2O_FORTH_PRIMITIVES == NELSON_ESP_FORTH || \
	H2O_FORTH_PRIMITIVES == NELSON_UE_FORTH
void nelsonForth(void) {
	SMSG_DEBUG("nelsonForth")
}

void nelsonTo(void) {
	SMSG_DEBUG("nelsonTo")
}

void nelsonPlusTo(void) {
	SMSG_DEBUG("nelsonPlusTo")
}

void nelsonSemicolon(void) {
	SMSG_DEBUG("nelsonSemicolon")
}

void nelsonLeftBrace(void) {
	SMSG_DEBUG("nelsonLeftBrace")
}

void nelsonEditor(void) {
	SMSG_DEBUG("nelsonEditor")
}

void nelsonList(void) {
	SMSG_DEBUG("nelsonList")
}

void nelsonCopy(void) {
	SMSG_DEBUG("nelsonCopy")
}

void nelsonThru(void) {
	SMSG_DEBUG("nelsonThru")
}

void nelsonLoad(void) {
	SMSG_DEBUG("nelsonLoad")
}

void nelsonFlush(void) {
	SMSG_DEBUG("nelsonFlush")
}

void nelsonUpdate(void) {
	SMSG_DEBUG("nelsonUpdate")
}

void nelsonEmptyBuffers(void) {
	SMSG_DEBUG("nelsonEmptyBuffers")
}

void nelsonBuffer(void) {
	SMSG_DEBUG("nelsonBuffer")
}

void nelsonBlock(void) {
	SMSG_DEBUG("nelsonBlock")
}

void nelsonSaveBuffers(void) {
	SMSG_DEBUG("nelsonBlock")
}

void nelsonDefaultUse(void) {
	SMSG_DEBUG("nelsonDefaultUse")
}

void nelsonUse(void) {
	SMSG_DEBUG("nelsonUse")
}

void nelsonOpenBlocks(void) {
	SMSG_DEBUG("nelsonOpenBlocks")
}

void nelsonBlockId(void) {
	SMSG_DEBUG("nelsonBlockId")
}

void nelsonScr(void) {
	SMSG_DEBUG("nelsonScr")
}

void nelsonBlockFid(void) {
	SMSG_DEBUG("nelsonBlockFid")
}

void nelsonStreams(void) {
	SMSG_DEBUG("nelsonStreams")
}

void nelsonReset(void) {
	SMSG_DEBUG("nelsonReset")
}

void nelsonRevive(void) {
	SMSG_DEBUG("nelsonRevive")
}

void nelsonStartup(void) {
	SMSG_DEBUG("nelsonStartup")
}

void nelsonRemember(void) {
	SMSG_DEBUG("nelsonRemember")
}

void nelsonRestore(void) {
	SMSG_DEBUG("nelsonRestore")
}

void nelsonSave(void) {
	SMSG_DEBUG("nelsonSave")
}

void nelsonDumpFile(void) {
	SMSG_DEBUG("nelsonDumpFile")
}

void nelsonWords(void) {
	SMSG_DEBUG("nelsonWords")
}

void nelsonVlist(void) {
	SMSG_DEBUG("nelsonWords")
}

void nelsonOrder(void) {
	SMSG_DEBUG("nelsonOrder")
}

void nelsonSee(void) {
	SMSG_DEBUG("nelsonSee")
}

void nelsonDotS(void) {
	SMSG_DEBUG("nelsonDotS")
}

void nelsonStartsWithQ(void) {
	SMSG_DEBUG("nelsonStartsWithQ")
}

void nelsonStrEqual(void) {
	SMSG_DEBUG("nelsonStrEqual")
}

void nelsonColonNoname(void) {
	SMSG_DEBUG("nelsonColonNoname")
}

void nelsonSmudge(void) {
	SMSG_DEBUG("nelsonSmudge")
}

void nelsonForget(void) {
	SMSG_DEBUG("nelsonForget")
}

void nelsonDump(void) {
	SMSG_DEBUG("nelsonDump")
}

void nelsonAssert(void) {
	SMSG_DEBUG("nelsonAssert")
}

void nelsonStartTask(void) {
	SMSG_DEBUG("nelsonStartTask")
}

void nelsonTask(void) {
	SMSG_DEBUG("nelsonTask")
}

void nelsonPause(void) {
	SMSG_DEBUG("nelsonPause")
}

void nelsonTasks(void) {
	SMSG_DEBUG("nelsonTasks")
}

void nelsonInclude(void) {
	SMSG_DEBUG("nelsonInclude")
}

void nelsonIncluded(void) {
	SMSG_DEBUG("nelsonIncluded")
}

void nelsonResize(void) {
	SMSG_DEBUG("nelsonResize")
}

void nelsonFree(void) {
	SMSG_DEBUG("nelsonFree")
}

void nelsonAllocate(void) {
	SMSG_DEBUG("nelsonAllocate")
}

void nelsonOk(void) {
	SMSG_DEBUG("nelsonOk")
}

void nelsonMs(void) {
	SMSG_DEBUG("nelsonMs")
}

void nelsonFileSize(void) {
	SMSG_DEBUG("nelsonFileSize")
}

void nelsonResizeFile(void) {
	SMSG_DEBUG("nelsonResizeFile")
}

void nelsonRepositionFile(void) {
	SMSG_DEBUG("nelsonRepositionFile")
}

void nelsonFilePosition(void) {
	SMSG_DEBUG("nelsonFilePosition")
}

void nelsonReadFile(void) {
	SMSG_DEBUG("nelsonReadFile")
}

void nelsonWriteFile(void) {
	SMSG_DEBUG("nelsonWriteFile")
}

void nelsonDeleteFile(void) {
	SMSG_DEBUG("nelsonDeleteFile")
}

void nelsonCreateFile(void) {
	SMSG_DEBUG("nelsonCreateFile")
}

void nelsonOpenFile(void) {
	SMSG_DEBUG("nelsonOpenFile")
}

void nelsonFlushFile(void) {
	SMSG_DEBUG("nelsonFlushFile")
}

void nelsonCloseFile(void) {
	SMSG_DEBUG("nelsonCloseFile")
}

void nelsonRSlashW(void) {
	SMSG_DEBUG("nelsonRSlashW")
}

void nelsonWSlashO(void) {
	SMSG_DEBUG("nelsonWSlashO")
}

void nelsonRSlashO(void) {
	SMSG_DEBUG("nelsonRSlashO")
}

void nelsonPage(void) {
	SMSG_DEBUG("nelsonPage")
}



void nelsonInternals(void) {
	SMSG_DEBUG("nelsonInternals")
}

void nelsonSealed(void) {
	SMSG_DEBUG("nelsonSealed")
}

void nelsonAlso(void) {
	SMSG_DEBUG("nelsonAlso")
}

void nelsonOnly(void) {
	SMSG_DEBUG("nelsonOnly")
}

void nelsonTransferLeftBrace(void) {
	SMSG_DEBUG("nelsonTransferLeftBrace")
}

void nelsonRightBraceTransfer(void) {
	SMSG_DEBUG("nelsonRightBraceTransfer")
}

void nelsonTransfer(void) {
	SMSG_DEBUG("nelsonTransfer")
}

void nelsonDefinitions(void) {
	SMSG_DEBUG("nelsonDefinitions")
}

void nelsonVocabulary(void) {
	SMSG_DEBUG("nelsonVocabulary")
}

void nelsonXif(void) {
	SMSG_DEBUG("nelsonXif")
}

void nelsonXElse(void) {
	SMSG_DEBUG("nelsonXElse")
}

void nelsonXThen(void) {
	SMSG_DEBUG("nelsonXThen")
}

void nelsonDefinedQ(void) {
	SMSG_DEBUG("nelsonDefinedQ")
}

void nelsonQuit(void) {
	SMSG_DEBUG("nelsonQuit")
}

void nelsonEvaluate(void) {
	SMSG_DEBUG("nelsonEvaluate")
}

void nelsonPrompt(void) {
	SMSG_DEBUG("nelsonPrompt")
}

void nelsonRefill(void) {
	SMSG_DEBUG("nelsonRefill")
}

void nelsonTib(void) {
	SMSG_DEBUG("nelsonTib")
}

void nelsonAccept(void) {
	SMSG_DEBUG("nelsonAccept")
}

void nelsonEcho(void) {
	SMSG_DEBUG("nelsonEcho")
}


void nelsonFill(void) {
	SMSG_DEBUG("nelsonFill")
}

void nelsonCMoveFrom(void) {
	SMSG_DEBUG("nelsonCMoveFrom")
}

void nelsonCMove(void) {
	SMSG_DEBUG("nelsonCMove")
}

void nelsonYGreaterS(void) {
	SMSG_DEBUG("nelsonYGreaterS")
}

void nelsonSGreaterZ(void) {
	SMSG_DEBUG("nelsonSGreaterZ")
}

void nelsonRVerticalBar(void) {
	SMSG_DEBUG("nelsonRVerticalBar")
}

void nelsonRQuote(void) {
	SMSG_DEBUG("nelsonRVerticalBar")
}

void nelsonYQuote(void) {
	SMSG_DEBUG("nelsonYQuote")
}

void nelsonDotQuote(void) {
	SMSG_DEBUG("nelsonDotQuote")
}

void nelsonSQuote(void) {
	SMSG_DEBUG("nelsonSQuote")
}

void nelsonDollarPlace(void) {
	SMSG_DEBUG("nelsonDollarPlace")
}

void nelsonNDot(void) {
	SMSG_DEBUG("nelsonNDot")
}

void nelsonQ(void) {
	SMSG_DEBUG("nelsonQ")
}

void nelsonDot(void) {
	SMSG_DEBUG("nelsonDot")
}

void nelsonUDot(void) {
	SMSG_DEBUG("nelsonUDot")
}

void nelsonBinary(void) {
	SMSG_DEBUG("nelsonBinary")
}

void nelsonDecimal(void) {
	SMSG_DEBUG("nelsonDecimal")
}

void nelsonOctal(void) {
	SMSG_DEBUG("nelsonOctal")
}

void nelsonHex(void) {
	SMSG_DEBUG("nelsonHex")
}

void nelsonStr(void) {
	SMSG_DEBUG("nelsonStr")
}

void nelsonNumFrom(void) {
	SMSG_DEBUG("nelsonNumFrom")
}

void nelsonSign(void) {
	SMSG_DEBUG("nelsonSign")
}

void nelsonNumS(void) {
	SMSG_DEBUG("nelsonNumS")
}

void nelsonNum(void) {
	SMSG_DEBUG("nelsonNum")
}

void nelsonHold(void) {
	SMSG_DEBUG("nelsonHold")
}

void nelsonLessNum(void) {
	SMSG_DEBUG("nelsonLessNum")
}

void nelsonExtract(void) {
	SMSG_DEBUG("nelsonExtractm")
}

void nelsonPad(void) {
	SMSG_DEBUG("nelsonPad")
}

void nelsonHld(void) {
	SMSG_DEBUG("nelsonHld")
}

void nelsonCr(void) {
	SMSG_DEBUG("nelsonCr")
}

void nelsonSpace(void) {
	SMSG_DEBUG("nelsonSpace")
}

void nelsonEmit(void) {
	SMSG_DEBUG("nelsonEmit")
}

void nelsonBye(void) {
	SMSG_DEBUG("nelsonBye")
}

void nelsonKeyQ(void) {
	SMSG_DEBUG("nelsonKeyQ")
}

void nelsonKey(void) {
	SMSG_DEBUG("nelsonKey")
}

void nelsonType(void) {
	SMSG_DEBUG("nelsonType")
}

void nelsonIs(void) {
	SMSG_DEBUG("nelsonIs")
}

void nelsonDefer(void) {
	SMSG_DEBUG("nelsonDefer")
}

void nelsonValue(void) {
	SMSG_DEBUG("nelsonValue")
}

void nelsonThrow(void) {
	SMSG_DEBUG("nelsonThrow")
}

void nelsonCatch(void) {
	SMSG_DEBUG("nelsonCatch")
}

void nelsonHandler(void) {
	SMSG_DEBUG("nelsonHandler")
}

void nelsonJ(void) {
	SMSG_DEBUG("nelsonJ")
}

void nelsonI(void) {
	SMSG_DEBUG("nelsonI")
}

void nelsonLoop(void) {
	SMSG_DEBUG("nelsonLoop")
}

void nelsonPlusLoop(void) {
	SMSG_DEBUG("nelsonPlusLoop")
}

void nelsonLeave(void) {
	SMSG_DEBUG("nelsonLeave")
}

void nelsonUnLoop(void) {
	SMSG_DEBUG("nelsonUnLoop")
}

void nelsonQDo(void) {
	SMSG_DEBUG("nelsonQDo")
}

void nelsonDo(void) {
	SMSG_DEBUG("nelsonDo")
}

void nelsonNext(void) {
	SMSG_DEBUG("nelsonNext")
}

void nelsonFor(void) {
	SMSG_DEBUG("nelsonFor")
}

void nelsonDepth(void) {
	SMSG_DEBUG("nelsonDepth")
}

void nelsonRP0(void) {
	SMSG_DEBUG("nelsonRP0")
}

void nelsonSP0(void) {
	SMSG_DEBUG("nelsonSP0")
}

void nelsonVariable(void) {
	SMSG_DEBUG("nelsonVariable")
}

void nelsonConstant(void) {
	SMSG_DEBUG("nelsonConstant")
}

void nelsonPostpone(void) {
	SMSG_DEBUG("nelsonPostpone")
}

void nelsonToBody(void) {
	SMSG_DEBUG("nelsonToBody")
}

void nelsonToFlags(void) {
	SMSG_DEBUG("nelsonToFlags")
}

void nelsonToLink(void) {
	SMSG_DEBUG("nelsonToLink")
}

void nelsonToLinkAmpersand(void) {
	SMSG_DEBUG("nelsonToLinkAmpersand")
}

void nelsonToName(void) {
	SMSG_DEBUG("nelsonToName")
}

void nelsonAbs(void) {
	SMSG_DEBUG("nelsonAbs")
}

void nelsonMax(void) {
	SMSG_DEBUG("nelsonMax")
}

void nelsonMin(void) {
	SMSG_DEBUG("nelsonMin")
}

void nelsonAft(void) {
	SMSG_DEBUG("nelsonAft")
}

void nelsonRepeat(void) {
	SMSG_DEBUG("nelsonRepeat")
}

void nelsonWhile(void) {
	SMSG_DEBUG("nelsonWhile")
}

void nelsonElse(void) {
	SMSG_DEBUG("nelsonElse")
}

void nelsonIf(void) {
	SMSG_DEBUG("nelsonIf")
}

void nelsonThen(void) {
	SMSG_DEBUG("nelsonThen")
}

void nelsonAhead(void) {
	SMSG_DEBUG("nelsonAhead")
}

void nelsonUntil(void) {
	SMSG_DEBUG("nelsonUntil")
}

void nelsonAgain(void) {
	SMSG_DEBUG("nelsonAgain")
}

void nelsonBegin(void) {
	SMSG_DEBUG("nelsonBegin")
}

void nelsonLiteral(void) {
	SMSG_DEBUG("nelsonLiteral")
}

void nelsonXChar(void) {
	SMSG_DEBUG("nelsonXChar")
}

void nelsonChar(void) {
	SMSG_DEBUG("nelsonChar")
}

void nelsonXNick(void) {
	SMSG_DEBUG("nelsonXNick")
}

void nelsonNick(void) {
	SMSG_DEBUG("nelsonNick")
}

void nelsonRightBracket(void) {
	SMSG_DEBUG("nelsonRightBracket")
}

void nelsonLeftBracket(void) {
	SMSG_DEBUG("nelsonLeftBracket")
}

void nelsonCComma(void) {
	SMSG_DEBUG("nelsonCComma")
}

void nelsonComma(void) {
	SMSG_DEBUG("nelsonComma")
}

void nelsonAlign(void) {
	SMSG_DEBUG("nelsonAlign")
}

void nelsonAligned(void) {
	SMSG_DEBUG("nelsonAligned")
}

void nelsonAllot(void) {
	SMSG_DEBUG("nelsonAllot")
}

void nelsonHere(void) {
	SMSG_DEBUG("nelsonHere")
}

void nelsonContext(void) {
	SMSG_DEBUG("nelsonContext")
}

void nelsonCurrent(void) {
	SMSG_DEBUG("nelsonCurrent")
}

void nelsonBase(void) {
	SMSG_DEBUG("nelsonBase")
}

void nelsonState(void) {
	SMSG_DEBUG("nelsonState")
}

void nelsonToIn(void) {
	SMSG_DEBUG("nelsonToIn")
}

void nelsonNumTib(void) {
	SMSG_DEBUG("nelsonNumTib")
}

void nelsonTickTib(void) {
	SMSG_DEBUG("nelsonTickTib")
}

void nelsonTwoStore(void) {
	SMSG_DEBUG("nelsonTwoStore")
}

void nelsonTwoFetch(void) {
	SMSG_DEBUG("nelsonTwoFetch")
}

void nelsonTwoDup(void) {
	SMSG_DEBUG("nelsonTwoDup")
}

void nelsonTwoDrop(void) {
	SMSG_DEBUG("nelsonTwoDrop")
}

void nelsonCellSlash(void) {
	SMSG_DEBUG("nelsonCellSlash")
}

void nelsonCells(void) {
	SMSG_DEBUG("nelsonCells")
}

void nelsonCellPlus(void) {
	SMSG_DEBUG("nelsonCellPlus")
}

void nelsonPlusStore(void) {
	SMSG_DEBUG("nelsonPlusStore")
}

void nelsonFourSlash(void) {
	SMSG_DEBUG("nelsonFourSlash")
}

void nelsonFourStar(void) {
	SMSG_DEBUG("nelsonFourStar")
}

void nelsonTwoSlash(void) {
	SMSG_DEBUG("nelsonTwoSlash")
}

void nelsonTwoStar(void) {
	SMSG_DEBUG("nelsonTwoStar")
}

void nelsonOneMinus(void) {
	SMSG_DEBUG("nelsonOneMinus")
}

void nelsonOnePlus(void) {
	SMSG_DEBUG("nelsonOnePlus")
}

void nelsonNl(void) {
	SMSG_DEBUG("nelsonNl")
}

void nelsonBl(void) {
	SMSG_DEBUG("nelsonBl")
}

void nelsonZeroUnequal(void) {
	SMSG_DEBUG("nelsonZeroUnequal")
}

void nelsonUnequal(void) {
	SMSG_DEBUG("nelsonUnequal")
}

void nelsonEqual(void) {
	SMSG_DEBUG("nelsonEqual")
}

void nelsonGreaterEqual(void) {
	SMSG_DEBUG("nelsonGreaterEqual")
}

void nelsonLessEqual(void) {
	SMSG_DEBUG("nelsonLessEqual")
}

void nelsonGreater(void) {
	SMSG_DEBUG("nelsonGreater")
}

void nelsonLess(void) {
	SMSG_DEBUG("nelsonLess")
}

void nelsonMinusRot(void) {
	SMSG_DEBUG("nelsonMinusRot")
}

void nelsonRot(void) {
	SMSG_DEBUG("nelsonRot")
}

void nelsonMinus(void) {
	SMSG_DEBUG("nelsonMinus")
}

void nelsonNegate(void) {
	SMSG_DEBUG("nelsonNegate")
}

void nelsonInvert(void) {
	SMSG_DEBUG("nelsonInvert")
}

void nelsonMod(void) {
	SMSG_DEBUG("nelsonMod")
}

void nelsonSlash(void) {
	SMSG_DEBUG("nelsonSlash")
}

void nelsonSlashMod(void) {
	SMSG_DEBUG("nelsonSlashMod")
}

void nelsonStar(void) {
	SMSG_DEBUG("nelsonStar")
}

void nelsonStarSlash(void) {
	SMSG_DEBUG("nelsonStarSlash")
}

void nelsonRDrop(void) {
	SMSG_DEBUG("nelsonRDrop")
}

void nelsonNip(void) {
	SMSG_DEBUG("nelsonNip")
}

void nelsonBackslash(void) {
	SMSG_DEBUG("nelsonBackslash")
}

void nelsonParen(void) {
	SMSG_DEBUG("nelsonParen")
}

void nelsonExit(void) {
	SMSG_DEBUG("nelsonExit")
}

void nelsonColon(void) {
	SMSG_DEBUG("nelsonColon")
}

void nelsonImmediate(void) {
	SMSG_DEBUG("nelsonImmediate")
}

void nelsonDoes(void) {
	SMSG_DEBUG("nelsonDoes")
}

void nelsonCreate(void) {
	SMSG_DEBUG("nelsonCreate")
}

void nelsonSGreaterNumberQ(void) {
	SMSG_DEBUG("nelsonSGreaterNumberQ")
}

void nelsonParse(void) {
	SMSG_DEBUG("nelsonParse")
}

void nelsonFind(void) {
	SMSG_DEBUG("nelsonFind")
}

void nelsonCell(void) {
	SMSG_DEBUG("nelsonCell")
}

void nelsonExecute(void) {
	SMSG_DEBUG("nelsonExecute")
}

void nelsonRFetch(void) {
	SMSG_DEBUG("nelsonRFetch")
}

void nelsonRFrom(void) {
	SMSG_DEBUG("nelsonRFrom")
}

void nelsonToR(void) {
	SMSG_DEBUG("nelsonToR")
}

void nelsonRPStore(void) {
	SMSG_DEBUG("nelsonRPStore")
}

void nelsonRPFetch(void) {
	SMSG_DEBUG("nelsonRPFetch")
}

void nelsonSPStore(void) {
	SMSG_DEBUG("nelsonSPStore")
}

void nelsonSPFetch(void) {
	SMSG_DEBUG("nelsonSPFetch")
}

void nelsonCStore(void) {
	SMSG_DEBUG("nelsonCStore")
}

void nelsonLStore(void) {
	SMSG_DEBUG("nelsonLStore")
}

void nelsonStore(void) {
	SMSG_DEBUG("nelsonStore")
}

void nelsonCFetch(void) {
	SMSG_DEBUG("nelsonCFetch")
}

void nelsonLFetch(void) {
	SMSG_DEBUG("nelsonLFetch")
}

void nelsonFetch(void) {
	SMSG_DEBUG("nelsonFetch")
}

void nelsonDrop(void) {
	SMSG_DEBUG("nelsonDrop")
}

void nelsonOver(void) {
	SMSG_DEBUG("nelsonOver")
}

void nelsonSwap(void) {
	SMSG_DEBUG("nelsonSwap")
}

void nelsonDup(void) {
	SMSG_DEBUG("nelsonDup")
}

void nelsonXor(void) {
	SMSG_DEBUG("nelsonXor")
}

void nelsonOr(void) {
	SMSG_DEBUG("nelsonOr")
}

void nelsonAnd(void) {
	SMSG_DEBUG("nelsonAnd")
}

void nelsonRShift(void) {
	SMSG_DEBUG("nelsonRShift")
}

void nelsonLShift(void) {
	SMSG_DEBUG("nelsonLShift")
}

void nelsonStarSlashMod(void) {
	SMSG_DEBUG("nelsonStarSlashMod")
}

void nelsonUSlashMod(void) {
	SMSG_DEBUG("nelsonUSlashMod")
}

void nelsonPlus(void) {
	SMSG_DEBUG("nelsonPlus")
}

void nelsonZeroLess(void) {
	SMSG_DEBUG("nelsonZeroLess")
}

void nelsonZeroEqual(void) {
	SMSG_DEBUG("nelsonZeroEqual")
}

#endif


#if H2O_FORTH_PRIMITIVES == NELSON_FORTH || \
	H2O_FORTH_PRIMITIVES == NELSON_UE_FORTH

void nelsonYLocal(void) {
	SMSG_DEBUG("nelsonYLocal")
}

void nelsonProcessHeap(void) {
	SMSG_DEBUG("nelsonProcessHeap")
}

void nelsonHeapReAlloc(void) {
	SMSG_DEBUG("nelsonHeapReAlloc")
}

void nelsonHeapFree(void) {
	SMSG_DEBUG("nelsonHeapFree")
}

void nelsonHeapAlloc(void) {
	SMSG_DEBUG("nelsonHeapAlloc")
}

void nelsonGetProcessHeap(void) {
	SMSG_DEBUG("nelsonGetProcessHeap")
}

void nelsonRenameFile(void) {
	SMSG_DEBUG("nelsonRenameFile")
}

void nelsonWindows(void) {
	SMSG_DEBUG("nelsonWindows")
}

void nelsonFDotS(void) {
	SMSG_DEBUG("nelsonFDotS")
}

void nelsonFDot(void) {
	SMSG_DEBUG("nelsonFDot")
}

void nelsonNumFS(void) {
	SMSG_DEBUG("nelsonNumFS")
}

void nelsonSetPrecision(void) {
	SMSG_DEBUG("nelsonSetPrecision")
}

void nelsonPrecision(void) {
	SMSG_DEBUG("nelsonPrecision")
}

void nelsonFSqrt(void) {
	SMSG_DEBUG("nelsonFSqrt")
}

void nelsonPi(void) {
	SMSG_DEBUG("nelsonPi")
}

void nelsonFVariable(void) {
	SMSG_DEBUG("nelsonFVariable")
}

void nelsonFConstant(void) {
	SMSG_DEBUG("nelsonFConstant")
}

void nelsonFLiteral(void) {
	SMSG_DEBUG("nelsonFLiteral")
}

void nelsonAFLiteral(void) {
	SMSG_DEBUG("nelsonAFLiteral")
}

void nelsonSFComma(void) {
	SMSG_DEBUG("nelsonSFComma")
}

void nelsonSFloatPlus(void) {
	SMSG_DEBUG("nelsonSFloatPlus")
}

void nelsonSFloats(void) {
	SMSG_DEBUG("nelsonSFloats")
}

void nelsonSFloat(void) {
	SMSG_DEBUG("nelsonSFloat")
}

void nelsonSFGreaterEqual(void) {
	SMSG_DEBUG("nelsonSFGreaterEqual")
}

void nelsonSFLessEqual(void) {
	SMSG_DEBUG("nelsonSFLessEqual")
}

void nelsonSFUnequal(void) {
	SMSG_DEBUG("nelsonSFUnequal")
}

void nelsonSFGreater(void) {
	SMSG_DEBUG("nelsonSFGreater")
}

void nelsonSFLess(void) {
	SMSG_DEBUG("nelsonSFLess")
}

void nelsonSFEqual(void) {
	SMSG_DEBUG("nelsonSFEqual")
}

void nelsonAtXy(void) {
	SMSG_DEBUG("nelsonAtXy")
}

void nelsonNormal(void) {
	SMSG_DEBUG("nelsonNormal")
}

void nelsonBg(void) {
	SMSG_DEBUG("nelsonBg")
}

void nelsonFg(void) {
	SMSG_DEBUG("nelsonFg")
}

void nelsonAnsi(void) {
	SMSG_DEBUG("nelsonAnsi")
}

void nelsonBlank(void) {
	SMSG_DEBUG("nelsonBlank")
}

void nelsonErase(void) {
	SMSG_DEBUG("nelsonErase")
}

void nelsonYPlace(void) {
	SMSG_DEBUG("nelsonYPlace")
}

void nelsonValueBins(void) {
	SMSG_DEBUG("nelsonValueBins")
}

void nelsonNestDepth(void) {
	SMSG_DEBUG("nelsonNestDepth")
}

void nelsonFDepth(void) {
	SMSG_DEBUG("nelsonFDepth")
}

void nelsonFP0(void) {
	SMSG_DEBUG("nelsonFP0")
}

void nelsonRecurse(void) {
	SMSG_DEBUG("nelsonRecurse")
}

void nelsonYield(void) {
	SMSG_DEBUG("nelsonYield")
}

void nelsonFGreaterNumberQ(void) {
	SMSG_DEBUG("nelsonFGreaterNumberQ")
}

void nelsonFToS(void) {
	SMSG_DEBUG("nelsonFToS")
}

void nelsonSToF(void) {
	SMSG_DEBUG("nelsonSToF")
}

void nelsonOneSlashF(void) {
	SMSG_DEBUG("nelsonOneSlashF")
}

void nelsonFSlash(void) {
	SMSG_DEBUG("nelsonFSlash")
}

void nelsonFStar(void) {
	SMSG_DEBUG("nelsonFStar")
}

void nelsonFMinus(void) {
	SMSG_DEBUG("nelsonFMinus")
}

void nelsonFPlus(void) {
	SMSG_DEBUG("nelsonFPlus")
}

void nelsonF0Equal(void) {
	SMSG_DEBUG("nelsonF0Equal")
}

void nelsonF0Less(void) {
	SMSG_DEBUG("nelsonF0Less")
}

void nelsonFNegate(void) {
	SMSG_DEBUG("nelsonFNegate")
}

void nelsonFswa(void) {
	SMSG_DEBUG("nelsonFswa")
}

void nelsonFOver(void) {
	SMSG_DEBUG("nelsonFOver")
}

void nelsonFDrop(void) {
	SMSG_DEBUG("nelsonFDrop")
}

void nelsonFNip(void) {
	SMSG_DEBUG("nelsonFNip")
}

void nelsonFDup(void) {
	SMSG_DEBUG("nelsonFDup")
}

void nelsonSFStore(void) {
	SMSG_DEBUG("nelsonSFStore")
}

void nelsonSFFetch(void) {
	SMSG_DEBUG("nelsonSFFetch")
}

void nelsonSF(void) {
	SMSG_DEBUG("nelsonSF")
}

void nelsonFPStore(void) {
	SMSG_DEBUG("nelsonFPStore")
}

void nelsonFPFetch(void) {
	SMSG_DEBUG("nelsonFPFetch")
}

void nelsonLoadLibraryA(void) {
	SMSG_DEBUG("nelsonLoadLibraryA")
}

void nelsonGetProcAddress(void) {
	SMSG_DEBUG("nelsonGetProcAddress")
}


#endif


#if H2O_FORTH_PRIMITIVES == NELSON_FORTH || \
	H2O_FORTH_PRIMITIVES == NELSON_ESP_FORTH

void nelsonTelnetD(void) {
	SMSG_DEBUG("nelsonTelnetD")
}

void nelsonBTerm(void) {
	SMSG_DEBUG("nelsonBTerm")
}

void nelsonTimers(void) {
	SMSG_DEBUG("nelsonTimers")
}

void nelsonRegisters(void) {
	SMSG_DEBUG("nelsonRegisters")
}

void nelsonWebUI(void) {
	SMSG_DEBUG("nelsonWebUI")
}

void nelsonLogin(void) {
	SMSG_DEBUG("nelsonLogin")
}

void nelsonWebInterface(void) {
	SMSG_DEBUG("nelsonWebInterface")
}

void nelsonRtos(void) {
	SMSG_DEBUG("nelsonRtos")
}

void nelsonInterrupts(void) {
	SMSG_DEBUG("nelsonInterrupts")
}

void nelsonSockets(void) {
	SMSG_DEBUG("nelsonSockets")
}

void nelsonSerial(void) {
	SMSG_DEBUG("nelsonSerial")
}

void nelsonLedC(void) {
	SMSG_DEBUG("nelsonLedC")
}

void nelsonSpiffs(void) {
	SMSG_DEBUG("nelsonSpiffs")
}

void nelsonSdMmc(void) {
	SMSG_DEBUG("nelsonSdMmc")
}

void nelsonWifi(void) {
	SMSG_DEBUG("nelsonWifi")
}

void nelsonWebserver(void) {
	SMSG_DEBUG("nelsonWebserver")
}

void nelsonWire(void) {
	SMSG_DEBUG("nelsonWire")
}

void nelsonLed(void) {
	SMSG_DEBUG("nelsonLed")
}

void nelsonOutput(void) {
	SMSG_DEBUG("nelsonOutput")
}

void nelsonInput(void) {
	SMSG_DEBUG("nelsonInput")
}

void nelsonHigh(void) {
	SMSG_DEBUG("nelsonHigh")
}

void nelsonLow(void) {
	SMSG_DEBUG("nelsonLow")
}

void nelsonTone(void) {
	SMSG_DEBUG("nelsonTone")
}

void nelsonFreq(void) {
	SMSG_DEBUG("nelsonFreq")
}

void nelsonDuty(void) {
	SMSG_DEBUG("nelsonDuty")
}

void nelsonAdc(void) {
	SMSG_DEBUG("nelsonAdc")
}

void nelsonPin(void) {
	SMSG_DEBUG("nelsonPin")
}

void nelsonTimerIsrRegister(void) {
	SMSG_DEBUG("nelsonTimerIsrRegister")
}

void nelsonSdMmcDotBegin(void) {
	SMSG_DEBUG("nelsonSdMmcDotBegin")
}

void nelsonMdnsDotBegin(void) {
	SMSG_DEBUG("nelsonMdnsDotBegin")
}

void nelsonBin(void) {
	SMSG_DEBUG("nelsonBin")
}

void nelsonTerminate(void) {
	SMSG_DEBUG("nelsonTerminate")
}

void nelsonMSTicks(void) {
	SMSG_DEBUG("nelsonMSTicks")
}

void nelsonDacWrite(void) {
	SMSG_DEBUG("nelsonDacWrite")
}

void nelsonPulsIn(void) {
	SMSG_DEBUG("nelsonPulsIn")
}

void nelsonAnalogRead(void) {
	SMSG_DEBUG("nelsonAnalogRead")
}

void nelsonDigitalRead(void) {
	SMSG_DEBUG("nelsonDigitalRead")
}

void nelsonDigitalWrite(void) {
	SMSG_DEBUG("nelsonDigitalWrite")
}

void nelsonPinMode(void) {
	SMSG_DEBUG("nelsonPinMode")
}

#endif

#endif
