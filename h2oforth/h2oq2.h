#ifndef H2OQ2
#define H2OQ2

/* The "qForth" of MARC4 microcontrollers */
/* Primitives */

/* Control Commands */
void qforthAgain(void) {
	MESSSAGE_DEBUG("qforthAgain")
}

void qforthBegin(void) {
	MESSSAGE_DEBUG("qforthBegin")
}

void qforthDo(void) {
	MESSSAGE_DEBUG("qforthDo")
}

void qforthNumDo(void) {
	MESSSAGE_DEBUG("qforthNumDo")
}

void qforthQDo(void) {
	MESSSAGE_DEBUG("qforthQDo")
}

void qforthLoop(void) {
	MESSSAGE_DEBUG("qforthLoop")
}

void qforthNumLoop(void) {
	MESSSAGE_DEBUG("qforthNumLoop")
}

void qforthPlusLoop(void) {
	MESSSAGE_DEBUG("qforthPlusLoop")
}

void qforthQLeave(void) {
	MESSSAGE_DEBUG("qforthQLeave")
}

void qforthMinusQLeave(void) {
	MESSSAGE_DEBUG("qforthMinusQLeave")
}

void qforthRepeat(void) {
	MESSSAGE_DEBUG("qforthRepeat")
}

void qforthUntil(void) {
	MESSSAGE_DEBUG("qforthUntil")
}

void qforthWhile(void) {
	MESSSAGE_DEBUG("qforthWhile")
}

void qforthCase(void) {
	MESSSAGE_DEBUG("qforthCase")
}

void qforthElse(void) {
	MESSSAGE_DEBUG("qforthElse")
}

void qforthEndCase(void) {
	MESSSAGE_DEBUG("qforthEndCase")
}

void qforthEndOf(void) {
	MESSSAGE_DEBUG("qforthEndOf")
}

void qforthExecute(void) {
	/* Atmel 2004, but not Temic 1994 */
	MESSSAGE_DEBUG("qforthExecute")
}

void qforthIf(void) {
	MESSSAGE_DEBUG("qforthIf")
}

void qforthOf(void) {
	MESSSAGE_DEBUG("qforthOf")
}

void qforthThen(void) {
	MESSSAGE_DEBUG("qforthThen")
}

void qforthCcrFetch(void) {
	MESSSAGE_DEBUG("qforthCcrFetch")
}

void qforthCcrStore(void) {
	MESSSAGE_DEBUG("qforthCcrStore")
}

void qforthClrBcf(void) {
	MESSSAGE_DEBUG("qforthClrBcf")
}

void qforthEi(void) {
	MESSSAGE_DEBUG("qforthEi")
}

void qforthExit(void) {
	MESSSAGE_DEBUG("qforthExit")
}

void qforthDi(void) {
	MESSSAGE_DEBUG("qforthDi")
}

void qforthSetBcf(void) {
	MESSSAGE_DEBUG("qforthSetBcf")
}

void qforthSwi0To7(void) {
	MESSSAGE_DEBUG("qforthSwi0To7")
}

void qforthTogBf(void) {
	MESSSAGE_DEBUG("qforthTogBf")
}

/* Mathematic Commands */
void qforthAdd(void) {
	MESSSAGE_DEBUG("qforthAdd")
}

void qforthPlus(void) {
	MESSSAGE_DEBUG("qforthPlus")
}

void qforthPlusStore(void) {
	MESSSAGE_DEBUG("qforthPlusStore")
}

void qforthInc(void) {
	MESSSAGE_DEBUG("qforthInc")
}

void qforthOnePlus(void) {
	MESSSAGE_DEBUG("qforthOnePlus")
}

void qforthOnePlusStore(void) {
	MESSSAGE_DEBUG("qforthOnePlusStore")
}

void qforthAddC(void) {
	MESSSAGE_DEBUG("qforthAddC")
}

void qforthPlusC(void) {
	MESSSAGE_DEBUG("qforthPlusC")
}

void qforthDPlus(void) {
	MESSSAGE_DEBUG("qforthDPlus")
}

void qforthDPlusStore(void) {
	MESSSAGE_DEBUG("qforthDPlusStore")
}

void qforthMPlus(void) {
	MESSSAGE_DEBUG("qforthMPlus")
}

void qforthTPlusStore(void) {
	MESSSAGE_DEBUG("qforthTPlusStore")
}

void qforthTDPlusStore(void) {
	MESSSAGE_DEBUG("qforthTDPlusStore")
}

void qforthDaa(void) {
	MESSSAGE_DEBUG("qforthDaa")
}

void qforthSub(void) {
	MESSSAGE_DEBUG("qforthSub")
}

