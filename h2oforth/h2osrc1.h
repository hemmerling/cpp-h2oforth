#ifndef H2OSRC1
#define H2OSRC1

/* Static FORTH source code, to be processed at startup, before interactive input processing */

#ifdef READ_STATIC_INPUT
//static const char *staticInputLines[] = {"111", "112", "+", ".S"};
static const char *staticInputLines[] = {"111", "112", "+\n"};
#endif

#endif
