#ifndef H2OCOMM2
#define H2OCOMM2

/* Declarations of FORTH words common to one or more FORTH standards & FORTH implementations */

/* Internal functions */
void privateMessage(char* message, int stream, int cr1, int cr2) {
	Serial.println(message);
		return;
	switch (stream)
	{
    	case STREAM_SUCCESS:
			if (cr1){
				FPUTC_OUT(CHAR_CR);
			};
			FPUTS_OUT(message);
			if (cr2){
				FPUTC_OUT(CHAR_CR);
			};
      		break;
    	case STREAM_ERROR:
    	case STREAM_WARNING:
    	case STREAM_VERBOSE:
    	case STREAM_DEBUG:
    	case STREAM_INFORMATION:
			if (cr1){
				FPUTC_ERR(CHAR_CR);
			};
			FPUTS_ERR(message);
			if (cr2){
				FPUTC_ERR(CHAR_CR);
			};
      		break;
    	default:
      		return;
	};
}

/* BaseConversion => non-reantrant function */
char* privateBaseConversion(CELL_INTEGER base, CELL_INTEGER value) {
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
#ifdef ARDUINO
			(char *)pgm_read_ptr(
			forthTasks[forthState.forthCurrentTask].forthErrors[forthTasks[forthState.forthCurrentTask].errorNumber].messageText),
#else
			forthTasks[forthState.forthCurrentTask].forthErrors[forthTasks[forthState.forthCurrentTask].errorNumber].messageText,
#endif
			forthTasks[forthState.forthCurrentTask].errorNumber);
		 PUTS(forthTasks[forthState.forthCurrentTask].printBuffer);
	};
	if (messageNumber
#if defined (__DEVELOP__)
		&& (messageNumber < sizeOfMessages)
#endif
		) {
		nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, "%s",
#ifdef ARDUINO
			(char *)pgm_read_ptr(
			forthTasks[forthState.forthCurrentTask].forthMessages[forthTasks[forthState.forthCurrentTask].messageNumber].messageText));
#else
			forthTasks[forthState.forthCurrentTask].forthMessages[forthTasks[forthState.forthCurrentTask].messageNumber].messageText);
#endif
		PUTS(forthTasks[forthState.forthCurrentTask].printBuffer);
	};
	if (osErrorNumber
#if defined (__DEVELOP__)
		&& (osErrorNumber < sizeOfOsErrors)
#endif
		) {
		nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, "%s",
#ifdef ARDUINO
			(char *)pgm_read_ptr(
			forthTasks[forthState.forthCurrentTask].forthOsErrors[forthTasks[forthState.forthCurrentTask].osErrorNumber].messageText));
#else
			forthTasks[forthState.forthCurrentTask].forthOsErrors[forthTasks[forthState.forthCurrentTask].osErrorNumber].messageText);
#endif
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
	MESSSAGE_DEBUG("commonOctal")
}

/* Display in hexadecimal base in the format of <.> */
void commonHexDot(void) {
	int nn; /* < 32 */
	if (forthTasks[forthState.forthCurrentTask].dataStackIndex) {
		if (sizeof(CELL_INTEGER) == CELLSIZE8) {
			nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, "%llx ",
				forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex]);
			FPUTS_OUT(forthTasks[forthState.forthCurrentTask].printBuffer);
		}
		else {
			nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, "%x ",
				forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex]);
			FPUTS_OUT(forthTasks[forthState.forthCurrentTask].printBuffer);
		}
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_EMPTY;
	};
	MESSSAGE_DEBUG("commonHexDot")
}

/* Display in octal base in the format of <.> */
void commonOctDot(void) {
	int nn; /* < 32 */
	if (forthTasks[forthState.forthCurrentTask].dataStackIndex) {
		if (sizeof(CELL_INTEGER) == CELLSIZE8) {
			nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, "%llo ",
				forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex]);
			FPUTS_OUT(forthTasks[forthState.forthCurrentTask].printBuffer);
		}
		else {
			nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, "%o ",
				forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex]);
			FPUTS_OUT(forthTasks[forthState.forthCurrentTask].printBuffer);
		};
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_EMPTY;
	};
	MESSSAGE_DEBUG("commonOctDot")
}

