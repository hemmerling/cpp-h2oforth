#ifndef H2OCOMM2
#define H2OCOMM2

/* Declarations of FORTH words common to one or more FORTH standards & FORTH implementations */

/* Internal functions */

#define DEMOWORD_SIZE 1
#define WORD_LITERAL 143UL
#define WORD_PLUS 269UL
#define WORD_LIT 308UL
#define WORD_NOOPERATION 2052UL
#define WORD_STATIC_PLUS 7168UL
#define WORD_STATIC_PLUSPLUS 7169UL

/* Get word in wordlist */
typedef_forthWord* privateGetPermWord(WORDID forthWordID) {
	unsigned int ii = 0;
	unsigned int jj = 0;
	typedef_forthWord* result = NULL;
	/* TBD: Size should be calculated by forthTasks[forthState.forthCurrentTask].forthWordLists */
	unsigned int lenForthWordLists = sizeof(forthWordLists) / sizeof(forthWordLists[0]);
	for (ii = 0; ii < lenForthWordLists; ii++) {
		for (jj = 0; jj < *forthTasks[forthState.forthCurrentTask].forthWordLists[ii].size; jj++) {
#ifdef ARDUINO
#else
			if (forthTasks[forthState.forthCurrentTask].forthWordLists[ii].forthWords[jj].forthWordID == forthWordID) {
#endif			
				result = (typedef_forthWord*)&(forthTasks[forthState.forthCurrentTask].forthWordLists[ii].forthWords[jj]);
				break;
			};
		};
	};
	return(result);
}

