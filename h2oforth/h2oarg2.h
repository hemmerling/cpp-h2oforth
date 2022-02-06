#ifndef H2OARG2
#define H2OARG2

/* Support for command line arguments / command line parameters */

void readDatabase(char* databaseString) {
	printf("H2oForth - Reads a database. TBD\n");
}

void readCode(char* filename) {
	FILE* fp = fopen(filename, "r");
	if (fp == NULL) {
		fputs("H2oForth - Unable to open a file\n", stderr);
		perror(filename);
		fputs("\n", stderr);
		exit(EXIT_CODE_NOTFOUND);
	};
    if (forthIsVerbose){
		printf("H2oForth - Reads a code file. TBD\n");
	};
	fclose(fp);
}

/* create a default block file */
void createDefaultBlock(void) {
	int ii, jj;
	int kk = 0;
	char* filename = DEFAULT_BLOCKSNAME;
	int fd = _open(filename, O_CREAT | O_WRONLY | O_TRUNC);
	if (fd == FILEIO_ERROR) {
		fputs("H2oForth - Unable to create a blocks file\n", stderr);
		perror(filename);
		fputs("\n", stderr);
	}
	else {
		int result;
		for (ii = 0; ii < BLOCK_LINES; ++ii) {
			for (jj = 0; jj < BLOCK_COLUMNS; ++jj) {
				ioBlockBuffer[kk++] = SPACE;
			};
			/*
			   ioBlockBuffer[kk++] = CR;
			   ioBlockBuffer[kk++] = LF;
			   ioBlockBuffer[kk++] = CHAR_NULL;
			 */ 
		};
		ioBlockBuffer[0] = '1';
		ioBlockBuffer[0 + BLOCK_COLUMNS] = '2';
		ioBlockBuffer[0 + BLOCK_COLUMNS * 2] = '+';
		_write(fd, ioBlockBuffer, sizeof(ioBlockBuffer));
		ioBlockBuffer[0] = '3';
		ioBlockBuffer[0 + BLOCK_COLUMNS] = '4';
		ioBlockBuffer[0 + BLOCK_COLUMNS * 2] = '+';
		result = _write(fd, ioBlockBuffer, sizeof(ioBlockBuffer)); // result is not checked
		_close(fd);
	};
}

void readBlocks(char* filename) {
	int fd = _open(filename, O_RDONLY);
	if (fd == FILEIO_ERROR) {
		fputs("H2oForth - Unable to open a blocks file\n", stderr);
		perror(filename);
		fputs("\n", stderr);
		createDefaultBlock();
    if (forthIsVerbose){
		printf("H2oForth - Done Writing the default blocks file %s\n", filename);
	};
		exit(EXIT_BLOCKS_NOTFOUND);
	};

	while (_read(fd, ioBlockBuffer, sizeof(ioBlockBuffer))) {
		int ii;
		char lineBuffer[67];
		for (ii = 0; ii < BLOCK_LINES; ii++) {
			memset(lineBuffer, '\0', sizeof(lineBuffer));
			strncpy(lineBuffer, ioBlockBuffer + ii * BLOCK_COLUMNS, BLOCK_COLUMNS);
			strncpy(ioTib, lineBuffer, BLOCK_COLUMNS);
			lineBuffer[BLOCK_COLUMNS] = 0;
			processTib();
		};
	};
	_close(fd);
}

void readFile(char* filename) {
	FILE* fp = fopen(filename, "r");
	if (fp == NULL) {
		fputs("H2oForth - Unable to open a file\n", stderr);
		perror(filename);
		fputs("\n", stderr);
		exit(EXIT_FILE_NOTFOUND);
	};

	while (fgets(ioTib, sizeof(ioTib), fp) != NULL) {
		processTib();
	};
	fclose(fp);
}

void writeCode(char* filename) {
    if (forthIsVerbose){
		printf("H2oForth - Writes a code file. TBD\n");
	};
}

