#ifndef H2OFORTH
#define H2OFORTH 

#define AIM65_FORTH 1
#define ATARICOINUP_FORTH 2
#define BBCMICRO_FORTH 3
#define BIG_FORTH 4
#define CAMEL_FORTH 5
#define COLOR_FORTH 6
#define E_FORTH 7
#define FIG_FORTH 8

#define FORTH79 9
#define FORTH79_REQ_DBL_ASM_EXP_REF 10
#define FORTH79_NUC_INTERP_COMP 11

#define FPC_FORTH 12
#define GNU_FORTH 13
#define HECTOR_FORTH 14
#define JUPITER_FORTH 15
#define KNAGGSBENNET_FORTH 16

#define LAXONPERRY_FORTH 17
#define LAXONPERRY_PC_FORTH 18
#define LAXONPERRY_CPM_FORTH 19
#define LAXONPERRY_CPM68K_FORTH 20

#define LMI_FORTH 21
#define LMI_MSDOS_FORTH 22
#define LMI_WIN_FORTH 23

#define MECRISP_FORTH 24
#define MVP_FORTH 25

#define NELSON_FORTH 26
#define NELSON_ESP_FORTH 27
#define NELSON_UE_FORTH 28

#define PATEL_FORTH 29
#define Q_FORTH 30
#define RCAMICRO_FORTH 31
#define RSC_FORTH 32
#define SECTOR_FORTH 33
#define TERSE_FORTH 34

#define VOLK_FORTH 35
#define VOLK_C64_FORTH 36
#define VOLK_ST_FORTH 37
#define VOLK_CPM_FORTH 38
#define VOLK_PC_FORTH 39

#define WIN32_FORTH 40

#undef FORTHSTANDARD
#define FORTHSTD_MINIMAL 1
#define FORTHSTD_BASIC 2
#define FORTHSTD_FIG 3
#define FORTHSTD_FORTH79 4
#define FORTHSTD_FORTH83 5
#define FORTHSTD_ANS94 6
#define FORTHSTD_FORTH2012 7

#undef FLOATSTD 
#define FLOAT_ANS94 1
#define FLOAT_FORTH2012 2
#define FLOAT_JUPITER 3
#define FLOAT_NELSON 4
#define FLOAT_TURBO 5

#undef FLOATSTORAGE
#define ON_FLOATSTACK 1
#define ON_DATASTACK 2

#undef TASKINGSTANDARD
#define TASKINGSTD_VOLK 1
#define TASKINGSTD_FORTH83 2
#define TASKINGSTD_BIG 3
#define TASKINGSTD_RTF 4
#define TASKINGSTD_CAMEL 5

/* XXYYZZBit = Int=XX, PTR=YY, Long(Long)=ZZ */
#define SYSTEM_ARCHITECTURE_HOST 0
#define SYSTEM_ARCHITECTURE_081616BIT 1
#define SYSTEM_ARCHITECTURE_161632BIT 2
#define SYSTEM_ARCHITECTURE_323232BIT 3
#define SYSTEM_ARCHITECTURE_326464BIT 4
#define SYSTEM_ARCHITECTURE_646464BIT 5
#define SYSTEM_ARCHITECTURE_6464128BIT 6

#define ERROR_CAUSES_IGNORE 0
#define ERROR_CAUSES_HALT 1
#define ERROR_CAUSES_EXIT_TO_PROMPT 2
#define ERROR_CAUSES_RESET 3
#define ERROR_CAUSES_EXIT_TO_OS 4

#define MAX_BASE_CAPITALS_ONLY 26+10
#define MAX_BASE_MIXEDCASE 26*2+10

/*********************************/
/* Configuration switches        */
/*********************************/

#define VERSION 1
#define BUILT 1

#ifdef ARDUINO
#define SYSTEM_EMBEDDED_SMALL
#else
//#define SYSTEM_EMBEDDED_SMALL
#endif

