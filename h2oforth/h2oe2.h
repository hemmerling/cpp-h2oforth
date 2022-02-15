#ifndef H2OE2
#define H2OE2

/* The "eforth" FORTH */
/* Primitives */

/* System interface */

/* BYE ( ) */
void eforthBYE(void) {
	DEBUG_WORD("eforthBYE")
}

/* ?rx ( ) */
/* ?key ( ) */
void eforthKey(void) {
	DEBUG_WORD("eforthKey")
}

/* tx! ( ) */
/* emit ( ) */
void eforthEmit(void) {
	DEBUG_WORD("eforthEmit")
}

/* !io ( ) */
void eforthInitIO(void) {
	DEBUG_WORD("eforthInitIO")
}

/* Inner interpreters */

/* doLIT ( ) */
void eforthDoLIT(void) {
	DEBUG_WORD("eforthDoLIT")
}

/* doLIST ( ) */
void eforthDoLIST(void) {
	DEBUG_WORD("eforthDoLIST")
}

/* next ( ) */
void eforthNext(void) {
	DEBUG_WORD("eforthNext")
}

/* ?branch ( ) */
void eforthBranchIfZero(void) {
	DEBUG_WORD("eforthBranchIfZero")
}

/* branch ( ) */
void eforthBranch(void) {
	DEBUG_WORD("eforthBranch")
}

/* EXECUTE ( ) */
void eforthEXECUTE(void) {
	DEBUG_WORD("eforthEXECUTE")
}

/* EXIT ( ) */
void eforthEXIT(void) {
	DEBUG_WORD("eforthEXIT")
}

/* ! ( ) */
void eforthStore(void) {
	DEBUG_WORD("eforthStore")
}

/* @ ( ) */
void eforthFetch(void) {
	DEBUG_WORD("eforthFetch")
}

/* C! ( ) */
void eforthStoreChar(void) {
	DEBUG_WORD("eforthStoreChar")
}

/* C@ ( ) */
void eforthFetchChar(void) {
	DEBUG_WORD("eforthFetchChar")
}

/* RP@ ( ) */
void eforthFetchRP(void) {
	DEBUG_WORD("eforthRP")
}

/* RP! ( ) */
void eforthStoreRP(void) {
	DEBUG_WORD("eforthStoreRP")
}

/* R> ( ) */
void eforthRSFrom(void) {
	DEBUG_WORD("eforthRSFrom")
}

/* R@ ( ) */
void eforthRSFetch(void) {
	DEBUG_WORD("eforthRSFrom")
}

/* >R ( ) */
void eforthToRS(void) {
	DEBUG_WORD("eforthToRS")
}

/* SP@ ( ) */
void eforthFetchSP(void) {
	DEBUG_WORD("eforthFetchSP")
}

/* SP! ( ) */
void eforthStoreSP(void) {
	DEBUG_WORD("eforthStoreSP")
}

/* DROP ( ) */
void eforthDROP(void) {
	DEBUG_WORD("eforthDROP")
}

/* DUP ( ) */
void eforthDUP(void) {
	DEBUG_WORD("eforthDUP")
}

/* SWAP ( ) */
void eforthSWAP(void) {
	DEBUG_WORD("eforthSWAP")
}

/* OVER ( ) */
void eforthOVER(void) {
	DEBUG_WORD("eforthOVER")
}

/* 0< ( ) */
void eforthLessThanZero(void) {
	DEBUG_WORD("eforthLessThanZero")
}

/* AND ( ) */
void eforthAND(void) {
	DEBUG_WORD("eforthAND")
}

/* OR ( ) */
void eforthOR(void) {
	DEBUG_WORD("eforthOR")
}

/* XOR ( ) */
void eforthXOR(void) {
	DEBUG_WORD("eforthXOR")
}

/* UM+ ( ) */
void eforthAddWithCarry(void) {
	DEBUG_WORD("eforthAddWithCarry")
}

#endif
