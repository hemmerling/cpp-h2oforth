#ifndef H2OCOL2
#define H2OCOL2

/* The "Colorforth" FORTH */
/* Primitives */

/*********************/
/* Jump Instructions */
/*********************/

/* "; ( )  Jump thru R (destructive) */
void colorRet(void) {
	DEBUG_WORD("colorRet")
}

/* ex ( )  Jump thru R, save P in R */
/* ;: ( )  Jump thru R, save P in R */
void colorExec(void) {
	DEBUG_WORD("colorExec")
}

/* ;: ( )  Jump thru I ( The opcode is not used explicitly. The compiler generates it ) */
void colorJmp(void) {
	DEBUG_WORD("colorJmp")
}

/* call ( )  Jump thru I, push current address to R ( The opcode is not used explicitly. Referencing any defined word generates a call )  */
void colorCall(void) {
	DEBUG_WORD("colorCall")
}

/* unext ( ) Jump to slot 0 ( Discards the address left by for ) */
void colorUnext(void) {
	DEBUG_WORD("colorUnext")
}

/* next ( ) If R is non-zero, jump thru I and decrement R. Otherwise pop R */
void colorNext(void) {
	DEBUG_WORD("colorNext")
}

/* if ( ) Jump thru I if T is zero */
void colorIf(void) {
	DEBUG_WORD("colorIf")
}

/* -if ( ) Jump thru I if T is positive */
void colorMinusIf(void) {
	DEBUG_WORD("colorMinusIf")
}

/***********************/
/* Memory Instructions */
/***********************/

/* @p ( ) Fetch thru P, increment P */
/* @p+ ( ) Fetch thru P, increment P */
void colorFetchP(void) {
	DEBUG_WORD("colorFetchP")
}

/* @+ ( ) Fetch thru A, increment A */
void colorFetchPlus(void) {
	DEBUG_WORD("colorFetchPlus")
}

/* @b ( ) Fetch thru B */
void colorFetchB(void) {
	DEBUG_WORD("colorFetchB")
}

/* @ ( ) Fetch thru A */
void colorFetch(void) {
	DEBUG_WORD("colorFetch")
}

/* !p ( ) Store thru P, increment P */
/* !p+ ( ) Store thru P, increment P */
void colorFetchStoreP(void) {
	DEBUG_WORD("colorFetchStoreP")
}

/* !+ ( ) Store thru A, increment A */
void colorFetchStorePlus(void) {
	DEBUG_WORD("colorFetchStorePlus")
}

/* !b ( ) Store thru B */
void colorStoreB(void) {
	DEBUG_WORD("colorStoreB")
}

/* ! ( ) Store thru A */
void colorStore(void) {
	DEBUG_WORD("colorStore")
}

/********************/
/* ALU Instructions */
/********************/

/* + ( ) Multiply step: add S to T if A0=1 then shift T and A right */
void colorMultiplyStep(void) {
	DEBUG_WORD("colorMultiplyStep")
}

/* 2* ( ) Shift T left */
void colorTimes2(void) {
	DEBUG_WORD("colorTimes2")
}

/* 2/ ( ) Shift T right; sign fill */
void colorDiv2(void) {
	DEBUG_WORD("colorDiv2")
}

/* - ( ) One's complement T */
void colorNot(void) {
	DEBUG_WORD("colorNot")
}

/* + ( ) Add S to T (discard S) */
/* + ( ) Add S to T with carry ( Requires bit 9 of P be set ) */
void colorPlus(void) {
	DEBUG_WORD("colorPlus")
}

/* and ( ) Bit-wise and of S and T */
void colorAnd(void) {
	DEBUG_WORD("colorAnd")
}

/* or ( ) Bit-wise exclusive-or of S and T */
void colorOr(void) {
	DEBUG_WORD("colorOr")
}

/* drop ( ) Discard T */
void colorDrop(void) {
	DEBUG_WORD("colorDrop")
}

/**********************/
/* Stack Instructions */
/**********************/

/* dup ( ) Create a working copy of T */
void colorDup(void) {
	DEBUG_WORD("colorDup")
}

/* pop ( ) Fetch R (destructive) */
void colorPop(void) {
	DEBUG_WORD("colorPop")
}

/* Over ( ) Fetch S (non-destructive) */
void colorOver(void) {
	DEBUG_WORD("colorOver")
}

/* a ( ) Fetch A (non-destructive) */
void colorReadA(void) {
	DEBUG_WORD("colorReadA")
}

/* . ( ) Do nothing */
void colorNop(void) {
	DEBUG_WORD("colorNop")
}

/* push ( ) Push T into R */
void colorPush(void) {
	DEBUG_WORD("colorPush")
}

/* b! ( ) Store into B ( Be careful to distinguish b! and !b ) */
void colorSetB(void) {
	DEBUG_WORD("colorSetB")
}

/* b! ( ) Store into A ) */
void colorSetA(void) {
	DEBUG_WORD("colorSetA")
}

/* Extra words */

#endif