/* Display the ReturnStack ( H2OForth unique ) */
void commonRDotS(void) {
	int ii = 0;
	int nn; /* < 32 */
	int returnStackIndex = forthTasks[forthState.forthCurrentTask].returnStackIndex;
	if (returnStackIndex) {
		privateSetBaseFormat();
		nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, "[%d] ", returnStackIndex);
		FPUTS_OUT(forthTasks[forthState.forthCurrentTask].printBuffer);
		for (ii = 0; ii < returnStackIndex; ii++) {
			nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer,
				forthTasks[forthState.forthCurrentTask].baseFormat,
				forthTasks[forthState.forthCurrentTask].returnStackSpace[ii]);
			FPUTS_OUT(forthTasks[forthState.forthCurrentTask].printBuffer);
			PUTCHAR(CHAR_SPACE);
		};
		PUTCHAR(CHAR_CR);
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_RETURNSTACK_EMPTY;
	};
	MESSSAGE_DEBUG("commonRDot")
}


#ifdef EXCEPTION_SUPPORT
void exceptionAbort(void) {
	MESSSAGE_DEBUG("exceptionAbort")
}

void exceptionAbortQ(void) {
	MESSSAGE_DEBUG("exceptionAbortQ")
}

void exceptionCatch(void) {
	MESSSAGE_DEBUG("exceptionCatch")
}

void exceptionThrow(void) {
	MESSSAGE_DEBUG("exceptionThrow")
}

/* Quit with exception handling. Overrides standard implementation in forthWords */
void exceptionQuit(void) {
	MESSSAGE_DEBUG("exceptionQuit")
}
#endif


#ifdef FLOAT_SUPPORT
#if (FLOATSTD == FLOAT_ANS94) || (FLOATSTD == FLOAT_FORTH2012)
/* Floating-Point extension words */
void fpointDFStore(void) {
	MESSSAGE_DEBUG("fpointDFStore")
}

void fpointDFFetch(void) {
	MESSSAGE_DEBUG("fpointDFFetch")
}

void fpointDFAlign(void) {
	MESSSAGE_DEBUG("fpointDFAlign")
}

void fpointDFFieldColon(void) {
	MESSSAGE_DEBUG("fpointDFFieldColon")
}

void fpointDFloatPlus(void) {
	MESSSAGE_DEBUG("fpointDFloatPlus")
}

void fpointDFloatS(void) {
	MESSSAGE_DEBUG("fpointDFloatS")
}

void fpointFStarStar(void) {
	MESSSAGE_DEBUG("fpointFStarStar")
}

void fpointFDot(void) {
	MESSSAGE_DEBUG("fpointFDot")
}

void fpointFToS(void) {
	MESSSAGE_DEBUG("fpointFToS")
}

void fpointFAbs(void) {
	MESSSAGE_DEBUG("fpointFAbs")
}

void fpointFAcos(void) {
	MESSSAGE_DEBUG("fpointFAcos")
}

void fpointFAcosh(void) {
	MESSSAGE_DEBUG("fpointFAcosh")
}

void fpointFAlog(void) {
	MESSSAGE_DEBUG("fpointFAlog")
}

void fpointFAsin(void) {
	MESSSAGE_DEBUG("fpointFAsin")
}

void fpointAsinh(void) {
	MESSSAGE_DEBUG("fpointAsinh")
}

void fpointAtan(void) {
	MESSSAGE_DEBUG("fpointAtan")
}

void fpointAtan2(void) {
	MESSSAGE_DEBUG("fpointAtan2")
}

void fpointFAtanh(void) {
	MESSSAGE_DEBUG("fpointFAtanh")
}

void fpointFCos(void) {
	MESSSAGE_DEBUG("fpointFCos")
}

void fpointFCosh(void) {
	MESSSAGE_DEBUG("fpointFCosh")
}

void fpointFEDot(void) {
	MESSSAGE_DEBUG("fpointFEDot")
}

void fpointFExp(void) {
	MESSSAGE_DEBUG("fpointFExp")
}

void fpointFExpm1(void) {
	MESSSAGE_DEBUG("fpointFExpm1")
}

void fpointFFieldColon(void) {
	MESSSAGE_DEBUG("fpointFFieldColon")
}

void fpointFLn(void) {
	MESSSAGE_DEBUG("fpointFLn")
}

void fpointFLnp1(void) {
	MESSSAGE_DEBUG("fpointFLnp1")
}

void fpointFLog(void) {
	MESSSAGE_DEBUG("fpointFLog")
}

void fpointFSDot(void) {
	MESSSAGE_DEBUG("fpointFSDot")
}

void fpointFSin(void) {
	MESSSAGE_DEBUG("fpointFSin")
}

void fpointFSincos(void) {
	MESSSAGE_DEBUG("fpointFSincos")
}

void fpointFSinH(void) {
	MESSSAGE_DEBUG("fpointFSinH")
}

