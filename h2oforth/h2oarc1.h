#ifndef H2OARC1
#define H2OARC1

/* Architecture detection & configuration & architecture-specific code  */

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
#define LONG_LONG long
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

unsigned int ioKey(void);
void ioEmit(unsigned int);
void ioStorePort(unsigned long, unsigned int);
unsigned int ioGetPort(unsigned long);

#endif
