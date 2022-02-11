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
		if ( sizeof(CELL) == CELLSIZE8 ) {
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
		if ( sizeof(CELL) == CELLSIZE8 ) {
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
void fpointDotF(void) {
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
#endif


#ifdef TASKING_SUPPORT
void taskingActivate(void) {
#if defined (__DEBUG__)
	printf("taskingActivate\n");
#endif
}

void taskingLock(void) {
#if defined (__DEBUG__)
	printf("taskingLock\n");
#endif
}

void taskingMultiTask(void) {
#if defined (__DEBUG__)
	printf("taskingMultiTask\n");
#endif
}

void taskingPass(void) {
#if defined (__DEBUG__)
	printf("taskingPass\n");
#endif
}

void taskingPause(void) {
#if defined (__DEBUG__)
	printf("taskingPause\n");
#endif
}

void taskingRendezvous(void) {
#if defined (__DEBUG__)
	printf("taskingRendezvous\n");
#endif
}

void taskingSingleTask(void) {
#if defined (__DEBUG__)
	printf("taskingSingleTask\n");
#endif
}

void taskingSleep(void) {
#if defined (__DEBUG__)
	printf("taskingSleep\n");
#endif
}

void taskingStop(void) {
#if defined (__DEBUG__)
	printf("taskingStop\n");
#endif
}

void taskingTask(void) {
#if defined (__DEBUG__)
	printf("taskingTask\n");
#endif
}

void taskingTasks(void) {
#if defined (__DEBUG__)
	printf("taskingTasks\n");
#endif
}

void taskingUnlock(void) {
#if defined (__DEBUG__)
	printf("taskingUnlock\n");
#endif
}

void taskingWake(void) {
#if defined (__DEBUG__)
	printf("taskingWake\n");
#endif
}

void taskingUPFetch(void) {
#if defined (__DEBUG__)
	printf("taskingUPFetch\n");
#endif
}

void taskingUPStore(void) {
#if defined (__DEBUG__)
	printf("taskingUPStore\n");
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

#endif