void fpointFSqrt(void) {
	MESSSAGE_DEBUG("fpointFSqrt")
}

void fpointFTan(void) {
	MESSSAGE_DEBUG("fpointFTan")
}

void fpointFTanh(void) {
	MESSSAGE_DEBUG("fpointFTanh")
}

void fpointFTrunc(void) {
	MESSSAGE_DEBUG("fpointFTrunc")
}

void fpointFValue(void) {
	MESSSAGE_DEBUG("fpointFValue")
}

void fpointFTilde(void) {
	MESSSAGE_DEBUG("fpointFTilde")
}

void fpointPrecision(void) {
	MESSSAGE_DEBUG("fpointPrecision")
}

void fpointSToF(void) {
	MESSSAGE_DEBUG("fpointSToF")
}

void fpointSetPrecision(void) {
	MESSSAGE_DEBUG("fpointSetPrecision")
}

void fpointSFStore(void) {
	MESSSAGE_DEBUG("fpointSFStore")
}

void fpointSFFetch(void) {
	MESSSAGE_DEBUG("fpointSFFetch")
}

void fpointSFAlign(void) {
	MESSSAGE_DEBUG("fpointSFAlign")
}

void fpointSFAligned(void) {
	MESSSAGE_DEBUG("fpointSFAligned")
}

void fpointSFFieldColon(void) {
	MESSSAGE_DEBUG("fpointSFFieldColon")
}

void fpointSFloatPlus(void) {
	MESSSAGE_DEBUG("fpointSFloatPlus")
}

void fpointSFloatS(void) {
	MESSSAGE_DEBUG("fpointSFloatS")
}

/* Floating-Point words */
void fpointToFloat(void) {
	MESSSAGE_DEBUG("fpointToFloat")
}

void fpointDToF(void) {
	MESSSAGE_DEBUG("fpointDToF")
}

void fpointFStore(void) {
	MESSSAGE_DEBUG("fpointFStore")
}

void fpointFMultiply(void) {
	MESSSAGE_DEBUG("fpointFMultiply")
}

void fpointFPlus(void) {
	MESSSAGE_DEBUG("fpointFPlus")
}

void fpointFMinus(void) {
	MESSSAGE_DEBUG("fpointFMinus")
}

void fpointFfpointFSlash(void) {
	MESSSAGE_DEBUG("fpointFfpointFSlash")
}

void fpointF0Less(void) {
	MESSSAGE_DEBUG("fpointF0Less")
}

void fpointF0Equal(void) {
	MESSSAGE_DEBUG("fpointF0Equal")
}

void fpointFLess(void) {
	MESSSAGE_DEBUG("fpointFLess")
}

void fpointFToD(void) {
	MESSSAGE_DEBUG("fpointFToD")
}

void fpointFFetch(void) {
	MESSSAGE_DEBUG("fpointFFetch")
}

void fpointtFAlign(void) {
	MESSSAGE_DEBUG("fpointtFAlign")
}

void fpointFAligned(void) {
	MESSSAGE_DEBUG("fpointFAligned")
}

void fpointFConstant(void) {
	MESSSAGE_DEBUG("fpointFConstant")
}

void fpointFDepth(void) {
	MESSSAGE_DEBUG("fpointFDepth")
}

void fpointFDrop(void) {
	MESSSAGE_DEBUG("fpointFDrop")
}

void fpointFDup(void) {
	MESSSAGE_DEBUG("fpointFDup")
}

void fpointFLiteral(void) {
	MESSSAGE_DEBUG("fpointFLiteral")
}

void fpointFloatPlus(void) {
	MESSSAGE_DEBUG("fpointFloatPlus")
}

void fpointFloatS(void) {
	MESSSAGE_DEBUG("fpointFloatS")
}

void fpointFloor(void) {
	MESSSAGE_DEBUG("fpointFloor")
}

void fpointFMax(void) {
	MESSSAGE_DEBUG("fpointFMax")
}

void fpointFMin(void) {
	MESSSAGE_DEBUG("fpointFMin")
}

void fpointFNegate(void) {
	MESSSAGE_DEBUG("fpointFNegate")
}

void fpointFOver(void) {
	MESSSAGE_DEBUG("fpointFOver")
}

void fpointFRot(void) {
	MESSSAGE_DEBUG("fpointFRot")
}

void fpointFRound(void) {
	MESSSAGE_DEBUG("fpointFRound")
}

void fpointFSwap(void) {
	MESSSAGE_DEBUG("fpointFSwap")
}

void fpointFVariable(void) {
	MESSSAGE_DEBUG("fpointFVariable")
}

