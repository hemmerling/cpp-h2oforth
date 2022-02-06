#ifndef H2OCOMM2
#define H2OCOMM2

/* Declarations of FORTH words common to one or more FORTH standards & FORTH implementations */

/* Primitives */
#ifdef FLOAT_SUPPORT
void fpointDotF(void) {
    int ii=0;
	int floatStackIndex = forthTasks[forthCurrentTask].floatStackIndex;
	if (floatStackIndex) {
		printf ("[%d] ",floatStackIndex);
		for(ii=0; ii<floatStackIndex; ii++) {
			printf ("%f ", forthTasks[forthCurrentTask].floatStackSpace[ii]);
		};
	printf("\n");
	} else  {
		printf("FloatStack empty!\n"); /* "Stack underflow" */
	};
#if defined (__DEBUG__)
	printf("fpointDotF\n");
#endif
}
#endif

void commonOctal(void) {
	forthTasks[forthCurrentTask].forthBase = OCTAL;
	forthTasks[forthCurrentTask].baseFormat = BASE_FORMAT_OCTAL;
#if defined (__DEBUG__)
	printf("commonOctal\n");
#endif
}
#endif

void privateErrorHandler(void) {
	/* TBD: Word should be listed */
	if(forthTasks[forthCurrentTask].errorNumber) {
		printf("? %d # %s \n", forthTasks[forthCurrentTask].errorNumber, 
	 			forthErrors[forthTasks[forthCurrentTask].errorNumber].errorMessage);
	};
}

void privateSetBaseFormat(void) {
	switch (forthTasks[forthCurrentTask].forthBase) {
     	case OCTAL:
			forthTasks[forthCurrentTask].baseFormat = BASE_FORMAT_OCTAL;
     		break;
    	case DECIMAL:
			forthTasks[forthCurrentTask].baseFormat = BASE_FORMAT_DECIMAL;
	    	break;
    	case HEX:
			forthTasks[forthCurrentTask].baseFormat = BASE_FORMAT_HEX;
	    	break;
    	default:
			forthTasks[forthCurrentTask].baseFormat = BASE_FORMAT_EMPTY;
	};
}

void privateSetBaseLFormat(void) {
	switch (forthTasks[forthCurrentTask].forthBase) {
     	case OCTAL:
			forthTasks[forthCurrentTask].baseFormat = BASE_FORMAT_LOCTAL;
     		break;
    	case DECIMAL:
			forthTasks[forthCurrentTask].baseFormat = BASE_FORMAT_LDECIMAL;
	    	break;
    	case HEX:
			forthTasks[forthCurrentTask].baseFormat = BASE_FORMAT_LHEX;
	    	break;
    	default:
			forthTasks[forthCurrentTask].baseFormat = BASE_FORMAT_EMPTY;
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
	if (forthTasks[forthCurrentTask].dataStackIndex) {
		printf("%o ", forthTasks[forthCurrentTask].dataStackSpace[--forthTasks[forthCurrentTask].dataStackIndex]);
	};
#if defined (__DEBUG__)
	printf("bbc79OctDot\n");
#endif
}
