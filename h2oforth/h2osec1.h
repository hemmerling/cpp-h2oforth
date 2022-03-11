#ifndef H2OSEC1
#define H2OSEC1

/* The "sectorforth" FORTH */

/* Definitions */
void sectorFetch(void);
void sectorStore(void);
void sectorSP(void);
void sectorRP(void);
void sectorTestTopOfStack(void);
void sectorSum(void);
void sectorNAND(void);
void sectorExit(void);
void sectorStartWord(void);
void sectorImmediate(void);
void sectorTestStart(void);
void sectorTestEnd(void);
void sectorTestComparison(void);

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
/* This vocabulary is not in the order of the VLIST / WORDS listing! */

static const PROGMEM typedef_forthWord forthWords[] = {
			{ "@", "@", TRUE, FALSE, FALSE, 0UL, (forthOperation)sectorFetch },
			{ "!", "!", TRUE, FALSE, FALSE, 0UL, (forthOperation)sectorStore },
			{ "sp@", "sp@", TRUE, FALSE, FALSE, 0UL, (forthOperation)sectorSP },
			{ "rp@", "rp@", TRUE, FALSE, FALSE, 0UL, (forthOperation)sectorRP },
			{ "0=", "0=", TRUE, FALSE, FALSE, 0UL, (forthOperation)sectorTestTopOfStack },
			{ "+", "+", TRUE, FALSE, FALSE, 0UL, (forthOperation)sectorSum },
			{ "nand", "nand", TRUE, FALSE, FALSE, 0UL, (forthOperation)sectorNAND },
			{ "exit", "exit", TRUE, FALSE, FALSE, 0UL, (forthOperation)sectorExit },
			{ "key", "key", TRUE, FALSE, FALSE, 0UL, (forthOperation)ioKey },
			{ "emit", "emit", TRUE, FALSE, FALSE, 0UL, (forthOperation)ioEmit },
			{ ":", ":", TRUE, FALSE, FALSE, 0UL, (forthOperation)sectorStartWord },
			{ ";", ";", TRUE, FALSE, FALSE, 0UL, (forthOperation)sectorImmediate },
			{ "T{", "T{", TRUE, FALSE, FALSE, 0UL, (forthOperation)sectorTestStart },
			{ "}T", "}T", TRUE, FALSE, FALSE, 0UL, (forthOperation)sectorTestEnd },
			{ "==", "==", TRUE, FALSE, FALSE, 0UL, (forthOperation)sectorTestComparison },
			{ "H2OFORTH", "H2OFORTH", TRUE, FALSE, FALSE, MAX_WORDID, (forthOperation)NULL }
};

/* state = 0: execute words; 1: compile word addresses to the dictionary */
int sectorState = 0;

/* >in = Current parsing offset into terminal input buffer */
int sectorIn = 0;

/* here = Pointer to next free position in the dictionary */
long sectorHere = 0;

/* latest = Pointer to most recent dictionary entry */
int sectorLatest = 0;

#endif
