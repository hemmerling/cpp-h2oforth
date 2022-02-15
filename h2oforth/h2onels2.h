#ifndef H2ONELS2
#define H2ONELS2

/* Brad Nelson's "ESP32Forth v.7.05" & "MicroEforth ( uEForth ) 7.0.6.9" FORTHs */

/* Primitives */

#if H2O_FORTH_PRIMITIVES == NELSON_FORTH || \
	H2O_FORTH_PRIMITIVES == NELSON_ESP_FORTH || \
	H2O_FORTH_PRIMITIVES == NELSON_UE_FORTH
void nelsonForth(void) {
	DEBUG_WORD("nelsonForth")
}

void nelsonTo(void) {
	DEBUG_WORD("nelsonTo")
}

void nelsonPlusTo(void) {
	DEBUG_WORD("nelsonPlusTo")
}

void nelsonSemicolon(void) {
	DEBUG_WORD("nelsonSemicolon")
}

void nelsonLeftBrace(void) {
	DEBUG_WORD("nelsonLeftBrace")
}

void nelsonEditor(void) {
	DEBUG_WORD("nelsonEditor")
}

void nelsonList(void) {
	DEBUG_WORD("nelsonList")
}

void nelsonCopy(void) {
	DEBUG_WORD("nelsonCopy")
}

void nelsonThru(void) {
	DEBUG_WORD("nelsonThru")
}

void nelsonLoad(void) {
	DEBUG_WORD("nelsonLoad")
}

void nelsonFlush(void) {
	DEBUG_WORD("nelsonFlush")
}

void nelsonUpdate(void) {
	DEBUG_WORD("nelsonUpdate")
}

void nelsonEmptyBuffers(void) {
	DEBUG_WORD("nelsonEmptyBuffers")
}

void nelsonBuffer(void) {
	DEBUG_WORD("nelsonBuffer")
}

void nelsonBlock(void) {
	DEBUG_WORD("nelsonBlock")
}

void nelsonSaveBuffers(void) {
	DEBUG_WORD("nelsonBlock")
}

void nelsonDefaultUse(void) {
	DEBUG_WORD("nelsonDefaultUse")
}

void nelsonUse(void) {
	DEBUG_WORD("nelsonUse")
}

void nelsonOpenBlocks(void) {
	DEBUG_WORD("nelsonOpenBlocks")
}

void nelsonBlockId(void) {
	DEBUG_WORD("nelsonBlockId")
}

void nelsonScr(void) {
	DEBUG_WORD("nelsonScr")
}

void nelsonBlockFid(void) {
	DEBUG_WORD("nelsonBlockFid")
}

void nelsonStreams(void) {
	DEBUG_WORD("nelsonStreams")
}

void nelsonReset(void) {
	DEBUG_WORD("nelsonReset")
}

void nelsonRevive(void) {
	DEBUG_WORD("nelsonRevive")
}

void nelsonStartup(void) {
	DEBUG_WORD("nelsonStartup")
}

void nelsonRemember(void) {
	DEBUG_WORD("nelsonRemember")
}

void nelsonRestore(void) {
	DEBUG_WORD("nelsonRestore")
}

void nelsonSave(void) {
	DEBUG_WORD("nelsonSave")
}

void nelsonDumpFile(void) {
	DEBUG_WORD("nelsonDumpFile")
}

void nelsonWords(void) {
	DEBUG_WORD("nelsonWords")
}

void nelsonVlist(void) {
	DEBUG_WORD("nelsonWords")
}

void nelsonOrder(void) {
	DEBUG_WORD("nelsonOrder")
}

void nelsonSee(void) {
	DEBUG_WORD("nelsonSee")
}

void nelsonDotS(void) {
	DEBUG_WORD("nelsonDotS")
}

void nelsonStartsWithQ(void) {
	DEBUG_WORD("nelsonStartsWithQ")
}

void nelsonStrEqual(void) {
	DEBUG_WORD("nelsonStrEqual")
}

void nelsonColonNoname(void) {
	DEBUG_WORD("nelsonColonNoname")
}

void nelsonSmudge(void) {
	DEBUG_WORD("nelsonSmudge")
}

void nelsonForget(void) {
	DEBUG_WORD("nelsonForget")
}

void nelsonDump(void) {
	DEBUG_WORD("nelsonDump")
}

