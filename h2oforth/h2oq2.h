#ifndef H2OQ2
#define H2OQ2

/* The "qForth" of MARC4 microcontrollers */
/* Primitives */

/* Control Commands */
void qforthAgain(void) {
	PSMSG_DEBUG("qforthAgain")
}

void qforthBegin(void) {
	PSMSG_DEBUG("qforthBegin")
}

void qforthDo(void) {
	PSMSG_DEBUG("qforthDo")
}

void qforthNumDo(void) {
	PSMSG_DEBUG("qforthNumDo")
}

void qforthQDo(void) {
	PSMSG_DEBUG("qforthQDo")
}

void qforthLoop(void) {
	PSMSG_DEBUG("qforthLoop")
}

void qforthNumLoop(void) {
	PSMSG_DEBUG("qforthNumLoop")
}

void qforthPlusLoop(void) {
	PSMSG_DEBUG("qforthPlusLoop")
}

void qforthQLeave(void) {
	PSMSG_DEBUG("qforthQLeave")
}

void qforthMinusQLeave(void) {
	PSMSG_DEBUG("qforthMinusQLeave")
}

void qforthRepeat(void) {
	PSMSG_DEBUG("qforthRepeat")
}

void qforthUntil(void) {
	PSMSG_DEBUG("qforthUntil")
}

void qforthWhile(void) {
	PSMSG_DEBUG("qforthWhile")
}

void qforthCase(void) {
	PSMSG_DEBUG("qforthCase")
}

void qforthElse(void) {
	PSMSG_DEBUG("qforthElse")
}

void qforthEndCase(void) {
	PSMSG_DEBUG("qforthEndCase")
}

void qforthEndOf(void) {
	PSMSG_DEBUG("qforthEndOf")
}

void qforthExecute(void) {
	/* Atmel 2004, but not Temic 1994 */
	PSMSG_DEBUG("qforthExecute")
}

void qforthIf(void) {
	PSMSG_DEBUG("qforthIf")
}

void qforthOf(void) {
	PSMSG_DEBUG("qforthOf")
}

void qforthThen(void) {
	PSMSG_DEBUG("qforthThen")
}

void qforthCcrFetch(void) {
	PSMSG_DEBUG("qforthCcrFetch")
}

void qforthCcrStore(void) {
	PSMSG_DEBUG("qforthCcrStore")
}

void qforthClrBcf(void) {
	PSMSG_DEBUG("qforthClrBcf")
}

void qforthEi(void) {
	PSMSG_DEBUG("qforthEi")
}

void qforthExit(void) {
	PSMSG_DEBUG("qforthExit")
}

void qforthDi(void) {
	PSMSG_DEBUG("qforthDi")
}

void qforthSetBcf(void) {
	PSMSG_DEBUG("qforthSetBcf")
}

void qforthSwi0To7(void) {
	PSMSG_DEBUG("qforthSwi0To7")
}

void qforthTogBf(void) {
	PSMSG_DEBUG("qforthTogBf")
}

/* Mathematic Commands */
void qforthAdd(void) {
	PSMSG_DEBUG("qforthAdd")
}

void qforthPlus(void) {
	PSMSG_DEBUG("qforthPlus")
}

void qforthPlusStore(void) {
	PSMSG_DEBUG("qforthPlusStore")
}

void qforthInc(void) {
	PSMSG_DEBUG("qforthInc")
}

void qforthOnePlus(void) {
	PSMSG_DEBUG("qforthOnePlus")
}

void qforthOnePlusStore(void) {
	PSMSG_DEBUG("qforthOnePlusStore")
}

void qforthAddC(void) {
	PSMSG_DEBUG("qforthAddC")
}

void qforthPlusC(void) {
	PSMSG_DEBUG("qforthPlusC")
}

void qforthDPlus(void) {
	PSMSG_DEBUG("qforthDPlus")
}

void qforthDPlusStore(void) {
	PSMSG_DEBUG("qforthDPlusStore")
}

void qforthMPlus(void) {
	PSMSG_DEBUG("qforthMPlus")
}

void qforthTPlusStore(void) {
	PSMSG_DEBUG("qforthTPlusStore")
}

void qforthTDPlusStore(void) {
	PSMSG_DEBUG("qforthTDPlusStore")
}

void qforthDaa(void) {
	PSMSG_DEBUG("qforthDaa")
}

void qforthSub(void) {
	PSMSG_DEBUG("qforthSub")
}