/* __DEBUG__ */
#ifdef SYSTEM_EMBEDDED_SMALL
#undef __DEBUG__
//#define __DEBUG__
#else
//#undef __DEBUG__
#define __DEBUG__
#endif

//#undef __DEVELOP__
#define __DEVELOP__

//#undef SYSTEM_INTERACTIVE
#define SYSTEM_INTERACTIVE

/* SYSTEM_WITH_FILEIO might be changed by NO_EXIT setting in "h2oarc1.h" */
//#undef SYSTEM_WITH_FILEIO
#define SYSTEM_WITH_FILEIO

//#undef ECHO_KEYBOARD_INPUT
#define ECHO_KEYBOARD_INPUT

#undef EXCEPTION_SUPPORT
//#define EXCEPTION_SUPPORT

//#undef LOWERCASE_BASE_SUPPORT
#define LOWERCASE_BASE_SUPPORT

/* FLOAT options start --------- */
#undef FLOAT_SUPPORT
#define FLOAT_SUPPORT

#ifdef FLOAT_SUPPORT
//#define FLOATSTD FLOAT_ANS94
//#define FLOATSTD FLOAT_FORTH2012
#define FLOATSTD FLOAT_JUPITER
//#define FLOATSTD FLOAT_NELSON
//#define FLOATSTD FLOAT_TURBO
#endif

#ifdef FLOAT_SUPPORT
//#define CELL_FLOAT float
#define CELL_FLOAT double
#endif

//#undef FLOAT_ON_DATASTACK
#define FLOAT_ON_DATASTACK

/* FLOAT options end ----------- */

#undef TESTING_SUPPORT
//#define TESTING_SUPPORT

#undef TASKINGSTANDARD
//#define TASKINGSTANDARD TASKINGSTD_FORTH83
//#define TASKINGSTANDARD TASKINGSTD_FPC
//#define TASKINGSTANDARD TASKINGSTD_VOLK
//#define TASKINGSTANDARD TASKINGSTD_BIG
//#define TASKINGSTANDARD TASKINGSTD_RTF
//#define TASKINGSTANDARD TASKINGSTD_CAMEL

#undef ERROR_BEHAVIOUR
#define ERROR_BEHAVIOUR ERROR_CAUSES_IGNORE
//#define ERROR_BEHAVIOUR ERROR_CAUSES_HALT
//#define ERROR_BEHAVIOUR ERROR_CAUSES_EXIT_TO_PROMPT
//#define ERROR_BEHAVIOUR ERROR_CAUSES_RESET
//#define ERROR_BEHAVIOUR ERROR_CAUSES_EXIT_TO_OS

#define SYSTEM_ARCHITECTURE SYSTEM_ARCHITECTURE_HOST
//#define SYSTEM_ARCHITECTURE SYSTEM_ARCHITECTURE_081616BIT
//#define SYSTEM_ARCHITECTURE SYSTEM_ARCHITECTURE_161632BIT
//#define SYSTEM_ARCHITECTURE SYSTEM_ARCHITECTURE_323232BIT
//#define SYSTEM_ARCHITECTURE SYSTEM_ARCHITECTURE_326464BIT
//#define SYSTEM_ARCHITECTURE SYSTEM_ARCHITECTURE_646464BIT
//#define SYSTEM_ARCHITECTURE SYSTEM_ARCHITECTURE_6464128BIT

