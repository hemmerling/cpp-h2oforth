#ifndef H2OCOMM2
#define H2OCOMM2

/* Declarations of FORTH words common to one or more FORTH standards & FORTH implementations */

/* Internal functions */
void privateCMessage(char message, int stream) {
	switch (stream)
	{
    	case STREAM_SUCCESS:
			FPUTC_OUT(message);
      		break;
    	case STREAM_ERROR:
    	case STREAM_WARNING:
    	case STREAM_VERBOSE:
    	case STREAM_DEBUG:
    	case STREAM_INFORMATION:
			FPUTC_ERR(message);
      		break;
    	default:
      		return;
	};
}

void privateSMessage(char* message, int stream, int cr1, int cr2) {
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
	SMSG_DEBUG("commonOctal")
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
	SMSG_DEBUG("commonHexDot")
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
	SMSG_DEBUG("commonOctDot")
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
	SMSG_DEBUG("commonRDot")
}


#ifdef EXCEPTION_SUPPORT
void exceptionAbort(void) {
	SMSG_DEBUG("exceptionAbort")
}

void exceptionAbortQ(void) {
	SMSG_DEBUG("exceptionAbortQ")
}

void exceptionCatch(void) {
	SMSG_DEBUG("exceptionCatch")
}

void exceptionThrow(void) {
	SMSG_DEBUG("exceptionThrow")
}

/* Quit with exception handling. Overrides standard implementation in forthWords */
void exceptionQuit(void) {
	SMSG_DEBUG("exceptionQuit")
}
#endif


#ifdef FLOAT_SUPPORT
#if (FLOATSTD == FLOAT_ANS94) || (FLOATSTD == FLOAT_FORTH2012)
/* Floating-Point extension words */
void fpointDFStore(void) {
	SMSG_DEBUG("fpointDFStore")
}

void fpointDFFetch(void) {
	SMSG_DEBUG("fpointDFFetch")
}

void fpointDFAlign(void) {
	SMSG_DEBUG("fpointDFAlign")
}

void fpointDFFieldColon(void) {
	SMSG_DEBUG("fpointDFFieldColon")
}

void fpointDFloatPlus(void) {
	SMSG_DEBUG("fpointDFloatPlus")
}

void fpointDFloatS(void) {
	SMSG_DEBUG("fpointDFloatS")
}

void fpointFStarStar(void) {
	SMSG_DEBUG("fpointFStarStar")
}

void fpointFDot(void) {
	SMSG_DEBUG("fpointFDot")
}

void fpointFToS(void) {
	SMSG_DEBUG("fpointFToS")
}

void fpointFAbs(void) {
	SMSG_DEBUG("fpointFAbs")
}

void fpointFAcos(void) {
	SMSG_DEBUG("fpointFAcos")
}

void fpointFAcosh(void) {
	SMSG_DEBUG("fpointFAcosh")
}

void fpointFAlog(void) {
	SMSG_DEBUG("fpointFAlog")
}

void fpointFAsin(void) {
	SMSG_DEBUG("fpointFAsin")
}

void fpointAsinh(void) {
	SMSG_DEBUG("fpointAsinh")
}

void fpointAtan(void) {
	SMSG_DEBUG("fpointAtan")
}

void fpointAtan2(void) {
	SMSG_DEBUG("fpointAtan2")
}

void fpointFAtanh(void) {
	SMSG_DEBUG("fpointFAtanh")
}

void fpointFCos(void) {
	SMSG_DEBUG("fpointFCos")
}

void fpointFCosh(void) {
	SMSG_DEBUG("fpointFCosh")
}

void fpointFEDot(void) {
	SMSG_DEBUG("fpointFEDot")
}

void fpointFExp(void) {
	SMSG_DEBUG("fpointFExp")
}

void fpointFExpm1(void) {
	SMSG_DEBUG("fpointFExpm1")
}

void fpointFFieldColon(void) {
	SMSG_DEBUG("fpointFFieldColon")
}

void fpointFLn(void) {
	SMSG_DEBUG("fpointFLn")
}

void fpointFLnp1(void) {
	SMSG_DEBUG("fpointFLnp1")
}

