#ifndef H2OCOL2
#define H2OCOL2

/* The "Colorforth" FORTH */
/* Primitives */

/*********************/
/* Jump Instructions */
/*********************/

/* "; ( )  Jump thru R (destructive) */
void colorRet(void) {
	MESSSAGE_DEBUG("colorRet")
}

/* ex ( )  Jump thru R, save P in R */
/* ;: ( )  Jump thru R, save P in R */
void colorExec(void) {
	MESSSAGE_DEBUG("colorExec")
}

/* ;: ( )  Jump thru I ( The opcode is not used explicitly. The compiler generates it ) */
void colorJmp(void) {
	MESSSAGE_DEBUG("colorJmp")
}

/* call ( )  Jump thru I, push current address to R ( The opcode is not used explicitly. Referencing any defined word generates a call )  */
void colorCall(void) {
	MESSSAGE_DEBUG("colorCall")
}

/* unext ( ) Jump to slot 0 ( Discards the address left by for ) */
void colorUnext(void) {
	MESSSAGE_DEBUG("colorUnext")
}

/* next ( ) If R is non-zero, jump thru I and decrement R. Otherwise pop R */
void colorNext(void) {
	MESSSAGE_DEBUG("colorNext")
}

/* if ( ) Jump thru I if T is zero */
void colorIf(void) {
	MESSSAGE_DEBUG("colorIf")
}

/* -if ( ) Jump thru I if T is positive */
void colorMinusIf(void) {
	MESSSAGE_DEBUG("colorMinusIf")
}

/***********************/
/* Memory Instructions */
/***********************/

/* @p ( ) Fetch thru P, increment P */
/* @p+ ( ) Fetch thru P, increment P */
void colorFetchP(void) {
	MESSSAGE_DEBUG("colorFetchP")
}

/* @+ ( ) Fetch thru A, increment A */
void colorFetchPlus(void) {
	MESSSAGE_DEBUG("colorFetchPlus")
}

/* @b ( ) Fetch thru B */
void colorFetchB(void) {
	MESSSAGE_DEBUG("colorFetchB")
}

/* @ ( ) Fetch thru A */
void colorFetch(void) {
	MESSSAGE_DEBUG("colorFetch")
}

/* !p ( ) Store thru P, increment P */
/* !p+ ( ) Store thru P, increment P */
void colorFetchStoreP(void) {
	MESSSAGE_DEBUG("colorFetchStoreP")
}

/* !+ ( ) Store thru A, increment A */
void colorFetchStorePlus(void) {
	MESSSAGE_DEBUG("colorFetchStorePlus")
}

/* !b ( ) Store thru B */
void colorStoreB(void) {
	MESSSAGE_DEBUG("colorStoreB")
}

/* ! ( ) Store thru A */
void colorStore(void) {
	MESSSAGE_DEBUG("colorStore")
}

/********************/
/* ALU Instructions */
/********************/

/* + ( ) Multiply step: add S to T if A0=1 then shift T and A right */
void colorMultiplyStep(void) {
	MESSSAGE_DEBUG("colorMultiplyStep")
}

/* 2* ( ) Shift T left */
void colorTimes2(void) {
	MESSSAGE_DEBUG("colorTimes2")
}

/* 2/ ( ) Shift T right; sign fill */
void colorDiv2(void) {
	MESSSAGE_DEBUG("colorDiv2")
}

/* - ( ) One's complement T */
void colorNot(void) {
	MESSSAGE_DEBUG("colorNot")
}

/* + ( ) Add S to T (discard S) */
/* + ( ) Add S to T with carry ( Requires bit 9 of P be set ) */
void colorPlus(void) {
	MESSSAGE_DEBUG("colorPlus")
}

/* and ( ) Bit-wise and of S and T */
void colorAnd(void) {
	MESSSAGE_DEBUG("colorAnd")
}

/* or ( ) Bit-wise exclusive-or of S and T */
void colorOr(void) {
	MESSSAGE_DEBUG("colorOr")
}

/* drop ( ) Discard T */
void colorDrop(void) {
	MESSSAGE_DEBUG("colorDrop")
}

/**********************/
/* Stack Instructions */
/**********************/

/* dup ( ) Create a working copy of T */
void colorDup(void) {
	MESSSAGE_DEBUG("colorDup")
}

/* pop ( ) Fetch R (destructive) */
void colorPop(void) {
	MESSSAGE_DEBUG("colorPop")
}

/* Over ( ) Fetch S (non-destructive) */
void colorOver(void) {
	MESSSAGE_DEBUG("colorOver")
}

/* a ( ) Fetch A (non-destructive) */
void colorReadA(void) {
	MESSSAGE_DEBUG("colorReadA")
}

/* . ( ) Do nothing */
void colorNop(void) {
	MESSSAGE_DEBUG("colorNop")
}

/* push ( ) Push T into R */
void colorPush(void) {
	MESSSAGE_DEBUG("colorPush")
}

/* b! ( ) Store into B ( Be careful to distinguish b! and !b ) */
void colorSetB(void) {
	MESSSAGE_DEBUG("colorSetB")
}

/* b! ( ) Store into A ) */
void colorSetA(void) {
	MESSSAGE_DEBUG("colorSetA")
}

/* Extra words */

#endif
