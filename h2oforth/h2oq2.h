#ifndef H2OQ2
#define H2OQ2

/* The "qForth" of MARC4 microcontrollers */
/* Primitives */

/* Control Commands */
void qforthAgain(void) {
	DEBUG_WORD("qforthAgain")
}

void qforthBegin(void) {
	DEBUG_WORD("qforthBegin")
}

void qforthDo(void) {
	DEBUG_WORD("qforthDo")
}

void qforthNumDo(void) {
	DEBUG_WORD("qforthNumDo")
}

void qforthQDo(void) {
	DEBUG_WORD("qforthQDo")
}

void qforthLoop(void) {
	DEBUG_WORD("qforthLoop")
}

void qforthNumLoop(void) {
	DEBUG_WORD("qforthNumLoop")
}

void qforthPlusLoop(void) {
	DEBUG_WORD("qforthPlusLoop")
}

void qforthQLeave(void) {
	DEBUG_WORD("qforthQLeave")
}

void qforthMinusQLeave(void) {
	DEBUG_WORD("qforthMinusQLeave")
}

void qforthRepeat(void) {
	DEBUG_WORD("qforthRepeat")
}

void qforthUntil(void) {
	DEBUG_WORD("qforthUntil")
}

void qforthWhile(void) {
	DEBUG_WORD("qforthWhile")
}

void qforthCase(void) {
	DEBUG_WORD("qforthCase")
}

void qforthElse(void) {
	DEBUG_WORD("qforthElse")
}

void qforthEndCase(void) {
	DEBUG_WORD("qforthEndCase")
}

void qforthEndOf(void) {
	DEBUG_WORD("qforthEndOf")
}

void qforthExecute(void) {
	/* Atmel 2004, but not Temic 1994 */
	DEBUG_WORD("qforthExecute")
}

void qforthIf(void) {
	DEBUG_WORD("qforthIf")
}

void qforthOf(void) {
	DEBUG_WORD("qforthOf")
}

void qforthThen(void) {
	DEBUG_WORD("qforthThen")
}

void qforthCcrFetch(void) {
	DEBUG_WORD("qforthCcrFetch")
}

void qforthCcrStore(void) {
	DEBUG_WORD("qforthCcrStore")
}

void qforthClrBcf(void) {
	DEBUG_WORD("qforthClrBcf")
}

void qforthEi(void) {
	DEBUG_WORD("qforthEi")
}

void qforthExit(void) {
	DEBUG_WORD("qforthExit")
}

void qforthDi(void) {
	DEBUG_WORD("qforthDi")
}

void qforthSetBcf(void) {
	DEBUG_WORD("qforthSetBcf")
}

void qforthSwi0To7(void) {
	DEBUG_WORD("qforthSwi0To7")
}

void qforthTogBf(void) {
	DEBUG_WORD("qforthTogBf")
}

/* Mathematic Commands */
void qforthAdd(void) {
	DEBUG_WORD("qforthAdd")
}

void qforthPlus(void) {
	DEBUG_WORD("qforthPlus")
}

void qforthPlusStore(void) {
	DEBUG_WORD("qforthPlusStore")
}

void qforthInc(void) {
	DEBUG_WORD("qforthInc")
}

void qforthOnePlus(void) {
	DEBUG_WORD("qforthOnePlus")
}

void qforthOnePlusStore(void) {
	DEBUG_WORD("qforthOnePlusStore")
}

void qforthAddC(void) {
	DEBUG_WORD("qforthAddC")
}

void qforthPlusC(void) {
	DEBUG_WORD("qforthPlusC")
}

void qforthDPlus(void) {
	DEBUG_WORD("qforthDPlus")
}

void qforthDPlusStore(void) {
	DEBUG_WORD("qforthDPlusStore")
}

void qforthMPlus(void) {
	DEBUG_WORD("qforthMPlus")
}

void qforthTPlusStore(void) {
	DEBUG_WORD("qforthTPlusStore")
}

void qforthTDPlusStore(void) {
	DEBUG_WORD("qforthTDPlusStore")
}

void qforthDaa(void) {
	DEBUG_WORD("qforthDaa")
}

void qforthSub(void) {
	DEBUG_WORD("qforthSub")
}

void qforthMinus(void) {
	DEBUG_WORD("qforthMinus")
}