void fpointFLog(void) {
	SMSG_DEBUG("fpointFLog")
}

void fpointFSDot(void) {
	SMSG_DEBUG("fpointFSDot")
}

void fpointFSin(void) {
	SMSG_DEBUG("fpointFSin")
}

void fpointFSincos(void) {
	SMSG_DEBUG("fpointFSincos")
}

void fpointFSinH(void) {
	SMSG_DEBUG("fpointFSinH")
}

void fpointFSqrt(void) {
	SMSG_DEBUG("fpointFSqrt")
}

void fpointFTan(void) {
	SMSG_DEBUG("fpointFTan")
}

void fpointFTanh(void) {
	SMSG_DEBUG("fpointFTanh")
}

void fpointFTrunc(void) {
	SMSG_DEBUG("fpointFTrunc")
}

void fpointFValue(void) {
	SMSG_DEBUG("fpointFValue")
}

void fpointFTilde(void) {
	SMSG_DEBUG("fpointFTilde")
}

void fpointPrecision(void) {
	SMSG_DEBUG("fpointPrecision")
}

void fpointSToF(void) {
	SMSG_DEBUG("fpointSToF")
}

void fpointSetPrecision(void) {
	SMSG_DEBUG("fpointSetPrecision")
}

void fpointSFStore(void) {
	SMSG_DEBUG("fpointSFStore")
}

void fpointSFFetch(void) {
	SMSG_DEBUG("fpointSFFetch")
}

void fpointSFAlign(void) {
	SMSG_DEBUG("fpointSFAlign")
}

void fpointSFAligned(void) {
	SMSG_DEBUG("fpointSFAligned")
}

void fpointSFFieldColon(void) {
	SMSG_DEBUG("fpointSFFieldColon")
}

void fpointSFloatPlus(void) {
	SMSG_DEBUG("fpointSFloatPlus")
}

void fpointSFloatS(void) {
	SMSG_DEBUG("fpointSFloatS")
}

/* Floating-Point words */
void fpointToFloat(void) {
	SMSG_DEBUG("fpointToFloat")
}

void fpointDToF(void) {
	SMSG_DEBUG("fpointDToF")
}

void fpointFStore(void) {
	SMSG_DEBUG("fpointFStore")
}

void fpointFMultiply(void) {
	SMSG_DEBUG("fpointFMultiply")
}

void fpointFPlus(void) {
	SMSG_DEBUG("fpointFPlus")
}

void fpointFMinus(void) {
	SMSG_DEBUG("fpointFMinus")
}

void fpointFfpointFSlash(void) {
	SMSG_DEBUG("fpointFfpointFSlash")
}

void fpointF0Less(void) {
	SMSG_DEBUG("fpointF0Less")
}

void fpointF0Equal(void) {
	SMSG_DEBUG("fpointF0Equal")
}

void fpointFLess(void) {
	SMSG_DEBUG("fpointFLess")
}

void fpointFToD(void) {
	SMSG_DEBUG("fpointFToD")
}

void fpointFFetch(void) {
	SMSG_DEBUG("fpointFFetch")
}

void fpointtFAlign(void) {
	SMSG_DEBUG("fpointtFAlign")
}

void fpointFAligned(void) {
	SMSG_DEBUG("fpointFAligned")
}

void fpointFConstant(void) {
	SMSG_DEBUG("fpointFConstant")
}

void fpointFDepth(void) {
	SMSG_DEBUG("fpointFDepth")
}

void fpointFDrop(void) {
	SMSG_DEBUG("fpointFDrop")
}

void fpointFDup(void) {
	SMSG_DEBUG("fpointFDup")
}

void fpointFLiteral(void) {
	SMSG_DEBUG("fpointFLiteral")
}

void fpointFloatPlus(void) {
	SMSG_DEBUG("fpointFloatPlus")
}

void fpointFloatS(void) {
	SMSG_DEBUG("fpointFloatS")
}

void fpointFloor(void) {
	SMSG_DEBUG("fpointFloor")
}

void fpointFMax(void) {
	SMSG_DEBUG("fpointFMax")
}

