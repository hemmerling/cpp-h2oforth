#ifndef H2OCOMM2
#define H2OCOMM2

/* Declarations of FORTH words common to one or more FORTH standards & FORTH implementations */

/* Internal functions */
#if defined (__DEBUG__)
void privateDebugWord(char* nameOfWord) {
	int nn; /* < 32 */
	nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, "\n%s", nameOfWord);
	PUTS(forthTasks[forthState.forthCurrentTask].printBuffer);
}
#endif

/* BaseConversion => non-reantrant function */
char* privatBaseConversion(CELL_INTEGER base, CELL_INTEGER value) {
	CELL_INTEGER quotient = value;
	CELL_INTEGER  reminder = 0;
	char static value2[MAX_INPUTBUFFER]; /* must be static */
	char* result;
	int ii = MAX_INPUTBUFFER - 1;
	value2[MAX_INPUTBUFFER - 1] = (char)0;
	do {
		reminder = quotient % base; /* first reminder calculation */
		quotient = quotient / base;
		value2[--ii] = (char)(reminder + (int)'0');
	} while (quotient != 0);
	result = (char*)&value2[ii];
	return (result);
}

void privateMessageHandler(void) {
	int nn; /* < 32 */
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
		nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, "? %s %s # %d", wordBuffer,
			forthTasks[forthState.forthCurrentTask].forthErrors[forthTasks[forthState.forthCurrentTask].errorNumber].messageText,
			forthTasks[forthState.forthCurrentTask].errorNumber);
		PUTS(forthTasks[forthState.forthCurrentTask].printBuffer);
	};
	if (messageNumber
#if defined (__DEVELOP__)
		&& (messageNumber < sizeOfMessages)
#endif
		) {
		nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, "%s",
			forthTasks[forthState.forthCurrentTask].forthMessages[forthTasks[forthState.forthCurrentTask].messageNumber].messageText);
		PUTS(forthTasks[forthState.forthCurrentTask].printBuffer);
	};
	if (osErrorNumber
#if defined (__DEVELOP__)
		&& (osErrorNumber < sizeOfOsErrors)
#endif
		) {
		nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, "%s",
					 forthTasks[forthState.forthCurrentTask].forthOsErrors[forthTasks[forthState.forthCurrentTask].osErrorNumber].messageText);
		PUTS(forthTasks[forthState.forthCurrentTask].printBuffer);
	};
	forthTasks[forthState.forthCurrentTask].errorNumber = 0;
	forthTasks[forthState.forthCurrentTask].messageNumber = 0;
	forthTasks[forthState.forthCurrentTask].osErrorNumber = 0;
}

void privateSetBaseFormat(void) {
	switch (forthTasks[forthState.forthCurrentTask].forthBase) {
	case OCTAL:
		forthTasks[forthState.forthCurrentTask].baseFormat = (char*)BASE_FORMAT_OCTAL;
		break;
	case DECIMAL:
		forthTasks[forthState.forthCurrentTask].baseFormat = (char*)BASE_FORMAT_DECIMAL;
		break;
	case HEX:
		forthTasks[forthState.forthCurrentTask].baseFormat = (char*)BASE_FORMAT_HEX;
		break;
	default:
		forthTasks[forthState.forthCurrentTask].baseFormat = (char*)BASE_FORMAT_EMPTY;
	};
}

void privateSetBaseLFormat(void) {
	switch (forthTasks[forthState.forthCurrentTask].forthBase) {
	case OCTAL:
		forthTasks[forthState.forthCurrentTask].baseFormat = (char*)BASE_FORMAT_LOCTAL;
		break;
	case DECIMAL:
		forthTasks[forthState.forthCurrentTask].baseFormat = (char*)BASE_FORMAT_LDECIMAL;
		break;
	case HEX:
		forthTasks[forthState.forthCurrentTask].baseFormat = (char*)BASE_FORMAT_LHEX;
		break;
	default:
		forthTasks[forthState.forthCurrentTask].baseFormat = (char*)BASE_FORMAT_EMPTY;
	};
}

