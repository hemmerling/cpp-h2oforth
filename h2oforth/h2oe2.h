#ifndef H2OE2
#define H2OE2

/* The "eforth" FORTH */
/* Primitives */

/* System interface */

/* BYE ( ) */
void eforthBYE(void) {
#if defined (__DEBUG__)
	printf("eforthBYE\n");
#endif
}

/* ?rx ( ) */
/* ?key ( ) */
void eforthKey(void) {
#if defined (__DEBUG__)
	printf("eforthKey\n");
#endif
}

/* tx! ( ) */
/* emit ( ) */
void eforthEmit(void) {
#if defined (__DEBUG__)
	printf("eforthEmit\n");
#endif
}

/* !io ( ) */
void eforthInitIO(void) {
#if defined (__DEBUG__)
	printf("eforthInitIO\n");
#endif
}

/* Inner interpreters */

/* doLIT ( ) */
void eforthDoLIT(void) {
#if defined (__DEBUG__)
	printf("eforthDoLIT\n");
#endif
}

/* doLIST ( ) */
void eforthDoLIST(void) {
#if defined (__DEBUG__)
	printf("eforthDoLIST\n");
#endif
}

/* next ( ) */
void eforthNext(void) {
#if defined (__DEBUG__)
	printf("eforthNext\n");
#endif
}

/* ?branch ( ) */
void eforthBranchIfZero(void) {
#if defined (__DEBUG__)
	printf("eforthBranchIfZero\n");
#endif
}

/* branch ( ) */
void eforthBranch(void) {
#if defined (__DEBUG__)
	printf("eforthBranch\n");
#endif
}

/* EXECUTE ( ) */
void eforthEXECUTE(void) {
#if defined (__DEBUG__)
	printf("eforthEXECUTE\n");
#endif
}

/* EXIT ( ) */
void eforthEXIT(void) {
#if defined (__DEBUG__)
	printf("eforthEXIT\n");
#endif
}

/* ! ( ) */
void eforthStore(void) {
#if defined (__DEBUG__)
	printf("eforthStore\n");
#endif
}

/* @ ( ) */
void eforthFetch(void) {
#if defined (__DEBUG__)
	printf("eforthFetch\n");
#endif
}

/* C! ( ) */
void eforthStoreChar(void) {
#if defined (__DEBUG__)
	printf("eforthStoreChar\n");
#endif
}

/* C@ ( ) */
void eforthFetchChar(void) {
#if defined (__DEBUG__)
	printf("eforthFetchChar\n");
#endif
}

/* RP@ ( ) */
void eforthFetchRP(void) {
#if defined (__DEBUG__)
	printf("eforthRP\n");
#endif
}

/* RP! ( ) */
void eforthStoreRP(void) {
#if defined (__DEBUG__)
	printf("eforthStoreRP\n");
#endif
}

/* R> ( ) */
void eforthRSFrom(void) {
#if defined (__DEBUG__)
	printf("eforthRSFrom\n");
#endif
}

/* R@ ( ) */
void eforthRSFetch(void) {
#if defined (__DEBUG__)
	printf("eforthRSFrom\n");
#endif
}

/* >R ( ) */
void eforthToRS(void) {
#if defined (__DEBUG__)
	printf("eforthToRS\n");
#endif
}

/* SP@ ( ) */
void eforthFetchSP(void) {
#if defined (__DEBUG__)
	printf("eforthFetchSP\n");
#endif
}

/* SP! ( ) */
void eforthStoreSP(void) {
#if defined (__DEBUG__)
	printf("eforthStoreSP\n");
#endif
}

/* DROP ( ) */
void eforthDROP(void) {
#if defined (__DEBUG__)
	printf("eforthDROP\n");
#endif
}

/* DUP ( ) */
void eforthDUP(void) {
#if defined (__DEBUG__)
	printf("eforthDUP\n");
#endif
}

/* SWAP ( ) */
void eforthSWAP(void) {
#if defined (__DEBUG__)
	printf("eforthSWAP\n");
#endif
}

/* OVER ( ) */
void eforthOVER(void) {
#if defined (__DEBUG__)
	printf("eforthOVER\n");
#endif
}

/* 0< ( ) */
void eforthLessThanZero(void) {
#if defined (__DEBUG__)
	printf("eforthLessThanZero\n");
#endif
}

/* AND ( ) */
void eforthAND(void) {
#if defined (__DEBUG__)
	printf("eforthAND\n");
#endif
}

/* OR ( ) */
void eforthOR(void) {
#if defined (__DEBUG__)
	printf("eforthOR\n");
#endif
}

/* XOR ( ) */
void eforthXOR(void) {
#if defined (__DEBUG__)
	printf("eforthXOR\n");
#endif
}

/* UM+ ( ) */
void eforthAddWithCarry(void) {
#if defined (__DEBUG__)
	printf("eforthAddWithCarry\n");
#endif
}

#endif
