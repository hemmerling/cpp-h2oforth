#if defined (_MSC_VER)
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#include <stdlib.h>
#include <io.h>
#include <conio.h>
#include <string.h>
#include <sys/types.h> 
#include <sys/stat.h> 
#include <fcntl.h>
#include <limits.h>

#if defined(__MINGW32__)
#include <direct.h>
#else
#include <dos.h>
#endif

#include "h2oforth.h"

/* Configuration switch */
#define H2O_INTERACTIVE TRUE

/* Configuration switch */
//#define H2O_INTERACTiVE FALSE

#include "h2oio1.h"

#if !H2O_NOEXIT
#include "h2oarg1.h"
#endif

#if H2O_INTERACTIVE
#include "h2oint1.h"
#endif

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

#ifdef COMMON_FORTH_WORDS
#include "h2ocomm1.h"
#endif

/********Global Constants*****************************/

static /*const */ char aListofBinary[] = {'-', '0', '1', ',', '.'};
static /*const */ char aListofOctal[] = {'-', '0', '1', '2', '3', '4', '5', '6', '7', ',', '.'};
static /*const */ char aListofDecimal[] = {'-', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ',', '.'};
static /*const */ char aListofHex[] = {'-', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', ',', '.'};

static /*const */ char aListOfBase[NUMBERTABLE_SIZE] = {'-', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', \
'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', ',', '.'};

/********Global Runtime Variables ********************/

int forthIsWaitingForParameter = FALSE;
int forthIsWaitingForKeyboard = FALSE;
int forthReadsTerminal = FALSE;
int forthReadsKeyboard = FALSE;
int forthIsVerbose = TRUE;
int forthIsExit = FALSE;

typedef  struct _forthTask {
	short int forthBase;
	short int errorNumber;
	int dataStackIndex;
	int returnStackIndex;
	int dataStackSpace[MAX_DATASTACK];
	void *returnStackSpace[MAX_RETURNSTACK];
	char *baseFormat;
	typedef_forthWord **forthWords; /* instead of *forthWords[] */
	typedef_forthError **forthErrors; /* instead of *forthErrors[] */
	int floatStackIndex;
	float floatStackSpace[MAX_FLOATSTACK];
} typedef_forthTask;

typedef_forthTask forthTasks[MAX_FORTHTASKS];
int forthCurrentTask = 0;

/******** FORTH Primitives ********************/

#include "h2oio2.h"

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
	for(ii=0; ii<MAX_FORTHTASKS; ii++) {
		forthTasks[ii].forthBase = DECIMAL;
		forthTasks[ii].errorNumber = 0;
		forthTasks[ii].baseFormat = BASE_FORMAT_DECIMAL;
		forthTasks[ii].dataStackIndex = 0;
		forthTasks[ii].returnStackIndex = 0;
		forthTasks[ii].floatStackIndex = 0;
	};
}

/* Check if word is a Single Precision Integer */
int isSPInteger(void){
	int result = FALSE;
    int aWordIndex = 0;
	int lenWordBuffer = (int) strlen(wordBuffer);
    char *aListPointer = (char*)NULL;
	int lenAllowedCharactersBuffer = 0;
	
	switch (forthTasks[forthCurrentTask].forthBase) {
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
			aListPointer = aListOfBase;
			lenAllowedCharactersBuffer = sizeof(aListOfBase);
			return(result);
	};

	/* Don't proceed if it is Minus operator */
	result = ! ( ( lenWordBuffer == 1) && ( wordBuffer[0] == '-' ) );
	if ( result ) {
		/* check if number */
    	while(aWordIndex < lenWordBuffer) {
			int isNumeric = FALSE;
			int startIndex = 0;
			int endIndex = 0;
			int ii = 0;
			if ( aWordIndex == 0 ) {
				/* Number can start with "-" */
				/* Number can't start with "," or "." */
				startIndex = 0;
				endIndex = lenAllowedCharactersBuffer-2;
			} else if ( aWordIndex == ( lenWordBuffer - 1 ) ) {
					/* "-" may just be the first digit */
					/* Digit is last digit, so it can't be "," or "." */
					startIndex = 1;
					endIndex = lenAllowedCharactersBuffer-2;
				} else {
					/* "-" may just be the first digit */
					/* Digit ist not the last digit, so it can be  ","  and "." */
					startIndex = 1;
					endIndex = lenAllowedCharactersBuffer;
			};
			for(ii=startIndex; ii<endIndex; ii++) {
				// printf("[%d] [%c]  [%c] \n", ii, wordBuffer[aWordIndex], aListPointer[ii] );
				if (wordBuffer[aWordIndex] == aListPointer[ii] ) {
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
void storeSPInteger(void){
    LONG_LONG value = 0;
	int valueIsNegative = FALSE;
    int aWordIndex = 0;
	int lenWordBuffer = (int)strlen(wordBuffer);
    char *aListPointer = (char*)NULL;
	int lenAllowedCharactersBuffer = 0;
	int lowValue = 0;
	
	switch (forthTasks[forthCurrentTask].forthBase) {
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
			return;
	};
	
	while(aWordIndex < lenWordBuffer) {
		int startIndex = 0;
		int endIndex = 0;
		int ii = 0;
		if ( aWordIndex == 0 ) {
			/* Number can start with "-" */
			/* Number can't start with "," or "." */
			startIndex = 0;
			endIndex = lenAllowedCharactersBuffer-2;
		} else  if ( aWordIndex == ( lenWordBuffer - 1 ) ) {
				/* "-" may just be the first digit */
				/* Digit is last digit, so it can't be "," or "." */
				startIndex = 1;
				endIndex = lenAllowedCharactersBuffer-2;
			} else {
				/* "-" may just be the first digit */
				/* Digit ist not the last digit, so it can be  ","  and "." */
				startIndex = 1;
				endIndex = lenAllowedCharactersBuffer;
		};
		for(ii=startIndex; ii<endIndex; ii++) {
			// printf("[%d] [%c]  [%c] \n", ii, wordBuffer[aWordIndex], aListPointer[ii] );
			if (wordBuffer[aWordIndex] == aListPointer[ii] ) {
				if ( ( wordBuffer[aWordIndex] == DIGIT_COMMA ) || ( wordBuffer[aWordIndex] == DIGIT_DOT ) ) {
					break;
				};
				if ( wordBuffer[aWordIndex] == DIGIT_MINUS ) {
					valueIsNegative = TRUE;
					break;
				};
				value = value*forthTasks[forthCurrentTask].forthBase + ii - 1;
				// printf("nachher ii =%d, new value = %d \n", ii, value);
				break;
			};
		};
		//printf("value %lld\n",value);
		aWordIndex++;
	};

	if ( valueIsNegative ) {
		value = value*(-1);
	};

#if SYSTEM_ARCHITECTURE == SYSTEM_ARCHITECTURE_HOST
	lowValue = (int)value;
#endif
#if ( SYSTEM_ARCHITECTURE == SYSTEM_ARCHITECTURE_8BIT ) || ( SYSTEM_ARCHITECTURE == SYSTEM_ARCHITECTURE_16BIT )
	if ( value > UINT_MAX) {
		/* Overflow: ... value .. UINT_MAX[ */
		printf("SP Integer Overflow!\n");
	} else if ( value > INT_MAX ) {
		/* [UINT_MAX ... value .. INT_MAX[ */
		short int shortValue = value & INT_MAX;
		lowValue = - ( shortValue ^ INT_MAX );
		//printf("short = %d, low = %d\n", shortValue, lowValue);
	} else if ( value >= INT_MIN ) {
		/* [INT_MAX ... value .. INT_MIN] */
		lowValue = value;
	} else if ( value >= UINT_MIN ) {
		/*  ]INT_MIN... value .. UINT_MIN] */
		short int shortValue = value & INT_MAX;
		lowValue =  shortValue;
		//printf("short = %d, low = %d\n", shortValue, lowValue);
	} else if ( value < UINT_MIN ) {
		/* Underflow */
		printf("SP Integer Underflow!\n");
	};
#endif	
#if ( SYSTEM_ARCHITECTURE == SYSTEM_ARCHITECTURE_32BIT ) || ( SYSTEM_ARCHITECTURE == SYSTEM_ARCHITECTURE_64BIT )
	lowValue = value;
#endif

	//printf("final value = %lld, lowValue = %d \n", value, lowValue);
    forthTasks[forthCurrentTask].dataStackSpace[forthTasks[forthCurrentTask].dataStackIndex++] = lowValue;

}

/* Check if word is a Double Precision Integer, e.g. "12. d." => "12" ( but not "1.2 d." => "12" ) */
int isDPInteger(void){
	int result = FALSE;
    int aWordIndex = 0;
	int lenWordBuffer = (int)strlen(wordBuffer);
    char *aListPointer = (char*)NULL;
	int lenAllowedCharactersBuffer = 0;
	
	switch (forthTasks[forthCurrentTask].forthBase) {
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
			return(result);
	};
	/* Don't proceed if just 1 character => "." is necessary, but is no valid Double Precision Integer */
	result = ! ( lenWordBuffer == 1);
	if ( result ) {
		/* check if number */
    	while(aWordIndex < lenWordBuffer) {
			int isNumeric = FALSE;
			int startIndex = 0;
			int endIndex = 0;
			int ii = 0;
			if ( aWordIndex == 0 ) {
				/* Number can start with "-" */
				/* Number can't start with "," or "." */
				startIndex = 0;
				endIndex = lenAllowedCharactersBuffer-2;
			} else if ( aWordIndex == ( lenWordBuffer - 1 ) ) {
					/* "-" may just be the first digit */
					/* Digit is last digit, so it must be "." */
					startIndex = lenAllowedCharactersBuffer-1;
					endIndex = lenAllowedCharactersBuffer;
				} else {
					/* "-" may just be the first digit */
					/* Digit ist not the last digit, so it can be ","  and "." */
					startIndex = 1;
					endIndex = lenAllowedCharactersBuffer;
			};
			for(ii=startIndex; ii<endIndex; ii++) {
				//printf("[%d] [%c]  [%c] \n", ii, wordBuffer[aWordIndex], aListPointer[ii] );
				if (wordBuffer[aWordIndex] == aListPointer[ii] ) {
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

/* Convert word to an Double Precision Integer and store it on the DataStack */
/* As with 32-bit computers, int = long, LONG_LONG variable type is used for Double Precision value */
void storeDPInteger(void){
    LONG_LONG value = 0;
	int valueIsNegative = FALSE;
    int aWordIndex = 0;
	int lenWordBuffer = (int)strlen(wordBuffer);
    char *aListPointer = (char*)NULL;
	int lenAllowedCharactersBuffer = 0;
	int lowValue = 0;
	int highValue = 0;

	switch (forthTasks[forthCurrentTask].forthBase) {
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
			return;
	};
	/* Don't proceed if just 1 character => "." is necessary, but is no valid Double Precision Integer */
	if (! ( lenWordBuffer == 1) ) {
		/* check if number */
    	while(aWordIndex < lenWordBuffer) {
			int startIndex = 0;
			int endIndex = 0;
			int ii = 0;
			if ( aWordIndex == 0 ) {
				/* Number can start with "-" */
				/* Number can't start with "," or "." */
				startIndex = 0;
				endIndex = lenAllowedCharactersBuffer-2;
			} else if ( aWordIndex == ( lenWordBuffer - 1 ) ) {
					/* "-" may just be the first digit */
					/* Digit is last digit, so it must be "." */
					startIndex = lenAllowedCharactersBuffer-1;
					endIndex = lenAllowedCharactersBuffer;
				} else {
					/* "-" may just be the first digit */
					/* Digit ist not the last digit, so it can be ","  and "." */
					startIndex = 1;
					endIndex = lenAllowedCharactersBuffer;
			};
			for(ii=startIndex; ii<endIndex; ii++) {
				//printf("[%d] [%c]  [%c] \n", ii, wordBuffer[aWordIndex], aListPointer[ii] );
				if (wordBuffer[aWordIndex] == aListPointer[ii] ) {
					if ( ( wordBuffer[aWordIndex] == DIGIT_COMMA ) || ( wordBuffer[aWordIndex] == DIGIT_DOT ) ) {
						break;
					};
					if ( wordBuffer[aWordIndex] == DIGIT_MINUS ) {
						valueIsNegative = TRUE;
						break;
					};
					value = value*forthTasks[forthCurrentTask].forthBase + ii - 1;
					// printf("nachher ii =%d, new value = %lld \n", ii, value);
					break;
				};
			};
			aWordIndex++;
		};
	};

	if ( valueIsNegative ) {
		value = value*(-1);
	};

#if SYSTEM_ARCHITECTURE == SYSTEM_ARCHITECTURE_HOST
	lowValue = (int) (value % ( (LONG_LONG)INT_MAX + 1 ));
	highValue = (int) (value / ( (LONG_LONG)INT_MAX + 1 ));
#endif
#if ( SYSTEM_ARCHITECTURE == SYSTEM_ARCHITECTURE_8BIT ) || ( SYSTEM_ARCHITECTURE == SYSTEM_ARCHITECTURE_16BIT )
	/* 2147483647+1 = 0x7FFFFFFF +1 => -2147483648 */
	/* -2147483648-1 = 0x8000000-1 => 2147483647 */
	lowValue = value % ( (LONG_LONG) INT_MAX+1 );
	highValue = value / ( (LONG_LONG) INT_MAX+1 );

    if ( highValue != 0) {
		/* Overflow */
		printf("DP Integer Overflow!\n");
	};
#endif	
#if ( SYSTEM_ARCHITECTURE == SYSTEM_ARCHITECTURE_32BIT ) || ( SYSTEM_ARCHITECTURE == SYSTEM_ARCHITECTURE_64BIT )
	lowValue = value % ( (LONG_LONG) INT_MAX+1 );
	highValue = value / ( (LONG_LONG) INT_MAX+1 );
#endif

	//printf("final value = %lld; low = %d, high = %d \n", value, lowValue, highValue);
    forthTasks[forthCurrentTask].dataStackSpace[forthTasks[forthCurrentTask].dataStackIndex++] = lowValue;
    forthTasks[forthCurrentTask].dataStackSpace[forthTasks[forthCurrentTask].dataStackIndex++] = highValue;

}

/* Check if word is a Float, but just in DECIMAL mode, e.g. "1.2e .F" => 1.2 */
/* I was told: According to the ANS standard, floating-point numbers are always 
   interpreted as decimal (regardless of the content of the BASE variable) */
int isFloat(void){
	int result = FALSE;
    int aWordIndex = 0;
	int lenWordBuffer = (int)strlen(wordBuffer);
    char *aListPointer = (char*)NULL;
	int lenAllowedCharactersBuffer = 0;
	
	if (forthTasks[forthCurrentTask].forthBase == DECIMAL ) {
		aListPointer = aListofDecimal;
		lenAllowedCharactersBuffer = sizeof(aListofDecimal);
	} else {
		return(result);
	};
	
	/* TBD */

	return(result);
}

/* Convert word to an Float and store it on the FloatStack */
void storeFloat(void){
    float value = 0;
	int valueIsNegative = FALSE;
    int aWordIndex = 0;
	int lenWordBuffer = (int)strlen(wordBuffer);
    char *aListPointer = (char*)NULL;
	int lenAllowedCharactersBuffer = 0;
	int lowValue = 0;
	int highValue = 0;

    /* TBD */

	//printf("final value = %f \n", value);
    forthTasks[forthCurrentTask].floatStackSpace[forthTasks[forthCurrentTask].floatStackIndex++] = value;

}

/* Find word in wordlist */
int isPermWord(void){
	int ii = 0;
	int result = FALSE;

	int lenForthWords = sizeof(forthWords) / sizeof(forthWords[0]);
	int lenCommonWords = sizeof(commonWords) / sizeof(commonWords[0]);
	int lenFpointWords = sizeof(fpointWords) / sizeof(fpointWords[0]);

    for(ii=0;ii<lenForthWords;ii++) {
		if ( strcmp(wordBuffer, forthWords[ii].forthWordName) == 0 ) {
			result = TRUE;
			if ( forthWords[ii].forthOpt != NULL ) {
				/* Wort ausführen */
				forthWords[ii].forthOpt();
			};
		 	break;
	 	};
	}

    for(ii=0;ii<lenFpointWords;ii++) {
		if ( strcmp(wordBuffer, fpointWords[ii].forthWordName) == 0 ) {
			result = TRUE;
			if ( fpointWords[ii].forthOpt != NULL ) {
				/* Wort ausführen */
				fpointWords[ii].forthOpt();
			};
		 	break;
	 	};
	}

	for(ii=0;ii<lenCommonWords;ii++) {
		if ( strcmp(wordBuffer, commonWords[ii].forthWordName) == 0 ) {
			result = TRUE;
			if ( commonWords[ii].forthOpt != NULL ) {
				/* Wort ausführen */
				commonWords[ii].forthOpt();
			};
		 	break;
	 	};
	}
	return(result);
}

/* Parse the terminal input buffer (tib) */
void forthParseTib(void){
    int aTibIndex = 0;
    int aWordIndex = 0;
	int aWordDetected = FALSE;
	int lenIoTib = (int)strlen(ioTib);
	int isSPIntegerWord, isDPIntegerWord, isFloatWord, isWordFound;
	while(aTibIndex < lenIoTib) {
		if ( aWordDetected ) {
			if ( ioTib[aTibIndex] <= SPACE ) {
				/* Finish word detection */
				aWordDetected = FALSE;
				
				/* Error Message Nummer zurücksetzen */
				forthTasks[forthCurrentTask].errorNumber = 0;
				
				isSPIntegerWord = isSPInteger();
				isDPIntegerWord = isDPInteger();
				isFloatWord = isFloat();
				isWordFound = isPermWord();
#if defined (__DEBUG__)
				printf("word = [%s], isSPInteger = [%d], isDPInteger = [%d], \
isDPFloat = [%d], isWordFound = [%d]\n",
					   wordBuffer, isSPIntegerWord, isDPIntegerWord,
					   isFloatWord, isWordFound);
#endif
				if (!isWordFound) {
					if (isSPIntegerWord) {
						storeSPInteger();
					};
					if (isDPIntegerWord) {
						storeDPInteger();
					};
					if (isFloatWord) {
						storeFloat();
					};

					if (!isSPInteger() && !isDPInteger() && !isFloat()) {
						forthTasks[forthCurrentTask].errorNumber = ERROR_NOT_IN_CURRENT_DIRECTORY;
						privateErrorHandler();
	
					};
				};	
    			// int aWordIndex = 0;
		 		// wordBuffer[aWordIndex] = 0;
			} else {
				/* Continue word detection */
				wordBuffer[aWordIndex++] = ioTib[aTibIndex];
		 		wordBuffer[aWordIndex] = 0;
			};
		} else {
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
//		printf("continue [%d]\n", aTibIndex);
#endif

   	};
}

/*  Process terminal input buffer (tib) */
void processTib(void) {
	forthParseTib();
}
/**************************/

#if H2O_INTERACTIVE
#include "h2oint2.h"
#endif

/* No processing of commands passed by the command line interface */
void noParameterPreProcessing(void) {
    if (forthIsVerbose){
		printf(COPYRIGHT_MESSAGE);
	};	
	forthIsWaitingForKeyboard = FALSE;
	forthReadsTerminal = TRUE;
	forthReadsKeyboard = FALSE;
}

int main(int argc, char* argv[])
{
	//printf("Integer size = %d\n",sizeof(int));
	//printf("LONG_LONG size = %d\n",sizeof(LONG_LONG));
	forthInit();
	do {
#if H2O_NOEXIT 
		noParameterPreProcessing();
#else
		parameterPreProcessing(argc, argv);
#endif
#if H2O_INTERACTIVE
		if (!forthIsExit) {
			/* Tib is now an empty string */
			//ioTib[0] = 0;
			do {
				/* Main FORTH input loop */
				readInput();
				processTib();
			} while (!forthIsExit);
		};
#endif
#if H2O_NOEXIT
		forthIsExit = FALSE;
#else 
		parameterPostProcessing();
#endif
	} while (H2O_NOEXIT);
	return(exitCode);
}
