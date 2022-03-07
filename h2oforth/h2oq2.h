#ifndef H2OQ2
#define H2OQ2

/* The "qForth" of MARC4 microcontrollers */
/* Primitives */

/* Control Commands */
void qforthAgain(void) {
	SMSG_DEBUG("qforthAgain")
}

void qforthBegin(void) {
	SMSG_DEBUG("qforthBegin")
}

void qforthDo(void) {
	SMSG_DEBUG("qforthDo")
}

void qforthNumDo(void) {
	SMSG_DEBUG("qforthNumDo")
}

void qforthQDo(void) {
	SMSG_DEBUG("qforthQDo")
}

void qforthLoop(void) {
	SMSG_DEBUG("qforthLoop")
}

void qforthNumLoop(void) {
	SMSG_DEBUG("qforthNumLoop")
}

void qforthPlusLoop(void) {
	SMSG_DEBUG("qforthPlusLoop")
}

void qforthQLeave(void) {
	SMSG_DEBUG("qforthQLeave")
}

void qforthMinusQLeave(void) {
	SMSG_DEBUG("qforthMinusQLeave")
}

void qforthRepeat(void) {
	SMSG_DEBUG("qforthRepeat")
}

void qforthUntil(void) {
	SMSG_DEBUG("qforthUntil")
}

void qforthWhile(void) {
	SMSG_DEBUG("qforthWhile")
}

void qforthCase(void) {
	SMSG_DEBUG("qforthCase")
}

void qforthElse(void) {
	SMSG_DEBUG("qforthElse")
}

void qforthEndCase(void) {
	SMSG_DEBUG("qforthEndCase")
}

void qforthEndOf(void) {
	SMSG_DEBUG("qforthEndOf")
}

void qforthExecute(void) {
	/* Atmel 2004, but not Temic 1994 */
	SMSG_DEBUG("qforthExecute")
}

void qforthIf(void) {
	SMSG_DEBUG("qforthIf")
}

void qforthOf(void) {
	SMSG_DEBUG("qforthOf")
}

void qforthThen(void) {
	SMSG_DEBUG("qforthThen")
}

void qforthCcrFetch(void) {
	SMSG_DEBUG("qforthCcrFetch")
}

void qforthCcrStore(void) {
	SMSG_DEBUG("qforthCcrStore")
}

void qforthClrBcf(void) {
	SMSG_DEBUG("qforthClrBcf")
}

void qforthEi(void) {
	SMSG_DEBUG("qforthEi")
}

void qforthExit(void) {
	SMSG_DEBUG("qforthExit")
}

void qforthDi(void) {
	SMSG_DEBUG("qforthDi")
}

void qforthSetBcf(void) {
	SMSG_DEBUG("qforthSetBcf")
}

void qforthSwi0To7(void) {
	SMSG_DEBUG("qforthSwi0To7")
}

void qforthTogBf(void) {
	SMSG_DEBUG("qforthTogBf")
}

/* Mathematic Commands */
void qforthAdd(void) {
	SMSG_DEBUG("qforthAdd")
}

void qforthPlus(void) {
	SMSG_DEBUG("qforthPlus")
}

void qforthPlusStore(void) {
	SMSG_DEBUG("qforthPlusStore")
}

void qforthInc(void) {
	SMSG_DEBUG("qforthInc")
}

void qforthOnePlus(void) {
	SMSG_DEBUG("qforthOnePlus")
}

void qforthOnePlusStore(void) {
	SMSG_DEBUG("qforthOnePlusStore")
}

void qforthAddC(void) {
	SMSG_DEBUG("qforthAddC")
}

void qforthPlusC(void) {
	SMSG_DEBUG("qforthPlusC")
}

void qforthDPlus(void) {
	SMSG_DEBUG("qforthDPlus")
}

void qforthDPlusStore(void) {
	SMSG_DEBUG("qforthDPlusStore")
}

void qforthMPlus(void) {
	SMSG_DEBUG("qforthMPlus")
}

void qforthTPlusStore(void) {
	SMSG_DEBUG("qforthTPlusStore")
}

void qforthTDPlusStore(void) {
	SMSG_DEBUG("qforthTDPlusStore")
}

void qforthDaa(void) {
	SMSG_DEBUG("qforthDaa")
}

void qforthSub(void) {
	SMSG_DEBUG("qforthSub")
}