/* Execute a word */
void privateExecuteWordByWordID(WORDID forthWordID) {
	unsigned int ii = 0;
	unsigned int jj = 0;
	unsigned int kk = 0;
	int result = FALSE;
	/* TBD: lenForthWordLists should be calculated by forthTasks[forthState.forthCurrentTask].forthWordLists */
	unsigned int lenForthWordLists = sizeof(forthWordLists) / sizeof(forthWordLists[0]);
	for (ii = 0; ii < lenForthWordLists; ii++) {
		for (jj = 0; jj < *forthTasks[forthState.forthCurrentTask].forthWordLists[ii].size; jj++) {
#ifdef ARDUINO
			if (pgm_read_ptr(&forthTasks[forthState.forthCurrentTask].forthWordLists[ii].forthWords[jj].forthWordID == forthWordID)) {
#else
			if (forthTasks[forthState.forthCurrentTask].forthWordLists[ii].forthWords[jj].forthWordID == forthWordID) {
#endif			
				result = TRUE;
#ifdef ARDUINO
				forthOperation funcPtr = pgm_read_ptr(&forthTasks[forthState.forthCurrentTask].forthWordLists[ii].forthWords[jj].forthOpt);
				if (funcPtr != NULL) {
					/* Execute word */
					funcPtr();
				};
#else  
				if (forthTasks[forthState.forthCurrentTask].forthWordLists[ii].forthWords[jj].forthOpt != NULL) {
					/* Execute word by function pointer */
					forthTasks[forthState.forthCurrentTask].forthWordLists[ii].forthWords[jj].forthOpt();
				}
				else
					if (forthTasks[forthState.forthCurrentTask].forthWordLists[ii].forthWords[jj].startID > 0) {
						unsigned int definitionSize = forthTasks[forthState.forthCurrentTask].forthWordLists[ii].forthWords[jj].wordLength;
						unsigned int startID = forthTasks[forthState.forthCurrentTask].forthWordLists[ii].forthWords[jj].startID;
						/* Execute word by FORTH definition space */
						for (kk = 0; kk < definitionSize; kk++) {
							unsigned int forthWordID = forthTasks[forthState.forthCurrentTask].forthDefinitionSpace[startID + kk];
							printf("forthWordID = %d\n", forthWordID);
							typedef_forthWord* forthWordPtr = privateGetPermWord(forthWordID);
							printf("forthWordPtr-> Name = %s\n", forthWordPtr->forthWordName);
							privateExecuteWordByWordID(forthWordID);
						};
					};
#endif      
				break;
			};
		};
	};
	return;
}


/* Execute word of wordlist */
void privateExecuteWordByName(char *forthWordName) {
	unsigned int ii = 0;
	unsigned int jj = 0;
	unsigned int kk = 0;
	int result = FALSE;
	/* TBD: lenForthWordLists should be calculated by forthTasks[forthState.forthCurrentTask].forthWordLists */
	unsigned int lenForthWordLists = sizeof(forthWordLists) / sizeof(forthWordLists[0]);
	for (ii = 0; ii < lenForthWordLists; ii++) {
		for (jj = 0; jj < *forthTasks[forthState.forthCurrentTask].forthWordLists[ii].size; jj++) {
#ifdef ARDUINO
			if (strcmp(forthWordName,
				pgm_read_ptr(&forthTasks[forthState.forthCurrentTask].forthWordLists[ii].forthWords[jj].forthWordName))
				== 0) {
#else
			if (strcmp(forthWordName,
				forthTasks[forthState.forthCurrentTask].forthWordLists[ii].forthWords[jj].forthWordName)
				== 0) {
#endif			
				result = TRUE;
#ifdef ARDUINO
				forthOperation funcPtr = pgm_read_ptr(&forthTasks[forthState.forthCurrentTask].forthWordLists[ii].forthWords[jj].forthOpt);
				if (funcPtr != NULL) {
					/* Execute word */
					funcPtr();
				};
#else  
				if (forthTasks[forthState.forthCurrentTask].forthWordLists[ii].forthWords[jj].forthOpt != NULL) {
					/* Execute word by function pointer */
					forthTasks[forthState.forthCurrentTask].forthWordLists[ii].forthWords[jj].forthOpt();
				}
				else
					if (forthTasks[forthState.forthCurrentTask].forthWordLists[ii].forthWords[jj].startID > 0) {
						unsigned int definitionSize = forthTasks[forthState.forthCurrentTask].forthWordLists[ii].forthWords[jj].wordLength;
						unsigned int startID = forthTasks[forthState.forthCurrentTask].forthWordLists[ii].forthWords[jj].startID;
						/* Execute word by FORTH definition space */
						for (kk = 0; kk < definitionSize; kk++) {
							unsigned int forthWordID = forthTasks[forthState.forthCurrentTask].forthDefinitionSpace[startID + kk];
							printf("forthWordID = %d\n", forthWordID);
							typedef_forthWord* forthWordPtr = privateGetPermWord(forthWordID);
							printf("forthWordPtr-> Name = %s\n", forthWordPtr->forthWordName);
							privateExecuteWordByWordID(forthWordID);
						};
					};
#endif      
				break;
			};
		};
	};
	return;
}


void privateCreateDemoWord(void) {
	int maxDefinitions = sizeof(forthDefinitionWords) / sizeof(forthDefinitionWords[0]);
	int maxSpace = sizeof(forthDefinitionSpace) / sizeof(forthDefinitionSpace[0]);
	if (forthTasks[forthState.forthCurrentTask].definitionIndex < maxDefinitions) {
		if (forthTasks[forthState.forthCurrentTask].definitionSpaceIndex + DEMOWORD_SIZE < maxSpace) {
			{
				forthTasks[forthState.forthCurrentTask].forthDefinitionWords[forthTasks[forthState.forthCurrentTask].definitionIndex].forthWordName = "1+2";
				forthTasks[forthState.forthCurrentTask].forthDefinitionWords[forthTasks[forthState.forthCurrentTask].definitionIndex].startID = forthTasks[forthState.forthCurrentTask].definitionSpaceIndex;
				forthTasks[forthState.forthCurrentTask].forthDefinitionSpace[forthTasks[forthState.forthCurrentTask].definitionSpaceIndex++] = WORD_LIT;
				forthTasks[forthState.forthCurrentTask].forthDefinitionSpace[forthTasks[forthState.forthCurrentTask].definitionSpaceIndex++] = 1;
				forthTasks[forthState.forthCurrentTask].forthDefinitionSpace[forthTasks[forthState.forthCurrentTask].definitionSpaceIndex++] = WORD_LIT;
				forthTasks[forthState.forthCurrentTask].forthDefinitionSpace[forthTasks[forthState.forthCurrentTask].definitionSpaceIndex++] = 2;
				forthTasks[forthState.forthCurrentTask].forthDefinitionSpace[forthTasks[forthState.forthCurrentTask].definitionSpaceIndex++] = WORD_PLUS;
				forthTasks[forthState.forthCurrentTask].forthDefinitionWords[forthTasks[forthState.forthCurrentTask].definitionIndex].wordLength = 5;
				forthTasks[forthState.forthCurrentTask].definitionIndex++;

				forthTasks[forthState.forthCurrentTask].forthDefinitionWords[forthTasks[forthState.forthCurrentTask].definitionIndex].forthWordName = "PLUS";
				forthTasks[forthState.forthCurrentTask].forthDefinitionWords[forthTasks[forthState.forthCurrentTask].definitionIndex].forthAlternativeName = "PLUS";
				forthTasks[forthState.forthCurrentTask].forthDefinitionWords[forthTasks[forthState.forthCurrentTask].definitionIndex].forthWordID = WORD_STATIC_PLUS;
				forthTasks[forthState.forthCurrentTask].forthDefinitionWords[forthTasks[forthState.forthCurrentTask].definitionIndex].forthOpt = (forthOperation)NULL;
				forthTasks[forthState.forthCurrentTask].forthDefinitionWords[forthTasks[forthState.forthCurrentTask].definitionIndex].startID =
					forthTasks[forthState.forthCurrentTask].definitionSpaceIndex;
				forthTasks[forthState.forthCurrentTask].forthDefinitionSpace[forthTasks[forthState.forthCurrentTask].definitionSpaceIndex] = WORD_PLUS;
				forthTasks[forthState.forthCurrentTask].forthDefinitionSpace2[forthTasks[forthState.forthCurrentTask].definitionSpaceIndex] = forthWords[WORD_PLUS - 1];
				forthTasks[forthState.forthCurrentTask].definitionSpaceIndex++;
				forthTasks[forthState.forthCurrentTask].forthDefinitionWords[forthTasks[forthState.forthCurrentTask].definitionIndex].wordLength = 1;
				forthTasks[forthState.forthCurrentTask].definitionIndex++;

				forthTasks[forthState.forthCurrentTask].forthDefinitionWords[forthTasks[forthState.forthCurrentTask].definitionIndex].forthWordName = "PLUSPLUS";
				forthTasks[forthState.forthCurrentTask].forthDefinitionWords[forthTasks[forthState.forthCurrentTask].definitionIndex].forthAlternativeName = "PLUSPLUS";
				forthTasks[forthState.forthCurrentTask].forthDefinitionWords[forthTasks[forthState.forthCurrentTask].definitionIndex].forthWordID = WORD_STATIC_PLUSPLUS;
				forthTasks[forthState.forthCurrentTask].forthDefinitionWords[forthTasks[forthState.forthCurrentTask].definitionIndex].forthOpt = (forthOperation)NULL;
				forthTasks[forthState.forthCurrentTask].forthDefinitionWords[forthTasks[forthState.forthCurrentTask].definitionIndex].startID =
					forthTasks[forthState.forthCurrentTask].definitionSpaceIndex;
				forthTasks[forthState.forthCurrentTask].forthDefinitionSpace[forthTasks[forthState.forthCurrentTask].definitionSpaceIndex] = WORD_PLUS;
				forthTasks[forthState.forthCurrentTask].forthDefinitionSpace2[forthTasks[forthState.forthCurrentTask].definitionSpaceIndex] = forthWords[WORD_PLUS - 1];
				forthTasks[forthState.forthCurrentTask].definitionSpaceIndex++;
				forthTasks[forthState.forthCurrentTask].forthDefinitionSpace[forthTasks[forthState.forthCurrentTask].definitionSpaceIndex] = WORD_STATIC_PLUS;
				forthTasks[forthState.forthCurrentTask].forthDefinitionSpace2[forthTasks[forthState.forthCurrentTask].definitionSpaceIndex] = forthWords[WORD_PLUS - 1];
				forthTasks[forthState.forthCurrentTask].definitionSpaceIndex++;
				forthTasks[forthState.forthCurrentTask].forthDefinitionWords[forthTasks[forthState.forthCurrentTask].definitionIndex].wordLength = 2;
				forthTasks[forthState.forthCurrentTask].definitionIndex++;


			};
		}
		else {
			forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DICTIONARY_SPACE_FULL;
		};
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DICTIONARY_LIST_FULL;
	};
}

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
		if (cr1) {
			FPUTC_OUT(CHAR_CR);
		};
		FPUTS_OUT(message);
		if (cr2) {
			FPUTC_OUT(CHAR_CR);
		};
		break;
	case STREAM_ERROR:
	case STREAM_WARNING:
	case STREAM_VERBOSE:
	case STREAM_DEBUG:
	case STREAM_INFORMATION:
		if (cr1) {
			FPUTC_ERR(CHAR_CR);
		};
		FPUTS_ERR(message);
		if (cr2) {
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
#ifdef ARDUINO
		nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, "? %s %s # %d", wordBuffer,
			pgm_read_ptr(&forthTasks[forthState.forthCurrentTask].forthErrors[forthTasks[forthState.forthCurrentTask].errorNumber].messageText),
#else
		nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, "? %s %s # %d", wordBuffer,
			forthTasks[forthState.forthCurrentTask].forthErrors[forthTasks[forthState.forthCurrentTask].errorNumber].messageText,
#endif
			forthTasks[forthState.forthCurrentTask].errorNumber);
		SMSG_SUCCESS_CR(forthTasks[forthState.forthCurrentTask].printBuffer);
	};
	if (messageNumber
#if defined (__DEVELOP__)
		&& (messageNumber < sizeOfMessages)
#endif
		) {
		nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, "%s",
#ifdef ARDUINO
			pgm_read_ptr(&forthTasks[forthState.forthCurrentTask].forthMessages[forthTasks[forthState.forthCurrentTask].messageNumber].messageText));
#else
			forthTasks[forthState.forthCurrentTask].forthMessages[forthTasks[forthState.forthCurrentTask].messageNumber].messageText);