void fpointRepresent(void) {
	MESSSAGE_DEBUG("fpointRepresent")
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
	MESSSAGE_DEBUG("fpointUFLoat")
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
	MESSSAGE_DEBUG("fpointInt")
}

void fpointFNegate(void) {
	MESSSAGE_DEBUG("fpointFNegate")
}

void fpointFSlash(void) {
	MESSSAGE_DEBUG("fpointFSlash")
}

void fpointFStar(void) {
	MESSSAGE_DEBUG("fpointFStar")
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
	MESSSAGE_DEBUG("fpointFPlus")
}

void fpointFMinus(void) {
	MESSSAGE_DEBUG("fpointFMinus")
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
		FPUTS_OUT(forthTasks[forthState.forthCurrentTask].printBuffer);
		PUTCHAR(CHAR_SPACE);
		forthTasks[forthState.forthCurrentTask].dataStackIndex = forthTasks[forthState.forthCurrentTask].dataStackIndex - forthTasks[forthState.forthCurrentTask].floatFloatIntRatio;
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_EMPTY;
	};
	MESSSAGE_DEBUG("fpointFDot")
}


#endif
#if (FLOATSTD == FLOAT_NELSON)
void fpointFDotS(void) {
	int ii = 0;
	int floatStackIndex = forthTasks[forthState.forthCurrentTask].floatStackIndex;
	int nn; /* < 32 */
	if (floatStackIndex) {
		nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, "[%d] ", floatStackIndex);
		FPUTS_OUT(forthTasks[forthState.forthCurrentTask].printBuffer);
		for (ii = 0; ii < floatStackIndex; ii++) {
			nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, "%f",
				forthTasks[forthState.forthCurrentTask].floatStackSpace[ii]);
			FPUTS_OUT(forthTasks[forthState.forthCurrentTask].printBuffer);
		};
		PUTCHAR(CHAR_CR);
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_EMPTY;
	};
	MESSSAGE_DEBUG("fpointDotF")
}

void fpointFDot(void) {
	MESSSAGE_DEBUG("fpoinFtDot")
}

void fpointNumFS(void) {
	MESSSAGE_DEBUG("fpointNumFS")
}

void fpointSetPrecision(void) {
	MESSSAGE_DEBUG("fpointSetPrecision")
}

void fpointPrecision(void) {
	MESSSAGE_DEBUG("fpointPrecision")
}

void fpointFSqrt(void) {
	MESSSAGE_DEBUG("fpointFSqrt")
}

void fpointPi(void) {
	MESSSAGE_DEBUG("fpointPi")
}

void fpointFVariable(void) {
	MESSSAGE_DEBUG("fpointFVariable")
}

void fpointFConstant(void) {
	MESSSAGE_DEBUG("fpointFConstant")
}

void fpointFLiteral(void) {
	MESSSAGE_DEBUG("fpointFLiteral")
}

void fpointAFLiteral(void) {
	MESSSAGE_DEBUG("fpointAFLiteral")
}

void fpointSFComma(void) {
	MESSSAGE_DEBUG("fpointSFComma")
}

void fpointSFloatPlus(void) {
	MESSSAGE_DEBUG("fpointSFloatPlus")
}

void fpointSFloats(void) {
	MESSSAGE_DEBUG("fpointSFloats")
}

void fpointSFloat(void) {
	MESSSAGE_DEBUG("fpointSFloat")
}

void fpointSFGreaterEqual(void) {
	MESSSAGE_DEBUG("fpointSFGreaterEqual")
}

void fpointSFLessEqual(void) {
	MESSSAGE_DEBUG("fpointSFLessEqual")
}

void fpointSFUnequal(void) {
	MESSSAGE_DEBUG("fpointSFUnequal")
}

void fpointSFGreater(void) {
	MESSSAGE_DEBUG("fpointSFGreater")
}

void fpointSFLess(void) {
	MESSSAGE_DEBUG("fpointSFLess")
}

void fpointSFEqual(void) {
	MESSSAGE_DEBUG("fpointSFEqual")
}

void fpointFg(void) {
	MESSSAGE_DEBUG("fpointFg")
}

void fpointFDepth(void) {
	MESSSAGE_DEBUG("fpointFDepth")
}

void fpointFP0(void) {
	MESSSAGE_DEBUG("fpointFP0")
}

void fpointFGreaterNumberQ(void) {
	MESSSAGE_DEBUG("fpointFGreaterNumberQ")
}

void fpointFToS(void) {
	MESSSAGE_DEBUG("fpointFToS")
}

