#ifndef H2OKNBE1
#define H2OKNBE1

/* The minimal FORTH System Proposal by Peter Knaggs and Paul E. Bennet, 2015 */

/* Definitions */

void knaggsbennetStore(void);
void knaggsbennetComma(void);
void knaggsbennetFetch(void);
void knaggsbennetAlign(void);
void knaggsbennetAligned(void);
void knaggsbennetCellPlus(void);
void knaggsbennetCells(void);
void knaggsbennetCStore(void);
void knaggsbennetC(void);
void knaggsbennetCCommaCFetch(void);
void knaggsbennetCAlign(void);
void knaggsbennetCAligned(void);
void knaggsbennetCharPlus(void);
void knaggsbennetChars(void);
void knaggsbennetPlus(void);
void knaggsbennetStar(void);
void knaggsbennetTwoStar(void);
void knaggsbennetStarSlashMod(void);
void knaggsbennetMinus(void);
void knaggsbennetSlash(void);
void knaggsbennetTwoSlash(void);
void knaggsbennetMod(void);
void knaggsbennetZeroEquals(void);
void knaggsbennetLessThen(void);
void knaggsbennetAnd(void);
void knaggsbennetInvert(void);
void knaggsbennetTrue(void);
void knaggsbennetLShift(void);
void knaggsbennetEquals(void);
void knaggsbennetGreaterThan(void);
void knaggsbennetOr(void);
void knaggsbennetXor(void);
void knaggsbennetFalse(void);
void knaggsbennetRShift(void);
void knaggsbennetDupe(void);
void knaggsbennetSwap(void); 
void knaggsbennetToR(void); 
void knaggsbennetRFetch(void); 
void knaggsbennetDrop(void); 
void knaggsbennetOver(void); 
void knaggsbennetRFrom(void); 
void knaggsbennetRote(void); 
void knaggsbennetIf(void); 
void knaggsbennetThen(void); 
void knaggsbennetWhile(void); 
void knaggsbennetRepeat(void); 
void knaggsbennetDo(void); 
void knaggsbennetI(void); 
void knaggsbennetTick(void); 
void knaggsbennetElse(void); 
void knaggsbennetBegin(void); 
void knaggsbennetAgain(void); 
void knaggsbennetUntil(void); 
void knaggsbennetLoop(void); 
void knaggsbennetJ(void); 
void knaggsbennetExecute(void); 
void knaggsbennetColon(void); 
void knaggsbennetConstant(void); 
void knaggsbennetCreate(void); 
void knaggsbennetSemicolon(void); 
void knaggsbennetVariable(void); 
void knaggsbennetDoes(void); 
void knaggsbennetKey(void); 
void knaggsbennetEmit(void); 
void knaggsbennetKeyQuestion(void); 
void knaggsbennetCr(void); 
void knaggsbennetParen(void); 
void knaggsbennetDotS(void); 
void knaggsbennetBackslash(void); 

typedef void (*forthOperation)(void);

typedef  struct _forthWord {
	const char* forthWordName;
	const char* forthAlternativeName;
	const short int interpreted;
	const short int immediate;
	const short int implemented;
	const unsigned long forthWordNumber;
	const forthOperation  forthOpt; // function pointer 
} typedef_forthWord;


