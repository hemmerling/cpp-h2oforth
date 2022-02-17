#ifndef H2OCOMM2
#define H2OCOMM2

/* Declarations of FORTH words common to one or more FORTH standards & FORTH implementations */

/* Internal functions */
#if defined (__DEBUG__)
void privateDebugWord(char* nameOfWord) {
	printf("%s\n", nameOfWord);
}
#endif	

void privateMessageHandler(void) {
	int errorNumber = forthTasks[forthState.forthCurrentTask].errorNumber;
	int messageNumber = forthTasks[forthState.forthCurrentTask].messageNumber;
	int osErrorNumber = forthTasks[forthState.forthCurrentTask].osErrorNumber;
#if defined (__DEVELOP__)
	int sizeOfErrors = sizeof(forthErrors) / sizeof(forthErrors[0]);
	int sizeOfMessages = sizeof(forthMessages) / sizeof(forthMessages[0]);
	int sizeOfOsErrors = sizeof(forthOsErrors) / sizeof(forthOsErrors[0]);
#endif
	if (errorNumber
#if defined (__DEVELOP__)
		&& (errorNumber < sizeOfErrors)
#endif
		) {
		printf("? %s %s # %d\n", wordBuffer,
			forthTasks[forthState.forthCurrentTask].forthErrors[forthTasks[forthState.forthCurrentTask].errorNumber].messageText,
			forthTasks[forthState.forthCurrentTask].errorNumber);
	};
	if (messageNumber
#if defined (__DEVELOP__)
		&& (messageNumber < sizeOfMessages)
#endif
		) {
		printf("%s\n",
			forthTasks[forthState.forthCurrentTask].forthMessages[forthTasks[forthState.forthCurrentTask].messageNumber].messageText);
	};
	if (osErrorNumber
#if defined (__DEVELOP__)
		&& (osErrorNumber < sizeOfOsErrors)
#endif
		) {
		printf("%s\n",
			forthTasks[forthState.forthCurrentTask].forthOsErrors[forthTasks[forthState.forthCurrentTask].osErrorNumber].messageText);
	};
	forthTasks[forthState.forthCurrentTask].errorNumber = 0;
	forthTasks[forthState.forthCurrentTask].messageNumber = 0;
	forthTasks[forthState.forthCurrentTask].osErrorNumber = 0;
}

void privateSetBaseFormat(void) {
	switch (forthTasks[forthState.forthCurrentTask].forthBase) {
	case OCTAL:
		forthTasks[forthState.forthCurrentTask].baseFormat = BASE_FORMAT_OCTAL;
		break;
	case DECIMAL:
		forthTasks[forthState.forthCurrentTask].baseFormat = BASE_FORMAT_DECIMAL;
		break;
	case HEX:
		forthTasks[forthState.forthCurrentTask].baseFormat = BASE_FORMAT_HEX;
		break;
	default:
		forthTasks[forthState.forthCurrentTask].baseFormat = BASE_FORMAT_EMPTY;
	};
}

void privateSetBaseLFormat(void) {
	switch (forthTasks[forthState.forthCurrentTask].forthBase) {
	case OCTAL:
		forthTasks[forthState.forthCurrentTask].baseFormat = BASE_FORMAT_LOCTAL;
		break;
	case DECIMAL:
		forthTasks[forthState.forthCurrentTask].baseFormat = BASE_FORMAT_LDECIMAL;
		break;
	case HEX:
		forthTasks[forthState.forthCurrentTask].baseFormat = BASE_FORMAT_LHEX;
		break;
	default:
		forthTasks[forthState.forthCurrentTask].baseFormat = BASE_FORMAT_EMPTY;
	};
}

/* Primitives */

void commonOctal(void) {
	forthTasks[forthState.forthCurrentTask].forthBase = OCTAL;
	forthTasks[forthState.forthCurrentTask].baseFormat = BASE_FORMAT_OCTAL;
	DEBUG_WORD("commonOctal")
}

/* Display in hexadecimal base in the format of <.> */
void commonHexDot(void) {
	if (forthTasks[forthState.forthCurrentTask].dataStackIndex) {
		if (sizeof(CELL_INTEGER) == CELLSIZE8) {
			printf("%llx ", forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex]);
		}
		else {
			printf("%x ", forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex]);
		}
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_EMPTY;
	};
	DEBUG_WORD("commonHexDot")
}

