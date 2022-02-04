#ifndef H2OCOMM1
#define H2OCOMM1

/* Definitions of FORTH words common to one or more FORTH standards & FORTH implementations */
void fpointDotF(void);
void commonOctal(void);
void privateErrorHandler(void);
void privateSetBaseFormat(void);
void privateSetBaseLFormat(void);
void bbc79HexDot(void);
void bbc79OctDot(void);

static const typedef_forthWord commonWords[] = {
			{ "OCTAL", "OCTAL", TRUE, FALSE, FALSE, MAX_FORTHWORD_ID, (forthOperation)commonOctal },
			{ "HEX.", "HEX.", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79HexDot },
			{ "OCT.", "OCT.", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79OctDot }
};

static const typedef_forthWord fpointWords[] = {
			{ ".F", ".F", TRUE, FALSE, FALSE, MAX_FORTHWORD_ID, (forthOperation)fpointDotF }
};
#endif
