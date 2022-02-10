#ifndef H2OCOMM1
#define H2OCOMM1

/* Definitions of FORTH words common to one or more FORTH standards & FORTH implementations */
void commonOctal(void);
void privateMessageHandler(void);
void privateSetBaseFormat(void);
void privateSetBaseLFormat(void);
void commonHexDot(void);
void commonOctDot(void);
void commonAbort(void);
void commonAbortQ(void);
void commonCatch(void);
void commonThrow(void);
void commonQuit(void);
void fpointDotF(void);

static const typedef_forthWord commonWords[] = {
			{ "OCTAL", "OCTAL", TRUE, FALSE, FALSE, MAX_FORTHWORD_ID, (forthOperation)commonOctal },
			{ "HEX.", "HEX.", TRUE, FALSE, FALSE, 0UL, (forthOperation)commonHexDot },
			{ "OCT.", "OCT.", TRUE, FALSE, FALSE, 0UL, (forthOperation)commonOctDot },
			{ "ABORT", "ABORT", TRUE, FALSE, FALSE, 0UL, (forthOperation)commonAbort },
			{ "ABORT\"", "ABORT\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)commonAbortQ },
			{ "CATCH", "CATCH", TRUE, FALSE, FALSE, 0UL, (forthOperation)commonCatch },
			{ "QUIT", "QUIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)commonQuit },
			{ "THROW", "THROW", TRUE, FALSE, FALSE, 0UL, (forthOperation)commonThrow }
};

#ifdef FLOAT_SUPPORT
static const typedef_forthWord fpointWords[] = {
			{ ".F", ".F", TRUE, FALSE, FALSE, MAX_FORTHWORD_ID, (forthOperation)fpointDotF }
};
#endif
#endif