/* Display in octal base in the format of <.> */
void commonOctDot(void) {
	if (forthTasks[forthState.forthCurrentTask].dataStackIndex) {
		if (sizeof(CELL_INTEGER) == CELLSIZE8) {
			printf("%llo ", forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex]);
		}
		else {
			printf("%o ", forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex]);
		};
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_EMPTY;
	};
	DEBUG_WORD("commonOctDot")
}


#ifdef EXCEPTION_SUPPORT
void exceptionAbort(void) {
	DEBUG_WORD("exceptionAbort")
}

void exceptionAbortQ(void) {
	DEBUG_WORD("exceptionAbortQ")
}

void exceptionCatch(void) {
	DEBUG_WORD("exceptionCatch")
}

void exceptionThrow(void) {
	DEBUG_WORD("exceptionThrow")
}

/* Quit with exception handling. Overrides standard implementation in forthWords */
void exceptionQuit(void) {
	DEBUG_WORD("exceptionQuit")
}
#endif


#ifdef FLOAT_SUPPORT
#if (FLOATSTD == FLOAT_ANS94) || (FLOATSTD == FLOAT_FORTH2012)
/* Floating-Point extension words */
void fpointDFStore(void) {
	DEBUG_WORD("fpointDFStore")
}

void fpointDFFetch(void) {
	DEBUG_WORD("fpointDFFetch")
}

void fpointDFAlign(void) {
	DEBUG_WORD("fpointDFAlign")
}

void fpointDFFieldColon(void) {
	DEBUG_WORD("fpointDFFieldColon")
}

void fpointDFloatPlus(void) {
	DEBUG_WORD("fpointDFloatPlus")
}

void fpointDFloatS(void) {
	DEBUG_WORD("fpointDFloatS")
}

void fpointFStarStar(void) {
	DEBUG_WORD("fpointFStarStar")
}

void fpointFDot(void) {
	DEBUG_WORD("fpointFDot")
}

void fpointFToS(void) {
	DEBUG_WORD("fpointFToS")
}

void fpointFAbs(void) {
	DEBUG_WORD("fpointFAbs")
}

void fpointFAcos(void) {
	DEBUG_WORD("fpointFAcos")
}

void fpointFAcosh(void) {
	DEBUG_WORD("fpointFAcosh")
}

void fpointFAlog(void) {
	DEBUG_WORD("fpointFAlog")
}

void fpointFAsin(void) {
	DEBUG_WORD("fpointFAsin")
}

void fpointAsinh(void) {
	DEBUG_WORD("fpointAsinh")
}

void fpointAtan(void) {
	DEBUG_WORD("fpointAtan")
}

void fpointAtan2(void) {
	DEBUG_WORD("fpointAtan2")
}

void fpointFAtanh(void) {
	DEBUG_WORD("fpointFAtanh")
}

void fpointFCos(void) {
	DEBUG_WORD("fpointFCos")
}

void fpointFCosh(void) {
	DEBUG_WORD("fpointFCosh")
}

void fpointFEDot(void) {
	DEBUG_WORD("fpointFEDot")
}

void fpointFExp(void) {
	DEBUG_WORD("fpointFExp")
}

void fpointFExpm1(void) {
	DEBUG_WORD("fpointFExpm1")
}

void fpointFFieldColon(void) {
	DEBUG_WORD("fpointFFieldColon")
}

void fpointFLn(void) {
	DEBUG_WORD("fpointFLn")
}

void fpointFLnp1(void) {
	DEBUG_WORD("fpointFLnp1")
}

void fpointFLog(void) {
	DEBUG_WORD("fpointFLog")
}

void fpointFSDot(void) {
	DEBUG_WORD("fpointFSDot")
}

void fpointFSin(void) {
	DEBUG_WORD("fpointFSin")
}

void fpointFSincos(void) {
	DEBUG_WORD("fpointFSincos")
}

void fpointFSinH(void) {
	DEBUG_WORD("fpointFSinH")
}

void fpointFSqrt(void) {
	DEBUG_WORD("fpointFSqrt")
}

void fpointFTan(void) {
	DEBUG_WORD("fpointFTan")
}

void fpointFTanh(void) {
	DEBUG_WORD("fpointFTanh")
}

void fpointFTrunc(void) {
	DEBUG_WORD("fpointFTrunc")
}

