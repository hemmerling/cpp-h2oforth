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

void fpointFDotS(void);
void fpointFDot(void);
void fpointNumFS(void);
void fpointSetPrecision(void);
void fpointPrecision(void);
void fpointFSqrt(void);
void fpointPi(void);
void fpointFVariable(void);
void fpointFConstant(void);
void fpointFLiteral(void);
void fpointAFLiteral(void);
void fpointSFComma(void);
void fpointSFloatPlus(void);
void fpointSFloats(void);
void fpointSFloat(void);
void fpointSFGreaterEqual(void);
void fpointSFLessEqual(void);
void fpointSFUnequal(void);
void fpointSFGreater(void);
void fpointSFLess(void);
void fpointSFEqual(void);
void fpointFg(void);
void fpointFDepth(void);
void fpointFP0(void);
void fpointFGreaterNumberQ(void);
void fpointFToS(void);
void fpointSToF(void);
void fpointOneSlashF(void);
void fpointFSlash(void);
void fpointFStar(void);
void fpointFMinus(void);
void fpointFPlus(void);
void fpointF0Equal(void);
void fpointF0Less(void);
void fpointFNegate(void);
void fpointFswa(void);
void fpointFOver(void);
void fpointFDrop(void);
void fpointFNip(void);
void fpointFDup(void);
void fpointSFStore(void);
void fpointSFFetch(void);
void fpointSF(void);
void fpointFPStore(void);
void fpointFPFetch(void);

void taskingVfActivate(void);
void taskingVfLock(void);
void taskingVfMultiTask(void);
void taskingVfPass(void);
void taskingVfPause(void);
void taskingVfRendezvous(void);
void taskingVfSingleTask(void);
void taskingVfSleep(void);
void taskingVfStop(void);
void taskingVfTask(void);
void taskingVfTasks(void);
void taskingVfUnlock(void);
void taskingVfWake(void);
void taskingVfUPFetch(void);
void taskingVfUPStore(void);

void taskingF83Allot(void);
void taskingF83Create(void);
void taskingF83Variable(void);
void taskingF83Defer(void);
void taskingF83Pause(void);
void taskingF83Restart(void);
void taskingF83Local(void);
void taskingF83FetchLink(void);
void taskingF83StoreLink(void);
void taskingF83Sleep(void);
void taskingF83Wake(void);
void taskingF83Stop(void);
void taskingF83Multi(void);
void taskingF83Single(void);
void taskingF83Task(void);
void taskingF83SetTask(void);
void taskingF83Activate(void);
void taskingF83Background(void);

void testingTCurlyBracket(void);
void testingCurlyBracketT(void);


