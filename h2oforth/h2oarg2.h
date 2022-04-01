#ifndef H2OARG2
#define H2OARG2

/* Support for command line arguments / command line parameters */

void readDatabase(char* databaseString) {
	PSMSG_VERBOSE("H2oForth - Reads a database. TBD");
}

void readCode(char* filename) {
	FILE* fp = fopen(filename, "r");
	int nn; /* < 32 */
	if (fp == NULL) {
		PSMSG_ERROR_CRCR("H2oForth - Unable to open a file\n");
		PERROR(filename);
		PSMSG_ERROR_CRCR("\n");
		exit(EXIT_CODE_NOTFOUND);
	};
	if (forthState.forthIsVerbose) {
		PSMSG_VERBOSE("H2oForth - Reads a code file. TBD");
	};
	fclose(fp);
}

/* create a default block file */
void createDefaultBlock(void) {
	int ii, jj;
	int kk = 0;
	int nn; /* < 32 */
	char* filename = (char*)DEFAULT_BLOCKSNAME;
	int fd = _open(filename, O_CREAT | O_WRONLY | O_TRUNC);
	if (fd == FILEIO_ERROR) {
		PSMSG_ERROR_CRCR("H2oForth - Unable to create a blocks file\n");
		PERROR(filename);
		PSMSG_ERROR_CRCR("\n");
	}
	else {
		int result;
		for (ii = 0; ii < BLOCK_LINES; ++ii) {
			for (jj = 0; jj < BLOCK_COLUMNS; ++jj) {
				forthTasks[forthState.forthCurrentTask].ioBlockBuffer[kk++] = SPACE;
			};
			/*
			   forthTasks[forthState.forthCurrentTask].ioBlockBuffer[kk++] = CR;
			   forthTasks[forthState.forthCurrentTask].ioBlockBuffer[kk++] = LF;
			   forthTasks[forthState.forthCurrentTask].ioBlockBuffer[kk++] = CHAR_NULL;
			 */
		};
		forthTasks[forthState.forthCurrentTask].ioBlockBuffer[0] = '1';
		forthTasks[forthState.forthCurrentTask].ioBlockBuffer[0 + BLOCK_COLUMNS] = '2';
		forthTasks[forthState.forthCurrentTask].ioBlockBuffer[0 + BLOCK_COLUMNS * 2] = '+';
		_write(fd, forthTasks[forthState.forthCurrentTask].ioBlockBuffer, sizeof(forthTasks[forthState.forthCurrentTask].ioBlockBuffer));
		forthTasks[forthState.forthCurrentTask].ioBlockBuffer[0] = '3';
		forthTasks[forthState.forthCurrentTask].ioBlockBuffer[0 + BLOCK_COLUMNS] = '4';
		forthTasks[forthState.forthCurrentTask].ioBlockBuffer[0 + BLOCK_COLUMNS * 2] = '+';
		result = _write(fd, forthTasks[forthState.forthCurrentTask].ioBlockBuffer, sizeof(forthTasks[forthState.forthCurrentTask].ioBlockBuffer)); // result is not checked
		_close(fd);
	};
}

void readBlocks(char* filename) {
	int nn; /* < 32 */
	int fd = _open(filename, O_RDONLY);
	if (fd == FILEIO_ERROR) {
		PSMSG_ERROR_CRCR("H2oForth - Unable to open a blocks file\n");
		PERROR(filename);
		PSMSG_ERROR_CRCR("\n");
		createDefaultBlock();
		if (forthState.forthIsVerbose) {
			nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer,
				"H2oForth - Done Writing the default blocks file %s", filename);
			PSMSG_VERBOSE(forthTasks[forthState.forthCurrentTask].printBuffer);
		};
		exit(EXIT_BLOCKS_NOTFOUND);
	};

	while (_read(fd, forthTasks[forthState.forthCurrentTask].ioBlockBuffer,
		sizeof(forthTasks[forthState.forthCurrentTask].ioBlockBuffer))) {
		int ii;
		char lineBuffer[67];
		for (ii = 0; ii < BLOCK_LINES; ii++) {
			memset(lineBuffer, '\0', sizeof(lineBuffer));
			strncpy(lineBuffer, forthTasks[forthState.forthCurrentTask].ioBlockBuffer + ii * BLOCK_COLUMNS, BLOCK_COLUMNS);
			strncpy(ioTib, lineBuffer, BLOCK_COLUMNS);
			lineBuffer[BLOCK_COLUMNS] = 0;
			processTib();
		};
	};
	_close(fd);
}

