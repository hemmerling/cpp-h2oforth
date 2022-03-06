#ifndef H2OE2
#define H2OE2

/* The "eforth" FORTH */
/* Primitives */

/* System interface */

/* BYE ( ) */
void eforthBYE(void) {
	MESSSAGE_DEBUG("eforthBYE")
}

/* ?rx ( ) */
/* ?key ( ) */
void eforthKey(void) {
	MESSSAGE_DEBUG("eforthKey")
}

/* tx! ( ) */
/* emit ( ) */
void eforthEmit(void) {
	MESSSAGE_DEBUG("eforthEmit")
}

/* !io ( ) */
void eforthInitIO(void) {
	MESSSAGE_DEBUG("eforthInitIO")
}

/* Inner interpreters */

/* doLIT ( ) */
void eforthDoLIT(void) {
	MESSSAGE_DEBUG("eforthDoLIT")
}

/* doLIST ( ) */
void eforthDoLIST(void) {
	MESSSAGE_DEBUG("eforthDoLIST")
}

/* next ( ) */
void eforthNext(void) {
	MESSSAGE_DEBUG("eforthNext")
}

/* ?branch ( ) */
void eforthBranchIfZero(void) {
	MESSSAGE_DEBUG("eforthBranchIfZero")
}

/* branch ( ) */
void eforthBranch(void) {
	MESSSAGE_DEBUG("eforthBranch")
}

/* EXECUTE ( ) */
void eforthEXECUTE(void) {
	MESSSAGE_DEBUG("eforthEXECUTE")
}

/* EXIT ( ) */
void eforthEXIT(void) {
	MESSSAGE_DEBUG("eforthEXIT")
}

/* ! ( ) */
void eforthStore(void) {
	MESSSAGE_DEBUG("eforthStore")
}

/* @ ( ) */
void eforthFetch(void) {
	MESSSAGE_DEBUG("eforthFetch")
}

/* C! ( ) */
void eforthStoreChar(void) {
	MESSSAGE_DEBUG("eforthStoreChar")
}

/* C@ ( ) */
void eforthFetchChar(void) {
	MESSSAGE_DEBUG("eforthFetchChar")
}

/* RP@ ( ) */
void eforthFetchRP(void) {
	MESSSAGE_DEBUG("eforthRP")
}

/* RP! ( ) */
void eforthStoreRP(void) {
	MESSSAGE_DEBUG("eforthStoreRP")
}

/* R> ( ) */
void eforthRSFrom(void) {
	MESSSAGE_DEBUG("eforthRSFrom")
}

/* R@ ( ) */
void eforthRSFetch(void) {
	MESSSAGE_DEBUG("eforthRSFrom")
}

/* >R ( ) */
void eforthToRS(void) {
	MESSSAGE_DEBUG("eforthToRS")
}

/* SP@ ( ) */
void eforthFetchSP(void) {
	MESSSAGE_DEBUG("eforthFetchSP")
}

/* SP! ( ) */
void eforthStoreSP(void) {
	MESSSAGE_DEBUG("eforthStoreSP")
}

/* DROP ( ) */
void eforthDROP(void) {
	MESSSAGE_DEBUG("eforthDROP")
}

/* DUP ( ) */
void eforthDUP(void) {
	MESSSAGE_DEBUG("eforthDUP")
}

/* SWAP ( ) */
void eforthSWAP(void) {
	MESSSAGE_DEBUG("eforthSWAP")
}

/* OVER ( ) */
void eforthOVER(void) {
	MESSSAGE_DEBUG("eforthOVER")
}

/* 0< ( ) */
void eforthLessThanZero(void) {
	MESSSAGE_DEBUG("eforthLessThanZero")
}

/* AND ( ) */
void eforthAND(void) {
	MESSSAGE_DEBUG("eforthAND")
}

/* OR ( ) */
void eforthOR(void) {
	MESSSAGE_DEBUG("eforthOR")
}

/* XOR ( ) */
void eforthXOR(void) {
	MESSSAGE_DEBUG("eforthXOR")
}

/* UM+ ( ) */
void eforthAddWithCarry(void) {
	MESSSAGE_DEBUG("eforthAddWithCarry")
}

#endif
