#if defined (_MSC_VER)
#define _CRT_SECURE_NO_WARNINGS
#endif

#if defined(AVR_ADK) || defined(AVR_BT) || defined(AVR_DUEMILANOVE) || \
    defined(AVR_ESPLORA) || defined(AVR_ETHERNET) || defined(AVR_FIO) || \
    defined(AVR_GEMMA) || defined(AVR_LEONARDO) || defined(AVR_LILYPAD) || \
    defined(AVR_LILYPAD_USB) || defined(AVR_MEGA) || defined(AVR_MEGA2560) || \
    defined(AVR_MICRO) || defined(AVR_MINI) || defined(AVR_NANO) || \
    defined(AVR_NG) || defined(AVR_PRO) || defined(AVR_ROBOT_CONTROL) || \
    defined(AVR_ROBOT_MOTOR) || defined(AVR_UNO) || defined(AVR_YUN)
#define ARDUINO
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h> 
#include <fcntl.h>
#include <limits.h>
#include <setjmp.h>
#include <math.h>

#ifdef ARDUINO
#include  <Arduino.h> 
#include <avr/pgmspace.h>
#else
#include <io.h>
#include <conio.h>
#include <sys/stat.h> 
#define PROGMEM
#endif

#if defined(__MINGW32__)
#include <direct.h>
#else
#ifndef ARDUINO
#include <dos.h>
#endif
#endif

#include "h2oforth.h"

/* Architecture detection & configuration & architecture-specific code  */
#include "h2oarc1.h"

#if defined(SYSTEM_WITH_FILEIO)
/* Support for command line arguments / command line parameters */
#include "h2oarg1.h"
#endif

//#ifdef SYSTEM_INTERACTIVE
/* Support for interactive applications with user input */
#include "h2oint1.h"
//#endif

/******** State of the FORTH System ********************/

/* Typedef */

typedef struct _forthState {
	int forthIsWaitingForParameter;
	int forthIsWaitingForKeyboard;
	int forthReadsTerminal;
	int forthReadsKeyboard;
	int forthIsVerbose;
	int forthIsExit;
	int forthCurrentTask;
} typedef_forthState;

/* Variables */
typedef_forthState forthState;

/* tib = Terminal input buffer, where input is parsed from */
char ioTib[MAX_INPUTBUFFER];

/* Word buffer */
char wordBuffer[MAX_INPUTBUFFER];

/********Global FORTH Variables ********************/

#undef FORTHSTD_MINIMAL
#undef FORTHSTD_BASIC
#undef FORTHSTD_FORTH79
#undef FORTHSTD_FORTH83
#undef FORTHSTD_ANS94
#undef FORTHSTD_FORTH2012

#if H2O_FORTH_PRIMITIVES == AIM65_FORTH
#define FORTHSTANDARD FORTHSTD_FIG
#include "h2oaim1.h"
#endif
#if H2O_FORTH_PRIMITIVES == ATARICOINUP_FORTH
#define FORTHSTANDARD FORTHSTD_FIG
#include "h2ocoin1.h"
#endif
#if H2O_FORTH_PRIMITIVES == BBCMICRO_FORTH
#define FORTHSTANDARD FORTHSTD_FORTH79
#include "h2obbc1.h"
#endif
#if H2O_FORTH_PRIMITIVES == BIG_FORTH
#define FORTHSTANDARD FORTHSTD_ANS94
#include "h2obig1.h"
#endif
#if H2O_FORTH_PRIMITIVES == CAMEL_FORTH
#define FORTHSTANDARD FORTHSTD_BASIC
#include "h2ocam1.h"
#endif
#if H2O_FORTH_PRIMITIVES == COLOR_FORTH
#define FORTHSTANDARD FORTHSTD_MINIMAL
#include "h2ocol1.h"
#endif
#if H2O_FORTH_PRIMITIVES == E_FORTH
#define FORTHSTANDARD FORTHSTD_BASIC
#include "h2oe1.h"
#endif
#if H2O_FORTH_PRIMITIVES == FIG_FORTH
#define FORTHSTANDARD FORTHSTD_FIG
#include "h2ofig1.h"
#endif

#if H2O_FORTH_PRIMITIVES == FORTH79 ||\
        H2O_FORTH_PRIMITIVES == FORTH79_REQ_DBL_ASM_EXP_REF ||\
        H2O_FORTH_PRIMITIVES == FORTH79_NUC_INTERP_COMP
#define FORTHSTANDARD FORTHSTD_FORTH79
#include "h2osnin1.h"
#endif

#if H2O_FORTH_PRIMITIVES == FPC_FORTH
#define FORTHSTANDARD FORTHSTD_FORTH83
#include "h2ofpc1.h"
#endif
#if H2O_FORTH_PRIMITIVES == GNU_FORTH
#define FORTHSTANDARD FORTHSTD_ANS94
#include "h2ognu1.h"
#endif
#if H2O_FORTH_PRIMITIVES == HECTOR_FORTH
#define FORTHSTANDARD FORTHSTD_FIG
#include "h2ohec1.h"
#endif
#if H2O_FORTH_PRIMITIVES == JUPITER_FORTH
#define FORTHSTANDARD FORTHSTD_BASIC
#include "h2ojup1.h"
#endif
#if H2O_FORTH_PRIMITIVES == KNAGGSBENNET_FORTH
#define FORTHSTANDARD FORTHSTD_BASIC
#include "h2oknbe1.h"
#endif

#if (H2O_FORTH_PRIMITIVES == LAXONPERRY_FORTH) || \
        (H2O_FORTH_PRIMITIVES == LAXONPERRY_PC_FORTH) || \
        (H2O_FORTH_PRIMITIVES == LAXONPERRY_CPM_FORTH) || \
        (H2O_FORTH_PRIMITIVES == LAXONPERRY_CPM68K_FORTH)
#define FORTHSTANDARD FORTHSTD_FORTH83
#include "h2olape1.h"
#endif

#if H2O_FORTH_PRIMITIVES == LMI_FORTH || \
        H2O_FORTH_PRIMITIVES == LMI_MSDOS_FORTH || \
        H2O_FORTH_PRIMITIVES == LMI_WIN_FORTH
#define FORTHSTANDARD FORTHSTD_FORTH83
#include "h2olmi1.h"
#endif

#if H2O_FORTH_PRIMITIVES == MECRISP_FORTH
#define FORTHSTANDARD FORTHSTD_BASIC
#include "h2omec1.h"
#endif
#if H2O_FORTH_PRIMITIVES == MVP_FORTH
#define FORTHSTANDARD FORTHSTD_FORTH83
#include "h2omvp1.h"
#endif

#if H2O_FORTH_PRIMITIVES == NELSON_FORTH || \
        H2O_FORTH_PRIMITIVES == NELSON_ESP_FORTH || \
        H2O_FORTH_PRIMITIVES == NELSON_UE_FORTH
#define FORTHSTANDARD FORTHSTD_BASIC
#include "h2onels1.h"
//#include "h2onesp1.h"
//#include "h2onue1.h"
#endif

