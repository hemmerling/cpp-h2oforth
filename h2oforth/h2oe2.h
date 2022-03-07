#ifndef H2OE2
#define H2OE2

/* The "eforth" FORTH */
/* Primitives */

/* System interface */

/* BYE ( ) */
void eforthBYE(void) {
	PSMSG_DEBUG("eforthBYE")
}

/* ?rx ( ) */
/* ?key ( ) */
void eforthKey(void) {
	PSMSG_DEBUG("eforthKey")
}

/* tx! ( ) */
/* emit ( ) */
void eforthEmit(void) {
	PSMSG_DEBUG("eforthEmit")
}

/* !io ( ) */
void eforthInitIO(void) {
	PSMSG_DEBUG("eforthInitIO")
}

/* Inner interpreters */

/* doLIT ( ) */
void eforthDoLIT(void) {
	PSMSG_DEBUG("eforthDoLIT")
}

/* doLIST ( ) */
void eforthDoLIST(void) {
	PSMSG_DEBUG("eforthDoLIST")
}

/* next ( ) */
void eforthNext(void) {
	PSMSG_DEBUG("eforthNext")
}

/* ?branch ( ) */
void eforthBranchIfZero(void) {
	PSMSG_DEBUG("eforthBranchIfZero")
}

/* branch ( ) */
void eforthBranch(void) {
	PSMSG_DEBUG("eforthBranch")
}

/* EXECUTE ( ) */
void eforthEXECUTE(void) {
	PSMSG_DEBUG("eforthEXECUTE")
}

/* EXIT ( ) */
void eforthEXIT(void) {
	PSMSG_DEBUG("eforthEXIT")
}

/* ! ( ) */
void eforthStore(void) {
	PSMSG_DEBUG("eforthStore")
}

/* @ ( ) */
void eforthFetch(void) {
	PSMSG_DEBUG("eforthFetch")
}

/* C! ( ) */
void eforthStoreChar(void) {
	PSMSG_DEBUG("eforthStoreChar")
}

/* C@ ( ) */
void eforthFetchChar(void) {
	PSMSG_DEBUG("eforthFetchChar")
}

/* RP@ ( ) */
void eforthFetchRP(void) {
	PSMSG_DEBUG("eforthRP")
}

/* RP! ( ) */
void eforthStoreRP(void) {
	PSMSG_DEBUG("eforthStoreRP")
}

/* R> ( ) */
void eforthRSFrom(void) {
	PSMSG_DEBUG("eforthRSFrom")
}

/* R@ ( ) */
void eforthRSFetch(void) {
	PSMSG_DEBUG("eforthRSFrom")
}

/* >R ( ) */
void eforthToRS(void) {
	PSMSG_DEBUG("eforthToRS")
}

/* SP@ ( ) */
void eforthFetchSP(void) {
	PSMSG_DEBUG("eforthFetchSP")
}

/* SP! ( ) */
void eforthStoreSP(void) {
	PSMSG_DEBUG("eforthStoreSP")
}

/* DROP ( ) */
void eforthDROP(void) {
	PSMSG_DEBUG("eforthDROP")
}

/* DUP ( ) */
void eforthDUP(void) {
	PSMSG_DEBUG("eforthDUP")
}

/* SWAP ( ) */
void eforthSWAP(void) {
	PSMSG_DEBUG("eforthSWAP")
}

/* OVER ( ) */
void eforthOVER(void) {
	PSMSG_DEBUG("eforthOVER")
}

/* 0< ( ) */
void eforthLessThanZero(void) {
	PSMSG_DEBUG("eforthLessThanZero")
}

/* AND ( ) */
void eforthAND(void) {
	PSMSG_DEBUG("eforthAND")
}

/* OR ( ) */
void eforthOR(void) {
	PSMSG_DEBUG("eforthOR")
}

/* XOR ( ) */
void eforthXOR(void) {
	PSMSG_DEBUG("eforthXOR")
}

/* UM+ ( ) */
void eforthAddWithCarry(void) {
	PSMSG_DEBUG("eforthAddWithCarry")
}

#endif