static const typedef_forthWord commonWords[] = {
			{ "OCTAL", "OCTAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)commonOctal },
			{ "HEX.", "HEX.", TRUE, FALSE, FALSE, 0UL, (forthOperation)commonHexDot },
			{ "OCT.", "OCT.", TRUE, FALSE, FALSE, MAX_FORTHWORD_ID, (forthOperation)commonOctDot },
};

#ifdef EXCEPTION_SUPPORT
static const typedef_forthWord exceptionWords[] = {
			{ "ABORT", "ABORT", TRUE, FALSE, FALSE, 0UL, (forthOperation)exceptionAbort },
			{ "ABORT\"", "ABORT\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)exceptionAbortQ },
			{ "CATCH", "CATCH", TRUE, FALSE, FALSE, 0UL, (forthOperation)exceptionCatch },
			{ "QUIT", "QUIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)exceptionQuit },
			{ "THROW", "THROW", TRUE, FALSE, FALSE, MAX_FORTHWORD_ID, (forthOperation)exceptionThrow }
};
#endif

#ifdef FLOAT_SUPPORT
static const typedef_forthWord fpointWords[] = {
  			{ "F.S", "f.s", TRUE, FALSE, FALSE, 0UL, (forthOperation)fpointFDotS },
  			{ "F.", "f.", TRUE, FALSE, FALSE, 0UL, (forthOperation)fpointFDot },
   			{ "#FS", "#fs", TRUE, FALSE, FALSE, 0UL, (forthOperation)fpointNumFS },
  			{ "SET-PRECISION", "set-precision", TRUE, FALSE, FALSE, 0UL, (forthOperation)fpointSetPrecision },
  			{ "PRECISION", "precision", TRUE, FALSE, FALSE, 0UL, (forthOperation)fpointPrecision },
  			{ "FSQRT", "fsqrt", TRUE, FALSE, FALSE, 0UL, (forthOperation)fpointFSqrt },
  			{ "PI", "pi", TRUE, FALSE, FALSE, 0UL, (forthOperation)fpointPi },
  			{ "FVARIABLE", "fvariable", TRUE, FALSE, FALSE, 0UL, (forthOperation)fpointFVariable },
  			{ "FCONSTANT", "fconstant", TRUE, FALSE, FALSE, 0UL, (forthOperation)fpointFConstant },
  			{ "FLITERAL", "fliteral", TRUE, FALSE, FALSE, 0UL, (forthOperation)fpointFLiteral },
  			{ "AFLITERAL", "afliteral", TRUE, FALSE, FALSE, 0UL, (forthOperation)fpointAFLiteral },
  			{ "SF,", "sf,", TRUE, FALSE, FALSE, 0UL, (forthOperation)fpointSFComma },
  			{ "SFLOAT+", "sfloat+", TRUE, FALSE, FALSE, 0UL, (forthOperation)fpointSFloatPlus },
  			{ "SFLOATS", "sfloats", TRUE, FALSE, FALSE, 0UL, (forthOperation)fpointSFloats },
  			{ "SFLOAT", "sfloat", TRUE, FALSE, FALSE, 0UL, (forthOperation)fpointSFloat },
  			{ "F>=", "f>=", TRUE, FALSE, FALSE, 0UL, (forthOperation)fpointSFGreaterEqual },
  			{ "F<=", "f<=", TRUE, FALSE, FALSE, 0UL, (forthOperation)fpointSFLessEqual },
			{ "F<>", "f<>", TRUE, FALSE, FALSE, 0UL, (forthOperation)fpointSFUnequal },
			{ "F>", "f>", TRUE, FALSE, FALSE, 0UL, (forthOperation)fpointSFGreater },
			{ "F<", "f<", TRUE, FALSE, FALSE, 0UL, (forthOperation)fpointSFLess },
			{ "F=", "f=", TRUE, FALSE, FALSE, 0UL, (forthOperation)fpointSFEqual },
			{ "FG", "fg", TRUE, FALSE, FALSE, 0UL, (forthOperation)fpointFg },
			{ "FDEPTH", "fdepth", TRUE, FALSE, FALSE, 0UL, (forthOperation)fpointFDepth },
			{ "FP0", "fp0", TRUE, FALSE, FALSE, 0UL, (forthOperation)fpointFP0 },
			{ "F>NUMBER?", "F>NUMBER?", TRUE, FALSE, FALSE, 0UL, (forthOperation)fpointFGreaterNumberQ }, 
			{ "F>S", "F>S", TRUE, FALSE, FALSE, 0UL, (forthOperation)fpointFToS }, 
			{ "S>F", "S>F", TRUE, FALSE, FALSE, 0UL, (forthOperation)fpointSToF },
			{ "1/F", "1/F", TRUE, FALSE, FALSE, 0UL, (forthOperation)fpointOneSlashF },
			{ "F/", "F/", TRUE, FALSE, FALSE, 0UL, (forthOperation)fpointFSlash },
			{ "F*", "F*", TRUE, FALSE, FALSE, 0UL, (forthOperation)fpointFStar },
			{ "F-", "F-", TRUE, FALSE, FALSE, 0UL, (forthOperation)fpointFMinus },
			{ "F+", "F+", TRUE, FALSE, FALSE, 0UL, (forthOperation)fpointFPlus },
			{ "F0=", "F0=", TRUE, FALSE, FALSE, 0UL, (forthOperation)fpointF0Equal },
			{ "F0<>", "F0<", TRUE, FALSE, FALSE, 0UL, (forthOperation)fpointF0Less },
			{ "FNEGATE", "FNEGATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)fpointFNegate },
			{ "FSWA", "FSWA", TRUE, FALSE, FALSE, 0UL, (forthOperation)fpointFswa },
			{ "FOVER", "FOVER", TRUE, FALSE, FALSE, 0UL, (forthOperation)fpointFOver },
			{ "FDROP", "FDROP", TRUE, FALSE, FALSE, 0UL, (forthOperation)fpointFDrop },
			{ "FNIP", "FNIP", TRUE, FALSE, FALSE, 0UL, (forthOperation)fpointFNip },
			{ "FDUP", "FDUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)fpointFDup },
			{ "SF!", "SF!", TRUE, FALSE, FALSE, 0UL, (forthOperation)fpointSFStore },
			{ "SF@", "SF@", TRUE, FALSE, FALSE, 0UL, (forthOperation)fpointSFFetch },
			{ "SF", "SF", TRUE, FALSE, FALSE, 0UL, (forthOperation)fpointSF },
			{ "FP!", "FP!", TRUE, FALSE, FALSE, 0UL, (forthOperation)fpointFPStore },
			{ "FP@", "FP@", TRUE, FALSE, FALSE, 0UL, (forthOperation)fpointFPFetch }
};
#endif

#if TASKINGSTANDARD == TASKINGSTD_VOLK
static const typedef_forthWord taskingWords[] = {
			{ "ACTIVATE", "ACTIVATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)taskingVfActivate },
			{ "LOCK", "LOCK", TRUE, FALSE, FALSE, 0UL, (forthOperation)taskingVfLock },
			{ "MULTITASK", "MULTITASK", TRUE, FALSE, FALSE, 0UL, (forthOperation)taskingVfMultiTask },
			{ "PASS", "PASS", TRUE, FALSE, FALSE, 0UL, (forthOperation)taskingVfPass },
			{ "PAUSE", "PAUSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)taskingVfPause },
			{ "RENDEZVOUS", "RENDEZVOUS", TRUE, FALSE, FALSE, 0UL, (forthOperation)taskingVfRendezvous },
			{ "SINGLETASK", "SINGLETASK", TRUE, FALSE, FALSE, 0UL, (forthOperation)taskingVfSingleTask },
			{ "SLEEP", "SLEEP", TRUE, FALSE, FALSE, 0UL, (forthOperation)taskingVfSleep },
			{ "STOP", "STOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)taskingVfStop },
			{ "TASK", "TASK", TRUE, FALSE, FALSE, 0UL, (forthOperation)taskingVfTask },
			{ "TASKS", "TASKS", TRUE, FALSE, FALSE, 0UL, (forthOperation)taskingVfTasks },
			{ "UNLOCK", "UNLOCK", TRUE, FALSE, FALSE, 0UL, (forthOperation)taskingVfUnlock },
			{ "STOP", "STOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)taskingVfStop },
			{ "WAKE", "WAKE", TRUE, FALSE, FALSE, 0UL, (forthOperation)taskingVfWake },
			{ "UP@", "UP@", TRUE, FALSE, FALSE, 0UL, (forthOperation)taskingVfUPFetch },
			{ "UP!", "UP!", TRUE, FALSE, FALSE, MAX_FORTHWORD_ID, (forthOperation)taskingVfUPStore }
};
#endif
#if TASKINGSTANDARD == TASKINGSTD_FORTH83
static const typedef_forthWord taskingWords[] = {
			{ "TSKALLOT", "TSKALLOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)taskingF83Allot },
			{ "TSKCREATE", "TSKCREATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)taskingF83Create },
			{ "TSKVARIABLE", "TSKVARIABLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)taskingF83Variable },
			{ "TSKDEFER", "TSKDEFER", TRUE, FALSE, FALSE, 0UL, (forthOperation)taskingF83Defer },
			{ "PAUSE", "PAUSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)taskingF83Pause },
			{ "RESTART", "RESTART", TRUE, FALSE, FALSE, 0UL, (forthOperation)taskingF83Restart },
			{ "LOCAL", "LOCAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)taskingF83Local },
			{ "@LINK", "@LINK", TRUE, FALSE, FALSE, 0UL, (forthOperation)taskingF83FetchLink },
			{ "!LINK", "!LINK", TRUE, FALSE, FALSE, 0UL, (forthOperation)taskingF83StoreLink },
			{ "SLEEP", "SLEEP", TRUE, FALSE, FALSE, 0UL, (forthOperation)taskingF83Sleep },
			{ "WAKE", "WAKE", TRUE, FALSE, FALSE, 0UL, (forthOperation)taskingF83Wake },
			{ "STOP", "STOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)taskingF83Stop },
			{ "MULTI", "MULTI", TRUE, FALSE, FALSE, 0UL, (forthOperation)taskingF83Multi },
			{ "SINGLE", "SINGLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)taskingF83Single },
			{ "TASK", "TASK", TRUE, FALSE, FALSE, 0UL, (forthOperation)taskingF83Task },
			{ "SET-TASK", "SET-TASK", TRUE, FALSE, FALSE, 0UL, (forthOperation)taskingF83SetTask },
			{ "ACTIVATE", "ACTIVATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)taskingF83Activate },
			{ "BACKGROUND", "BACKGROUND", TRUE, FALSE, FALSE, MAX_FORTHWORD_ID, (forthOperation)taskingF83Background }
};
#endif

#ifdef TESTING_SUPPORT
static const typedef_forthWord testingWords[] = {
			{ "T{", "T{", TRUE, FALSE, FALSE, 0UL, (forthOperation)testingTCurlyBracket },
			{ "}T", "}T", TRUE, FALSE, FALSE, MAX_FORTHWORD_ID, (forthOperation)testingCurlyBracketT }
};
#endif

#endif