void nelsonAssert(void) {
	DEBUG_WORD("nelsonAssert")
}

void nelsonStartTask(void) {
	DEBUG_WORD("nelsonStartTask")
}

void nelsonTask(void) {
	DEBUG_WORD("nelsonTask")
}

void nelsonPause(void) {
	DEBUG_WORD("nelsonPause")
}

void nelsonTasks(void) {
	DEBUG_WORD("nelsonTasks")
}

void nelsonInclude(void) {
	DEBUG_WORD("nelsonInclude")
}

void nelsonIncluded(void) {
	DEBUG_WORD("nelsonIncluded")
}

void nelsonResize(void) {
	DEBUG_WORD("nelsonResize")
}

void nelsonFree(void) {
	DEBUG_WORD("nelsonFree")
}

void nelsonAllocate(void) {
	DEBUG_WORD("nelsonAllocate")
}

void nelsonOk(void) {
	DEBUG_WORD("nelsonOk")
}

void nelsonMs(void) {
	DEBUG_WORD("nelsonMs")
}

void nelsonFileSize(void) {
	DEBUG_WORD("nelsonFileSize")
}

void nelsonResizeFile(void) {
	DEBUG_WORD("nelsonResizeFile")
}

void nelsonRepositionFile(void) {
	DEBUG_WORD("nelsonRepositionFile")
}

void nelsonFilePosition(void) {
	DEBUG_WORD("nelsonFilePosition")
}

void nelsonReadFile(void) {
	DEBUG_WORD("nelsonReadFile")
}

void nelsonWriteFile(void) {
	DEBUG_WORD("nelsonWriteFile")
}

void nelsonDeleteFile(void) {
	DEBUG_WORD("nelsonDeleteFile")
}

void nelsonCreateFile(void) {
	DEBUG_WORD("nelsonCreateFile")
}

void nelsonOpenFile(void) {
	DEBUG_WORD("nelsonOpenFile")
}

void nelsonFlushFile(void) {
	DEBUG_WORD("nelsonFlushFile")
}

void nelsonCloseFile(void) {
	DEBUG_WORD("nelsonCloseFile")
}

void nelsonRSlashW(void) {
	DEBUG_WORD("nelsonRSlashW")
}

void nelsonWSlashO(void) {
	DEBUG_WORD("nelsonWSlashO")
}

void nelsonRSlashO(void) {
	DEBUG_WORD("nelsonRSlashO")
}

void nelsonPage(void) {
	DEBUG_WORD("nelsonPage")
}



void nelsonInternals(void) {
	DEBUG_WORD("nelsonInternals")
}

void nelsonSealed(void) {
	DEBUG_WORD("nelsonSealed")
}

void nelsonAlso(void) {
	DEBUG_WORD("nelsonAlso")
}

void nelsonOnly(void) {
	DEBUG_WORD("nelsonOnly")
}

void nelsonTransferLeftBrace(void) {
	DEBUG_WORD("nelsonTransferLeftBrace")
}

void nelsonRightBraceTransfer(void) {
	DEBUG_WORD("nelsonRightBraceTransfer")
}

void nelsonTransfer(void) {
	DEBUG_WORD("nelsonTransfer")
}

void nelsonDefinitions(void) {
	DEBUG_WORD("nelsonDefinitions")
}

void nelsonVocabulary(void) {
	DEBUG_WORD("nelsonVocabulary")
}

void nelsonXif(void) {
	DEBUG_WORD("nelsonXif")
}

void nelsonXElse(void) {
	DEBUG_WORD("nelsonXElse")
}

void nelsonXThen(void) {
	DEBUG_WORD("nelsonXThen")
}

void nelsonDefinedQ(void) {
	DEBUG_WORD("nelsonDefinedQ")
}

void nelsonQuit(void) {
	DEBUG_WORD("nelsonQuit")
}

void nelsonEvaluate(void) {
	DEBUG_WORD("nelsonEvaluate")
}

void nelsonPrompt(void) {
	DEBUG_WORD("nelsonPrompt")
}

void nelsonRefill(void) {
	DEBUG_WORD("nelsonRefill")
}

void nelsonTib(void) {
	DEBUG_WORD("nelsonTib")
}

void nelsonAccept(void) {
	DEBUG_WORD("nelsonAccept")
}

