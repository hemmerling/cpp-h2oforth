#ifndef H2OCOMM1
#define H2OCOMM1

/* Definitions of FORTH words common to one or more FORTH standards & FORTH implementations */
void fpointDotF(void);

typedef void (*forthOperation)(void);

typedef  struct _fpointWord {
	const char* forthWordName;
	const char* forthAlternativeName;
	const short int interpreted;
	const short int immediate;
	const short int implemented;
	const unsigned long forthWordNumber;
	const forthOperation  forthOpt; // function pointer 
} typedef_fpointWord;

static const typedef_fpointWord fpointWords[] = {
			{ ".F", ".F", TRUE, FALSE, FALSE, MAX_FORTHWORD_ID, (forthOperation)fpointDotF }
};
#endif