void fpointFMin(void) {
	SMSG_DEBUG("fpointFMin")
}

void fpointFNegate(void) {
	SMSG_DEBUG("fpointFNegate")
}

void fpointFOver(void) {
	SMSG_DEBUG("fpointFOver")
}

void fpointFRot(void) {
	SMSG_DEBUG("fpointFRot")
}

void fpointFRound(void) {
	SMSG_DEBUG("fpointFRound")
}

void fpointFSwap(void) {
	SMSG_DEBUG("fpointFSwap")
}

void fpointFVariable(void) {
	SMSG_DEBUG("fpointFVariable")
}

void fpointRepresent(void) {
	SMSG_DEBUG("fpointRepresent")
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
	SMSG_DEBUG("fpointUFLoat")
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
	SMSG_DEBUG("fpointInt")
}

void fpointFNegate(void) {
	SMSG_DEBUG("fpointFNegate")
}

void fpointFSlash(void) {
	SMSG_DEBUG("fpointFSlash")
}

void fpointFStar(void) {
	SMSG_DEBUG("fpointFStar")
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
	SMSG_DEBUG("fpointFPlus")
}

void fpointFMinus(void) {
	SMSG_DEBUG("fpointFMinus")
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
	SMSG_DEBUG("fpointFDot")
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
	SMSG_DEBUG("fpointDotF")
}

void fpointFDot(void) {
	SMSG_DEBUG("fpoinFtDot")
}

void fpointNumFS(void) {
	SMSG_DEBUG("fpointNumFS")
}

void fpointSetPrecision(void) {
	SMSG_DEBUG("fpointSetPrecision")
}

void fpointPrecision(void) {
	SMSG_DEBUG("fpointPrecision")
}

void fpointFSqrt(void) {
	SMSG_DEBUG("fpointFSqrt")
}

void fpointPi(void) {
	SMSG_DEBUG("fpointPi")
}

void fpointFVariable(void) {
	SMSG_DEBUG("fpointFVariable")
}

void fpointFConstant(void) {
	SMSG_DEBUG("fpointFConstant")
}

void fpointFLiteral(void) {
	SMSG_DEBUG("fpointFLiteral")
}

void fpointAFLiteral(void) {
	SMSG_DEBUG("fpointAFLiteral")
}

void fpointSFComma(void) {
	SMSG_DEBUG("fpointSFComma")
}

void fpointSFloatPlus(void) {
	SMSG_DEBUG("fpointSFloatPlus")
}

void fpointSFloats(void) {
	SMSG_DEBUG("fpointSFloats")
}

void fpointSFloat(void) {
	SMSG_DEBUG("fpointSFloat")
}

void fpointSFGreaterEqual(void) {
	SMSG_DEBUG("fpointSFGreaterEqual")
}

void fpointSFLessEqual(void) {
	SMSG_DEBUG("fpointSFLessEqual")
}

void fpointSFUnequal(void) {
	SMSG_DEBUG("fpointSFUnequal")
}

void fpointSFGreater(void) {
	SMSG_DEBUG("fpointSFGreater")
}

void fpointSFLess(void) {
	SMSG_DEBUG("fpointSFLess")
}

void fpointSFEqual(void) {
	SMSG_DEBUG("fpointSFEqual")
}

void fpointFg(void) {
	SMSG_DEBUG("fpointFg")
}

void fpointFDepth(void) {
	SMSG_DEBUG("fpointFDepth")
}

void fpointFP0(void) {
	SMSG_DEBUG("fpointFP0")
}

void fpointFGreaterNumberQ(void) {
	SMSG_DEBUG("fpointFGreaterNumberQ")
}

void fpointFToS(void) {
	SMSG_DEBUG("fpointFToS")
}

void fpointSToF(void) {
	SMSG_DEBUG("fpointSToF")
}

void fpointOneSlashF(void) {
	SMSG_DEBUG("fpointOneSlashF")
}

void fpointFSlash(void) {
	SMSG_DEBUG("fpointFSlash")
}

void fpointFStar(void) {
	SMSG_DEBUG("fpointFStar")
}

void fpointFMinus(void) {
	SMSG_DEBUG("fpointFMinus")
}

