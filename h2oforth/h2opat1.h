#ifndef H2OPAT1
#define H2OPAT1

/* The "Minimal Forth Machine" FORTH by Mikael Patel */

/* Definitions */
void patelToRS(void);
void patelRSFrom(void);
void patelAdd1(void);
void patelTestTopOfStack(void);
void patelNAND(void);
void patelFetch(void);
void patelDupStore(void);
void patelExecute(void);
void patelExit(void);
void patelDrop(void);
void patelDup(void);
void patelSwap(void);

typedef void (*forthOperation)(void);

typedef  struct _forthWord {
	const char* forthWordName;
	const char* forthAlternativeName;
	const short int interpreted;
	const short int immediate;
	const short int implemented;
	const unsigned long forthWordID;
	const forthOperation  forthOpt; // function pointer 
} typedef_forthWord;

/* Variables */

static const PROGMEM typedef_forthWord forthWords[] = {
			{ ">r", ">r", TRUE, FALSE, FALSE, 0UL, (forthOperation)patelToRS },
			{ "r>", "r>", TRUE, FALSE, FALSE, 0UL, (forthOperation)patelRSFrom },
			{ "1+", "1+", TRUE, FALSE, FALSE, 0UL, (forthOperation)patelAdd1 },
			{ "0=", "0=", TRUE, FALSE, FALSE, 0UL, (forthOperation)patelTestTopOfStack },
			{ "nand", "nand", TRUE, FALSE, FALSE, 0UL, (forthOperation)patelNAND },
			{ "@", "@", TRUE, FALSE, FALSE, 0UL, (forthOperation)patelFetch },
			{ "dup!", "dup!", TRUE, FALSE, FALSE, 0UL, (forthOperation)patelDupStore },
			{ "execute", "execute", TRUE, FALSE, FALSE, 0UL, (forthOperation)patelExecute },
			{ "exit", "exit", TRUE, FALSE, FALSE, 0UL, (forthOperation)patelExit },
			{ "drop", "drop", TRUE, FALSE, FALSE, 0UL, (forthOperation)patelDrop },
			{ "dup", "dup", TRUE, FALSE, FALSE, 0UL, (forthOperation)patelDup },
			{ "swap", "swap", TRUE, FALSE, FALSE, 0UL, (forthOperation)patelSwap },
			{ "H2OFORTH", "H2OFORTH", TRUE, FALSE, FALSE, MAX_WORDID, (forthOperation)NULL }
};

#endif