void qforthDec(void) {
	DEBUG_WORD("qforthDec")
}

void qforthOneMinus(void) {
	DEBUG_WORD("qforthOneMinus")
}

void qforthOneMinusStore(void) {
	DEBUG_WORD("qforthOneMinusStore")
}

void qforthSubb(void) {
	DEBUG_WORD("qforthSubb")
}

void qforthMinusC(void) {
	DEBUG_WORD("qforthMinusC")
}

void qforthDMinus(void) {
	DEBUG_WORD("qforthDMinus")
}

void qforthDMinusStore(void) {
	DEBUG_WORD("qforthDMinusStore")
}

void qforthMMinus(void) {
	DEBUG_WORD("qforthMMinus")
}

void qforthTMinusStore(void) {
	DEBUG_WORD("qforthTMinusStore")
}

void qforthTDMinus(void) {
	DEBUG_WORD("qforthTDMinus")
}

void qforthDas(void) {
	DEBUG_WORD("qforthDas")
}

void qforthTwoStar(void) {
	DEBUG_WORD("qforthTwoStar")
}

void qforthD2Star(void) {
	DEBUG_WORD("qforthD2Star")
}

void qforthTwoSlash(void) {
	DEBUG_WORD("qforthTwoSlash")
}

void qforthD2Slash(void) {
	DEBUG_WORD("qforthD2Slash")
}

void qforthCmpEq(void) {
	DEBUG_WORD("qforthCmpEq")
}

void qforthEqual(void) {
	DEBUG_WORD("qforthEqual")
}

void qforthZeroEqual(void) {
	DEBUG_WORD("qforthZeroEqual")
}

void qforthDEqual(void) {
	DEBUG_WORD("qforthDEqual")
}

void qforthD0Equal(void) {
	DEBUG_WORD("qforthD0Equal")
}

void qforthCmpGe(void) {
	DEBUG_WORD("qforthCmpGe")
}

void qforthGreaterEqual(void) {
	/* Temic 1994, but not Atmel 2004 */
	DEBUG_WORD("qforthCmpGe")
}

void qforthDGreaterEqual(void) {
	DEBUG_WORD("qforthDGreaterEqual")
}

void qforthCmpGt(void) {
	DEBUG_WORD("qforthCmpGt")
}

void qforthGreater(void) {
	DEBUG_WORD("qforthGreater")
}

void qforthDGreater(void) {
	DEBUG_WORD("qforthDGreater")
}

void qforthCmpLe(void) {
	DEBUG_WORD("qforthCmpLe")
}

void qforthLessEqual(void) {
	DEBUG_WORD("qforthLessEqual")
}

void qforthDLessEqual(void) {
	DEBUG_WORD("qforthDLessEqual")
}

void qforthCmpLt(void) {
	DEBUG_WORD("qforthCmpLt")
}

void qforthLess(void) {
	DEBUG_WORD("qforthLess")
}

void qforthDLess(void) {
	DEBUG_WORD("qforthDLess")
}

void qforthCmpNe(void) {
	DEBUG_WORD("qforthCmpNe")
}

void qforthUnequal(void) {
	DEBUG_WORD("qforthUnequal")
}

void qforthZeroUnequal(void) {
	DEBUG_WORD("qforthZeroUnequal")
}

void qforthD0Unequal(void) {
	DEBUG_WORD("qforthD0Unequal")
}

void qforthDUnequal(void) {
	DEBUG_WORD("qforthDUnequal")
}

void qforthMax(void) {
	DEBUG_WORD("qforthMax")
}

void qforthDMax(void) {
	DEBUG_WORD("qforthDMax")
}

void qforthMin(void) {
	DEBUG_WORD("qforthMin")
}

void qforthDMin(void) {
	DEBUG_WORD("qforthDMin")
}

void qforthNegate(void) {
	DEBUG_WORD("qforthNegate")
}

void qforthDNegate(void) {
	DEBUG_WORD("qforthDNegate")
}

void qforthNot(void) {
	DEBUG_WORD("qforthNot")
}

void qforthRoL(void) {
	DEBUG_WORD("qforthRoL")
}

void qforthRoR(void) {
	DEBUG_WORD("qforthRoR")
}

void qforthShL(void) {
	DEBUG_WORD("qforthShL")
}

