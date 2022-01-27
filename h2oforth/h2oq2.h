#ifndef H2OQ2
#define H2OQ2

/* The "qForth" of MARC4 microcontrollers */
/* Primitives */

/* Control Commands */
void qforthAgain(void) {
#if defined (__DEBUG__)
	printf("qforthAgain\n");
#endif
}

void qforthBegin(void) {
#if defined (__DEBUG__)
	printf("qforthBegin\n");
#endif
}

void qforthDo(void) {
#if defined (__DEBUG__)
	printf("qforthDo\n");
#endif
}

void qforthNumDo(void) {
#if defined (__DEBUG__)
	printf("qforthNumDo\n");
#endif
}

void qforthQDo(void) {
#if defined (__DEBUG__)
	printf("qforthQDo\n");
#endif
}

void qforthLoop(void) {
#if defined (__DEBUG__)
	printf("qforthLoop\n");
#endif
}

void qforthNumLoop(void) {
#if defined (__DEBUG__)
	printf("qforthNumLoop\n");
#endif
}

void qforthPlusLoop(void) {
#if defined (__DEBUG__)
	printf("qforthPlusLoop\n");
#endif
}

void qforthQLeave(void) {
#if defined (__DEBUG__)
	printf("qforthQLeave\n");
#endif
}

void qforthMinusQLeave(void) {
#if defined (__DEBUG__)
	printf("qforthMinusQLeave\n");
#endif
}

void qforthRepeat(void) {
#if defined (__DEBUG__)
	printf("qforthRepeat\n");
#endif
}

void qforthUntil(void) {
#if defined (__DEBUG__)
	printf("qforthUntil\n");
#endif
}

void qforthWhile(void) {
#if defined (__DEBUG__)
	printf("qforthWhile\n");
#endif
}

void qforthCase(void) {
#if defined (__DEBUG__)
	printf("qforthCase\n");
#endif
}

void qforthElse(void) {
#if defined (__DEBUG__)
	printf("qforthElse\n");
#endif
}

void qforthEndCase(void) {
#if defined (__DEBUG__)
	printf("qforthEndCase\n");
#endif
}

void qforthEndOf(void) {
#if defined (__DEBUG__)
	printf("qforthEndOf\n");
#endif
}

void qforthExecute(void) { 
/* Atmel 2004, but not Temic 1994 */
#if defined (__DEBUG__)
	printf("qforthExecute\n");
#endif
}
 
void qforthIf(void) {
#if defined (__DEBUG__)
	printf("qforthIf\n");
#endif
}

void qforthOf(void) {
#if defined (__DEBUG__)
	printf("qforthOf\n");
#endif
}

void qforthThen(void) {
#if defined (__DEBUG__)
	printf("qforthThen\n");
#endif
}

void qforthCcrFetch(void) {
#if defined (__DEBUG__)
	printf("qforthCcrFetch\n");
#endif
}

void qforthCcrStore(void) {
#if defined (__DEBUG__)
	printf("qforthCcrStore\n");
#endif
}

void qforthClrBcf(void) {
#if defined (__DEBUG__)
	printf("qforthClrBcf\n");
#endif
}

void qforthEi(void) {
#if defined (__DEBUG__)
	printf("qforthEi\n");
#endif
}

void qforthExit(void) {
#if defined (__DEBUG__)
	printf("qforthExit\n");
#endif
}

void qforthDi(void) {
#if defined (__DEBUG__)
	printf("qforthDi\n");
#endif
}

void qforthSetBcf(void) {
#if defined (__DEBUG__)
	printf("qforthSetBcf\n");
#endif
}

void qforthSwi0To7(void) {
#if defined (__DEBUG__)
	printf("qforthSwi0To7\n");
#endif
}

void qforthTogBf(void) {
#if defined (__DEBUG__)
	printf("qforthTogBf\n");
#endif
}

/* Mathematic Commands */
void qforthAdd(void) {
#if defined (__DEBUG__)
	printf("qforthAdd\n");
#endif
}

void qforthPlus(void) {
#if defined (__DEBUG__)
	printf("qforthPlus\n");
#endif
}

void qforthPlusStore(void) {
#if defined (__DEBUG__)
	printf("qforthPlusStore\n");
#endif
}

void qforthInc(void) {
#if defined (__DEBUG__)
	printf("qforthInc\n");
#endif
}

void qforthOnePlus(void) {
#if defined (__DEBUG__)
	printf("qforthOnePlus\n");
#endif
}

void qforthOnePlusStore(void) {
#if defined (__DEBUG__)
	printf("qforthOnePlusStore\n");
#endif
}