void readFile(char* filename) {
	int nn; /* < 32 */
	FILE* fp = fopen(filename, "r");
	if (fp == NULL) {
		PSMSG_ERROR_CRCR("H2oForth - Unable to open a file\n");
		PERROR(filename);
		PSMSG_ERROR_CRCR("\n");
		exit(EXIT_FILE_NOTFOUND);
	};

	while (fgets(ioTib, sizeof(ioTib), fp) != NULL) {
		processTib();
	};
	fclose(fp);
}

void writeCode(char* filename) {
	int nn; /* < 32 */
	if (forthState.forthIsVerbose) {
		PSMSG_VERBOSE("H2oForth - Writes a code file. TBD");
	};
}

/* Parameter help screen */
int parameterHelp(void) {
	int nn; /* < 32 */
#if defined(__BORLANDC__) || defined(__TURBOC__) || defined(ARDUINO)
	nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, "%s, Version %d - Built %d\n( Int=%d, INTEGER_CELL=%d, *Int=%d, Long Long=%d", COPYRIGHT_MESSAGE, VERSION, BUILT, \
		sizeof(int), sizeof(CELL_INTEGER), sizeof(void*), sizeof(LONG_LONG));
	SMSG_SUCCESS(forthTasks[forthState.forthCurrentTask].printBuffer);
#ifdef FLOAT_SUPPORT
	nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, ", FLOAT_CELL=%d", sizeof(CELL_FLOAT));
	SMSG_SUCCESS(forthTasks[forthState.forthCurrentTask].printBuffer);
#ifdef FLOAT_ON_DATASTACK
	nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, ", FLOAT_CELL/INTEGER_CELL=%d", sizeof(CELL_FLOAT) / sizeof(CELL_INTEGER));
	SMSG_SUCCESS(forthTasks[forthState.forthCurrentTask].printBuffer);
#endif
#endif
	SMSG_SUCCESS(" )");
#else
	nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer,
		"%s, Version %d - Built %d\n( Int=%zd, INTEGER_CELL=%zd, *Int=%zd, Long Long=%zd",
		COPYRIGHT_MESSAGE, VERSION, BUILT,
		sizeof(int), sizeof(CELL_INTEGER), sizeof(void*), sizeof(LONG_LONG));
	SMSG_SUCCESS(forthTasks[forthState.forthCurrentTask].printBuffer);
#ifdef FLOAT_SUPPORT
	nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, ", FLOAT_CELL=%zd", sizeof(CELL_FLOAT));
	SMSG_SUCCESS(forthTasks[forthState.forthCurrentTask].printBuffer);
#ifdef FLOAT_ON_DATASTACK
	nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, ", FLOAT_CELL/INTEGER_CELL=%zd",
		sizeof(CELL_FLOAT) / sizeof(CELL_INTEGER));
	SMSG_SUCCESS(forthTasks[forthState.forthCurrentTask].printBuffer);
#endif
#endif
	SMSG_SUCCESS(" )");
