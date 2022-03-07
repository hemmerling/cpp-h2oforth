#ifndef H2OINT2
#define H2OINT2

/* Support for interactive applications with user input */

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
			//PSMSG_ERROR("CTRLZ_GETCH - Exit");
			//PSMSG_ERROR("H2oForth is terminating");
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
				//PSMSG_ERROR("CTRLZ_GETCHAR - Exit");
				//PSMSG_ERROR("H2oForth is terminating");
			};
		};

	};
}

#endif
