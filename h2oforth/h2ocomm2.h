#ifndef H2OCOMM2
#define H2OCOMM2

/* Declarations of FORTH words common to one or more FORTH standards & FORTH implementations */

/* Primitives */
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