#if H2O_FORTH_PRIMITIVES == PATEL_FORTH
#define FORTHSTANDARD FORTHSTD_MINIMAL
#include "h2opat1.h"
#endif
#if H2O_FORTH_PRIMITIVES == Q_FORTH
#define FORTHSTANDARD FORTHSTD_BASIC
#include "h2oq1.h"
#endif
#if H2O_FORTH_PRIMITIVES == RCAMICRO_FORTH
#define FORTHSTANDARD FORTHSTD_BASIC
#include "h2orca1.h"
#endif
#if H2O_FORTH_PRIMITIVES == RSC_FORTH
#define FORTHSTANDARD FORTHSTD_FIG
#include "h2orsc1.h"
#endif
#if H2O_FORTH_PRIMITIVES == SECTOR_FORTH
#define FORTHSTANDARD FORTHSTD_MINIMAL
#include "h2osec1.h"
#endif
#if H2O_FORTH_PRIMITIVES == TERSE_FORTH
#define FORTHSTANDARD FORTHSTD_BASIC
#include "h2oter1.h"
#endif

#if H2O_FORTH_PRIMITIVES == VOLK_FORTH || \
    H2O_FORTH_PRIMITIVES == VOLK_C64_FORTH || \
        H2O_FORTH_PRIMITIVES == VOLK_ST_FORTH || \
        H2O_FORTH_PRIMITIVES == VOLK_CPM_FORTH || \
        H2O_FORTH_PRIMITIVES == VOLK_PC_FORTH
#define FORTHSTANDARD FORTHSTD_FORTH83
#include "h2ovolk1.h"
// #include "h2ov1c64.h"
// #include "h2ov1st.h"
// #include "h2ov1cpm.h"
// #include "h2ov1pc.h"
#endif

#if (H2O_FORTH_PRIMITIVES == WIN32_FORTH)
#define FORTHSTANDARD FORTHSTD_ANS94
#include "h2owin1.h"
#endif

/* Messages and error messages */
#include "h2omsg1.h"

/* Static FORTH source code, to be processed at startup, before interactive input processing */
#include "h2osrc1.h"

#ifdef COMMON_FORTH_WORDS
#include "h2ocomm1.h"
#endif

/********Global Constants *****************************/

