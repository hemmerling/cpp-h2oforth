#ifndef H2OCOL1
#define H2OCOL1

/* The "Colorforth" FORTH */

/* Definitions */
void colorRet(void);
void colorExec(void);
void colorJmp(void);
void colorCall(void);
void colorUnext(void);
void colorNext(void);
void colorIf(void);
void colorMinusIf(void);
void colorFetchP(void);
void colorFetchPlus(void);
void colorFetchB(void);
void colorFetch(void);
void colorFetchStoreP(void);
void colorFetchStorePlus(void);
void colorStoreB(void);
void colorStore(void);
void colorMultiplyStep(void);
void colorTimes2(void);
void colorDiv2(void);
void colorNot(void);
void colorPlus(void);
void colorAnd(void);
void colorOr(void);
void colorDrop(void);
void colorDrop(void);
void colorDup(void);
void colorPop(void);
void colorOver(void);
void colorReadA(void);
void colorNop(void);
void colorPush(void);
void colorSetB(void);
void colorSetA(void);

typedef void (*forthOperation)(void);

typedef  struct _forthWord {
	const char* forthWordName;
	const char* forthAlternativeName;
	const short int interpreted;
	const short int immediate;
	const short int implemented;
	const unsigned long forthWordNumber;
	const forthOperation  forthOpt; // function pointer 
} typedef_forthWord;

/* Variables */

static const typedef_forthWord forthWords[] = {
			{ ";", ";", TRUE, FALSE, FALSE, 0UL, (forthOperation)colorRet }, /* Jump Instructions */
			{ "ex", ";:", TRUE, FALSE, FALSE, 0UL, (forthOperation)colorExec },
			{ "jump", "jump", TRUE, FALSE, FALSE, 0UL, (forthOperation)colorJmp },
			{ "call", "call", TRUE, FALSE, FALSE, 0UL, (forthOperation)colorCall },
			{ "unext", "unext", TRUE, FALSE, FALSE, 0UL, (forthOperation)colorUnext },
			{ "next", "next", TRUE, FALSE, FALSE, 0UL, (forthOperation)colorNext },
			{ "if", "if", TRUE, FALSE, FALSE, 0UL, (forthOperation)colorIf },
			{ "-if", "-if", TRUE, FALSE, FALSE, 0UL, (forthOperation)colorMinusIf },
			{ "@p", "@p+", TRUE, FALSE, FALSE, 0UL, (forthOperation)colorFetchP }, /* Memory Instructions */
			{ "@+", "@+", TRUE, FALSE, FALSE, 0UL, (forthOperation)colorFetchPlus },
			{ "@b", "@b", TRUE, FALSE, FALSE, 0UL, (forthOperation)colorFetchB },
			{ "@", "@", TRUE, FALSE, FALSE, 0UL, (forthOperation)colorFetch },
			{ "!p", "!p+", TRUE, FALSE, FALSE, 0UL, (forthOperation)colorFetchStoreP },
			{ "!+", "!+", TRUE, FALSE, FALSE, 0UL, (forthOperation)colorStoreB },
			{ "!b", "!b", TRUE, FALSE, FALSE, 0UL, (forthOperation)colorStore },
			{ "!", "!", TRUE, FALSE, FALSE, 0UL, (forthOperation)colorStore },
			{ "+*", "+*", TRUE, FALSE, FALSE, 0UL, (forthOperation)colorMultiplyStep }, /* ALU Instructions */
			{ "2*", "2*", TRUE, FALSE, FALSE, 0UL, (forthOperation)colorTimes2 },
			{ "2/", "2/", TRUE, FALSE, FALSE, 0UL, (forthOperation)colorDiv2 },
			{ "-", "-", TRUE, FALSE, FALSE, 0UL, (forthOperation)colorNot },
			{ "+", "+", TRUE, FALSE, FALSE, 0UL, (forthOperation)colorPlus },
			{ "and", "and", TRUE, FALSE, FALSE, 0UL, (forthOperation)colorAnd },
			{ "or", "or", TRUE, FALSE, FALSE, 0UL, (forthOperation)colorOr },
			{ "drop", "drop", TRUE, FALSE, FALSE, 0UL, (forthOperation)colorDrop },
			{ "dup", "dup", TRUE, FALSE, FALSE, 0UL, (forthOperation)colorDup }, /* Stack Instructions  */
			{ "pop", "pop", TRUE, FALSE, FALSE, 0UL, (forthOperation)colorPop },
			{ "over", "over", TRUE, FALSE, FALSE, 0UL, (forthOperation)colorOver },
			{ "a", "a", TRUE, FALSE, FALSE, 0UL, (forthOperation)colorReadA },
			{ ".", ".", TRUE, FALSE, FALSE, 0UL, (forthOperation)colorNop },
			{ "push", "push", TRUE, FALSE, FALSE, 0UL, (forthOperation)colorPush },
			{ "b!", "b!", TRUE, FALSE, FALSE, 0UL, (forthOperation)colorSetB },
			{ "a!", "a!", TRUE, FALSE, FALSE, 0UL, (forthOperation)colorSetA },
			{ "H2OFORTH", "H2OFORTH", TRUE, FALSE, FALSE, MAX_FORTHWORD_ID, (forthOperation)NULL }
};

#endif