void qforthMinus(void) {
	MESSSAGE_DEBUG("qforthMinus")
}

void qforthDec(void) {
	MESSSAGE_DEBUG("qforthDec")
}

void qforthOneMinus(void) {
	MESSSAGE_DEBUG("qforthOneMinus")
}

void qforthOneMinusStore(void) {
	MESSSAGE_DEBUG("qforthOneMinusStore")
}

void qforthSubb(void) {
	MESSSAGE_DEBUG("qforthSubb")
}

void qforthMinusC(void) {
	MESSSAGE_DEBUG("qforthMinusC")
}

void qforthDMinus(void) {
	MESSSAGE_DEBUG("qforthDMinus")
}

void qforthDMinusStore(void) {
	MESSSAGE_DEBUG("qforthDMinusStore")
}

void qforthMMinus(void) {
	MESSSAGE_DEBUG("qforthMMinus")
}

void qforthTMinusStore(void) {
	MESSSAGE_DEBUG("qforthTMinusStore")
}

void qforthTDMinus(void) {
	MESSSAGE_DEBUG("qforthTDMinus")
}

void qforthDas(void) {
	MESSSAGE_DEBUG("qforthDas")
}

void qforthTwoStar(void) {
	MESSSAGE_DEBUG("qforthTwoStar")
}

void qforthD2Star(void) {
	MESSSAGE_DEBUG("qforthD2Star")
}

void qforthTwoSlash(void) {
	MESSSAGE_DEBUG("qforthTwoSlash")
}

void qforthD2Slash(void) {
	MESSSAGE_DEBUG("qforthD2Slash")
}

void qforthCmpEq(void) {
	MESSSAGE_DEBUG("qforthCmpEq")
}

void qforthEqual(void) {
	MESSSAGE_DEBUG("qforthEqual")
}

void qforthZeroEqual(void) {
	MESSSAGE_DEBUG("qforthZeroEqual")
}

void qforthDEqual(void) {
	MESSSAGE_DEBUG("qforthDEqual")
}

void qforthD0Equal(void) {
	MESSSAGE_DEBUG("qforthD0Equal")
}

void qforthCmpGe(void) {
	MESSSAGE_DEBUG("qforthCmpGe")
}

void qforthGreaterEqual(void) {
	/* Temic 1994, but not Atmel 2004 */
	MESSSAGE_DEBUG("qforthCmpGe")
}

void qforthDGreaterEqual(void) {
	MESSSAGE_DEBUG("qforthDGreaterEqual")
}

void qforthCmpGt(void) {
	MESSSAGE_DEBUG("qforthCmpGt")
}

void qforthGreater(void) {
	MESSSAGE_DEBUG("qforthGreater")
}

void qforthDGreater(void) {
	MESSSAGE_DEBUG("qforthDGreater")
}

void qforthCmpLe(void) {
	MESSSAGE_DEBUG("qforthCmpLe")
}

void qforthLessEqual(void) {
	MESSSAGE_DEBUG("qforthLessEqual")
}

void qforthDLessEqual(void) {
	MESSSAGE_DEBUG("qforthDLessEqual")
}

void qforthCmpLt(void) {
	MESSSAGE_DEBUG("qforthCmpLt")
}

void qforthLess(void) {
	MESSSAGE_DEBUG("qforthLess")
}

void qforthDLess(void) {
	MESSSAGE_DEBUG("qforthDLess")
}

void qforthCmpNe(void) {
	MESSSAGE_DEBUG("qforthCmpNe")
}

void qforthUnequal(void) {
	MESSSAGE_DEBUG("qforthUnequal")
}

void qforthZeroUnequal(void) {
	MESSSAGE_DEBUG("qforthZeroUnequal")
}

void qforthD0Unequal(void) {
	MESSSAGE_DEBUG("qforthD0Unequal")
}

void qforthDUnequal(void) {
	MESSSAGE_DEBUG("qforthDUnequal")
}

void qforthMax(void) {
	MESSSAGE_DEBUG("qforthMax")
}

void qforthDMax(void) {
	MESSSAGE_DEBUG("qforthDMax")
}

void qforthMin(void) {
	MESSSAGE_DEBUG("qforthMin")
}

void qforthDMin(void) {
	MESSSAGE_DEBUG("qforthDMin")
}

void qforthNegate(void) {
	MESSSAGE_DEBUG("qforthNegate")
}

void qforthDNegate(void) {
	MESSSAGE_DEBUG("qforthDNegate")
}

void qforthNot(void) {
	MESSSAGE_DEBUG("qforthNot")
}

void qforthRoL(void) {
	MESSSAGE_DEBUG("qforthRoL")
}

void qforthRoR(void) {
	MESSSAGE_DEBUG("qforthRoR")
}