/* Parameter help screen */
int parameterHelp(void) {
#if defined(__BORLANDC__) || defined(__TURBOC__)
	printf("%s, Built %d ( Int=%d, CELL=%d, Ptr=%d, LongLong=%d )\n", COPYRIGHT_MESSAGE, BUILT, \
			sizeof(int), sizeof(CELL), sizeof(void*), sizeof(LONG_LONG));
#else
	printf("%s, Built %d ( Int=%zd, CELL=%zd, Ptr=%zd, LongLong=%zd )\n", COPYRIGHT_MESSAGE, BUILT, \
			sizeof(int), sizeof(CELL), sizeof(void*), sizeof(LONG_LONG));
#endif
	printf("\n");
	printf("H2oForth [%c%s][%c%s][%c%s]\n", PARAMETER_IDENTIFIER, (parameters[PARAMETER_HELP]).shortName,
		PARAMETER_IDENTIFIER, (parameters[PARAMETER_HELP]).shortName2,
		PARAMETER_IDENTIFIER, (parameters[PARAMETER_HELP]).name);
	printf("H2oForth [%c%s][%c%s]\n", PARAMETER_IDENTIFIER, (parameters[PARAMETER_VERBOSE]).shortName,
		PARAMETER_IDENTIFIER, (parameters[PARAMETER_VERBOSE]).name);
	printf("H2oForth [%c%s][%c%s] %s\n", PARAMETER_IDENTIFIER, (parameters[PARAMETER_DATABASE]).shortName,
		PARAMETER_IDENTIFIER, (parameters[PARAMETER_DATABASE]).name, DEFAULT_DATABASE);
	printf("H2oForth [%c%s][%c%s] code.fc code*.fc\n", PARAMETER_IDENTIFIER, (parameters[PARAMETER_LOAD]).shortName,
		PARAMETER_IDENTIFIER, (parameters[PARAMETER_LOAD]).name);
	printf("H2oForth [%c%s][%c%s] blocks.fb blocks*.fb\n", PARAMETER_IDENTIFIER, (parameters[PARAMETER_BLOCKS]).shortName,
		PARAMETER_IDENTIFIER, (parameters[PARAMETER_BLOCKS]).name);
	printf("H2oForth [%c%s][%c%s] file.f file*.f\n", PARAMETER_IDENTIFIER, (parameters[PARAMETER_FILE]).shortName,
		PARAMETER_IDENTIFIER, (parameters[PARAMETER_FILE]).name);
	printf("H2oForth [%c%s][%c%s]\n", PARAMETER_IDENTIFIER, (parameters[PARAMETER_TERMINAL]).shortName,
		PARAMETER_IDENTIFIER, (parameters[PARAMETER_TERMINAL]).name);
	printf("H2oForth [%c%s][%c%s] < file.f\n", PARAMETER_IDENTIFIER, (parameters[PARAMETER_TERMINAL]).shortName,
		PARAMETER_IDENTIFIER, (parameters[PARAMETER_TERMINAL]).name);
	printf("H2oForth [%c%s][%c%s]\n", PARAMETER_IDENTIFIER, (parameters[PARAMETER_KEYBOARD]).shortName,
		PARAMETER_IDENTIFIER, (parameters[PARAMETER_KEYBOARD]).name);
	printf("H2oForth [%c%s][%c%s] code.fc\n\n", PARAMETER_IDENTIFIER, (parameters[7]).shortName, PARAMETER_IDENTIFIER, (parameters[PARAMETER_SAVE]).name);
#if defined(H2O_DISPLAY_HELP_WITH_NO_PARAMETERS)
	printf("Without parameters: Display this help screen\n");
#else
	printf("Without parameters: Wait for first for terminal input, then for keyboard input\n");
#endif
	printf("%c%s, %c%s, %c%s       Display this help screen\n", PARAMETER_IDENTIFIER, (parameters[PARAMETER_HELP]).shortName,
		PARAMETER_IDENTIFIER, (parameters[PARAMETER_HELP]).shortName2,
		PARAMETER_IDENTIFIER, (parameters[PARAMETER_HELP]).name);
	printf("%c%s, %c%s        Verbose output off\n", PARAMETER_IDENTIFIER, (parameters[PARAMETER_VERBOSE]).shortName,
		PARAMETER_IDENTIFIER, (parameters[PARAMETER_VERBOSE]).name);
	printf("%c%s, %c%s       Read words from a database or some databases. TBD\n", PARAMETER_IDENTIFIER, (parameters[PARAMETER_DATABASE]).shortName,
		PARAMETER_IDENTIFIER, (parameters[PARAMETER_DATABASE]).name);
	printf("%c%s, %c%s           Load a single code file or some code files. TBD\n", PARAMETER_IDENTIFIER, (parameters[PARAMETER_LOAD]).shortName,
		PARAMETER_IDENTIFIER, (parameters[PARAMETER_LOAD]).name);
	printf("%c%s, %c%s         Read a single blocks file or some blocks files\n", PARAMETER_IDENTIFIER, (parameters[PARAMETER_BLOCKS]).shortName,
		PARAMETER_IDENTIFIER, (parameters[PARAMETER_BLOCKS]).name);
	printf("%c%s, %c%s           Read a single file or some files\n", PARAMETER_IDENTIFIER, (parameters[PARAMETER_FILE]).shortName,
		PARAMETER_IDENTIFIER, (parameters[PARAMETER_FILE]).name);
	printf("%c%s, %c%s       Wait for terminal input\n", PARAMETER_IDENTIFIER, (parameters[PARAMETER_TERMINAL]).shortName,
		PARAMETER_IDENTIFIER, (parameters[PARAMETER_TERMINAL]).name);
	printf("%c%s, %c%s       Wait for keyboard input\n", PARAMETER_IDENTIFIER, (parameters[PARAMETER_KEYBOARD]).shortName,
		PARAMETER_IDENTIFIER, (parameters[PARAMETER_KEYBOARD]).name);
	printf("%c%s, %c%s           Save a code file. TBD\n", PARAMETER_IDENTIFIER, (parameters[PARAMETER_SAVE]).shortName,
		PARAMETER_IDENTIFIER, (parameters[PARAMETER_SAVE]).name);
	forthIsExit = TRUE;
	exitCode = EXIT_HELP;
	return(TRUE);
}

