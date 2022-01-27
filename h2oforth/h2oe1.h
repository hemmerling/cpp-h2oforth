#ifndef H2OE1
#define H2OE1

/* The "e-Forth" FORTH */

/* Definitions */

void eforthBYE(void);
void eforthKey(void);
void eforthEmit(void);
void eforthInitIO(void);
void eforthDoLIT(void);
void eforthDoLIST(void);
void eforthNext(void);
void eforthBranchIfZero(void);
void eforthBranch(void);
void eforthEXECUTE(void);
void eforthEXIT(void);
void eforthStore(void);
void eforthFetch(void);
void eforthStoreChar(void);
void eforthFetchChar(void);
void eforthFetchRP(void);
void eforthToRS(void);
void eforthStoreRP(void);
void eforthRSFrom(void);
void eforthToRS(void);
void eforthRSFetch(void);
void eforthFetchSP(void);
void eforthFetchSP(void);
void eforthStoreSP(void);
void eforthDROP(void);
void eforthDUP(void);
void eforthSWAP(void);
void eforthOVER(void);
void eforthLessThanZero(void);
void eforthAND(void);
void eforthOR(void);
void eforthXOR(void);
void eforthAddWithCarry(void);

typedef void (*forthOperation)(void);

typedef  struct _forthWord {
	const char* forthWordName;
	const const char* forthAlternativeName;
	const short int interpreted;
	const short int immediate;
	const short int implemented;
	const unsigned long forthWordNumber;
	const forthOperation  forthOpt; // function pointer 
} typedef_forthWord;

/* Variables */
/* This vocabulary is not in the order of the VLIST / WORDS listing! */

static  const typedef_forthWord forthWords[] = {
			{ "BYE", "BYE", TRUE, FALSE, FALSE, 0UL, (forthOperation)eforthBYE }, /* System interface */
			{ "?rx", "?key", TRUE, FALSE, FALSE, 0UL, (forthOperation)eforthKey },
			{ "tx!", "emit", TRUE, FALSE, FALSE, 0UL, (forthOperation)eforthEmit },
			{ "!io", "!io", TRUE, FALSE, FALSE, 0UL, (forthOperation)eforthInitIO },
			{ "doLIT", "doLIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)eforthDoLIT }, /* Inner interpreters */
			{ "doLIST", "doLIST", TRUE, FALSE, FALSE, 0UL, (forthOperation)eforthDoLIST },
			{ "next", "next", TRUE, FALSE, FALSE, 0UL, (forthOperation)eforthNext },
			{ "?branch", "?branch", TRUE, FALSE, FALSE, 0UL, (forthOperation)eforthBranchIfZero },
			{ "branch", "branch", TRUE, FALSE, FALSE, 0UL, (forthOperation)eforthBranch },
			{ "EXECUTE", "EXECUTE", TRUE, FALSE, FALSE, 0UL, (forthOperation)eforthEXECUTE },
			{ "EXIT", "EXIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)eforthEXIT },
			{ "!", "!", TRUE, FALSE, FALSE, 0UL, (forthOperation)eforthStore }, /* Memory access */
			{ "@", "@", TRUE, FALSE, FALSE, 0UL, (forthOperation)eforthFetch },
			{ "C!", "C!", TRUE, FALSE, FALSE, 0UL, (forthOperation)eforthStoreChar },
			{ "C@", "C@", TRUE, FALSE, FALSE, 0UL, (forthOperation)eforthFetchChar },
			{ "RP@", "RP@", TRUE, FALSE, FALSE, 0UL, (forthOperation)eforthFetchRP }, /* Return stack */
			{ "RP!", "RP!", TRUE, FALSE, FALSE, 0UL, (forthOperation)eforthStoreRP },
			{ "R>", "R>", TRUE, FALSE, FALSE, 0UL, (forthOperation)eforthRSFrom },
			{ "R@", "R@", TRUE, FALSE, FALSE, 0UL, (forthOperation)eforthRSFetch },
			{ ">R", ">R", TRUE, FALSE, FALSE, 0UL, (forthOperation)eforthToRS },
			{ "SP@", "SP@", TRUE, FALSE, FALSE, 0UL, (forthOperation)eforthFetchSP }, /* Data stack */
			{ "SP!", "SP!", TRUE, FALSE, FALSE, 0UL, (forthOperation)eforthStoreSP },
			{ "DROP", "DROP", TRUE, FALSE, FALSE, 0UL, (forthOperation)eforthDROP },
			{ "DUP", "DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)eforthDUP },
			{ "SWAP", "SWAP", TRUE, FALSE, FALSE, 0UL, (forthOperation)eforthSWAP },
			{ "OVER", "OVER", TRUE, FALSE, FALSE, 0UL, (forthOperation)eforthOVER },
			{ "0<", "0<", TRUE, FALSE, FALSE, 0UL, (forthOperation)eforthLessThanZero }, /* Logic */
			{ "AND", "AND", TRUE, FALSE, FALSE, 0UL, (forthOperation)eforthAND },
			{ "OR", "OR", TRUE, FALSE, FALSE, 0UL, (forthOperation)eforthOR },
			{ "XOR", "XOR", TRUE, FALSE, FALSE, 0UL, (forthOperation)eforthXOR },
			{ "UM+", "UM+", TRUE, FALSE, FALSE, 0UL, (forthOperation)eforthAddWithCarry }, /* Arithmetic */
			{ "H2OFORTH", "H2OFORTH", TRUE, FALSE, FALSE, MAX_FORTHWORD_ID, (forthOperation)NULL }
};

#endif