void fpointSToF(void) {
	MESSSAGE_DEBUG("fpointSToF")
}

void fpointOneSlashF(void) {
	MESSSAGE_DEBUG("fpointOneSlashF")
}

void fpointFSlash(void) {
	MESSSAGE_DEBUG("fpointFSlash")
}

void fpointFStar(void) {
	MESSSAGE_DEBUG("fpointFStar")
}

void fpointFMinus(void) {
	MESSSAGE_DEBUG("fpointFMinus")
}

void fpointFPlus(void) {
	MESSSAGE_DEBUG("fpointFPlus")
}

void fpointF0Equal(void) {
	MESSSAGE_DEBUG("fpointF0Equal")
}

void fpointF0Less(void) {
	MESSSAGE_DEBUG("fpointF0Less")
}

void fpointFNegate(void) {
	MESSSAGE_DEBUG("fpointFNegate")
}

void fpointFswa(void) {
	MESSSAGE_DEBUG("fpointFswa")
}

void fpointFOver(void) {
	MESSSAGE_DEBUG("fpointFOver")
}

void fpointFDrop(void) {
	MESSSAGE_DEBUG("fpointFDrop")
}

void fpointFNip(void) {
	MESSSAGE_DEBUG("fpointFNip")
}

void fpointFDup(void) {
	MESSSAGE_DEBUG("fpointFDup")
}

void fpointSFStore(void) {
	MESSSAGE_DEBUG("fpointSFStore")
}

void fpointSFFetch(void) {
	MESSSAGE_DEBUG("fpointSFFetch")
}

void fpointSF(void) {
	MESSSAGE_DEBUG("fpointSF")
}

void fpointFPStore(void) {
	MESSSAGE_DEBUG("fpointFPStore")
}

void fpointFPFetch(void) {
	MESSSAGE_DEBUG("fpointFPFetch")
}

#endif
#if (FLOATSTD == FLOAT_TURBO)
/* 10 Floating-Point Stack Manipulation Words */
void fpointFDup(void) {
	MESSSAGE_DEBUG("fpointFDup")
}

void fpointFDrop(void) {
	MESSSAGE_DEBUG("fpointFDrop")
}

void fpointFSwap(void) {
	MESSSAGE_DEBUG("fpointFSwap")
}

void fpointFOver(void) {
	MESSSAGE_DEBUG("fpointFOver")
}

void fpointFPClear(void) {
	MESSSAGE_DEBUG("fpointFPClear")
}

/* 11 Math Words */
void fpointFPlus(void) {
	MESSSAGE_DEBUG("fpointFPlus")
}

void fpointFMinus(void) {
	MESSSAGE_DEBUG("fpointFMinus")
}

void fpointFStar(void) {
	MESSSAGE_DEBUG("fpointFStar")
}

void fpointFSlash(void) {
	MESSSAGE_DEBUG("fpointFSlash")
}

void fpointFNegate(void) {
	MESSSAGE_DEBUG("fpointFNegate")
}

void fpointFAbs(void) {
	MESSSAGE_DEBUG("fpointFAbs")
}

void fpointFloor(void) {
	MESSSAGE_DEBUG("fpointFloor")
}

void fpointCeil(void) {
	MESSSAGE_DEBUG("fpointCeil")
}

void fpointTrunc(void) {
	MESSSAGE_DEBUG("fpointTrunc")
}

void fpointFrac(void) {
	MESSSAGE_DEBUG("fpointFrac")
}

/* 12 Comparison Words */
void fpointFEqual(void) {
	MESSSAGE_DEBUG("fpointFEqual")
}

void fpointF0Equal(void) {
	MESSSAGE_DEBUG("fpointF0Equal")
}

void fpointFLess(void) {
	MESSSAGE_DEBUG("fpointFLess")
}

void fpointFGreater(void) {
	MESSSAGE_DEBUG("fpointFGreater")
}

void fpointF0Less(void) {
	MESSSAGE_DEBUG("fpointF0Less")
}

/* 13 Floating-Point Literal Handling */
void fpointToF(void) {
	MESSSAGE_DEBUG("fpointToF")
}

void fpointFLiteral(void) {
	MESSSAGE_DEBUG("fpointFLiteral")
}

void fpointFLit(void) {
	MESSSAGE_DEBUG("fpointFLit")
}

/* 14 Floating-Point Variables */
void fpointFVariable(void) {
	MESSSAGE_DEBUG("fpointFVariable")
}

void fpointFStore(void) {
	MESSSAGE_DEBUG("fpointFStore")
}

