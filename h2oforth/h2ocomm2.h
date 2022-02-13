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
#if defined (__DEBUG__)
	printf("commonOctal\n");
#endif
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
#if defined (__DEBUG__)
	printf("commonHexDot\n");
#endif
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
#if defined (__DEBUG__)
	printf("commonOctDot\n");
#endif
}


#ifdef EXCEPTION_SUPPORT
void exceptionAbort(void) {
#if defined (__DEBUG__)
	printf("exceptionAbort\n");
#endif
}

void exceptionAbortQ(void) {
#if defined (__DEBUG__)
	printf("exceptionAbortQ\n");
#endif
}

void exceptionCatch(void) {
#if defined (__DEBUG__)
	printf("exceptionCatch\n");
#endif
}

void exceptionThrow(void) {
#if defined (__DEBUG__)
	printf("exceptionThrow\n");
#endif
}

/* Quit with exception handling. Overrides standard implementation in forthWords */
void exceptionQuit(void) {
#if defined (__DEBUG__)
	printf("exceptionQuit\n");
#endif
}
#endif


#ifdef FLOAT_SUPPORT
#if (FLOATSTD == FLOAT_ANS94) || (FLOATSTD == FLOAT_FORTH2012)
/* Floating-Point extension words */
void fpointDFStore(void) {
#if defined (__DEBUG__)
	printf("fpointDFStore\n");
#endif
}

void fpointDFFetch(void) {
#if defined (__DEBUG__)
	printf("fpointDFFetch\n");
#endif
}

void fpointDFAlign(void) {
#if defined (__DEBUG__)
	printf("fpointDFAlign\n");
#endif
}

void fpointDFFieldColon(void) {
#if defined (__DEBUG__)
	printf("fpointDFFieldColon\n");
#endif
}

void fpointDFloatPlus(void) {
#if defined (__DEBUG__)
	printf("fpointDFloatPlus\n");
#endif
}

void fpointDFloatS(void) {
#if defined (__DEBUG__)
	printf("fpointDFloatS\n");
#endif
}

void fpointFStarStar(void) {
#if defined (__DEBUG__)
	printf("fpointFStarStar\n");
#endif
}

void fpointFDot(void) {
#if defined (__DEBUG__)
	printf("fpointFDot\n");
#endif
}

void fpointFToS(void) {
#if defined (__DEBUG__)
	printf("fpointFToS\n");
#endif
}

void fpointFAbs(void) {
#if defined (__DEBUG__)
	printf("fpointFAbs\n");
#endif
}

void fpointFAcos(void) {
#if defined (__DEBUG__)
	printf("fpointFAcos\n");
#endif
}

void fpointFAcosh(void) {
#if defined (__DEBUG__)
	printf("fpointFAcosh\n");
#endif
}

void fpointFAlog(void) {
#if defined (__DEBUG__)
	printf("fpointFAlog\n");
#endif
}

void fpointFAsin(void) {
#if defined (__DEBUG__)
	printf("fpointFAsin\n");
#endif
}

void fpointAsinh(void) {
#if defined (__DEBUG__)
	printf("fpointAsinh\n");
#endif
}

void fpointAtan(void) {
#if defined (__DEBUG__)
	printf("fpointAtan\n");
#endif
}

void fpointAtan2(void) {
#if defined (__DEBUG__)
	printf("fpointAtan2\n");
#endif
}

void fpointFAtanh(void) {
#if defined (__DEBUG__)
	printf("fpointFAtanh\n");
#endif
}

void fpointFCos(void) {
#if defined (__DEBUG__)
	printf("fpointFCos\n");
#endif
}

void fpointFCosh(void) {
#if defined (__DEBUG__)
	printf("fpointFCosh\n");
#endif
}

void fpointFEDot(void) {
#if defined (__DEBUG__)
	printf("fpointFEDot\n");
#endif
}

void fpointFExp(void) {
#if defined (__DEBUG__)
	printf("fpointFExp\n");
#endif
}

void fpointFExpm1(void) {
#if defined (__DEBUG__)
	printf("fpointFExpm1\n");
#endif
}

void fpointFFieldColon(void) {
#if defined (__DEBUG__)
	printf("fpointFFieldColon\n");
#endif
}