void qforthMinus(void) {
	SMSG_DEBUG("qforthMinus")
}

void qforthDec(void) {
	SMSG_DEBUG("qforthDec")
}

void qforthOneMinus(void) {
	SMSG_DEBUG("qforthOneMinus")
}

void qforthOneMinusStore(void) {
	SMSG_DEBUG("qforthOneMinusStore")
}

void qforthSubb(void) {
	SMSG_DEBUG("qforthSubb")
}

void qforthMinusC(void) {
	SMSG_DEBUG("qforthMinusC")
}

void qforthDMinus(void) {
	SMSG_DEBUG("qforthDMinus")
}

void qforthDMinusStore(void) {
	SMSG_DEBUG("qforthDMinusStore")
}

void qforthMMinus(void) {
	SMSG_DEBUG("qforthMMinus")
}

void qforthTMinusStore(void) {
	SMSG_DEBUG("qforthTMinusStore")
}

void qforthTDMinus(void) {
	SMSG_DEBUG("qforthTDMinus")
}

void qforthDas(void) {
	SMSG_DEBUG("qforthDas")
}

void qforthTwoStar(void) {
	SMSG_DEBUG("qforthTwoStar")
}

void qforthD2Star(void) {
	SMSG_DEBUG("qforthD2Star")
}

void qforthTwoSlash(void) {
	SMSG_DEBUG("qforthTwoSlash")
}

void qforthD2Slash(void) {
	SMSG_DEBUG("qforthD2Slash")
}

void qforthCmpEq(void) {
	SMSG_DEBUG("qforthCmpEq")
}

void qforthEqual(void) {
	SMSG_DEBUG("qforthEqual")
}

void qforthZeroEqual(void) {
	SMSG_DEBUG("qforthZeroEqual")
}

void qforthDEqual(void) {
	SMSG_DEBUG("qforthDEqual")
}

void qforthD0Equal(void) {
	SMSG_DEBUG("qforthD0Equal")
}

void qforthCmpGe(void) {
	SMSG_DEBUG("qforthCmpGe")
}

void qforthGreaterEqual(void) {
	/* Temic 1994, but not Atmel 2004 */
	SMSG_DEBUG("qforthCmpGe")
}

void qforthDGreaterEqual(void) {
	SMSG_DEBUG("qforthDGreaterEqual")
}

void qforthCmpGt(void) {
	SMSG_DEBUG("qforthCmpGt")
}

void qforthGreater(void) {
	SMSG_DEBUG("qforthGreater")
}

void qforthDGreater(void) {
	SMSG_DEBUG("qforthDGreater")
}

void qforthCmpLe(void) {
	SMSG_DEBUG("qforthCmpLe")
}

void qforthLessEqual(void) {
	SMSG_DEBUG("qforthLessEqual")
}

void qforthDLessEqual(void) {
	SMSG_DEBUG("qforthDLessEqual")
}

void qforthCmpLt(void) {
	SMSG_DEBUG("qforthCmpLt")
}

void qforthLess(void) {
	SMSG_DEBUG("qforthLess")
}

void qforthDLess(void) {
	SMSG_DEBUG("qforthDLess")
}

void qforthCmpNe(void) {
	SMSG_DEBUG("qforthCmpNe")
}

void qforthUnequal(void) {
	SMSG_DEBUG("qforthUnequal")
}

void qforthZeroUnequal(void) {
	SMSG_DEBUG("qforthZeroUnequal")
}

void qforthD0Unequal(void) {
	SMSG_DEBUG("qforthD0Unequal")
}

void qforthDUnequal(void) {
	SMSG_DEBUG("qforthDUnequal")
}

void qforthMax(void) {
	SMSG_DEBUG("qforthMax")
}

void qforthDMax(void) {
	SMSG_DEBUG("qforthDMax")
}

void qforthMin(void) {
	SMSG_DEBUG("qforthMin")
}

void qforthDMin(void) {
	SMSG_DEBUG("qforthDMin")
}

void qforthNegate(void) {
	SMSG_DEBUG("qforthNegate")
}

void qforthDNegate(void) {
	SMSG_DEBUG("qforthDNegate")
}

void qforthNot(void) {
	SMSG_DEBUG("qforthNot")
}

void qforthRoL(void) {
	SMSG_DEBUG("qforthRoL")
}

void qforthRoR(void) {
	SMSG_DEBUG("qforthRoR")
}

