#ifndef H2OCOMM2
#define H2OCOMM2

/* Declarations of FORTH words common to one or more FORTH standards & FORTH implementations */

/* Primitives */
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

void commonOctal(void) {
	forthTasks[forthState.forthCurrentTask].forthBase = OCTAL;
	forthTasks[forthState.forthCurrentTask].baseFormat = BASE_FORMAT_OCTAL;
#if defined (__DEBUG__)
	printf("commonOctal\n");
#endif
}
#endif

void privateMessageHandler(void) {
	int errorNumber = forthTasks[forthState.forthCurrentTask].errorNumber;
	int messageNumber = forthTasks[forthState.forthCurrentTask].messageNumber;
	int osErrorNumber = forthTasks[forthState.forthCurrentTask].osErrorNumber;
#if defined (__DEBUG__)
	int sizeOfErrors = sizeof(forthErrors)/sizeof(forthErrors[0]);
	int sizeOfMessages = sizeof(forthMessages)/sizeof(forthMessages[0]);
	int sizeOfOsErrors = sizeof(forthOsErrors)/sizeof(forthOsErrors[0]);
#endif
	if(errorNumber 
#if defined (__DEBUG__)
	   && ( errorNumber < sizeOfErrors)
#endif
	  ) {
		printf("? %s %s # %d\n", wordBuffer, 
	 			forthTasks[forthState.forthCurrentTask].forthErrors[forthTasks[forthState.forthCurrentTask].errorNumber].messageText,
				forthTasks[forthState.forthCurrentTask].errorNumber); 
	};
	if(messageNumber 
#if defined (__DEBUG__)
	   && ( messageNumber < sizeOfMessages)
#endif
	   ) {
		printf("%s\n", 
				forthTasks[forthState.forthCurrentTask].forthMessages[forthTasks[forthState.forthCurrentTask].messageNumber].messageText);
	};
	if(osErrorNumber 
#if defined (__DEBUG__)
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

/* Display in hexadecimal base in the format of <.> */
void bbc79HexDot(void) {
	bbc79HDot();
#if defined (__DEBUG__)
	printf("bbc79HexDot\n");
#endif
}

/* Display in octal base in the format of <.> */
void bbc79OctDot(void) {
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
	printf("bbc79OctDot\n");
#endif
}