void fpointFLn(void) {
#if defined (__DEBUG__)
	printf("fpointFLn\n");
#endif
}

void fpointFLnp1(void) {
#if defined (__DEBUG__)
	printf("fpointFLnp1\n");
#endif
}

void fpointFLog(void) {
#if defined (__DEBUG__)
	printf("fpointFLog\n");
#endif
}

void fpointFSDot(void) {
#if defined (__DEBUG__)
	printf("fpointFSDot\n");
#endif
}

void fpointFSin(void) {
#if defined (__DEBUG__)
	printf("fpointFSin\n");
#endif
}

void fpointFSincos(void) {
#if defined (__DEBUG__)
	printf("fpointFSincos\n");
#endif
}

void fpointFSinH(void) {
#if defined (__DEBUG__)
	printf("fpointFSinH\n");
#endif
}

void fpointFSqrt(void) {
#if defined (__DEBUG__)
	printf("fpointFSqrt\n");
#endif
}

void fpointFTan(void) {
#if defined (__DEBUG__)
	printf("fpointFTan\n");
#endif
}

void fpointFTanh(void) {
#if defined (__DEBUG__)
	printf("fpointFTanh\n");
#endif
}

void fpointFTrunc(void) {
#if defined (__DEBUG__)
	printf("fpointFTrunc\n");
#endif
}

void fpointFValue(void) {
#if defined (__DEBUG__)
	printf("fpointFValue\n");
#endif
}

void fpointFTilde(void) {
#if defined (__DEBUG__)
	printf("fpointFTilde\n");
#endif
}

void fpointPrecision(void) {
#if defined (__DEBUG__)
	printf("fpointPrecision\n");
#endif
}

void fpointSToF(void) {
#if defined (__DEBUG__)
	printf("fpointSToF\n");
#endif
}

void fpointSetPrecision(void) {
#if defined (__DEBUG__)
	printf("fpointSetPrecision\n");
#endif
}

void fpointSFStore(void) {
#if defined (__DEBUG__)
	printf("fpointSFStore\n");
#endif
}

void fpointSFFetch(void) {
#if defined (__DEBUG__)
	printf("fpointSFFetch\n");
#endif
}

void fpointSFAlign(void) {
#if defined (__DEBUG__)
	printf("fpointSFAlign\n");
#endif
}

void fpointSFAligned(void) {
#if defined (__DEBUG__)
	printf("fpointSFAligned\n");
#endif
}

void fpointSFFieldColon(void) {
#if defined (__DEBUG__)
	printf("fpointSFFieldColon\n");
#endif
}

void fpointSFloatPlus(void) {
#if defined (__DEBUG__)
	printf("fpointSFloatPlus\n");
#endif
}

void fpointSFloatS(void) {
#if defined (__DEBUG__)
	printf("fpointSFloatS\n");
#endif
}

/* Floating-Point words */
void fpointToFloat(void) {
#if defined (__DEBUG__)
	printf("fpointToFloat\n");
#endif
}

void fpointDToF(void) {
#if defined (__DEBUG__)
	printf("fpointDToF\n");
#endif
}

void fpointFStore(void) {
#if defined (__DEBUG__)
	printf("fpointFStore\n");
#endif
}

void fpointFMultiply(void) {
#if defined (__DEBUG__)
	printf("fpointFMultiply\n");
#endif
}

void fpointFPlus(void) {
#if defined (__DEBUG__)
	printf("fpointFPlus\n");
#endif
}

void fpointFMinus(void) {
#if defined (__DEBUG__)
	printf("fpointFMinus\n");
#endif
}

void fpointFfpointFSlash(void) {
#if defined (__DEBUG__)
	printf("fpointFfpointFSlash\n");
#endif
}

void fpointF0Less(void) {
#if defined (__DEBUG__)
	printf("fpointF0Less\n");
#endif
}

void fpointF0Equal(void) {
#if defined (__DEBUG__)
	printf("fpointF0Equal\n");
#endif
}

void fpointFLess(void) {
#if defined (__DEBUG__)
	printf("fpointFLess\n");
#endif
}

void fpointFToD(void) {
#if defined (__DEBUG__)
	printf("fpointFToD\n");
#endif
}