/* Primitives */

void commonOctal(void) {
	forthTasks[forthState.forthCurrentTask].forthBase = OCTAL;
	forthTasks[forthState.forthCurrentTask].baseFormat = (char*)BASE_FORMAT_OCTAL;
	DEBUG_WORD("commonOctal")
}

/* Display in hexadecimal base in the format of <.> */
void commonHexDot(void) {
	int nn; /* < 32 */
	if (forthTasks[forthState.forthCurrentTask].dataStackIndex) {
		if (sizeof(CELL_INTEGER) == CELLSIZE8) {
			nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, "%llx ", 
						 forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex]);
			FPUTS(forthTasks[forthState.forthCurrentTask].printBuffer);
		}
		else {
			nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, "%x ", 
						 forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex]);
			FPUTS(forthTasks[forthState.forthCurrentTask].printBuffer);
		}
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_EMPTY;
	};
	DEBUG_WORD("commonHexDot")
}

/* Display in octal base in the format of <.> */
void commonOctDot(void) {
	int nn; /* < 32 */
	if (forthTasks[forthState.forthCurrentTask].dataStackIndex) {
		if (sizeof(CELL_INTEGER) == CELLSIZE8) {
			nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, "%llo ", 
						 forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex]);
			FPUTS(forthTasks[forthState.forthCurrentTask].printBuffer);
		}
		else {
			nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, "%o ",
						 forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex]);
			FPUTS(forthTasks[forthState.forthCurrentTask].printBuffer);
		};
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_EMPTY;
	};
	DEBUG_WORD("commonOctDot")
}

/* Display the ReturnStack ( H2OForth unique ) */
void commonRDotS(void) {
	int ii = 0;
	int nn; /* < 32 */
	int returnStackIndex = forthTasks[forthState.forthCurrentTask].returnStackIndex;
	if (returnStackIndex) {
		privateSetBaseFormat();
		nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, "[%d] ", returnStackIndex);
		FPUTS(forthTasks[forthState.forthCurrentTask].printBuffer);
		for (ii = 0; ii < returnStackIndex; ii++) {
			nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, 
						 forthTasks[forthState.forthCurrentTask].baseFormat, 
						 forthTasks[forthState.forthCurrentTask].returnStackSpace[ii]);
			FPUTS(forthTasks[forthState.forthCurrentTask].printBuffer);
			PUTCHAR(CHAR_SPACE);
		};
		PUTCHAR(CHAR_CR);
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_RETURNSTACK_EMPTY;
	};
	DEBUG_WORD("commonRDot")
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
#ifdef FLOAT_ON_DATASTACK
	CELL_FLOAT* floatStackPointer;
	CELL_FLOAT value1;
	CELL_UNSIGNED value2;
	if ((forthTasks[forthState.forthCurrentTask].dataStackIndex) && \
		(forthTasks[forthState.forthCurrentTask].dataStackIndex < MAX_DATASTACK - forthTasks[forthState.forthCurrentTask].floatFloatIntRatio + 1)) {

		/* Step 1: Decrease stackpointer by CELL_INTEGER, get CELL_INTEGER */
		value2 = (CELL_UNSIGNED)forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex];

		/* Step 2: Save CELL_FLOAT, increase stackpointer by CELL_FLOAT */
		floatStackPointer = (CELL_FLOAT*)&forthTasks[forthState.forthCurrentTask].dataStackSpace[forthTasks[forthState.forthCurrentTask].dataStackIndex];
		value1 = (CELL_FLOAT)value2;
		*floatStackPointer = value1;
		forthTasks[forthState.forthCurrentTask].dataStackIndex =
			forthTasks[forthState.forthCurrentTask].dataStackIndex + forthTasks[forthState.forthCurrentTask].floatFloatIntRatio;
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_EMPTY;
	};