#endif
		SMSG_SUCCESS_CR(forthTasks[forthState.forthCurrentTask].printBuffer);
	};
	if (osErrorNumber
#if defined (__DEVELOP__)
		&& (osErrorNumber < sizeOfOsErrors)
#endif
		) {
		nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, "%s",
#ifdef ARDUINO
			pgm_read_ptr(&forthTasks[forthState.forthCurrentTask].forthOsErrors[forthTasks[forthState.forthCurrentTask].osErrorNumber].messageText));
#else
			forthTasks[forthState.forthCurrentTask].forthOsErrors[forthTasks[forthState.forthCurrentTask].osErrorNumber].messageText);
#endif
		SMSG_SUCCESS_CR(forthTasks[forthState.forthCurrentTask].printBuffer);
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
	PSMSG_DEBUG("commonOctal")
}

/* Display in hexadecimal base in the format of <.> */
void commonHexDot(void) {
	int nn; /* < 32 */
	if (forthTasks[forthState.forthCurrentTask].dataStackIndex) {
		if (sizeof(CELL_INTEGER) == CELLSIZE8) {
			nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, "%llx ",
				forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex]);
			SMSG_SUCCESS(forthTasks[forthState.forthCurrentTask].printBuffer);
		}
		else {
			nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, "%x ",
				forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex]);
			SMSG_SUCCESS(forthTasks[forthState.forthCurrentTask].printBuffer);
		}
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_EMPTY;
	};
	PSMSG_DEBUG("commonHexDot")
}

/* Display in octal base in the format of <.> */
void commonOctDot(void) {
	int nn; /* < 32 */
	if (forthTasks[forthState.forthCurrentTask].dataStackIndex) {
		if (sizeof(CELL_INTEGER) == CELLSIZE8) {
			nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, "%llo ",
				forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex]);
			SMSG_SUCCESS(forthTasks[forthState.forthCurrentTask].printBuffer);
		}
		else {
			nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, "%o ",
				forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex]);
			SMSG_SUCCESS(forthTasks[forthState.forthCurrentTask].printBuffer);
		};
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_EMPTY;
	};
	PSMSG_DEBUG("commonOctDot")
}

/* Display the ReturnStack ( H2OForth unique ) */
void commonRDotS(void) {
	int ii = 0;
	int nn; /* < 32 */
	int returnStackIndex = forthTasks[forthState.forthCurrentTask].returnStackIndex;
	if (returnStackIndex) {
		privateSetBaseFormat();
		nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, "[%d] ", returnStackIndex);
		SMSG_SUCCESS(forthTasks[forthState.forthCurrentTask].printBuffer);
		for (ii = 0; ii < returnStackIndex; ii++) {
			nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer,
				forthTasks[forthState.forthCurrentTask].baseFormat,
				forthTasks[forthState.forthCurrentTask].returnStackSpace[ii]);
			SMSG_SUCCESS(forthTasks[forthState.forthCurrentTask].printBuffer);
			CMSG_SUCCESS(CHAR_SPACE);
		};
		CMSG_SUCCESS(CHAR_CR);
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_RETURNSTACK_EMPTY;
	};
	PSMSG_DEBUG("commonRDot")
}

/* 
	NoOperation
	Btw, there is the BBCForth word "NOOP" with unknown meaning... 
 */
void commonNoOperation(void) {
	PSMSG_DEBUG("commonNoOperation")
}

/* Execute the statically defined word PLUS */
void commonStaticWord(void) {
	//privateExecuteWordByWordID(WORD_STATIC_PLUS);
	privateExecuteWordByWordID(WORD_STATIC_PLUSPLUS);
	PSMSG_DEBUG("commonStaticWord")
}

#ifdef EXCEPTION_SUPPORT
void exceptionAbort(void) {
	PSMSG_DEBUG("exceptionAbort")
}

void exceptionAbortQ(void) {
	PSMSG_DEBUG("exceptionAbortQ")
}

void exceptionCatch(void) {
	PSMSG_DEBUG("exceptionCatch")
}

void exceptionThrow(void) {
	PSMSG_DEBUG("exceptionThrow")
}

/* Quit with exception handling. Overrides standard implementation in forthWords */
void exceptionQuit(void) {
	PSMSG_DEBUG("exceptionQuit")
}
#endif


#ifdef FLOAT_SUPPORT
#if (FLOATSTD == FLOAT_ANS94) || (FLOATSTD == FLOAT_FORTH2012)
/* Floating-Point extension words */
void fpointDFStore(void) {
	PSMSG_DEBUG("fpointDFStore")
}

void fpointDFFetch(void) {
	PSMSG_DEBUG("fpointDFFetch")
}

void fpointDFAlign(void) {
	PSMSG_DEBUG("fpointDFAlign")
}

void fpointDFFieldColon(void) {
	PSMSG_DEBUG("fpointDFFieldColon")
}