void fpointFFetch(void) {
#if defined (__DEBUG__)
	printf("fpointFFetch\n");
#endif
}

void fpointtFAlign(void) {
#if defined (__DEBUG__)
	printf("fpointtFAlign\n");
#endif
}

void fpointFAligned(void) {
#if defined (__DEBUG__)
	printf("fpointFAligned\n");
#endif
}

void fpointFConstant(void) {
#if defined (__DEBUG__)
	printf("fpointFConstant\n");
#endif
}

void fpointFDepth(void) {
#if defined (__DEBUG__)
	printf("fpointFDepth\n");
#endif
}

void fpointFDrop(void) {
#if defined (__DEBUG__)
	printf("fpointFDrop\n");
#endif
}

void fpointFDup(void) {
#if defined (__DEBUG__)
	printf("fpointFDup\n");
#endif
}

void fpointFLiteral(void) {
#if defined (__DEBUG__)
	printf("fpointFLiteral\n");
#endif
}

void fpointFloatPlus(void) {
#if defined (__DEBUG__)
	printf("fpointFloatPlus\n");
#endif
}

void fpointFloatS(void) {
#if defined (__DEBUG__)
	printf("fpointFloatS\n");
#endif
}

void fpointFloor(void) {
#if defined (__DEBUG__)
	printf("fpointFloor\n");
#endif
}

void fpointFMax(void) {
#if defined (__DEBUG__)
	printf("fpointFMax\n");
#endif
}

void fpointFMin(void) {
#if defined (__DEBUG__)
	printf("fpointFMin\n");
#endif
}

void fpointFNegate(void) {
#if defined (__DEBUG__)
	printf("fpointFNegate\n");
#endif
}

void fpointFOver(void) {
#if defined (__DEBUG__)
	printf("fpointFOver\n");
#endif
}

void fpointFRot(void) {
#if defined (__DEBUG__)
	printf("fpointFRot\n");
#endif
}

void fpointFRound(void) {
#if defined (__DEBUG__)
	printf("fpointFRound\n");
#endif
}

void fpointFSwap(void) {
#if defined (__DEBUG__)
	printf("fpointFSwap\n");
#endif
}

void fpointFVariable(void) {
#if defined (__DEBUG__)
	printf("fpointFVariable\n");
#endif
}

void fpointRepresent(void) {
#if defined (__DEBUG__)
	printf("fpointRepresent\n");
#endif
}

#endif
#if (FLOATSTD == FLOAT_JUPITER)
void fpointFNegate(void) {
#if defined (__DEBUG__)
	printf("fpointFNegate\n");
#endif
}

void fpointFSlash(void) {
#if defined (__DEBUG__)
	printf("fpointFSlash\n");
#endif
}

void fpointFStar(void) {
#if defined (__DEBUG__)
	printf("fpointFStar\n");
#endif
}

void fpointFPlus(void) {
#if defined (__DEBUG__)
	printf("fpointFPlus\n");
#endif
}

void fpointFMinus(void) {
#if defined (__DEBUG__)
	printf("fpointFMinus\n");
#endif
}

void fpointFDot(void){
#if defined (__DEBUG__)
	printf("fpointFDot\n");
#endif
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
#if defined (__DEBUG__)
	printf("fpointDotF\n");
#endif
}

void fpointFDot(void) {
#if defined (__DEBUG__)
	printf("fpoinFtDot\n");
#endif
}

void fpointNumFS(void) {
#if defined (__DEBUG__)
	printf("fpointNumFS\n");
#endif
}

void fpointSetPrecision(void) {
#if defined (__DEBUG__)
	printf("fpointSetPrecision\n");
#endif
}

void fpointPrecision(void) {
#if defined (__DEBUG__)
	printf("fpointPrecision\n");
#endif
}

void fpointFSqrt(void) {
#if defined (__DEBUG__)
	printf("fpointFSqrt\n");
#endif
}

void fpointPi(void) {
#if defined (__DEBUG__)
	printf("fpointPi\n");
#endif
}

void fpointFVariable(void) {
#if defined (__DEBUG__)
	printf("fpointFVariable\n");
#endif
}

void fpointFConstant(void) {
#if defined (__DEBUG__)
	printf("fpointFConstant\n");
#endif
}