void fpointFFetch(void) {
	MESSSAGE_DEBUG("fpointFFetch")
}

/* 15 Floating-Point Constants */
void fpointFConstant(void) {
	MESSSAGE_DEBUG("fpointFConstant")
}

/* 16 Floating-Point Values */
void fpointFValue(void) {
	MESSSAGE_DEBUG("fpointFValue")
}

void fpointFTo(void) {
	MESSSAGE_DEBUG("fpointFTo")
}

void fpointPlusFTo(void) {
	MESSSAGE_DEBUG("fpointPlusFTo")
}

/* 17 Displaying Floating-Point Numbers */
void fpointFDot(void) {
	MESSSAGE_DEBUG("fpointFDot")
}

void fpointFFDpt(void) {
	MESSSAGE_DEBUG("fpointFFDpt")
}

void fpointFFPlusDot(void) {
	MESSSAGE_DEBUG("fpointFFPlusDot")
}

void fpointFFEDot(void) {
	MESSSAGE_DEBUG("fpointFFEDot")
}

void fpointFFEPlusDot(void) {
	MESSSAGE_DEBUG("fpointFFEPlusDot")
}

void fpointFFXDot(void) {
	MESSSAGE_DEBUG("fpointFFXDot")
}

void fpointFFXPlusDot(void) {
	MESSSAGE_DEBUG("fpointFFXPlusDot")
}

void fpointFDollarDot(void) {
	MESSSAGE_DEBUG("fpointFDollarDot")
}

void fpointDotFS(void) {
	MESSSAGE_DEBUG("fpointDotFS")
}

void fpointDotFDollar(void) {
	MESSSAGE_DEBUG("fpointDotFDollar")
}

/* 18 Floating-Point Number Conversion */
void fpointSToFP(void) {
	MESSSAGE_DEBUG("fpointSToFP")
}

void fpointFPToS(void) {
	MESSSAGE_DEBUG("fpointFPToS")
}

/* 19 Transcendental Constants and Conversion Functions */
void fpointPi(void) {
	MESSSAGE_DEBUG("fpointPi")
}

void fpointEulerE(void) {
	MESSSAGE_DEBUG("fpointEulerE")
}

void fpointRadDeg(void) {
	MESSSAGE_DEBUG("fpointRadDeg")
}

void fpointDegRad(void) {
	MESSSAGE_DEBUG("fpointDegRad")
}

void fpointToRad(void) {
	MESSSAGE_DEBUG("fpointToRad")
}

void fpointToDeg(void) {
	MESSSAGE_DEBUG("fpointToDeg")
}

/* 20 Transcendental Functions */
void fpointExp(void) {
	MESSSAGE_DEBUG("fpointExp")
}

void fpointLog(void) {
	MESSSAGE_DEBUG("fpointLog")
}

void fpointSqrt(void) {
	MESSSAGE_DEBUG("fpointSqrt")
}

void fpointCos(void) {
	MESSSAGE_DEBUG("fpointCos")
}

void fpointSin(void) {
	MESSSAGE_DEBUG("fpointSin")
}

void fpointTan(void) {
	MESSSAGE_DEBUG("fpointTan")
}

void fpointAtn(void) {
	MESSSAGE_DEBUG("fpointAtn")
}

void fpointPow(void) {
	MESSSAGE_DEBUG("fpointPow")
}

void fpointLog10(void) {
	MESSSAGE_DEBUG("fpointLog10")
}

void fpointExp10(void) {
	MESSSAGE_DEBUG("fpointExp10")
}

/* 21.3 Floating Point Error Handling */
void fpointQFPErr(void) {
	MESSSAGE_DEBUG("fpointQFPErr")
}

#endif
#endif

#if TASKINGSTANDARD == TASKINGSTD_FORTH83
void taskingF83Allot(void) {
	MESSSAGE_DEBUG("taskingF83Allot")
}

void taskingF83Create(void) {
	MESSSAGE_DEBUG("taskingF83Create")
}

void taskingF83Variable(void) {
	MESSSAGE_DEBUG("taskingF83Variable")
}

void taskingF83Defer(void) {
	MESSSAGE_DEBUG("taskingF83Defer")
}

void taskingF83Pause(void) {
	MESSSAGE_DEBUG("taskingF83Pause")
}

void taskingF83Restart(void) {
	MESSSAGE_DEBUG("taskingF83Restart")
}

void taskingF83Local(void) {
	MESSSAGE_DEBUG("taskingF83Local")
}

void taskingF83FetchLink(void) {
	MESSSAGE_DEBUG("taskingF83FetchLink")
}

