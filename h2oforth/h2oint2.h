#ifndef H2OINT2
#define H2OINT2

/*  Get input, fill the terminal input buffer (tib) */
void readInput(void) {
	int doTibPointer = 0;
	int doInput = 0;

	do {
		doInput = ioKey();
		/* TBD: Line editing for MSDOS, Windows */
		ioEmit(doInput);
		if (doInput >= SPACE) {
			ioTib[doTibPointer++] = doInput;
		}
		else {
			/* Don't put control characters into the input buffer, but SPACE instead */
			ioTib[doTibPointer++] = SPACE;
		};
	} while ((doInput != CARRIAGE_RETURN_GETCH) && (doInput != LINE_FEED_GETCHAR) && (doInput != CTRLZ_GETCHAR) && (doInput != CTRLZ_EOF));

	ioTib[doTibPointer] = 0; /* Last character is 0, to make the array a valid C/C++ string */

	if (forthReadsKeyboard) {
		if (doInput == CTRLZ_GETCHAR) {
			forthIsExit = TRUE;
			//printf("CTRLZ_GETCH - Exit\n");
			//printf("H2oForth is terminating\n");
		};
	};

	if (forthReadsTerminal) {
		if ((doInput == CTRLZ_GETCHAR) || (doInput == CTRLZ_EOF)) {
			if (forthIsWaitingForKeyboard) {
				forthReadsKeyboard = TRUE;
				forthReadsTerminal = FALSE;
        		if (forthIsVerbose){
					printf("\nH2OForth - Wait for keyboard input(2)\n");
				};
			}
			else {
				forthIsExit = TRUE;
				//printf("CTRLZ_GETCHAR - Exit\n");
				//printf("H2oForth is terminating\n");
			};
		};

	};
} 

#endif