#endif
	nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer,
		"\nH2oForth [%c%s][%c%s][%c%s]", PARAMETER_IDENTIFIER,
		(parameters[PARAMETER_HELP]).shortName,
		PARAMETER_IDENTIFIER, (parameters[PARAMETER_HELP]).shortName2,
		PARAMETER_IDENTIFIER, (parameters[PARAMETER_HELP]).name);
	SMSG_SUCCESS_CR(forthTasks[forthState.forthCurrentTask].printBuffer);
	nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer,
		"H2oForth [%c%s][%c%s]", PARAMETER_IDENTIFIER,
		(parameters[PARAMETER_VERBOSE]).shortName,
		PARAMETER_IDENTIFIER, (parameters[PARAMETER_VERBOSE]).name);
	SMSG_SUCCESS_CR(forthTasks[forthState.forthCurrentTask].printBuffer);
	nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer,
		"H2oForth [%c%s][%c%s] %s", PARAMETER_IDENTIFIER,
		(parameters[PARAMETER_DATABASE]).shortName,
		PARAMETER_IDENTIFIER, (parameters[PARAMETER_DATABASE]).name,
		DEFAULT_DATABASE);
	SMSG_SUCCESS_CR(forthTasks[forthState.forthCurrentTask].printBuffer);
	nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer,
		"H2oForth [%c%s][%c%s] code.fc code*.fc", PARAMETER_IDENTIFIER,
		(parameters[PARAMETER_LOAD]).shortName,
		PARAMETER_IDENTIFIER, (parameters[PARAMETER_LOAD]).name);
	SMSG_SUCCESS_CR(forthTasks[forthState.forthCurrentTask].printBuffer);
	nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer,
		"H2oForth [%c%s][%c%s] blocks.fb blocks*.fb", PARAMETER_IDENTIFIER,
		(parameters[PARAMETER_BLOCKS]).shortName,
		PARAMETER_IDENTIFIER, (parameters[PARAMETER_BLOCKS]).name);
	SMSG_SUCCESS_CR(forthTasks[forthState.forthCurrentTask].printBuffer);
	nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer,
		"H2oForth [%c%s][%c%s] file.f file*.f", PARAMETER_IDENTIFIER,
		(parameters[PARAMETER_FILE]).shortName,
		PARAMETER_IDENTIFIER, (parameters[PARAMETER_FILE]).name);
	SMSG_SUCCESS_CR(forthTasks[forthState.forthCurrentTask].printBuffer);
	nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer,
		"H2oForth [%c%s][%c%s]", PARAMETER_IDENTIFIER,
		(parameters[PARAMETER_TERMINAL]).shortName,
		PARAMETER_IDENTIFIER, (parameters[PARAMETER_TERMINAL]).name);
	SMSG_SUCCESS_CR(forthTasks[forthState.forthCurrentTask].printBuffer);
	nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer,
		"H2oForth [%c%s][%c%s] < file.f", PARAMETER_IDENTIFIER,
		(parameters[PARAMETER_TERMINAL]).shortName,
		PARAMETER_IDENTIFIER, (parameters[PARAMETER_TERMINAL]).name);
	SMSG_SUCCESS_CR(forthTasks[forthState.forthCurrentTask].printBuffer);
	nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer,
		"H2oForth [%c%s][%c%s]", PARAMETER_IDENTIFIER,
		(parameters[PARAMETER_KEYBOARD]).shortName,
		PARAMETER_IDENTIFIER, (parameters[PARAMETER_KEYBOARD]).name);
	SMSG_SUCCESS_CR(forthTasks[forthState.forthCurrentTask].printBuffer);
	nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer,
		"H2oForth [%c%s][%c%s] code.fc\n", PARAMETER_IDENTIFIER,
		(parameters[PARAMETER_SAVE]).shortName, PARAMETER_IDENTIFIER,
		(parameters[PARAMETER_SAVE]).name);
	SMSG_SUCCESS_CR(forthTasks[forthState.forthCurrentTask].printBuffer);
#if defined(H2O_DISPLAY_HELP_WITH_NO_PARAMETERS)
	PSMSG_SUCCESS_CR("Without parameters: Display this help screen");
#else
	PSMSG_SUCCESS_CR("Without parameters: Wait for first for terminal input, then for keyboard input")
#endif
		nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer,
			"%c%s, %c%s, %c%s       Display this help screen",
			PARAMETER_IDENTIFIER, (parameters[PARAMETER_HELP]).shortName,
			PARAMETER_IDENTIFIER, (parameters[PARAMETER_HELP]).shortName2,
			PARAMETER_IDENTIFIER, (parameters[PARAMETER_HELP]).name);
	SMSG_SUCCESS_CR(forthTasks[forthState.forthCurrentTask].printBuffer);
	nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer,
		"%c%s, %c%s        Verbose output off", PARAMETER_IDENTIFIER,
		(parameters[PARAMETER_VERBOSE]).shortName,
		PARAMETER_IDENTIFIER, (parameters[PARAMETER_VERBOSE]).name);
	SMSG_SUCCESS_CR(forthTasks[forthState.forthCurrentTask].printBuffer);
	nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer,
		"%c%s, %c%s       Read words from a database or some databases. TBD",
		PARAMETER_IDENTIFIER, (parameters[PARAMETER_DATABASE]).shortName,
		PARAMETER_IDENTIFIER, (parameters[PARAMETER_DATABASE]).name);
	SMSG_SUCCESS_CR(forthTasks[forthState.forthCurrentTask].printBuffer);
	nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer,
		"%c%s, %c%s           Load a single code file or some code files. TBD",
		PARAMETER_IDENTIFIER, (parameters[PARAMETER_LOAD]).shortName,
		PARAMETER_IDENTIFIER, (parameters[PARAMETER_LOAD]).name);
	SMSG_SUCCESS_CR(forthTasks[forthState.forthCurrentTask].printBuffer);
	nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer,
		"%c%s, %c%s         Read a single blocks file or some blocks files",
		PARAMETER_IDENTIFIER, (parameters[PARAMETER_BLOCKS]).shortName,
		PARAMETER_IDENTIFIER, (parameters[PARAMETER_BLOCKS]).name);
	SMSG_SUCCESS_CR(forthTasks[forthState.forthCurrentTask].printBuffer);
	nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer,
		"%c%s, %c%s           Read a single file or some files",
		PARAMETER_IDENTIFIER, (parameters[PARAMETER_FILE]).shortName,
		PARAMETER_IDENTIFIER, (parameters[PARAMETER_FILE]).name);
	SMSG_SUCCESS_CR(forthTasks[forthState.forthCurrentTask].printBuffer);
	nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer,
		"%c%s, %c%s       Wait for terminal input", PARAMETER_IDENTIFIER,
		(parameters[PARAMETER_TERMINAL]).shortName,
		PARAMETER_IDENTIFIER, (parameters[PARAMETER_TERMINAL]).name);
	SMSG_SUCCESS_CR(forthTasks[forthState.forthCurrentTask].printBuffer);
	nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer,
		"%c%s, %c%s       Wait for keyboard input", PARAMETER_IDENTIFIER,
		(parameters[PARAMETER_KEYBOARD]).shortName,
		PARAMETER_IDENTIFIER, (parameters[PARAMETER_KEYBOARD]).name);
	SMSG_SUCCESS_CR(forthTasks[forthState.forthCurrentTask].printBuffer);
	nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer,
		"%c%s, %c%s           Save a code file. TBD",
		PARAMETER_IDENTIFIER, (parameters[PARAMETER_SAVE]).shortName,
		PARAMETER_IDENTIFIER, (parameters[PARAMETER_SAVE]).name);
	forthState.forthIsExit = TRUE;
	exitCode = EXIT_HELP;
	return(TRUE);
}

