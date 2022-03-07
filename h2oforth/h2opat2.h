#ifndef H2OPAT2
#define H2OPAT2

/* The "Minimal Forth Machine" FORTH by Mikael Patel */
/* Primitives */

/* >r ( x – ) */
void patelToRS(void) {
	SMSG_DEBUG("patelToRS")
}

/* r> ( – x ) */
void patelRSFrom(void) {
	SMSG_DEBUG("patelRSFrom")
}

/* 1+ ( x – y ) */
void patelAdd1(void) {
	SMSG_DEBUG("patelAdd1")
}

/* 0= ( x – flag ) */
void patelTestTopOfStack(void) {
	SMSG_DEBUG("patelTestTopOfStack")
}

/* nand ( x y – z ) */
void patelNAND(void) {
	SMSG_DEBUG("patelNAND")
}

/* @ ( addr – x ) */
void patelFetch(void) {
	SMSG_DEBUG("patelFetch")
}

/* dup! ( x addr – x ) */
void patelDupStore(void) {
	SMSG_DEBUG("patelDupStore")
}

/* execute ( addr – ) */
void patelExecute(void) {
	SMSG_DEBUG("patelExecute")
}

/* exit ( – )  */
void patelExit(void) {
	SMSG_DEBUG("patelExit")
}

/* drop ( x – ) */
void patelDrop(void) {
	SMSG_DEBUG("patelDrop")
}

/* dup ( x – x x ) */
void patelDup(void) {
	SMSG_DEBUG("patelDup")
}

/* swap ( x y – y x ) */
void patelSwap(void) {
	SMSG_DEBUG("patelSwap")
}

/* Extra words */

#endif