void fpointFLiteral(void) {
#if defined (__DEBUG__)
	printf("fpointFLiteral\n");
#endif
}

void fpointAFLiteral(void) {
#if defined (__DEBUG__)
	printf("fpointAFLiteral\n");
#endif
}

void fpointSFComma(void) {
#if defined (__DEBUG__)
	printf("fpointSFComma\n");
#endif
}

void fpointSFloatPlus(void) {
#if defined (__DEBUG__)
	printf("fpointSFloatPlus\n");
#endif
}

void fpointSFloats(void) {
#if defined (__DEBUG__)
	printf("fpointSFloats\n");
#endif
}

void fpointSFloat(void) {
#if defined (__DEBUG__)
	printf("fpointSFloat\n");
#endif
}

void fpointSFGreaterEqual(void) {
#if defined (__DEBUG__)
	printf("fpointSFGreaterEqual\n");
#endif
}

void fpointSFLessEqual(void) {
#if defined (__DEBUG__)
	printf("fpointSFLessEqual\n");
#endif
}

void fpointSFUnequal(void) {
#if defined (__DEBUG__)
	printf("fpointSFUnequal\n");
#endif
}

void fpointSFGreater(void) {
#if defined (__DEBUG__)
	printf("fpointSFGreater\n");
#endif
}

void fpointSFLess(void) {
#if defined (__DEBUG__)
	printf("fpointSFLess\n");
#endif
}

void fpointSFEqual(void) {
#if defined (__DEBUG__)
	printf("fpointSFEqual\n");
#endif
}

void fpointFg(void) {
#if defined (__DEBUG__)
	printf("fpointFg\n");
#endif
}

void fpointFDepth(void) {
#if defined (__DEBUG__)
	printf("fpointFDepth\n");
#endif
}

void fpointFP0(void) {
#if defined (__DEBUG__)
	printf("fpointFP0\n");
#endif
}

void fpointFGreaterNumberQ(void) {
#if defined (__DEBUG__)
	printf("fpointFGreaterNumberQ\n");
#endif
}

void fpointFToS(void) {
#if defined (__DEBUG__)
	printf("fpointFToS\n");
#endif
}

void fpointSToF(void) {
#if defined (__DEBUG__)
	printf("fpointSToF\n");
#endif
}

void fpointOneSlashF(void) {
#if defined (__DEBUG__)
	printf("fpointOneSlashF\n");
#endif
}

void fpointFSlash(void) {
#if defined (__DEBUG__)
	printf("fpointFSlash\n");
#endif
}

void fpointFStar(void) {
#if defined (__DEBUG__)
	printf("fpointFStar\n");
#endif
}

void fpointFMinus(void) {
#if defined (__DEBUG__)
	printf("fpointFMinus\n");
#endif
}

void fpointFPlus(void) {
#if defined (__DEBUG__)
	printf("fpointFPlus\n");
#endif
}

void fpointF0Equal(void) {
#if defined (__DEBUG__)
	printf("fpointF0Equal\n");
#endif
}

void fpointF0Less(void) {
#if defined (__DEBUG__)
	printf("fpointF0Less\n");
#endif
}

void fpointFNegate(void) {
#if defined (__DEBUG__)
	printf("fpointFNegate\n");
#endif
}

void fpointFswa(void) {
#if defined (__DEBUG__)
	printf("fpointFswa\n");
#endif
}

void fpointFOver(void) {
#if defined (__DEBUG__)
	printf("fpointFOver\n");
#endif
}

void fpointFDrop(void) {
#if defined (__DEBUG__)
	printf("fpointFDrop\n");
#endif
}

void fpointFNip(void) {
#if defined (__DEBUG__)
	printf("fpointFNip\n");
#endif
}

void fpointFDup(void) {
#if defined (__DEBUG__)
	printf("fpointFDup\n");
#endif
}

void fpointSFStore(void) {
#if defined (__DEBUG__)
	printf("fpointSFStore\n");
#endif
}

void fpointSFFetch(void) {
#if defined (__DEBUG__)
	printf("fpointSFFetch\n");
#endif
}

void fpointSF(void) {
#if defined (__DEBUG__)
	printf("fpointSF\n");
#endif
}