void qforthMinus(void) {
	PSMSG_DEBUG("qforthMinus")
}

void qforthDec(void) {
	PSMSG_DEBUG("qforthDec")
}

void qforthOneMinus(void) {
	PSMSG_DEBUG("qforthOneMinus")
}

void qforthOneMinusStore(void) {
	PSMSG_DEBUG("qforthOneMinusStore")
}

void qforthSubb(void) {
	PSMSG_DEBUG("qforthSubb")
}

void qforthMinusC(void) {
	PSMSG_DEBUG("qforthMinusC")
}

void qforthDMinus(void) {
	PSMSG_DEBUG("qforthDMinus")
}

void qforthDMinusStore(void) {
	PSMSG_DEBUG("qforthDMinusStore")
}

void qforthMMinus(void) {
	PSMSG_DEBUG("qforthMMinus")
}

void qforthTMinusStore(void) {
	PSMSG_DEBUG("qforthTMinusStore")
}

void qforthTDMinus(void) {
	PSMSG_DEBUG("qforthTDMinus")
}

void qforthDas(void) {
	PSMSG_DEBUG("qforthDas")
}

void qforthTwoStar(void) {
	PSMSG_DEBUG("qforthTwoStar")
}

void qforthD2Star(void) {
	PSMSG_DEBUG("qforthD2Star")
}

void qforthTwoSlash(void) {
	PSMSG_DEBUG("qforthTwoSlash")
}

void qforthD2Slash(void) {
	PSMSG_DEBUG("qforthD2Slash")
}

void qforthCmpEq(void) {
	PSMSG_DEBUG("qforthCmpEq")
}

void qforthEqual(void) {
	PSMSG_DEBUG("qforthEqual")
}

void qforthZeroEqual(void) {
	PSMSG_DEBUG("qforthZeroEqual")
}

void qforthDEqual(void) {
	PSMSG_DEBUG("qforthDEqual")
}

void qforthD0Equal(void) {
	PSMSG_DEBUG("qforthD0Equal")
}

void qforthCmpGe(void) {
	PSMSG_DEBUG("qforthCmpGe")
}

void qforthGreaterEqual(void) {
	/* Temic 1994, but not Atmel 2004 */
	PSMSG_DEBUG("qforthCmpGe")
}

void qforthDGreaterEqual(void) {
	PSMSG_DEBUG("qforthDGreaterEqual")
}

void qforthCmpGt(void) {
	PSMSG_DEBUG("qforthCmpGt")
}

void qforthGreater(void) {
	PSMSG_DEBUG("qforthGreater")
}

void qforthDGreater(void) {
	PSMSG_DEBUG("qforthDGreater")
}

void qforthCmpLe(void) {
	PSMSG_DEBUG("qforthCmpLe")
}

void qforthLessEqual(void) {
	PSMSG_DEBUG("qforthLessEqual")
}

void qforthDLessEqual(void) {
	PSMSG_DEBUG("qforthDLessEqual")
}

void qforthCmpLt(void) {
	PSMSG_DEBUG("qforthCmpLt")
}

void qforthLess(void) {
	PSMSG_DEBUG("qforthLess")
}

void qforthDLess(void) {
	PSMSG_DEBUG("qforthDLess")
}

void qforthCmpNe(void) {
	PSMSG_DEBUG("qforthCmpNe")
}

void qforthUnequal(void) {
	PSMSG_DEBUG("qforthUnequal")
}

void qforthZeroUnequal(void) {
	PSMSG_DEBUG("qforthZeroUnequal")
}

void qforthD0Unequal(void) {
	PSMSG_DEBUG("qforthD0Unequal")
}

void qforthDUnequal(void) {
	PSMSG_DEBUG("qforthDUnequal")
}

void qforthMax(void) {
	PSMSG_DEBUG("qforthMax")
}

void qforthDMax(void) {
	PSMSG_DEBUG("qforthDMax")
}

void qforthMin(void) {
	PSMSG_DEBUG("qforthMin")
}

void qforthDMin(void) {
	PSMSG_DEBUG("qforthDMin")
}

void qforthNegate(void) {
	PSMSG_DEBUG("qforthNegate")
}

void qforthDNegate(void) {
	PSMSG_DEBUG("qforthDNegate")
}

void qforthNot(void) {
	PSMSG_DEBUG("qforthNot")
}

void qforthRoL(void) {
	PSMSG_DEBUG("qforthRoL")
}

void qforthRoR(void) {
	PSMSG_DEBUG("qforthRoR")
}