void qforthAddC(void) {
#if defined (__DEBUG__)
	printf("qforthAddC\n");
#endif
}

void qforthPlusC (void) {
#if defined (__DEBUG__)
	printf("qforthPlusC\n");
#endif
}

void qforthDPlus(void) {
#if defined (__DEBUG__)
	printf("qforthDPlus\n");
#endif
}

void qforthDPlusStore(void) {
#if defined (__DEBUG__)
	printf("qforthDPlusStore\n");
#endif
}

void qforthMPlus(void) {
#if defined (__DEBUG__)
	printf("qforthMPlus\n");
#endif
}

void qforthTPlusStore(void) {
#if defined (__DEBUG__)
	printf("qforthTPlusStore\n");
#endif
}

void qforthTDPlusStore(void) {
#if defined (__DEBUG__)
	printf("qforthTDPlusStore\n");
#endif
}

void qforthDaa(void) {
#if defined (__DEBUG__)
	printf("qforthDaa\n");
#endif
}

void qforthSub(void) {
#if defined (__DEBUG__)
	printf("qforthSub\n");
#endif
}

void qforthMinus(void) {
#if defined (__DEBUG__)
	printf("qforthMinus\n");
#endif
}

void qforthDec(void) {
#if defined (__DEBUG__)
	printf("qforthDec\n");
#endif
}

void qforthOneMinus(void) {
#if defined (__DEBUG__)
	printf("qforthOneMinus\n");
#endif
}

void qforthOneMinusStore(void) {
#if defined (__DEBUG__)
	printf("qforthOneMinusStore\n");
#endif
}

void qforthSubb(void) {
#if defined (__DEBUG__)
	printf("qforthSubb\n");
#endif
}

void qforthMinusC(void) {
#if defined (__DEBUG__)
	printf("qforthMinusC\n");
#endif
}

void qforthDMinus(void) {
#if defined (__DEBUG__)
	printf("qforthDMinus\n");
#endif
}

void qforthDMinusStore(void) {
#if defined (__DEBUG__)
	printf("qforthDMinusStore\n");
#endif
}

void qforthMMinus(void) {
#if defined (__DEBUG__)
	printf("qforthMMinus\n");
#endif
}

void qforthTMinusStore(void) {
#if defined (__DEBUG__)
	printf("qforthTMinusStore\n");
#endif
}

void qforthTDMinus(void) {
#if defined (__DEBUG__)
	printf("qforthTDMinus\n");
#endif
}

void qforthDas(void) {
#if defined (__DEBUG__)
	printf("qforthDas\n");
#endif
}

void qforthTwoStar(void) {
#if defined (__DEBUG__)
	printf("qforthTwoStar\n");
#endif
}

void qforthD2Star(void) {
#if defined (__DEBUG__)
	printf("qforthD2Star\n");
#endif
}

void qforthTwoSlash(void) {
#if defined (__DEBUG__)
	printf("qforthTwoSlash\n");
#endif
}

void qforthD2Slash(void) {
#if defined (__DEBUG__)
	printf("qforthD2Slash\n");
#endif
}

void qforthCmpEq(void) {
#if defined (__DEBUG__)
	printf("qforthCmpEq\n");
#endif
}

void qforthEqual(void) {
#if defined (__DEBUG__)
	printf("qforthEqual\n");
#endif
}

void qforthZeroEqual(void) {
#if defined (__DEBUG__)
	printf("qforthZeroEqual\n");
#endif
}

void qforthDEqual(void) {
#if defined (__DEBUG__)
	printf("qforthDEqual\n");
#endif
}

void qforthD0Equal(void) {
#if defined (__DEBUG__)
	printf("qforthD0Equal\n");
#endif
}

void qforthCmpGe(void) {
#if defined (__DEBUG__)
	printf("qforthCmpGe\n");
#endif
}

void qforthGreaterEqual(void) {
/* Temic 1994, but not Atmel 2004 */
#if defined (__DEBUG__)
	printf("qforthCmpGe\n");
#endif
}

void qforthDGreaterEqual(void) {
#if defined (__DEBUG__)
	printf("qforthDGreaterEqual\n");
#endif
}

void qforthCmpGt(void) {
#if defined (__DEBUG__)
	printf("qforthCmpGt\n");
#endif
}

void qforthGreater(void) {
#if defined (__DEBUG__)
	printf("qforthGreater\n");
#endif
}

void qforthDGreater(void) {
#if defined (__DEBUG__)
	printf("qforthDGreater\n");
#endif
}

void qforthCmpLe(void) {
#if defined (__DEBUG__)
	printf("qforthCmpLe\n");
#endif
}