void nelsonEcho(void) {
	DEBUG_WORD("nelsonEcho")
}


void nelsonFill(void) {
	DEBUG_WORD("nelsonFill")
}

void nelsonCMoveFrom(void) {
	DEBUG_WORD("nelsonCMoveFrom")
}

void nelsonCMove(void) {
	DEBUG_WORD("nelsonCMove")
}

void nelsonYGreaterS(void) {
	DEBUG_WORD("nelsonYGreaterS")
}

void nelsonSGreaterZ(void) {
	DEBUG_WORD("nelsonSGreaterZ")
}

void nelsonRVerticalBar(void) {
	DEBUG_WORD("nelsonRVerticalBar")
}

void nelsonRQuote(void) {
	DEBUG_WORD("nelsonRVerticalBar")
}

void nelsonYQuote(void) {
	DEBUG_WORD("nelsonYQuote")
}

void nelsonDotQuote(void) {
	DEBUG_WORD("nelsonDotQuote")
}

void nelsonSQuote(void) {
	DEBUG_WORD("nelsonSQuote")
}

void nelsonDollarPlace(void) {
	DEBUG_WORD("nelsonDollarPlace")
}

void nelsonNDot(void) {
	DEBUG_WORD("nelsonNDot")
}

void nelsonQ(void) {
	DEBUG_WORD("nelsonQ")
}

void nelsonDot(void) {
	DEBUG_WORD("nelsonDot")
}

void nelsonUDot(void) {
	DEBUG_WORD("nelsonUDot")
}

void nelsonBinary(void) {
	DEBUG_WORD("nelsonBinary")
}

void nelsonDecimal(void) {
	DEBUG_WORD("nelsonDecimal")
}

void nelsonOctal(void) {
	DEBUG_WORD("nelsonOctal")
}

void nelsonHex(void) {
	DEBUG_WORD("nelsonHex")
}

void nelsonStr(void) {
	DEBUG_WORD("nelsonStr")
}

void nelsonNumFrom(void) {
	DEBUG_WORD("nelsonNumFrom")
}

void nelsonSign(void) {
	DEBUG_WORD("nelsonSign")
}

void nelsonNumS(void) {
	DEBUG_WORD("nelsonNumS")
}

void nelsonNum(void) {
	DEBUG_WORD("nelsonNum")
}

void nelsonHold(void) {
	DEBUG_WORD("nelsonHold")
}

void nelsonLessNum(void) {
	DEBUG_WORD("nelsonLessNum")
}

void nelsonExtract(void) {
	DEBUG_WORD("nelsonExtractm")
}

void nelsonPad(void) {
	DEBUG_WORD("nelsonPad")
}

void nelsonHld(void) {
	DEBUG_WORD("nelsonHld")
}

void nelsonCr(void) {
	DEBUG_WORD("nelsonCr")
}

void nelsonSpace(void) {
	DEBUG_WORD("nelsonSpace")
}

void nelsonEmit(void) {
	DEBUG_WORD("nelsonEmit")
}

void nelsonBye(void) {
	DEBUG_WORD("nelsonBye")
}

void nelsonKeyQ(void) {
	DEBUG_WORD("nelsonKeyQ")
}

void nelsonKey(void) {
	DEBUG_WORD("nelsonKey")
}

void nelsonType(void) {
	DEBUG_WORD("nelsonType")
}

void nelsonIs(void) {
	DEBUG_WORD("nelsonIs")
}

void nelsonDefer(void) {
	DEBUG_WORD("nelsonDefer")
}

void nelsonValue(void) {
	DEBUG_WORD("nelsonValue")
}

void nelsonThrow(void) {
	DEBUG_WORD("nelsonThrow")
}

void nelsonCatch(void) {
	DEBUG_WORD("nelsonCatch")
}

void nelsonHandler(void) {
	DEBUG_WORD("nelsonHandler")
}

void nelsonJ(void) {
	DEBUG_WORD("nelsonJ")
}

void nelsonI(void) {
	DEBUG_WORD("nelsonI")
}

void nelsonLoop(void) {
	DEBUG_WORD("nelsonLoop")
}

void nelsonPlusLoop(void) {
	DEBUG_WORD("nelsonPlusLoop")
}

void nelsonLeave(void) {
	DEBUG_WORD("nelsonLeave")
}