#else
	/* TBD */
#endif
	DEBUG_WORD("fpointUFLoat")
}

void fpointInt(void) {
#ifdef FLOAT_ON_DATASTACK
	CELL_FLOAT* floatStackPointer;
	CELL_FLOAT value1;
	CELL_INTEGER value2;
	if (forthTasks[forthState.forthCurrentTask].dataStackIndex >=
		forthTasks[forthState.forthCurrentTask].floatFloatIntRatio) {
		/* Step 1: Decrease stackpointer by CELL_FLOAT, get CELL_FLOAT */
		forthTasks[forthState.forthCurrentTask].dataStackIndex = forthTasks[forthState.forthCurrentTask].dataStackIndex - forthTasks[forthState.forthCurrentTask].floatFloatIntRatio;

		floatStackPointer = (CELL_FLOAT*)&forthTasks[forthState.forthCurrentTask].dataStackSpace[forthTasks[forthState.forthCurrentTask].dataStackIndex];
		value1 = *floatStackPointer;
		value2 = (CELL_INTEGER)value1;
		/* Step 1: Save CELL_INTEGER, increase stackpointer by CELL_INTEGER */
		forthTasks[forthState.forthCurrentTask].dataStackSpace[forthTasks[forthState.forthCurrentTask].dataStackIndex++] = value2;
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_EMPTY;
	};
#else
	/* TBD */
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
	CELL_FLOAT* floatStackPointer;
	if (forthTasks[forthState.forthCurrentTask].dataStackIndex >=
		2 * forthTasks[forthState.forthCurrentTask].floatFloatIntRatio) {

		forthTasks[forthState.forthCurrentTask].dataStackIndex = forthTasks[forthState.forthCurrentTask].dataStackIndex - forthTasks[forthState.forthCurrentTask].floatFloatIntRatio;

		floatStackPointer = (CELL_FLOAT*)&forthTasks[forthState.forthCurrentTask].dataStackSpace[forthTasks[forthState.forthCurrentTask].dataStackIndex];
		value1 = *floatStackPointer;

		forthTasks[forthState.forthCurrentTask].dataStackIndex = forthTasks[forthState.forthCurrentTask].dataStackIndex - forthTasks[forthState.forthCurrentTask].floatFloatIntRatio;

		floatStackPointer = (CELL_FLOAT*)&forthTasks[forthState.forthCurrentTask].dataStackSpace[forthTasks[forthState.forthCurrentTask].dataStackIndex];
		value2 = *floatStackPointer;

		value1 = value1 + value2;
		*floatStackPointer = value1;

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

void fpointFDot(void) {
	CELL_FLOAT value = 0.0;
	CELL_FLOAT* floatStackPointer;
	int nn; /* < 32 */
	if (forthTasks[forthState.forthCurrentTask].dataStackIndex >=
		forthTasks[forthState.forthCurrentTask].floatFloatIntRatio) {
		forthTasks[forthState.forthCurrentTask].dataStackIndex = forthTasks[forthState.forthCurrentTask].dataStackIndex - forthTasks[forthState.forthCurrentTask].floatFloatIntRatio;
		floatStackPointer = (CELL_FLOAT*)&forthTasks[forthState.forthCurrentTask].dataStackSpace[forthTasks[forthState.forthCurrentTask].dataStackIndex];
		value = *floatStackPointer;
		nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, "%f", value);
		FPUTS(forthTasks[forthState.forthCurrentTask].printBuffer);
		PUTCHAR(CHAR_SPACE);
		forthTasks[forthState.forthCurrentTask].dataStackIndex = forthTasks[forthState.forthCurrentTask].dataStackIndex - forthTasks[forthState.forthCurrentTask].floatFloatIntRatio;
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_EMPTY;
	};
	DEBUG_WORD("fpointFDot")
}


#endif
#if (FLOATSTD == FLOAT_NELSON)
void fpointFDotS(void) {
	int ii = 0;
	int floatStackIndex = forthTasks[forthState.forthCurrentTask].floatStackIndex;
	int nn; /* < 32 */
	if (floatStackIndex) {
		nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, "[%d] ", floatStackIndex);
		FPUTS(forthTasks[forthState.forthCurrentTask].printBuffer);
		for (ii = 0; ii < floatStackIndex; ii++) {
			nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, "%f", 
						 forthTasks[forthState.forthCurrentTask].floatStackSpace[ii]);
			FPUTS(forthTasks[forthState.forthCurrentTask].printBuffer);
		};
		PUTCHAR(CHAR_CR);
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

#if TASKINGSTANDARD == TASKINGSTD_FPC
void taskingFPCPause(void) {
	DEBUG_WORD("taskingFPCPause")
}

void taskingFPCRestart(void) {
	DEBUG_WORD("taskingFPCRestart")
}

void taskingFPCLocal(void) {
	DEBUG_WORD("taskingFPCLocal")
}

void taskingFPCFetchLink(void) {
	DEBUG_WORD("taskingFPCFetchLink")
}

void taskingFPCStoreLink(void) {
	DEBUG_WORD("taskingFPCStoreLink")
}

void taskingFPCSleep(void) {
	DEBUG_WORD("taskingFPCSleep")
}

void taskingFPCWake(void) {
	DEBUG_WORD("taskingFPCWake")
}

void taskingFPCStop(void) {
	DEBUG_WORD("taskingFPCStop")
}

void taskingFPCSingle(void) {
	DEBUG_WORD("taskingFPCSingle")
}

void taskingFPCMulti(void) {
	DEBUG_WORD("taskingFPCMulti")
}

void taskingFPCTask(void) {
	DEBUG_WORD("taskingFPCTask")
}

void taskingFPCSetTask(void) {
	DEBUG_WORD("taskingFPCSetTask")
}

void taskingFPCActivate(void) {
	DEBUG_WORD("taskingFPCActivate")
}

void taskingFPCBackground(void) {
	DEBUG_WORD("taskingFPCBackground")
}

#endif

#if TASKINGSTANDARD == TASKINGSTD_VOLK
void taskingVolkActivate(void) {
	DEBUG_WORD("taskingVolkActivate")
}

void taskingVolkLock(void) {
	DEBUG_WORD("taskingVolkLock")
}

void taskingVolkMultiTask(void) {
	DEBUG_WORD("taskingVolkMultiTask")
}

void taskingVolkPass(void) {
	DEBUG_WORD("taskingVolkPass")
}

void taskingVolkPause(void) {
	DEBUG_WORD("taskingVolkPause")
}

void taskingVolkRendezvous(void) {
	DEBUG_WORD("taskingVolkRendezvous")
}

void taskingVolkSingleTask(void) {
	DEBUG_WORD("taskingVolkSingleTask")
}

void taskingVolkSleep(void) {
	DEBUG_WORD("taskingVolkSleep")
}

void taskingVolkStop(void) {
	DEBUG_WORD("taskingVolkStop")
}

void taskingVolkTask(void) {
	DEBUG_WORD("taskingVolkTask")
}

void taskingVolkTasks(void) {
	DEBUG_WORD("taskingVolkTasks")
}

void taskingVolkUnlock(void) {
	DEBUG_WORD("taskingVolkUnlock")
}

void taskingVolkWake(void) {
	DEBUG_WORD("taskingVolkWake")
}

void taskingVolkUPFetch(void) {
	DEBUG_WORD("taskingVolkUPFetch")
}

void taskingVolkUPStore(void) {
	DEBUG_WORD("taskingVolkUPStore")
}

#endif

#if TASKINGSTANDARD == TASKINGSTD_BIGFORTH
void taskingBigTaskerDotScr(void) {
	DEBUG_WORD("taskingBigTaskerDotScr")
}

void taskingBigStop(void) {
	DEBUG_WORD("taskingBigStop")
}

void taskingBigSingleTask(void) {
	DEBUG_WORD("taskingBigSingleTask")
}

void taskingBigMultiTask(void) {
	DEBUG_WORD("taskingBigMultiTask")
}

void taskingBigActivate(void) {
	DEBUG_WORD("taskingBigActivate")
}

void taskingBigPass(void) {
	DEBUG_WORD("taskingBigPass")
}

void taskingBigAutostart(void) {
	DEBUG_WORD("taskingBigAutostart")
}

void taskingBigSleep(void) {
	DEBUG_WORD("taskingBigSleep")
}

void taskingBigWake(void) {
	DEBUG_WORD("taskingBigWake")
}

void taskingBigTimerFetch(void) {
	DEBUG_WORD("taskingBigTimerFetch")
}

void taskingBigSyncTime(void) {
	DEBUG_WORD("taskingBigSyncTime")
}

void taskingBigSyncStore(void) {
	DEBUG_WORD("taskingBigSyncStore")
}

void taskingBigSync(void) {
	DEBUG_WORD("taskingBigSync")
}

void taskingBigTask(void) {
	DEBUG_WORD("taskingBigTask")
}

void taskingBigRendezvous(void) {
	DEBUG_WORD("taskingBigRendezvous")
}

void taskingBigSTick(void) {
	DEBUG_WORD("taskingBigSTick")
}

void taskingBigTasks(void) {
	DEBUG_WORD("taskingBigTasks")
}

void taskingBigClockTask(void) {
	DEBUG_WORD("taskingBigClockTask")
}

void taskingBigClock(void) {
	DEBUG_WORD("taskingBigClock")
}

void taskingBigWaitC(void) {
	DEBUG_WORD("taskingBigWaitC")
}

void taskingBigStartC(void) {
	DEBUG_WORD("taskingBigStartC")
}

void taskingBigNoClock(void) {
	DEBUG_WORD("taskingBigNoClock")
}

void taskingBigSetClock(void) {
	DEBUG_WORD("taskingBigSetClock")
}

void taskingBigPause(void) {
	DEBUG_WORD("taskingBigPause")
}

void taskingBigLock(void) {
	DEBUG_WORD("taskingBigLock")
}

void taskingBigUnlock(void) {
	DEBUG_WORD("taskingBigUnlock")
}

#endif

#if TASKINGSTANDARD == TASKINGSTD_RTF
void taskingRtfSingle(void) {
	DEBUG_WORD("taskingRtfSingle")
}

void taskingRtfMulti(void) {
	DEBUG_WORD("taskingRtfMulti")
}

void taskingRtfBackground(void) {
	DEBUG_WORD("taskingRtfBackground")
}

void taskingRtfWake(void) {
	DEBUG_WORD("taskingRtfWake")
}

void taskingRtfSleep(void) {
	DEBUG_WORD("taskingRtfSleep")
}

void taskingRtfStop(void) {
	DEBUG_WORD("taskingRtfStop")
}

void taskingRtfPause(void) {
	DEBUG_WORD("taskingRtfPause")
}

void taskingRtfActivate(void) {
	DEBUG_WORD("taskingRtfActivate")
}

#endif

#if TASKINGSTANDARD == TASKINGSTD_CAMEL
void taskingCamelSwitch(void) {
	DEBUG_WORD("taskingCamelSwitch")
}

void taskingCamelInitTask(void) {
	DEBUG_WORD("taskingCamelInitTask")
}

void taskingCamelDetach(void) {
	DEBUG_WORD("taskingCamelDetach")
}

void taskingCamelAttach(void) {
	DEBUG_WORD("taskingCamelAttach")
}

void taskingCamelPreempt(void) {
	DEBUG_WORD("taskingCamelPreempt")
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

#endif