#define COMMON_FORTH_WORDS
//#define H2O_FORTH_PRIMITIVES AIM65_FORTH
//#define H2O_FORTH_PRIMITIVES ATARICOINUP_FORTH
#define H2O_FORTH_PRIMITIVES BBCMICRO_FORTH
//#define H2O_FORTH_PRIMITIVES BIG_FORTH
//#define H2O_FORTH_PRIMITIVES CAMEL_FORTH
//#define H2O_FORTH_PRIMITIVES COLOR_FORTH
//#define H2O_FORTH_PRIMITIVES E_FORTH
//#define H2O_FORTH_PRIMITIVES FIG_FORTH
//#define H2O_FORTH_PRIMITIVES FORTH79
//#define H2O_FORTH_PRIMITIVES FORTH79_REQ_DBL_ASM_EXP_REF
//#define H2O_FORTH_PRIMITIVES FORTH79_NUC_INTERP_COMP
//#define H2O_FORTH_PRIMITIVES FPC_FORTH
//#define H2O_FORTH_PRIMITIVES GNU_FORTH
//#define H2O_FORTH_PRIMITIVES HECTOR_FORTH
//#define H2O_FORTH_PRIMITIVES JUPITER_FORTH
//#define H2O_FORTH_PRIMITIVES KNAGGSBENNET_FORTH
//#define H2O_FORTH_PRIMITIVES LAXONPERRY_FORTH
//#define H2O_FORTH_PRIMITIVES LAXONPERRY_PC_FORTH
//#define H2O_FORTH_PRIMITIVES LAXONPERRY_CPM_FORTH
//#define H2O_FORTH_PRIMITIVES LAXONPERRY_CPM68K_FORTH
//#define H2O_FORTH_PRIMITIVES MECRISP_FORTH
//#define H2O_FORTH_PRIMITIVES MVP_FORTH
//#define H2O_FORTH_PRIMITIVES NELSON_FORTH
//#define H2O_FORTH_PRIMITIVES NELSON_ESP_FORTH
//#define H2O_FORTH_PRIMITIVES NELSON_UE_FORTH
//#define H2O_FORTH_PRIMITIVES PATEL_FORTH
//#define H2O_FORTH_PRIMITIVES Q_FORTH
//#define H2O_FORTH_PRIMITIVES RCAMICRO_FORTH
//#define H2O_FORTH_PRIMITIVES RSC_FORTH
//#define H2O_FORTH_PRIMITIVES SECTOR_FORTH
//#define H2O_FORTH_PRIMITIVES TERSE_FORTH
//#define H2O_FORTH_PRIMITIVES VOLK_FORTH
//#define H2O_FORTH_PRIMITIVES VOLK_C64_FORTH
//#define H2O_FORTH_PRIMITIVES VOLK_ST_FORTH
//#define H2O_FORTH_PRIMITIVES VOLK_CPM_FORTH
//#define H2O_FORTH_PRIMITIVES VOLK_PC_FORTH
//#define H2O_FORTH_PRIMITIVES WIN32_FORTH

#define ARDUINO_CHARCHECK 1
//#define ARDUINO_CHARCHECK 2

/*********************************/
/* End of configuration switches */
/*********************************/

#define FALSE 0
#define EQUAL 0
#define TRUE !0
#define CHAR_NULLPOINTER (char*)NULL
#define CHAR_NULL '\0'
#define FUNCTION_NULLPOINTER ((void *)NULL)

#define SPACE 32

#define EXIT_OK 0
#define EXIT_HELP 1
#define EXIT_UNKNOWN_PARAMETER 2
#define EXIT_CODE_NOTFOUND 3
#define EXIT_BLOCKS_NOTFOUND 4
#define EXIT_FILE_NOTFOUND 5

#define IS_INTERPRETED 1
#define NOT_INTERPRETED 0
#define IS_IMMEDIATE 2
#define NOT_IMMEDIATE 0
#define IS_HIDDEN 4
#define NOT_HIDDEN 0
#define IS_IMPLEMENTED 8
#define NOT_IMPLEMENTED 0

#define BINARY 2
#define OCTAL 8
#define DECIMAL 10
#define HEX 16

#define DIGIT_COMMA ','
#define DIGIT_DOT '.'
#define DIGIT_MINUS '-'
#define DIGIT_PLUS '+'
#define DIGIT_E 'E'
#define CHAR_SPACE ' '
#define CHAR_CR '\n'

#define STRING_SPACE " "
#define STRING_CR "\n"

#define COPYRIGHT_MESSAGE "H2oForth by Rolf Hemmerling, (c) 2021-2022, MIT License"