static const PROGMEM char aListofBinary[] = { '-', '0', '1', ',', '.' };
static const PROGMEM char aListofOctal[] = { '-', '0', '1', '2', '3', '4', '5', '6', '7', ',', '.' };
static const PROGMEM char aListofDecimal[] = { '-', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ',', '.' };
static const PROGMEM char aListofHex[] = { '-', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', ',', '.' };
static const PROGMEM char aListOfAllBases[NUMBERTABLE_SIZE] = { '-', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
	'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
#ifdef LOWERCASE_BASE_SUPPORT
	'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
#endif
	 ',', '.' };
static const PROGMEM char aListofFloat[] = { '-', '+', '.', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'E', ',' };
static const PROGMEM char aListofExponent[] = { '-', '+', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ',' };

/******** Typedefs ********************/

/*
		FORTH Task.
		Designed to avoid "flexible array member not at end of struct"
		and "invalid use of flexible array member"
*/
typedef  struct _forthTask {
	char* baseFormat;
	CELL_INTEGER forthBase; /* instead of int, for safety if somebody tries to store a BASE by ! instead of C! */
	unsigned short int forthMode;
	unsigned short int errorNumber;
	unsigned short int messageNumber;
	unsigned short int osErrorNumber;
	unsigned int dataStackIndex;
	unsigned int returnStackIndex;
	WORDID definitionIndex;
	WORDID definitionSpaceIndex;
	WORDID instructionPointer;
	WORDID currentInstructionAddress; /* "w" */
	CELL_INTEGER dataStackSpace[MAX_DATASTACK];
	void* returnStackSpace[MAX_RETURNSTACK];
	char printBuffer[MAX_PRINTBUFFER];
#ifdef SYSTEM_WITH_FILEIO
	/* Block buffer, used to read Blocks files, by command line parameter support functions */
	char ioBlockBuffer[MAX_BLOCKBUFFER];
#endif
	typedef_forthWordList* forthWordLists;
	typedef_forthWord* forthDefinitionWords;
	WORDID* forthDefinitionSpace;
	typedef_forthWord* forthDefinitionSpace2;
	typedef_forthMessage* forthErrors;
	typedef_forthMessage* forthMessages;
	typedef_forthMessage* forthOsErrors;
#ifdef FLOAT_SUPPORT
#ifdef FLOAT_ON_DATASTACK
	unsigned int floatFloatIntRatio;
#endif
	unsigned int floatStackIndex;
	CELL_FLOAT floatStackSpace[MAX_FLOATSTACK];
#endif
} typedef_forthTask;

/* Variables */
typedef_forthTask forthTasks[MAX_FORTHTASKS];

static const WORDID commonWordListSize = sizeof(commonWords) / sizeof(commonWords[0]);
#ifdef EXCEPTION_SUPPORT
static const WORDID exceptionWordListSize = sizeof(exceptionWords) / sizeof(exceptionWords[0]);
#endif
#ifdef FLOAT_SUPPORT
static const WORDID fpointListSize = sizeof(fpointWords) / sizeof(fpointWords[0]);
#endif
#if ((TASKINGSTANDARD == TASKINGSTD_VOLK)) || ( TASKINGSTANDARD == TASKINGSTD_FORTH83 )
static const WORDID taskingListSize = sizeof(taskingWords) / sizeof(taskingWords[0]);
#endif       
#ifdef TESTING_SUPPORT
static const WORDID testingWordListSize = sizeof(testingWords) / sizeof(testingWords[0]);
#endif
static const WORDID forthWordListSize = sizeof(forthWords) / sizeof(forthWords[0]);

static const typedef_forthWordList forthWordLists[] = {
		{(WORDID*)&commonWordListSize, commonWords}
#ifdef EXCEPTION_SUPPORT
		, {(WORDID int*) & exceptionWordListSize, exceptionWords}
#endif
#ifdef FLOAT_SUPPORT
		, {(WORDID*)&fpointListSize, fpointWords}
#endif
#if ((TASKINGSTANDARD == TASKINGSTD_VOLK)) || ( TASKINGSTANDARD == TASKINGSTD_FORTH83 )
		, {(WORDID*)&taskingListSize, taskingWords}
#endif       
#ifdef TESTING_SUPPORT
		, {(WORDID*)&testingWordListSize, testingWords}
#endif
		, { (WORDID*)&forthTasks[forthState.forthCurrentTask].definitionIndex, forthDefinitionWords}
		, { (WORDID*)&forthWordListSize, forthWords}
};

#if defined(ARDUINO) && defined(ARDUINO_SWITCH_LIGHT)
/* Switch LED on and off */
int ledSwitch = 0;
#endif

/******** FORTH Primitives ********************/

#include "h2oarc2.h"

#if H2O_FORTH_PRIMITIVES == AIM65_FORTH
#include "h2oaim2.h"
#endif
#if H2O_FORTH_PRIMITIVES == ATARICOINUP_FORTH
#include "h2ocoin2.h"
#endif
#if H2O_FORTH_PRIMITIVES == BBCMICRO_FORTH
#include "h2obbc2.h"
#endif
#if H2O_FORTH_PRIMITIVES == BIG_FORTH
#include "h2obig2.h"
#endif
#if H2O_FORTH_PRIMITIVES == CAMEL_FORTH
#include "h2ocam2.h"
#endif
#if H2O_FORTH_PRIMITIVES == COLOR_FORTH
#include "h2ocol2.h"
#endif
#if H2O_FORTH_PRIMITIVES == E_FORTH
#include "h2oe2.h"
#endif
#if H2O_FORTH_PRIMITIVES == FIG_FORTH
#include "h2ofig2.h"
#endif

#if H2O_FORTH_PRIMITIVES == FORTH79 ||\
        H2O_FORTH_PRIMITIVES == FORTH79_REQ_DBL_ASM_EXP_REF ||\
        H2O_FORTH_PRIMITIVES == FORTH79_NUC_INTERP_COMP
#include "h2osnin2.h"

#endif
#if H2O_FORTH_PRIMITIVES == FPC_FORTH
#include "h2ofpc2.h"
#endif
#if H2O_FORTH_PRIMITIVES == GNU_FORTH
#include "h2ognu2.h"
#endif
#if H2O_FORTH_PRIMITIVES == HECTOR_FORTH
#include "h2ohec2.h"
#endif
#if H2O_FORTH_PRIMITIVES == JUPITER_FORTH
#include "h2ojup2.h"
#endif
#if H2O_FORTH_PRIMITIVES == KNAGGSBENNET_FORTH
#include "h2oknbe2.h"
#endif

#if (H2O_FORTH_PRIMITIVES == LAXONPERRY_FORTH) || \
        (H2O_FORTH_PRIMITIVES == LAXONPERRY_PC_FORTH) || \
        (H2O_FORTH_PRIMITIVES == LAXONPERRY_CPM_FORTH) || \
        (H2O_FORTH_PRIMITIVES == LAXONPERRY_CPM68K_FORTH)
#include "h2olape2.h"
#endif

#if H2O_FORTH_PRIMITIVES == LMI_FORTH || \
        H2O_FORTH_PRIMITIVES == LMI_MSDOS_FORTH || \
        H2O_FORTH_PRIMITIVES == LMI_WIN_FORTH
#define FORTHSTANDARD FORTHSTD_FORTH83
#include "h2olmi2.h"
#endif

#if H2O_FORTH_PRIMITIVES == MECRISP_FORTH
#include "h2omec2.h"
#endif
#if H2O_FORTH_PRIMITIVES == MVP_FORTH
#include "h2omvp2.h"
#endif

#if H2O_FORTH_PRIMITIVES == NELSON_FORTH || \
        H2O_FORTH_PRIMITIVES == NELSON_ESP_FORTH || \
        H2O_FORTH_PRIMITIVES == NELSON_UE_FORTH
#include "h2onels2.h"
#endif

#if H2O_FORTH_PRIMITIVES == PATEL_FORTH
#include "h2opat2.h"
#endif
#if H2O_FORTH_PRIMITIVES == Q_FORTH
#include "h2oq2.h"
#endif
#if H2O_FORTH_PRIMITIVES == RCAMICRO_FORTH
#include "h2orca2.h"
#endif
#if H2O_FORTH_PRIMITIVES == RSC_FORTH
#include "h2orsc2.h"
#endif
#if H2O_FORTH_PRIMITIVES == SECTOR_FORTH
#include "h2osec2.h"
#endif
#if H2O_FORTH_PRIMITIVES == TERSE_FORTH
#include "h2oter2.h"
#endif
#if (H2O_FORTH_PRIMITIVES == VOLK_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_C64_FORTH) || \
    (H2O_FORTH_PRIMITIVES == VOLK_ST_FORTH) || \
        (H2O_FORTH_PRIMITIVES == VOLK_CPM_FORTH) || \
        (H2O_FORTH_PRIMITIVES == VOLK_PC_FORTH)
#include "h2ovolk2.h"
#endif
#if (H2O_FORTH_PRIMITIVES == WIN32_FORTH)
#include "h2owin2.h"
#endif

#ifdef COMMON_FORTH_WORDS
#include "h2ocomm2.h"
#endif

/******** Command line argument checking *******/

#if defined(SYSTEM_WITH_FILEIO) 
#include "h2oarg2.h"
#endif

/**************************/

/* Check if word is a Single Precision Integer */
int isSPInteger(void) {
	int result = FALSE;
	int aWordIndex = 0;
	int lenWordBuffer = (int)strlen(wordBuffer);
	char* aListPointer = (char*)NULL;
	int lenAllowedCharactersBuffer = 0;

	switch (forthTasks[forthState.forthCurrentTask].forthBase) {
	case BINARY:
		aListPointer = (char*)aListofBinary;
		lenAllowedCharactersBuffer = sizeof(aListofBinary);
		break;
	case OCTAL:
		aListPointer = (char*)aListofOctal;
		lenAllowedCharactersBuffer = sizeof(aListofOctal);
		break;
	case DECIMAL:
		aListPointer = (char*)aListofDecimal;
		lenAllowedCharactersBuffer = sizeof(aListofDecimal);
		break;
	case HEX:
		aListPointer = (char*)aListofHex;
		lenAllowedCharactersBuffer = sizeof(aListofHex);
		break;
	default:
		aListPointer = (char*)aListOfAllBases;
		lenAllowedCharactersBuffer = sizeof(aListOfAllBases);
		//return(result);
	};
	/* Don't proceed if it is Minus operator */
	result = !((lenWordBuffer == 1) && (wordBuffer[0] == '-'));
	if (result) {
		/* check if number */
		while (aWordIndex < lenWordBuffer) {
			int isNumeric = FALSE;
			int startIndex = 0;
			int endIndex = 0;
			int ii = 0;
			if (aWordIndex == 0) {
				/* Number may start with "-" */
				/* Number can't start with "," or "." */
				startIndex = 0;
				endIndex = lenAllowedCharactersBuffer - 2;
			}
			else if (aWordIndex == (lenWordBuffer - 1)) {
				/* "-" may just be the first digit */
				/* Digit is last digit, so it can't be "," nor "." */
				startIndex = 1;
				endIndex = lenAllowedCharactersBuffer - 2;
			}
			else {
				/* "-" may just be the first digit */
				/* Digit ist not the last digit, so it can be ",", but not "." */
				startIndex = 1;
				endIndex = lenAllowedCharactersBuffer - 1;
			};
			for (ii = startIndex; ii < endIndex; ii++) {
				if (wordBuffer[aWordIndex] ==
#ifdef ARDUINO
				(char)pgm_read_ptr(aListPointer + ii)) {
#else
					aListPointer[ii]) {
#endif
					isNumeric = TRUE;
					break;
				};
			};
			result = result && isNumeric;
			aWordIndex++;
		};
	};
	return(result);
}

/* Convert word to an Single Precision Integer and store it on the DataStack */
void storeSPInteger(void) {
	LONG_LONG value = 0;
	int valueIsNegative = FALSE;
	int aWordIndex = 0;
	int lenWordBuffer = (int)strlen(wordBuffer);
	char* aListPointer = (char*)NULL;
	int lenAllowedCharactersBuffer = 0;
	int lowValue = 0;
	int nn; /* < 32 */

	switch (forthTasks[forthState.forthCurrentTask].forthBase) {
	case OCTAL:
		aListPointer = (char*)aListofOctal;
		lenAllowedCharactersBuffer = sizeof(aListofOctal);
		break;
	case DECIMAL:
		aListPointer = (char*)aListofDecimal;
		lenAllowedCharactersBuffer = sizeof(aListofDecimal);
		break;
	case HEX:
		aListPointer = (char*)aListofHex;
		lenAllowedCharactersBuffer = sizeof(aListofHex);
		break;
	default:
		aListPointer = (char*)aListOfAllBases;
		lenAllowedCharactersBuffer = sizeof(aListOfAllBases);
	};

	while (aWordIndex < lenWordBuffer) {
		int startIndex = 0;
		int endIndex = 0;
		int ii = 0;
		if (aWordIndex == 0) {
			/* Number may start with "-" */
			/* Number can't start with "," or "." */
			startIndex = 0;
			endIndex = lenAllowedCharactersBuffer - 2;
		}
		else  if (aWordIndex == (lenWordBuffer - 1)) {
			/* "-" may just be the first digit */
			/* Digit is last digit, so it can't be "," nor "." */
			startIndex = 1;
			endIndex = lenAllowedCharactersBuffer - 2;
		}
		else {
			/* "-" may just be the first digit */
			/* Digit ist not the last digit, so it can be ",", but not "." */
			startIndex = 1;
			endIndex = lenAllowedCharactersBuffer - 1;
		};
		for (ii = startIndex; ii < endIndex; ii++) {
			if (wordBuffer[aWordIndex] ==
#ifdef ARDUINO
			(char)pgm_read_ptr(aListPointer + ii)) {
#else
				aListPointer[ii]) {
#endif
				if ((wordBuffer[aWordIndex] == DIGIT_COMMA) || (wordBuffer[aWordIndex] == DIGIT_DOT)) {
					break;
				};
				if (wordBuffer[aWordIndex] == DIGIT_MINUS) {
					valueIsNegative = TRUE;
					break;
				};
				value = value * forthTasks[forthState.forthCurrentTask].forthBase + ii - 1;
				break;
			};
		};
		aWordIndex++;
	};

	if (valueIsNegative) {
		value = value * (-1);
	};

#if SYSTEM_ARCHITECTURE == SYSTEM_ARCHITECTURE_HOST
	lowValue = (int)value;
#endif
#if ( SYSTEM_ARCHITECTURE == SYSTEM_ARCHITECTURE_161632BIT )
	if (value > UINT_MAX) {
		/* Overflow: ... value .. UINT_MAX[ */
		nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, "SP Integer Overflow!");
		PUTS(forthTasks[forthState.forthCurrentTask].printBuffer);
	}
	else if (value > INT_MAX) {
		/* [UINT_MAX ... value .. INT_MAX[ */
		short int shortValue = value & INT_MAX;
		lowValue = -(shortValue ^ INT_MAX);
	}
	else if (value >= INT_MIN) {
		/* [INT_MAX ... value .. INT_MIN] */
		lowValue = value;
	}
	else if (value >= UINT_MIN) {
		/*  ]INT_MIN... value .. UINT_MIN] */
		short int shortValue = value & INT_MAX;
		lowValue = shortValue;
	}
	else if (value < UINT_MIN) {
		/* Underflow */
		nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, "SP Integer Underflow!");
		PUTS(forthTasks[forthState.forthCurrentTask].printBuffer);
	};
