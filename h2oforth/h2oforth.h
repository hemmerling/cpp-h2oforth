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
#define TASKINGSTD_FPC 2
#define TASKINGSTD_FORTH83 3
#define TASKINGSTD_BIG 4
#define TASKINGSTD_RTF 5
#define TASKINGSTD_CAMEL 6
#define TASKINGSTD_GNUFORTH 7

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

#define MSGSTD_SYSTEM 1
#define MSGSTD_FIGFORTH 2
#define MSGSTD_APX_FIGFORTH 3
#define MSGSTD_BBC_FIGFORTH 4
#define MSGSTD_BBC_FORTH79 5
#define MSGSTD_WIN32FORTH 6

#define MAX_BASE_CAPITALS_ONLY 26+10
#define MAX_BASE_MIXEDCASE 26*2+10

#define TPOLLING1 1
#define TPOLLING2 2

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
#define __DEBUG__
#else
//#undef __DEBUG__
#define __DEBUG__
#endif

//#undef __DEVELOP__
#define __DEVELOP__

//#undef SYSTEM_INTERACTIVE
#define SYSTEM_INTERACTIVE

/* Read some static input from ( compiled ) ROM code, at start of input processing */
#define READ_STATIC_INPUT

/* SYSTEM_WITH_FILEIO might be changed by NO_EXIT setting in "h2oarc1.h" */
//#undef SYSTEM_WITH_FILEIO
#define SYSTEM_WITH_FILEIO

//#undef ECHO_KEYBOARD_INPUT
#define ECHO_KEYBOARD_INPUT

#undef EXCEPTION_SUPPORT
//#define EXCEPTION_SUPPORT

#undef LOWERCASE_BASE_SUPPORT
//#define LOWERCASE_BASE_SUPPORT

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
#define CELL_FLOAT float
//#define CELL_FLOAT double
#endif

#ifdef FLOAT_SUPPORT
//#undef FLOAT_ON_DATASTACK
#define FLOAT_ON_DATASTACK
#endif

/* FLOAT options end ----------- */

/* ARDUINO options start --------- */

#define ARDUINO_TERMINAL_POLLING TPOLLING1

/* 
   If you are using the "Serial Monitor" of the original "Arduino IDE 1" 
   as terminal, please define ARDUINO_IDE1,
   so that the input from the input window is echoed to the output window  
 */
#define ARDUINO_SERIAL_MONITOR

/* Just for fun, switch the internal LED after each processed FORTH word */
#define ARDUINO_SWITCH_LIGHT

/* ARDUINO options end ----------- */

#undef TESTING_SUPPORT
//#define TESTING_SUPPORT

#undef TASKINGSTANDARD
//#define TASKINGSTANDARD TASKINGSTD_FORTH83
//#define TASKINGSTANDARD TASKINGSTD_FPC
//#define TASKINGSTANDARD TASKINGSTD_VOLK
//#define TASKINGSTANDARD TASKINGSTD_BIG
//#define TASKINGSTANDARD TASKINGSTD_RTF
//#define TASKINGSTANDARD TASKINGSTD_CAMEL
//#define TASKINGSTANDARD TASKINGSTD_GNUFORTH

#undef ERROR_BEHAVIOUR
#define ERROR_BEHAVIOUR ERROR_CAUSES_IGNORE
//#define ERROR_BEHAVIOUR ERROR_CAUSES_HALT
//#define ERROR_BEHAVIOUR ERROR_CAUSES_EXIT_TO_PROMPT
//#define ERROR_BEHAVIOUR ERROR_CAUSES_RESET
//#define ERROR_BEHAVIOUR ERROR_CAUSES_EXIT_TO_OS

#undef MESSAGESTANDARD
#define MESSAGESTANDARD MSGSTD_SYSTEM
//#define MESSAGESTANDARD MSGSTD_FIGFORTH
//#define MESSAGESTANDARD MSGSTD_APX_FIGFORTH
//#define MESSAGESTANDARD MSGSTD_BBC_FIGFORTH
//#define MESSAGESTANDARD MSGSTD_BBC_FORTH79
//#define MESSAGESTANDARD MSGSTD_WIN32FORTH

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

#define MODE_INTERPRET 0
#define MODE_COMPILE 1

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

#define STRING_SEMICOLON ";"
#define STRING_SPACE " "
#define STRING_CR "\n"

/* Linux & MSDOS & Windows shell streams */
#define STREAM_STDIN 0
#define STREAM_STDOUT 1
#define STREAM_STDERR 2
/* Powershell streams */
#define STREAM_INPUT 0
#define STREAM_SUCCESS 1
#define STREAM_ERROR 2
#define STREAM_WARNING 3
#define STREAM_VERBOSE 4
#define STREAM_DEBUG 5
#define STREAM_INFORMATION 6