void fpointDFloatPlus(void) {
	PSMSG_DEBUG("fpointDFloatPlus")
}

void fpointDFloatS(void) {
	PSMSG_DEBUG("fpointDFloatS")
}

void fpointFStarStar(void) {
	PSMSG_DEBUG("fpointFStarStar")
}

void fpointFDot(void) {
	PSMSG_DEBUG("fpointFDot")
}

void fpointFToS(void) {
	PSMSG_DEBUG("fpointFToS")
}

void fpointFAbs(void) {
	PSMSG_DEBUG("fpointFAbs")
}

void fpointFAcos(void) {
	PSMSG_DEBUG("fpointFAcos")
}

void fpointFAcosh(void) {
	PSMSG_DEBUG("fpointFAcosh")
}

void fpointFAlog(void) {
	PSMSG_DEBUG("fpointFAlog")
}

void fpointFAsin(void) {
	PSMSG_DEBUG("fpointFAsin")
}

void fpointAsinh(void) {
	PSMSG_DEBUG("fpointAsinh")
}

void fpointAtan(void) {
	PSMSG_DEBUG("fpointAtan")
}

void fpointAtan2(void) {
	PSMSG_DEBUG("fpointAtan2")
}

void fpointFAtanh(void) {
	PSMSG_DEBUG("fpointFAtanh")
}

void fpointFCos(void) {
	PSMSG_DEBUG("fpointFCos")
}

void fpointFCosh(void) {
	PSMSG_DEBUG("fpointFCosh")
}

void fpointFEDot(void) {
	PSMSG_DEBUG("fpointFEDot")
}

void fpointFExp(void) {
	PSMSG_DEBUG("fpointFExp")
}

void fpointFExpm1(void) {
	PSMSG_DEBUG("fpointFExpm1")
}

void fpointFFieldColon(void) {
	PSMSG_DEBUG("fpointFFieldColon")
}

void fpointFLn(void) {
	PSMSG_DEBUG("fpointFLn")
}

void fpointFLnp1(void) {
	PSMSG_DEBUG("fpointFLnp1")
}

void fpointFLog(void) {
	PSMSG_DEBUG("fpointFLog")
}

void fpointFSDot(void) {
	PSMSG_DEBUG("fpointFSDot")
}

void fpointFSin(void) {
	PSMSG_DEBUG("fpointFSin")
}

void fpointFSincos(void) {
	PSMSG_DEBUG("fpointFSincos")
}

void fpointFSinH(void) {
	PSMSG_DEBUG("fpointFSinH")
}

void fpointFSqrt(void) {
	PSMSG_DEBUG("fpointFSqrt")
}

void fpointFTan(void) {
	PSMSG_DEBUG("fpointFTan")
}

void fpointFTanh(void) {
	PSMSG_DEBUG("fpointFTanh")
}

void fpointFTrunc(void) {
	PSMSG_DEBUG("fpointFTrunc")
}

void fpointFValue(void) {
	PSMSG_DEBUG("fpointFValue")
}

void fpointFTilde(void) {
	PSMSG_DEBUG("fpointFTilde")
}

void fpointPrecision(void) {
	PSMSG_DEBUG("fpointPrecision")
}

void fpointSToF(void) {
	PSMSG_DEBUG("fpointSToF")
}

void fpointSetPrecision(void) {
	PSMSG_DEBUG("fpointSetPrecision")
}

void fpointSFStore(void) {
	PSMSG_DEBUG("fpointSFStore")
}

void fpointSFFetch(void) {
	PSMSG_DEBUG("fpointSFFetch")
}

void fpointSFAlign(void) {
	PSMSG_DEBUG("fpointSFAlign")
}

void fpointSFAligned(void) {
	PSMSG_DEBUG("fpointSFAligned")
}

void fpointSFFieldColon(void) {
	PSMSG_DEBUG("fpointSFFieldColon")
}

void fpointSFloatPlus(void) {
	PSMSG_DEBUG("fpointSFloatPlus")
}

void fpointSFloatS(void) {
	PSMSG_DEBUG("fpointSFloatS")
}

/* Floating-Point words */
void fpointToFloat(void) {
	PSMSG_DEBUG("fpointToFloat")
}

void fpointDToF(void) {
	PSMSG_DEBUG("fpointDToF")
}

void fpointFStore(void) {
	PSMSG_DEBUG("fpointFStore")
}

void fpointFMultiply(void) {
	PSMSG_DEBUG("fpointFMultiply")
}

void fpointFPlus(void) {
	PSMSG_DEBUG("fpointFPlus")
}

void fpointFMinus(void) {
	PSMSG_DEBUG("fpointFMinus")
}

void fpointFfpointFSlash(void) {
	PSMSG_DEBUG("fpointFfpointFSlash")
}

void fpointF0Less(void) {
	PSMSG_DEBUG("fpointF0Less")
}

void fpointF0Equal(void) {
	PSMSG_DEBUG("fpointF0Equal")
}

void fpointFLess(void) {
	PSMSG_DEBUG("fpointFLess")
}

void fpointFToD(void) {
	PSMSG_DEBUG("fpointFToD")
}

void fpointFFetch(void) {
	PSMSG_DEBUG("fpointFFetch")
}

void fpointtFAlign(void) {
	PSMSG_DEBUG("fpointtFAlign")
}

void fpointFAligned(void) {
	PSMSG_DEBUG("fpointFAligned")
}

void fpointFConstant(void) {
	PSMSG_DEBUG("fpointFConstant")
}

void fpointFDepth(void) {
	PSMSG_DEBUG("fpointFDepth")
}

void fpointFDrop(void) {
	PSMSG_DEBUG("fpointFDrop")
}

void fpointFDup(void) {
	PSMSG_DEBUG("fpointFDup")
}

void fpointFLiteral(void) {
	PSMSG_DEBUG("fpointFLiteral")
}

void fpointFloatPlus(void) {
	PSMSG_DEBUG("fpointFloatPlus")
}

void fpointFloatS(void) {
	PSMSG_DEBUG("fpointFloatS")
}

void fpointFloor(void) {
	PSMSG_DEBUG("fpointFloor")
}

void fpointFMax(void) {
	PSMSG_DEBUG("fpointFMax")
}

void fpointFMin(void) {
	PSMSG_DEBUG("fpointFMin")
}

void fpointFNegate(void) {
	PSMSG_DEBUG("fpointFNegate")
}