void qforthShL(void) {
	PSMSG_DEBUG("qforthShL")
}

void qforthShR(void) {
	PSMSG_DEBUG("qforthShR")
}

void qforthAnd(void) {
	PSMSG_DEBUG("qforthAnd")
}

void qforthOr(void) {
	PSMSG_DEBUG("qforthOr")
}

void qforthXor(void) {
	PSMSG_DEBUG("qforthXor")
}

void qforthToggle(void) {
	PSMSG_DEBUG("qforthToggle")
}

void qforthDToS(void) {
	PSMSG_DEBUG("qforthDToS")
}

void qforthSToD(void) {
	PSMSG_DEBUG("qforthSToD")
}

/* Memory Commands */
void qforthFetch(void) {
	PSMSG_DEBUG("qforthFetch")
}

void qforthTwoFetch(void) {
	PSMSG_DEBUG("qforthTwoFetch")
}

void qforthThreeFetch(void) {
	PSMSG_DEBUG("qforthThreeFetch")
}

void qforthXFetch(void) {
	PSMSG_DEBUG("qforthXFetch")
}

void qforthXXFetch(void) {
	PSMSG_DEBUG("qforthXXFetch")
}

void qforthXPlusXFetch(void) {
	PSMSG_DEBUG("qforthXPlusXFetch")
}

void qforthXXMinusFetch(void) {
	PSMSG_DEBUG("qforthXXMinusFetch")
}

void qforthYFetch(void) {
	PSMSG_DEBUG("qforthYFetch")
}

void qforthXYFetch(void) {
	PSMSG_DEBUG("qforthXYFetch")
}

void qforthXPlusYFetch(void) {
	PSMSG_DEBUG("qforthXPlusYFetch")
}

void qforthXYMinusFetch(void) {
	PSMSG_DEBUG("qforthXYMinusFetch")
}

void qforthDTableFetch(void) {
	PSMSG_DEBUG("qforthDTableFetch")
}

void qforthRomByteFetch(void) {
	PSMSG_DEBUG("qforthRomByteFetch")
}

void qforthStore(void) {
	PSMSG_DEBUG("qforthStore")
}

void qforthTwoStore(void) {
	PSMSG_DEBUG("qforthTwoStore")
}

void qforthThreeStore(void) {
	PSMSG_DEBUG("qforthThreeStore")
}

void qforthXStore(void) {
	PSMSG_DEBUG("qforthXStore")
}

void qforthXXStore(void) {
	PSMSG_DEBUG("qforthXXStore")
}

void qforthXPlusXStore(void) {
	PSMSG_DEBUG("qforthXPlusXStore")
}

void qforthXXMinusStore(void) {
	PSMSG_DEBUG("qforthXXMinusStore")
}

void qforthYStore(void) {
	PSMSG_DEBUG("qforthYStore")
}

void qforthXYStore(void) {
	PSMSG_DEBUG("qforthXYStore")
}

void qforthXPlusYStore(void) {
	PSMSG_DEBUG("qforthXPlusYStore")
}

void qforthXYMinusStore(void) {
	PSMSG_DEBUG("qforthXYMinusStore")
}

void qforthErase(void) {
	PSMSG_DEBUG("qforthErase")
}

void qforthFill(void) {
	PSMSG_DEBUG("qforthFill")
}

void qforthMove(void) {
	PSMSG_DEBUG("qforthMove")
}

void qforthMoveTo(void) {
	PSMSG_DEBUG("qforthMoveTo")
}

void qforthIn(void) {
	PSMSG_DEBUG("qforthIn")
}

void qforthOut(void) {
	PSMSG_DEBUG("qforthOut")
}

/* Commands */
/* qforthStore(void) */

void qforthTick(void) {
	PSMSG_DEBUG("qforthTick")
}

/* qforthNumDo(void) */
/* qforthNumLoop(void) */
/* qforthPlusLoop(void) */
/* qforthMinusQLeave(void) */

void qforthLessR(void) {
	PSMSG_DEBUG("qforthLessR")
}

void qforthToRP(void) {
	PSMSG_DEBUG("qforthToRP")
}

void qforthToSP(void) {
	PSMSG_DEBUG("qforthToSP")
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
	PSMSG_DEBUG("qforthXYMinuSFetch")
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
	PSMSG_DEBUG("qforthTwoRFetch")
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
	PSMSG_DEBUG("qforthSubB")
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
	PSMSG_DEBUG("qforthDToggle")
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
	PSMSG_DEBUG("qforthNop")
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
	PSMSG_DEBUG("qforthRoLL")
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
	PSMSG_DEBUG("qforthSPStore")
}

