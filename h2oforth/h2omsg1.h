#ifndef H2OMSG1
#define H2OMSG1

/* Messages and error messages */

typedef  struct _forthWordList {
	int lenForthWords;
	const typedef_forthWord* forthWords;
} typedef_forthWordList;

typedef  struct _forthMessage {
	int messageNumber;
	const char* messageText;
} typedef_forthMessage;

/* Variables */
#define MESSAGE_DATASTACK_EMPTY 1
#define OSERROR_FILEOPEN 1

#if H2O_FORTH_PRIMITIVES == BBCMICRO_FORTH
#endif

#if (H2O_FORTH_PRIMITIVES == AIM65_FORTH) || \
	(H2O_FORTH_PRIMITIVES == ATARICOINUP_FORTH) || \
	(H2O_FORTH_PRIMITIVES == FIG_FORTH) || \
	(H2O_FORTH_PRIMITIVES == HECTOR_FORTH) || \
	(H2O_FORTH_PRIMITIVES == JUPITER_FORTH) || \
	(H2O_FORTH_PRIMITIVES == Q_FORTH) || \
	(H2O_FORTH_PRIMITIVES == RSC_FORTH) || \
	(H2O_FORTH_PRIMITIVES == TERSE_FORTH)

#define ERROR_NOERROR 0
#define ERROR_DATASTACK_EMPTY 1
#define ERROR_DATASTACK_FULL 7
#define ERROR_DIVISION_BY_ZERO 11
#define ERROR_NOT_IN_CURRENT_DIRECTORY 24
#define ERROR_RETURNSTACK_EMPTY 26
#define ERROR_RETURNSTACK_FULL 27
#define ERROR_SPINTEGER_UNDERFLOW 28
#define ERROR_SPINTEGER_OVERFLOW 29
#define ERROR_DPINTEGER_UNDERFLOW 30
#define ERROR_DPINTEGER_OVERFLOW 31

static const typedef_forthMessage forthErrors[] = {
			{ 0, "No Error" }, /* not for display, was: "( Error Messages )" */
			{ 1, "Empty Stack" },
			{ 2, "Dictionary Full" },
			{ 3, "Has Incorrect Address Mode" },
			{ 4, "Isn't unique" },
			{ 5, "reserved!" },
			{ 6, "Disk range ?" },
			{ 7, "Full Stack" },
			{ 8, "Disk Error !" },
			{ 9, "reserved!" },
			{ 10, "reserved!" },
			{ 11, "reserved!" },
			{ 12, "reserved!" },
			{ 13, "reserved!" },
			{ 14, "reserved!" },
			{ 15, "reserved!" },
			{ 16, "reserved!" },
			{ 17, "Compilation Only, Use in Definition" },
			{ 18, "Execution Only" },
			{ 19, "Conditionals not Paired" },
			{ 20, "Definition not Finished" },
			{ 21, "In Protected Dictionary" },
			{ 22, "Use Only When LOADing" },
			{ 23, "Off Current Editing Screen" },
			{ 24, "Declare Vocabulary" },
			{ 25, "reserved!" },
			{ 26, "ReturnStack empty" }, /* No original error code */
			{ 27, "ReturnStack full" }, /* No original error code */
			{ 28, "SP Integer Underflow!" }, /* No original error code */
			{ 29, "SP Integer Overflow!" }, /* No original error code */
			{ 30, "DP Integer Underflow!" }, /* No original error code, unused */
			{ 31, "DP Integer Overflow!" } /* No original error code */
};

#else

#define ERROR_NOERROR 0
#define ERROR_DATASTACK_EMPTY 1
#define ERROR_DATASTACK_FULL 7
#define ERROR_DIVISION_BY_ZERO 11
#define ERROR_NOT_IN_CURRENT_DIRECTORY 24
#define ERROR_RETURNSTACK_EMPTY 26
#define ERROR_RETURNSTACK_FULL 27
#define ERROR_SPINTEGER_UNDERFLOW 28
#define ERROR_SPINTEGER_OVERFLOW 29
#define ERROR_DPINTEGER_UNDERFLOW 30
#define ERROR_DPINTEGER_OVERFLOW 31

/* Richard De Grandis-Harrison: FORTH on the BBC Microcomputer", page 159ff */
static const typedef_forthMessage forthErrors[] = {
			{ 0, "No error" }, /* not for display, was: "reserved!" */
			{ 1, "Stack Empty" },
			{ 2, "Dictionary Full" },
			{ 3, "Has Incorrect Address Mode Assembler!" },
			{ 4, "Isn't unique" },
			{ 5, "Parameter Outside Valid Range" },
			{ 6, "Screen Number Out of Range" },
			{ 7, "Stack Full" },
			{ 8, "Can't Open or Extend File" },
			{ 9, "Read/Write not Completed" },
			{ 10, "Can't Redefine End-of-Line" },
			{ 11, "Can 't Divide by Zero" },
			{ 12, "Undefined Execution Vector" },
			{ 13, "Branch Too Long" },
			{ 14, "Incorrect CURRENT Vocabulary" },
			{ 15, "reserved!" },
			{ 16, "reserved!" },
			{ 17, "Compilation Only" },
			{ 18, "Execution Only" },
			{ 19, "Conditionals not Paired" },
			{ 20, "Definition not Finished" },
			{ 21, "In Protected Dictionary" },
			{ 22, "Use Only When LOADing" },
			{ 23, "Off Current Editing Screen" },
			{ 24, "Not in CURRENT Vocabulary" },
			{ 25, "System Memory Clash" },
			{ 26, "ReturnStack empty" }, /* No original error code */
			{ 27, "ReturnStack full" }, /* No original error code */
			{ 28, "SP Integer Underflow!" }, /* No original error code */
			{ 29, "SP Integer Overflow!" }, /* No original error code */
			{ 30, "DP Integer Underflow!" }, /* No original error code, unused */
			{ 31, "DP Integer Overflow!" } /* No original error code */
};

#endif

/* Messages, which are not errors */
static const typedef_forthMessage forthMessages[] = {
			{ 0, "No message" }, /* not for display */
			{ 1, "Stack Empty" }, /* Original message, but no original error code */
};

/* Error messages of the operating system, e.g with file I/O */
static const typedef_forthMessage forthOsErrors[] = {
			{ 0, "No message" }, /* not for display */
			{ 1, "File Open" }, /* No original error code */
};

#endif
