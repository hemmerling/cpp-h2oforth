#ifndef H2OPAT2
#define H2OPAT2

/* The "Minimal Forth Machine" FORTH by Mikael Patel */
/* Primitives */

/* >r ( x – ) */
void patelToRS(void) {
	DEBUG_WORD("patelToRS")
}

/* r> ( – x ) */
void patelRSFrom(void) {
	DEBUG_WORD("patelRSFrom")
}

/* 1+ ( x – y ) */
void patelAdd1(void) {
	DEBUG_WORD("patelAdd1")
}

/* 0= ( x – flag ) */
void patelTestTopOfStack(void) {
	DEBUG_WORD("patelTestTopOfStack")
}

/* nand ( x y – z ) */
void patelNAND(void) {
	DEBUG_WORD("patelNAND")
}

/* @ ( addr – x ) */
void patelFetch(void) {
	DEBUG_WORD("patelFetch")
}

/* dup! ( x addr – x ) */
void patelDupStore(void) {
	DEBUG_WORD("patelDupStore")
}

/* execute ( addr – ) */
void patelExecute(void) {
	DEBUG_WORD("patelExecute")
}

/* exit ( – )  */
void patelExit(void) {
	DEBUG_WORD("patelExit")
}

/* drop ( x – ) */
void patelDrop(void) {
	DEBUG_WORD("patelDrop")
}

/* dup ( x – x x ) */
void patelDup(void) {
	DEBUG_WORD("patelDup")
}

/* swap ( x y – y x ) */
void patelSwap(void) {
	DEBUG_WORD("patelSwap")
}

/* Extra words */

#endif
