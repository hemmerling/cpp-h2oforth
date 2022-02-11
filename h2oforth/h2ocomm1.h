#ifndef H2OCOMM1
#define H2OCOMM1

/* Definitions of FORTH words common to one or more FORTH standards & FORTH implementations */

void privateMessageHandler(void);
void privateSetBaseFormat(void);
void privateSetBaseLFormat(void);
void commonOctal(void);
void commonHexDot(void);
void commonOctDot(void);

void exceptionAbort(void);
void exceptionAbortQ(void);
void exceptionCatch(void);
void exceptionThrow(void);
void exceptionQuit(void);

void fpointDotF(void);

void taskingActivate(void);
void taskingLock(void);
void taskingMultiTask(void);
void taskingPass(void);
void taskingPause(void);
void taskingRendezvous(void);
void taskingSingleTask(void);
void taskingSleep(void);
void taskingStop(void);
void taskingTask(void);
void taskingTasks(void);
void taskingUnlock(void);
void taskingWake(void);
void taskingUPFetch(void);
void taskingUPStore(void);

void testingTCurlyBracket(void);
void testingCurlyBracketT(void);


static const typedef_forthWord commonWords[] = {
			{ "OCTAL", "OCTAL", TRUE, FALSE, FALSE, MAX_FORTHWORD_ID, (forthOperation)commonOctal },
			{ "HEX.", "HEX.", TRUE, FALSE, FALSE, 0UL, (forthOperation)commonHexDot },
			{ "OCT.", "OCT.", TRUE, FALSE, FALSE, 0UL, (forthOperation)commonOctDot },
};

#ifdef EXCEPTION_SUPPORT
static const typedef_forthWord exceptionWords[] = {
			{ "ABORT", "ABORT", TRUE, FALSE, FALSE, 0UL, (forthOperation)exceptionAbort },
			{ "ABORT\"", "ABORT\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)exceptionAbortQ },
			{ "CATCH", "CATCH", TRUE, FALSE, FALSE, 0UL, (forthOperation)exceptionCatch },
			{ "QUIT", "QUIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)exceptionQuit },
			{ "THROW", "THROW", TRUE, FALSE, FALSE, 0UL, (forthOperation)exceptionThrow }
};
#endif

#ifdef FLOAT_SUPPORT
static const typedef_forthWord fpointWords[] = {
			{ ".F", ".F", TRUE, FALSE, FALSE, MAX_FORTHWORD_ID, (forthOperation)fpointDotF }
};
#endif

#ifdef TASKING_SUPPORT
static const typedef_forthWord taskingWords[] = {
			{ "ACTIVATE", "ACTIVATE", TRUE, FALSE, FALSE, MAX_FORTHWORD_ID, (forthOperation)taskingActivate },
			{ "LOCK", "LOCK", TRUE, FALSE, FALSE, MAX_FORTHWORD_ID, (forthOperation)taskingLock },
			{ "MULTITASK", "MULTITASK", TRUE, FALSE, FALSE, MAX_FORTHWORD_ID, (forthOperation)taskingMultiTask },
			{ "PASS", "PASS", TRUE, FALSE, FALSE, MAX_FORTHWORD_ID, (forthOperation)taskingPass },
			{ "PAUSE", "PAUSE", TRUE, FALSE, FALSE, MAX_FORTHWORD_ID, (forthOperation)taskingPause },
			{ "RENDEZVOUS", "RENDEZVOUS", TRUE, FALSE, FALSE, MAX_FORTHWORD_ID, (forthOperation)taskingRendezvous },
			{ "SINGLETASK", "SINGLETASK", TRUE, FALSE, FALSE, MAX_FORTHWORD_ID, (forthOperation)taskingSingleTask },
			{ "SLEEP", "SLEEP", TRUE, FALSE, FALSE, MAX_FORTHWORD_ID, (forthOperation)taskingSleep },
			{ "STOP", "STOP", TRUE, FALSE, FALSE, MAX_FORTHWORD_ID, (forthOperation)taskingStop },
			{ "TASK", "TASK", TRUE, FALSE, FALSE, MAX_FORTHWORD_ID, (forthOperation)taskingTask },
			{ "TASKS", "TASKS", TRUE, FALSE, FALSE, MAX_FORTHWORD_ID, (forthOperation)taskingTasks },
			{ "UNLOCK", "UNLOCK", TRUE, FALSE, FALSE, MAX_FORTHWORD_ID, (forthOperation)taskingUnlock },
			{ "STOP", "STOP", TRUE, FALSE, FALSE, MAX_FORTHWORD_ID, (forthOperation)taskingStop },
			{ "WAKE", "WAKE", TRUE, FALSE, FALSE, MAX_FORTHWORD_ID, (forthOperation)taskingWake },
			{ "UP@", "UP@", TRUE, FALSE, FALSE, MAX_FORTHWORD_ID, (forthOperation)taskingUPFetch },
			{ "UP!", "UP!", TRUE, FALSE, FALSE, MAX_FORTHWORD_ID, (forthOperation)taskingUPStore }
};
#endif

#ifdef TESTING_SUPPORT
static const typedef_forthWord testingWords[] = {
			{ "T{", "T{", TRUE, FALSE, FALSE, MAX_FORTHWORD_ID, (forthOperation)testingTCurlyBracket },
			{ "}T", "}T", TRUE, FALSE, FALSE, MAX_FORTHWORD_ID, (forthOperation)testingCurlyBracketT }
};
#endif

#endif
