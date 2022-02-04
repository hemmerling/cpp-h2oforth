#ifndef H2OIO1
#define H2OIO1

/* Maximum length of a text file line, usually 255 */
#define MAX_INPUTBUFFER 255
/* Blocks are always 1024 bytes */
#define BLOCK_BUFFER 1024
#define BLOCK_COLUMNS 64
#define BLOCK_LINES 16

/* Use LONG_LONG instead of "LONG_LONG", to support Borland C++ 5.01 */
#define LONG_LONG long long

#if defined(__DOS__) 
/* Open Watcom C/C++ 1.9 */
#define __MSDOS__
#endif

#if defined(__MINGW32__) || defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)
#define __WINDOWS__
#endif

#if defined(__MSDOS__) || defined(__WINDOWS__) || defined(__linux__)
//#define H2O_NOEXIT TRUE
#define H2O_NOEXIT FALSE
#else
#define H2O_NOEXIT TRUE
#endif

#if defined(__BORLANDC__) || defined(__TURBOC__)
/* Borland 5.5.1 does not support 64-bit "long long" integers, however integers are 32-bit wide.    */
/* "long long" is rejected by the error message "Too many types in declaration".                    */
/* Therefore, FORTH Double Integers arithmetic therefore does not work properly, as implemented :-( */
#undef LONG_LONG
#define LONG_LONG long int
#define _putch(x) putch(x)
#if (__BORLANDC__ < 0x0550)
/* Borland C/C++ 5.02  */
#if !defined(__WIN32__)
#define _getch() getch()
#endif
#define _open(n,m) open(n,m)
#define _read(f,b,s) read(f,b,s)
#define _write(f,b,s) write(f,b,s)
#define _close(f) close(f)
#else
/* Borland C/C++ 5.5.1 and newer */
#endif 
#endif

#if defined (_MSC_VER)
/* Microsoft Visual Studio 2019,... */
// #define _getch() getch()
// #define _open(n,m) open(n,m)
// #define _read(f,b,s) read(f,b,s)
// #define _write(f,b,s) write(f,b,s)
// #define _close(f) close(f)
#endif

#if defined (__WATCOMC__)
/* Open Watcom C/C++ 1.9 */
#define _putch(x) putch(x)
#endif

#if defined (__DJGPP__)
//#include <pc.h>
#define _getch() getch()
#define _putch(x) putch(x)
#endif

/* tib = Terminal input buffer, where input is parsed from */
char ioTib[MAX_INPUTBUFFER];

/* Word buffer */
char wordBuffer[MAX_INPUTBUFFER];

/* Block buffer, used to read Blocks files */
char ioBlockBuffer[BLOCK_BUFFER];

#endif