void fpointFValue(void) {
	DEBUG_WORD("fpointFValue")
}

void fpointFTilde(void) {
	DEBUG_WORD("fpointFTilde")
}

void fpointPrecision(void) {
	DEBUG_WORD("fpointPrecision")
}

void fpointSToF(void) {
	DEBUG_WORD("fpointSToF")
}

void fpointSetPrecision(void) {
	DEBUG_WORD("fpointSetPrecision")
}

void fpointSFStore(void) {
	DEBUG_WORD("fpointSFStore")
}

void fpointSFFetch(void) {
	DEBUG_WORD("fpointSFFetch")
}

void fpointSFAlign(void) {
	DEBUG_WORD("fpointSFAlign")
}

void fpointSFAligned(void) {
	DEBUG_WORD("fpointSFAligned")
}

void fpointSFFieldColon(void) {
	DEBUG_WORD("fpointSFFieldColon")
}

void fpointSFloatPlus(void) {
	DEBUG_WORD("fpointSFloatPlus")
}

void fpointSFloatS(void) {
	DEBUG_WORD("fpointSFloatS")
}

/* Floating-Point words */
void fpointToFloat(void) {
	DEBUG_WORD("fpointToFloat")
}

void fpointDToF(void) {
	DEBUG_WORD("fpointDToF")
}

void fpointFStore(void) {
	DEBUG_WORD("fpointFStore")
}

void fpointFMultiply(void) {
	DEBUG_WORD("fpointFMultiply")
}

void fpointFPlus(void) {
	DEBUG_WORD("fpointFPlus")
}

void fpointFMinus(void) {
	DEBUG_WORD("fpointFMinus")
}

void fpointFfpointFSlash(void) {
	DEBUG_WORD("fpointFfpointFSlash")
}

void fpointF0Less(void) {
	DEBUG_WORD("fpointF0Less")
}

void fpointF0Equal(void) {
	DEBUG_WORD("fpointF0Equal")
}

void fpointFLess(void) {
	DEBUG_WORD("fpointFLess")
}

void fpointFToD(void) {
	DEBUG_WORD("fpointFToD")
}

void fpointFFetch(void) {
	DEBUG_WORD("fpointFFetch")
}

void fpointtFAlign(void) {
	DEBUG_WORD("fpointtFAlign")
}

void fpointFAligned(void) {
	DEBUG_WORD("fpointFAligned")
}

void fpointFConstant(void) {
	DEBUG_WORD("fpointFConstant")
}

void fpointFDepth(void) {
	DEBUG_WORD("fpointFDepth")
}

void fpointFDrop(void) {
	DEBUG_WORD("fpointFDrop")
}

void fpointFDup(void) {
	DEBUG_WORD("fpointFDup")
}

void fpointFLiteral(void) {
	DEBUG_WORD("fpointFLiteral")
}

void fpointFloatPlus(void) {
	DEBUG_WORD("fpointFloatPlus")
}

void fpointFloatS(void) {
	DEBUG_WORD("fpointFloatS")
}

void fpointFloor(void) {
	DEBUG_WORD("fpointFloor")
}

void fpointFMax(void) {
	DEBUG_WORD("fpointFMax")
}

void fpointFMin(void) {
	DEBUG_WORD("fpointFMin")
}

void fpointFNegate(void) {
	DEBUG_WORD("fpointFNegate")
}

void fpointFOver(void) {
	DEBUG_WORD("fpointFOver")
}

void fpointFRot(void) {
	DEBUG_WORD("fpointFRot")
}

void fpointFRound(void) {
	DEBUG_WORD("fpointFRound")
}

void fpointFSwap(void) {
	DEBUG_WORD("fpointFSwap")
}

void fpointFVariable(void) {
	DEBUG_WORD("fpointFVariable")
}

void fpointRepresent(void) {
	DEBUG_WORD("fpointRepresent")
}

#endif
#if (FLOATSTD == FLOAT_JUPITER)
void fpointUFLoat(void) {
	DEBUG_WORD("fpointUFLoat")
}