void fpointFPlus(void) {
	SMSG_DEBUG("fpointFPlus")
}

void fpointF0Equal(void) {
	SMSG_DEBUG("fpointF0Equal")
}

void fpointF0Less(void) {
	SMSG_DEBUG("fpointF0Less")
}

void fpointFNegate(void) {
	SMSG_DEBUG("fpointFNegate")
}

void fpointFswa(void) {
	SMSG_DEBUG("fpointFswa")
}

void fpointFOver(void) {
	SMSG_DEBUG("fpointFOver")
}

void fpointFDrop(void) {
	SMSG_DEBUG("fpointFDrop")
}

void fpointFNip(void) {
	SMSG_DEBUG("fpointFNip")
}

void fpointFDup(void) {
	SMSG_DEBUG("fpointFDup")
}

void fpointSFStore(void) {
	SMSG_DEBUG("fpointSFStore")
}

void fpointSFFetch(void) {
	SMSG_DEBUG("fpointSFFetch")
}

void fpointSF(void) {
	SMSG_DEBUG("fpointSF")
}

void fpointFPStore(void) {
	SMSG_DEBUG("fpointFPStore")
}

void fpointFPFetch(void) {
	SMSG_DEBUG("fpointFPFetch")
}

#endif
#if (FLOATSTD == FLOAT_TURBO)
/* 10 Floating-Point Stack Manipulation Words */
void fpointFDup(void) {
	SMSG_DEBUG("fpointFDup")
}

void fpointFDrop(void) {
	SMSG_DEBUG("fpointFDrop")
}

void fpointFSwap(void) {
	SMSG_DEBUG("fpointFSwap")
}

void fpointFOver(void) {
	SMSG_DEBUG("fpointFOver")
}

void fpointFPClear(void) {
	SMSG_DEBUG("fpointFPClear")
}

/* 11 Math Words */
void fpointFPlus(void) {
	SMSG_DEBUG("fpointFPlus")
}

void fpointFMinus(void) {
	SMSG_DEBUG("fpointFMinus")
}

void fpointFStar(void) {
	SMSG_DEBUG("fpointFStar")
}

void fpointFSlash(void) {
	SMSG_DEBUG("fpointFSlash")
}

void fpointFNegate(void) {
	SMSG_DEBUG("fpointFNegate")
}

void fpointFAbs(void) {
	SMSG_DEBUG("fpointFAbs")
}

void fpointFloor(void) {
	SMSG_DEBUG("fpointFloor")
}

void fpointCeil(void) {
	SMSG_DEBUG("fpointCeil")
}

void fpointTrunc(void) {
	SMSG_DEBUG("fpointTrunc")
}

void fpointFrac(void) {
	SMSG_DEBUG("fpointFrac")
}

/* 12 Comparison Words */
void fpointFEqual(void) {
	SMSG_DEBUG("fpointFEqual")
}

void fpointF0Equal(void) {
	SMSG_DEBUG("fpointF0Equal")
}

void fpointFLess(void) {
	SMSG_DEBUG("fpointFLess")
}

void fpointFGreater(void) {
	SMSG_DEBUG("fpointFGreater")
}

void fpointF0Less(void) {
	SMSG_DEBUG("fpointF0Less")
}

/* 13 Floating-Point Literal Handling */
void fpointToF(void) {
	SMSG_DEBUG("fpointToF")
}

void fpointFLiteral(void) {
	SMSG_DEBUG("fpointFLiteral")
}

void fpointFLit(void) {
	SMSG_DEBUG("fpointFLit")
}

/* 14 Floating-Point Variables */
void fpointFVariable(void) {
	SMSG_DEBUG("fpointFVariable")
}

void fpointFStore(void) {
	SMSG_DEBUG("fpointFStore")
}

void fpointFFetch(void) {
	SMSG_DEBUG("fpointFFetch")
}

/* 15 Floating-Point Constants */
void fpointFConstant(void) {
	SMSG_DEBUG("fpointFConstant")
}

/* 16 Floating-Point Values */
void fpointFValue(void) {
	SMSG_DEBUG("fpointFValue")
}

