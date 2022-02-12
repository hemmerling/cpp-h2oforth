#ifndef H2OCOMM2
#define H2OCOMM2

/* Declarations of FORTH words common to one or more FORTH standards & FORTH implementations */

/* Internal functions */
void privateMessageHandler(void) {
	int errorNumber = forthTasks[forthState.forthCurrentTask].errorNumber;
	int messageNumber = forthTasks[forthState.forthCurrentTask].messageNumber;
	int osErrorNumber = forthTasks[forthState.forthCurrentTask].osErrorNumber;
#if defined (__DEVELOP__)
	int sizeOfErrors = sizeof(forthErrors)/sizeof(forthErrors[0]);
	int sizeOfMessages = sizeof(forthMessages)/sizeof(forthMessages[0]);
	int sizeOfOsErrors = sizeof(forthOsErrors)/sizeof(forthOsErrors[0]);
#endif
	if(errorNumber 
#if defined (__DEVELOP__)
	   && ( errorNumber < sizeOfErrors)
#endif
	  ) {
		printf("? %s %s # %d\n", wordBuffer, 
	 			forthTasks[forthState.forthCurrentTask].forthErrors[forthTasks[forthState.forthCurrentTask].errorNumber].messageText,
				forthTasks[forthState.forthCurrentTask].errorNumber); 
	};
	if(messageNumber 
#if defined (__DEVELOP__)
	   && ( messageNumber < sizeOfMessages)
#endif
	   ) {
		printf("%s\n", 
				forthTasks[forthState.forthCurrentTask].forthMessages[forthTasks[forthState.forthCurrentTask].messageNumber].messageText);
	};
	if(osErrorNumber 
#if defined (__DEVELOP__)
   	   && ( osErrorNumber < sizeOfOsErrors)
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
		if ( sizeof(CELL_INTEGER) == CELLSIZE8 ) {
			printf("%llx ", forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex]);
		} else {
			printf("%x ", forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex]);
		}
	} else  {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_EMPTY;
	};
#if defined (__DEBUG__)
	printf("commonHexDot\n");
#endif
}

/* Display in octal base in the format of <.> */
void commonOctDot(void) {
	if (forthTasks[forthState.forthCurrentTask].dataStackIndex) {
		if ( sizeof(CELL_INTEGER) == CELLSIZE8 ) {
			printf("%llo ", forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex]);
		} else {
			printf("%o ", forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex]);
		};
	} else  {
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

void fpointFDotS(void) {
    int ii=0;
	int floatStackIndex = forthTasks[forthState.forthCurrentTask].floatStackIndex;
	if (floatStackIndex) {
		printf ("[%d] ",floatStackIndex);
		for(ii=0; ii<floatStackIndex; ii++) {
			printf ("%f ", forthTasks[forthState.forthCurrentTask].floatStackSpace[ii]);
		};
	printf("\n");
	} else  {
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