#define MAX_DATASTACK 64
#define MAX_FLOATSTACK 64
#define MAX_RETURNSTACK 64
/* Blocks are always 1024 bytes */
#define MAX_BLOCKBUFFER 1024
#define MAX_FORTHTASKS 1

/* Size of local printBuffer, for use with sprintf() */
#define MAX_PRINTBUFFER 256

#define BLOCK_COLUMNS 64
#define BLOCK_LINES 16

#define BASE_FORMAT_DECIMAL "%d"
#define BASE_FORMAT_EMPTY "%s"
#define BASE_FORMAT_HEX "%p"
//#define BASE_FORMAT_HEX "%x"
#define BASE_FORMAT_OCTAL "%o"

#define BASE_FORMAT_FLOAT "%f"
#define BASE_FORMAT_EXPONENTIAL "%e"

#define BASE_FORMAT_LDECIMAL "%lld"
#define BASE_FORMAT_LHEX "%llp"
//#define BASE_FORMAT_LHEX "%llx"
#define BASE_FORMAT_LOCTAL "%llo"

#define CELLSIZE2 2
#define CELLSIZE4 4
#define CELLSIZE8 8

#define MAX_FORTHWORD_ID 65535U

#ifdef LOWERCASE_BASE_SUPPORT
#define MAX_BASE MAX_BASE_MIXEDCASE
#define NUMBERTABLE_SIZE MAX_BASE+3
#else
#define MAX_BASE MAX_BASE_CAPITALS_ONLY
#define NUMBERTABLE_SIZE MAX_BASE+3
#endif

#if (SYSTEM_ARCHITECTURE == SYSTEM_ARCHITECTURE_HOST)
#if !defined( INT_MIN ) || !defined( INT_MAX )
/* Please adopt this for your host compiler */
// #undef INT_MIN
// #undef INT_MAX
// #undef UINT_MAX
// #define INT_MIN -32768
// #define INT_MAX 32767
// #define UINT_MAX 65535
// #define UINT_MIN -65536
// #define INT_MIN -2147483648
// #define INT_MAX 2147483647
// #define UINT_MAX 4294967295
#endif
/* Please adopt this for your host compiler */

/* CELL_INTEGER must have the size of a pointer / address */
/* Double Precision Integer just if sizeof(LONG_LONG)>sizeof(int) */

#ifdef _WIN64
#ifdef __MINGW32__
/* MinGW, Win32 compiler */
#define CELL_INTEGER int
#define CELL_UNSIGNED unsigned int

#define LONG_LONG long long
#define DPINTEGER_SUPPORT
#else
/* Microsoft C/C++, Win64 compilation target */
#define CELL_INTEGER long long
#define CELL_UNSIGNED unsigned long long
#define LONG_LONG long long
#undef DPINTEGER_SUPPORT
#endif
#else
#ifdef _WIN32
/* Microsoft C/C++, Win32 compilation target */
/* Open Watcom C/C++ 1.9, Win32 (NT/Win95/Win32s) */
#undef CELL_INTEGER
#define CELL_INTEGER int
#define CELL_UNSIGNED unsigned int
#define LONG_LONG long long
#define DPINTEGER_SUPPORT
#endif

#ifdef __GNUC__
#if(__WORDSIZE == 32)
#undef CELL_INTEGER
#define CELL_INTEGER int
#define CELL_UNSIGNED unsigned int
#define LONG_LONG long long
#define DPINTEGER_SUPPORT
#endif
#if(__WORDSIZE == 64)
#undef CELL_INTEGER
#define CELL_INTEGER long long
#define CELL_UNSIGNED unsigned long long
#define LONG_LONG long long
#undef DPINTEGER_SUPPORT
#endif
#endif

#if defined (__DJGPP__)
#undef CELL_INTEGER
#define CELL_INTEGER int
#define CELL_UNSIGNED unsigned int
#define LONG_LONG long long
#define DPINTEGER_SUPPORT
#endif