void fpointFPStore(void) {
#if defined (__DEBUG__)
	printf("fpointFPStore\n");
#endif
}

void fpointFPFetch(void) {
#if defined (__DEBUG__)
	printf("fpointFPFetch\n");
#endif
}

#endif
#if (FLOATSTD == FLOAT_TURBO)
/* 10 Floating-Point Stack Manipulation Words */
void fpointFDup(void) {
#if defined (__DEBUG__)
	printf("fpointFDup\n");
#endif
}

void fpointFDrop(void) {
#if defined (__DEBUG__)
	printf("fpointFDrop\n");
#endif
}

void fpointFSwap(void) {
#if defined (__DEBUG__)
	printf("fpointFSwap\n");
#endif
}

void fpointFOver(void) {
#if defined (__DEBUG__)
	printf("fpointFOver\n");
#endif
}

void fpointFPClear(void) {
#if defined (__DEBUG__)
	printf("fpointFPClear\n");
#endif
}

/* 11 Math Words */
void fpointFPlus(void) {
#if defined (__DEBUG__)
	printf("fpointFPlus\n");
#endif
}

void fpointFMinus(void) {
#if defined (__DEBUG__)
	printf("fpointFMinus\n");
#endif
}

void fpointFStar(void) {
#if defined (__DEBUG__)
	printf("fpointFStar\n");
#endif
}

void fpointFSlash(void) {
#if defined (__DEBUG__)
	printf("fpointFSlash\n");
#endif
}

void fpointFNegate(void) {
#if defined (__DEBUG__)
	printf("fpointFNegate\n");
#endif
}

void fpointFAbs(void) {
#if defined (__DEBUG__)
	printf("fpointFAbs\n");
#endif
}

void fpointFloor(void) {
#if defined (__DEBUG__)
	printf("fpointFloor\n");
#endif
}

void fpointCeil(void) {
#if defined (__DEBUG__)
	printf("fpointCeil\n");
#endif
}

void fpointTrunc(void) {
#if defined (__DEBUG__)
	printf("fpointTrunc\n");
#endif
}

void fpointFrac(void) {
#if defined (__DEBUG__)
	printf("fpointFrac\n");
#endif
}

/* 12 Comparison Words */
void fpointFEqual(void) {
#if defined (__DEBUG__)
	printf("fpointFEqual\n");
#endif
}

void fpointF0Equal(void) {
#if defined (__DEBUG__)
	printf("fpointF0Equal\n");
#endif
}

void fpointFLess(void) {
#if defined (__DEBUG__)
	printf("fpointFLess\n");
#endif
}

void fpointFGreater(void) {
#if defined (__DEBUG__)
	printf("fpointFGreater\n");
#endif
}

void fpointF0Less(void) {
#if defined (__DEBUG__)
	printf("fpointF0Less\n");
#endif
}

/* 13 Floating-Point Literal Handling */
void fpointToF(void) {
#if defined (__DEBUG__)
	printf("fpointToF\n");
#endif
}

void fpointFLiteral(void) {
#if defined (__DEBUG__)
	printf("fpointFLiteral\n");
#endif
}

void fpointFLit(void) {
#if defined (__DEBUG__)
	printf("fpointFLit\n");
#endif
}

/* 14 Floating-Point Variables */
void fpointFVariable(void) {
#if defined (__DEBUG__)
	printf("fpointFVariable\n");
#endif
}

void fpointFStore(void) {
#if defined (__DEBUG__)
	printf("fpointFStore\n");
#endif
}

void fpointFFetch(void) {
#if defined (__DEBUG__)
	printf("fpointFFetch\n");
#endif
}

/* 15 Floating-Point Constants */
void fpointFConstant(void) {
#if defined (__DEBUG__)
	printf("fpointFConstant\n");
#endif
}

/* 16 Floating-Point Values */
void fpointFValue(void) {
#if defined (__DEBUG__)
	printf("fpointFValue\n");
#endif
}

void fpointFTo(void) {
#if defined (__DEBUG__)
	printf("fpointFTo\n");
#endif
}

void fpointPlusFTo(void) {
#if defined (__DEBUG__)
	printf("fpointPlusFTo\n");
#endif
}

