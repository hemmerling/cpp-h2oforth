#ifndef H2OPAT2
#define H2OPAT2

/* The "Minimal Forth Machine" FORTH by Mikael Patel */
/* Primitives */

/* >r ( x – ) */
void patelToRS(void) {
	PSMSG_DEBUG("patelToRS")
}

/* r> ( – x ) */
void patelRSFrom(void) {
	PSMSG_DEBUG("patelRSFrom")
}

/* 1+ ( x – y ) */
void patelAdd1(void) {
	PSMSG_DEBUG("patelAdd1")
}

/* 0= ( x – flag ) */
void patelTestTopOfStack(void) {
	PSMSG_DEBUG("patelTestTopOfStack")
}

/* nand ( x y – z ) */
void patelNAND(void) {
	PSMSG_DEBUG("patelNAND")
}

/* @ ( addr – x ) */
void patelFetch(void) {
	PSMSG_DEBUG("patelFetch")
}

/* dup! ( x addr – x ) */
void patelDupStore(void) {
	PSMSG_DEBUG("patelDupStore")
}

/* execute ( addr – ) */
void patelExecute(void) {
	PSMSG_DEBUG("patelExecute")
}

/* exit ( – )  */
void patelExit(void) {
	PSMSG_DEBUG("patelExit")
}

/* drop ( x – ) */
void patelDrop(void) {
	PSMSG_DEBUG("patelDrop")
}

/* dup ( x – x x ) */
void patelDup(void) {
	PSMSG_DEBUG("patelDup")
}

/* swap ( x y – y x ) */
void patelSwap(void) {
	PSMSG_DEBUG("patelSwap")
}

/* Extra words */

#endif
