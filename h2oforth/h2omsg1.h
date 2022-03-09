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

/* Errors */
#define ERROR_NOERROR 50
#define ERROR_DATASTACK_EMPTY 51
#define ERROR_DATASTACK_FULL 52
#define ERROR_RETURNSTACK_EMPTY 53
#define ERROR_RETURNSTACK_FULL 54
#define ERROR_DIVISION_BY_ZERO 55
#define ERROR_NOT_IN_CURRENT_DIRECTORY 56
#define ERROR_PARAMETER_OUT_OF_RANGE 57
#define ERROR_DICTIONARY_FULL 58

#define ERROR_SPINTEGER_UNDERFLOW 60
#define ERROR_SPINTEGER_OVERFLOW 61
#define ERROR_DPINTEGER_UNDERFLOW 62
#define ERROR_DPINTEGER_OVERFLOW 63
#define ERROR_OPEN_FILE 64
#define ERROR_CREATE_BLOCKS 65
#define ERROR_OPEN_BLOCKS 66
#define ERROR_UNKNOWN_PARAMETER 67
#define WARNING_SYSWORD_IN_APPWORD 68
#define ERROR_NEWLINE 69

#define DEBUGMSG_WORD_IS_INTEGER 80
#define DEBUGMSG_IS_DPINTEGER 81
#define DEBUGMSG_IS_FLOAT 82
#define DEBUGMSG_IS_WORD 83

/* Messages */
#define MSG_KEYBOARD_INPUT2 10
#define MSG_TERMINAL_INPUT 11
#define MSG_KEYBOARD_INPUT1 12
#define MSG_TERMINATING 13
#define MSG_SAVING_CODE1 14

#define MSG_VERSION_BUILD_COMPILERSETTINGS1 20
#define MSG_COMPILERSETTINGS2 21
#define MSG_COMPILERSETTINGS3 22
#define MSG_COMPILERSETTINGS4 23
#define MSG_VERSION_BUILD_COMPILERSETTINGS1Z 24
#define MSG_COMPILERSETTINGS2Z 25
#define MSG_COMPILERSETTINGS3Z 26
#define MSG_COMPILERSETTINGS4Z 27

#define MSG_READ_DATABASE 30
#define MSG_READ_CODE 31
#define MSG_WRITE_BLOCKS 32
#define MSG_WRITE_CODE 33
#define MSG_HELP_COMMAND01 34
#define MSG_HELP_COMMAND02 35
#define MSG_HELP_COMMAND03 36
#define MSG_HELP_COMMAND04 37
#define MSG_HELP_COMMAND05 38
#define MSG_HELP_COMMAND06 39
#define MSG_HELP_COMMAND07 40
#define MSG_HELP_COMMAND08 41
#define MSG_HELP_COMMAND09 42
#define MSG_HELP_COMMAND10 43
#define MSG_HELP_NOPARAMETERS1 44
#define MSG_HELP_NOPARAMETERS2 45
#define MSG_HELP_EXPLAIN01 46
#define MSG_HELP_EXPLAIN02 47
#define MSG_HELP_EXPLAIN03 48
#define MSG_HELP_EXPLAIN04 49
#define MSG_HELP_EXPLAIN05 50
#define MSG_HELP_EXPLAIN06 51
#define MSG_HELP_EXPLAIN07 52
#define MSG_HELP_EXPLAIN08 53
#define MSG_HELP_EXPLAIN09 54
#define MSG_HELP_EXPLAIN10 55
#define MSG_SAVING_CODE2 56

#define MSG_COMMONWORD01 57
#define MSG_COMMONWORD02 58
#define MSG_COMMONWORD03 59
#define MSG_COMMONWORD04 60
#define MSG_COMMONWORD05 61
#define MSG_COMMONWORD06 62
#define MSG_COMMONWORD07 63
#define MSG_COMMONWORD08 64
#define MSG_COMMONWORD09 65
#define MSG_COMMONWORD10 66
#define MSG_COMMONWORD11 67
#define MSG_COMMONWORD12 68

#define MSG_WORD01 70
#define MSG_WORD02 71
#define MSG_WORD03 72

#if (MESSAGESTANDARD == MSGSTD_FIGFORTH) || \
	(MESSAGESTANDARD == MSGSTD_APX_FIGFORTH) || \
	(MESSAGESTANDARD == MSGSTD_BBC_FIGFORTH) || \
	(MESSAGESTANDARD == MSGSTD_BBC_FORTH79)