void fpointFOver(void) {
	PSMSG_DEBUG("fpointFOver")
}

void fpointFRot(void) {
	PSMSG_DEBUG("fpointFRot")
}

void fpointFRound(void) {
	PSMSG_DEBUG("fpointFRound")
}

void fpointFSwap(void) {
	PSMSG_DEBUG("fpointFSwap")
}

void fpointFVariable(void) {
	PSMSG_DEBUG("fpointFVariable")
}

void fpointRepresent(void) {
	PSMSG_DEBUG("fpointRepresent")
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
	PSMSG_DEBUG("fpointUFLoat")
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
	PSMSG_DEBUG("fpointInt")
}

void fpointFNegate(void) {
	PSMSG_DEBUG("fpointFNegate")
}

void fpointFSlash(void) {
	PSMSG_DEBUG("fpointFSlash")
}

void fpointFStar(void) {
	PSMSG_DEBUG("fpointFStar")
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
	PSMSG_DEBUG("fpointFPlus")
}

void fpointFMinus(void) {
	PSMSG_DEBUG("fpointFMinus")
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
		SMSG_SUCCESS(forthTasks[forthState.forthCurrentTask].printBuffer);
		CMSG_SUCCESS(CHAR_SPACE);
		forthTasks[forthState.forthCurrentTask].dataStackIndex = forthTasks[forthState.forthCurrentTask].dataStackIndex - forthTasks[forthState.forthCurrentTask].floatFloatIntRatio;
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_EMPTY;
	};
	PSMSG_DEBUG("fpointFDot")
}


#endif
#if (FLOATSTD == FLOAT_NELSON)
void fpointFDotS(void) {
	int ii = 0;
	int floatStackIndex = forthTasks[forthState.forthCurrentTask].floatStackIndex;
	int nn; /* < 32 */
	if (floatStackIndex) {
		nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, "[%d] ", floatStackIndex);
		SMSG_SUCCESS(forthTasks[forthState.forthCurrentTask].printBuffer);
		for (ii = 0; ii < floatStackIndex; ii++) {
			nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, "%f",
				forthTasks[forthState.forthCurrentTask].floatStackSpace[ii]);
			SMSG_SUCCESS(forthTasks[forthState.forthCurrentTask].printBuffer);
		};
		CMSG_SUCCESS(CHAR_CR);
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_EMPTY;
	};
	PSMSG_DEBUG("fpointDotF")
}

void fpointFDot(void) {
	PSMSG_DEBUG("fpoinFtDot")
}

void fpointNumFS(void) {
	PSMSG_DEBUG("fpointNumFS")
}

void fpointSetPrecision(void) {
	PSMSG_DEBUG("fpointSetPrecision")
}

void fpointPrecision(void) {
	PSMSG_DEBUG("fpointPrecision")
}

void fpointFSqrt(void) {
	PSMSG_DEBUG("fpointFSqrt")
}

void fpointPi(void) {
	PSMSG_DEBUG("fpointPi")
}

void fpointFVariable(void) {
	PSMSG_DEBUG("fpointFVariable")
}

void fpointFConstant(void) {
	PSMSG_DEBUG("fpointFConstant")
}

void fpointFLiteral(void) {
	PSMSG_DEBUG("fpointFLiteral")
}

void fpointAFLiteral(void) {
	PSMSG_DEBUG("fpointAFLiteral")
}

void fpointSFComma(void) {
	PSMSG_DEBUG("fpointSFComma")
}

void fpointSFloatPlus(void) {
	PSMSG_DEBUG("fpointSFloatPlus")
}

void fpointSFloats(void) {
	PSMSG_DEBUG("fpointSFloats")
}

void fpointSFloat(void) {
	PSMSG_DEBUG("fpointSFloat")
}

void fpointSFGreaterEqual(void) {
	PSMSG_DEBUG("fpointSFGreaterEqual")
}

void fpointSFLessEqual(void) {
	PSMSG_DEBUG("fpointSFLessEqual")
}

void fpointSFUnequal(void) {
	PSMSG_DEBUG("fpointSFUnequal")
}

void fpointSFGreater(void) {
	PSMSG_DEBUG("fpointSFGreater")
}

void fpointSFLess(void) {
	PSMSG_DEBUG("fpointSFLess")
}

void fpointSFEqual(void) {
	PSMSG_DEBUG("fpointSFEqual")
}

void fpointFg(void) {
	PSMSG_DEBUG("fpointFg")
}

void fpointFDepth(void) {
	PSMSG_DEBUG("fpointFDepth")
}

void fpointFP0(void) {
	PSMSG_DEBUG("fpointFP0")
}

void fpointFGreaterNumberQ(void) {
	PSMSG_DEBUG("fpointFGreaterNumberQ")
}

void fpointFToS(void) {
	PSMSG_DEBUG("fpointFToS")
}

void fpointSToF(void) {
	PSMSG_DEBUG("fpointSToF")
}

void fpointOneSlashF(void) {
	PSMSG_DEBUG("fpointOneSlashF")
}

void fpointFSlash(void) {
	PSMSG_DEBUG("fpointFSlash")
}

void fpointFStar(void) {
	PSMSG_DEBUG("fpointFStar")
}

void fpointFMinus(void) {
	PSMSG_DEBUG("fpointFMinus")
}

void fpointFPlus(void) {
	PSMSG_DEBUG("fpointFPlus")
}

void fpointF0Equal(void) {
	PSMSG_DEBUG("fpointF0Equal")
}

void fpointF0Less(void) {
	PSMSG_DEBUG("fpointF0Less")
}

void fpointFNegate(void) {
	PSMSG_DEBUG("fpointFNegate")
}

void fpointFswa(void) {
	PSMSG_DEBUG("fpointFswa")
}

void fpointFOver(void) {
	PSMSG_DEBUG("fpointFOver")
}

void fpointFDrop(void) {
	PSMSG_DEBUG("fpointFDrop")
}

void fpointFNip(void) {
	PSMSG_DEBUG("fpointFNip")
}

void fpointFDup(void) {
	PSMSG_DEBUG("fpointFDup")
}

void fpointSFStore(void) {
	PSMSG_DEBUG("fpointSFStore")
}

void fpointSFFetch(void) {
	PSMSG_DEBUG("fpointSFFetch")
}

void fpointSF(void) {
	PSMSG_DEBUG("fpointSF")
}