void qforthLessEqual(void) {
#if defined (__DEBUG__)
	printf("qforthLessEqual\n");
#endif
}

void qforthDLessEqual(void) {
#if defined (__DEBUG__)
	printf("qforthDLessEqual\n");
#endif
}

void qforthCmpLt(void) {
#if defined (__DEBUG__)
	printf("qforthCmpLt\n");
#endif
}

void qforthLess(void) {
#if defined (__DEBUG__)
	printf("qforthLess\n");
#endif
}

void qforthDLess(void) {
#if defined (__DEBUG__)
	printf("qforthDLess\n");
#endif
}

void qforthCmpNe(void) {
#if defined (__DEBUG__)
	printf("qforthCmpNe\n");
#endif
}

void qforthUnequal(void) {
#if defined (__DEBUG__)
	printf("qforthUnequal\n");
#endif
}

void qforthZeroUnequal(void) {
#if defined (__DEBUG__)
	printf("qforthZeroUnequal\n");
#endif
}

void qforthD0Unequal(void) {
#if defined (__DEBUG__)
	printf("qforthD0Unequal\n");
#endif
}

void qforthDUnequal(void) {
#if defined (__DEBUG__)
	printf("qforthDUnequal\n");
#endif
}

void qforthMax(void) {
#if defined (__DEBUG__)
	printf("qforthMax\n");
#endif
}

void qforthDMax(void) {
#if defined (__DEBUG__)
	printf("qforthDMax\n");
#endif
}

void qforthMin(void) {
#if defined (__DEBUG__)
	printf("qforthMin\n");
#endif
}

void qforthDMin(void) {
#if defined (__DEBUG__)
	printf("qforthDMin\n");
#endif
}

void qforthNegate(void) {
#if defined (__DEBUG__)
	printf("qforthNegate\n");
#endif
}

void qforthDNegate(void) {
#if defined (__DEBUG__)
	printf("qforthDNegate\n");
#endif
}

void qforthNot(void) {
#if defined (__DEBUG__)
	printf("qforthNot\n");
#endif
}

void qforthRoL(void) {
#if defined (__DEBUG__)
	printf("qforthRoL\n");
#endif
}

void qforthRoR(void) {
#if defined (__DEBUG__)
	printf("qforthRoR\n");
#endif
}

void qforthShL(void) {
#if defined (__DEBUG__)
	printf("qforthShL\n");
#endif
}

void qforthShR(void) {
#if defined (__DEBUG__)
	printf("qforthShR\n");
#endif
}

void qforthAnd(void) {
#if defined (__DEBUG__)
	printf("qforthAnd\n");
#endif
}

void qforthOr(void) {
#if defined (__DEBUG__)
	printf("qforthOr\n");
#endif
}

void qforthXor(void) {
#if defined (__DEBUG__)
	printf("qforthXor\n");
#endif
}

void qforthToggle(void) {
#if defined (__DEBUG__)
	printf("qforthToggle\n");
#endif
}

void qforthDToS(void) {
#if defined (__DEBUG__)
	printf("qforthDToS\n");
#endif
}

void qforthSToD(void) {
#if defined (__DEBUG__)
	printf("qforthSToD\n");
#endif
}

/* Memory Commands */
void qforthFetch(void) {
#if defined (__DEBUG__)
	printf("qforthFetch\n");
#endif
}

void qforthTwoFetch(void) {
#if defined (__DEBUG__)
	printf("qforthTwoFetch\n");
#endif
}

void qforthThreeFetch(void) {
#if defined (__DEBUG__)
	printf("qforthThreeFetch\n");
#endif
}

void qforthXFetch(void) {
#if defined (__DEBUG__)
	printf("qforthXFetch\n");
#endif
}

void qforthXXFetch(void) {
#if defined (__DEBUG__)
	printf("qforthXXFetch\n");
#endif
}

void qforthXPlusXFetch(void) {
#if defined (__DEBUG__)
	printf("qforthXPlusXFetch\n");
#endif
}

void qforthXXMinusFetch(void) {
#if defined (__DEBUG__)
	printf("qforthXXMinusFetch\n");
#endif
}

void qforthYFetch(void) {
#if defined (__DEBUG__)
	printf("qforthYFetch\n");
#endif
}

void qforthXYFetch(void) {
#if defined (__DEBUG__)
	printf("qforthXYFetch\n");
#endif
}

void qforthXPlusYFetch(void) {
#if defined (__DEBUG__)
	printf("qforthXPlusYFetch\n");
#endif
}