#endif  
#if ( SYSTEM_ARCHITECTURE == SYSTEM_ARCHITECTURE_323232BIT ) || \
    ( SYSTEM_ARCHITECTURE == SYSTEM_ARCHITECTURE_326464BIT ) || \
        ( SYSTEM_ARCHITECTURE == SYSTEM_ARCHITECTURE_646464BIT)  || \
        ( SYSTEM_ARCHITECTURE == SYSTEM_ARCHITECTURE_6464128BIT)
	lowValue = value;
#endif

	forthTasks[forthState.forthCurrentTask].dataStackSpace[forthTasks[forthState.forthCurrentTask].dataStackIndex++] = lowValue;

}

/* Check if word is a Double Precision Integer, e.g. "12. d." => "12" ( but not "1.2 d." => "12" ) */
#ifdef DPINTEGER_SUPPORT
int isDPInteger(void) {
	int result = FALSE;
	int aWordIndex = 0;
	int lenWordBuffer = (int)strlen(wordBuffer);
	char* aListPointer = (char*)NULL;
	int lenAllowedCharactersBuffer = 0;

	switch (forthTasks[forthState.forthCurrentTask].forthBase) {
	case OCTAL:
		aListPointer = (char*)aListofOctal;
		lenAllowedCharactersBuffer = sizeof(aListofOctal);
		break;
	case DECIMAL:
		aListPointer = (char*)aListofDecimal;
		lenAllowedCharactersBuffer = sizeof(aListofDecimal);
		break;
	case HEX:
		aListPointer = (char*)aListofHex;
		lenAllowedCharactersBuffer = sizeof(aListofHex);
		break;
	default:
		aListPointer = (char*)aListOfAllBases;
		lenAllowedCharactersBuffer = sizeof(aListOfAllBases);
	};
	/* Don't proceed if just 1 character => "." is necessary, but is no valid Double Precision Integer */
	result = !(lenWordBuffer == 1);
	if (result) {
		/* check if number */
		while (aWordIndex < lenWordBuffer) {
			int isNumeric = FALSE;
			int startIndex = 0;
			int endIndex = 0;
			int ii = 0;
			if (aWordIndex == 0) {
				/* Number may start with "-" */
				/* Number can't start with "," or "." */
				startIndex = 0;
				endIndex = lenAllowedCharactersBuffer - 2;
			}
			else if (aWordIndex == (lenWordBuffer - 1)) {
				/* "-" may just be the first digit */
				/* Digit is last digit, so it must be "." */
				startIndex = lenAllowedCharactersBuffer - 1;
				endIndex = lenAllowedCharactersBuffer;
			}
			else {
				/* "-" may just be the first digit */
				/* Digit ist not the last digit, so it can be "," */
				startIndex = 1;
				endIndex = lenAllowedCharactersBuffer;
			};
			for (ii = startIndex; ii < endIndex; ii++) {
				if (wordBuffer[aWordIndex] ==
#ifdef ARDUINO
				(char)pgm_read_ptr(aListPointer + ii)) {
#else
					aListPointer[ii]) {
#endif
					isNumeric = TRUE;
					break;
				};
				};
			result = result && isNumeric;
			aWordIndex++;
			};
		};
	return(result);
	}
#endif

