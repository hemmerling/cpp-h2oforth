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
#else
#include <io.h>
#include <conio.h>
#include <sys/stat.h> 
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

#if !H2O_NOEXIT
/* Support for command line arguments / command line parameters */
#include "h2oarg1.h"
#endif

#ifdef H2O_INTERACTIVE
/* Support for interactive applications with user input */
#include "h2oint1.h"
#endif

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

/* Block buffer, used to read Blocks files, by command line parameter support functions */
char ioBlockBuffer[MAX_BLOCKBUFFER];

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

#ifdef COMMON_FORTH_WORDS
#include "h2ocomm1.h"
#endif

/********Global Constants *****************************/

static /*const */ char aListofBinary[] = { '-', '0', '1', ',', '.' };
static /*const */ char aListofOctal[] = { '-', '0', '1', '2', '3', '4', '5', '6', '7', ',', '.' };
static /*const */ char aListofDecimal[] = { '-', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ',', '.' };
static /*const */ char aListofHex[] = { '-', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', ',', '.' };
static /*const */ char aListOfAllBases[NUMBERTABLE_SIZE] = { '-', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
	'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 
#ifdef LOWERCASE_BASE_SUPPORT
	'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
#endif
	 ',', '.' };
static /*const */ char aListofFloat[] = { '-', '+', '.', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'E', ',' };
static /*const */ char aListofExponent[] = { '-', '+', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ',' };

/******** Typedefs ********************/

/*
		FORTH Task.
		Designed to avoid "flexible array member not at end of struct"
		and "invalid use of flexible array member"
*/
typedef  struct _forthTask {
	char* baseFormat;
	CELL_INTEGER forthBase; /* instead of int, for safety if somebody tries to store a BASE by ! instead of C! */
	int errorNumber;
	int messageNumber;
	int osErrorNumber;
	int dataStackIndex;
	int returnStackIndex;
	CELL_INTEGER dataStackSpace[MAX_DATASTACK];
	void* returnStackSpace[MAX_RETURNSTACK];
	char ioBlockBuffer[MAX_BLOCKBUFFER];
	typedef_forthWordList* forthWordLists;
	typedef_forthMessage* forthErrors;
	typedef_forthMessage* forthMessages;
	typedef_forthMessage* forthOsErrors;
#ifdef FLOAT_SUPPORT
#ifdef FLOAT_ON_DATASTACK
	int floatFloatIntRatio;
#else
#endif
	int floatStackIndex;
	CELL_FLOAT floatStackSpace[MAX_FLOATSTACK];
#endif
} typedef_forthTask;

/* Variables */
typedef_forthTask forthTasks[MAX_FORTHTASKS];

static const typedef_forthWordList forthWordLists[] = {
		{sizeof(commonWords) / sizeof(commonWords[0]), commonWords}
#ifdef EXCEPTION_SUPPORT
		, {sizeof(exceptionWords) / sizeof(exceptionWords[0]), exceptionWords}
#endif
#ifdef FLOAT_SUPPORT
		, {sizeof(fpointWords) / sizeof(fpointWords[0]), fpointWords}
#endif
#if ((TASKINGSTANDARD == TASKINGSTD_VOLK)) || ( TASKINGSTANDARD == TASKINGSTD_FORTH83 )
		, {sizeof(taskingWords) / sizeof(taskingWords[0]), taskingWords}
#endif       
#ifdef TESTING_SUPPORT
		, {sizeof(testingWords) / sizeof(testingWords[0]), testingWords}
#endif
		, {sizeof(forthWords) / sizeof(forthWords[0]), forthWords}
};

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

#if !H2O_NOEXIT
#include "h2oarg2.h"
#endif

/**************************/

void forthInit(void) {
	int ii = 0;
	forthState.forthIsWaitingForParameter = FALSE;
	forthState.forthIsWaitingForKeyboard = FALSE;
	forthState.forthReadsTerminal = FALSE;
	forthState.forthReadsKeyboard = FALSE;
	forthState.forthIsVerbose = FALSE;
	forthState.forthIsExit = FALSE;
	forthState.forthCurrentTask = 0;

	for (ii = 0; ii < MAX_FORTHTASKS; ii++) {
		forthTasks[ii].baseFormat = (char*)BASE_FORMAT_DECIMAL;
		forthTasks[ii].forthBase = DECIMAL;
		forthTasks[ii].errorNumber = 0;
		forthTasks[ii].messageNumber = 0;
		forthTasks[ii].osErrorNumber = 0;
		forthTasks[ii].dataStackIndex = 0;
		forthTasks[ii].returnStackIndex = 0;
		forthTasks[ii].forthWordLists = (typedef_forthWordList*)forthWordLists;
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
}

/* Check if word is a Single Precision Integer */
int isSPInteger(void) {
	int result = FALSE;
	int aWordIndex = 0;
	int lenWordBuffer = (int)strlen(wordBuffer);
	char* aListPointer = (char*)NULL;
	int lenAllowedCharactersBuffer = 0;

	switch (forthTasks[forthState.forthCurrentTask].forthBase) {
	case BINARY:
		aListPointer = aListofBinary;
		lenAllowedCharactersBuffer = sizeof(aListofBinary);
		break;
	case OCTAL:
		aListPointer = aListofOctal;
		lenAllowedCharactersBuffer = sizeof(aListofOctal);
		break;
	case DECIMAL:
		aListPointer = aListofDecimal;
		lenAllowedCharactersBuffer = sizeof(aListofDecimal);
		break;
	case HEX:
		aListPointer = aListofHex;
		lenAllowedCharactersBuffer = sizeof(aListofHex);
		break;
	default:
		aListPointer = aListOfAllBases;
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
				endIndex = lenAllowedCharactersBuffer-1;
			};
			for (ii = startIndex; ii < endIndex; ii++) {
				if (wordBuffer[aWordIndex] == aListPointer[ii]) {
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

	switch (forthTasks[forthState.forthCurrentTask].forthBase) {
	case OCTAL:
		aListPointer = aListofOctal;
		lenAllowedCharactersBuffer = sizeof(aListofOctal);
		break;
	case DECIMAL:
		aListPointer = aListofDecimal;
		lenAllowedCharactersBuffer = sizeof(aListofDecimal);
		break;
	case HEX:
		aListPointer = aListofHex;
		lenAllowedCharactersBuffer = sizeof(aListofHex);
		break;
	default:
		aListPointer = aListOfAllBases;
		lenAllowedCharactersBuffer = sizeof(aListOfAllBases);
		//return;
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
			endIndex = lenAllowedCharactersBuffer-1;
		};
		for (ii = startIndex; ii < endIndex; ii++) {
			// printf("[%d] [%c]  [%c] \n", ii, wordBuffer[aWordIndex], aListPointer[ii] );
			if (wordBuffer[aWordIndex] == aListPointer[ii]) {
				if ((wordBuffer[aWordIndex] == DIGIT_COMMA) || (wordBuffer[aWordIndex] == DIGIT_DOT)) {
					break;
				};
				if (wordBuffer[aWordIndex] == DIGIT_MINUS) {
					valueIsNegative = TRUE;
					break;
				};
				value = value * forthTasks[forthState.forthCurrentTask].forthBase + ii - 1;
				// printf("nachher ii =%d, new value = %d \n", ii, value);
				break;
			};
		};
		//printf("value %lld\n",value);
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
		printf("SP Integer Overflow!\n");
	}
	else if (value > INT_MAX) {
		/* [UINT_MAX ... value .. INT_MAX[ */
		short int shortValue = value & INT_MAX;
		lowValue = -(shortValue ^ INT_MAX);
		//printf("short = %d, low = %d\n", shortValue, lowValue);
	}
	else if (value >= INT_MIN) {
		/* [INT_MAX ... value .. INT_MIN] */
		lowValue = value;
	}
	else if (value >= UINT_MIN) {
		/*  ]INT_MIN... value .. UINT_MIN] */
		short int shortValue = value & INT_MAX;
		lowValue = shortValue;
		//printf("short = %d, low = %d\n", shortValue, lowValue);
	}
	else if (value < UINT_MIN) {
		/* Underflow */
		printf("SP Integer Underflow!\n");
	};
#endif  
#if ( SYSTEM_ARCHITECTURE == SYSTEM_ARCHITECTURE_323232BIT ) || \
    ( SYSTEM_ARCHITECTURE == SYSTEM_ARCHITECTURE_326464BIT ) || \
        ( SYSTEM_ARCHITECTURE == SYSTEM_ARCHITECTURE_646464BIT)  || \
        ( SYSTEM_ARCHITECTURE == SYSTEM_ARCHITECTURE_6464128BIT)
	lowValue = value;
#endif

	//printf("final value = %lld, lowValue = %d \n", value, lowValue);
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
		aListPointer = aListofOctal;
		lenAllowedCharactersBuffer = sizeof(aListofOctal);
		break;
	case DECIMAL:
		aListPointer = aListofDecimal;
		lenAllowedCharactersBuffer = sizeof(aListofDecimal);
		break;
	case HEX:
		aListPointer = aListofHex;
		lenAllowedCharactersBuffer = sizeof(aListofHex);
		break;
	default:
		aListPointer = aListOfAllBases;
		lenAllowedCharactersBuffer = sizeof(aListOfAllBases);
		//return(result);
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
				//printf("[%d] [%c]  [%c] \n", ii, wordBuffer[aWordIndex], aListPointer[ii] );
				if (wordBuffer[aWordIndex] == aListPointer[ii]) {
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
		aListPointer = aListofOctal;
		lenAllowedCharactersBuffer = sizeof(aListofOctal);
		break;
	case DECIMAL:
		aListPointer = aListofDecimal;
		lenAllowedCharactersBuffer = sizeof(aListofDecimal);
		break;
	case HEX:
		aListPointer = aListofHex;
		lenAllowedCharactersBuffer = sizeof(aListofHex);
		break;
	default:
		aListPointer = aListOfAllBases;
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
				if (wordBuffer[aWordIndex] == aListPointer[ii]) {
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
		printf("DP Integer Overflow!\n");
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
	int aExponentStart  = 0;

	switch (forthTasks[forthState.forthCurrentTask].forthBase) {
	case DECIMAL:
		aListPointer1 = aListofFloat;
		aListPointer2 = aListofExponent;
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
				if (wordBuffer[aWordIndex] == aListPointer1[ii]) {
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
				if (wordBuffer[aWordIndex] == aListPointer2[ii]) {
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
	CELL_FLOAT *floatStackPointer;
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
		aListPointer1 = aListofFloat;
		aListPointer2 = aListofExponent;
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
		} else if (dotDetected) {
			/* "-", "+" may just be the first digit */
			/* No further "." allowed */
			startIndex = 3;
			endIndex = lenAllowedCharactersBuffer1 - 1;
		} else {
			/* "-", "+" may just be the first digit */
			/* "," and "." are ok */
			startIndex = 2;
			endIndex = lenAllowedCharactersBuffer1;
		};
		for (ii = startIndex; ii < endIndex; ii++) {
			if (wordBuffer[aWordIndex] == aListPointer1[ii]) {
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

				if(dotDetected) {
					valueMantissaFraction = valueMantissaFraction + 1.0 * ( ii - 3 ) / (forthTasks[forthState.forthCurrentTask].forthBase*positionOfExponentDigit);
					positionOfExponentDigit = forthTasks[forthState.forthCurrentTask].forthBase*positionOfExponentDigit;
				} else {
					valueMantissaInteger = valueMantissaInteger * forthTasks[forthState.forthCurrentTask].forthBase + ii - 3;
				};

				//printf("charindex ii =%d, valueMantissaInteger = %d, valueMantissaFraction = %f\n,  \n", ii, valueMantissaInteger, valueMantissaFraction);	
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
		} else if (aWordIndex == (lenWordBuffer - 1)) {
			/* "-", "+" may just be the first digit */
			/* Digit is last digit, so it can't be "," */
			startIndex = 1;
			endIndex = lenAllowedCharactersBuffer2 - 1;
		} else {
			/* "-", "+" may just be the first digit */
			/* "," is ok */
			startIndex = 2;
			endIndex = lenAllowedCharactersBuffer2;
		};
		for (ii = startIndex; ii < endIndex; ii++) {
			if (wordBuffer[aWordIndex] == aListPointer2[ii]) {
				isNumeric = TRUE;

				if (wordBuffer[aWordIndex] == DIGIT_MINUS) {
					exponentIsNegative = TRUE;
					break;
				};

				if (wordBuffer[aWordIndex] == DIGIT_PLUS) {
					break;
				};

				valueExponent = valueExponent * forthTasks[forthState.forthCurrentTask].forthBase + ii - 2;
				//printf("charindex ii =%d, valueExponent = %d\n", ii, valueExponent);	
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
	//printf("value = %e %f %f\n", value, valueMantissa, valueExponent);
	floatStackPointer = (CELL_FLOAT *)&forthTasks[forthState.forthCurrentTask].dataStackSpace[forthTasks[forthState.forthCurrentTask].dataStackIndex];
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
	int ii = 0;
	int jj = 0;
	int result = FALSE;
	/* TBD: lenForthWordLists should be calculated by forthTasks[forthState.forthCurrentTask].forthWordLists */
	int lenForthWordLists = sizeof(forthWordLists) /
		sizeof(forthWordLists[0]);
	//printf("sizeof wordsLists %d\n", lenForthWordLists);
	for (ii = 0; ii < lenForthWordLists; ii++) {
		//printf("wordsQuantity %d, %d\n", ii, forthTasks[forthState.forthCurrentTask].forthWordLists[ii].lenForthWords);
		for (jj = 0; jj < forthTasks[forthState.forthCurrentTask].forthWordLists[ii].lenForthWords; jj++) {
			//printf("wordlists %d, %s\n", ii, forthTasks[forthState.forthCurrentTask].forthWordLists[ii].forthWords[jj].forthWordName);
			if (strcmp(wordBuffer, forthTasks[forthState.forthCurrentTask].forthWordLists[ii].forthWords[jj].forthWordName) == 0) {
				result = TRUE;
				if (forthTasks[forthState.forthCurrentTask].forthWordLists[ii].forthWords[jj].forthOpt != NULL) {
					/* Execute word */
					forthTasks[forthState.forthCurrentTask].forthWordLists[ii].forthWords[jj].forthOpt();
				};
				break;
			};
		};
	};
	return(result);
}

/* Parse the terminal input buffer (tib) */
void forthParseTib(void) {
	int aTibIndex = 0;
	int aWordIndex = 0;
	int aWordDetected = FALSE;
	int lenIoTib = (int)strlen(ioTib);
	int isSPIntegerWord = FALSE, isWordFound = FALSE;
#ifdef DPINTEGER_SUPPORT
	int isDPIntegerWord = FALSE;
#endif
#ifdef FLOAT_SUPPORT
	int isFloatWord = FALSE;
#endif
	while (aTibIndex < lenIoTib) {
		if (aWordDetected) {
			if (ioTib[aTibIndex] <= SPACE) {
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
				/* Check if a permanent word, and execute it */
				isWordFound = isPermWord();
#if defined (__DEBUG__)
				printf("word = [%s], isSPInteger = [%d]", wordBuffer, isSPIntegerWord);
#ifdef DPINTEGER_SUPPORT
				printf(", isDPInteger = [%d]", isDPIntegerWord);
#endif
#ifdef FLOAT_SUPPORT
				printf(", isDPFloat = [%d]", isFloatWord);
#endif
				printf(", isWordFound = [%d]\n", isWordFound);
#endif
				if (!isWordFound) {
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
#if defined (__DEBUG__)
		//              printf("continue [%d]\n", aTibIndex);
#endif

	};
}

/*  Process terminal input buffer (tib) */
void processTib(void) {
	forthParseTib();
}
/**************************/

#ifdef H2O_INTERACTIVE
#include "h2oint2.h"
#endif

/* No processing of commands passed by the command line interface */
void noParameterPreProcessing(void) {
	if (forthState.forthIsVerbose) {
#if defined(__BORLANDC__) || defined(__TURBOC__)
		printf("%s, Version%d - Built %d\n( Int=%d, INTEGER_CELL=%d, *Int=%d, Long Long=%d", COPYRIGHT_MESSAGE, VERSION, BUILT, \
			sizeof(int), sizeof(CELL_INTEGER), sizeof(void*), sizeof(LONG_LONG));
#ifdef FLOAT_SUPPORT
		printf(", FLOAT_CELL=%d", sizeof(CELL_FLOAT));
#ifdef FLOAT_ON_DATASTACK
		printf(", FLOAT_CELL/INTEGER_CELL=%d", sizeof(CELL_FLOAT) / sizeof(CELL_INTEGER));
#endif
#endif
		printf(" )\n");
#else
		printf("%s, Version%d - Built %d\n( Int=%zd, INTEGER_CELL=%zd, *Int=%zd, Long Long=%zd", COPYRIGHT_MESSAGE, VERSION, BUILT, \
			sizeof(int), sizeof(CELL_INTEGER), sizeof(void*), sizeof(LONG_LONG));
#ifdef FLOAT_SUPPORT
		printf(", FLOAT_CELL=%zd", sizeof(CELL_FLOAT));
#ifdef FLOAT_ON_DATASTACK
		printf(", FLOAT_CELL/INTEGER_CELL=%zd", sizeof(CELL_FLOAT) / sizeof(CELL_INTEGER));
#endif
#endif
		printf(" )\n");
#endif
	};
	forthState.forthIsWaitingForKeyboard = FALSE;
	forthState.forthReadsTerminal = TRUE;
	forthState.forthReadsKeyboard = FALSE;
}


/* Arduino setup */
void setup(void) {
	/* Arduino: put your setup code here, to run once */
	TERMINAL_SETUP(9600L, SERIAL_8N1);
	PUTS(COPYRIGHT_MESSAGE);
	PUTS("This is setup code");
	/*TBD*/
}

/* Arduino Loop */
void loop(void) {
	/* Arduino: put your main code here, to run repeatedly */
	PUTS("This is loop code");
	DELAY(1000);
	/*TBD*/
}

/* Main routine, for all systems besides Arduino  */
int main(int argc, char* argv[])
{
	forthInit();
	do {
#if H2O_NOEXIT 
		noParameterPreProcessing();
#else
		parameterPreProcessing(argc, argv);
#endif
#ifdef H2O_INTERACTIVE
		if (!forthState.forthIsExit) {
			/* Tib is now an empty string */
			//ioTib[0] = 0;
			do {
				/* Main FORTH input loop */
				readInput();
				processTib();
			} while (!forthState.forthIsExit);
		};
#endif
#if H2O_NOEXIT
		forthState.forthIsExit = FALSE;
#else 
		parameterPostProcessing();
#endif
	} while (H2O_NOEXIT);
#ifdef H2O_NOEXIT
	return(EXIT_OK);
#else
	return(exitCode);
#endif
}