void taskingF83StoreLink(void) {
	MESSSAGE_DEBUG("taskingF83StoreLink")
}

void taskingF83Sleep(void) {
	MESSSAGE_DEBUG("taskingF83Sleep")
}

void taskingF83Wake(void) {
	MESSSAGE_DEBUG("taskingF83Wake")
}

void taskingF83Stop(void) {
	MESSSAGE_DEBUG("taskingF83Stop")
}

void taskingF83Multi(void) {
	MESSSAGE_DEBUG("taskingF83Multi")
}

void taskingF83Single(void) {
	MESSSAGE_DEBUG("taskingF83Single")
}

void taskingF83Task(void) {
	MESSSAGE_DEBUG("taskingF83Task")
}

void taskingF83SetTask(void) {
	MESSSAGE_DEBUG("taskingF83SetTask")
}

void taskingF83Activate(void) {
	MESSSAGE_DEBUG("taskingF83Activate")
}

void taskingF83Background(void) {
	MESSSAGE_DEBUG("taskingF83Background")
}

#endif

#if TASKINGSTANDARD == TASKINGSTD_FPC
void taskingFPCPause(void) {
	MESSSAGE_DEBUG("taskingFPCPause")
}

void taskingFPCRestart(void) {
	MESSSAGE_DEBUG("taskingFPCRestart")
}

void taskingFPCLocal(void) {
	MESSSAGE_DEBUG("taskingFPCLocal")
}

void taskingFPCFetchLink(void) {
	MESSSAGE_DEBUG("taskingFPCFetchLink")
}

void taskingFPCStoreLink(void) {
	MESSSAGE_DEBUG("taskingFPCStoreLink")
}

void taskingFPCSleep(void) {
	MESSSAGE_DEBUG("taskingFPCSleep")
}

void taskingFPCWake(void) {
	MESSSAGE_DEBUG("taskingFPCWake")
}

void taskingFPCStop(void) {
	MESSSAGE_DEBUG("taskingFPCStop")
}

void taskingFPCSingle(void) {
	MESSSAGE_DEBUG("taskingFPCSingle")
}

void taskingFPCMulti(void) {
	MESSSAGE_DEBUG("taskingFPCMulti")
}

void taskingFPCTask(void) {
	MESSSAGE_DEBUG("taskingFPCTask")
}

void taskingFPCSetTask(void) {
	MESSSAGE_DEBUG("taskingFPCSetTask")
}

void taskingFPCActivate(void) {
	MESSSAGE_DEBUG("taskingFPCActivate")
}

void taskingFPCBackground(void) {
	MESSSAGE_DEBUG("taskingFPCBackground")
}

#endif

#if TASKINGSTANDARD == TASKINGSTD_VOLK
void taskingVolkActivate(void) {
	MESSSAGE_DEBUG("taskingVolkActivate")
}

void taskingVolkLock(void) {
	MESSSAGE_DEBUG("taskingVolkLock")
}

void taskingVolkMultiTask(void) {
	MESSSAGE_DEBUG("taskingVolkMultiTask")
}

void taskingVolkPass(void) {
	MESSSAGE_DEBUG("taskingVolkPass")
}

void taskingVolkPause(void) {
	MESSSAGE_DEBUG("taskingVolkPause")
}

void taskingVolkRendezvous(void) {
	MESSSAGE_DEBUG("taskingVolkRendezvous")
}

void taskingVolkSingleTask(void) {
	MESSSAGE_DEBUG("taskingVolkSingleTask")
}

void taskingVolkSleep(void) {
	MESSSAGE_DEBUG("taskingVolkSleep")
}

void taskingVolkStop(void) {
	MESSSAGE_DEBUG("taskingVolkStop")
}

void taskingVolkTask(void) {
	MESSSAGE_DEBUG("taskingVolkTask")
}

void taskingVolkTasks(void) {
	MESSSAGE_DEBUG("taskingVolkTasks")
}

void taskingVolkUnlock(void) {
	MESSSAGE_DEBUG("taskingVolkUnlock")
}

void taskingVolkWake(void) {
	MESSSAGE_DEBUG("taskingVolkWake")
}

void taskingVolkUPFetch(void) {
	MESSSAGE_DEBUG("taskingVolkUPFetch")
}

void taskingVolkUPStore(void) {
	MESSSAGE_DEBUG("taskingVolkUPStore")
}

#endif

#if TASKINGSTANDARD == TASKINGSTD_BIGFORTH
void taskingBigTaskerDotScr(void) {
	MESSSAGE_DEBUG("taskingBigTaskerDotScr")
}

