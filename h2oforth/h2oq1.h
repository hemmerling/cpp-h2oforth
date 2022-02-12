#ifndef H2OQ1
#define H2OQ1

/* The "qForth" of MARC4 microcontrollers */
/* Definitions */

/* Control Commands */
void qforthAgain(void);
void qforthBegin(void);
void qforthDo(void);
void qforthNumDo(void);
void qforthQDo(void);
void qforthLoop(void);
void qforthNumLoop(void);
void qforthPlusLoop(void);
void qforthQLeave(void);
void qforthMinusQLeave(void);
void qforthRepeat(void);
void qforthUntil(void);
void qforthWhile(void);
void qforthCase(void);
void qforthElse(void);
void qforthEndCase(void);
void qforthEndOf(void);
void qforthExecute(void); /* Atmel 2004, but not Temic 1994 */
void qforthIf(void);
void qforthOf(void);
void qforthThen(void);
void qforthCcrFetch(void);
void qforthCcrStore(void);
void qforthClrBcf(void);
void qforthEi(void);
void qforthExit(void);
void qforthDi(void);
void qforthSetBcf(void);
void qforthSwi0To7(void);
void qforthTogBf(void);
/* Mathematic Commands */
void qforthAdd(void);
void qforthPlus(void);
void qforthPlusStore(void);
void qforthInc(void);
void qforthOnePlus(void);
void qforthOnePlusStore(void);
void qforthAddC(void);
void qforthPlusC(void);
void qforthDPlus(void);
void qforthDPlusStore(void);
void qforthMPlus(void);
void qforthTPlusStore(void);
void qforthTDPlusStore(void);
void qforthDaa(void);
void qforthSub(void);
void qforthMinus(void);
void qforthDec(void);
void qforthOneMinus(void);
void qforthOneMinusStore(void);
void qforthSubb(void);
void qforthMinusC(void);
void qforthDMinus(void);
void qforthDMinusStore(void);
void qforthMMinus(void);
void qforthTMinusStore(void);
void qforthTDMinus(void);
void qforthDas(void);
void qforthTwoStar(void);
void qforthD2Star(void);
void qforthTwoSlash(void);
void qforthD2Slash(void);
void qforthCmpEq(void);
void qforthEqual(void);
void qforthZeroEqual(void);
void qforthDEqual(void);
void qforthD0Equal(void);
void qforthCmpGe(void);
void qforthGreaterEqual(void); /* Temic 1994, but not Atmel 2004 */
void qforthDGreaterEqual(void);
void qforthCmpGt(void);
void qforthGreater(void);
void qforthDGreater(void);
void qforthCmpLe(void);
void qforthLessEqual(void);
void qforthDLessEqual(void);
void qforthCmpLt(void);
void qforthLess(void);
void qforthDLess(void);
void qforthCmpNe(void);
void qforthUnequal(void);
void qforthZeroUnequal(void);
void qforthD0Unequal(void);
void qforthDUnequal(void);
void qforthMax(void);
void qforthDMax(void);
void qforthMin(void);
void qforthDMin(void);
void qforthNegate(void);
void qforthDNegate(void);
void qforthNot(void);
void qforthRoL(void);
void qforthRoR(void);
void qforthShL(void);
void qforthShR(void);
void qforthAnd(void);
void qforthOr(void);
void qforthXor(void);
void qforthToggle(void);
void qforthDToS(void);
void qforthSToD(void);
/* Memory Commands */
void qforthFetch(void);
void qforthTwoFetch(void);
void qforthThreeFetch(void);
void qforthXFetch(void);
void qforthXXFetch(void);
void qforthXPlusXFetch(void);
void qforthXXMinusFetch(void);
void qforthYFetch(void);
void qforthXYFetch(void);
void qforthXPlusYFetch(void);
void qforthXYMinusFetch(void);
void qforthDTableFetch(void);
void qforthRomByteFetch(void);
void qforthStore(void);
void qforthTwoStore(void);
void qforthThreeStore(void);
void qforthXStore(void);
void qforthXXStore(void);
void qforthXPlusXStore(void);
void qforthXXMinusStore(void);
void qforthYStore(void);
void qforthXYStore(void);
void qforthXPlusYStore(void);
void qforthXYMinusStore(void);
void qforthErase(void);
void qforthFill(void);
void qforthMove(void);
void qforthMoveTo(void);
void qforthIn(void);
void qforthOut(void);
/* Commands */
void qforthStore(void);
void qforthTick(void);
void qforthNumDo(void);
void qforthNumLoop(void);
void qforthPlusLoop(void);
void qforthMinusQLeave(void);
void qforthLessR(void);
void qforthToRP(void); /* ?? */
void qforthToSP(void); /* ?? */
void qforthQDo(void);
void qforthQDup(void);
void qforthQLeave(void);
void qforthFetch(void);
void qforthXPlusXStore(void);
void qforthXPlusXFetch(void);
void qforthXPlusYStore(void);
void qforthXPlusYFetch(void);
void qforthXXMinusStore(void);
void qforthXXMinusFetch(void);
void qforthXXStore(void);
void qforthXXFetch(void);
void qforthXYMinusStore(void);
void qforthXYMinuSFetch(void);
void qforthXYStore(void);
void qforthXYFetch(void);
void qforthTwoStore(void);
void qforthTwoLessRot(void);
void qforthTwoFetch(void);
void qforthTwoDrop(void);
void qforthTwoDup(void);
void qforthTwoNip(void);
void qforthTwoOver(void);
void qforthRFetch(void);
void qforthTwoRFetch(void);
void qforthTwoRot(void);
void qforthTwoSwap(void);
void qforthTwoTuck(void);
void qforthThreeStore(void);
void qforthThreeFetch(void);
void qforthThreeDrop(void);
void qforthThreeDup(void);
void qforthThreeRFetch(void);
void qforthDaa(void);
void qforthAdd(void);
void qforthPlus(void);
void qforthPlusStore(void);
void qforthInc(void);
void qforthOnePlus(void);
void qforthOnePlusStore(void);
void qforthAddC(void);
void qforthPlusC(void);
void qforthDPlus(void);
void qforthDPlusStore(void);
void qforthDas(void);
void qforthSub(void);
void qforthMinus(void);
void qforthDec(void);
void qforthOneMinus(void);
void qforthOneMinusStore(void);
void qforthSubB(void);
void qforthMinusC(void);
void qforthDMinus(void);
void qforthDMinusStore(void);
void qforthTwoStar(void);
void qforthD2Star(void);
void qforthTwoSlash(void);
void qforthD2Slash(void);
void qforthAgain(void);
void qforthAnd(void);
void qforthBegin(void);
void qforthCase(void);
void qforthCcrStore(void);
void qforthCcrFetch(void);
void qforthClrBcf(void);
void qforthCmpEq(void);
void qforthEqual(void);
void qforthZeroEqual(void);
void qforthDEqual(void);
void qforthD0Equal(void);
void qforthCmpGe(void);
void qforthGreaterEqual(void);
void qforthDGreaterEqual(void);
void qforthCmpGt(void);
void qforthGreater(void);
void qforthDGreater(void);
void qforthCmpLe(void);
void qforthLessEqual(void);
void qforthDLessEqual(void);
void qforthCmpLt(void);
void qforthLess(void);
void qforthDLess(void);
void qforthCmpNe(void);
void qforthUnequal(void);
void qforthZeroUnequal(void);
void qforthDUnequal(void);
void qforthD0Unequal(void);
void qforthDecR(void);
void qforthDepth(void);
void qforthDi(void);
void qforthDMax(void);
void qforthDMin(void);
void qforthDNegate(void);
void qforthDo(void);
void qforthDrop(void);
void qforthDropR(void);
void qforthDTableFetch(void);
void qforthDToggle(void);
void qforthDup(void);
void qforthEi(void);
void qforthElse(void);
void qforthEndCase(void);
void qforthEndOf(void);
void qforthErase(void);
void qforthExit(void);
void qforthExecute(void);
void qforthFill(void);
void qforthI(void);
void qforthIf(void);
void qforthIn(void);
void qforthIndex(void);
void qforthJ(void);
void qforthLoop(void);
void qforthMPlus(void);
void qforthMMinus(void);
void qforthMax(void);
void qforthMin(void);
void qforthMove(void);
void qforthMoveTo(void);
void qforthNegate(void);
void qforthNip(void);
void qforthDToS(void);
void qforthNop(void);
void qforthNot(void);
void qforthOf(void);
void qforthOr(void);
void qforthOut(void);
void qforthOver(void);
void qforthPick(void);
void qforthToR(void);
void qforthTwoToR(void);
void qforthThreeToR(void);
void qforthRTo(void);
void qforthTwoRTo(void);
void qforthThreeRTo(void);
void qforthRDepth(void);
void qforthRepeat(void);
void qforthRFree(void);
void qforthRoL(void);
void qforthRoLL(void);
void qforthRomByteFetch(void);
void qforthRoR(void);
void qforthRot(void);
void qforthRPStore(void);
void qforthRPFetch(void);
void qforthSToD(void);
void qforthSetBcf(void);
void qforthShL(void);
void qforthShR(void);
void qforthSPStore(void);
void qforthSPFetch(void);
void qforthSwap(void);
void qforthSwi0ToSw17(void);
void qforthTPlusStore(void);
void qforthTMinusStore(void);
void qforthTDPlusStore(void);
void qforthTDMinusStore(void);
void qforthThen(void);
void qforthTogBf(void);
void qforthToggle(void);
void qforthTuck(void);
void qforthUntil(void);
void qforthWhile(void);
void qforthXStore(void);
void qforthXFetch(void);
void qforthXStore(void);
void qforthXorYStore(void);
void qforthYFetch(void);
/* STACK Commands */
void qforthDecR(void);
void qforthDepth(void);
void qforthDrop(void);
void qforthTwoDrop(void);
void qforthThreeDrop(void);
void qforthDropR(void);
void qforthDup(void);
void qforthQDup(void);
void qforthTwoDup(void);
void qforthThreeDup(void);
void qforthI(void);
void qforthIndex(void);
void qforthJ(void);
void qforthNip(void);
void qforthTwoNip(void);
void qforthOver(void);
void qforthTwoOver(void);
void qforthPick(void);
void qforthRFetch(void);
void qforthTwoFetch(void);
void qforthThreeRFetch(void);
void qforthToR(void);
void qforthTwoToR(void);
void qforthThreeToR(void);
void qforthRTo(void);
void qforthTwoRTo(void);
void qforthThreeRTo(void);
void qforthRDepth(void);
void qforthRFree(void);
void qforthRot(void);
void qforthTwoRot(void);
void qforthLessRot(void);
void qforthTwoLessRot(void);
void qforthRPFetch(void);
void qforthRPStore(void);
void qforthSPFetch(void);
void qforthSpStore(void);
void qforthSwap(void);
void qforthTwoSwap(void);
void qforthTuck(void);
void qforthTwoTuck(void);