/* qforthSPFetch */
/* qforthSwap */

void qforthSwi0ToSw17(void) {
	PSMSG_DEBUG("qforthSwi0ToSw17")
}

/* qforthTPlusStore */
/* qforthTMinusStore */
/* qforthTDPlusStore */

void qforthTDMinusStore(void) {
	PSMSG_DEBUG("qforthTDMinusStore")
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
	PSMSG_DEBUG("qforthXorYStore")
}

/* qforthYFetch */

/* STACK Commands */
void qforthDecR(void) {
	PSMSG_DEBUG("qforthDecR")
}

void qforthDepth(void) {
	PSMSG_DEBUG("qforthDepth")
}

void qforthDrop(void) {
	PSMSG_DEBUG("qforthDrop")
}

void qforthTwoDrop(void) {
	PSMSG_DEBUG("qforthTwoDrop")
}

void qforthThreeDrop(void) {
	PSMSG_DEBUG("qforthThreeDrop")
}

void qforthDropR(void) {
	PSMSG_DEBUG("qforthDropR")
}

void qforthDup(void) {
	PSMSG_DEBUG("qforthDup")
}

void qforthQDup(void) {
	PSMSG_DEBUG("qforthQDup")
}

void qforthTwoDup(void) {
	PSMSG_DEBUG("qforthTwoDup")
}

void qforthThreeDup(void) {
	PSMSG_DEBUG("qforthThreeDup")
}

void qforthI(void) {
	PSMSG_DEBUG("qforthI")
}

void qforthIndex(void) {
	PSMSG_DEBUG("qforthIndex")
}

void qforthJ(void) {
	PSMSG_DEBUG("qforthJ")
}

void qforthNip(void) {
	PSMSG_DEBUG("qforthNip")
}

void qforthTwoNip(void) {
	PSMSG_DEBUG("qforthTwoNip")
}

void qforthOver(void) {
	PSMSG_DEBUG("qforthOver")
}

void qforthTwoOver(void) {
	PSMSG_DEBUG("qforthTwoOver")
}

void qforthPick(void) {
	PSMSG_DEBUG("qforthPick")
}

void qforthRFetch(void) {
	PSMSG_DEBUG("qforthRFetch")
}

/* qforthTwoFetch */

void qforthThreeRFetch(void) {
	PSMSG_DEBUG("qforthThreeRFetch")
}

void qforthToR(void) {
	PSMSG_DEBUG("qforthToR")
}

void qforthTwoToR(void) {
	PSMSG_DEBUG("qforthTwoToR")
}

void qforthThreeToR(void) {
	PSMSG_DEBUG("qforthThreeToR")
}

void qforthRTo(void) {
	PSMSG_DEBUG("qforthRTo")
}

void qforthTwoRTo(void) {
	PSMSG_DEBUG("qforthTwoRTo")
}

void qforthThreeRTo(void) {
	PSMSG_DEBUG("qforthThreeRTo")
}

void qforthRDepth(void) {
	PSMSG_DEBUG("qforthRDepth")
}

void qforthRFree(void) {
	PSMSG_DEBUG("qforthRFree")
}

void qforthRot(void) {
	PSMSG_DEBUG("qforthRot")
}

void qforthTwoRot(void) {
	PSMSG_DEBUG("qforthTwoRot")
}

void qforthLessRot(void) {
	PSMSG_DEBUG("qforthLessRot")
}

void qforthTwoLessRot(void) {
	PSMSG_DEBUG("qforthTwoLessRot")
}

void qforthRPFetch(void) {
	PSMSG_DEBUG("qforthRPFetch")
}

void qforthRPStore(void) {
	PSMSG_DEBUG("qforthRPStore")
}

void qforthSPFetch(void) {
	PSMSG_DEBUG("qforthSPFetch")
}

void qforthSpStore(void) {
	PSMSG_DEBUG("qforthSpStore")
}

void qforthSwap(void) {
	PSMSG_DEBUG("qforthSwap")
}

void qforthTwoSwap(void) {
	PSMSG_DEBUG("qforthTwoSwap")
}

void qforthTuck(void) {
	PSMSG_DEBUG("qforthTuck")
}

void qforthTwoTuck(void) {
	PSMSG_DEBUG("qforthTwoTuck")
}

#endif