void nelsonUnLoop(void) {
	DEBUG_WORD("nelsonUnLoop")
}

void nelsonQDo(void) {
	DEBUG_WORD("nelsonQDo")
}

void nelsonDo(void) {
	DEBUG_WORD("nelsonDo")
}

void nelsonNext(void) {
	DEBUG_WORD("nelsonNext")
}

void nelsonFor(void) {
	DEBUG_WORD("nelsonFor")
}

void nelsonDepth(void) {
	DEBUG_WORD("nelsonDepth")
}

void nelsonRP0(void) {
	DEBUG_WORD("nelsonRP0")
}

void nelsonSP0(void) {
	DEBUG_WORD("nelsonSP0")
}

void nelsonVariable(void) {
	DEBUG_WORD("nelsonVariable")
}

void nelsonConstant(void) {
	DEBUG_WORD("nelsonConstant")
}

void nelsonPostpone(void) {
	DEBUG_WORD("nelsonPostpone")
}

void nelsonToBody(void) {
	DEBUG_WORD("nelsonToBody")
}

void nelsonToFlags(void) {
	DEBUG_WORD("nelsonToFlags")
}

void nelsonToLink(void) {
	DEBUG_WORD("nelsonToLink")
}

void nelsonToLinkAmpersand(void) {
	DEBUG_WORD("nelsonToLinkAmpersand")
}

void nelsonToName(void) {
	DEBUG_WORD("nelsonToName")
}

void nelsonAbs(void) {
	DEBUG_WORD("nelsonAbs")
}

void nelsonMax(void) {
	DEBUG_WORD("nelsonMax")
}

void nelsonMin(void) {
	DEBUG_WORD("nelsonMin")
}

void nelsonAft(void) {
	DEBUG_WORD("nelsonAft")
}

void nelsonRepeat(void) {
	DEBUG_WORD("nelsonRepeat")
}

void nelsonWhile(void) {
	DEBUG_WORD("nelsonWhile")
}

void nelsonElse(void) {
	DEBUG_WORD("nelsonElse")
}

void nelsonIf(void) {
	DEBUG_WORD("nelsonIf")
}

void nelsonThen(void) {
	DEBUG_WORD("nelsonThen")
}

void nelsonAhead(void) {
	DEBUG_WORD("nelsonAhead")
}

void nelsonUntil(void) {
	DEBUG_WORD("nelsonUntil")
}

void nelsonAgain(void) {
	DEBUG_WORD("nelsonAgain")
}

void nelsonBegin(void) {
	DEBUG_WORD("nelsonBegin")
}

void nelsonLiteral(void) {
	DEBUG_WORD("nelsonLiteral")
}

void nelsonXChar(void) {
	DEBUG_WORD("nelsonXChar")
}

void nelsonChar(void) {
	DEBUG_WORD("nelsonChar")
}

void nelsonXNick(void) {
	DEBUG_WORD("nelsonXNick")
}

void nelsonNick(void) {
	DEBUG_WORD("nelsonNick")
}

void nelsonRightBracket(void) {
	DEBUG_WORD("nelsonRightBracket")
}

void nelsonLeftBracket(void) {
	DEBUG_WORD("nelsonLeftBracket")
}

void nelsonCComma(void) {
	DEBUG_WORD("nelsonCComma")
}

void nelsonComma(void) {
	DEBUG_WORD("nelsonComma")
}

void nelsonAlign(void) {
	DEBUG_WORD("nelsonAlign")
}

void nelsonAligned(void) {
	DEBUG_WORD("nelsonAligned")
}

void nelsonAllot(void) {
	DEBUG_WORD("nelsonAllot")
}

void nelsonHere(void) {
	DEBUG_WORD("nelsonHere")
}

void nelsonContext(void) {
	DEBUG_WORD("nelsonContext")
}

void nelsonCurrent(void) {
	DEBUG_WORD("nelsonCurrent")
}

void nelsonBase(void) {
	DEBUG_WORD("nelsonBase")
}

void nelsonState(void) {
	DEBUG_WORD("nelsonState")
}

void nelsonToIn(void) {
	DEBUG_WORD("nelsonToIn")
}

void nelsonNumTib(void) {
	DEBUG_WORD("nelsonNumTib")
}

void nelsonTickTib(void) {
	DEBUG_WORD("nelsonTickTib")
}