int parameterVerbose(void) {
	forthState.forthIsWaitingForParameter = FALSE;
	forthState.forthIsVerbose = !forthState.forthIsVerbose;
	return(FALSE);
}

int parameterTerminal(void) {
	(parameters[PARAMETER_TERMINAL]).isWaitingFor = TRUE;
	forthState.forthIsWaitingForParameter = FALSE;
	//PSMSG_DEBUG("Waits for terminal input");
	return(FALSE);
}

int parameterKeyboard(void) {
	(parameters[PARAMETER_KEYBOARD]).isWaitingFor = TRUE;
	forthState.forthIsWaitingForKeyboard = TRUE;
	forthState.forthIsWaitingForParameter = FALSE;
	return(FALSE);
}

int parameterSave(void) {
	(parameters[PARAMETER_SAVE]).isWaitingFor = TRUE;
	forthState.forthIsWaitingForParameter = FALSE;
	return(FALSE);
}

int parameterDatabase(void) {
	forthState.forthIsWaitingForParameter = FALSE;
	return(FALSE);
}

int parameterLoad(void) {
	forthState.forthIsWaitingForParameter = FALSE;
	return(FALSE);
}

int parameterBlocks(void) {
	forthState.forthIsWaitingForParameter = FALSE;
	return(FALSE);
}

int parameterFile(void) {
	forthState.forthIsWaitingForParameter = FALSE;
	return(FALSE);
}

int parameterUnknown(char* parParameter) {
	int nn; /* < 32 */
	PSMSG_ERROR_CRCR("H2oForth - Unknown parameter: ");
	//PERROR(parParameter);
	PSMSG_ERROR_CRCR(parParameter);
	PSMSG_ERROR_CRCR("\n");
	forthState.forthIsExit = TRUE;
	exitCode = EXIT_UNKNOWN_PARAMETER;
	return(FALSE);
}

/* get data by name given as parameter */
void getData(int argc, char* argv[], int ii, int kk) {
	int nn; /* < 32 */
	char* filename = NULL;
	int jj = ii + 1; /* increase argument counter */
	if (jj < argc) {
		if (argv[jj][0] == PARAMETER_IDENTIFIER) {
			filename = (char*)parameters[kk].defaultName;
		}
		else
			filename = argv[jj];
		parameters[kk].isWaitingFor = TRUE;
	}
	else {
		filename = (char*)parameters[kk].defaultName;
	};
	parameters[kk].function2(filename);
}

