#ifndef H2OCOL2
#define H2OCOL2

/* The "Colorforth" FORTH */
/* Primitives */

/*********************/
/* Jump Instructions */
/*********************/

/* "; ( )  Jump thru R (destructive) */
void colorRet(void) {
	PSMSG_DEBUG("colorRet")
}

/* ex ( )  Jump thru R, save P in R */
/* ;: ( )  Jump thru R, save P in R */
void colorExec(void) {
	PSMSG_DEBUG("colorExec")
}

/* ;: ( )  Jump thru I ( The opcode is not used explicitly. The compiler generates it ) */
void colorJmp(void) {
	PSMSG_DEBUG("colorJmp")
}

/* call ( )  Jump thru I, push current address to R ( The opcode is not used explicitly. Referencing any defined word generates a call )  */
void colorCall(void) {
	PSMSG_DEBUG("colorCall")
}

/* unext ( ) Jump to slot 0 ( Discards the address left by for ) */
void colorUnext(void) {
	PSMSG_DEBUG("colorUnext")
}

/* next ( ) If R is non-zero, jump thru I and decrement R. Otherwise pop R */
void colorNext(void) {
	PSMSG_DEBUG("colorNext")
}

/* if ( ) Jump thru I if T is zero */
void colorIf(void) {
	PSMSG_DEBUG("colorIf")
}

/* -if ( ) Jump thru I if T is positive */
void colorMinusIf(void) {
	PSMSG_DEBUG("colorMinusIf")
}

/***********************/
/* Memory Instructions */
/***********************/

/* @p ( ) Fetch thru P, increment P */
/* @p+ ( ) Fetch thru P, increment P */
void colorFetchP(void) {
	PSMSG_DEBUG("colorFetchP")
}

/* @+ ( ) Fetch thru A, increment A */
void colorFetchPlus(void) {
	PSMSG_DEBUG("colorFetchPlus")
}

/* @b ( ) Fetch thru B */
void colorFetchB(void) {
	PSMSG_DEBUG("colorFetchB")
}

/* @ ( ) Fetch thru A */
void colorFetch(void) {
	PSMSG_DEBUG("colorFetch")
}

/* !p ( ) Store thru P, increment P */
/* !p+ ( ) Store thru P, increment P */
void colorFetchStoreP(void) {
	PSMSG_DEBUG("colorFetchStoreP")
}

/* !+ ( ) Store thru A, increment A */
void colorFetchStorePlus(void) {
	PSMSG_DEBUG("colorFetchStorePlus")
}

/* !b ( ) Store thru B */
void colorStoreB(void) {
	PSMSG_DEBUG("colorStoreB")
}

/* ! ( ) Store thru A */
void colorStore(void) {
	PSMSG_DEBUG("colorStore")
}

/********************/
/* ALU Instructions */
/********************/

/* + ( ) Multiply step: add S to T if A0=1 then shift T and A right */
void colorMultiplyStep(void) {
	PSMSG_DEBUG("colorMultiplyStep")
}

/* 2* ( ) Shift T left */
void colorTimes2(void) {
	PSMSG_DEBUG("colorTimes2")
}

/* 2/ ( ) Shift T right; sign fill */
void colorDiv2(void) {
	PSMSG_DEBUG("colorDiv2")
}

/* - ( ) One's complement T */
void colorNot(void) {
	PSMSG_DEBUG("colorNot")
}

/* + ( ) Add S to T (discard S) */
/* + ( ) Add S to T with carry ( Requires bit 9 of P be set ) */
void colorPlus(void) {
	PSMSG_DEBUG("colorPlus")
}

/* and ( ) Bit-wise and of S and T */
void colorAnd(void) {
	PSMSG_DEBUG("colorAnd")
}

/* or ( ) Bit-wise exclusive-or of S and T */
void colorOr(void) {
	PSMSG_DEBUG("colorOr")
}

/* drop ( ) Discard T */
void colorDrop(void) {
	PSMSG_DEBUG("colorDrop")
}

/**********************/
/* Stack Instructions */
/**********************/

/* dup ( ) Create a working copy of T */
void colorDup(void) {
	PSMSG_DEBUG("colorDup")
}

/* pop ( ) Fetch R (destructive) */
void colorPop(void) {
	PSMSG_DEBUG("colorPop")
}

/* Over ( ) Fetch S (non-destructive) */
void colorOver(void) {
	PSMSG_DEBUG("colorOver")
}

/* a ( ) Fetch A (non-destructive) */
void colorReadA(void) {
	PSMSG_DEBUG("colorReadA")
}

/* . ( ) Do nothing */
void colorNop(void) {
	PSMSG_DEBUG("colorNop")
}

/* push ( ) Push T into R */
void colorPush(void) {
	PSMSG_DEBUG("colorPush")
}

/* b! ( ) Store into B ( Be careful to distinguish b! and !b ) */
void colorSetB(void) {
	PSMSG_DEBUG("colorSetB")
}

/* b! ( ) Store into A ) */
void colorSetA(void) {
	PSMSG_DEBUG("colorSetA")
}

/* Extra words */

#endif