void nelsonTwoStore(void) {
	DEBUG_WORD("nelsonTwoStore")
}

void nelsonTwoFetch(void) {
	DEBUG_WORD("nelsonTwoFetch")
}

void nelsonTwoDup(void) {
	DEBUG_WORD("nelsonTwoDup")
}

void nelsonTwoDrop(void) {
	DEBUG_WORD("nelsonTwoDrop")
}

void nelsonCellSlash(void) {
	DEBUG_WORD("nelsonCellSlash")
}

void nelsonCells(void) {
	DEBUG_WORD("nelsonCells")
}

void nelsonCellPlus(void) {
	DEBUG_WORD("nelsonCellPlus")
}

void nelsonPlusStore(void) {
	DEBUG_WORD("nelsonPlusStore")
}

void nelsonFourSlash(void) {
	DEBUG_WORD("nelsonFourSlash")
}

void nelsonFourStar(void) {
	DEBUG_WORD("nelsonFourStar")
}

void nelsonTwoSlash(void) {
	DEBUG_WORD("nelsonTwoSlash")
}

void nelsonTwoStar(void) {
	DEBUG_WORD("nelsonTwoStar")
}

void nelsonOneMinus(void) {
	DEBUG_WORD("nelsonOneMinus")
}

void nelsonOnePlus(void) {
	DEBUG_WORD("nelsonOnePlus")
}

void nelsonNl(void) {
	DEBUG_WORD("nelsonNl")
}

void nelsonBl(void) {
	DEBUG_WORD("nelsonBl")
}

void nelsonZeroUnequal(void) {
	DEBUG_WORD("nelsonZeroUnequal")
}

void nelsonUnequal(void) {
	DEBUG_WORD("nelsonUnequal")
}

void nelsonEqual(void) {
	DEBUG_WORD("nelsonEqual")
}

void nelsonGreaterEqual(void) {
	DEBUG_WORD("nelsonGreaterEqual")
}

void nelsonLessEqual(void) {
	DEBUG_WORD("nelsonLessEqual")
}

void nelsonGreater(void) {
	DEBUG_WORD("nelsonGreater")
}

void nelsonLess(void) {
	DEBUG_WORD("nelsonLess")
}

void nelsonMinusRot(void) {
	DEBUG_WORD("nelsonMinusRot")
}

void nelsonRot(void) {
	DEBUG_WORD("nelsonRot")
}

void nelsonMinus(void) {
	DEBUG_WORD("nelsonMinus")
}

void nelsonNegate(void) {
	DEBUG_WORD("nelsonNegate")
}

void nelsonInvert(void) {
	DEBUG_WORD("nelsonInvert")
}

void nelsonMod(void) {
	DEBUG_WORD("nelsonMod")
}

void nelsonSlash(void) {
	DEBUG_WORD("nelsonSlash")
}

void nelsonSlashMod(void) {
	DEBUG_WORD("nelsonSlashMod")
}

void nelsonStar(void) {
	DEBUG_WORD("nelsonStar")
}

void nelsonStarSlash(void) {
	DEBUG_WORD("nelsonStarSlash")
}

void nelsonRDrop(void) {
	DEBUG_WORD("nelsonRDrop")
}

void nelsonNip(void) {
	DEBUG_WORD("nelsonNip")
}

void nelsonBackslash(void) {
	DEBUG_WORD("nelsonBackslash")
}

void nelsonParen(void) {
	DEBUG_WORD("nelsonParen")
}

void nelsonExit(void) {
	DEBUG_WORD("nelsonExit")
}

void nelsonColon(void) {
	DEBUG_WORD("nelsonColon")
}

void nelsonImmediate(void) {
	DEBUG_WORD("nelsonImmediate")
}

void nelsonDoes(void) {
	DEBUG_WORD("nelsonDoes")
}

void nelsonCreate(void) {
	DEBUG_WORD("nelsonCreate")
}

void nelsonSGreaterNumberQ(void) {
	DEBUG_WORD("nelsonSGreaterNumberQ")
}

void nelsonParse(void) {
	DEBUG_WORD("nelsonParse")
}

void nelsonFind(void) {
	DEBUG_WORD("nelsonFind")
}

void nelsonCell(void) {
	DEBUG_WORD("nelsonCell")
}