void fpointFPStore(void) {
	PSMSG_DEBUG("fpointFPStore")
}

void fpointFPFetch(void) {
	PSMSG_DEBUG("fpointFPFetch")
}

#endif
#if (FLOATSTD == FLOAT_TURBO)
/* 10 Floating-Point Stack Manipulation Words */
void fpointFDup(void) {
	PSMSG_DEBUG("fpointFDup")
}

void fpointFDrop(void) {
	PSMSG_DEBUG("fpointFDrop")
}

void fpointFSwap(void) {
	PSMSG_DEBUG("fpointFSwap")
}

void fpointFOver(void) {
	PSMSG_DEBUG("fpointFOver")
}

void fpointFPClear(void) {
	PSMSG_DEBUG("fpointFPClear")
}

/* 11 Math Words */
void fpointFPlus(void) {
	PSMSG_DEBUG("fpointFPlus")
}

void fpointFMinus(void) {
	PSMSG_DEBUG("fpointFMinus")
}

void fpointFStar(void) {
	PSMSG_DEBUG("fpointFStar")
}

void fpointFSlash(void) {
	PSMSG_DEBUG("fpointFSlash")
}

void fpointFNegate(void) {
	PSMSG_DEBUG("fpointFNegate")
}

void fpointFAbs(void) {
	PSMSG_DEBUG("fpointFAbs")
}

void fpointFloor(void) {
	PSMSG_DEBUG("fpointFloor")
}

void fpointCeil(void) {
	PSMSG_DEBUG("fpointCeil")
}

void fpointTrunc(void) {
	PSMSG_DEBUG("fpointTrunc")
}

void fpointFrac(void) {
	PSMSG_DEBUG("fpointFrac")
}

/* 12 Comparison Words */
void fpointFEqual(void) {
	PSMSG_DEBUG("fpointFEqual")
}

void fpointF0Equal(void) {
	PSMSG_DEBUG("fpointF0Equal")
}

void fpointFLess(void) {
	PSMSG_DEBUG("fpointFLess")
}

void fpointFGreater(void) {
	PSMSG_DEBUG("fpointFGreater")
}

void fpointF0Less(void) {
	PSMSG_DEBUG("fpointF0Less")
}

/* 13 Floating-Point Literal Handling */
void fpointToF(void) {
	PSMSG_DEBUG("fpointToF")
}

void fpointFLiteral(void) {
	PSMSG_DEBUG("fpointFLiteral")
}

void fpointFLit(void) {
	PSMSG_DEBUG("fpointFLit")
}

/* 14 Floating-Point Variables */
void fpointFVariable(void) {
	PSMSG_DEBUG("fpointFVariable")
}

void fpointFStore(void) {
	PSMSG_DEBUG("fpointFStore")
}

void fpointFFetch(void) {
	PSMSG_DEBUG("fpointFFetch")
}

/* 15 Floating-Point Constants */
void fpointFConstant(void) {
	PSMSG_DEBUG("fpointFConstant")
}

/* 16 Floating-Point Values */
void fpointFValue(void) {
	PSMSG_DEBUG("fpointFValue")
}

void fpointFTo(void) {
	PSMSG_DEBUG("fpointFTo")
}

void fpointPlusFTo(void) {
	PSMSG_DEBUG("fpointPlusFTo")
}

/* 17 Displaying Floating-Point Numbers */
void fpointFDot(void) {
	PSMSG_DEBUG("fpointFDot")
}

void fpointFFDpt(void) {
	PSMSG_DEBUG("fpointFFDpt")
}

void fpointFFPlusDot(void) {
	PSMSG_DEBUG("fpointFFPlusDot")
}

void fpointFFEDot(void) {
	PSMSG_DEBUG("fpointFFEDot")
}

void fpointFFEPlusDot(void) {
	PSMSG_DEBUG("fpointFFEPlusDot")
}

void fpointFFXDot(void) {
	PSMSG_DEBUG("fpointFFXDot")
}

void fpointFFXPlusDot(void) {
	PSMSG_DEBUG("fpointFFXPlusDot")
}

void fpointFDollarDot(void) {
	PSMSG_DEBUG("fpointFDollarDot")
}

void fpointDotFS(void) {
	PSMSG_DEBUG("fpointDotFS")
}

void fpointDotFDollar(void) {
	PSMSG_DEBUG("fpointDotFDollar")
}

/* 18 Floating-Point Number Conversion */
void fpointSToFP(void) {
	PSMSG_DEBUG("fpointSToFP")
}

void fpointFPToS(void) {
	PSMSG_DEBUG("fpointFPToS")
}

/* 19 Transcendental Constants and Conversion Functions */
void fpointPi(void) {
	PSMSG_DEBUG("fpointPi")
}

void fpointEulerE(void) {
	PSMSG_DEBUG("fpointEulerE")
}

void fpointRadDeg(void) {
	PSMSG_DEBUG("fpointRadDeg")
}

void fpointDegRad(void) {
	PSMSG_DEBUG("fpointDegRad")
}

void fpointToRad(void) {
	PSMSG_DEBUG("fpointToRad")
}

void fpointToDeg(void) {
	PSMSG_DEBUG("fpointToDeg")
}

/* 20 Transcendental Functions */
void fpointExp(void) {
	PSMSG_DEBUG("fpointExp")
}

void fpointLog(void) {
	PSMSG_DEBUG("fpointLog")
}

void fpointSqrt(void) {
	PSMSG_DEBUG("fpointSqrt")
}

void fpointCos(void) {
	PSMSG_DEBUG("fpointCos")
}

void fpointSin(void) {
	PSMSG_DEBUG("fpointSin")
}

void fpointTan(void) {
	PSMSG_DEBUG("fpointTan")
}

void fpointAtn(void) {
	PSMSG_DEBUG("fpointAtn")
}

void fpointPow(void) {
	PSMSG_DEBUG("fpointPow")
}

void fpointLog10(void) {
	PSMSG_DEBUG("fpointLog10")
}

void fpointExp10(void) {
	PSMSG_DEBUG("fpointExp10")
}

/* 21.3 Floating Point Error Handling */
void fpointQFPErr(void) {
	PSMSG_DEBUG("fpointQFPErr")
}

#endif
#endif

#if TASKINGSTANDARD == TASKINGSTD_FORTH83
void taskingF83Allot(void) {
	PSMSG_DEBUG("taskingF83Allot")
}

