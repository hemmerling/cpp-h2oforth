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

/*********************************/
/* Configuration switches        */
/*********************************/

#define BUILT 1

//#undef __DEBUG__
#define __DEBUG__

//#undef __DEVELOP__
#define __DEVELOP__

//#undef FLOAT_SUPPORT
#define FLOAT_SUPPORT

//#undef H2O_INTERACTiVE
#define H2O_INTERACTIVE

//#undef ECHO_KEYBOARD_INPUT
#define ECHO_KEYBOARD_INPUT

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
#define MAX_BASE 36
#define NUMBERTABLE_SIZE MAX_BASE+3

#define DIGIT_COMMA ','
#define DIGIT_DOT '.'
#define DIGIT_MINUS '-'

#define STRING_SPACE " "
#define STRING_CR "\n"
 
#define COPYRIGHT_MESSAGE "H2oForth by Rolf Hemmerling, (c) 2021-2022, MIT License"

#define MAX_DATASTACK 1024
#define MAX_FLOATSTACK 64
#define MAX_RETURNSTACK 1024
/* Blocks are always 1024 bytes */
#define MAX_BLOCKBUFFER 1024
/* Maximum length of a text file line, usually 255 */
#define MAX_INPUTBUFFER 255
#define MAX_FORTHTASKS 1

#define BLOCK_COLUMNS 64
#define BLOCK_LINES 16

#define BASE_FORMAT_DECIMAL "%d"
#define BASE_FORMAT_EMPTY ""
#define BASE_FORMAT_HEX "%p"
//#define BASE_FORMAT_HEX "%x"
#define BASE_FORMAT_OCTAL "%o"

#define BASE_FORMAT_LDECIMAL "%lld"
#define BASE_FORMAT_LHEX "%llp"
//#define BASE_FORMAT_LHEX "%llx"
#define BASE_FORMAT_LOCTAL "%llo"

#define CELLSIZE2 2
#define CELLSIZE4 4
#define CELLSIZE8 8

#define MAX_FORTHWORD_ID 65535UL

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

/* CELL must have the size of a pointer / address */
/* Double Precision Integer just if sizeof(LONG_LONG)>sizeof(int) */

#ifdef _WIN64
#ifdef __MINGW32__
/* MinGW, Win32 compiler */
#define CELL int
#define LONG_LONG long long
#define DPINTEGER_SUPPORT
#else
/* Microsoft C/C++, Win64 compilation target */
#define CELL long long
#define LONG_LONG long long
#undef DPINTEGER_SUPPORT
#endif
#else
#ifdef _WIN32
/* Microsoft C/C++, Win32 compilation target */
#undef CELL
#define CELL int
#define LONG_LONG long long
#define DPINTEGER_SUPPORT
#endif

#ifdef __GNUC__
#if(__WORDSIZE == 32)
#undef CELL
#define CELL int
#define LONG_LONG long long
#define DPINTEGER_SUPPORT
#endif
#if(__WORDSIZE == 64)
#undef CELL
#define CELL long long
#define LONG_LONG long long
#undef DPINTEGER_SUPPORT
#endif
#endif

#if defined (__DJGPP__)
#undef CELL
#define CELL int
#define LONG_LONG long long
#define DPINTEGER_SUPPORT
#endif

#if defined(__BORLANDC__) || defined(__TURBOC__)
/* "long long" is not available with Borland C++ 5.5.1 */
#undef LONG_LONG
#define LONG_LONG long
#undef DPINTEGER_SUPPORT
#endif

#if defined(AVR_UNO) || defined(AVR_ADK)
/* "long long" is not available with Arduino AVR C/C++ */
#undef LONG_LONG
#define LONG_LONG long
#undef DPINTEGER_SUPPORT
#endif

#endif

#undef UINT_MIN
#define UINT_MIN -4294967296
#endif

#if ( SYSTEM_ARCHITECTURE == SYSTEM_ARCHITECTURE_081616BIT )
/* Emulation of 081616BIT targets */
#define CELLSIZE 2
#define CELL int
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
#define CELL int
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
#define CELL int
#define LONG_LONG long
#undef DPINTEGER_SUPPORT
#endif

#if ( SYSTEM_ARCHITECTURE == SYSTEM_ARCHITECTURE_326464BIT )
#define CELL long long
#define LONG_LONG long long
#define DPINTEGER_SUPPORT
#endif

#if ( SYSTEM_ARCHITECTURE == SYSTEM_ARCHITECTURE_646464BIT )
#define CELL int
#define LONG_LONG long long
#undef DPINTEGER_SUPPORT
#endif

#if ( SYSTEM_ARCHITECTURE == SYSTEM_ARCHITECTURE_6464128BIT )
#define CELL int
#define LONG_LONG __int128
#define DPINTEGER_SUPPORT
#endif

void forthInit(void);
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
int main(int, char**);
#endif