#if defined(__BORLANDC__) || defined(__TURBOC__)
/* Borland 5.5.1 and earlier do not support 64-bit "long long" integers, however integers are 32-bit wide.    */
/* "long long" is rejected by the error message "Too many types in declaration".                              */
/* Therefore, FORTH Double Integers arithmetic therefore does not work properly, as implemented :-(           */
#define CELL_INTEGER int
#define CELL_UNSIGNED unsigned int
#undef LONG_LONG
#define LONG_LONG long
#undef DPINTEGER_SUPPORT
#endif

#if defined (__WATCOMC__)
/* Open Watcom C/C++ 1.9 */
#ifdef __DOS__
#undef CELL_INTEGER
#define CELL_INTEGER int
#define CELL_UNSIGNED unsigned int
#define LONG_LONG long long
#define DPINTEGER_SUPPORT
#ifdef __I86__
/* Open Watcom C/C++ 1.9, DOS 16-bit */
#endif
#ifdef __386__
/* Open Watcom C/C++ 1.9, DOS 32-bit */
#endif
#else
/* Open Watcom C/C++ 1.9, Win16 & Win386(Watcom Extender) */
#undef CELL_INTEGER
#define CELL_INTEGER int
#define CELL_UNSIGNED unsigned int
#define LONG_LONG long long
#define DPINTEGER_SUPPORT
#ifdef __I86__
/* Open Watcom C/C++ 1.9, Win16 */
#endif
#ifdef __386__
/* Open Watcom C/C++ 1.9, Win386(Watcom Extender), 16-bit application */
#endif
#ifdef _WIN32
/* Open Watcom C/C++ 1.9, Win32 (NT/Win95/Win32s) */
#undef CELL_INTEGER
#define CELL_INTEGER int
#define CELL_UNSIGNED unsigned int
#define LONG_LONG long long
#define DPINTEGER_SUPPORT
#endif
#endif
#endif

#ifdef ARDUINO
#include <arduino.h>
/* Arduino Firmware serial receive buffer = 64, but here set to 255 */
#define MAX_INPUTBUFFER 255 
#define DELAY(TICKS) delay(TICKS)
#define PUTS(STRING) Serial.println(STRING)
#define FPUTS_OUT(STRING) Serial.print(STRING)
#define FPUTS_ERR(STRING) Serial.print(STRING)
#define PERROR(STRING) Serial.println(STRING)
#define _PUTCH(CHAR) Serial.write(CHAR)
#define PUTCHAR(CHAR) Serial.write(CHAR)
#define _GETCH(CHAR) Serial.read(CHAR)
#define GETCHAR(CHAR) Serial.read(CHAR)
#define CHAR_AVAILABLE Serial.available()
#define TERMINAL_SETUP(SPEED, CONFIG) Serial.begin(SPEED, CONFIG)
#define PINMODE(PIN, IODIRECTION) pinMode(PIN, IODIRECTION)
#define DIGITAL_WRITE(PIN, LEVEL) digitalWrite(PIN, LEVEL)
/* "long long" is not available with Arduino AVR C/C++ */
#define CELL_INTEGER int
#define CELL_UNSIGNED unsigned int
#undef LONG_LONG
#define LONG_LONG long
#undef DPINTEGER_SUPPORT
#else
/* Maximum length of a text file line, usually 255 */
#define MAX_INPUTBUFFER 255
#define DELAY(TICKS)
#define PUTS(X) puts(X)
#define FPUTS_OUT(STRING) fputs(STRING, stdout)
#define FPUTS_ERR(STRING) fputs(STRING, stderr)
#define PERROR(STRING) perror(STRING)
#define _PUTCH(CHAR) _putch(CHAR)
#define PUTCHAR(CHAR) putchar(CHAR)
#define _GETCH(CHAR) _getch()
#define GETCHAR(CHAR) getchar()
#define CHAR_AVAILABLE 1
#define SERIAL_8N1 6
#define LED_BUILTIN 13
#define OUTPUT 1
#define HIGH 1
#define LOW 0
#define TERMINAL_SETUP(SPEED, CONFIG) 
#define PINMODE(PIN, IODIRECTION)
#define DIGITAL_WRITE(PIN, LEVEL)
#endif