void qforthShL(void) {
	MESSSAGE_DEBUG("qforthShL")
}

void qforthShR(void) {
	MESSSAGE_DEBUG("qforthShR")
}

void qforthAnd(void) {
	MESSSAGE_DEBUG("qforthAnd")
}

void qforthOr(void) {
	MESSSAGE_DEBUG("qforthOr")
}

void qforthXor(void) {
	MESSSAGE_DEBUG("qforthXor")
}

void qforthToggle(void) {
	MESSSAGE_DEBUG("qforthToggle")
}

void qforthDToS(void) {
	MESSSAGE_DEBUG("qforthDToS")
}

void qforthSToD(void) {
	MESSSAGE_DEBUG("qforthSToD")
}

/* Memory Commands */
void qforthFetch(void) {
	MESSSAGE_DEBUG("qforthFetch")
}

void qforthTwoFetch(void) {
	MESSSAGE_DEBUG("qforthTwoFetch")
}

void qforthThreeFetch(void) {
	MESSSAGE_DEBUG("qforthThreeFetch")
}

void qforthXFetch(void) {
	MESSSAGE_DEBUG("qforthXFetch")
}

void qforthXXFetch(void) {
	MESSSAGE_DEBUG("qforthXXFetch")
}

void qforthXPlusXFetch(void) {
	MESSSAGE_DEBUG("qforthXPlusXFetch")
}

void qforthXXMinusFetch(void) {
	MESSSAGE_DEBUG("qforthXXMinusFetch")
}

void qforthYFetch(void) {
	MESSSAGE_DEBUG("qforthYFetch")
}

void qforthXYFetch(void) {
	MESSSAGE_DEBUG("qforthXYFetch")
}

void qforthXPlusYFetch(void) {
	MESSSAGE_DEBUG("qforthXPlusYFetch")
}

void qforthXYMinusFetch(void) {
	MESSSAGE_DEBUG("qforthXYMinusFetch")
}

void qforthDTableFetch(void) {
	MESSSAGE_DEBUG("qforthDTableFetch")
}

void qforthRomByteFetch(void) {
	MESSSAGE_DEBUG("qforthRomByteFetch")
}

void qforthStore(void) {
	MESSSAGE_DEBUG("qforthStore")
}

void qforthTwoStore(void) {
	MESSSAGE_DEBUG("qforthTwoStore")
}

void qforthThreeStore(void) {
	MESSSAGE_DEBUG("qforthThreeStore")
}

void qforthXStore(void) {
	MESSSAGE_DEBUG("qforthXStore")
}

void qforthXXStore(void) {
	MESSSAGE_DEBUG("qforthXXStore")
}

void qforthXPlusXStore(void) {
	MESSSAGE_DEBUG("qforthXPlusXStore")
}

void qforthXXMinusStore(void) {
	MESSSAGE_DEBUG("qforthXXMinusStore")
}

void qforthYStore(void) {
	MESSSAGE_DEBUG("qforthYStore")
}

void qforthXYStore(void) {
	MESSSAGE_DEBUG("qforthXYStore")
}

void qforthXPlusYStore(void) {
	MESSSAGE_DEBUG("qforthXPlusYStore")
}

void qforthXYMinusStore(void) {
	MESSSAGE_DEBUG("qforthXYMinusStore")
}

void qforthErase(void) {
	MESSSAGE_DEBUG("qforthErase")
}

void qforthFill(void) {
	MESSSAGE_DEBUG("qforthFill")
}

void qforthMove(void) {
	MESSSAGE_DEBUG("qforthMove")
}

void qforthMoveTo(void) {
	MESSSAGE_DEBUG("qforthMoveTo")
}

void qforthIn(void) {
	MESSSAGE_DEBUG("qforthIn")
}

void qforthOut(void) {
	MESSSAGE_DEBUG("qforthOut")
}

/* Commands */
/* qforthStore(void) */

void qforthTick(void) {
	MESSSAGE_DEBUG("qforthTick")
}

/* qforthNumDo(void) */
/* qforthNumLoop(void) */
/* qforthPlusLoop(void) */
/* qforthMinusQLeave(void) */

void qforthLessR(void) {
	MESSSAGE_DEBUG("qforthLessR")
}

void qforthToRP(void) {
	MESSSAGE_DEBUG("qforthToRP")
}

void qforthToSP(void) {
	MESSSAGE_DEBUG("qforthToSP")
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
	MESSSAGE_DEBUG("qforthXYMinuSFetch")
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
	MESSSAGE_DEBUG("qforthTwoRFetch")
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
	MESSSAGE_DEBUG("qforthSubB")
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
	MESSSAGE_DEBUG("qforthDToggle")
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
	MESSSAGE_DEBUG("qforthNop")
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
	MESSSAGE_DEBUG("qforthRoLL")
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
	MESSSAGE_DEBUG("qforthSPStore")
}