/* Convert word to an Double Precision Integer and store it on the DataStack */
/* As with 32-bit computers, int = long, LONG_LONG variable type is used for Double Precision value */
#ifdef DPINTEGER_SUPPORT
void storeDPInteger(void) {
	LONG_LONG value = 0;
	int valueIsNegative = FALSE;
	int aWordIndex = 0;
	int lenWordBuffer = (int)strlen(wordBuffer);
	char* aListPointer = (char*)NULL;
	int lenAllowedCharactersBuffer = 0;
	CELL_INTEGER lowValue = 0;
	CELL_INTEGER highValue = 0;

	switch (forthTasks[forthState.forthCurrentTask].forthBase) {
	case OCTAL:
		aListPointer = (char*)aListofOctal;
		lenAllowedCharactersBuffer = sizeof(aListofOctal);
		break;
	case DECIMAL:
		aListPointer = (char*)aListofDecimal;
		lenAllowedCharactersBuffer = sizeof(aListofDecimal);
		break;
	case HEX:
		aListPointer = (char*)aListofHex;
		lenAllowedCharactersBuffer = sizeof(aListofHex);
		break;
	default:
		aListPointer = (char*)aListOfAllBases;
		lenAllowedCharactersBuffer = sizeof(aListOfAllBases);
		//return;
	};
	/* Don't proceed if just 1 character => "." is necessary, but is no valid Double Precision Integer */
	if (!(lenWordBuffer == 1)) {
		/* check if number */
		while (aWordIndex < lenWordBuffer) {
			int startIndex = 0;
			int endIndex = 0;
			int ii = 0;
			if (aWordIndex == 0) {
				/* Number may start with "-" */
				/* Number can't start with "," or "." */
				startIndex = 0;
				endIndex = lenAllowedCharactersBuffer - 2;
			}
			else if (aWordIndex == (lenWordBuffer - 1)) {
				/* "-" may just be the first digit */
				/* Digit is last digit, so it must be "." */
				startIndex = lenAllowedCharactersBuffer - 1;
				endIndex = lenAllowedCharactersBuffer;
			}
			else {
				/* "-" may just be the first digit */
				/* Digit ist not the last digit, so it can be ","  and "." */
				startIndex = 1;
				endIndex = lenAllowedCharactersBuffer;
			};
			for (ii = startIndex; ii < endIndex; ii++) {
				if (wordBuffer[aWordIndex] ==
#ifdef ARDUINO
				(char)pgm_read_ptr(aListPointer + ii)) {
#else
					aListPointer[ii]) {
#endif
					if ((wordBuffer[aWordIndex] == DIGIT_COMMA) || (wordBuffer[aWordIndex] == DIGIT_DOT)) {
						break;
					};
					if (wordBuffer[aWordIndex] == DIGIT_MINUS) {
						valueIsNegative = TRUE;
						break;
					};
					value = value * forthTasks[forthState.forthCurrentTask].forthBase + ii - 1;
					break;
				};
				};
			aWordIndex++;
			};
		};

	if (valueIsNegative) {
		value = value * (-1);
	};

#if SYSTEM_ARCHITECTURE == SYSTEM_ARCHITECTURE_HOST
	lowValue = (int)(value % ((LONG_LONG)INT_MAX + 1));
	highValue = (int)(value / ((LONG_LONG)INT_MAX + 1));
#endif
#if ( SYSTEM_ARCHITECTURE == SYSTEM_ARCHITECTURE_161632BIT )
	/* 2147483647+1 = 0x7FFFFFFF +1 => -2147483648 */
	/* -2147483648-1 = 0x8000000-1 => 2147483647 */
	lowValue = value % ((LONG_LONG)INT_MAX + 1);
	highValue = value / ((LONG_LONG)INT_MAX + 1);

	if (highValue != 0) {
		/* Overflow */
		nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, "DP Integer Overflow!");
		PUTS(forthTasks[forthState.forthCurrentTask].printBuffer);
	};
#endif  
#if ( SYSTEM_ARCHITECTURE == SYSTEM_ARCHITECTURE_32BIT ) || ( SYSTEM_ARCHITECTURE == SYSTEM_ARCHITECTURE_646464BIT )
	lowValue = value % ((LONG_LONG)INT_MAX + 1);
	highValue = value / ((LONG_LONG)INT_MAX + 1);
#endif

	forthTasks[forthState.forthCurrentTask].dataStackSpace[forthTasks[forthState.forthCurrentTask].dataStackIndex++] = lowValue;
	forthTasks[forthState.forthCurrentTask].dataStackSpace[forthTasks[forthState.forthCurrentTask].dataStackIndex++] = highValue;
	}
#endif

/* Check if word is a Float, but just in DECIMAL mode, e.g. "1.2e .F" => 1.2 */
/* I was told: According to the ANS standard, floating-point numbers are always
   interpreted as decimal (regardless of the content of the BASE variable) */
#ifdef FLOAT_SUPPORT
int isFloat(void) {
	int result = FALSE;
	int aWordIndex = 0;
	int lenWordBuffer = (int)strlen(wordBuffer);
	char* aListPointer1 = (char*)NULL;
	char* aListPointer2 = (char*)NULL;
	int lenAllowedCharactersBuffer1 = 0;
	int lenAllowedCharactersBuffer2 = 0;
	int eDetected = FALSE;
	int dotDetected = FALSE;
	int aExponentStart = 0;

	switch (forthTasks[forthState.forthCurrentTask].forthBase) {
	case DECIMAL:
		aListPointer1 = (char*)aListofFloat;
		aListPointer2 = (char*)aListofExponent;
		lenAllowedCharactersBuffer1 = sizeof(aListofFloat);
		lenAllowedCharactersBuffer2 = sizeof(aListofExponent);
		break;
	default:
		return(result);
	};

	/* Don't proceed 1) if just 1 character => "E" is necessary, but is no valid Float 2) if no valid mantissa */
	result = !((lenWordBuffer == 1) ||
		((lenWordBuffer >= 2) && (wordBuffer[0] == 'E')) || \
		((lenWordBuffer >= 2) && (wordBuffer[0] == '.') && (wordBuffer[1] == 'E')) || \
		((lenWordBuffer >= 2) && (wordBuffer[0] == '+') && (wordBuffer[1] == 'E')) || \
		((lenWordBuffer >= 2) && (wordBuffer[0] == '-') && (wordBuffer[1] == 'E')) || \
		((lenWordBuffer >= 2) && (wordBuffer[0] == '.') && (wordBuffer[1] == '+')) || \
		((lenWordBuffer >= 2) && (wordBuffer[0] == '.') && (wordBuffer[1] == '-')) || \
		((lenWordBuffer >= 3) && (wordBuffer[0] == '+') && (wordBuffer[1] == '.') && (wordBuffer[2] == 'E')) || \
		((lenWordBuffer >= 3) && (wordBuffer[0] == '-') && (wordBuffer[1] == '.') && (wordBuffer[2] == 'E'))
		);
	if (result) {
		/* check until an "E" is found */
		while ((aWordIndex < lenWordBuffer) && (!eDetected)) {
			int isNumeric = FALSE;
			int startIndex = 0;
			int endIndex = 0;
			int ii = 0;
			if (aWordIndex == 0) {
				/* Number may start with "-", "+" or "." */
				/* The mantissa of a Float number may not start with "," or "E" */
				startIndex = 0;
				endIndex = lenAllowedCharactersBuffer1 - 2;
			}
			else if (dotDetected) {
				/* "-", "+" may just be the first digit */
				/* No further "." allowed */
				startIndex = 3;
				endIndex = lenAllowedCharactersBuffer1 - 1;
			}
			else {
				/* "-", "+" may just be the first digit */
				/* "," and "." are ok */
				startIndex = 2;
				endIndex = lenAllowedCharactersBuffer1;
			};
			for (ii = startIndex; ii < endIndex; ii++) {
				if (wordBuffer[aWordIndex] ==
#ifdef ARDUINO
				(char)pgm_read_ptr(aListPointer1 + ii)) {
#else
					aListPointer1[ii]) {
#endif
					isNumeric = TRUE;
					dotDetected = dotDetected || (wordBuffer[aWordIndex] == DIGIT_DOT);
					eDetected = wordBuffer[aWordIndex] == DIGIT_E;
					break;
				};
			};
			result = result && isNumeric;
			aWordIndex++;
		};

		/* Valid float just if "E" was detected */
		result = result && eDetected;

		/* No valid Float, if "," is at end of mantissa, minimum example "1,E" */
		result = result &&
			!((lenWordBuffer >= 3) && (wordBuffer[aWordIndex - 2] == ','));

		/* check after "E" was found */
		aExponentStart = aWordIndex;
		while (aWordIndex < lenWordBuffer) {
			int isNumeric = FALSE;
			int dotDetected = FALSE;
			int startIndex = 0;
			int endIndex = 0;
			int ii = 0;
			if (aWordIndex == aExponentStart) {
				/* Exponent may start with "-", "+" */
				/* The exponent of a Float number may not start with "," */
				startIndex = 0;
				endIndex = lenAllowedCharactersBuffer2 - 1;
			}
			else if (aWordIndex == (lenWordBuffer - 1)) {
				/* "-", "+" may just be the first digit */
				/* Digit is last digit, so it can't be "," */
				startIndex = 1;
				endIndex = lenAllowedCharactersBuffer2 - 1;
			}
			else {
				/* "-", "+" may just be the first digit */
				/* "," is ok */
				startIndex = 2;
				endIndex = lenAllowedCharactersBuffer2;
			};
			for (ii = startIndex; ii < endIndex; ii++) {
				if (wordBuffer[aWordIndex] ==
#ifdef ARDUINO
				(char)pgm_read_ptr(aListPointer2 + ii)) {
#else
					aListPointer2[ii]) {
#endif
					isNumeric = TRUE;
					break;
				};
			};
			result = result && isNumeric;
			aWordIndex++;
		};
	};
	return(result);
}
#endif