static const typedef_forthWord forthWords[] = {
			{ "!", "!", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetStore }, /* 1 Memory Access */
			{ ",", ",", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetComma }, 
			{ "@", "@", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetFetch }, 
			{ "ALIGN", "ALIGN", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetAlign }, 
			{ "ALIGNED", "ALIGNED", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetAligned }, 
			{ "CELL+", "CELL+", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetCellPlus }, 
			{ "CELLS", "CELLS", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetCells }, 
			{ "C!", "C!", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetCStore }, 
			{ "C,", "C,", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetC }, 
			{ "C@", "C@", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetCCommaCFetch }, 
			{ "CALIGN", "CALIGN", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetCAlign }, 
			{ "CALIGNED", "CALIGNED", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetCAligned }, 
			{ "CHAR+", "CHAR+", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetCharPlus }, 
			{ "CHARS", "CHARS", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetChars }, 
			{ "+", "+", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetPlus }, /* 2 Arithmetic */
			{ "*", "*", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetStar }, 
			{ "2*", "2*", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetTwoStar }, 
			{ "*/MOD", "*/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetStarSlashMod }, 
			{ "-", "-", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetMinus }, 
			{ "/", "/", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetSlash }, 
			{ "2/", "2/", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetTwoSlash }, 
			{ "MOD", "MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetMod }, 
			{ "0=", "0=", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetZeroEquals }, /* 3 Logic */
			{ "<", "<", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetLessThen  }, 
			{ "AND", "AND", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetAnd }, 
			{ "INVERT", "INVERT", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetInvert }, 
			{ "TRUE", "TRUE", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetTrue }, 
			{ "LSHIFT", "LSHIFT", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetLShift }, 
			{ "=", "=", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetEquals }, 
			{ ">", ">", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetGreaterThan }, 
			{ "OR", "OR", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetOr }, 
			{ "XOR", "XOR", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetXor }, 
			{ "FALSE", "FALSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetFalse }, 
			{ "RSHIFT", "RSHIFT", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetRShift }, 
			{ "DUP", "DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetDupe }, /* 4 Stack */
			{ "SWAP", "SWAP", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetSwap }, 
			{ ">R", ">R", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetToR }, 
			{ "R@", "R@", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetRFetch }, 
			{ "DROP", "DROP", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetDrop }, 
			{ "OVER", "OVER", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetOver }, 
			{ "R>", "R>", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetRFrom }, 
			{ "ROT", "ROT", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetRote }, 
			{ "IF", "IF", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetIf }, /* 5 Flow Control */
			{ "THEN", "THEN", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetThen }, 
			{ "WHILE", "WHILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetWhile }, 
			{ "REPEAT", "REPEAT", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetRepeat }, 
			{ "DO", "DO", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetDo }, 
			{ "I", "I", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetI }, 
			{ "’", "’", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetTick }, 
			{ "ELSE", "ELSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetElse }, 
			{ "BEGIN", "BEGIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetBegin }, 
			{ "AGAIN", "AGAIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetAgain }, 
			{ "UNTIL", "UNTIL", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetUntil }, 
			{ "LOOP", "LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetLoop }, 
			{ "J", "J", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetJ }, 
			{ "EXECUTE", "EXECUTE", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetExecute }, 
			{ ":", ":", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetColon }, /* 6 Definitions */
			{ "CONSTANT", "CONSTANT", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetConstant }, 
			{ "CREATE", "CREATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetCreate }, 
			{ ";", ";", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetSemicolon }, 
			{ "VARIABLE", "VARIABLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetVariable }, 
			{ "DOES>", "DOES>", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetDoes }, 
			{ "KEY", "KEY", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetKey }, /* 7 Device */
			{ "EMIT", "EMIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetEmit }, 
			{ "KEY?", "KEY?", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetKeyQuestion }, 
			{ "CR", "CR", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetCr }, 
			{ "(", "(", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetParen }, /* 8 Tools */
			{ ".S", ".S", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetDotS }, 
			{ "\\", "\\", TRUE, FALSE, FALSE, 0UL, (forthOperation)knaggsbennetBackslash },
			{ "H2OFORTH", "H2OFORTH", TRUE, FALSE, FALSE, MAX_FORTHWORD_ID, (forthOperation)NULL }
};

/*	 		 
A number of proposed supplements include, but are by no means limited to, the following:
9 IEEE Floating Point
10 String
11 Double numbers
12 Local variables
13 Heap / User memory
14 File access
15 Networking / Sockets
16 Internationalisation
17 Multitasking (cooperate)
18 Multitasking (pre-emptive)
19 Security (cryptography)
20 Exceptions
*/

#endif