void fpointFTo(void) {
	SMSG_DEBUG("fpointFTo")
}

void fpointPlusFTo(void) {
	SMSG_DEBUG("fpointPlusFTo")
}

/* 17 Displaying Floating-Point Numbers */
void fpointFDot(void) {
	SMSG_DEBUG("fpointFDot")
}

void fpointFFDpt(void) {
	SMSG_DEBUG("fpointFFDpt")
}

void fpointFFPlusDot(void) {
	SMSG_DEBUG("fpointFFPlusDot")
}

void fpointFFEDot(void) {
	SMSG_DEBUG("fpointFFEDot")
}

void fpointFFEPlusDot(void) {
	SMSG_DEBUG("fpointFFEPlusDot")
}

void fpointFFXDot(void) {
	SMSG_DEBUG("fpointFFXDot")
}

void fpointFFXPlusDot(void) {
	SMSG_DEBUG("fpointFFXPlusDot")
}

void fpointFDollarDot(void) {
	SMSG_DEBUG("fpointFDollarDot")
}

void fpointDotFS(void) {
	SMSG_DEBUG("fpointDotFS")
}

void fpointDotFDollar(void) {
	SMSG_DEBUG("fpointDotFDollar")
}

/* 18 Floating-Point Number Conversion */
void fpointSToFP(void) {
	SMSG_DEBUG("fpointSToFP")
}

void fpointFPToS(void) {
	SMSG_DEBUG("fpointFPToS")
}

/* 19 Transcendental Constants and Conversion Functions */
void fpointPi(void) {
	SMSG_DEBUG("fpointPi")
}

void fpointEulerE(void) {
	SMSG_DEBUG("fpointEulerE")
}

void fpointRadDeg(void) {
	SMSG_DEBUG("fpointRadDeg")
}

void fpointDegRad(void) {
	SMSG_DEBUG("fpointDegRad")
}

void fpointToRad(void) {
	SMSG_DEBUG("fpointToRad")
}

void fpointToDeg(void) {
	SMSG_DEBUG("fpointToDeg")
}

/* 20 Transcendental Functions */
void fpointExp(void) {
	SMSG_DEBUG("fpointExp")
}

void fpointLog(void) {
	SMSG_DEBUG("fpointLog")
}

void fpointSqrt(void) {
	SMSG_DEBUG("fpointSqrt")
}

void fpointCos(void) {
	SMSG_DEBUG("fpointCos")
}

void fpointSin(void) {
	SMSG_DEBUG("fpointSin")
}

void fpointTan(void) {
	SMSG_DEBUG("fpointTan")
}

void fpointAtn(void) {
	SMSG_DEBUG("fpointAtn")
}

void fpointPow(void) {
	SMSG_DEBUG("fpointPow")
}

void fpointLog10(void) {
	SMSG_DEBUG("fpointLog10")
}

void fpointExp10(void) {
	SMSG_DEBUG("fpointExp10")
}

/* 21.3 Floating Point Error Handling */
void fpointQFPErr(void) {
	SMSG_DEBUG("fpointQFPErr")
}

#endif
#endif

#if TASKINGSTANDARD == TASKINGSTD_FORTH83
void taskingF83Allot(void) {
	SMSG_DEBUG("taskingF83Allot")
}

void taskingF83Create(void) {
	SMSG_DEBUG("taskingF83Create")
}

void taskingF83Variable(void) {
	SMSG_DEBUG("taskingF83Variable")
}

void taskingF83Defer(void) {
	SMSG_DEBUG("taskingF83Defer")
}

void taskingF83Pause(void) {
	SMSG_DEBUG("taskingF83Pause")
}

void taskingF83Restart(void) {
	SMSG_DEBUG("taskingF83Restart")
}

void taskingF83Local(void) {
	SMSG_DEBUG("taskingF83Local")
}

void taskingF83FetchLink(void) {
	SMSG_DEBUG("taskingF83FetchLink")
}

void taskingF83StoreLink(void) {
	SMSG_DEBUG("taskingF83StoreLink")
}

void taskingF83Sleep(void) {
	SMSG_DEBUG("taskingF83Sleep")
}