void qforthShR(void) {
	DEBUG_WORD("qforthShR")
}

void qforthAnd(void) {
	DEBUG_WORD("qforthAnd")
}

void qforthOr(void) {
	DEBUG_WORD("qforthOr")
}

void qforthXor(void) {
	DEBUG_WORD("qforthXor")
}

void qforthToggle(void) {
	DEBUG_WORD("qforthToggle")
}

void qforthDToS(void) {
	DEBUG_WORD("qforthDToS")
}

void qforthSToD(void) {
	DEBUG_WORD("qforthSToD")
}

/* Memory Commands */
void qforthFetch(void) {
	DEBUG_WORD("qforthFetch")
}

void qforthTwoFetch(void) {
	DEBUG_WORD("qforthTwoFetch")
}

void qforthThreeFetch(void) {
	DEBUG_WORD("qforthThreeFetch")
}

void qforthXFetch(void) {
	DEBUG_WORD("qforthXFetch")
}

void qforthXXFetch(void) {
	DEBUG_WORD("qforthXXFetch")
}

void qforthXPlusXFetch(void) {
	DEBUG_WORD("qforthXPlusXFetch")
}

void qforthXXMinusFetch(void) {
	DEBUG_WORD("qforthXXMinusFetch")
}

void qforthYFetch(void) {
	DEBUG_WORD("qforthYFetch")
}

void qforthXYFetch(void) {
	DEBUG_WORD("qforthXYFetch")
}

void qforthXPlusYFetch(void) {
	DEBUG_WORD("qforthXPlusYFetch")
}

void qforthXYMinusFetch(void) {
	DEBUG_WORD("qforthXYMinusFetch")
}

void qforthDTableFetch(void) {
	DEBUG_WORD("qforthDTableFetch")
}

void qforthRomByteFetch(void) {
	DEBUG_WORD("qforthRomByteFetch")
}

void qforthStore(void) {
	DEBUG_WORD("qforthStore")
}

void qforthTwoStore(void) {
	DEBUG_WORD("qforthTwoStore")
}

void qforthThreeStore(void) {
	DEBUG_WORD("qforthThreeStore")
}

void qforthXStore(void) {
	DEBUG_WORD("qforthXStore")
}

void qforthXXStore(void) {
	DEBUG_WORD("qforthXXStore")
}

void qforthXPlusXStore(void) {
	DEBUG_WORD("qforthXPlusXStore")
}

void qforthXXMinusStore(void) {
	DEBUG_WORD("qforthXXMinusStore")
}

void qforthYStore(void) {
	DEBUG_WORD("qforthYStore")
}

void qforthXYStore(void) {
	DEBUG_WORD("qforthXYStore")
}

void qforthXPlusYStore(void) {
	DEBUG_WORD("qforthXPlusYStore")
}

void qforthXYMinusStore(void) {
	DEBUG_WORD("qforthXYMinusStore")
}

void qforthErase(void) {
	DEBUG_WORD("qforthErase")
}

void qforthFill(void) {
	DEBUG_WORD("qforthFill")
}

void qforthMove(void) {
	DEBUG_WORD("qforthMove")
}

void qforthMoveTo(void) {
	DEBUG_WORD("qforthMoveTo")
}

void qforthIn(void) {
	DEBUG_WORD("qforthIn")
}

void qforthOut(void) {
	DEBUG_WORD("qforthOut")
}

/* Commands */
/* qforthStore(void) */

void qforthTick(void) {
	DEBUG_WORD("qforthTick")
}

/* qforthNumDo(void) */
/* qforthNumLoop(void) */
/* qforthPlusLoop(void) */
/* qforthMinusQLeave(void) */

void qforthLessR(void) {
	DEBUG_WORD("qforthLessR")
}

void qforthToRP(void) {
	DEBUG_WORD("qforthToRP")
}

void qforthToSP(void) {
	DEBUG_WORD("qforthToSP")
}

/* qforthQDo */
/* qforthQDup */
/* qforthQLeave */
/* qforthFetch */
/* qforthXPlusXStore */
/* qforthXPlusXFetch */
/* qforthXPlusYStore */
/* qforthXPlusYFetch */
/* qforthXXMinusStore */
/* qforthXXMinusFetch */
/* qforthXXStore */
/* qforthXXFetch */
/* qforthXYMinusStore */