#define COPYRIGHT_MESSAGE "H2oForth by Rolf Hemmerling, (c) 2021-2022, MIT License"

#define MAX_DATASTACK 32
#define MAX_FLOATSTACK 32
#define MAX_RETURNSTACK 32
/* Blocks are always 1024 bytes */
#define MAX_BLOCKBUFFER 1024
#define MAX_FORTHTASKS 1

/* Size of local printBuffer, for use with sprintf() */
#define MAX_PRINTBUFFER 128

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

#define MAX_DEFINITIONS 4
#define MAX_DEFINITIONSPACE 32
#define WORDID unsigned int
#define MAX_WORDID 65535U

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
#pragma warning( disable : 4101 )
#define CELL_INTEGER long long
#define CELL_UNSIGNED unsigned long long
#define LONG_LONG long long
#undef DPINTEGER_SUPPORT
#endif
#else
#ifdef _WIN32
/* Microsoft C/C++, Win32 compilation target */
/* Open Watcom C/C++ 1.9, Win32 (NT/Win95/Win32s) */
//#pragma warning( disable : 4101 )
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
/* Turns off warning #8004, 'identifier' is assigned a value that is never used */
#pragma warn -8004 
/* Turns off warning #8057, 'identifier' is never used in function 'function' */
#pragma warn -8057
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
//#pragma warning * 9;
//#pragma warning * 1;
#pragma warning 14 9;
#pragma warning 726 9;
#endif

#ifdef ARDUINO
#include <arduino.h>
#include <avr/pgmspace.h>
/* Arduino Firmware serial receive buffer = 64, but here set to 255 */
#define MAX_INPUTBUFFER 255 
#define PUTS(STRING) Serial.println(STRING)
#define FPUTS_OUT(STRING) Serial.print(STRING)
#define FPUTS_ERR(STRING) Serial.print(STRING)
#define PERROR(STRING) Serial.println(STRING)
#define FPUTC_OUT(CHAR) Serial.write(CHAR)
#define FPUTC_ERR(CHAR) Serial.write(CHAR)
#define _PUTCH(CHAR) Serial.write(CHAR)
#define PUTCHAR(CHAR) Serial.write(CHAR)
#define _GETCH() Serial.read()
#define GETCHAR() Serial.read()
#define CHAR_AVAILABLE Serial.available()
/* "long long" is not available with Arduino AVR C/C++ */
#define CELL_INTEGER int
#define CELL_UNSIGNED unsigned int
#undef LONG_LONG
#define LONG_LONG long
#undef DPINTEGER_SUPPORT
#else
/* Maximum length of a text file line, usually 255 */
#define MAX_INPUTBUFFER 255
#define PUTS(X) puts(X)
#define FPUTS_OUT(STRING) fputs(STRING, stdout)
#define FPUTS_ERR(STRING) fputs(STRING, stderr)
#define PERROR(STRING) perror(STRING)
#define FPUTC_OUT(CHAR) fputc(CHAR, stdout)
#define FPUTC_ERR(CHAR) fputc(CHAR, stderr)
#define _PUTCH(CHAR) _putch(CHAR)
#define PUTCHAR(CHAR) putchar(CHAR)
#define _GETCH() _getch()
#define GETCHAR() getchar()
#define CHAR_AVAILABLE 1
#define SERIAL_8N1 6
#define LED_BUILTIN 13
#define INPUT 0
#define OUTPUT 1
#define INPUT_PULLUP 2
#define HIGH 1
#define LOW 0
/* Analog Reference for Arduino Mega */
#define EXTERNAL 0
#define DEFAULT 1
#define INTERNAL1V1 2
#define INTERNAL2V56 3
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
#define CMSG_SUCCESS(X) privateCMessage(X, STREAM_SUCCESS);
#define CMSG_ERROR(X) privateCMessage(X, STREAM_ERROR);
#define CMSG_WARNING(X) privateCMessage(X, STREAM_WARNING);
#define CMSG_VERBOSE(X) privateCMessage(X, STREAM_VERBOSE);
#define CMSG_INFORMATION(X) privateCMessage(X, STREAM_INFORMATION);
#define SMSG_SUCCESS(X) privateSMessage((char *)X, STREAM_SUCCESS, FALSE, FALSE);
#define SMSG_SUCCESS_CR(X) privateSMessage((char *)X, STREAM_SUCCESS, FALSE, TRUE);
#define SMSG_SUCCESS2(X,CR1,CR2) privateSMessage((char *)X, STREAM_SUCCESS, CR1, CR2);
#define SMSG_ERROR(X) privateSMessage((char *)X, STREAM_ERROR, FALSE, FALSE);
#define SMSG_ERROR_CR(X) privateSMessage((char *)X, STREAM_ERROR, FALSE, TRUE);
#define SMSG_ERROR_CRCR(X) privateSMessage((char *)X, STREAM_ERROR, TRUE, TRUE);
#define SMSG_WARNING(X) privateSMessage((char *)X, STREAM_WARNING, TRUE, TRUE);
#define SMSG_VERBOSE(X) privateSMessage((char *)X, STREAM_VERBOSE, TRUE, TRUE);
#define SMSG_INFORMATION(X) privateSMessage((char *)X, STREAM_INFORMATION, TRUE, TRUE);