void taskingBigStop(void) {
	MESSSAGE_DEBUG("taskingBigStop")
}

void taskingBigSingleTask(void) {
	MESSSAGE_DEBUG("taskingBigSingleTask")
}

void taskingBigMultiTask(void) {
	MESSSAGE_DEBUG("taskingBigMultiTask")
}

void taskingBigActivate(void) {
	MESSSAGE_DEBUG("taskingBigActivate")
}

void taskingBigPass(void) {
	MESSSAGE_DEBUG("taskingBigPass")
}

void taskingBigAutostart(void) {
	MESSSAGE_DEBUG("taskingBigAutostart")
}

void taskingBigSleep(void) {
	MESSSAGE_DEBUG("taskingBigSleep")
}

void taskingBigWake(void) {
	MESSSAGE_DEBUG("taskingBigWake")
}

void taskingBigTimerFetch(void) {
	MESSSAGE_DEBUG("taskingBigTimerFetch")
}

void taskingBigSyncTime(void) {
	MESSSAGE_DEBUG("taskingBigSyncTime")
}

void taskingBigSyncStore(void) {
	MESSSAGE_DEBUG("taskingBigSyncStore")
}

void taskingBigSync(void) {
	MESSSAGE_DEBUG("taskingBigSync")
}

void taskingBigTask(void) {
	MESSSAGE_DEBUG("taskingBigTask")
}

void taskingBigRendezvous(void) {
	MESSSAGE_DEBUG("taskingBigRendezvous")
}

void taskingBigSTick(void) {
	MESSSAGE_DEBUG("taskingBigSTick")
}

void taskingBigTasks(void) {
	MESSSAGE_DEBUG("taskingBigTasks")
}

void taskingBigClockTask(void) {
	MESSSAGE_DEBUG("taskingBigClockTask")
}

void taskingBigClock(void) {
	MESSSAGE_DEBUG("taskingBigClock")
}

void taskingBigWaitC(void) {
	MESSSAGE_DEBUG("taskingBigWaitC")
}

void taskingBigStartC(void) {
	MESSSAGE_DEBUG("taskingBigStartC")
}

void taskingBigNoClock(void) {
	MESSSAGE_DEBUG("taskingBigNoClock")
}

void taskingBigSetClock(void) {
	MESSSAGE_DEBUG("taskingBigSetClock")
}

void taskingBigPause(void) {
	MESSSAGE_DEBUG("taskingBigPause")
}

void taskingBigLock(void) {
	MESSSAGE_DEBUG("taskingBigLock")
}

void taskingBigUnlock(void) {
	MESSSAGE_DEBUG("taskingBigUnlock")
}

#endif

#if TASKINGSTANDARD == TASKINGSTD_RTF
void taskingRtfSingle(void) {
	MESSSAGE_DEBUG("taskingRtfSingle")
}

void taskingRtfMulti(void) {
	MESSSAGE_DEBUG("taskingRtfMulti")
}

void taskingRtfBackground(void) {
	MESSSAGE_DEBUG("taskingRtfBackground")
}

void taskingRtfWake(void) {
	MESSSAGE_DEBUG("taskingRtfWake")
}

void taskingRtfSleep(void) {
	MESSSAGE_DEBUG("taskingRtfSleep")
}

void taskingRtfStop(void) {
	MESSSAGE_DEBUG("taskingRtfStop")
}

void taskingRtfPause(void) {
	MESSSAGE_DEBUG("taskingRtfPause")
}

void taskingRtfActivate(void) {
	MESSSAGE_DEBUG("taskingRtfActivate")
}

#endif

#if TASKINGSTANDARD == TASKINGSTD_CAMEL
void taskingCamelSwitch(void) {
	MESSSAGE_DEBUG("taskingCamelSwitch")
}

void taskingCamelInitTask(void) {
	MESSSAGE_DEBUG("taskingCamelInitTask")
}

void taskingCamelDetach(void) {
	MESSSAGE_DEBUG("taskingCamelDetach")
}

void taskingCamelAttach(void) {
	MESSSAGE_DEBUG("taskingCamelAttach")
}

void taskingCamelPreempt(void) {
	MESSSAGE_DEBUG("taskingCamelPreempt")
}

#endif

#ifdef TESTING_SUPPORT
void testingTCurlyBracket(void) {
	MESSSAGE_DEBUG("testingTCurlyBracket")
}

void testingCurlyBracketT(void) {
	MESSSAGE_DEBUG("testingCurlyBracketT")
}
#endif

#endif
