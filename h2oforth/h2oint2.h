#ifndef H2OINT2
#define H2OINT2

/* Support for interactive applications with user input */

#ifdef READ_STATIC_INPUT
unsigned int staticInputCounter = 0;
int endOfStaticInput = TRUE;
const unsigned int numberOfStaticInputLines = sizeof(staticInputLines) / sizeof(staticInputLines[0]);

/* Read some static input from ( compiled ) ROM code, at start of input processing */
int readStaticInput(void) {
	int result = staticInputCounter < numberOfStaticInputLines;
	if (result) {
#if defined(__DEBUG2__)
		SMSG_ERROR_CR("Static Input");
#endif

#ifdef ARDUINO
		strcpy(ioTib, pgm_read_ptr(&staticInputLines[staticInputCounter]));
#else
		strcpy(ioTib, staticInputLines[staticInputCounter]);
#endif			

		SMSG_SUCCESS_CR(ioTib);
		staticInputCounter++;
	}
	else {
		if (endOfStaticInput) {
#if defined(__DEBUG2__)
			SMSG_ERROR_CR("End of Static Input");
#endif
		};
		endOfStaticInput = FALSE;
	};
	return(result);
}
#endif

/* Get input, fill the terminal input buffer (tib) */
void readInput(void) {
	int doTibPointer = 0;
	int doInput = 0;

	do {
		doInput = ioKey();
		/* TBD: Line editing for MSDOS, Windows */
#ifdef ECHO_KEYBOARD_INPUT
#if defined(ARDUINO) && defined(ARDUINO_SERIAL_MONITOR)
		ioEmit(doInput);
#else
		if (forthState.forthReadsKeyboard) {
			/* Just for keyboard input, echo the character */
			ioEmit(doInput);
		};
#endif
#endif
		if (doInput >= SPACE) {
			ioTib[doTibPointer++] = doInput;
		}
		else {
			/* Don't put control characters into the input buffer, but SPACE instead */
			ioTib[doTibPointer++] = SPACE;
		};
	} while ((doInput != CARRIAGE_RETURN_GETCH) && (doInput != LINE_FEED_GETCHAR) && (doInput != CTRLZ_GETCHAR) && (doInput != CTRLZ_EOF));

	ioTib[doTibPointer] = 0; /* Last character is 0, to make the array a valid C/C++ string */

	if (forthState.forthReadsKeyboard) {
		if (doInput == CTRLZ_GETCHAR) {
			forthState.forthIsExit = TRUE;
			//PSMSG_ERROR_CRCR("CTRLZ_GETCH - Exit");
			//PSMSG_ERROR_CRCR("H2oForth is terminating");
		};
	};

	if (forthState.forthReadsTerminal) {
		if ((doInput == CTRLZ_GETCHAR) || (doInput == CTRLZ_EOF)) {
			if (forthState.forthIsWaitingForKeyboard) {
				forthState.forthReadsKeyboard = TRUE;
				forthState.forthReadsTerminal = FALSE;
				if (forthState.forthIsVerbose) {
					PSMSG_VERBOSE("\nH2OForth - Wait for keyboard input(2)");
				};
			}
			else {
				forthState.forthIsExit = TRUE;
				//PSMSG_ERROR_CRCR("CTRLZ_GETCHAR - Exit");
				//PSMSG_ERROR_CRCR("H2oForth is terminating");
			};
		};

	};
}

#endif