void qforthXYMinuSFetch(void) {
	DEBUG_WORD("qforthXYMinuSFetch")
}

/* qforthXYStore */
/* qforthXYFetch */
/* qforthTwoStore */
/* qforthTwoLessRot */
/* qforthTwoFetch */
/* qforthTwoDrop */
/* qforthTwoDup */
/* qforthTwoNip */
/* qforthTwoOver */
/* qforthRFetch */

void qforthTwoRFetch(void) {
	DEBUG_WORD("qforthTwoRFetch")
}

/* qforthTwoRot */
/* qforthTwoSwap */
/* qforthTwoTuck */
/* qforthThreeStore */
/* qforthThreeFetch */
/* qforthThreeDrop */
/* qforthThreeDup */
/* qforthThreeRFetch */
/* qforthDaa */
/* qforthAdd */
/* qforthPlus */
/* qforthPlusStore */
/* qforthInc */
/* qforthOnePlus */
/* qforthOnePlusStore */
/* qforthAddC */
/* qforthPlusC */
/* qforthDPlus */
/* qforthDPlusStore */
/* qforthDas */
/* qforthSub */
/* qforthMinus */
/* qforthDec */
/* qforthOneMinus */
/* qforthOneMinusStore */

void qforthSubB(void) {
	DEBUG_WORD("qforthSubB")
}

/* qforthMinusC */
/* qforthDMinus */
/* qforthDMinusStore */
/* qforthTwoStar */
/* qforthD2Star */
/* qforthTwoSlash */
/* qforthD2Slash */
/* qforthAgain */
/* qforthAnd */
/* qforthBegin */
/* qforthCase */
/* qforthCcrStore */
/* qforthCcrFetch */
/* qforthClrBcf */
/* qforthCmpEq */
/* qforthEqual */
/* qforthZeroEqual */
/* qforthDEqual */
/* qforthD0Equal */
/* qforthCmpGe */
/* qforthGreaterEqual */
/* qforthDGreaterEqual */
/* qforthCmpGt */
/* qforthGreater */
/* qforthDGreater */
/* qforthCmpLe */
/* qforthLessEqual */
/* qforthDLessEqual */
/* qforthCmpLt(void) */
/* qforthLess */
/* qforthDLess */
/* qforthCmpNe */
/* qforthUnequal */
/* qforthZeroUnequal */
/* qforthDUnequal */
/* qforthD0Unequal */
/* qforthDecR */
/* qforthDepth */
/* qforthDi */
/* qforthDMax */
/* qforthDMin */
/* qforthDNegate */
/* qforthDo */
/* qforthDrop */
/* qforthDropR */
/* qforthDTableFetch */

void qforthDToggle(void) {
	DEBUG_WORD("qforthDToggle")
}

/* qforthDup */
/* qforthEi */
/* qforthElse */

/* qforthEndCase */
/* qforthEndOf */
/* qforthErase */
/* qforthExit */
/* qforthExecute */
/* qforthFill */
/* qforthI */
/* qforthIf */
/* qforthIn */
/* qforthIndex */
/* qforthJ */
/* qforthLoop */
/* qforthMPlus */
/* qforthMMinus */
/* qforthMax */
/* qforthMin */
/* qforthMove */
/* qforthMoveTo */
/* qforthNegate */
/* qforthNip */
/* qforthDToS */

void qforthNop(void) {
	DEBUG_WORD("qforthNop")
}

/* qforthNot */
/* qforthOf */
/* qforthOr */
/* qforthOut */
/* qforthOver */
/* qforthPick */
/* qforthToR */
/* qforthTwoToR */
/* qforthThreeToR */
/* qforthRTo */
/* qforthTwoRTo */
/* qforthThreeRTo */
/* qforthRDepth */
/* qforthRepeat */
/* qforthRFree */
/* qforthRoL */

void qforthRoLL(void) {
	DEBUG_WORD("qforthRoLL")
}

/* qforthRomByteFetch */
/* qforthRoR */
/* qforthRot */
/* qforthRPStore */
/* qforthRPFetch */
/* qforthSToD */
/* qforthShL */
/* qforthShR */

void qforthSPStore(void) {
	DEBUG_WORD("qforthSPStore")
}

/* qforthSPFetch */
/* qforthSwap */