void nelsonExecute(void) {
	DEBUG_WORD("nelsonExecute")
}

void nelsonRFetch(void) {
	DEBUG_WORD("nelsonRFetch")
}

void nelsonRFrom(void) {
	DEBUG_WORD("nelsonRFrom")
}

void nelsonToR(void) {
	DEBUG_WORD("nelsonToR")
}

void nelsonRPStore(void) {
	DEBUG_WORD("nelsonRPStore")
}

void nelsonRPFetch(void) {
	DEBUG_WORD("nelsonRPFetch")
}

void nelsonSPStore(void) {
	DEBUG_WORD("nelsonSPStore")
}

void nelsonSPFetch(void) {
	DEBUG_WORD("nelsonSPFetch")
}

void nelsonCStore(void) {
	DEBUG_WORD("nelsonCStore")
}

void nelsonLStore(void) {
	DEBUG_WORD("nelsonLStore")
}

void nelsonStore(void) {
	DEBUG_WORD("nelsonStore")
}

void nelsonCFetch(void) {
	DEBUG_WORD("nelsonCFetch")
}

void nelsonLFetch(void) {
	DEBUG_WORD("nelsonLFetch")
}

void nelsonFetch(void) {
	DEBUG_WORD("nelsonFetch")
}

void nelsonDrop(void) {
	DEBUG_WORD("nelsonDrop")
}

void nelsonOver(void) {
	DEBUG_WORD("nelsonOver")
}

void nelsonSwap(void) {
	DEBUG_WORD("nelsonSwap")
}

void nelsonDup(void) {
	DEBUG_WORD("nelsonDup")
}

void nelsonXor(void) {
	DEBUG_WORD("nelsonXor")
}

void nelsonOr(void) {
	DEBUG_WORD("nelsonOr")
}

void nelsonAnd(void) {
	DEBUG_WORD("nelsonAnd")
}

void nelsonRShift(void) {
	DEBUG_WORD("nelsonRShift")
}

void nelsonLShift(void) {
	DEBUG_WORD("nelsonLShift")
}

void nelsonStarSlashMod(void) {
	DEBUG_WORD("nelsonStarSlashMod")
}

void nelsonUSlashMod(void) {
	DEBUG_WORD("nelsonUSlashMod")
}

void nelsonPlus(void) {
	DEBUG_WORD("nelsonPlus")
}

void nelsonZeroLess(void) {
	DEBUG_WORD("nelsonZeroLess")
}

void nelsonZeroEqual(void) {
	DEBUG_WORD("nelsonZeroEqual")
}

#endif


#if H2O_FORTH_PRIMITIVES == NELSON_FORTH || \
	H2O_FORTH_PRIMITIVES == NELSON_UE_FORTH

void nelsonYLocal(void) {
	DEBUG_WORD("nelsonYLocal")
}

void nelsonProcessHeap(void) {
	DEBUG_WORD("nelsonProcessHeap")
}

void nelsonHeapReAlloc(void) {
	DEBUG_WORD("nelsonHeapReAlloc")
}

void nelsonHeapFree(void) {
	DEBUG_WORD("nelsonHeapFree")
}

void nelsonHeapAlloc(void) {
	DEBUG_WORD("nelsonHeapAlloc")
}

void nelsonGetProcessHeap(void) {
	DEBUG_WORD("nelsonGetProcessHeap")
}

void nelsonRenameFile(void) {
	DEBUG_WORD("nelsonRenameFile")
}

void nelsonWindows(void) {
	DEBUG_WORD("nelsonWindows")
}

void nelsonFDotS(void) {
	DEBUG_WORD("nelsonFDotS")
}

void nelsonFDot(void) {
	DEBUG_WORD("nelsonFDot")
}

void nelsonNumFS(void) {
	DEBUG_WORD("nelsonNumFS")
}

void nelsonSetPrecision(void) {
	DEBUG_WORD("nelsonSetPrecision")
}

void nelsonPrecision(void) {
	DEBUG_WORD("nelsonPrecision")
}

void nelsonFSqrt(void) {
	DEBUG_WORD("nelsonFSqrt")
}

void nelsonPi(void) {
	DEBUG_WORD("nelsonPi")
}

void nelsonFVariable(void) {
	DEBUG_WORD("nelsonFVariable")
}