/* Convert word to an Float and store it on the FloatStack */
#ifdef FLOAT_SUPPORT
void storeFloat(void) {
	CELL_FLOAT valueMantissa = 0.0;
	CELL_INTEGER valueMantissaInteger = 0;
	CELL_FLOAT valueMantissaFraction = 0.0;
	CELL_INTEGER valueExponent = 0;
#ifdef FLOAT_ON_DATASTACK
	CELL_FLOAT value = 0;
	CELL_FLOAT* floatStackPointer;
#endif
	int mantissaIsNegative = FALSE;
	int exponentIsNegative = FALSE;
	int aWordIndex = 0;
	int lenWordBuffer = (int)strlen(wordBuffer);
	char* aListPointer1 = (char*)NULL;
	char* aListPointer2 = (char*)NULL;
	int lenAllowedCharactersBuffer1 = 0;
	int lenAllowedCharactersBuffer2 = 0;
	int eDetected = FALSE;
	int dotDetected = FALSE;
	int aExponentStart = 0;
	int positionOfExponentDigit = 1;

	switch (forthTasks[forthState.forthCurrentTask].forthBase) {
	case DECIMAL:
		aListPointer1 = (char*)aListofFloat;
		aListPointer2 = (char*)aListofExponent;
		lenAllowedCharactersBuffer1 = sizeof(aListofFloat);
		lenAllowedCharactersBuffer2 = sizeof(aListofExponent);
		break;
	default:
		return;
	};

	/* check until an "E" is found */
	while ((aWordIndex < lenWordBuffer) && (!eDetected)) {
		int isNumeric = FALSE;
		int startIndex = 0;
		int endIndex = 0;
		int ii = 0;
		if (aWordIndex == 0) {
			/* Number may start with "-", "+" or "." */
			/* The mantissa of a Float number may not start with "," or "E" */
			startIndex = 0;
			endIndex = lenAllowedCharactersBuffer1 - 2;
		}
		else if (dotDetected) {
			/* "-", "+" may just be the first digit */
			/* No further "." allowed */
			startIndex = 3;
			endIndex = lenAllowedCharactersBuffer1 - 1;
		}
		else {
			/* "-", "+" may just be the first digit */
			/* "," and "." are ok */
			startIndex = 2;
			endIndex = lenAllowedCharactersBuffer1;
		};
		for (ii = startIndex; ii < endIndex; ii++) {

			if (wordBuffer[aWordIndex] ==
#ifdef ARDUINO
			(char)pgm_read_ptr(aListPointer1 + ii)) {
#else
				aListPointer1[ii]) {
#endif
				isNumeric = TRUE;
				eDetected = (ii == lenAllowedCharactersBuffer1 - 2);

				if (wordBuffer[aWordIndex] == DIGIT_MINUS) {
					mantissaIsNegative = TRUE;
					break;
				};

				if (wordBuffer[aWordIndex] == DIGIT_COMMA) {
					break;
				};

				if (wordBuffer[aWordIndex] == DIGIT_DOT) {
					dotDetected = TRUE;
					break;
				};

				if (wordBuffer[aWordIndex] == DIGIT_E) {
					eDetected = TRUE;
					break;
				};

				if (dotDetected) {
					valueMantissaFraction = valueMantissaFraction + 1.0 * (ii - 3) / (forthTasks[forthState.forthCurrentTask].forthBase * positionOfExponentDigit);
					positionOfExponentDigit = forthTasks[forthState.forthCurrentTask].forthBase * positionOfExponentDigit;
				}
				else {
					valueMantissaInteger = valueMantissaInteger * forthTasks[forthState.forthCurrentTask].forthBase + ii - 3;
				};

				break;
			};
		};
		aWordIndex++;
	};

	valueMantissa = valueMantissaInteger + valueMantissaFraction;
	if (mantissaIsNegative) {
		valueMantissa = valueMantissa * (-1);
	};

	/* check after "E" was found */
	aExponentStart = aWordIndex;
	while (aWordIndex < lenWordBuffer) {
		int isNumeric = FALSE;
		int startIndex = 0;
		int endIndex = 0;
		int ii = 0;
		if (aWordIndex == aExponentStart) {
			/* Exponent may start with "-", "+" */
			/* The exponent of a Float number may not start with "," */
			startIndex = 0;
			endIndex = lenAllowedCharactersBuffer2 - 1;
		}
		else if (aWordIndex == (lenWordBuffer - 1)) {
			/* "-", "+" may just be the first digit */
			/* Digit is last digit, so it can't be "," */
			startIndex = 1;
			endIndex = lenAllowedCharactersBuffer2 - 1;
		}
		else {
			/* "-", "+" may just be the first digit */
			/* "," is ok */
			startIndex = 2;
			endIndex = lenAllowedCharactersBuffer2;
		};
		for (ii = startIndex; ii < endIndex; ii++) {
			if (wordBuffer[aWordIndex] ==
#ifdef ARDUINO
			(char)pgm_read_ptr(aListPointer2 + ii)) {
#else
				aListPointer2[ii]) {
#endif
				isNumeric = TRUE;

				if (wordBuffer[aWordIndex] == DIGIT_MINUS) {
					exponentIsNegative = TRUE;
					break;
				};

				if (wordBuffer[aWordIndex] == DIGIT_PLUS) {
					break;
				};

				valueExponent = valueExponent * forthTasks[forthState.forthCurrentTask].forthBase + ii - 2;
				break;
			};
		};
		aWordIndex++;
	};

	if (exponentIsNegative) {
		valueExponent = valueExponent * (-1);
	};

#ifdef FLOAT_ON_DATASTACK
	value = valueMantissa * pow(forthTasks[forthState.forthCurrentTask].forthBase, valueExponent);
	floatStackPointer = (CELL_FLOAT*)&forthTasks[forthState.forthCurrentTask].dataStackSpace[forthTasks[forthState.forthCurrentTask].dataStackIndex];
	*floatStackPointer = value;
	forthTasks[forthState.forthCurrentTask].dataStackIndex = forthTasks[forthState.forthCurrentTask].dataStackIndex +
		forthTasks[forthState.forthCurrentTask].floatFloatIntRatio;
#else
	forthTasks[forthState.forthCurrentTask].floatStackSpace[forthTasks[forthState.forthCurrentTask].floatStackIndex++] =
		valueMantissa * pow(forthTasks[forthState.forthCurrentTask].forthBase, valueExponent);
#endif
}
#endif

