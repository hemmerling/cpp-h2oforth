#ifndef H2OPAT2
#define H2OPAT2

/* The "Minimal Forth Machine" FORTH by Mikael Patel */
/* Primitives */

/* >r ( x – ) */
void patelToRS(void) {
#if defined (__DEBUG__)
	printf("patelToRS\n");
#endif
}

/* r> ( – x ) */
void patelRSFrom(void) {
#if defined (__DEBUG__)
	printf("patelRSFrom\n");
#endif
}

/* 1+ ( x – y ) */
void patelAdd1(void) {
#if defined (__DEBUG__)
	printf("patelAdd1\n");
#endif
}

/* 0= ( x – flag ) */
void patelTestTopOfStack(void) {
#if defined (__DEBUG__)
	printf("patelTestTopOfStack\n");
#endif
}

/* nand ( x y – z ) */
void patelNAND(void) {
#if defined (__DEBUG__)
	printf("patelNAND\n");
#endif
}

/* @ ( addr – x ) */
void patelFetch(void) {
#if defined (__DEBUG__)
	printf("patelFetch\n");
#endif
}

/* dup! ( x addr – x ) */
void patelDupStore(void) {
#if defined (__DEBUG__)
	printf("patelDupStore\n");
#endif
}

/* execute ( addr – ) */
void patelExecute(void) {
#if defined (__DEBUG__)
	printf("patelExecute\n");
#endif
}

/* exit ( – )  */
void patelExit(void) {
#if defined (__DEBUG__)
	printf("patelExit\n");
#endif
}

/* drop ( x – ) */
void patelDrop(void) {
#if defined (__DEBUG__)
	printf("patelDrop\n");
#endif
}

/* dup ( x – x x ) */
void patelDup(void) {
#if defined (__DEBUG__)
	printf("patelDup\n");
#endif
}

/* swap ( x y – y x ) */
void patelSwap(void) {
#if defined (__DEBUG__)
	printf("patelSwap\n");
#endif
}

/* Extra words */

#endif