#ifdef ARDUINO
#define PCMSG_SUCCESS(X) {privateCMessage(pgm_read_byte(X), STREAM_SUCCESS);};
#define PCMSG_ERROR(X) {privateCMessage(pgm_read_byte(X), STREAM_ERROR);};
#define PCMSG_WARNING(X) {privateCMessage(pgm_read_byte(X), STREAM_WARNING);};
#define PCMSG_VERBOSE(X) {privateCMessage(pgm_read_byte(X),  STREAM_VERBOSE);};
#define PCMSG_INFORMATION(X) {privateCMessage(pgm_read_byte(X),  STREAM_INFORMATION);};
#define PRINT_BUFFER forthTasks[forthState.forthCurrentTask].printBuffer
#define PSMSG_SUCCESS(X) {strcpy_P(PRINT_BUFFER, PSTR(X)); privateSMessage(PRINT_BUFFER, STREAM_SUCCESS, FALSE, FALSE);};
#define PSMSG_SUCCESS_CR(X) {strcpy_P(PRINT_BUFFER, PSTR(X)); privateSMessage(PRINT_BUFFER, STREAM_SUCCESS, FALSE, TRUE);};
#define PSMSG_SUCCESS2(X,CR1,CR2) {strcpy_P(PRINT_BUFFER, PSTR(X)); privateSMessage(PRINT_BUFFER, STREAM_SUCCESS, CR1, CR2);};
#define PSMSG_ERROR(X) {strcpy_P(PRINT_BUFFER, PSTR(X)); privateSMessage(PRINT_BUFFER, STREAM_ERROR, FALSE, FALSE);};
#define PSMSG_ERROR_CR(X) {strcpy_P(PRINT_BUFFER, PSTR(X)); privateSMessage(PRINT_BUFFER, STREAM_ERROR, FALSE, TRUE);};
#define PSMSG_ERROR_CRCR(X) {strcpy_P(PRINT_BUFFER, PSTR(X)); privateSMessage(PRINT_BUFFER, STREAM_ERROR, TRUE, TRUE);};
#define PSMSG_WARNING(X) {strcpy_P(PRINT_BUFFER, PSTR(X)); privateSMessage(PRINT_BUFFER, STREAM_WARNING, TRUE, TRUE);};
#define PSMSG_VERBOSE(X) {strcpy_P(PRINT_BUFFER, PSTR(X)); privateSMessage(PRINT_BUFFER, STREAM_VERBOSE, TRUE, TRUE);};
#define PSMSG_INFORMATION(X) {strcpy_P(PRINT_BUFFER, PSTR(X)); privateSMessage(PRINT_BUFFER, STREAM_INFORMATION, TRUE, TRUE);};
//#define PSMSG_SUCCESS(X) {char buffer[MAX_PRINTBUFFER]; strcpy_P(buffer, PSTR(X)); privateSMessage(buffer, STREAM_SUCCESS, FALSE, FALSE);};
//#define PSMSG_SUCCESS_CR(X) {char buffer[MAX_PRINTBUFFER]; strcpy_P(buffer, PSTR(X)); privateSMessage(buffer, STREAM_SUCCESS, FALSE, TRUE);};
//#define PSMSG_SUCCESS2(X,CR1,CR2) {char buffer[MAX_PRINTBUFFER]; strcpy_P(buffer, PSTR(X)); privateSMessage(buffer, STREAM_SUCCESS, CR1, CR2);};
//#define PSMSG_ERROR(X) {char buffer[MAX_PRINTBUFFER]; strcpy_P(buffer, PSTR(X)); privateSMessage(buffer, STREAM_ERROR, FALSE, FALSE);};
//#define PSMSG_ERROR_CR(X) {char buffer[MAX_PRINTBUFFER]; strcpy_P(buffer, PSTR(X)); privateSMessage(buffer, STREAM_ERROR, FALSE, TRUE);};
//#define PSMSG_ERROR_CRCR(X) {char buffer[MAX_PRINTBUFFER]; strcpy_P(buffer, PSTR(X)); privateSMessage(buffer, STREAM_ERROR, TRUE, TRUE);};
//#define PSMSG_WARNING(X) {char buffer[MAX_PRINTBUFFER]; strcpy_P(buffer, PSTR(X)); privateSMessage(buffer, STREAM_WARNING, TRUE, TRUE);};
//#define PSMSG_VERBOSE(X) {char buffer[MAX_PRINTBUFFER]; strcpy_P(buffer, PSTR(X)); privateSMessage(buffer, STREAM_VERBOSE, TRUE, TRUE);};
//#define PSMSG_INFORMATION(X) {char buffer[MAX_PRINTBUFFER]; strcpy_P(buffer, PSTR(X)); privateSMessage(buffer, STREAM_INFORMATION, TRUE, TRUE);};
#else
#define PCMSG_SUCCESS(X) privateCMessage(X, STREAM_SUCCESS);
#define PCMSG_ERROR(X) privateCMessage(X, STREAM_ERROR);
#define PPCMSG_WARNING(X) privateCMessage(X, STREAM_WARNING);
#define PCMSG_VERBOSE(X) privateCMessage(X, STREAM_VERBOSE);
#define PCMSG_INFORMATION(X) privateCMessage(X, STREAM_INFORMATION);
#define PSMSG_SUCCESS(X) privateSMessage(char *)X, STREAM_SUCCESS, FALSE, FALSE);
#define PSMSG_SUCCESS_CR(X) privateSMessage((char *)X, STREAM_SUCCESS, FALSE, TRUE);
#define PSMSG_SUCCESS2(X,CR1,CR2) privateSMessage((char *)X, STREAM_SUCCESS, CR1, CR2);
#define PSMSG_ERROR(X) privateSMessage((char *)X, STREAM_ERROR, FALSE, FALSE);
#define PSMSG_ERROR_CR(X) privateSMessage((char *)X, STREAM_ERROR, FALSE, TRUE);
#define PSMSG_ERROR_CRCR(X) privateSMessage((char *)X, STREAM_ERROR, TRUE, TRUE);
#define PSMSG_WARNING(X) privateSMessage((char *)X, STREAM_WARNING, TRUE, TRUE);
#define PSMSG_VERBOSE(X) privateSMessage((char *)X, STREAM_VERBOSE, TRUE, TRUE);
#define PSMSG_INFORMATION(X) privateSMessage((char *)X, STREAM_INFORMATION, TRUE, TRUE);
#endif