void qforthShL(void) {
	SMSG_DEBUG("qforthShL")
}

void qforthShR(void) {
	SMSG_DEBUG("qforthShR")
}

void qforthAnd(void) {
	SMSG_DEBUG("qforthAnd")
}

void qforthOr(void) {
	SMSG_DEBUG("qforthOr")
}

void qforthXor(void) {
	SMSG_DEBUG("qforthXor")
}

void qforthToggle(void) {
	SMSG_DEBUG("qforthToggle")
}

void qforthDToS(void) {
	SMSG_DEBUG("qforthDToS")
}

void qforthSToD(void) {
	SMSG_DEBUG("qforthSToD")
}

/* Memory Commands */
void qforthFetch(void) {
	SMSG_DEBUG("qforthFetch")
}

void qforthTwoFetch(void) {
	SMSG_DEBUG("qforthTwoFetch")
}

void qforthThreeFetch(void) {
	SMSG_DEBUG("qforthThreeFetch")
}

void qforthXFetch(void) {
	SMSG_DEBUG("qforthXFetch")
}

void qforthXXFetch(void) {
	SMSG_DEBUG("qforthXXFetch")
}

void qforthXPlusXFetch(void) {
	SMSG_DEBUG("qforthXPlusXFetch")
}

void qforthXXMinusFetch(void) {
	SMSG_DEBUG("qforthXXMinusFetch")
}

void qforthYFetch(void) {
	SMSG_DEBUG("qforthYFetch")
}

void qforthXYFetch(void) {
	SMSG_DEBUG("qforthXYFetch")
}

void qforthXPlusYFetch(void) {
	SMSG_DEBUG("qforthXPlusYFetch")
}

void qforthXYMinusFetch(void) {
	SMSG_DEBUG("qforthXYMinusFetch")
}

void qforthDTableFetch(void) {
	SMSG_DEBUG("qforthDTableFetch")
}

void qforthRomByteFetch(void) {
	SMSG_DEBUG("qforthRomByteFetch")
}

void qforthStore(void) {
	SMSG_DEBUG("qforthStore")
}

void qforthTwoStore(void) {
	SMSG_DEBUG("qforthTwoStore")
}

void qforthThreeStore(void) {
	SMSG_DEBUG("qforthThreeStore")
}

void qforthXStore(void) {
	SMSG_DEBUG("qforthXStore")
}

void qforthXXStore(void) {
	SMSG_DEBUG("qforthXXStore")
}

void qforthXPlusXStore(void) {
	SMSG_DEBUG("qforthXPlusXStore")
}

void qforthXXMinusStore(void) {
	SMSG_DEBUG("qforthXXMinusStore")
}

void qforthYStore(void) {
	SMSG_DEBUG("qforthYStore")
}

void qforthXYStore(void) {
	SMSG_DEBUG("qforthXYStore")
}

void qforthXPlusYStore(void) {
	SMSG_DEBUG("qforthXPlusYStore")
}

void qforthXYMinusStore(void) {
	SMSG_DEBUG("qforthXYMinusStore")
}

void qforthErase(void) {
	SMSG_DEBUG("qforthErase")
}

void qforthFill(void) {
	SMSG_DEBUG("qforthFill")
}

void qforthMove(void) {
	SMSG_DEBUG("qforthMove")
}

void qforthMoveTo(void) {
	SMSG_DEBUG("qforthMoveTo")
}

void qforthIn(void) {
	SMSG_DEBUG("qforthIn")
}

void qforthOut(void) {
	SMSG_DEBUG("qforthOut")
}

/* Commands */
/* qforthStore(void) */

void qforthTick(void) {
	SMSG_DEBUG("qforthTick")
}

/* qforthNumDo(void) */
/* qforthNumLoop(void) */
/* qforthPlusLoop(void) */
/* qforthMinusQLeave(void) */

void qforthLessR(void) {
	SMSG_DEBUG("qforthLessR")
}

void qforthToRP(void) {
	SMSG_DEBUG("qforthToRP")
}

void qforthToSP(void) {
	SMSG_DEBUG("qforthToSP")
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
	SMSG_DEBUG("qforthXYMinuSFetch")
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
	SMSG_DEBUG("qforthTwoRFetch")
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
	SMSG_DEBUG("qforthSubB")
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
	SMSG_DEBUG("qforthDToggle")
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
	SMSG_DEBUG("qforthNop")
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
	SMSG_DEBUG("qforthRoLL")
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
	SMSG_DEBUG("qforthSPStore")
}