void qforthXYMinusFetch(void) {
#if defined (__DEBUG__)
	printf("qforthXYMinusFetch\n");
#endif
}

void qforthDTableFetch(void) {
#if defined (__DEBUG__)
	printf("qforthDTableFetch\n");
#endif
}

void qforthRomByteFetch(void) {
#if defined (__DEBUG__)
	printf("qforthRomByteFetch\n");
#endif
}

void qforthStore(void) {
#if defined (__DEBUG__)
	printf("qforthStore\n");
#endif
}

void qforthTwoStore(void) {
#if defined (__DEBUG__)
	printf("qforthTwoStore\n");
#endif
}

void qforthThreeStore(void) {
#if defined (__DEBUG__)
	printf("qforthThreeStore\n");
#endif
}

void qforthXStore(void) {
#if defined (__DEBUG__)
	printf("qforthXStore\n");
#endif
}

void qforthXXStore(void) {
#if defined (__DEBUG__)
	printf("qforthXXStore\n");
#endif
}

void qforthXPlusXStore(void) {
#if defined (__DEBUG__)
	printf("qforthXPlusXStore\n");
#endif
}

void qforthXXMinusStore(void) {
#if defined (__DEBUG__)
	printf("qforthXXMinusStore\n");
#endif
}

void qforthYStore(void) {
#if defined (__DEBUG__)
	printf("qforthYStore\n");
#endif
}

void qforthXYStore(void) {
#if defined (__DEBUG__)
	printf("qforthXYStore\n");
#endif
}

void qforthXPlusYStore(void) {
#if defined (__DEBUG__)
	printf("qforthXPlusYStore\n");
#endif
}

void qforthXYMinusStore(void) {
#if defined (__DEBUG__)
	printf("qforthXYMinusStore\n");
#endif
}

void qforthErase(void) {
#if defined (__DEBUG__)
	printf("qforthErase\n");
#endif
}

void qforthFill(void) {
#if defined (__DEBUG__)
	printf("qforthFill\n");
#endif
}

void qforthMove(void) {
#if defined (__DEBUG__)
	printf("qforthMove\n");
#endif
}

void qforthMoveTo(void) {
#if defined (__DEBUG__)
	printf("qforthMoveTo\n");
#endif
}

void qforthIn(void) {
#if defined (__DEBUG__)
	printf("qforthIn\n");
#endif
}

void qforthOut(void) {
#if defined (__DEBUG__)
	printf("qforthOut\n");
#endif
}

/* Commands */
/* qforthStore(void) */

void qforthTick(void) {
#if defined (__DEBUG__)
	printf("qforthTick\n");
#endif
}

/* qforthNumDo(void) */
/* qforthNumLoop(void) */
/* qforthPlusLoop(void) */
/* qforthMinusQLeave(void) */

void qforthLessR(void) {
#if defined (__DEBUG__)
	printf("qforthLessR\n");
#endif
}

void qforthToRP(void) {
#if defined (__DEBUG__)
	printf("qforthToRP\n");
#endif
}

void qforthToSP(void) {
#if defined (__DEBUG__)
	printf("qforthToSP\n");
#endif
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
#if defined (__DEBUG__)
	printf("qforthXYMinuSFetch\n");
#endif
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
#if defined (__DEBUG__)
	printf("qforthTwoRFetch\n");
#endif
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
#if defined (__DEBUG__)
	printf("qforthSubB\n");
#endif
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
#if defined (__DEBUG__)
	printf("qforthDToggle\n");
#endif
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
#if defined (__DEBUG__)
	printf("qforthNop\n");
#endif
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
#if defined (__DEBUG__)
	printf("qforthRoLL\n");
#endif
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
#if defined (__DEBUG__)
	printf("qforthSPStore\n");
#endif
}

/* qforthSPFetch */
/* qforthSwap */

void qforthSwi0ToSw17(void) {
#if defined (__DEBUG__)
	printf("qforthSwi0ToSw17\n");
#endif
}

/* qforthTPlusStore */
/* qforthTMinusStore */
/* qforthTDPlusStore */

void qforthTDMinusStore(void) {
#if defined (__DEBUG__)
	printf("qforthTDMinusStore\n");
#endif
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
#if defined (__DEBUG__)
	printf("qforthXorYStore\n");
#endif
}

/* qforthYFetch */

/* STACK Commands */
void qforthDecR(void) {
#if defined (__DEBUG__)
	printf("qforthDecR\n");
#endif
}

void qforthDepth(void) {
#if defined (__DEBUG__)
	printf("qforthDepth\n");
#endif
}