#if MESSAGESTANDARD == MSGSTD_FIGFORTH
/* fig-FORTH Installation Manual Release 1 */
static const PROGMEM typedef_forthMessage forthErrors[] = {
			{   0, "( ERROR MESSAGES )" },
			{   1, "EMPTY STACK" },
			{   2, "DICTIONARY FULL" },
			{   3, "HAS INCORRECT ADDRESS MODE" },
			{   4, "ISN'T UNIQUE" },
			{   5, "(reserved)" },
			{   6, "DISK RANGE ?" },
			{   7, "FULL STACK" },
			{   8, "DISC ERROR !" },
			{   9, "(reserved)" },
			{  10, "(reserved)" },
			{  11, "(reserved)" },
			{  12, "(reserved)" },
			{  13, "(reserved)" },
			{  14, "(reserved)" },
			{  15, "(reserved)" },
			{  16, "( ERROR MESSAGES )" },
			{  17, "COMPILATION ONLY, USE IN DEFINITION" },
			{  18, "EXECUTION ONLY" },
			{  19, "CONDITIONALS NOT PAIRED" },
			{  20, "DEFINITION NOT FINISHED" },
			{  21, "IN PROTECTED DICTIONARY" },
			{  22, "USE ONLY WHEN LOADING" },
			{  23, "OFF CURRENT EDITING SCREEN" },
			{  24, "DECLARE VOCABULARY" },
			{  25, "(reserved)" },
			{  26, "(reserved)" },
			{  27, "(reserved)" },
			{  28, "(reserved)" },
			{  29, "(reserved)" },
#endif

#if MESSAGESTANDARD == MSGSTD_APX_FIGFORTH
/* EXTENDED Atari fig-FORTH, Cassette: APX-10029, Diskette: APX-20029 (Atari Program Exchange) */
static const PROGMEM typedef_forthMessage forthErrors[] = {
			{   0, "( ERROR MESSAGES )" },
			{   1, "Stack empty" },
			{   2, "Dictionary full" },
			{   3, "Wrong address mode" },
			{   4, "Isn't unique" },
			{   5, "Value error" },
			{   6, "Disk address error" },
			{   7, "Full Stack" },
			{   8, "Disk Error !" },
			{   9, "(reserved)" },
			{  10, "(reserved)" },
			{  11, "(reserved)" },
			{  12, "(reserved)" },
			{  13, "(reserved)" },
			{  14, "(reserved)" },
			{  15, "(reserved)" },
			{  16, "( ERROR MESSAGES )" },
			{  17, "Use only in Definitions" },
			{  18, "Execution only" },
			{  19, "Conditionals not paired" },
			{  20, "Definition not finished" },
			{  21, "In protected dictionary" },
			{  22, "Use only when loading" },
			{  23, "Off current editing screen" },
			{  24, "Declare VOCABULARY" },
			{  25, "(reserved)" },
			{  26, "(reserved)" },
			{  27, "(reserved)" },
			{  28, "(reserved)" },
			{  29, "(reserved)" },
#endif

#if MESSAGESTANDARD == MSGSTD_BBC_FIGFORTH
/* Richard De Grandis-Harrison: "FORTH Theory and Practice", page 89 ( BBC figFORTH ) */
static const PROGMEM typedef_forthMessage forthErrors[] = {
			{   0, "Unrecognized word or invalid character" },
			{   1, "Empty stack" },
			{   2, "Dictionary full" },
			{   3, "Has Incorrect address mode (Assembler)" },
			{   4, "Not unique (warning only)" },
			{   5, "Index or parameter outside valid range" },
			{   6, "Tape/disc screen number out of range" },
			{   7, "Full stack" },
			{   8, "(Reserved for disk use)" },
			{   9, ")" },
			{  10, ")" },
			{  11, ") User definable" },
			{  12, ")" },
			{  13, ")" },
			{  14, ")" },
			{  15, "(Reserved for disk use)" },
			{  16, "(Reserved for disk use)" },
			{  17, "Compilation only" },
			{  18, "Execution only" },
			{  19, "Conditionals not paired" },
			{  20, "Definition not finished" },
			{  21, "In protected dictionary" },
			{  22, "Use only when loading" },
			{  23, "Off current editing screen" },
			{  24, "Declare vocabulary" },
			{  25, "(reserved)" },
			{  26, "(reserved)" },
			{  27, "(reserved)" },
			{  28, "(reserved)" },
			{  29, "(reserved)" },
#endif

#if MESSAGESTANDARD == MSGSTD_BBC_FORTH79
/*Richard De Grandis-Harrison: FORTH on the BBC Microcomputer", page 159ff ( BBC FORTH79 ) */
static const PROGMEM typedef_forthMessage forthErrors[] = {
			{   0, "(reserved)" },
			{   1, "Stack Empty" },
			{   2, "Dictionary Full" },
			{   3, "Has Incorrect Address Mode (Assembler)" },
			{   4, "Isn't unique" },
			{   5, "Parameter Outside Valid Range" },
			{   6, "Screen Number Out of Range" },
			{   7, "Stack Full" },
			{   8, "Can't Open or Extend File" },
			{   9, "Read/Write not Completed" },
			{  10, "Can't Redefine End-of-Line" },
			{  11, "Can 't Divide by Zero" },
			{  12, "Undefined Execution Vector" },
			{  13, "Branch Too Long (Assembler)" },
			{  14, "Incorrect CURRENT Vocabulary" },
			{  15, "(reserved)" },
			{  16, "(reserved)" },
			{  17, "Compilation Only" },
			{  18, "Execution Only" },
			{  19, "Conditionals not Paired" },
			{  20, "Definition not Finished" },
			{  21, "In Protected Dictionary" },
			{  22, "Use Only When LOADing" },
			{  23, "Off Current Editing Screen" },
			{  24, "Not in CURRENT Vocabulary" },
			{  25, "System Memory Clash" },
			{  26, "(reserved)" },
			{  27, "(reserved)" },
			{  28, "(reserved)" },
			{  29, "(reserved)" },
#endif
			{  30, "(reserved)" },
			{  31, "(reserved)" },
			{  32, "(reserved)" },
			{  33, "(reserved)" },
			{  34, "(reserved)" },
			{  35, "(reserved)" },
			{  36, "(reserved)" },
			{  37, "(reserved)" },
			{  38, "(reserved)" },
			{  39, "(reserved)" },
			{  40, "(reserved)" },
			{  41, "(reserved)" },
			{  42, "(reserved)" },
			{  43, "(reserved)" },
			{  44, "(reserved)" },
			{  45, "(reserved)" },
			{  46, "(reserved)" },
			{  47, "(reserved)" },
			{  48, "(reserved)" },
			{  49, "(reserved)" },

#elif MESSAGESTANDARD == MSGSTD_WIN32FORTH
/* Win32Forth */
static const PROGMEM typedef_forthMessage forthErrors[] = {
			{   0, "no message" }, /* ANS Error Messages */
			{   1, "<message from ABORT\">" },
			{   2, "stack underflow" },
			{   3, "is undefined" },
			{   4, "is compilation only" },
			{   5, "requires a name" },
			{   6, "control structure mismatch" },
			{   7, "file not found" },
			{   8, "floating point stack underflow" },
			{   9, "unmatched interpreted conditionals" },

			{  10, "is not a DEFER" }, /* Win32Forth Extended System Error Messages */
			{  11, "is not a VALUE" },
			{  12, "out of memory" },
			{  13, "memory allocation failed" },
			{  14, "memory release failed" },
			{  15, "create-file failed" },
			{  16, "read-file failed" },
			{  17, "write-file failed" },
			{  18, "is interpretation only" },
			{  19, "locals defined twice" },
			{  20, "too many locals" },
			{  21, "missing }" },
			{  22, "procedure not found" },
			{  23, "<Windows error message>" },
			{  24, "stack changed" },
			{  25, "can't use EXIT in a method" },
			{  26, "can't use DOES> in a method" },
			{  27, "method must end with ;M" },
			{  28, "reserved!" },
			{  29, "reserved!" },

			{  30, "is redefined" }, /* Win32Forth Warning Messages */
			{  31, "is a system word in an application word" },
			{  32, "is an application word set to a system word" },
			{  33, "stack depth increased" },
			{  34, "is a deprecated word" },
			{  35, "has a hash value that is already recognised by this class." },
			{  36, "is an application word whose runtime is in a system word." },
			{  37, "reserved!" },
			{  38, "reserved!" },
			{  39, "reserved!" },

			{  40, "Windows exception trapped" }, /* Application and Runtime Error Messages */
			{  41, "reserved!" },
			{  42, "reserved!" },
			{  43, "reserved!" },
			{  44, "reserved!" },
			{  45, "reserved!" },
			{  46, "reserved!" },
			{  47, "reserved!" },
			{  48, "reserved!" },
			{  49, "reserved!" },
#else /* MSGSTD_SYSTEM */
static const PROGMEM typedef_forthMessage forthErrors[] = {
			{   0, "(reserved)" },
			{   1, "(reserved)" },
			{   2, "(reserved)" },
			{   3, "(reserved)" },
			{   4, "(reserved)" },
			{   5, "(reserved)" },
			{   6, "(reserved)" },
			{   7, "(reserved)" },
			{   8, "(reserved)" },
			{   9, "(reserved)" },
			{  10, "(reserved)" },
			{  11, "(reserved)" },
			{  12, "(reserved)" },
			{  13, "(reserved)" },
			{  14, "(reserved)" },
			{  15, "(reserved)" },
			{  16, "(reserved)" },
			{  17, "(reserved)" },
			{  18, "(reserved)" },
			{  19, "(reserved)" },
			{  20, "(reserved)" },
			{  21, "(reserved)" },
			{  22, "(reserved)" },
			{  23, "(reserved)" },
			{  24, "(reserved)" },
			{  25, "(reserved)" },
			{  26, "(reserved)" },
			{  27, "(reserved)" },
			{  28, "(reserved)" },
			{  29, "(reserved)" },
			{  30, "(reserved)" },
			{  31, "(reserved)" },
			{  32, "(reserved)" },
			{  33, "(reserved)" },
			{  34, "(reserved)" },
			{  35, "(reserved)" },
			{  36, "(reserved)" },
			{  37, "(reserved)" },
			{  38, "(reserved)" },
			{  39, "(reserved)" },
			{  40, "(reserved)" },
			{  41, "(reserved)" },
			{  42, "(reserved)" },
			{  43, "(reserved)" },
			{  44, "(reserved)" },
			{  45, "(reserved)" },
			{  46, "(reserved)" },
			{  47, "(reserved)" },
			{  48, "(reserved)" },
			{  49, "(reserved)" },
#endif

			{  50, "No Message" },
			{  51, "Data Stack Empty" },
			{  52, "Data Stack Full" },
			{  53, "ReturnStack empty" },
			{  54, "ReturnStack full" },
			{  55, "Can 't Divide by Zero" },
			{  56, "Not in CURRENT Vocabulary" },
			{  57, "Parameter Outside Valid Range" },
			{  58, "Dictionary Full" },
			{  59, "(reserved)" },

			{  60, "SP Integer Underflow!" }, /* h2oforth */
			{  61, "SP Integer Overflow!" },
			{  62, "DP Integer Underflow!" },
			{  63, "DP Integer Overflow!" },
			{  64, "H2oForth - Unable to open a file\n" }, 	/* arg */		
			{  65, "H2oForth - Unable to create a blocks file\n" },
			{  66, "H2oForth - Unable to open a blocks file" }, 
			{  67, "H2oForth - Unknown parameter:" }, 
			{  68, "Warning: %s is a system word in an application word" }, /* Warning */
			{  69, "\n" }, 

			{  70, "" }, 
			{  71, "" }, 
			{  72, "" }, 
			{  73, "" }, 
			{  74, "" }, 
			{  75, "" }, 
			{  76, "" }, 
			{  77, "" }, 
			{  78, "" },
			{  79, "" },

			{  80, "word = [%s], isSPInteger = [%d]" }, /* __DEBUG__ */
			{  81, ", isDPInteger = [%d]" }, 
			{  82, ", isDPFloat = [%d]" },
			{  83, ", isWordFound = [%d]" }, 
			{  84, "" }, 
			{  85, "" }, 
			{  86, "" }, 
			{  87, "" }, 
			{  88, "" }, 
			{  89, "" }
};

/* Messages, which are not errors */
static const PROGMEM typedef_forthMessage forthMessages[] = {
			{   0, "No message" }, /* not for display */
			{   1, "Stack Empty" }, /* Original message, but no original error code */
			{   2, "" }, 
			{   3, "" }, 
			{   4, "" }, 
			{   5, "" }, 
			{   6, "" }, 
			{   7, "" }, 
			{   8, "" }, 
			{   9, "" }, 

			{  10, "\nH2OForth - Wait for keyboard input(2)" }, /* int */
			{  11, "H2OForth - Wait for terminal input" }, 
			{  12, "H2OForth - Wait for keyboard input(1)" }, 
			{  13, "H2OForth - Terminating" }, 
			{  14, "H2OForth - Saving compiled code. TBD" }, 
			{  15, "" }, 
			{  16, "" },
			{  17, "" }, 
			{  18, "" }, 
			{  19, "" }, 

			{  20, "%s, Version %d - Built %d\n( Int=%d, INTEGER_CELL=%d, *Int=%d, Long Long=%d" }, /* h2oforth + arg2 */
			{  21, ", FLOAT_CELL=%d" }, 
			{  22, ", FLOAT_CELL/INTEGER_CELL=%d" }, 
			{  23, " )" }, 
			{  24, "%s, Version %d - Built %d\n( Int=%zd, INTEGER_CELL=%zd, *Int=%zd, Long Long=%zd" }, 
			{  25, ", FLOAT_CELL=%zd" }, 
			{  26, ", FLOAT_CELL/INTEGER_CELL=%zd" }, 
			{  27, " )" }, 
			{  28, "" }, 
			{  29, "" }, 

			{  30, "H2oForth - Reads a database. TBD" }, /* arg2 */
			{  31, "H2oForth - Reads a code file. TBD" },
			{  32, "H2oForth - Done Writing the default blocks file %s" },
			{  33, "H2oForth - Writes a code file. TBD" }, 
			{  34, "\nH2oForth [%c%s][%c%s][%c%s]" }, 
			{  35, "H2oForth [%c%s][%c%s]" }, 
			{  36, "H2oForth [%c%s][%c%s] %s" }, 
			{  37, "H2oForth [%c%s][%c%s] %s" }, 
			{  38, "H2oForth [%c%s][%c%s] code.fc code*.fc" }, 
			{  39, "H2oForth [%c%s][%c%s] blocks.fb blocks*.fb" }, 
			{  40, "H2oForth [%c%s][%c%s] file.f file*.f" }, 
			{  41, "H2oForth [%c%s][%c%s]" }, 
			{  42, "H2oForth [%c%s][%c%s] < file.f" }, 
			{  43, "H2oForth [%c%s][%c%s]" },
			{  44, "H2oForth [%c%s][%c%s] code.fc\n" }, 
			{  45, "Without parameters: Display this help screen" }, 
			{  46, "Without parameters: Wait for first for terminal input, then for keyboard input" }, 
			{  47, "%c%s, %c%s, %c%s       Display this help screen" }, 
			{  48, "%c%s, %c%s        Verbose output off" }, 
			{  49, "%c%s, %c%s       Read words from a database or some databases. TBD" }, 
			{  50, "%c%s, %c%s           Load a single code file or some code files. TBD" }, 
			{  51, "%c%s, %c%s         Read a single blocks file or some blocks files" }, 
			{  52, "%c%s, %c%s           Read a single file or some files" }, 
			{  53, "%c%s, %c%s       Wait for terminal input" },
			{  54, "%c%s, %c%s       Wait for keyboard input" }, 
			{  55, "%c%s, %c%s           Save a code file. TBD" }, 
			{  56, "H2OForth - Saving compiled code. TBD" }, 
			{  57, "" }, 
			{  58, "" }, 
			{  59, "" }, 

			{  60, "\n%s" }, /* common words */
			{  61, "? %s %s # %d" }, 
			{  62, "%s" },
			{  63, "%llx " }, 
			{  64, "%x " }, 
			{  65, "%llo " }, 
			{  66, "%o " }, 
			{  67, "[%d] " }, 
			{  68, "%f" }, 
			{  69, "" },

			{  70, "%lld " }, /* words */ 
			{  71, "%d " }, 
			{  72, "ERROR  ? %s" },
			{  73, "" }, 
			{  74, "" }, 
			{  75, "" }, 
			{  76, "" }, 
			{  77, "" }, 
			{  78, "" }, 
			{  79, "" }
};

/* Error messages of the operating system, e.g with file I/O */
static const PROGMEM typedef_forthMessage forthOsErrors[] = {
			{   0, "No message" }, /* not for display */
			{   1, "File Open" } /* No original error code */
};

#endif