void fpointInt(void) {
#ifdef FLOAT_ON_DATASTACK
	CELL_FLOAT *floatStackPointer;
	CELL_FLOAT value1;
	CELL_INTEGER value2; 
	if (forthTasks[forthState.forthCurrentTask].dataStackIndex >= 
	    forthTasks[forthState.forthCurrentTask].floatFloatIntRatio) {

		forthTasks[forthState.forthCurrentTask].dataStackIndex = forthTasks[forthState.forthCurrentTask].dataStackIndex - forthTasks[forthState.forthCurrentTask].floatFloatIntRatio;

		floatStackPointer = (CELL_FLOAT *)&forthTasks[forthState.forthCurrentTask].dataStackSpace[forthTasks[forthState.forthCurrentTask].dataStackIndex];
		value1 = *floatStackPointer;
		value2 = (CELL_INTEGER) value1;
		forthTasks[forthState.forthCurrentTask].dataStackSpace[forthTasks[forthState.forthCurrentTask].dataStackIndex] = value2;

		//printf("f = %e, f = %f, int = %d\n", value1, value1, value2);

		forthTasks[forthState.forthCurrentTask].dataStackIndex = forthTasks[forthState.forthCurrentTask].dataStackIndex + forthTasks[forthState.forthCurrentTask].floatFloatIntRatio;
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_EMPTY;
	};
#else
#endif
	DEBUG_WORD("fpointInt")
}

void fpointFNegate(void) {
	DEBUG_WORD("fpointFNegate")
}

void fpointFSlash(void) {
	DEBUG_WORD("fpointFSlash")
}

void fpointFStar(void) {
	DEBUG_WORD("fpointFStar")
}

void fpointFPlus(void) {
#ifdef FLOAT_ON_DATASTACK
	CELL_FLOAT value1 = 0.0;
	CELL_FLOAT value2 = 0.0;
	CELL_FLOAT *floatStackPointer;
	if (forthTasks[forthState.forthCurrentTask].dataStackIndex >= 
	    2*forthTasks[forthState.forthCurrentTask].floatFloatIntRatio) {

		forthTasks[forthState.forthCurrentTask].dataStackIndex = forthTasks[forthState.forthCurrentTask].dataStackIndex - forthTasks[forthState.forthCurrentTask].floatFloatIntRatio;

		floatStackPointer = (CELL_FLOAT *)&forthTasks[forthState.forthCurrentTask].dataStackSpace[forthTasks[forthState.forthCurrentTask].dataStackIndex];
		value1 = *floatStackPointer;

		forthTasks[forthState.forthCurrentTask].dataStackIndex = forthTasks[forthState.forthCurrentTask].dataStackIndex - forthTasks[forthState.forthCurrentTask].floatFloatIntRatio;

		floatStackPointer = (CELL_FLOAT *)&forthTasks[forthState.forthCurrentTask].dataStackSpace[forthTasks[forthState.forthCurrentTask].dataStackIndex];
		value2 = *floatStackPointer;

		//printf("e1 = %f, f1 = %f, e2 = %f, f2 = %f \n", value1, value1, value2, value2 );

		value1 = value1 + value2;
		*floatStackPointer = value1;

		//printf("resultf1 = %e, resultf1 = %f \n", value1, value1 );

		forthTasks[forthState.forthCurrentTask].dataStackIndex = forthTasks[forthState.forthCurrentTask].dataStackIndex + forthTasks[forthState.forthCurrentTask].floatFloatIntRatio;
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_EMPTY;
	};
#else
#endif
	DEBUG_WORD("fpointFPlus")
}

void fpointFMinus(void) {
	DEBUG_WORD("fpointFMinus")
}

void fpointFDot(void){
	DEBUG_WORD("fpointFDot")
}


#endif
#if (FLOATSTD == FLOAT_NELSON)
void fpointFDotS(void) {
	int ii = 0;
	int floatStackIndex = forthTasks[forthState.forthCurrentTask].floatStackIndex;
	if (floatStackIndex) {
		printf("[%d] ", floatStackIndex);
		for (ii = 0; ii < floatStackIndex; ii++) {
			printf("%f ", forthTasks[forthState.forthCurrentTask].floatStackSpace[ii]);
		};
		printf("\n");
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_EMPTY;
	};
	DEBUG_WORD("fpointDotF")
}

void fpointFDot(void) {
	DEBUG_WORD("fpoinFtDot")
}

void fpointNumFS(void) {
	DEBUG_WORD("fpointNumFS")
}

void fpointSetPrecision(void) {
	DEBUG_WORD("fpointSetPrecision")
}

