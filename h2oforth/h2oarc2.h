#ifndef H2OARC2
#define H2OARC2

/* Architecture detection & configuration & architecture-specific code  */

/* key  ( – x )       Read key stroke as ASCII character */
unsigned int ioKey(void) {
#if defined(__MSDOS__) || defined(__WINDOWS__)
	/* MSDOS, Windows */
	if (forthState.forthReadsKeyboard) {
		/*
		   This generic os function reads a single character stroke from the keyboard.
		   Characters are not echoed.
		*/
		return(_GETCH());
	}
	else {
		/*
			This generic os function reads characters from keyboard until the user presses the RETURN key.
			Characters are echoed on the screen during input.
		 */
		return(GETCHAR());
	};
#else
	/*
		This generic Arduino Firmware function
		reads characters from keyboard until the user presses the RETURN key.
		Characters are not echoed.
	 */
#ifdef ARDUINO
	unsigned int result;
	int nn; /* < 32 */
#if (ARDUINO_TERMINAL_POLLING == TPOLLING1)
	do {
		result = _GETCH();
	} while (result == -1);
#else
	while (CHAR_AVAILABLE <= 0) { ; };
	result = _GETCH();
#endif
	//nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, "\ninput = %d\n\n", result);
	//SMSG_DEBUG(forthTasks[forthState.forthCurrentTask].printBuffer);
	//SMSG_DEBUG("\nTest\n");
	return(result);
#else
	 /* Linux, bare-metall microcontroller systems .. */
	 /* This generic os function reads characters from keyboard
		until the user presses the RETURN key */
	return(GETCHAR());
#endif
#endif
}

/* emit         ( x – )       Print low byte of x as an ASCII character  */
void ioEmit(unsigned int varByte) {
	if (forthState.forthReadsKeyboard) {
#if defined (__WATCOMC__)
		/* With WATCOMC, console input is not echoed, if written to standard output by putchar() */
		_PUTCH((char)varByte);
#else
		/*Console input is written to console output or to standard output */
		_PUTCH((char)varByte);
#endif
	}
	else {
		PUTCHAR((char)varByte);
	};
}

/* p! - Store x at ( Intel 80x86 ) Port */
void ioStorePort(unsigned long varPortAddress, unsigned int varValue) {
	int locPort = (int)varPortAddress;
#if defined(__TURBOC__) || defined(__BORLANDC__)
#if (__BORLANDC__ < 0x0550)
#if !defined(__WIN32__)
	/* Borland C/C++ 5.02 is the latest version with DOS support */
	outport(locPort, varValue);
#endif
#else
	/* Borland C/C++ 5.5.2 and newer lack of DOS support */
#endif 
#endif
#if defined (_MSC_VER) && !defined(_WIN32)
	_outpw(locPort, varValue);
#endif
#if defined (__DJGPP__)
	outportw(locPort, varValue);
#endif
#if defined (__WATCOMC__)
	outpw(locPort, varValue);
#endif
#if defined (__DMC__) || defined (__SC__) || defined (__ZTC__)
	outpw(locPort, varValue);
#endif
}

/* p@ - Get pointer from ( Intel 80x86 ) port */
unsigned int ioGetPort(unsigned long varPortAddress) {
	int locPort = (int)varPortAddress;
#if defined(__BORLANDC__) || defined(__TURBOC__)
#if (__BORLANDC__ < 0x0550) || defined(__TURBOC__) 
#if !defined(__WIN32__)
	/* Borland C/C++ 5.02 is the latest version with DOS support */
	return(inport(locPort));
#endif
#else
	/* Borland C/C++ 5.5.2 and newer lack of DOS support */
#endif
#endif
#if defined (_MSC_VER) && !defined(_WIN32)
	return(_inpw(locPort));
#endif
#if defined (__DJGPP__)
	return(inportw(locPort));
#endif
#if defined (__WATCOMC__)
	return(inpw(locPort));
#endif
#if defined (__DMC__) || defined (__SC__) || defined (__ZTC__)
	return(inpw(locPort));
#endif
	return(0);
}

#if !defined(ARDUINO) && !defined (__DJGPP__) && !defined (__WATCOMC__)
/* Delay ( Arduino Firmware ) */
void delay(unsigned long) {
}
#endif

#ifndef ARDUINO
/* Setup Port ( Arduino Firmware ) */
void pinMode(unsigned int pin, unsigned int ioDirection) {
}

/* Write digital Data to Port ( Arduino Firmware ) */
void digitalWrite(unsigned int pin, unsigned int value) {
}

/* Read digital Data from Port ( Arduino Firmware ) */
unsigned int digitalRead(unsigned int pin) {
	return(0);
}

/* Analog Reference ( Arduino Firmware ) */
void analogReference(unsigned int type) {
}

/* Write analog Data to Port ( Arduino Firmware ) */
void analogWrite(unsigned int pin, unsigned int value) {
}

/* Write analog Data to Port ( Arduino Firmware ) */
unsigned int analogRead(unsigned int pin) {
	return(0);
}
#endif

/* Setup Terminal ( on Arduino,... ) */
void setupTerminal(unsigned int speed, unsigned int config) {
#ifdef ARDUINO
	Serial.begin(speed, config);
	while (!Serial); /* Wait until the serial port is available */
#endif
}

#endif
