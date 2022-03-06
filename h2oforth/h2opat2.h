#ifndef H2OPAT2
#define H2OPAT2

/* The "Minimal Forth Machine" FORTH by Mikael Patel */
/* Primitives */

/* >r ( x – ) */
void patelToRS(void) {
	MESSSAGE_DEBUG("patelToRS")
}

/* r> ( – x ) */
void patelRSFrom(void) {
	MESSSAGE_DEBUG("patelRSFrom")
}

/* 1+ ( x – y ) */
void patelAdd1(void) {
	MESSSAGE_DEBUG("patelAdd1")
}

/* 0= ( x – flag ) */
void patelTestTopOfStack(void) {
	MESSSAGE_DEBUG("patelTestTopOfStack")
}

/* nand ( x y – z ) */
void patelNAND(void) {
	MESSSAGE_DEBUG("patelNAND")
}

/* @ ( addr – x ) */
void patelFetch(void) {
	MESSSAGE_DEBUG("patelFetch")
}

/* dup! ( x addr – x ) */
void patelDupStore(void) {
	MESSSAGE_DEBUG("patelDupStore")
}

/* execute ( addr – ) */
void patelExecute(void) {
	MESSSAGE_DEBUG("patelExecute")
}

/* exit ( – )  */
void patelExit(void) {
	MESSSAGE_DEBUG("patelExit")
}

/* drop ( x – ) */
void patelDrop(void) {
	MESSSAGE_DEBUG("patelDrop")
}

/* dup ( x – x x ) */
void patelDup(void) {
	MESSSAGE_DEBUG("patelDup")
}

/* swap ( x y – y x ) */
void patelSwap(void) {
	MESSSAGE_DEBUG("patelSwap")
}

/* Extra words */

#endif
