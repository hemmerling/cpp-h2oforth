#ifndef H2OSEC2
#define H2OSEC2

/* The "sectorforth" FORTH */
/* Primitives */

/* @ ( addr – x ) Fetch memory contents at addr */
void sectorFetch(void) {
	// unsigned long varAddr
	// return (unsigned long)sectorSP
#if defined (__DEBUG__)
	printf("sectorFetch\n");
#endif
}

/* ! ( x +addr – ) Store x at addr */
void sectorStore(void) {
	// unsigned long varAddr
#if defined (__DEBUG__)
	printf("sectorStore\n");
#endif
}

/* sp@ ( – sp ) Get pointer to top of data stack */
void sectorSP(void) {
	// return ( unsigned long )
#if defined (__DEBUG__)
	printf("sectorStore\n");
#endif
}

/* rp@ ( – rp ) Get pointer to top of return stack */
void sectorRP(void) {
	// return ( unsigned long )
#if defined (__DEBUG__)
	printf("sectorRP\n");
#endif
}

/* 0= ( x – flag ) -1 if top of stack is 0, 0 otherwise */
void sectorTestTopOfStack(void) {
	// return ( int )
#if defined (__DEBUG__)
	printf("sectorTestTopOfStack\n");
#endif
}

/* + ( x y – z ) Sum the two numbers at the top of the stack */
void sectorSum(void) {
#if defined (__DEBUG__)
	printf("sectorSum\n");
#endif
}

/* nand ( x y – z ) NAND the two numbers at the top of the stack */
void sectorNAND(void) {
#if defined (__DEBUG__)
	printf("sectorNAND\n");
#endif
}

/* exit ( r:addr – ) Pop return stack and resume execution at addr */
void sectorExit(void) {
#if defined (__DEBUG__)
	printf("sectorNAND\n");
#endif
}

/* : - Start a new word by a colon */
void sectorStartWord(void) {
#if defined (__DEBUG__)
	printf("sectorStartWord\n");
#endif
}

/* ; - Immediate */
void sectorImmediate(void) {
#if defined (__DEBUG__)
	printf("sectorImmediate\n");
#endif
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