/* Find word in wordlist */
int isPermWord(void) {
	unsigned int ii = 0;
	unsigned int jj = 0;
	int result = FALSE;
	/* TBD: Size should be calculated by forthTasks[forthState.forthCurrentTask].forthWordLists */
	unsigned int lenForthWordLists = sizeof(forthWordLists) / sizeof(forthWordLists[0]);
	for (ii = 0; ii < lenForthWordLists; ii++) {
		for (jj = 0; jj < *forthTasks[forthState.forthCurrentTask].forthWordLists[ii].size; jj++) {
#ifdef ARDUINO
			if (strcmp(wordBuffer,
				pgm_read_ptr(&forthTasks[forthState.forthCurrentTask].forthWordLists[ii].forthWords[jj].forthWordName))
				== 0) {
#else
			if (strcmp(wordBuffer,
				forthTasks[forthState.forthCurrentTask].forthWordLists[ii].forthWords[jj].forthWordName)
				== 0) {
#endif			
				result = TRUE;
				break;
			};
		};
	};
	return(result);
}

/* Get word in wordlist */
typedef_forthWord* getPermWord(WORDID forthWordID) {
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

/*
	Detect end of compilation.
	Not by browsing the FORTH wordlists,
	but by "knowing" implicitely that ";" ends compilation.
	TBD: Solution without using implicitely knowledge
*/
int isEndOfCompilation(void) {
	int result = FALSE;
	result = (strcmp(wordBuffer, STRING_SEMICOLON) == 0);
	return(result);
}

/* Execute word of wordlist */
/* TBD: If a word appears in more than one wordlist, don't execute each time */
void executePermWord(void) {
	unsigned int ii = 0;
	unsigned int jj = 0;
	unsigned int kk = 0;
	int result = FALSE;
	/* TBD: lenForthWordLists should be calculated by forthTasks[forthState.forthCurrentTask].forthWordLists */
	unsigned int lenForthWordLists = sizeof(forthWordLists) / sizeof(forthWordLists[0]);
	for (ii = 0; ii < lenForthWordLists; ii++) {
		for (jj = 0; jj < *forthTasks[forthState.forthCurrentTask].forthWordLists[ii].size; jj++) {
#ifdef ARDUINO
			if (strcmp(wordBuffer,
				pgm_read_ptr(&forthTasks[forthState.forthCurrentTask].forthWordLists[ii].forthWords[jj].forthWordName))
				== 0) {
#else
			if (strcmp(wordBuffer,
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
							typedef_forthWord* forthWordPtr = getPermWord(forthWordID);
							printf("forthWordPtr-> Name = %s\n", forthWordPtr->forthWordName);
							privateExecuteWord(forthWordID);
						};
					};
#endif      
				break;
			};
		};
	};
	return;
}

/* Find word in compiled wordlist */
/* TBD, does not work */
int isCompiledWord(void) {
	int result = FALSE;
	return(result);
}

/*
	Parse the terminal input buffer (tib)
	With static input:
		1.Consequent CR or SPACE is not necessary, e.g. "+".
		2. Words with zero length ( "" ) is ok.
*/
void forthParseTib(void) {
	int aTibIndex = 0;
	int aWordIndex = 0;
	int aWordDetected = FALSE;
	int lenIoTib = (int)strlen(ioTib);
	int isSPIntegerWord = FALSE, isWordFound = FALSE;
	int nn; /* < 32 */
#ifdef DPINTEGER_SUPPORT
	int isDPIntegerWord = FALSE;
#endif
#ifdef FLOAT_SUPPORT
	int isFloatWord = FALSE;
#endif
	while (aTibIndex < lenIoTib) {
		if ((aWordDetected) || ((aTibIndex == lenIoTib - 1) && (ioTib[aTibIndex] > SPACE))) {
			/* Process here, if either a word is detected OR there is a single character */
			if ((aTibIndex == lenIoTib - 1) && (ioTib[aTibIndex] > SPACE)) {
				/* With static input, if last character is not CR, add it and terminate the wordbuffer string */
				wordBuffer[aWordIndex++] = ioTib[aTibIndex];
				wordBuffer[aWordIndex] = 0;
			};
			if ((ioTib[aTibIndex] <= SPACE) || (aTibIndex == lenIoTib - 1)) {
				/* With static input, word is finished at end of buffer */
				/* With input from keyboard or terminal, word is finished by non-word character, e.g. SPACE, CR */
				/* Finish word detection */
				aWordDetected = FALSE;
				/* Reset message numbers */
				forthTasks[forthState.forthCurrentTask].messageNumber = 0;
				forthTasks[forthState.forthCurrentTask].errorNumber = 0;
				forthTasks[forthState.forthCurrentTask].osErrorNumber = 0;
				isSPIntegerWord = isSPInteger();
#ifdef DPINTEGER_SUPPORT
				isDPIntegerWord = isDPInteger();
#endif
#ifdef FLOAT_SUPPORT
				isFloatWord = isFloat();
#endif
				/* Check if a permanent word */
				isWordFound = isPermWord();
#if defined (__DEBUG__)
				nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer,
					"word = [%s], isSPInteger = [%d]", wordBuffer, isSPIntegerWord);
				SMSG_ERROR(forthTasks[forthState.forthCurrentTask].printBuffer);
#ifdef DPINTEGER_SUPPORT
				nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer,
					", isDPInteger = [%d]", isDPIntegerWord);
				SMSG_ERROR(forthTasks[forthState.forthCurrentTask].printBuffer);
#endif
#ifdef FLOAT_SUPPORT
				nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer,
					", isDPFloat = [%d]", isFloatWord);
				SMSG_ERROR(forthTasks[forthState.forthCurrentTask].printBuffer);
#endif
				nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer,
					", isWordFound = [%d]", isWordFound);
				SMSG_ERROR_CR(forthTasks[forthState.forthCurrentTask].printBuffer);
#endif
				if (forthTasks[forthState.forthCurrentTask].forthMode == MODE_COMPILE)
				{
#if defined (__DEBUG__)
					SMSG_ERROR_CR("Compile Mode");
#endif
					if (isEndOfCompilation()) {
						executePermWord();
					};
				}
				else {
					if (isWordFound) {
						executePermWord();
					}
					else {
						if (isSPIntegerWord) {
							storeSPInteger();
						};
#ifdef DPINTEGER_SUPPORT
						if (isDPIntegerWord) {
							storeDPInteger();
						};
#endif
#ifdef FLOAT_SUPPORT
						if (isFloatWord) {
							storeFloat();
						};
#endif
						if (!isSPIntegerWord
#ifdef DPINTEGER_SUPPORT
							&& !isDPIntegerWord
#endif
#ifdef FLOAT_SUPPORT
							&& !isFloatWord
#endif
							) {
							forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_NOT_IN_CURRENT_DIRECTORY;
						};
						privateMessageHandler();
					};
					privateMessageHandler();
					// int aWordIndex = 0;
					// wordBuffer[aWordIndex] = 0;
				};
			}
			else {
				/* Continue word detection */
				wordBuffer[aWordIndex++] = ioTib[aTibIndex];
				wordBuffer[aWordIndex] = 0;
			};
		}
		else {
			/* Search for next word */
			if (ioTib[aTibIndex] > SPACE) {
				/* word detected */
				aWordDetected = TRUE;
				aWordIndex = 0;
				wordBuffer[aWordIndex++] = ioTib[aTibIndex];
				wordBuffer[aWordIndex] = 0;
			};
		};
		aTibIndex++;
	};
}