/* Process the commands passed by the command line interface */
void parameterPreProcessing(int argc, char* argv[]) {
	int nn; /* < 32 */
	if (argc > 1) {
		/* first check if help is wanted, exit after help screen */
		int parameterIsUnknown = FALSE;
		int ii;
		for (ii = 1; ii < argc; ii++)
		{
			int jj;
			forthState.forthIsWaitingForParameter = TRUE;
			for (jj = PARAMETER_HELP; jj < PARAMETER_FILE + 1; jj++) {
				if ((argv[ii][0] == PARAMETER_IDENTIFIER) && (strlen(argv[ii]) > 1) && (
					(strcmp(argv[ii] + 1, (parameters[jj]).shortName) == EQUAL) ||
					(strcmp(argv[ii] + 1, (parameters[jj]).shortName2) == EQUAL) ||
					(strcmp(argv[ii] + 1, (parameters[jj]).name) == EQUAL))) {
					if ((parameters[jj]).function()) {
						return; /* leave function, instead of if-clause before the while loop or 2x breaks */
					};
				};
			};

			if ((argv[ii][0] == PARAMETER_IDENTIFIER) && ((strlen(argv[ii]) == 1) ||
				forthState.forthIsWaitingForParameter)) {
				parameterUnknown(argv[ii]);
				parameterIsUnknown = TRUE;
			};
		};

		if (parameterIsUnknown) {
			return; /* leave function, instead of if-clause before the while loop or 2x breaks */
		};

		ii = 1;
		while (ii < argc - 1)
		{
			if ((argv[ii][0] == PARAMETER_IDENTIFIER) && (strlen(argv[ii]) > 1)) {

				int jj;
				for (jj = PARAMETER_DATABASE; jj < PARAMETER_FILE + 1; jj++) {
					parameters[jj].isWaitingFor = FALSE;
					if ((argv[ii][0] == PARAMETER_IDENTIFIER) && (strlen(argv[ii]) > 1) && (
						(strcmp(argv[ii] + 1, (parameters[jj]).shortName) == EQUAL) ||
						(strcmp(argv[ii] + 1, (parameters[jj]).shortName2) == EQUAL) ||
						(strcmp(argv[ii] + 1, (parameters[jj]).name) == EQUAL))) {
						getData(argc, argv, ii, jj);
					};
				};
			}
			else {

				int jj;
				for (jj = PARAMETER_DATABASE; jj < PARAMETER_FILE + 1; jj++) {
					if ((parameters[jj]).isWaitingFor) {
						(parameters[jj]).function2(argv[ii]);
					};
				};
			};

			ii++; /* increase argument counter */

		};

	}
	else {
		/* default, no parameters */
#if defined(H2O_DISPLAY_HELP_WITH_NO_PARAMETERS)
		(parameters[PARAMETER_HELP]).function();
#else
		(parameters[PARAMETER_TERMINAL]).isWaitingFor = TRUE;
		(parameters[PARAMETER_KEYBOARD]).isWaitingFor = TRUE;
		forthState.forthIsWaitingForKeyboard = (parameters[PARAMETER_KEYBOARD]).isWaitingFor;
#endif
	};

#if H2O_NOEXIT 
	(parameters[PARAMETER_TERMINAL]).isWaitingFor = TRUE;
	(parameters[PARAMETER_KEYBOARD]).isWaitingFor = FALSE;
	forthState.forthIsWaitingForKeyboard = (parameters[PARAMETER_KEYBOARD]).isWaitingFor;
	forthState.forthReadsTerminal = TRUE;
	forthState.forthReadsKeyboard = FALSE;
#else
	if ((parameters[PARAMETER_TERMINAL]).isWaitingFor) {
		forthState.forthReadsTerminal = TRUE;
		if (forthState.forthIsVerbose) {
			PSMSG_VERBOSE("H2OForth - Wait for terminal input");
		};
	};

	if ((parameters[PARAMETER_KEYBOARD]).isWaitingFor && (!(parameters[PARAMETER_TERMINAL]).isWaitingFor)) {
		forthState.forthReadsKeyboard = TRUE;
		if (forthState.forthIsVerbose) {
			PSMSG_VERBOSE("H2OForth - Wait for keyboard input(1)");
		};
	};

	if ((!(parameters[PARAMETER_KEYBOARD]).isWaitingFor) && (!(parameters[PARAMETER_TERMINAL]).isWaitingFor)) {
		forthState.forthIsExit = TRUE;
		if (forthState.forthIsVerbose) {
			PSMSG_VERBOSE("H2OForth - Terminating");
		};
	};
#endif

}

/* Process the commands passed by the command line interface */
void parameterPostProcessing(void) {
	int nn; /* < 32 */
	if ((parameters[PARAMETER_SAVE]).isWaitingFor) {
		if (forthState.forthIsVerbose) {
			PSMSG_VERBOSE("H2OForth - Saving compiled code. TBD");
		};
	}
}

#endif 