void taskingF83Wake(void) {
	SMSG_DEBUG("taskingF83Wake")
}

void taskingF83Stop(void) {
	SMSG_DEBUG("taskingF83Stop")
}

void taskingF83Multi(void) {
	SMSG_DEBUG("taskingF83Multi")
}

void taskingF83Single(void) {
	SMSG_DEBUG("taskingF83Single")
}

void taskingF83Task(void) {
	SMSG_DEBUG("taskingF83Task")
}

void taskingF83SetTask(void) {
	SMSG_DEBUG("taskingF83SetTask")
}

void taskingF83Activate(void) {
	SMSG_DEBUG("taskingF83Activate")
}

void taskingF83Background(void) {
	SMSG_DEBUG("taskingF83Background")
}

#endif

#if TASKINGSTANDARD == TASKINGSTD_FPC
void taskingFPCPause(void) {
	SMSG_DEBUG("taskingFPCPause")
}

void taskingFPCRestart(void) {
	SMSG_DEBUG("taskingFPCRestart")
}

void taskingFPCLocal(void) {
	SMSG_DEBUG("taskingFPCLocal")
}

void taskingFPCFetchLink(void) {
	SMSG_DEBUG("taskingFPCFetchLink")
}

void taskingFPCStoreLink(void) {
	SMSG_DEBUG("taskingFPCStoreLink")
}

void taskingFPCSleep(void) {
	SMSG_DEBUG("taskingFPCSleep")
}

void taskingFPCWake(void) {
	SMSG_DEBUG("taskingFPCWake")
}

void taskingFPCStop(void) {
	SMSG_DEBUG("taskingFPCStop")
}

void taskingFPCSingle(void) {
	SMSG_DEBUG("taskingFPCSingle")
}

void taskingFPCMulti(void) {
	SMSG_DEBUG("taskingFPCMulti")
}

void taskingFPCTask(void) {
	SMSG_DEBUG("taskingFPCTask")
}

void taskingFPCSetTask(void) {
	SMSG_DEBUG("taskingFPCSetTask")
}

void taskingFPCActivate(void) {
	SMSG_DEBUG("taskingFPCActivate")
}

void taskingFPCBackground(void) {
	SMSG_DEBUG("taskingFPCBackground")
}

#endif

#if TASKINGSTANDARD == TASKINGSTD_VOLK
void taskingVolkActivate(void) {
	SMSG_DEBUG("taskingVolkActivate")
}

void taskingVolkLock(void) {
	SMSG_DEBUG("taskingVolkLock")
}

void taskingVolkMultiTask(void) {
	SMSG_DEBUG("taskingVolkMultiTask")
}

void taskingVolkPass(void) {
	SMSG_DEBUG("taskingVolkPass")
}

void taskingVolkPause(void) {
	SMSG_DEBUG("taskingVolkPause")
}

void taskingVolkRendezvous(void) {
	SMSG_DEBUG("taskingVolkRendezvous")
}

void taskingVolkSingleTask(void) {
	SMSG_DEBUG("taskingVolkSingleTask")
}

void taskingVolkSleep(void) {
	SMSG_DEBUG("taskingVolkSleep")
}

void taskingVolkStop(void) {
	SMSG_DEBUG("taskingVolkStop")
}

void taskingVolkTask(void) {
	SMSG_DEBUG("taskingVolkTask")
}

void taskingVolkTasks(void) {
	SMSG_DEBUG("taskingVolkTasks")
}

void taskingVolkUnlock(void) {
	SMSG_DEBUG("taskingVolkUnlock")
}

void taskingVolkWake(void) {
	SMSG_DEBUG("taskingVolkWake")
}

void taskingVolkUPFetch(void) {
	SMSG_DEBUG("taskingVolkUPFetch")
}

void taskingVolkUPStore(void) {
	SMSG_DEBUG("taskingVolkUPStore")
}

#endif

#if TASKINGSTANDARD == TASKINGSTD_BIGFORTH
void taskingBigTaskerDotScr(void) {
	SMSG_DEBUG("taskingBigTaskerDotScr")
}

void taskingBigStop(void) {
	SMSG_DEBUG("taskingBigStop")
}

