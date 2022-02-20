#ifndef H2OARG1
#define H2OARG1 

/* Support for command line arguments / command line parameters */

/* Start of configuration switches */
#define H2O_DISPLAY_HELP_WITH_NO_PARAMETERS
/* End of configuration switches */

/* Parameter identifier */
#define PARAMETER_IDENTIFIER1 '-'
#define PARAMETER_IDENTIFIER2 '/'
#define PARAMETER_IDENTIFIER PARAMETER_IDENTIFIER1

#define PARAMETER_HELP 0
#define PARAMETER_VERBOSE 1
#define PARAMETER_TERMINAL 2
#define PARAMETER_KEYBOARD 3
#define PARAMETER_SAVE 4
#define PARAMETER_DATABASE 5
#define PARAMETER_LOAD 6
#define PARAMETER_BLOCKS 7
#define PARAMETER_FILE 8

/* Default filenames */
#define DEFAULT_DATABASE "jdbc:sqlserver://host:port/database"
#define DEFAULT_CODENAME "code.fc"
#define DEFAULT_BLOCKSNAME "blocks.fb"
#define DEFAULT_FILENAME "file.f"

#define FILEIO_ERROR -1

typedef int (*commandLineParameter)(void);
typedef void (*getData2)(char*);

typedef  struct _parameterSet {
	const char* shortName;
	const char* shortName2;
	const char* name;
	const char* defaultName;
	commandLineParameter function; /* function pointer */
	int isWaitingFor;
	getData2 function2; /* function pointer */
} typedef_parameterSet;

void readDatabase(char*);
void readCode(char*);
void createDefaultBlock(void);
void readBlocks(char*);
void readFile(char*);
void writeCode(char*);
void processTib(void);
int parameterHelp(void);
int parameterVerbose(void);
int parameterDatabase(void);
int parameterTerminal(void);
int parameterKeyboard(void);
int parameterSave(void);
int parameterLoad(void);
int parameterBlocks(void);
int parameterFile(void);
int parameterUnknown(char*);
void getData(int argc, char* argv[], int, int);
void parameterPreProcessing(int, char**);
void parameterPostProcessing(void);

int exitCode = EXIT_OK;
static typedef_parameterSet parameters[] = {
			{ "h", "?", "help", "", (commandLineParameter)parameterHelp, FALSE },
			{ "v", "V", "verbose", "", (commandLineParameter)parameterVerbose, FALSE },
			{ "t", "T", "terminal", "", (commandLineParameter)parameterTerminal, FALSE },
			{ "k", "K", "keyboard", "", (commandLineParameter)parameterKeyboard, FALSE },
			{ "s", "S", "save", DEFAULT_CODENAME, (commandLineParameter)parameterSave, FALSE, (getData2)writeCode },
			{ "d", "D", "database", DEFAULT_DATABASE, (commandLineParameter)parameterDatabase, FALSE, (getData2)readDatabase },
			{ "l", "L", "load", DEFAULT_CODENAME, (commandLineParameter)parameterLoad, FALSE, (getData2)readCode },
			{ "b", "B", "blocks", DEFAULT_BLOCKSNAME, (commandLineParameter)parameterBlocks, FALSE, (getData2)readBlocks },
			{ "f", "F", "file", DEFAULT_FILENAME, (commandLineParameter)parameterFile, FALSE, (getData2)readFile }
};
#endif