#if defined (__DEBUG__)
#define CMSG_DEBUG(X) privateCMessage(X, STREAM_DEBUG);
#ifdef ARDUINO
#define PCMSG_DEBUG(X) privateCMessage(pgm_read_byte(X), STREAM_DEBUG);
//#define PSMSG_DEBUG(X) privateSMessage((char *)X, STREAM_DEBUG, TRUE, TRUE);
#define PSMSG_DEBUG(X) {strcpy_P(PRINT_BUFFER, PSTR(X)); privateSMessage(PRINT_BUFFER, STREAM_DEBUG, TRUE, TRUE);};
//#define PSMSG_DEBUG(X) {char buffer[MAX_PRINTBUFFER]; strcpy_P(buffer, PSTR(X)); privateSMessage(buffer, STREAM_DEBUG, TRUE, TRUE);};
//#define PSMSG_DEBUG(X) {FPUTC_ERR(CHAR_CR); FPUTS_ERR(F(X)); FPUTC_ERR(CHAR_CR);};
#else
#define PCMSG_DEBUG(X) privateCMessage(X, STREAM_DEBUG);
#define PSMSG_DEBUG(X) privateSMessage((char *)X, STREAM_DEBUG, TRUE, TRUE);
#endif
#else
#define PSMSG_DEBUG(X)
#endif

int isSPInteger(void);
void storeSPInteger(void);
int isDPInteger(void);
void storeDPInteger(void);
int isFloat(void);
void storeFloat(void);
int istPermWord(void);
//typedef_forthWord *getPermWord(int);
int isEndOfCompilation(void);
void executePermWord(void);
void forthParseTib(void);
void processTib(void);
void noParameterPreProcessing(void);
void setup(void);
void loop(void);
int main(int, char**);
#endif