/* 17 Displaying Floating-Point Numbers */
void fpointFDot(void) {
#if defined (__DEBUG__)
	printf("fpointFDot\n");
#endif
}

void fpointFFDpt(void) {
#if defined (__DEBUG__)
	printf("fpointFFDpt\n");
#endif
}

void fpointFFPlusDot(void) {
#if defined (__DEBUG__)
	printf("fpointFFPlusDot\n");
#endif
}

void fpointFFEDot(void) {
#if defined (__DEBUG__)
	printf("fpointFFEDot\n");
#endif
}

void fpointFFEPlusDot(void) {
#if defined (__DEBUG__)
	printf("fpointFFEPlusDot\n");
#endif
}

void fpointFFXDot(void) {
#if defined (__DEBUG__)
	printf("fpointFFXDot\n");
#endif
}

void fpointFFXPlusDot(void) {
#if defined (__DEBUG__)
	printf("fpointFFXPlusDot\n");
#endif
}

void fpointFDollarDot(void) {
#if defined (__DEBUG__)
	printf("fpointFDollarDot\n");
#endif
}

void fpointDotFS(void) {
#if defined (__DEBUG__)
	printf("fpointDotFS\n");
#endif
}

void fpointDotFDollar(void) {
#if defined (__DEBUG__)
	printf("fpointDotFDollar\n");
#endif
}

/* 18 Floating-Point Number Conversion */
void fpointSToFP(void) {
#if defined (__DEBUG__)
	printf("fpointSToFP\n");
#endif
}

void fpointFPToS(void) {
#if defined (__DEBUG__)
	printf("fpointFPToS\n");
#endif
}

/* 19 Transcendental Constants and Conversion Functions */
void fpointPi(void) {
#if defined (__DEBUG__)
	printf("fpointPi\n");
#endif
}

void fpointEulerE(void) {
#if defined (__DEBUG__)
	printf("fpointEulerE\n");
#endif
}

void fpointRadDeg(void) {
#if defined (__DEBUG__)
	printf("fpointRadDeg\n");
#endif
}

void fpointDegRad(void) {
#if defined (__DEBUG__)
	printf("fpointDegRad\n");
#endif
}

void fpointToRad(void) {
#if defined (__DEBUG__)
	printf("fpointToRad\n");
#endif
}

void fpointToDeg(void) {
#if defined (__DEBUG__)
	printf("fpointToDeg\n");
#endif
}

/* 20 Transcendental Functions */
void fpointExp(void) {
#if defined (__DEBUG__)
	printf("fpointExp\n");
#endif
}

void fpointLog(void) {
#if defined (__DEBUG__)
	printf("fpointLog\n");
#endif
}

void fpointSqrt(void) {
#if defined (__DEBUG__)
	printf("fpointSqrt\n");
#endif
}

void fpointCos(void) {
#if defined (__DEBUG__)
	printf("fpointCos\n");
#endif
}

void fpointSin(void) {
#if defined (__DEBUG__)
	printf("fpointSin\n");
#endif
}

void fpointTan(void) {
#if defined (__DEBUG__)
	printf("fpointTan\n");
#endif
}

void fpointAtn(void) {
#if defined (__DEBUG__)
	printf("fpointAtn\n");
#endif
}

void fpointPow(void) {
#if defined (__DEBUG__)
	printf("fpointPow\n");
#endif
}

void fpointLog10(void) {
#if defined (__DEBUG__)
	printf("fpointLog10\n");
#endif
}

void fpointExp10(void) {
#if defined (__DEBUG__)
	printf("fpointExp10\n");
#endif
}

/* 21.3 Floating Point Error Handling */
void fpointQFPErr(void) {
#if defined (__DEBUG__)
	printf("fpointQFPErr\n");
#endif
}

#endif
#endif


#if TASKINGSTANDARD == TASKINGSTD_VOLK
void taskingVfActivate(void) {
#if defined (__DEBUG__)
	printf("taskingVfActivate\n");
#endif
}

void taskingVfLock(void) {
#if defined (__DEBUG__)
	printf("taskingVfLock\n");
#endif
}

void taskingVfMultiTask(void) {
#if defined (__DEBUG__)
	printf("taskingVfMultiTask\n");
#endif
}