void taskingF83Create(void) {
	PSMSG_DEBUG("taskingF83Create")
}

void taskingF83Variable(void) {
	PSMSG_DEBUG("taskingF83Variable")
}

void taskingF83Defer(void) {
	PSMSG_DEBUG("taskingF83Defer")
}

void taskingF83Pause(void) {
	PSMSG_DEBUG("taskingF83Pause")
}

void taskingF83Restart(void) {
	PSMSG_DEBUG("taskingF83Restart")
}

void taskingF83Local(void) {
	PSMSG_DEBUG("taskingF83Local")
}

void taskingF83FetchLink(void) {
	PSMSG_DEBUG("taskingF83FetchLink")
}

void taskingF83StoreLink(void) {
	PSMSG_DEBUG("taskingF83StoreLink")
}

void taskingF83Sleep(void) {
	PSMSG_DEBUG("taskingF83Sleep")
}

void taskingF83Wake(void) {
	PSMSG_DEBUG("taskingF83Wake")
}

void taskingF83Stop(void) {
	PSMSG_DEBUG("taskingF83Stop")
}

void taskingF83Multi(void) {
	PSMSG_DEBUG("taskingF83Multi")
}

void taskingF83Single(void) {
	PSMSG_DEBUG("taskingF83Single")
}

void taskingF83Task(void) {
	PSMSG_DEBUG("taskingF83Task")
}

void taskingF83SetTask(void) {
	PSMSG_DEBUG("taskingF83SetTask")
}

void taskingF83Activate(void) {
	PSMSG_DEBUG("taskingF83Activate")
}

void taskingF83Background(void) {
	PSMSG_DEBUG("taskingF83Background")
}

#endif

#if TASKINGSTANDARD == TASKINGSTD_FPC
void taskingFPCPause(void) {
	PSMSG_DEBUG("taskingFPCPause")
}

void taskingFPCRestart(void) {
	PSMSG_DEBUG("taskingFPCRestart")
}

void taskingFPCLocal(void) {
	PSMSG_DEBUG("taskingFPCLocal")
}

void taskingFPCFetchLink(void) {
	PSMSG_DEBUG("taskingFPCFetchLink")
}

void taskingFPCStoreLink(void) {
	PSMSG_DEBUG("taskingFPCStoreLink")
}

void taskingFPCSleep(void) {
	PSMSG_DEBUG("taskingFPCSleep")
}

void taskingFPCWake(void) {
	PSMSG_DEBUG("taskingFPCWake")
}

void taskingFPCStop(void) {
	PSMSG_DEBUG("taskingFPCStop")
}

void taskingFPCSingle(void) {
	PSMSG_DEBUG("taskingFPCSingle")
}

void taskingFPCMulti(void) {
	PSMSG_DEBUG("taskingFPCMulti")
}

void taskingFPCTask(void) {
	PSMSG_DEBUG("taskingFPCTask")
}

void taskingFPCSetTask(void) {
	PSMSG_DEBUG("taskingFPCSetTask")
}

void taskingFPCActivate(void) {
	PSMSG_DEBUG("taskingFPCActivate")
}

void taskingFPCBackground(void) {
	PSMSG_DEBUG("taskingFPCBackground")
}

#endif

#if TASKINGSTANDARD == TASKINGSTD_VOLK
void taskingVolkActivate(void) {
	PSMSG_DEBUG("taskingVolkActivate")
}

void taskingVolkLock(void) {
	PSMSG_DEBUG("taskingVolkLock")
}

void taskingVolkMultiTask(void) {
	PSMSG_DEBUG("taskingVolkMultiTask")
}

void taskingVolkPass(void) {
	PSMSG_DEBUG("taskingVolkPass")
}

void taskingVolkPause(void) {
	PSMSG_DEBUG("taskingVolkPause")
}

void taskingVolkRendezvous(void) {
	PSMSG_DEBUG("taskingVolkRendezvous")
}

void taskingVolkSingleTask(void) {
	PSMSG_DEBUG("taskingVolkSingleTask")
}

void taskingVolkSleep(void) {
	PSMSG_DEBUG("taskingVolkSleep")
}

void taskingVolkStop(void) {
	PSMSG_DEBUG("taskingVolkStop")
}

void taskingVolkTask(void) {
	PSMSG_DEBUG("taskingVolkTask")
}

void taskingVolkTasks(void) {
	PSMSG_DEBUG("taskingVolkTasks")
}

void taskingVolkUnlock(void) {
	PSMSG_DEBUG("taskingVolkUnlock")
}

void taskingVolkWake(void) {
	PSMSG_DEBUG("taskingVolkWake")
}

void taskingVolkUPFetch(void) {
	PSMSG_DEBUG("taskingVolkUPFetch")
}

void taskingVolkUPStore(void) {
	PSMSG_DEBUG("taskingVolkUPStore")
}

#endif

#if TASKINGSTANDARD == TASKINGSTD_BIGFORTH
void taskingBigTaskerDotScr(void) {
	PSMSG_DEBUG("taskingBigTaskerDotScr")
}

void taskingBigStop(void) {
	PSMSG_DEBUG("taskingBigStop")
}

void taskingBigSingleTask(void) {
	PSMSG_DEBUG("taskingBigSingleTask")
}

void taskingBigMultiTask(void) {
	PSMSG_DEBUG("taskingBigMultiTask")
}

void taskingBigActivate(void) {
	PSMSG_DEBUG("taskingBigActivate")
}

void taskingBigPass(void) {
	PSMSG_DEBUG("taskingBigPass")
}

void taskingBigAutostart(void) {
	PSMSG_DEBUG("taskingBigAutostart")
}

void taskingBigSleep(void) {
	PSMSG_DEBUG("taskingBigSleep")
}

void taskingBigWake(void) {
	PSMSG_DEBUG("taskingBigWake")
}

void taskingBigTimerFetch(void) {
	PSMSG_DEBUG("taskingBigTimerFetch")
}

void taskingBigSyncTime(void) {
	PSMSG_DEBUG("taskingBigSyncTime")
}

void taskingBigSyncStore(void) {
	PSMSG_DEBUG("taskingBigSyncStore")
}

void taskingBigSync(void) {
	PSMSG_DEBUG("taskingBigSync")
}

void taskingBigTask(void) {
	PSMSG_DEBUG("taskingBigTask")
}

void taskingBigRendezvous(void) {
	PSMSG_DEBUG("taskingBigRendezvous")
}

