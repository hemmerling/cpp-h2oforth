#ifndef H2OCOL2
#define H2OCOL2

/* The "Colorforth" FORTH */
/* Primitives */

/*********************/
/* Jump Instructions */
/*********************/

/* "; ( )  Jump thru R (destructive) */
void colorRet(void) {
#if defined (__DEBUG__)
	printf("colorRet\n");
#endif
}

/* ex ( )  Jump thru R, save P in R */
/* ;: ( )  Jump thru R, save P in R */
void colorExec(void) {
#if defined (__DEBUG__)
	printf("colorExec\n");
#endif
}

/* ;: ( )  Jump thru I ( The opcode is not used explicitly. The compiler generates it ) */
void colorJmp(void) {
#if defined (__DEBUG__)
	printf("colorJmp\n");
#endif
}

/* call ( )  Jump thru I, push current address to R ( The opcode is not used explicitly. Referencing any defined word generates a call )  */
void colorCall(void) {
#if defined (__DEBUG__)
	printf("colorCall\n");
#endif
}

/* unext ( ) Jump to slot 0 ( Discards the address left by for ) */
void colorUnext(void) {
#if defined (__DEBUG__)
	printf("colorUnext\n");
#endif
}

/* next ( ) If R is non-zero, jump thru I and decrement R. Otherwise pop R */
void colorNext(void) {
#if defined (__DEBUG__)
	printf("colorNext\n");
#endif
}

/* if ( ) Jump thru I if T is zero */
void colorIf(void) {
#if defined (__DEBUG__)
	printf("colorIf\n");
#endif
}

/* -if ( ) Jump thru I if T is positive */
void colorMinusIf(void) {
#if defined (__DEBUG__)
	printf("colorMinusIf\n");
#endif
}

/***********************/
/* Memory Instructions */
/***********************/

/* @p ( ) Fetch thru P, increment P */
/* @p+ ( ) Fetch thru P, increment P */
void colorFetchP(void) {
#if defined (__DEBUG__)
	printf("colorFetchP\n");
#endif
}

/* @+ ( ) Fetch thru A, increment A */
void colorFetchPlus(void) {
#if defined (__DEBUG__)
	printf("colorFetchPlus\n");
#endif
}

/* @b ( ) Fetch thru B */
void colorFetchB(void) {
#if defined (__DEBUG__)
	printf("colorFetchB\n");
#endif
}

/* @ ( ) Fetch thru A */
void colorFetch(void) {
#if defined (__DEBUG__)
	printf("colorFetch\n");
#endif
}

/* !p ( ) Store thru P, increment P */
/* !p+ ( ) Store thru P, increment P */
void colorFetchStoreP(void) {
#if defined (__DEBUG__)
	printf("colorFetchStoreP\n");
#endif
}

/* !+ ( ) Store thru A, increment A */
void colorFetchStorePlus(void) {
#if defined (__DEBUG__)
	printf("colorFetchStorePlus\n");
#endif
}

/* !b ( ) Store thru B */
void colorStoreB(void) {
#if defined (__DEBUG__)
	printf("colorStoreB\n");
#endif
}

/* ! ( ) Store thru A */
void colorStore(void) {
#if defined (__DEBUG__)
	printf("colorStore\n");
#endif
}

/********************/
/* ALU Instructions */
/********************/

/* + ( ) Multiply step: add S to T if A0=1 then shift T and A right */
void colorMultiplyStep(void) {
#if defined (__DEBUG__)
	printf("colorMultiplyStep\n");
#endif
}

/* 2* ( ) Shift T left */
void colorTimes2(void) {
#if defined (__DEBUG__)
	printf("colorTimes2\n");
#endif
}

/* 2/ ( ) Shift T right; sign fill */
void colorDiv2(void) {
#if defined (__DEBUG__)
	printf("colorDiv2\n");
#endif
}

/* - ( ) One's complement T */
void colorNot(void) {
#if defined (__DEBUG__)
	printf("colorNot\n");
#endif
}

/* + ( ) Add S to T (discard S) */
/* + ( ) Add S to T with carry ( Requires bit 9 of P be set ) */
void colorPlus(void) {
#if defined (__DEBUG__)
	printf("colorPlus\n");
#endif
}

/* and ( ) Bit-wise and of S and T */
void colorAnd(void) {
#if defined (__DEBUG__)
	printf("colorAnd\n");
#endif
}

/* or ( ) Bit-wise exclusive-or of S and T */
void colorOr(void) {
#if defined (__DEBUG__)
	printf("colorOr\n");
#endif
}

/* drop ( ) Discard T */
void colorDrop(void) {
#if defined (__DEBUG__)
	printf("colorDrop\n");
#endif
}

/**********************/
/* Stack Instructions */
/**********************/

/* dup ( ) Create a working copy of T */
void colorDup(void) {
#if defined (__DEBUG__)
	printf("colorDup\n");
#endif
}

/* pop ( ) Fetch R (destructive) */
void colorPop(void) {
#if defined (__DEBUG__)
	printf("colorPop\n");
#endif
}

/* Over ( ) Fetch S (non-destructive) */
void colorOver(void) {
#if defined (__DEBUG__)
	printf("colorOver\n");
#endif
}

/* a ( ) Fetch A (non-destructive) */
void colorReadA(void) {
#if defined (__DEBUG__)
	printf("colorReadA\n");
#endif
}

/* . ( ) Do nothing */
void colorNop(void) {
#if defined (__DEBUG__)
	printf("colorNop\n");
#endif
}

/* push ( ) Push T into R */
void colorPush(void) {
#if defined (__DEBUG__)
	printf("colorPush\n");
#endif
}

/* b! ( ) Store into B ( Be careful to distinguish b! and !b ) */
void colorSetB(void) {
#if defined (__DEBUG__)
	printf("colorSetB\n");
#endif
}

/* b! ( ) Store into A ) */
void colorSetA(void) {
#if defined (__DEBUG__)
	printf("colorSetA\n");
#endif
}

/* Extra words */

#endif