void nelsonFConstant(void) {
	DEBUG_WORD("nelsonFConstant")
}

void nelsonFLiteral(void) {
	DEBUG_WORD("nelsonFLiteral")
}

void nelsonAFLiteral(void) {
	DEBUG_WORD("nelsonAFLiteral")
}

void nelsonSFComma(void) {
	DEBUG_WORD("nelsonSFComma")
}

void nelsonSFloatPlus(void) {
	DEBUG_WORD("nelsonSFloatPlus")
}

void nelsonSFloats(void) {
	DEBUG_WORD("nelsonSFloats")
}

void nelsonSFloat(void) {
	DEBUG_WORD("nelsonSFloat")
}

void nelsonSFGreaterEqual(void) {
	DEBUG_WORD("nelsonSFGreaterEqual")
}

void nelsonSFLessEqual(void) {
	DEBUG_WORD("nelsonSFLessEqual")
}

void nelsonSFUnequal(void) {
	DEBUG_WORD("nelsonSFUnequal")
}

void nelsonSFGreater(void) {
	DEBUG_WORD("nelsonSFGreater")
}

void nelsonSFLess(void) {
	DEBUG_WORD("nelsonSFLess")
}

void nelsonSFEqual(void) {
	DEBUG_WORD("nelsonSFEqual")
}

void nelsonAtXy(void) {
	DEBUG_WORD("nelsonAtXy")
}

void nelsonNormal(void) {
	DEBUG_WORD("nelsonNormal")
}

void nelsonBg(void) {
	DEBUG_WORD("nelsonBg")
}

void nelsonFg(void) {
	DEBUG_WORD("nelsonFg")
}

void nelsonAnsi(void) {
	DEBUG_WORD("nelsonAnsi")
}

void nelsonBlank(void) {
	DEBUG_WORD("nelsonBlank")
}

void nelsonErase(void) {
	DEBUG_WORD("nelsonErase")
}

void nelsonYPlace(void) {
	DEBUG_WORD("nelsonYPlace")
}

void nelsonValueBins(void) {
	DEBUG_WORD("nelsonValueBins")
}

void nelsonNestDepth(void) {
	DEBUG_WORD("nelsonNestDepth")
}

void nelsonFDepth(void) {
	DEBUG_WORD("nelsonFDepth")
}

void nelsonFP0(void) {
	DEBUG_WORD("nelsonFP0")
}

void nelsonRecurse(void) {
	DEBUG_WORD("nelsonRecurse")
}

void nelsonYield(void) {
	DEBUG_WORD("nelsonYield")
}

void nelsonFGreaterNumberQ(void) {
	DEBUG_WORD("nelsonFGreaterNumberQ")
}

void nelsonFToS(void) {
	DEBUG_WORD("nelsonFToS")
}

void nelsonSToF(void) {
	DEBUG_WORD("nelsonSToF")
}

void nelsonOneSlashF(void) {
	DEBUG_WORD("nelsonOneSlashF")
}

void nelsonFSlash(void) {
	DEBUG_WORD("nelsonFSlash")
}

void nelsonFStar(void) {
	DEBUG_WORD("nelsonFStar")
}

void nelsonFMinus(void) {
	DEBUG_WORD("nelsonFMinus")
}

void nelsonFPlus(void) {
	DEBUG_WORD("nelsonFPlus")
}

void nelsonF0Equal(void) {
	DEBUG_WORD("nelsonF0Equal")
}

void nelsonF0Less(void) {
	DEBUG_WORD("nelsonF0Less")
}

void nelsonFNegate(void) {
	DEBUG_WORD("nelsonFNegate")
}

void nelsonFswa(void) {
	DEBUG_WORD("nelsonFswa")
}

void nelsonFOver(void) {
	DEBUG_WORD("nelsonFOver")
}

void nelsonFDrop(void) {
	DEBUG_WORD("nelsonFDrop")
}

void nelsonFNip(void) {
	DEBUG_WORD("nelsonFNip")
}

void nelsonFDup(void) {
	DEBUG_WORD("nelsonFDup")
}

void nelsonSFStore(void) {
	DEBUG_WORD("nelsonSFStore")
}

void nelsonSFFetch(void) {
	DEBUG_WORD("nelsonSFFetch")
}

void nelsonSF(void) {
	DEBUG_WORD("nelsonSF")
}