int parameterVerbose(void) {
	forthIsWaitingForParameter = FALSE;
	forthIsVerbose = !forthIsVerbose;
 	return(FALSE);
}

int parameterTerminal(void) {
	(parameters[PARAMETER_TERMINAL]).isWaitingFor = TRUE;
	forthIsWaitingForParameter = FALSE;
	//printf("Waits for terminal input\n");
	return(FALSE);
}

int parameterKeyboard(void) {
	(parameters[PARAMETER_KEYBOARD]).isWaitingFor = TRUE;
	forthIsWaitingForKeyboard = TRUE;
	forthIsWaitingForParameter = FALSE;
	//printf("Waits for keyboard input\n");
	return(FALSE);
}

int parameterSave(void) {
	(parameters[PARAMETER_SAVE]).isWaitingFor = TRUE;
	forthIsWaitingForParameter = FALSE;
	return(FALSE);
}

int parameterDatabase(void) {
	forthIsWaitingForParameter = FALSE;
 	return(FALSE);
}

int parameterLoad(void) {
	forthIsWaitingForParameter = FALSE;
	return(FALSE);
}

int parameterBlocks(void) {
	forthIsWaitingForParameter = FALSE;
	return(FALSE);
}

int parameterFile(void) {
	forthIsWaitingForParameter = FALSE;
	return(FALSE);
}

int parameterUnknown(char* parParameter) {
	fputs("H2oForth - Unknown parameter: ", stderr);
	//perror(parParameter);
	fputs(parParameter, stderr);
	fputs("\n", stderr);
	forthIsExit = TRUE;
	exitCode = EXIT_UNKNOWN_PARAMETER;
	return(FALSE);
}

/* get data by name given as parameter */
void getData(int argc, char* argv[], int ii, int kk) {
	char* filename = NULL;
	int jj = ii + 1; /* increase argument counter */
	if (jj < argc) {
		if (argv[jj][0] == PARAMETER_IDENTIFIER) {
			filename = (char *)parameters[kk].defaultName;
		}
		else
			filename = argv[jj];
		parameters[kk].isWaitingFor = TRUE;
	}
	else {
		filename = (char *)parameters[kk].defaultName;
	};
	parameters[kk].function2(filename);
}

/* Process the commands passed by the command line interface */
void parameterPreProcessing(int argc, char* argv[]) {

	if (argc > 1) {

		/* first check if help is wanted, exit after help screen */
		int parameterIsUnknown = FALSE;
		int ii;
		for (ii = 1; ii < argc; ii++)
		{

			int jj;
			forthIsWaitingForParameter = TRUE;
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

			if  ( (argv[ii][0] == PARAMETER_IDENTIFIER) && ( (strlen(argv[ii]) == 1) || 
				  forthIsWaitingForParameter ) ) {
				parameterUnknown(argv[ii]);
				parameterIsUnknown = TRUE;
			};
		};

		if (parameterIsUnknown){
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
   		forthIsWaitingForKeyboard = (parameters[PARAMETER_KEYBOARD]).isWaitingFor;
#endif
	};

#if H2O_NOEXIT 
	(parameters[PARAMETER_TERMINAL]).isWaitingFor = TRUE;
	(parameters[PARAMETER_KEYBOARD]).isWaitingFor = FALSE;
	forthIsWaitingForKeyboard = (parameters[PARAMETER_KEYBOARD]).isWaitingFor;
	forthReadsTerminal = TRUE;
	forthReadsKeyboard = FALSE;
#else
	if ((parameters[PARAMETER_TERMINAL]).isWaitingFor) {
		forthReadsTerminal = TRUE;
        if (forthIsVerbose){
			printf("H2OForth - Wait for terminal input\n");
		};
	};

	if ((parameters[PARAMETER_KEYBOARD]).isWaitingFor && (!(parameters[PARAMETER_TERMINAL]).isWaitingFor)) {
		forthReadsKeyboard = TRUE;
        if (forthIsVerbose){
			printf("H2OForth - Wait for keyboard input(1)\n");
		};
	};

	if ((!(parameters[PARAMETER_KEYBOARD]).isWaitingFor) && (!(parameters[PARAMETER_TERMINAL]).isWaitingFor)) {
		forthIsExit = TRUE;
        if (forthIsVerbose){
			printf("H2OForth - Terminating\n");
		};
	};
#endif

}

/* Process the commands passed by the command line interface */
void parameterPostProcessing(void) {
	if ((parameters[PARAMETER_SAVE]).isWaitingFor) {
    	if (forthIsVerbose){
			printf("H2OForth - Saving compiled code. TBD\n");
		};
	}
}

#endif 
