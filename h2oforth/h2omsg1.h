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

#define ERROR_NOERROR 0
#define ERROR_DATASTACK_EMPTY 1
#define ERROR_DATASTACK_FULL 7
#define ERROR_DIVISION_BY_ZERO 11
#define ERROR_NOT_IN_CURRENT_DIRECTORY 24
#define ERROR_RETURNSTACK_EMPTY 26
#define ERROR_RETURNSTACK_FULL 27
#define ERROR_SPINTEGER_UNDERFLOW 30
#define ERROR_SPINTEGER_OVERFLOW 31
#define ERROR_DPINTEGER_UNDERFLOW 32
#define ERROR_DPINTEGER_OVERFLOW 33

#define ERROR_OPEN_FILE 34
#define ERROR_NEWLINE 35
#define ERROR_CREATE_BLOCKS 36
#define ERROR_OPEN_BLOCKS 37
#define ERROR_UNKNOWN_PARAMETER 38

#define DEBUGMSG_WORD_IS_INTEGER 39
#define DEBUGMSG_IS_DPINTEGER 40
#define DEBUGMSG_IS_FLOAT 41
#define DEBUGMSG_IS_WORD 42

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

#if (H2O_FORTH_PRIMITIVES == AIM65_FORTH) || \
	(H2O_FORTH_PRIMITIVES == ATARICOINUP_FORTH) || \
	(H2O_FORTH_PRIMITIVES == FIG_FORTH) || \
	(H2O_FORTH_PRIMITIVES == HECTOR_FORTH) || \
	(H2O_FORTH_PRIMITIVES == JUPITER_FORTH) || \
	(H2O_FORTH_PRIMITIVES == Q_FORTH) || \
	(H2O_FORTH_PRIMITIVES == RSC_FORTH) || \
	(H2O_FORTH_PRIMITIVES == TERSE_FORTH)

/* figFORTH */
static const PROGMEM typedef_forthMessage forthErrors[] = {
			{   0, "No Error" }, /* not for display, was: "( Error Messages )" */
			{   1, "Empty Stack" },
			{   2, "Dictionary Full" },
			{   3, "Has Incorrect Address Mode" },
			{   4, "Isn't unique" },
			{   5, "reserved!" },
			{   6, "Disk range ?" },
			{   7, "Full Stack" },
			{   8, "Disk Error !" },
			{   9, "reserved!" },
			{  10, "reserved!" },
			{  11, "reserved!" },
			{  12, "reserved!" },
			{  13, "reserved!" },
			{  14, "reserved!" },
			{  15, "reserved!" },
			{  16, "reserved!" },
			{  17, "Compilation Only, Use in Definition" },
			{  18, "Execution Only" },
			{  19, "Conditionals not Paired" },
			{  20, "Definition not Finished" },
			{  21, "In Protected Dictionary" },
			{  22, "Use Only When LOADing" },
			{  23, "Off Current Editing Screen" },
			{  24, "Declare Vocabulary" },
			{  25, "reserved!" },

#else

/* Richard De Grandis-Harrison: FORTH on the BBC Microcomputer", page 159ff */
static const PROGMEM typedef_forthMessage forthErrors[] = {
			{   0, "No error" }, /* not for display, was: "reserved!" */
			{   1, "Stack Empty" },
			{   2, "Dictionary Full" },
			{   3, "Has Incorrect Address Mode Assembler!" },
			{   4, "Isn't unique" },
			{   5, "Parameter Outside Valid Range" },
			{   6, "Screen Number Out of Range" },
			{   7, "Stack Full" },
			{   8, "Can't Open or Extend File" },
			{   9, "Read/Write not Completed" },
			{  10, "Can't Redefine End-of-Line" },
			{  11, "Can 't Divide by Zero" },
			{  12, "Undefined Execution Vector" },
			{  13, "Branch Too Long" },
			{  14, "Incorrect CURRENT Vocabulary" },
			{  15, "reserved!" },
			{  16, "reserved!" },
			{  17, "Compilation Only" },
			{  18, "Execution Only" },
			{  19, "Conditionals not Paired" },
			{  20, "Definition not Finished" },
			{  21, "In Protected Dictionary" },
			{  22, "Use Only When LOADing" },
			{  23, "Off Current Editing Screen" },
			{  24, "Not in CURRENT Vocabulary" },
			{  25, "System Memory Clash" },
#endif
			{  26, "ReturnStack empty" }, /* No original error code, words */
			{  27, "ReturnStack full" },  /* No original error code, words */
			{  28, "" }, 
			{  29, "" },

			{  30, "SP Integer Underflow!" }, /* h2oforth */
			{  31, "SP Integer Overflow!" },
			{  32, "DP Integer Underflow!" },
			{  33, "DP Integer Overflow!" },
			{  34, "H2oForth - Unable to open a file\n" }, 	/* arg */		
			{  35, "\n" }, 
			{  36, "H2oForth - Unable to create a blocks file\n" },
			{  37, "H2oForth - Unable to open a blocks file" }, 
			{  38, "H2oForth - Unknown parameter:" }, 
			{  39, "" }, 

			{  40, "word = [%s], isSPInteger = [%d]" }, /* __DEBUG__ */
			{  41, ", isDPInteger = [%d]" }, 
			{  42, ", isDPFloat = [%d]" },
			{  43, ", isWordFound = [%d]" }, 
			{  44, "" }, 
			{  45, "" }, 
			{  46, "" }, 
			{  47, "" }, 
			{  48, "" }, 
			{  49, "" },

			{  50, "" }, 
			{  51, "" },
			{  52, "" }, 
			{  53, "" }, 
			{  54, "" }, 
			{  55, "" }, 
			{  56, "" }, 
			{  57, "" }, 
			{  58, "" },
			{  59, "" }
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