void nelsonFPStore(void) {
	DEBUG_WORD("nelsonFPStore")
}

void nelsonFPFetch(void) {
	DEBUG_WORD("nelsonFPFetch")
}

void nelsonLoadLibraryA(void) {
	DEBUG_WORD("nelsonLoadLibraryA")
}

void nelsonGetProcAddress(void) {
	DEBUG_WORD("nelsonGetProcAddress")
}


#endif


#if H2O_FORTH_PRIMITIVES == NELSON_FORTH || \
	H2O_FORTH_PRIMITIVES == NELSON_ESP_FORTH

void nelsonTelnetD(void) {
	DEBUG_WORD("nelsonTelnetD")
}

void nelsonBTerm(void) {
	DEBUG_WORD("nelsonBTerm")
}

void nelsonTimers(void) {
	DEBUG_WORD("nelsonTimers")
}

void nelsonRegisters(void) {
	DEBUG_WORD("nelsonRegisters")
}

void nelsonWebUI(void) {
	DEBUG_WORD("nelsonWebUI")
}

void nelsonLogin(void) {
	DEBUG_WORD("nelsonLogin")
}

void nelsonWebInterface(void) {
	DEBUG_WORD("nelsonWebInterface")
}

void nelsonRtos(void) {
	DEBUG_WORD("nelsonRtos")
}

void nelsonInterrupts(void) {
	DEBUG_WORD("nelsonInterrupts")
}

void nelsonSockets(void) {
	DEBUG_WORD("nelsonSockets")
}

void nelsonSerial(void) {
	DEBUG_WORD("nelsonSerial")
}

void nelsonLedC(void) {
	DEBUG_WORD("nelsonLedC")
}

void nelsonSpiffs(void) {
	DEBUG_WORD("nelsonSpiffs")
}

void nelsonSdMmc(void) {
	DEBUG_WORD("nelsonSdMmc")
}

void nelsonWifi(void) {
	DEBUG_WORD("nelsonWifi")
}

void nelsonWebserver(void) {
	DEBUG_WORD("nelsonWebserver")
}

void nelsonWire(void) {
	DEBUG_WORD("nelsonWire")
}

void nelsonLed(void) {
	DEBUG_WORD("nelsonLed")
}

void nelsonOutput(void) {
	DEBUG_WORD("nelsonOutput")
}

void nelsonInput(void) {
	DEBUG_WORD("nelsonInput")
}

void nelsonHigh(void) {
	DEBUG_WORD("nelsonHigh")
}

void nelsonLow(void) {
	DEBUG_WORD("nelsonLow")
}

void nelsonTone(void) {
	DEBUG_WORD("nelsonTone")
}

void nelsonFreq(void) {
	DEBUG_WORD("nelsonFreq")
}

void nelsonDuty(void) {
	DEBUG_WORD("nelsonDuty")
}

void nelsonAdc(void) {
	DEBUG_WORD("nelsonAdc")
}

void nelsonPin(void) {
	DEBUG_WORD("nelsonPin")
}

void nelsonTimerIsrRegister(void) {
	DEBUG_WORD("nelsonTimerIsrRegister")
}

void nelsonSdMmcDotBegin(void) {
	DEBUG_WORD("nelsonSdMmcDotBegin")
}

void nelsonMdnsDotBegin(void) {
	DEBUG_WORD("nelsonMdnsDotBegin")
}

void nelsonBin(void) {
	DEBUG_WORD("nelsonBin")
}

void nelsonTerminate(void) {
	DEBUG_WORD("nelsonTerminate")
}

void nelsonMSTicks(void) {
	DEBUG_WORD("nelsonMSTicks")
}

void nelsonDacWrite(void) {
	DEBUG_WORD("nelsonDacWrite")
}

void nelsonPulsIn(void) {
	DEBUG_WORD("nelsonPulsIn")
}

void nelsonAnalogRead(void) {
	DEBUG_WORD("nelsonAnalogRead")
}

void nelsonDigitalRead(void) {
	DEBUG_WORD("nelsonDigitalRead")
}

void nelsonDigitalWrite(void) {
	DEBUG_WORD("nelsonDigitalWrite")
}

void nelsonPinMode(void) {
	DEBUG_WORD("nelsonPinMode")
}

#endif

#endif