void fpointPrecision(void) {
	DEBUG_WORD("fpointPrecision")
}

void fpointFSqrt(void) {
	DEBUG_WORD("fpointFSqrt")
}

void fpointPi(void) {
	DEBUG_WORD("fpointPi")
}

void fpointFVariable(void) {
	DEBUG_WORD("fpointFVariable")
}

void fpointFConstant(void) {
	DEBUG_WORD("fpointFConstant")
}

void fpointFLiteral(void) {
	DEBUG_WORD("fpointFLiteral")
}

void fpointAFLiteral(void) {
	DEBUG_WORD("fpointAFLiteral")
}

void fpointSFComma(void) {
	DEBUG_WORD("fpointSFComma")
}

void fpointSFloatPlus(void) {
	DEBUG_WORD("fpointSFloatPlus")
}

void fpointSFloats(void) {
	DEBUG_WORD("fpointSFloats")
}

void fpointSFloat(void) {
	DEBUG_WORD("fpointSFloat")
}

void fpointSFGreaterEqual(void) {
	DEBUG_WORD("fpointSFGreaterEqual")
}

void fpointSFLessEqual(void) {
	DEBUG_WORD("fpointSFLessEqual")
}

void fpointSFUnequal(void) {
	DEBUG_WORD("fpointSFUnequal")
}

void fpointSFGreater(void) {
	DEBUG_WORD("fpointSFGreater")
}

void fpointSFLess(void) {
	DEBUG_WORD("fpointSFLess")
}

void fpointSFEqual(void) {
	DEBUG_WORD("fpointSFEqual")
}

void fpointFg(void) {
	DEBUG_WORD("fpointFg")
}

void fpointFDepth(void) {
	DEBUG_WORD("fpointFDepth")
}

void fpointFP0(void) {
	DEBUG_WORD("fpointFP0")
}

void fpointFGreaterNumberQ(void) {
	DEBUG_WORD("fpointFGreaterNumberQ")
}

void fpointFToS(void) {
	DEBUG_WORD("fpointFToS")
}

void fpointSToF(void) {
	DEBUG_WORD("fpointSToF")
}

void fpointOneSlashF(void) {
	DEBUG_WORD("fpointOneSlashF")
}

void fpointFSlash(void) {
	DEBUG_WORD("fpointFSlash")
}

void fpointFStar(void) {
	DEBUG_WORD("fpointFStar")
}

void fpointFMinus(void) {
	DEBUG_WORD("fpointFMinus")
}

void fpointFPlus(void) {
	DEBUG_WORD("fpointFPlus")
}

void fpointF0Equal(void) {
	DEBUG_WORD("fpointF0Equal")
}

void fpointF0Less(void) {
	DEBUG_WORD("fpointF0Less")
}

void fpointFNegate(void) {
	DEBUG_WORD("fpointFNegate")
}

void fpointFswa(void) {
	DEBUG_WORD("fpointFswa")
}

void fpointFOver(void) {
	DEBUG_WORD("fpointFOver")
}

void fpointFDrop(void) {
	DEBUG_WORD("fpointFDrop")
}

void fpointFNip(void) {
	DEBUG_WORD("fpointFNip")
}

void fpointFDup(void) {
	DEBUG_WORD("fpointFDup")
}

void fpointSFStore(void) {
	DEBUG_WORD("fpointSFStore")
}

void fpointSFFetch(void) {
	DEBUG_WORD("fpointSFFetch")
}

void fpointSF(void) {
	DEBUG_WORD("fpointSF")
}

void fpointFPStore(void) {
	DEBUG_WORD("fpointFPStore")
}

void fpointFPFetch(void) {
	DEBUG_WORD("fpointFPFetch")
}

#endif
#if (FLOATSTD == FLOAT_TURBO)
/* 10 Floating-Point Stack Manipulation Words */
void fpointFDup(void) {
	DEBUG_WORD("fpointFDup")
}

void fpointFDrop(void) {
	DEBUG_WORD("fpointFDrop")
}

void fpointFSwap(void) {
	DEBUG_WORD("fpointFSwap")
}

void fpointFOver(void) {
	DEBUG_WORD("fpointFOver")
}

void fpointFPClear(void) {
	DEBUG_WORD("fpointFPClear")
}

/* 11 Math Words */
void fpointFPlus(void) {
	DEBUG_WORD("fpointFPlus")
}

