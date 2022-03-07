#ifndef H2OE2
#define H2OE2

/* The "eforth" FORTH */
/* Primitives */

/* System interface */

/* BYE ( ) */
void eforthBYE(void) {
	SMSG_DEBUG("eforthBYE")
}

/* ?rx ( ) */
/* ?key ( ) */
void eforthKey(void) {
	SMSG_DEBUG("eforthKey")
}

/* tx! ( ) */
/* emit ( ) */
void eforthEmit(void) {
	SMSG_DEBUG("eforthEmit")
}

/* !io ( ) */
void eforthInitIO(void) {
	SMSG_DEBUG("eforthInitIO")
}

/* Inner interpreters */

/* doLIT ( ) */
void eforthDoLIT(void) {
	SMSG_DEBUG("eforthDoLIT")
}

/* doLIST ( ) */
void eforthDoLIST(void) {
	SMSG_DEBUG("eforthDoLIST")
}

/* next ( ) */
void eforthNext(void) {
	SMSG_DEBUG("eforthNext")
}

/* ?branch ( ) */
void eforthBranchIfZero(void) {
	SMSG_DEBUG("eforthBranchIfZero")
}

/* branch ( ) */
void eforthBranch(void) {
	SMSG_DEBUG("eforthBranch")
}

/* EXECUTE ( ) */
void eforthEXECUTE(void) {
	SMSG_DEBUG("eforthEXECUTE")
}

/* EXIT ( ) */
void eforthEXIT(void) {
	SMSG_DEBUG("eforthEXIT")
}

/* ! ( ) */
void eforthStore(void) {
	SMSG_DEBUG("eforthStore")
}

/* @ ( ) */
void eforthFetch(void) {
	SMSG_DEBUG("eforthFetch")
}

/* C! ( ) */
void eforthStoreChar(void) {
	SMSG_DEBUG("eforthStoreChar")
}

/* C@ ( ) */
void eforthFetchChar(void) {
	SMSG_DEBUG("eforthFetchChar")
}

/* RP@ ( ) */
void eforthFetchRP(void) {
	SMSG_DEBUG("eforthRP")
}

/* RP! ( ) */
void eforthStoreRP(void) {
	SMSG_DEBUG("eforthStoreRP")
}

/* R> ( ) */
void eforthRSFrom(void) {
	SMSG_DEBUG("eforthRSFrom")
}

/* R@ ( ) */
void eforthRSFetch(void) {
	SMSG_DEBUG("eforthRSFrom")
}

/* >R ( ) */
void eforthToRS(void) {
	SMSG_DEBUG("eforthToRS")
}

/* SP@ ( ) */
void eforthFetchSP(void) {
	SMSG_DEBUG("eforthFetchSP")
}

/* SP! ( ) */
void eforthStoreSP(void) {
	SMSG_DEBUG("eforthStoreSP")
}

/* DROP ( ) */
void eforthDROP(void) {
	SMSG_DEBUG("eforthDROP")
}

/* DUP ( ) */
void eforthDUP(void) {
	SMSG_DEBUG("eforthDUP")
}

/* SWAP ( ) */
void eforthSWAP(void) {
	SMSG_DEBUG("eforthSWAP")
}

/* OVER ( ) */
void eforthOVER(void) {
	SMSG_DEBUG("eforthOVER")
}

/* 0< ( ) */
void eforthLessThanZero(void) {
	SMSG_DEBUG("eforthLessThanZero")
}

/* AND ( ) */
void eforthAND(void) {
	SMSG_DEBUG("eforthAND")
}

/* OR ( ) */
void eforthOR(void) {
	SMSG_DEBUG("eforthOR")
}

/* XOR ( ) */
void eforthXOR(void) {
	SMSG_DEBUG("eforthXOR")
}

/* UM+ ( ) */
void eforthAddWithCarry(void) {
	SMSG_DEBUG("eforthAddWithCarry")
}

#endif