typedef void (*forthOperation)(void);

typedef  struct _forthWord {
	const char* forthWordName;
	const const char* forthAlternativeName;
	const short int interpreted;
	const short int immediate;
	const short int implemented;
	const unsigned long forthWordNumber;
	const forthOperation  forthOpt; // function pointer 
} typedef_forthWord;

/* Variables */
/* This vocabulary is not in the order of any VLIST or WORDS listing, as there are no such words at all! */

static  const typedef_forthWord forthWords[] = {

	/* Control Commands */

	{ "AGAIN", "AGAIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthAgain },
	{ "BEGIN", "BEGIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthBegin },

	{ "DO", "DO", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthDo },

	{ "#DO", "#DO", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthNumDo },
	{ "?DO", "?DO", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthQDo },
	{ "LOOP", "LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthLoop },

	{ "#LOOP", "#LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthNumLoop },
	{ "+LOOP", "+LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthPlusLoop },
	{ "?LEAVE", "?LEAVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthQLeave },
	{ "-?LEAVE", "-?LEAVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthMinusQLeave },
	{ "REPEAT", "REPEAT", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthRepeat },

	{ "UNTIL", "UNTIL", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthUntil },
	{ "WHILE", "WHILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthWhile },
	{ "CASE", "CASE", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthCase },

	{ "ELSE", "ELSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthElse },

	{ "ENDCASE", "ENDCASE", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthEndCase },
	{ "ENDOF", "ENDOF", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthEndOf },
	{ "EXECUTE", "EXECUTE", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthExecute }, /* Atmel 2004, but not Temic 1994 */
	{ "IF", "IF", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthIf },

	{ "OF", "OF", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthOf },
	{ "THEN", "THEN", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthThen },
	{ "CCR@", "CCR@", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthCcrFetch },
	{ "CCR!", "CCR!", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthCcrStore },

	{ "CLR_BCF", "CLR_BCF", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthClrBcf },
	{ "EI", "EI", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthEi },
	{ "EXIT", "EXIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthExit },
	{ "DI", "DI", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthDi },

	{ "SET_BCF", "SET_BCF", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthSetBcf },
	{ "SWI0..SWI7", "SWI0..SWI7", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthSwi0To7 },

	{ "TOG_BF", "TOG_BF", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthTogBf },

	/* Mathematic Commands */

	{ "ADD", "ADD", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthAdd },
	{ "+", "+", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthPlus },

	{ "+!", "+!", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthPlusStore },

	{ "INC", "INC", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthInc },
	{ "1+", "1+", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthOnePlus },
	{ "1+!", "1+!", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthOnePlusStore },

	{ "ADDC", "ADDC", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthAddC },

	{ "+C", "+C", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthPlusC },
	{ "D+", "D+", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthDPlus },
	{ "D+!", "D+!", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthDPlusStore },

	{ "M+", "M+", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthMPlus },
	{ "T+!", "T+!", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthTPlusStore },

	{ "TD+!", "TD+!", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthTDPlusStore },

	{ "DAA", "DAA", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthDaa },
	{ "SUB", "SUB", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthSub },
	{ "-", "-", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthMinus },

	{ "DEC", "DEC", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthDec },
	{ "1-", "1-", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthOneMinus },
	{ "1-!", "1-!", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthOneMinusStore },
	{ "SUBB", "SUBB", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthSubb },

	{ "-C", "-C", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthMinusC },
	{ "D-", "D-", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthDMinus },
	{ "D-!", "D-!", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthDMinusStore },

	{ "M-", "M-", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthMMinus },
	{ "T-!", "T-!", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthTMinusStore },
	{ "TD-", "TD-", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthTDMinus },
	{ "DAS", "DAS", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthDas },

	{ "2*", "2*", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthTwoStar },
	{ "D2*", "D2*", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthD2Star },
	{ "2/", "2/", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthTwoSlash },
	{ "D2/", "D2/", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthD2Slash },

	{ "CMP_EQ", "CMP_EQ", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthCmpEq },
	{ "=", "=", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthEqual },
	{ "0=", "0=", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthZeroEqual },

	{ "D=", "D=", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthDEqual },
	{ "D0=", "D0=", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthD0Equal },
	{ "CMP_GE", "CMP_GE", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthCmpGe },

	{ ">=", ">=", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthGreaterEqual },  /* Temic 1994, but not Atmel 2004 */
	{ "D>=", "D>=", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthDGreaterEqual },
	{ "CMP_GT", "CMP_GT", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthCmpGt },

	{ ">", ">", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthGreater },

	{ "D>", "D>", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthDGreater },
	{ "CMP_LE", "CMP_LE", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthCmpLe },
	{ "<=", "<=", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthLessEqual },

	{ "D<=", "D<=", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthDLessEqual },
	{ "CMP_LT", "CMP_LT", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthCmpLt },
	{ "<", "<", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthLess },
	{ "D<", "D<", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthDLess },

	{ "CMP_NE", "CMP_NE", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthCmpNe },
	{ "<>", "<>", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthUnequal },
	{ "0<>", "0<>", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthZeroUnequal },
	{ "D0<>", "D0<>", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthD0Unequal },

	{ "D<>", "D<>", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthDUnequal },
	{ "MAX", "MAX", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthMax },
	{ "DMAX", "DMAX", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthDMax },
	{ "MIN", "MIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthMin },
	{ "DMIN", "DMIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthDMin },
	{ "NEGATE", "NEGATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthNegate },

	{ "DNEGATE", "DNEGATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthDNegate },
	{ "NOT", "NOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthNot },
	{ "ROL", "ROL", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthRoL },

	{ "ROR", "ROR", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthRoR },

	{ "SHL", "SHL", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthShL },
	{ "SHR", "SHR", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthShR },
	{ "AND", "AND", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthAnd },

	{ "OR", "OR", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthOr },
	{ "XOR", "XOR", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthXor },
	{ "TOGGLE", "TOGGLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthToggle },
	{ "D>S", "D>S", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthDToS },

	{ "S>D", "S>D", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthSToD },

	/* Memory Commands */

	{ "@", "@", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthFetch },

	{ "2@", "2@", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthTwoFetch },
	{ "3@", "3@", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthThreeFetch },
	{ "X@", "X@", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthXFetch },

	{ "[X]@", "[X]@", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthXXFetch },
	{ "[+X]@", "[+X]@", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthXPlusXFetch },
	{ "[X-]@", "[X-]@", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthXXMinusFetch },
	{ "Y@", "Y@", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthYFetch },

	{ "[Y]@", "[Y]@", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthXYFetch },
	{ "[+Y]@", "[+Y]@", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthXPlusYFetch },
	{ "[Y-]@", "[Y-]@", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthXYMinusFetch },
	{ "DTABLE@", "DTABLE@", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthDTableFetch },

	{ "ROMBYTE@", "ROMBYTE@", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthRomByteFetch },
	{ "!", "!", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthStore },

	{ "2!", "2!", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthTwoStore },
	{ "3!", "3!", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthThreeStore },
	{ "X!", "X!", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthXStore },
	{ "[X]!", "[X]!", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthXXStore },

	{ "[+X]!", "[+X]!", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthXPlusXStore },
	{ "[X-]!", "[X-]!", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthXXMinusStore },
	{ "Y!", "Y!", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthYStore },

	{ "[Y]!", "[Y]!", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthXYStore },
	{ "[+Y]!", "[+Y]!", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthXPlusYStore },
	{ "[Y-]!", "[Y-]!", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthXYMinusStore },
	{ "ERASE", "ERASE", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthErase },

	{ "FILL", "FILL", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthFill },
	{ "MOVE", "MOVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthMove },
	{ "MOVE>", "MOVE>", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthMoveTo },

	{ "IN", "IN", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthIn },
	{ "OUT", "OUT", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthOut },

	/* Commands */

	{ "!", "!", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthStore },

	{ "'","'", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthTick },
	{ "#DO", "#DO", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthNumDo },
	{ "#LOOP", "#LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthNumLoop },

	{ "+LOOP", "+LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthPlusLoop },

	{ "-?LEAVE", "-?LEAVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthMinusQLeave },

	{ "<ROT", "<ROT", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthLessR },
	{ ">RP", ">RPxxh", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthToRP }, /* ?? */
	{ ">SP", ">SPxxh", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthToSP }, /* ?? */

	{ "?DO", "?DO", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthQDo },
	{ "?DUP", "?DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthQDup },
	{ "?LEAVE", "?LEAVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthQLeave },
	{ "@", "@", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthFetch },

	{ "[+X]!", "[+X]!", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthXPlusXStore },
	{ "[+X]@", "[+X]@", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthXPlusXFetch },
	{ "[+Y]!", "[+Y]!", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthXPlusYStore },
	{ "[+Y]@", "[+Y]@", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthXPlusYFetch },

	{ "[X-]!", "[X-]!", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthXXMinusStore },
	{ "[X-]@", "[X-]@", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthXXMinusFetch },
	{ "[X]!", "[X]!", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthXXStore },
	{ "[X]@", "[X]@", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthXXFetch },

	{ "[Y-]!", "[Y-]!", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthXYMinusStore },
	{ "[Y-]@", "[Y-]@", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthXYMinuSFetch },
	{ "[Y]!", "[Y]!", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthXYStore },

	{ "[Y]@", "[Y]@", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthXYFetch },
	{ "2!", "2!", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthTwoStore },
	{ "2<ROT", "2<ROT", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthTwoLessRot },
	{ "2@", "2@", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthTwoFetch },

	{ "2DROP", "2DROP", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthTwoDrop },
	{ "2DUP", "2DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthTwoDup },
	{ "2NIP", "2NIP", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthTwoNip },
	{ "2OVER", "2OVER", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthTwoOver },

	{ "R@", "R@", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthRFetch },
	{ "2R@", "2R@", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthTwoRFetch },
	{ "2ROT", "2ROT", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthTwoRot },

	{ "2SWAP", "2SWAP", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthTwoSwap },
	{ "2TUCK", "2TUCK", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthTwoTuck },
	{ "3!", "3!", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthThreeStore },

	{ "3@", "3@", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthThreeFetch },

	{ "3DROP", "3DROP", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthThreeDrop },
	{ "3DUP", "3DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthThreeDup },
	{ "3R@", "3R@", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthThreeRFetch },

	{ "DAA", "DAA", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthDaa },
	{ "ADD", "ADD", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthAdd },
	{ "+", "+", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthPlus },
	{ "+!", "+!", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthPlusStore },

	{ "INC", "INC", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthInc },
	{ "1+", "1+", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthOnePlus },
	{ "1+!", "1+!", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthOnePlusStore },
	{ "ADDC", "ADDC", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthAddC },

	{ "+C", "+C", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthPlusC },
	{ "D+", "D+", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthDPlus },
	{ "D+!", "D+!", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthDPlusStore },

	{ "DAS", "DAS", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthDas },

	{ "SUB", "SUB", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthSub },
	{ "-", "-", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthMinus },
	{ "DEC", "DEC", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthDec },

	{ "1-", "1-", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthOneMinus },
	{ "1-!", "1-!", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthOneMinusStore },
	{ "SUBB", "SUBB", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthSubB },
	{ "-C", "-C", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthMinusC },

	{ "D-", "D-", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthDMinus },
	{ "D-!", "D-!", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthDMinusStore },
	{ "2*", "2*", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthTwoStar },
	{ "D2*", "D2*", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthD2Star },
	{ "2/", "2/", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthTwoSlash },
	{ "D2/", "D2/", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthD2Slash },
	{ "AGAIN", "AGAIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthAgain },

	{ "AND", "AND", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthAnd },
	{ "BEGIN", "BEGIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthBegin },

	{ "CASE", "CASE", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthCase },
	{ "CCR!", "CCR!", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthCcrStore },

	{ "CCR@", "CCR@", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthCcrFetch },
	{ "CLR_BCF", "CLR_BCF", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthClrBcf },
	{ "CMP_EQ", "CMP_EQ", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthCmpEq },

	{ "=", "=", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthEqual },

	{ "0=", "0=", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthZeroEqual },
	{ "D=", "D=", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthDEqual },
	{ "D0=", "D0=", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthD0Equal },

	{ "CMP_GE", "CMP_GE", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthCmpGe },
	{ ">=", ">=", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthGreaterEqual },
	{ "D>=", "D>=", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthDGreaterEqual },
	{ "CMP_GT", "CMP_GT", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthCmpGt },

	{ ">", ">", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthGreater },
	{ "D>", "D>", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthDGreater },
	{ "CMP_LE", "CMP_LE", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthCmpLe },
	{ "<=", "<=", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthLessEqual },

	{ "D<=", "D<=", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthDLessEqual },
	{ "CMP_LT", "CMP_LT", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthCmpLt },
	{ "<", "<", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthLess },

	{ "D<", "D<", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthDLess },

	{ "CMP_NE", "CMP_NE", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthCmpNe },
	{ "<>", "<>", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthUnequal },
	{ "0<>", "0<>", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthZeroUnequal },

	{ "D<>", "D<>", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthDUnequal },
	{ "D0<>", "D0<>", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthD0Unequal },
	{ "DECR", "DECR", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthDecR },
	{ "DEPTH", "DEPTH", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthDepth },

	{ "DI", "DI", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthDi },
	{ "DMAX", "DMAX", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthDMax },
	{ "DMIN", "DMIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthDMin },
	{ "DNEGATE", "DNEGATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthDNegate },
	{ "DO", "DO", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthDo },
	{ "DROP", "DROP", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthDrop },
	{ "DROPR", "DROPR", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthDropR },

	{ "DTABLE@", "DTABLE@", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthDTableFetch },
	{ "DTOGGLE", "DTOGGLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthDToggle },

	{ "DUP", "DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthDup },
	{ "EI", "EI", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthEi },
	{ "ELSE", "ELSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthElse },

	{ "ENDCASE", "ENDCASE", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthEndCase },

	{ "ENDOF", "ENDOF", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthEndOf },
	{ "ERASE", "ERASE", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthErase },
	{ "EXIT", "EXIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthExit },

	{ "EXECUTE", "EXECUTE", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthExecute },
	{ "FILL", "FILL", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthFill },
	{ "I", "I", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthI },
	{ "IF", "IF", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthIf },

	{ "IN", "IN", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthIn },
	{ "INDEX", "INDEX", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthIndex },
	{ "J", "J", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthJ },
	{ "LOOP", "LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthLoop },

	{ "M+", "M+", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthMPlus },
	{ "M-", "M-", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthMMinus },
	{ "MAX", "MAX", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthMax },
	{ "MIN", "MIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthMin },

	{ "MOVE", "MOVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthMove },
	{ "MOVE>", "MOVE>", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthMoveTo },
	{ "NEGATE", "NEGATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthNegate },

	{ "NIP", "NIP", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthNip },
	{ "D>S", "D>S", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthDToS },
	{ "NOP", "NOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthNop },
	{ "NOT", "NOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthNot },

	{ "OF", "OF", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthOf },
	{ "OR", "OR", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthOr },
	{ "OUT", "OUT", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthOut },
	{ "OVER", "OVER", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthOver },
	{ "PICK", "PICK", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthPick },
	{ ">R", ">R", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthToR },
	{ "2>R", "2>R", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthTwoToR },

	{ "3>R", "3>R", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthThreeToR },

	{ "R>", "R>", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthRTo },
	{ "2R>", "2R>", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthTwoRTo },

	{ "3R>", "3R>", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthThreeRTo },

	{ "RDEPTH", "RDEPTH", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthRDepth },

	{ "REPEAT", "REPEAT", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthRepeat },
	{ "RFREE", "RFREE", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthRFree },
	{ "ROL", "ROL", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthRoL },
	{ "ROLL", "ROLL", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthRoLL },
	{ "ROMBYTE@", "ROMBYTE@", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthRomByteFetch },
	{ "ROR", "ROR", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthRoR },
	{ "ROT", "ROT", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthRot },
	{ "RP!", "RP!", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthRPStore },
	{ "RP@", "RP@", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthRPFetch },

	{ "S>D", "S>D", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthSToD },

	{ "SET_BCF", "SET_BCF", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthSetBcf },
	{ "SHL", "SHL", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthShL },
	{ "SHR", "SHR", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthShR },
	{ "SP!", "SP!", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthSPStore },
	{ "SP@", "SP@", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthSPFetch },

	{ "SWAP", "SWAP", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthSwap },

	{ "SWI0..SW17", "SWI0..SW17", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthSwi0ToSw17 },

	{ "T+!", "T+!", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthTPlusStore },
	{ "T-!", "T-!", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthTMinusStore },
	{ "TD+!", "TD+!", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthTDPlusStore },
	{ "TD-!", "TD-!", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthTDMinusStore },

	{ "THEN", "THEN", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthThen },

	{ "TOG_BF", "TOG_BF", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthTogBf },

	{ "TOGGLE", "TOGGLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthToggle },
	{ "TUCK", "TUCK", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthTuck },
	{ "UNTIL", "UNTIL", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthUntil },
	{ "WHILE", "WHILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthWhile },
	{ "X!", "X!", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthXStore },

	{ "X@", "X@", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthXFetch },

	{ "XOR", "XOR", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthXStore },
	{ "Y!", "Y!", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthXorYStore },
	{ "Y@", "Y@", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthYFetch },

	/* STACK Commands */

	{ "DECR", "DECR", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthDecR },
	{ "DEPTH", "DEPTH", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthDepth },
	{ "DROP", "DROP", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthDrop },
	{ "2DROP", "2DROP", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthTwoDrop },
	{ "3DROP", "3DROP", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthThreeDrop },
	{ "DROPR", "DROPR", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthDropR },

	{ "DUP", "DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthDup },

	{ "?DUP", "?DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthQDup },
	{ "2DUP", "2DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthTwoDup },
	{ "3DUP", "3DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthThreeDup },

	{ "I", "I", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthI },

	{ "INDEX", "INDEX", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthIndex },
	{ "J", "J", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthJ },
	{ "NIP", "NIP", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthNip },
	{ "2NIP", "2NIP", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthTwoNip },
	{ "OVER", "OVER", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthOver },
	{ "2OVER", "2OVER", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthTwoOver },
	{ "PICK", "PICK", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthPick },
	{ "R@", "R@", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthRFetch },
	{ "2R@", "2R@", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthTwoFetch },
	{ "3R@", "3R@", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthThreeRFetch },
	{ ">R", ">R", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthToR },
	{ "2>R", "2>R", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthTwoToR },
	{ "3>R", "3>R", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthThreeToR },
	{ "R>", "R>", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthRTo },

	{ "2R>", "2R>", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthTwoRTo },

	{ "3R>", "3R>", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthThreeRTo },

	{ "RDEPTH", "RDEPTH", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthRDepth },

	{ "RFREE", "RFREE", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthRFree },

	{ "ROT", "ROT", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthRot },

	{ "2ROT", "2ROT", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthTwoRot },

	{ "<ROT", "<ROT", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthLessRot },
	{ "2<ROT", "2<ROT", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthTwoLessRot },
	{ "RP@", "RP@", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthRPFetch },
	{ "RP!", "RP!", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthRPStore },
	{ "SP@", "SP@", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthSPFetch },
	{ "SP!", "SP!", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthSpStore },
	{ "SWAP", "SWAP", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthSwap },
	{ "2SWAP", "2SWAP", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthTwoSwap },
	{ "TUCK", "TUCK", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthTuck },
	{ "2TUCK", "2TUCK", TRUE, FALSE, FALSE, 0UL, (forthOperation)qforthTwoTuck },
	{ "H2OFORTH", "H2OFORTH", TRUE, FALSE, FALSE, MAX_FORTHWORD_ID, (forthOperation)NULL }
};

#endif
