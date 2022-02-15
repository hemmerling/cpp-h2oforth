#ifndef H2OSEC2
#define H2OSEC2

/* The "sectorforth" FORTH */
/* Primitives */

/* @ ( addr – x ) Fetch memory contents at addr */
void sectorFetch(void) {
	// unsigned long varAddr
	// return (unsigned long)sectorSP
	DEBUG_WORD("sectorFetch")
}

/* ! ( x +addr – ) Store x at addr */
void sectorStore(void) {
	// unsigned long varAddr
	DEBUG_WORD("sectorStore")
}

/* sp@ ( – sp ) Get pointer to top of data stack */
void sectorSP(void) {
	// return ( unsigned long )
	DEBUG_WORD("sectorStore")
}

/* rp@ ( – rp ) Get pointer to top of return stack */
void sectorRP(void) {
	// return ( unsigned long )
	DEBUG_WORD("sectorRP")
}

/* 0= ( x – flag ) -1 if top of stack is 0, 0 otherwise */
void sectorTestTopOfStack(void) {
	// return ( int )
	DEBUG_WORD("sectorTestTopOfStack")
}

/* + ( x y – z ) Sum the two numbers at the top of the stack */
void sectorSum(void) {
	DEBUG_WORD("sectorSum")
}

/* nand ( x y – z ) NAND the two numbers at the top of the stack */
void sectorNAND(void) {
	DEBUG_WORD("sectorNAND")
}

/* exit ( r:addr – ) Pop return stack and resume execution at addr */
void sectorExit(void) {
	DEBUG_WORD("sectorNAND")
}

/* : - Start a new word by a colon */
void sectorStartWord(void) {
	DEBUG_WORD("sectorStartWord")
}

/* ; - Immediate */
void sectorImmediate(void) {
	DEBUG_WORD("sectorImmediate")
}

/* Extra words */

/* T{ - Start a test, example "T{ 1 2 drop }T 1 ==", "T{ 1 dup }T 1 1 ==", "T{ 2 1 swap }T 1 2 ==" */
void sectorTestStart(void) {
}

/* }T - End a test */
void sectorTestEnd(void) {
}

/* == - Test comparison */
void sectorTestComparison(void) {
}

#endif