void taskingBigSTick(void) {
	PSMSG_DEBUG("taskingBigSTick")
}

void taskingBigTasks(void) {
	PSMSG_DEBUG("taskingBigTasks")
}

void taskingBigClockTask(void) {
	PSMSG_DEBUG("taskingBigClockTask")
}

void taskingBigClock(void) {
	PSMSG_DEBUG("taskingBigClock")
}

void taskingBigWaitC(void) {
	PSMSG_DEBUG("taskingBigWaitC")
}

void taskingBigStartC(void) {
	PSMSG_DEBUG("taskingBigStartC")
}

void taskingBigNoClock(void) {
	PSMSG_DEBUG("taskingBigNoClock")
}

void taskingBigSetClock(void) {
	PSMSG_DEBUG("taskingBigSetClock")
}

void taskingBigPause(void) {
	PSMSG_DEBUG("taskingBigPause")
}

void taskingBigLock(void) {
	PSMSG_DEBUG("taskingBigLock")
}

void taskingBigUnlock(void) {
	PSMSG_DEBUG("taskingBigUnlock")
}

#endif

#if TASKINGSTANDARD == TASKINGSTD_RTF
void taskingRtfSingle(void) {
	PSMSG_DEBUG("taskingRtfSingle")
}

void taskingRtfMulti(void) {
	PSMSG_DEBUG("taskingRtfMulti")
}

void taskingRtfBackground(void) {
	PSMSG_DEBUG("taskingRtfBackground")
}

void taskingRtfWake(void) {
	PSMSG_DEBUG("taskingRtfWake")
}

void taskingRtfSleep(void) {
	PSMSG_DEBUG("taskingRtfSleep")
}

void taskingRtfStop(void) {
	PSMSG_DEBUG("taskingRtfStop")
}

void taskingRtfPause(void) {
	PSMSG_DEBUG("taskingRtfPause")
}

void taskingRtfActivate(void) {
	PSMSG_DEBUG("taskingRtfActivate")
}

#endif

#if TASKINGSTANDARD == TASKINGSTD_CAMEL
void taskingCamelSwitch(void) {
	PSMSG_DEBUG("taskingCamelSwitch")
}

void taskingCamelInitTask(void) {
	PSMSG_DEBUG("taskingCamelInitTask")
}

void taskingCamelDetach(void) {
	PSMSG_DEBUG("taskingCamelDetach")
}

void taskingCamelAttach(void) {
	PSMSG_DEBUG("taskingCamelAttach")
}

void taskingCamelPreempt(void) {
	PSMSG_DEBUG("taskingCamelPreempt")
}

#endif

#if TASKINGSTANDARD == TASKINGSTD_GNUFORTH
void taskingGnuNewTask(void) {
	PSMSG_DEBUG("taskingGnuNewTask")
}

void taskingGnuNewTask4(void) {
	PSMSG_DEBUG("taskingGnuNewTask4")
}

void taskingGnuActivate(void) {
	PSMSG_DEBUG("taskingGnuActivate")
}

void taskingGnuInitiate(void) {
	PSMSG_DEBUG("taskingGnuInitiate")
}

void taskingGnuPause(void) {
	PSMSG_DEBUG("taskingGnuPause")
}

void taskingGnuUValue(void) {
	PSMSG_DEBUG("taskingGnuUValue")
}

void taskingGnuStoreFetch(void) {
	PSMSG_DEBUG("taskingGnuStoreFetch")
}

void taskingGnuAddStoreFetch(void) {
	PSMSG_DEBUG("taskingGnuAddStoreFetch")
}

void taskingGnuQStoreFetch(void) {
	PSMSG_DEBUG("taskingGnuQStoreFetch")
}

void taskingGnuBarrier(void) {
	PSMSG_DEBUG("taskingGnuBarrier")
}

void taskingGnuFromEvent(void) {
	PSMSG_DEBUG("taskingGnuFromEvent")
}

void taskingGnuEventTo(void) {
	PSMSG_DEBUG("taskingGnuEventTo")
}

void taskingGnuEventColon(void) {
	PSMSG_DEBUG("taskingGnuEventColon")
}

void taskingGnuStop(void) {
	PSMSG_DEBUG("taskingGnuStop")
}

void taskingGnuQEvents(void) {
	PSMSG_DEBUG("taskingGnuQEvents")
}

void taskingGnuColonTo(void) {
	PSMSG_DEBUG("taskingGnuColonTo")
}

void taskingGnuSignal(void) {
	PSMSG_DEBUG("taskingGnuSignal")
}

void taskingGnuBroadcast(void) {
	PSMSG_DEBUG("taskingGnuBroadcast")
}

void taskingGnuWait(void) {
	PSMSG_DEBUG("taskingGnuWait")
}

void taskingGnuTimedwait(void) {
	PSMSG_DEBUG("taskingGnuTimedwait")
}

void taskingGnuLinkTask(void) {
	PSMSG_DEBUG("taskingGnuLinkTask")
}

void taskingGnuSleep(void) {
	PSMSG_DEBUG("taskingGnuSleep")
}

void taskingGnuWake(void) {
	PSMSG_DEBUG("taskingGnuWake")
}

void taskingGnuKill(void) {
	PSMSG_DEBUG("taskingGnuKil")
}

void taskingGnuParenPassParen(void) {
	PSMSG_DEBUG("taskingGnuParenPassParen")
}

void taskingGnuPass(void) {
	PSMSG_DEBUG("taskingGnuPass")
}

void taskingGnuSingleTaskingQ(void) {
	PSMSG_DEBUG("taskingGnuSingleTaskingQ")
}

void taskingGnuTaskKeyIor(void) {
	PSMSG_DEBUG("taskingGnuTaskKeyIor")
}

void taskingGnuTaskEmit(void) {
	PSMSG_DEBUG("taskingGnuTaskEmit")
}

void taskingGnuTaskType(void) {
	PSMSG_DEBUG("taskingGnuTaskType")
}

void taskingGnuTaskDeadline(void) {
	PSMSG_DEBUG("taskingGnuTaskDeadline")
}

#endif

#ifdef TESTING_SUPPORT
void testingTCurlyBracket(void) {
	PSMSG_DEBUG("testingTCurlyBracket")
}

void testingCurlyBracketT(void) {
	PSMSG_DEBUG("testingCurlyBracketT")
}
#endif

#endif