void taskingVfPass(void) {
#if defined (__DEBUG__)
	printf("taskingVfPass\n");
#endif
}

void taskingVfPause(void) {
#if defined (__DEBUG__)
	printf("taskingVfPause\n");
#endif
}

void taskingVfRendezvous(void) {
#if defined (__DEBUG__)
	printf("taskingVfRendezvous\n");
#endif
}

void taskingVfSingleTask(void) {
#if defined (__DEBUG__)
	printf("taskingVfSingleTask\n");
#endif
}

void taskingVfSleep(void) {
#if defined (__DEBUG__)
	printf("taskingVfSleep\n");
#endif
}

void taskingVfStop(void) {
#if defined (__DEBUG__)
	printf("taskingVfStop\n");
#endif
}

void taskingVfTask(void) {
#if defined (__DEBUG__)
	printf("taskingVfTask\n");
#endif
}

void taskingVfTasks(void) {
#if defined (__DEBUG__)
	printf("taskingVfTasks\n");
#endif
}

void taskingVfUnlock(void) {
#if defined (__DEBUG__)
	printf("taskingVfUnlock\n");
#endif
}

void taskingVfWake(void) {
#if defined (__DEBUG__)
	printf("taskingVfWake\n");
#endif
}

void taskingVfUPFetch(void) {
#if defined (__DEBUG__)
	printf("taskingVfUPFetch\n");
#endif
}

void taskingVfUPStore(void) {
#if defined (__DEBUG__)
	printf("taskingVfUPStore\n");
#endif
}
#endif


#ifdef TESTING_SUPPORT
void testingTCurlyBracket(void) {
#if defined (__DEBUG__)
	printf("testingTCurlyBracket\n");
#endif
}

void testingCurlyBracketT(void) {
#if defined (__DEBUG__)
	printf("testingCurlyBracketT\n");
#endif
}
#endif

#if TASKINGSTANDARD == TASKINGSTD_FORTH83
void taskingF83Allot(void) {
#if defined (__DEBUG__)
	printf("taskingF83Allot\n");
#endif
}

void taskingF83Create(void) {
#if defined (__DEBUG__)
	printf("taskingF83Create\n");
#endif
}

void taskingF83Variable(void) {
#if defined (__DEBUG__)
	printf("taskingF83Variable\n");
#endif
}

void taskingF83Defer(void) {
#if defined (__DEBUG__)
	printf("taskingF83Defer\n");
#endif
}

void taskingF83Pause(void) {
#if defined (__DEBUG__)
	printf("taskingF83Pause\n");
#endif
}

void taskingF83Restart(void) {
#if defined (__DEBUG__)
	printf("taskingF83Restart\n");
#endif
}

void taskingF83Local(void) {
#if defined (__DEBUG__)
	printf("taskingF83Local\n");
#endif
}

void taskingF83FetchLink(void) {
#if defined (__DEBUG__)
	printf("taskingF83FetchLink\n");
#endif
}

void taskingF83StoreLink(void) {
#if defined (__DEBUG__)
	printf("taskingF83StoreLink\n");
#endif
}

void taskingF83Sleep(void) {
#if defined (__DEBUG__)
	printf("taskingF83Sleep\n");
#endif
}

void taskingF83Wake(void) {
#if defined (__DEBUG__)
	printf("taskingF83Wake\n");
#endif
}

void taskingF83Stop(void) {
#if defined (__DEBUG__)
	printf("taskingF83Stop\n");
#endif
}

void taskingF83Multi(void) {
#if defined (__DEBUG__)
	printf("taskingF83Multi\n");
#endif
}

void taskingF83Single(void) {
#if defined (__DEBUG__)
	printf("taskingF83Single\n");
#endif
}

void taskingF83Task(void) {
#if defined (__DEBUG__)
	printf("taskingF83Task\n");
#endif
}

void taskingF83SetTask(void) {
#if defined (__DEBUG__)
	printf("taskingF83SetTask\n");
#endif
}

void taskingF83Activate(void) {
#if defined (__DEBUG__)
	printf("taskingF83Activate\n");
#endif
}

void taskingF83Background(void) {
#if defined (__DEBUG__)
	printf("taskingF83Background\n");
#endif
}


#endif

#endif