#endif

#undef UINT_MIN
#define UINT_MIN -4294967296
#endif

#if ( SYSTEM_ARCHITECTURE == SYSTEM_ARCHITECTURE_081616BIT )
/* Emulation of 081616BIT targets */
#define CELL_INTEGER int
#define CELL_UNSIGNED unsigned int
#define LONG_LONG long
#define DPINTEGER_SUPPORT
#undef INT_MIN
#undef INT_MAX
#undef UINT_MAX
#define INT_MIN -256
#define INT_MAX 255
#define UINT_MAX 511
#undef UINT_MIN
#define UINT_MIN -512
#endif

#if ( SYSTEM_ARCHITECTURE == SYSTEM_ARCHITECTURE_161632BIT )
/* Emulation of 161632BIT targets */
#define CELL_INTEGER int
#define CELL_UNSIGNED unsigned int
#define LONG_LONG long
#define DPINTEGER_SUPPORT
#undef INT_MIN
#undef INT_MAX
#undef UINT_MAX
#define INT_MIN -32768
#define INT_MAX 32767
#define UINT_MAX 65535
#undef UINT_MIN
#define UINT_MIN -65536
#endif

#if ( SYSTEM_ARCHITECTURE == SYSTEM_ARCHITECTURE_323232BIT ) || \
    ( SYSTEM_ARCHITECTURE == SYSTEM_ARCHITECTURE_326464BIT )
// #undef INT_MIN
// #undef INT_MAX
// #undef UINT_MAX
#define INT_MIN -2147483648
#define INT_MAX 2147483647
#define UINT_MAX 4294967295
#undef UINT_MIN
#define UINT_MIN -4294967296
#endif

#if ( SYSTEM_ARCHITECTURE == SYSTEM_ARCHITECTURE_323232BIT ) 
#define CELL_INTEGER int
#define CELL_UNSIGNED unsigned int
#define LONG_LONG long
#undef DPINTEGER_SUPPORT
#endif

#if ( SYSTEM_ARCHITECTURE == SYSTEM_ARCHITECTURE_326464BIT )
#define CELL_INTEGER long long
#define CELL_UNSIGNED unsigned long long
#define LONG_LONG long long
#define DPINTEGER_SUPPORT
#endif

#if ( SYSTEM_ARCHITECTURE == SYSTEM_ARCHITECTURE_646464BIT )
#define CELL_INTEGER int
#define CELL_UNSIGNED unsigned int
#define LONG_LONG long long
#undef DPINTEGER_SUPPORT
#endif

#if ( SYSTEM_ARCHITECTURE == SYSTEM_ARCHITECTURE_6464128BIT )
#define CELL_INTEGER int
#define CELL_UNSIGNED unsigned int
#define LONG_LONG __int128
#define DPINTEGER_SUPPORT
#endif

/* Macros */
#if defined (__DEBUG__)
//#define DEBUG_WORD(X) privateDebugWord((char *)X);
//#define DEBUG_WORD(X) {char *nameOfFunction=(char *)X; privateDebugWord(nameOfFunction);};
#define DEBUG_WORD(X) {static const PROGMEM char nameOfFunction[] = X; privateDebugWord((char *)nameOfFunction);};
#else
#define DEBUG_WORD(X)
#endif

int isSPInteger(void);
void storeSPInteger(void);
int isDPInteger(void);
void storeDPInteger(void);
int isFloat(void);
void storeFloat(void);
int istPermWord(void);
void forthParseTib(void);
void processTib(void);
void noParameterPreProcessing(void);
void setup(void);
void loop(void);
int main(int, char**);
#endif