void taskingBigSingleTask(void) {
	SMSG_DEBUG("taskingBigSingleTask")
}

void taskingBigMultiTask(void) {
	SMSG_DEBUG("taskingBigMultiTask")
}

void taskingBigActivate(void) {
	SMSG_DEBUG("taskingBigActivate")
}

void taskingBigPass(void) {
	SMSG_DEBUG("taskingBigPass")
}

void taskingBigAutostart(void) {
	SMSG_DEBUG("taskingBigAutostart")
}

void taskingBigSleep(void) {
	SMSG_DEBUG("taskingBigSleep")
}

void taskingBigWake(void) {
	SMSG_DEBUG("taskingBigWake")
}

void taskingBigTimerFetch(void) {
	SMSG_DEBUG("taskingBigTimerFetch")
}

void taskingBigSyncTime(void) {
	SMSG_DEBUG("taskingBigSyncTime")
}

void taskingBigSyncStore(void) {
	SMSG_DEBUG("taskingBigSyncStore")
}

void taskingBigSync(void) {
	SMSG_DEBUG("taskingBigSync")
}

void taskingBigTask(void) {
	SMSG_DEBUG("taskingBigTask")
}

void taskingBigRendezvous(void) {
	SMSG_DEBUG("taskingBigRendezvous")
}

void taskingBigSTick(void) {
	SMSG_DEBUG("taskingBigSTick")
}

void taskingBigTasks(void) {
	SMSG_DEBUG("taskingBigTasks")
}

void taskingBigClockTask(void) {
	SMSG_DEBUG("taskingBigClockTask")
}

void taskingBigClock(void) {
	SMSG_DEBUG("taskingBigClock")
}

void taskingBigWaitC(void) {
	SMSG_DEBUG("taskingBigWaitC")
}

void taskingBigStartC(void) {
	SMSG_DEBUG("taskingBigStartC")
}

void taskingBigNoClock(void) {
	SMSG_DEBUG("taskingBigNoClock")
}

void taskingBigSetClock(void) {
	SMSG_DEBUG("taskingBigSetClock")
}

void taskingBigPause(void) {
	SMSG_DEBUG("taskingBigPause")
}

void taskingBigLock(void) {
	SMSG_DEBUG("taskingBigLock")
}

void taskingBigUnlock(void) {
	SMSG_DEBUG("taskingBigUnlock")
}

#endif

#if TASKINGSTANDARD == TASKINGSTD_RTF
void taskingRtfSingle(void) {
	SMSG_DEBUG("taskingRtfSingle")
}

void taskingRtfMulti(void) {
	SMSG_DEBUG("taskingRtfMulti")
}

void taskingRtfBackground(void) {
	SMSG_DEBUG("taskingRtfBackground")
}

void taskingRtfWake(void) {
	SMSG_DEBUG("taskingRtfWake")
}

void taskingRtfSleep(void) {
	SMSG_DEBUG("taskingRtfSleep")
}

void taskingRtfStop(void) {
	SMSG_DEBUG("taskingRtfStop")
}

void taskingRtfPause(void) {
	SMSG_DEBUG("taskingRtfPause")
}

void taskingRtfActivate(void) {
	SMSG_DEBUG("taskingRtfActivate")
}

#endif

#if TASKINGSTANDARD == TASKINGSTD_CAMEL
void taskingCamelSwitch(void) {
	SMSG_DEBUG("taskingCamelSwitch")
}

void taskingCamelInitTask(void) {
	SMSG_DEBUG("taskingCamelInitTask")
}

void taskingCamelDetach(void) {
	SMSG_DEBUG("taskingCamelDetach")
}

void taskingCamelAttach(void) {
	SMSG_DEBUG("taskingCamelAttach")
}

void taskingCamelPreempt(void) {
	SMSG_DEBUG("taskingCamelPreempt")
}

#endif

#ifdef TESTING_SUPPORT
void testingTCurlyBracket(void) {
	SMSG_DEBUG("testingTCurlyBracket")
}

void testingCurlyBracketT(void) {
	SMSG_DEBUG("testingCurlyBracketT")
}
#endif

#endif