void qforthSwi0ToSw17(void) {
	DEBUG_WORD("qforthSwi0ToSw17")
}

/* qforthTPlusStore */
/* qforthTMinusStore */
/* qforthTDPlusStore */

void qforthTDMinusStore(void) {
	DEBUG_WORD("qforthTDMinusStore")
}

/* qforthThen */
/* qforthTogBf */
/* qforthToggle */
/* qforthTuck */
/* qforthUntil */
/* qforthWhile */
/* qforthXStore */
/* qforthXFetch */
/* qforthXStore */

void qforthXorYStore(void) {
	DEBUG_WORD("qforthXorYStore")
}

/* qforthYFetch */

/* STACK Commands */
void qforthDecR(void) {
	DEBUG_WORD("qforthDecR")
}

void qforthDepth(void) {
	DEBUG_WORD("qforthDepth")
}

void qforthDrop(void) {
	DEBUG_WORD("qforthDrop")
}

void qforthTwoDrop(void) {
	DEBUG_WORD("qforthTwoDrop")
}

void qforthThreeDrop(void) {
	DEBUG_WORD("qforthThreeDrop")
}

void qforthDropR(void) {
	DEBUG_WORD("qforthDropR")
}

void qforthDup(void) {
	DEBUG_WORD("qforthDup")
}

void qforthQDup(void) {
	DEBUG_WORD("qforthQDup")
}

void qforthTwoDup(void) {
	DEBUG_WORD("qforthTwoDup")
}

void qforthThreeDup(void) {
	DEBUG_WORD("qforthThreeDup")
}

void qforthI(void) {
	DEBUG_WORD("qforthI")
}

void qforthIndex(void) {
	DEBUG_WORD("qforthIndex")
}

void qforthJ(void) {
	DEBUG_WORD("qforthJ")
}

void qforthNip(void) {
	DEBUG_WORD("qforthNip")
}

void qforthTwoNip(void) {
	DEBUG_WORD("qforthTwoNip")
}

void qforthOver(void) {
	DEBUG_WORD("qforthOver")
}

void qforthTwoOver(void) {
	DEBUG_WORD("qforthTwoOver")
}

void qforthPick(void) {
	DEBUG_WORD("qforthPick")
}

void qforthRFetch(void) {
	DEBUG_WORD("qforthRFetch")
}

/* qforthTwoFetch */

void qforthThreeRFetch(void) {
	DEBUG_WORD("qforthThreeRFetch")
}

void qforthToR(void) {
	DEBUG_WORD("qforthToR")
}

void qforthTwoToR(void) {
	DEBUG_WORD("qforthTwoToR")
}

void qforthThreeToR(void) {
	DEBUG_WORD("qforthThreeToR")
}

void qforthRTo(void) {
	DEBUG_WORD("qforthRTo")
}

void qforthTwoRTo(void) {
	DEBUG_WORD("qforthTwoRTo")
}

void qforthThreeRTo(void) {
	DEBUG_WORD("qforthThreeRTo")
}

void qforthRDepth(void) {
	DEBUG_WORD("qforthRDepth")
}

void qforthRFree(void) {
	DEBUG_WORD("qforthRFree")
}

void qforthRot(void) {
	DEBUG_WORD("qforthRot")
}

void qforthTwoRot(void) {
	DEBUG_WORD("qforthTwoRot")
}

void qforthLessRot(void) {
	DEBUG_WORD("qforthLessRot")
}

void qforthTwoLessRot(void) {
	DEBUG_WORD("qforthTwoLessRot")
}

void qforthRPFetch(void) {
	DEBUG_WORD("qforthRPFetch")
}

void qforthRPStore(void) {
	DEBUG_WORD("qforthRPStore")
}

void qforthSPFetch(void) {
	DEBUG_WORD("qforthSPFetch")
}

void qforthSpStore(void) {
	DEBUG_WORD("qforthSpStore")
}

void qforthSwap(void) {
	DEBUG_WORD("qforthSwap")
}

void qforthTwoSwap(void) {
	DEBUG_WORD("qforthTwoSwap")
}

void qforthTuck(void) {
	DEBUG_WORD("qforthTuck")
}

void qforthTwoTuck(void) {
	DEBUG_WORD("qforthTwoTuck")
}

#endif