void fpointFMinus(void) {
	DEBUG_WORD("fpointFMinus")
}

void fpointFStar(void) {
	DEBUG_WORD("fpointFStar")
}

void fpointFSlash(void) {
	DEBUG_WORD("fpointFSlash")
}

void fpointFNegate(void) {
	DEBUG_WORD("fpointFNegate")
}

void fpointFAbs(void) {
	DEBUG_WORD("fpointFAbs")
}

void fpointFloor(void) {
	DEBUG_WORD("fpointFloor")
}

void fpointCeil(void) {
	DEBUG_WORD("fpointCeil")
}

void fpointTrunc(void) {
	DEBUG_WORD("fpointTrunc")
}

void fpointFrac(void) {
	DEBUG_WORD("fpointFrac")
}

/* 12 Comparison Words */
void fpointFEqual(void) {
	DEBUG_WORD("fpointFEqual")
}

void fpointF0Equal(void) {
	DEBUG_WORD("fpointF0Equal")
}

void fpointFLess(void) {
	DEBUG_WORD("fpointFLess")
}

void fpointFGreater(void) {
	DEBUG_WORD("fpointFGreater")
}

void fpointF0Less(void) {
	DEBUG_WORD("fpointF0Less")
}

/* 13 Floating-Point Literal Handling */
void fpointToF(void) {
	DEBUG_WORD("fpointToF")
}

void fpointFLiteral(void) {
	DEBUG_WORD("fpointFLiteral")
}

void fpointFLit(void) {
	DEBUG_WORD("fpointFLit")
}

/* 14 Floating-Point Variables */
void fpointFVariable(void) {
	DEBUG_WORD("fpointFVariable")
}

void fpointFStore(void) {
	DEBUG_WORD("fpointFStore")
}

void fpointFFetch(void) {
	DEBUG_WORD("fpointFFetch")
}

/* 15 Floating-Point Constants */
void fpointFConstant(void) {
	DEBUG_WORD("fpointFConstant")
}

/* 16 Floating-Point Values */
void fpointFValue(void) {
	DEBUG_WORD("fpointFValue")
}

void fpointFTo(void) {
	DEBUG_WORD("fpointFTo")
}

void fpointPlusFTo(void) {
	DEBUG_WORD("fpointPlusFTo")
}

/* 17 Displaying Floating-Point Numbers */
void fpointFDot(void) {
	DEBUG_WORD("fpointFDot")
}

void fpointFFDpt(void) {
	DEBUG_WORD("fpointFFDpt")
}

void fpointFFPlusDot(void) {
	DEBUG_WORD("fpointFFPlusDot")
}

void fpointFFEDot(void) {
	DEBUG_WORD("fpointFFEDot")
}

void fpointFFEPlusDot(void) {
	DEBUG_WORD("fpointFFEPlusDot")
}

void fpointFFXDot(void) {
	DEBUG_WORD("fpointFFXDot")
}

void fpointFFXPlusDot(void) {
	DEBUG_WORD("fpointFFXPlusDot")
}

void fpointFDollarDot(void) {
	DEBUG_WORD("fpointFDollarDot")
}

void fpointDotFS(void) {
	DEBUG_WORD("fpointDotFS")
}

void fpointDotFDollar(void) {
	DEBUG_WORD("fpointDotFDollar")
}

/* 18 Floating-Point Number Conversion */
void fpointSToFP(void) {
	DEBUG_WORD("fpointSToFP")
}

void fpointFPToS(void) {
	DEBUG_WORD("fpointFPToS")
}

/* 19 Transcendental Constants and Conversion Functions */
void fpointPi(void) {
	DEBUG_WORD("fpointPi")
}

void fpointEulerE(void) {
	DEBUG_WORD("fpointEulerE")
}

void fpointRadDeg(void) {
	DEBUG_WORD("fpointRadDeg")
}

void fpointDegRad(void) {
	DEBUG_WORD("fpointDegRad")
}

void fpointToRad(void) {
	DEBUG_WORD("fpointToRad")
}

void fpointToDeg(void) {
	DEBUG_WORD("fpointToDeg")
}

/* 20 Transcendental Functions */
void fpointExp(void) {
	DEBUG_WORD("fpointExp")
}

void fpointLog(void) {
	DEBUG_WORD("fpointLog")
}