/* qforthSPFetch */
/* qforthSwap */

void qforthSwi0ToSw17(void) {
	MESSSAGE_DEBUG("qforthSwi0ToSw17")
}

/* qforthTPlusStore */
/* qforthTMinusStore */
/* qforthTDPlusStore */

void qforthTDMinusStore(void) {
	MESSSAGE_DEBUG("qforthTDMinusStore")
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
	MESSSAGE_DEBUG("qforthXorYStore")
}

/* qforthYFetch */

/* STACK Commands */
void qforthDecR(void) {
	MESSSAGE_DEBUG("qforthDecR")
}

void qforthDepth(void) {
	MESSSAGE_DEBUG("qforthDepth")
}

void qforthDrop(void) {
	MESSSAGE_DEBUG("qforthDrop")
}

void qforthTwoDrop(void) {
	MESSSAGE_DEBUG("qforthTwoDrop")
}

void qforthThreeDrop(void) {
	MESSSAGE_DEBUG("qforthThreeDrop")
}

void qforthDropR(void) {
	MESSSAGE_DEBUG("qforthDropR")
}

void qforthDup(void) {
	MESSSAGE_DEBUG("qforthDup")
}

void qforthQDup(void) {
	MESSSAGE_DEBUG("qforthQDup")
}

void qforthTwoDup(void) {
	MESSSAGE_DEBUG("qforthTwoDup")
}

void qforthThreeDup(void) {
	MESSSAGE_DEBUG("qforthThreeDup")
}

void qforthI(void) {
	MESSSAGE_DEBUG("qforthI")
}

void qforthIndex(void) {
	MESSSAGE_DEBUG("qforthIndex")
}

void qforthJ(void) {
	MESSSAGE_DEBUG("qforthJ")
}

void qforthNip(void) {
	MESSSAGE_DEBUG("qforthNip")
}

void qforthTwoNip(void) {
	MESSSAGE_DEBUG("qforthTwoNip")
}

void qforthOver(void) {
	MESSSAGE_DEBUG("qforthOver")
}

void qforthTwoOver(void) {
	MESSSAGE_DEBUG("qforthTwoOver")
}

void qforthPick(void) {
	MESSSAGE_DEBUG("qforthPick")
}

void qforthRFetch(void) {
	MESSSAGE_DEBUG("qforthRFetch")
}

/* qforthTwoFetch */

void qforthThreeRFetch(void) {
	MESSSAGE_DEBUG("qforthThreeRFetch")
}

void qforthToR(void) {
	MESSSAGE_DEBUG("qforthToR")
}

void qforthTwoToR(void) {
	MESSSAGE_DEBUG("qforthTwoToR")
}

void qforthThreeToR(void) {
	MESSSAGE_DEBUG("qforthThreeToR")
}

void qforthRTo(void) {
	MESSSAGE_DEBUG("qforthRTo")
}

void qforthTwoRTo(void) {
	MESSSAGE_DEBUG("qforthTwoRTo")
}

void qforthThreeRTo(void) {
	MESSSAGE_DEBUG("qforthThreeRTo")
}

void qforthRDepth(void) {
	MESSSAGE_DEBUG("qforthRDepth")
}

void qforthRFree(void) {
	MESSSAGE_DEBUG("qforthRFree")
}

void qforthRot(void) {
	MESSSAGE_DEBUG("qforthRot")
}

void qforthTwoRot(void) {
	MESSSAGE_DEBUG("qforthTwoRot")
}

void qforthLessRot(void) {
	MESSSAGE_DEBUG("qforthLessRot")
}

void qforthTwoLessRot(void) {
	MESSSAGE_DEBUG("qforthTwoLessRot")
}

void qforthRPFetch(void) {
	MESSSAGE_DEBUG("qforthRPFetch")
}

void qforthRPStore(void) {
	MESSSAGE_DEBUG("qforthRPStore")
}

void qforthSPFetch(void) {
	MESSSAGE_DEBUG("qforthSPFetch")
}

void qforthSpStore(void) {
	MESSSAGE_DEBUG("qforthSpStore")
}

void qforthSwap(void) {
	MESSSAGE_DEBUG("qforthSwap")
}

void qforthTwoSwap(void) {
	MESSSAGE_DEBUG("qforthTwoSwap")
}

void qforthTuck(void) {
	MESSSAGE_DEBUG("qforthTuck")
}

void qforthTwoTuck(void) {
	MESSSAGE_DEBUG("qforthTwoTuck")
}

#endif