/* qforthSPFetch */
/* qforthSwap */

void qforthSwi0ToSw17(void) {
	SMSG_DEBUG("qforthSwi0ToSw17")
}

/* qforthTPlusStore */
/* qforthTMinusStore */
/* qforthTDPlusStore */

void qforthTDMinusStore(void) {
	SMSG_DEBUG("qforthTDMinusStore")
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
	SMSG_DEBUG("qforthXorYStore")
}

/* qforthYFetch */

/* STACK Commands */
void qforthDecR(void) {
	SMSG_DEBUG("qforthDecR")
}

void qforthDepth(void) {
	SMSG_DEBUG("qforthDepth")
}

void qforthDrop(void) {
	SMSG_DEBUG("qforthDrop")
}

void qforthTwoDrop(void) {
	SMSG_DEBUG("qforthTwoDrop")
}

void qforthThreeDrop(void) {
	SMSG_DEBUG("qforthThreeDrop")
}

void qforthDropR(void) {
	SMSG_DEBUG("qforthDropR")
}

void qforthDup(void) {
	SMSG_DEBUG("qforthDup")
}

void qforthQDup(void) {
	SMSG_DEBUG("qforthQDup")
}

void qforthTwoDup(void) {
	SMSG_DEBUG("qforthTwoDup")
}

void qforthThreeDup(void) {
	SMSG_DEBUG("qforthThreeDup")
}

void qforthI(void) {
	SMSG_DEBUG("qforthI")
}

void qforthIndex(void) {
	SMSG_DEBUG("qforthIndex")
}

void qforthJ(void) {
	SMSG_DEBUG("qforthJ")
}

void qforthNip(void) {
	SMSG_DEBUG("qforthNip")
}

void qforthTwoNip(void) {
	SMSG_DEBUG("qforthTwoNip")
}

void qforthOver(void) {
	SMSG_DEBUG("qforthOver")
}

void qforthTwoOver(void) {
	SMSG_DEBUG("qforthTwoOver")
}

void qforthPick(void) {
	SMSG_DEBUG("qforthPick")
}

void qforthRFetch(void) {
	SMSG_DEBUG("qforthRFetch")
}

/* qforthTwoFetch */

void qforthThreeRFetch(void) {
	SMSG_DEBUG("qforthThreeRFetch")
}

void qforthToR(void) {
	SMSG_DEBUG("qforthToR")
}

void qforthTwoToR(void) {
	SMSG_DEBUG("qforthTwoToR")
}

void qforthThreeToR(void) {
	SMSG_DEBUG("qforthThreeToR")
}

void qforthRTo(void) {
	SMSG_DEBUG("qforthRTo")
}

void qforthTwoRTo(void) {
	SMSG_DEBUG("qforthTwoRTo")
}

void qforthThreeRTo(void) {
	SMSG_DEBUG("qforthThreeRTo")
}

void qforthRDepth(void) {
	SMSG_DEBUG("qforthRDepth")
}

void qforthRFree(void) {
	SMSG_DEBUG("qforthRFree")
}

void qforthRot(void) {
	SMSG_DEBUG("qforthRot")
}

void qforthTwoRot(void) {
	SMSG_DEBUG("qforthTwoRot")
}

void qforthLessRot(void) {
	SMSG_DEBUG("qforthLessRot")
}

void qforthTwoLessRot(void) {
	SMSG_DEBUG("qforthTwoLessRot")
}

void qforthRPFetch(void) {
	SMSG_DEBUG("qforthRPFetch")
}

void qforthRPStore(void) {
	SMSG_DEBUG("qforthRPStore")
}

void qforthSPFetch(void) {
	SMSG_DEBUG("qforthSPFetch")
}

void qforthSpStore(void) {
	SMSG_DEBUG("qforthSpStore")
}

void qforthSwap(void) {
	SMSG_DEBUG("qforthSwap")
}

void qforthTwoSwap(void) {
	SMSG_DEBUG("qforthTwoSwap")
}

void qforthTuck(void) {
	SMSG_DEBUG("qforthTuck")
}

void qforthTwoTuck(void) {
	SMSG_DEBUG("qforthTwoTuck")
}

#endif