void fpointSqrt(void) {
	DEBUG_WORD("fpointSqrt")
}

void fpointCos(void) {
	DEBUG_WORD("fpointCos")
}

void fpointSin(void) {
	DEBUG_WORD("fpointSin")
}

void fpointTan(void) {
	DEBUG_WORD("fpointTan")
}

void fpointAtn(void) {
	DEBUG_WORD("fpointAtn")
}

void fpointPow(void) {
	DEBUG_WORD("fpointPow")
}

void fpointLog10(void) {
	DEBUG_WORD("fpointLog10")
}

void fpointExp10(void) {
	DEBUG_WORD("fpointExp10")
}

/* 21.3 Floating Point Error Handling */
void fpointQFPErr(void) {
	DEBUG_WORD("fpointQFPErr")
}

#endif
#endif


#if TASKINGSTANDARD == TASKINGSTD_VOLK
void taskingVfActivate(void) {
	DEBUG_WORD("taskingVfActivate")
}

void taskingVfLock(void) {
	DEBUG_WORD("taskingVfLock")
}

void taskingVfMultiTask(void) {
	DEBUG_WORD("taskingVfMultiTask")
}

void taskingVfPass(void) {
	DEBUG_WORD("taskingVfPass")
}

void taskingVfPause(void) {
	DEBUG_WORD("taskingVfPause")
}

void taskingVfRendezvous(void) {
	DEBUG_WORD("taskingVfRendezvous")
}

void taskingVfSingleTask(void) {
	DEBUG_WORD("taskingVfSingleTask")
}

void taskingVfSleep(void) {
	DEBUG_WORD("taskingVfSleep")
}

void taskingVfStop(void) {
	DEBUG_WORD("taskingVfStop")
}

void taskingVfTask(void) {
	DEBUG_WORD("taskingVfTask")
}

void taskingVfTasks(void) {
	DEBUG_WORD("taskingVfTasks")
}

void taskingVfUnlock(void) {
	DEBUG_WORD("taskingVfUnlock")
}

void taskingVfWake(void) {
	DEBUG_WORD("taskingVfWake")
}

void taskingVfUPFetch(void) {
	DEBUG_WORD("taskingVfUPFetch")
}

void taskingVfUPStore(void) {
	DEBUG_WORD("taskingVfUPStore")
}
#endif


#ifdef TESTING_SUPPORT
void testingTCurlyBracket(void) {
	DEBUG_WORD("testingTCurlyBracket")
}

void testingCurlyBracketT(void) {
	DEBUG_WORD("testingCurlyBracketT")
}
#endif

#if TASKINGSTANDARD == TASKINGSTD_FORTH83
void taskingF83Allot(void) {
	DEBUG_WORD("taskingF83Allot")
}

void taskingF83Create(void) {
	DEBUG_WORD("taskingF83Create")
}

void taskingF83Variable(void) {
	DEBUG_WORD("taskingF83Variable")
}

void taskingF83Defer(void) {
	DEBUG_WORD("taskingF83Defer")
}

void taskingF83Pause(void) {
	DEBUG_WORD("taskingF83Pause")
}

void taskingF83Restart(void) {
	DEBUG_WORD("taskingF83Restart")
}

void taskingF83Local(void) {
	DEBUG_WORD("taskingF83Local")
}

void taskingF83FetchLink(void) {
	DEBUG_WORD("taskingF83FetchLink")
}

void taskingF83StoreLink(void) {
	DEBUG_WORD("taskingF83StoreLink")
}

void taskingF83Sleep(void) {
	DEBUG_WORD("taskingF83Sleep")
}

void taskingF83Wake(void) {
	DEBUG_WORD("taskingF83Wake")
}

void taskingF83Stop(void) {
	DEBUG_WORD("taskingF83Stop")
}

void taskingF83Multi(void) {
	DEBUG_WORD("taskingF83Multi")
}

void taskingF83Single(void) {
	DEBUG_WORD("taskingF83Single")
}

void taskingF83Task(void) {
	DEBUG_WORD("taskingF83Task")
}

void taskingF83SetTask(void) {
	DEBUG_WORD("taskingF83SetTask")
}

void taskingF83Activate(void) {
	DEBUG_WORD("taskingF83Activate")
}

void taskingF83Background(void) {
	DEBUG_WORD("taskingF83Background")
}


#endif

#endif