/*  Process terminal input buffer (tib) */
void processTib(void) {
	forthParseTib();
}
/**************************/

#ifdef SYSTEM_INTERACTIVE
#include "h2oint2.h"
#endif

/* No processing of commands passed by the command line interface */
void noParameterPreProcessing(void) {
	int nn; /* < 128 */
	if (forthState.forthIsVerbose) {
#if defined(__BORLANDC__) || defined(__TURBOC__) || defined(ARDUINO)
		nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, "%s, Version %d - Built %d\n( Int=%d, INTEGER_CELL=%d, *Int=%d, Long Long=%d", COPYRIGHT_MESSAGE, VERSION, BUILT, \
			sizeof(int), sizeof(CELL_INTEGER), sizeof(void*), sizeof(LONG_LONG));
		SMSG_SUCCESS(forthTasks[forthState.forthCurrentTask].printBuffer);
#ifdef FLOAT_SUPPORT
		nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, ", FLOAT_CELL=%d", sizeof(CELL_FLOAT));
		SMSG_SUCCESS(forthTasks[forthState.forthCurrentTask].printBuffer);
#ifdef FLOAT_ON_DATASTACK
		nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, ", FLOAT_CELL/INTEGER_CELL=%d", sizeof(CELL_FLOAT) / sizeof(CELL_INTEGER));
		SMSG_SUCCESS(forthTasks[forthState.forthCurrentTask].printBuffer);
#endif
#endif
		SMSG_SUCCESS_CR(" )");
#else
		nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer,
			"%s, Version %d - Built %d\n( Int=%zd, INTEGER_CELL=%zd, *Int=%zd, Long Long=%zd",
			COPYRIGHT_MESSAGE, VERSION, BUILT,
			sizeof(int), sizeof(CELL_INTEGER), sizeof(void*), sizeof(LONG_LONG));
		SMSG_SUCCESS(forthTasks[forthState.forthCurrentTask].printBuffer);
#ifdef FLOAT_SUPPORT
		nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, ", FLOAT_CELL=%zd", sizeof(CELL_FLOAT));
		SMSG_SUCCESS(forthTasks[forthState.forthCurrentTask].printBuffer);
#ifdef FLOAT_ON_DATASTACK
		nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, ", FLOAT_CELL/INTEGER_CELL=%zd",
			sizeof(CELL_FLOAT) / sizeof(CELL_INTEGER));
		SMSG_SUCCESS(forthTasks[forthState.forthCurrentTask].printBuffer);
#endif
#endif
		SMSG_SUCCESS_CR(" )");
#endif
	};
	forthState.forthIsWaitingForKeyboard = FALSE;
	forthState.forthReadsTerminal = TRUE;
	forthState.forthReadsKeyboard = FALSE;
}

/* setup(). Name is fixed as Arduino setup function */
void setup(void) {
	/* Arduino: put your setup code here, to run once */
	int ii = 0;

	/* Open the serial port at 9600 bps */
	setupTerminal(9600, SERIAL_8N1);
	/* Arduino Mega also has a builtin LED and a Macro to use it */
	pinMode(LED_BUILTIN, OUTPUT);

	forthState.forthIsWaitingForParameter = FALSE;
	forthState.forthIsWaitingForKeyboard = FALSE;
	forthState.forthReadsTerminal = FALSE;
	forthState.forthReadsKeyboard = FALSE;
	forthState.forthIsVerbose = TRUE;
	forthState.forthIsExit = FALSE;
	forthState.forthCurrentTask = 0;

	for (ii = 0; ii < MAX_FORTHTASKS; ii++) {
		forthTasks[ii].baseFormat = (char*)BASE_FORMAT_DECIMAL;
		forthTasks[ii].forthBase = DECIMAL;
		forthTasks[ii].forthMode = MODE_INTERPRET;
		forthTasks[ii].errorNumber = 0;
		forthTasks[ii].messageNumber = 0;
		forthTasks[ii].osErrorNumber = 0;
		forthTasks[ii].dataStackIndex = 0;
		forthTasks[ii].returnStackIndex = 0;
		forthTasks[ii].definitionIndex = 0;
		forthTasks[ii].definitionSpaceIndex = 1; /* 0 is reserved for "no definition" */
		forthTasks[ii].instructionPointer = 0;
		forthTasks[ii].currentInstructionAddress = 0; /* "w" */
		forthTasks[ii].forthWordLists = (typedef_forthWordList*)forthWordLists;
		forthTasks[ii].forthDefinitionWords = (typedef_forthWord*)forthDefinitionWords;
		forthTasks[ii].forthDefinitionSpace = (WORDID*)forthDefinitionSpace;
		forthTasks[ii].forthDefinitionSpace2 = (typedef_forthWord*)forthDefinitionSpace2;
		forthTasks[ii].forthErrors = (typedef_forthMessage*)forthErrors;
		forthTasks[ii].forthMessages = (typedef_forthMessage*)forthMessages;
		forthTasks[ii].forthOsErrors = (typedef_forthMessage*)forthOsErrors;
#ifdef FLOAT_SUPPORT
#ifdef FLOAT_ON_DATASTACK
		forthTasks[ii].floatFloatIntRatio = sizeof(CELL_FLOAT) / sizeof(CELL_INTEGER);
#endif
		forthTasks[ii].floatStackIndex = 0;
#endif
	};
	privateCreateDemoWord();
#if defined(SYSTEM_NOEXIT) || !defined(SYSTEM_WITH_FILEIO) 
	//PUTS("before noParameterPreProcessing");
	noParameterPreProcessing();
	//PUTS("after noParameterPreProcessing");
#endif
}

/* loop(). Name is fixed as Arduino loop function */
void loop(void) {
	/* Arduino: put your main code here, to run repeatedly */
	int nn; /* < 32 */
#ifdef SYSTEM_INTERACTIVE
	if (!forthState.forthIsExit) {
		/* Tib is now an empty string */
		//ioTib[0] = 0;
		do {
			/* Main FORTH input loop */
#if defined(ARDUINO) && defined(ARDUINO_SWITCH_LIGHT)
			/* Switch LED on and off */
			digitalWrite(LED_BUILTIN, ledSwitch);
			ledSwitch = !ledSwitch;
#endif
#ifdef READ_STATIC_INPUT
			int isStaticInput = FALSE;
			isStaticInput = readStaticInput();
			if (!isStaticInput) {
				readInput();
			};
#else
			readInput();
#endif
			processTib();
		} while (!forthState.forthIsExit);
	};
#endif
}

/* Main routine, for all systems besides Arduino  */
#ifndef ARDUINO
int main(int argc, char* argv[])
{
	setup();
#if defined(SYSTEM_NOEXIT) || !defined(SYSTEM_WITH_FILEIO) 
#else
	parameterPreProcessing(argc, argv);
#endif
	do {
		loop();
#if defined(SYSTEM_NOEXIT) || !defined(SYSTEM_WITH_FILEIO) 
		forthState.forthIsExit = FALSE;
	} while (TRUE);
	return(EXIT_OK);
#else 
		parameterPostProcessing();
	} while (FALSE);
	return(exitCode);
#endif
}
#endif