void qforthDrop(void) {
#if defined (__DEBUG__)
	printf("qforthDrop\n");
#endif
}

void qforthTwoDrop(void) {
#if defined (__DEBUG__)
	printf("qforthTwoDrop\n");
#endif
}

void qforthThreeDrop(void) {
#if defined (__DEBUG__)
	printf("qforthThreeDrop\n");
#endif
}

void qforthDropR(void) {
#if defined (__DEBUG__)
	printf("qforthDropR\n");
#endif
}

void qforthDup(void) {
#if defined (__DEBUG__)
	printf("qforthDup\n");
#endif
}

void qforthQDup(void) {
#if defined (__DEBUG__)
	printf("qforthQDup\n");
#endif
}

void qforthTwoDup(void) {
#if defined (__DEBUG__)
	printf("qforthTwoDup\n");
#endif
}

void qforthThreeDup(void) {
#if defined (__DEBUG__)
	printf("qforthThreeDup\n");
#endif
}

void qforthI(void) {
#if defined (__DEBUG__)
	printf("qforthI\n");
#endif
}

void qforthIndex(void) {
#if defined (__DEBUG__)
	printf("qforthIndex\n");
#endif
}

void qforthJ(void) {
#if defined (__DEBUG__)
	printf("qforthJ\n");
#endif
}

void qforthNip(void) {
#if defined (__DEBUG__)
	printf("qforthNip\n");
#endif
}

void qforthTwoNip(void) {
#if defined (__DEBUG__)
	printf("qforthTwoNip\n");
#endif
}

void qforthOver(void) {
#if defined (__DEBUG__)
	printf("qforthOver\n");
#endif
}

void qforthTwoOver(void) {
#if defined (__DEBUG__)
	printf("qforthTwoOver\n");
#endif
}

void qforthPick(void) {
#if defined (__DEBUG__)
	printf("qforthPick\n");
#endif
}

void qforthRFetch(void) {
#if defined (__DEBUG__)
	printf("qforthRFetch\n");
#endif
}

/* qforthTwoFetch */

void qforthThreeRFetch(void) {
#if defined (__DEBUG__)
	printf("qforthThreeRFetch\n");
#endif
}

void qforthToR(void) {
#if defined (__DEBUG__)
	printf("qforthToR\n");
#endif
}

void qforthTwoToR(void) {
#if defined (__DEBUG__)
	printf("qforthTwoToR\n");
#endif
}

void qforthThreeToR(void) {
#if defined (__DEBUG__)
	printf("qforthThreeToR\n");
#endif
}

void qforthRTo(void) {
#if defined (__DEBUG__)
	printf("qforthRTo\n");
#endif
}

void qforthTwoRTo(void) {
#if defined (__DEBUG__)
	printf("qforthTwoRTo\n");
#endif
}

void qforthThreeRTo(void) {
#if defined (__DEBUG__)
	printf("qforthThreeRTo\n");
#endif
}

void qforthRDepth(void) {
#if defined (__DEBUG__)
	printf("qforthRDepth\n");
#endif
}

void qforthRFree(void) {
#if defined (__DEBUG__)
	printf("qforthRFree\n");
#endif
}

void qforthRot(void) {
#if defined (__DEBUG__)
	printf("qforthRot\n");
#endif
}

void qforthTwoRot(void) {
#if defined (__DEBUG__)
	printf("qforthTwoRot\n");
#endif
}

void qforthLessRot(void) {
#if defined (__DEBUG__)
	printf("qforthLessRot\n");
#endif
}

void qforthTwoLessRot(void) {
#if defined (__DEBUG__)
	printf("qforthTwoLessRot\n");
#endif
}

void qforthRPFetch(void) {
#if defined (__DEBUG__)
	printf("qforthRPFetch\n");
#endif
}

void qforthRPStore(void) {
#if defined (__DEBUG__)
	printf("qforthRPStore\n");
#endif
}

void qforthSPFetch(void) {
#if defined (__DEBUG__)
	printf("qforthSPFetch\n");
#endif
}

void qforthSpStore(void) {
#if defined (__DEBUG__)
	printf("qforthSpStore\n");
#endif
}

void qforthSwap(void) {
#if defined (__DEBUG__)
	printf("qforthSwap\n");
#endif
}

void qforthTwoSwap(void) {
#if defined (__DEBUG__)
	printf("qforthTwoSwap\n");
#endif
}

void qforthTuck(void) {
#if defined (__DEBUG__)
	printf("qforthTuck\n");
#endif
}

void qforthTwoTuck(void) {
#if defined (__DEBUG__)
	printf("qforthTwoTuck\n");
#endif
}

#endif
