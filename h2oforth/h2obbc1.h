#ifndef H2OBBC1
#define H2OBBC1

/* The official "Arconsoft BBC Micro" ( FORTH79 ) FORTH */

/* Definitions */

void bbc79DollarMSG(void);
void bbc79Plot(void);
void bbc79MoveBuffers(void);
void bbc79FromCMove(void);
void bbc79Where(void);
void bbc79Line(void);
void bbc79Text(void);
void bbc79More(void);
void bbc79Another(void);
void bbc79Program(void);
void bbc79ClrScr(void);
void bbc79Save(void);
void bbc79Locate(void);
void bbc79Editor(void);
void bbc79Code(void);
void bbc79QCurrent(void);
void bbc79Assembler(void);
void bbc79Triad(void);
void bbc79Index(void);
void bbc79SnineStandard(void);
void bbc79List(void);
void bbc79CreateScreens(void);
void bbc79Tape(void);
void bbc79QRSlashW(void);
void bbc79TRSlashW(void);
void bbc79TW(void);
void bbc79TR(void);
void bbc79FourHEX(void);
void bbc79SSTo(void);
void bbc79Flush(void);
void bbc79SaveBuffers(void);
void bbc79Disk(void);
void bbc79ZDisk(void);
void bbc79Load(void);
void bbc79Block(void);
void bbc79Buffer(void);
void bbc79Update(void);
void bbc79ZUpdate(void);
void bbc79PlusBuf(void);
void bbc79InitBuf(void);
void bbc79SetBuf(void);
void bbc79EmptyBuffers(void);
void bbc79NumBuf(void);
void bbc79Prev(void);
void bbc79Use(void);
void bbc79BufSZ(void);
void bbc79MinBUF(void);
void bbc79RSlashW(void);
void bbc79DRSlashW(void);
void bbc79Open(void);
void bbc79FName(void);
void bbc79Channel(void);
void bbc79MaxFiles(void);
void bbc79SSlashFile(void);
void bbc79ZRSlashW(void);
void bbc79Close(void);
void bbc79ZOpen(void);
void bbc79KeyTick(void);
void bbc79OSTick(void);
void bbc79ToCLI(void);
void bbc79ZCLI(void);
void bbc79ZDollarPlus(void);
void bbc79String(void);
void bbc79OSCLI(void);
void bbc79Roll(void);
void bbc79Pick(void);
void bbc79DotS(void);
void bbc79Depth(void);
void bbc79Forget(void);
void bbc79Prune(void);
void bbc79InitVecs(void);
void bbc79ToDo(void);
void bbc79DoVec(void);
void bbc79Assign(void);
void bbc79ExVec(void);
void bbc79Novec(void);
void bbc79Vlist(void);
void bbc79Tick(void);
void bbc79Repeat(void);
void bbc79While(void);
void bbc79Again(void);
void bbc79Until(void);
void bbc79Begin(void);
void bbc79Else(void);
void bbc79Then(void);
void bbc79If(void);
void bbc79PlusLoop(void);
void bbc79Loop(void);
void bbc79Do(void);
void bbc79Back(void);
void bbc79J(void);
void bbc79TwoSlash(void);
void bbc79TwoStar(void);
void bbc79Message(void);
void bbc79MSGNum(void);
void bbc79HDot(void);
void bbc79DecDot(void);
void bbc79Q(void);
void bbc79UDot(void);
void bbc79Dot(void);
void bbc79DotR(void);
void bbc79DDot(void);
void bbc79DDotRDot(void);
void bbc79NumS(void);
void bbc79Num(void);
void bbc79Sign(void);
void bbc79NumGreater(void);
void bbc79LessNum(void);
void bbc79Spaces(void);
void bbc79MSlashMod(void);
void bbc79StarSlash(void);
void bbc79StarSlashMod(void);
void bbc79Mod(void);
void bbc79Slash(void);
void bbc79SlashMod(void);
void bbc79Star(void);
void bbc79MSlash(void);
void bbc79MAbs(void);
void bbc79DPlusMinus(void);
void bbc79PlusMinus(void);
void bbc79SToD(void);
void bbc79Warm(void);
void bbc79Cold(void);
void bbc79Start(void);
void bbc79Mode(void);
void bbc79OSError(void);
void bbc79Escape(void);
void bbc79Abort(void);
void bbc79ZAbort(void);
void bbc79ZWarm(void);
void bbc79Definitions(void);
void bbc79Quit(void);
void bbc79Forth(void);
void bbc79Vocabulary(void);
void bbc79Interpret(void);
void bbc79NumericInterpret(void);
void bbc79ZNumericInterpret(void);
void bbc79Paren(void);
void bbc79Number(void);
void bbc79Semicolon(void);
void bbc79Colon(void);
void bbc79QStack(void);
void bbc79Dliteral(void);
void bbc79Literal(void);
void bbc79ZCompile(void);
void bbc79Create(void);
void bbc79ZCreate(void);
void bbc79IDDot(void);
void bbc79Error(void);
void bbc79Find(void);
void bbc79MinusFind(void);
void bbc79Convert(void);
void bbc79Word(void);
void bbc79OneWord(void);
void bbc79WBFR(void);
void bbc79WDSZ(void);
void bbc79ZWord(void);
void bbc79Hold(void);
void bbc79Blanks(void);
void bbc79Erase(void);
void bbc79Fill(void);
void bbc79Move(void);
void bbc79Query(void);
void bbc79Expect(void);
void bbc79ZExpect(void);
void bbc79DotQuote(void);
void bbc79ZDotQuote(void);
void bbc79TextComma(void);
void bbc79MinusTrailing(void);
void bbc79Type(void);
void bbc79Count(void);
void bbc79ZeroGreater(void);
void bbc79Does(void);
void bbc79SemicolonCode(void);
void bbc79ZSemicolonCode(void);
void bbc79Decimal(void);
void bbc79CR(void);
void bbc79Hex(void);
void bbc79QTab(void);
void bbc79NoOp(void);
void bbc79RightBracket(void);
void bbc79LeftBracket(void);
void bbc79Compile(void);
void bbc79Immediate(void);
void bbc79QLoading(void);
void bbc79QCSP(void);
void bbc79QPairs(void);
void bbc79QExec(void);
void bbc79QComp(void);
void bbc79QError(void);
void bbc79StoreCSP(void);
void bbc79Not(void);
void bbc79PFA(void);
void bbc79CFA(void);
void bbc79NFA(void);
void bbc79LFA(void);
void bbc79ULess(void);
void bbc79Greater(void);
void bbc79Equal(void);
void bbc79Minus(void);
void bbc79Smudge(void);
void bbc79Last(void);
void bbc79CComma(void);
void bbc79Comma(void);
void bbc79Space(void);
void bbc79Allot(void);
void bbc79Here(void);
void bbc79TwoMinus(void);
void bbc79OneMinus(void);
void bbc79TwoPlus(void);
void bbc79OnePlus(void);
void bbc79HLD(void);
void bbc79RNum(void);
void bbc79CSP(void);
void bbc79DPL(void);
void bbc79Base(void);
void bbc79State(void);
void bbc79Current(void);
void bbc79Context(void);
void bbc79Offset(void);
void bbc79SCR(void);
void bbc79Out(void);
void bbc79ToIn(void);
void bbc79BLK(void);
void bbc79VocLink(void);
void bbc79DP(void);
void bbc79Fence(void);
void bbc79Warnung(void);
void bbc79Width(void);
void bbc79TIB(void);
void bbc79R0(void);
void bbc79S0(void);
void bbc79PlusOrigin(void);
void bbc79BSlashSCR(void);
void bbc79BSlashBUF(void);
void bbc79Limit(void);
void bbc79First(void);
void bbc79PAD(void);
void CSlashL(void);
void bbc79BL(void);
void bbc79Two(void);
void bbc79One(void);
void bbc79Null(void);
void bbc79MinusOne(void);
void bbc79MinusTwo(void);
void bbc79User(void);
void bbc79Variable(void);
void bbc79Constant(void);
void bbc79RSemicolon(void);
void bbc79RColon(void);
void bbc79Toggle(void);
void bbc79PlusStore(void);
void bbc79Store(void);
void bbc79CStore(void);
void bbc79Fetch(void);
void bbc79CFetch(void);
void bbc79QFile(void);
void bbc79Himem(void);
void bbc79Page(void);
void bbc79Traverse(void);
void bbc79Rot(void);
void bbc79TwentyVer(void);
void bbc79Over(void);
void bbc79TwoSwap(void);
void bbc79Swap(void);
void bbc79TwoDup(void);
void bbc79QDup(void);
void bbc79Dup(void);
void bbc79TwoDrop(void);
void bbc79Drop(void);
void bbc79DNegate(void);
void bbc79Negate(void);
void bbc79DPlus(void);
void bbc79Plus(void);
void bbc79DLess(void);
void bbc79Less(void);
void bbc79ZeroLess(void);
void bbc79ZeroEqual(void);
void bbc79Leave(void);
void bbc79SwapBytes(void);
void bbc79RFrom(void);
void bbc79ToR(void);
void bbc79RFetch(void);
void bbc79Exit(void);
void bbc79Key(void);
void bbc79ZKey(void);
void bbc79QKey(void);
void bbc79Xor(void);
void bbc79Or(void);
void bbc79And(void);
void bbc79USlash(void);
void bbc79UStar(void);
void bbc79CMove(void);
void bbc79ToVDU(void);
void bbc79Emit(void);
void bbc79ZEmit(void);
void bbc79RPStore(void);
void bbc79SPStore(void);
void bbc79RPFetch(void);
void bbc79SPFetch(void);
void bbc79Enclose(void);
void bbc79ZFind(void);
void bbc79Digit(void);
void bbc79ModeAddr(void);
void bbc79HIAddr(void);
void bbc79ZDO(void);
void bbc79I(void);
void bbc79ZULoop(void);
void bbc79ZPlusLoop(void);
void bbc79ZLoop(void);
void bbc79ZeroBranch(void);
void bbc79Branch(void);
void bbc79FetchExecute(void);
void bbc79Execute(void);
void bbc79Lit(void);

typedef void (*forthOperation)(void);

typedef  struct _forthWord {
	const char* forthWordName;
	const char* forthAlternativeName;
	short int interpreted;
	short int immediate;
	short int implemented;
	unsigned long forthWordNumber;
	forthOperation  forthOpt; // function pointer 
} typedef_forthWord;

/* Variables */

static const PROGMEM typedef_forthWord forthWords[] = {
			{ "$MSG", "$MSG", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79DollarMSG },
			{ "PLOT", "PLOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Plot },
			{ "MOVE-BUFFERS", "MOVE-BUFFERS", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79MoveBuffers },
			{ "<CMODE", "<CMODE", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79FromCMove },
			{ "WHERE", "WHERE", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Where },
			{ "LINE", "LINE", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Line },
			{ "TEXT", "TEXT", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Text },
			{ "MORE", "MORE", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79More },
			{ "ANOTHER", "ANOTHER", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Another },
			{ "PROGRAM", "PROGRAM", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Program },
			{ "CLRSCR", "CLRSCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79ClrScr },
			{ "SAVE", "SAVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Save },
			{ "LOCATE", "LOCATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Locate },
			{ "EDITOR", "EDITOR", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Editor },
			{ "CODE", "CODE", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Code },
			{ "?CURRENT", "?CURRENT", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79QCurrent },
			{ "ASSEMBLER", "ASSEMBLER", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Assembler },
			{ "TRIAD", "TRIAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Triad },
			{ "INDEX", "INDEX", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Index },
			{ "79-STANDARD", "79-STANDARD", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79SnineStandard },
			{ "LIST", "LIST", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79List },
			{ "CREATE-SCREENS", "CREATE-SCREENS", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79CreateScreens },
			{ "TAPE", "TAPE", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Tape },
			{ "?R/W", "?R/W", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79QRSlashW },
			{ "TR/W", "TR/W", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79TRSlashW },
			{ "TW", "TW", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79TW },
			{ "TR", "TR", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79TR },
			{ "4HEX", "4HEX", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79FourHEX },
			{ "SS-->", "SS-->", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79SSTo },
			{ "FLUSH", "FLUSH", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Flush },
			{ "SAVE-BUFFERS", "SAVE-BUFFERS", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79SaveBuffers },
			{ "DISK", "DISK", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Disk },
			{ "(DISK)", "(DISK)", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79ZDisk },
			{ "LOAD", "LOAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Load },
			{ "BLOCK", "BLOCK", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Block },
			{ "BUFFER", "BUFFER", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Buffer },
			{ "UPDATE", "UPDATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Update },
			{ "(UPDATE)", "(UPDATE)", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79ZUpdate },
			{ "+BUF", "+BUF", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79PlusBuf },
			{ "INITBUF", "INITBUF", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79InitBuf },
			{ "SETBUF", "SETBUF", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79SetBuf },
			{ "EMPTY-BUFFERS", "EMPTY-BUFFERS", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79EmptyBuffers },
			{ "#BUF", "#BUF", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79NumBuf },
			{ "PREV", "PREV", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Prev },
			{ "USE", "USE", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Use },
			{ "BUFSZ", "BUFSZ", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79BufSZ },
			{ "MINBUF", "MINBUF", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79MinBUF },
			{ "R/W", "R/W", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79RSlashW },
			{ "DR/W", "DR/W", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79DRSlashW },
			{ "OPEN", "OPEN", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Open },
			{ "FNAME", "FNAME", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79FName },
			{ "CHANNEL", "CHANNEL", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Channel },
			{ "MAXFILES", "MAXFILES", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79MaxFiles },
			{ "S/FILE", "S/FILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79SSlashFile },
			{ "(R/W)", "(R/W)", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79ZRSlashW },
			{ "CLOSE", "CLOSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Close },
			{ "(OPEN)", "(OPEN)", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79ZOpen },
			{ "KEY'", "KEY'", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79KeyTick },
			{ "OS'", "OS'", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79OSTick },
			{ ">CLI", ">CLI", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79ToCLI },
			{ "(CLI)", "(CLI)", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79ZCLI },
			{ "($+)", "($+)", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79ZDollarPlus },
			{ "STRING", "STRING", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79String },
			{ "OSCLI", "OSCLI", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79OSCLI },
			{ "ROLL", "ROLL", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Roll },
			{ "PICK", "PICK", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Pick },
			{ ".S", ".S", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79DotS },
			{ "DEPTH", "DEPTH", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Depth },
			{ "FORGET", "FORGET", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Forget },
			{ "PRUNE", "PRUNE", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Prune },
			{ "INITVECS", "INITVECS", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79InitVecs },
			{ "TO-DO", "TO-DO", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79ToDo },
			{ "DOVEC", "DOVEC", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79DoVec },
			{ "ASSIGN", "ASSIGN", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Assign },
			{ "EXVEC:", "EXVEC:", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79ExVec },
			{ "NOVEC", "NOVEC", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Novec },
			{ "VLIST", "VLIST", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Vlist },
			{ "'", "'", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Tick },
			{ "REPEAT", "REPEAT", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Repeat },
			{ "WHILE", "WHILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79While },
			{ "AGAIN", "AGAIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Again },
			{ "UNTIL", "UNTIL", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Until },
			{ "BEGIN", "BEGIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Begin },
			{ "ELSE", "ELSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Else },
			{ "THEN", "THEN", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Then },
			{ "IF", "IF", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79If },
			{ "+LOOP", "+LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79PlusLoop },
			{ "LOOP", "LOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Loop },
			{ "DO", "DO", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Do },
			{ "BACK", "BACK", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Back },
			{ "J", "J", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79J },
			{ "2/", "2/", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79TwoSlash },
			{ "2*", "2*", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79TwoStar },
			{ "MESSAGE", "MESSAGE", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Message },
			{ "MSG#", "MSG#", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79MSGNum },
			{ "H.", "H.", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79HDot },
			{ "DEC.", "DEC.", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79DecDot },
			{ "?", "?", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Q },
			{ "U.", "U.", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79UDot },
			{ ".", ".", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Dot },
			{ ".R", ".R", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79DotR },
#ifdef DPINTEGER_SUPPORT
			{ "D.", "D.", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79DDot },
			{ "D.R.", "D.R.", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79DDotRDot },
#endif
			{ "#S", "#S", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79NumS },
			{ "#", "#", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Num },
			{ "SIGN", "SIGN", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Sign },
			{ "#>", "#>", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79NumGreater },
			{ "<#", "<#", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79LessNum },
			{ "SPACES", "SPACES", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Spaces },
			{ "M/MOD", "M/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79MSlashMod },
			{ "*/", "*/", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79StarSlash },
			{ "*/MOD", "*/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79StarSlashMod },
			{ "MOD", "MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Mod},
			{ "/", "/", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Slash },
			{ "/MOD", "/MOD", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79SlashMod },
			{ "*", "*", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Star },
			{ "M/", "M/", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79MSlash },
			{ "MABS", "MABS", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79MAbs },
#ifdef DPINTEGER_SUPPORT
			{ "D+-", "D+-", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79DPlusMinus },
#endif
			{ "+-", "+-", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79PlusMinus },
#ifdef DPINTEGER_SUPPORT
			{ "S->D", "S->D", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79SToD },
#endif
			{ "WARM", "WARM", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Warm },
			{ "COLD", "COLD", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Cold },
			{ "START", "START", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Start },
			{ "MODE", "MODE", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Mode },
			{ "OSERROR", "OSERROR", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79OSError },
			{ "ESCAPE", "ESCAPE", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Escape },
			{ "ABORT", "ABORT", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Abort },
			{ "(ABORT)", "(ABORT)", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79ZAbort },
			{ "(WARM)", "(WARM)", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79ZWarm },
			{ "DEFINITIONS", "DEFINITIONS", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Definitions },
			{ "QUIT", "QUIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Quit },
			{ "FORTH", "FORTH", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Forth },
			{ "VOCABULARY", "VOCABULARY", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Vocabulary },
			{ "INTERPRET", "INTERPRET", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Interpret },
			{ "NUM", "NUM", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79NumericInterpret },
			{ "(NUM)", "", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79ZNumericInterpret },
			{ "(", "(", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Paren },
			{ "NUMBER", "NUMBER", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Number },
			{ ";", ";", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Semicolon },
			{ ":", ":", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Colon },
			{ "?STACK", "?STACK", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79QStack },
			{ "DLITERAL", "DLITERAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Dliteral },
			{ "LITERAL", "LITERAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Literal },
			{ "<COMPILE>", "<COMPILE>", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79ZCompile },
			{ "CREATE", "CREATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Create },
			{ "(CREATE)", "(CREATE)", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79ZCreate },
			{ "ID.", "ID.", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79IDDot },
			{ "ERROR", "ERROR", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Error },
			{ "FIND", "FIND", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Find },
			{ "-FIND", "-FIND", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79MinusFind },
			{ "CONVERT", "CONVERT", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Convert },
			{ "WORD", "WORD", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Word },
			{ "1WORD", "1WORD", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79OneWord },
			{ "WBFR", "WBFR", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79WBFR },
			{ "WDSZ", "WDSZ", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79WDSZ },
			{ "(WORD)", "(WORD)", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79ZWord },
			{ "HOLD", "HOLD", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Hold },
			{ "BLANKS", "BLANKS", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Blanks },
			{ "ERASE", "ERASE", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Erase },
			{ "FILL", "FILL", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Fill },
			{ "MOVE", "MOVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Move },
			{ "QUERY", "QUERY", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Query },
			{ "EXPECT", "EXPECT", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Expect },
			{ "(EXPECT)", "(EXPECT)", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79ZExpect },
			{ ".\"", ".\"", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79DotQuote },
			{ "(.\")", "(.\")", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79ZDotQuote },
			{ "TEXT,", "TEXT,", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79TextComma },
			{ "-TRAILING", "-TRAILING", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79MinusTrailing },
			{ "TYPE", "TYPE", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Type },
			{ "COUNT", "COUNT", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Count },
			{ "0>", "0>", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79ZeroGreater },
			{ "DOES>", "DOES>", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Does },
			{ ";CODE", ";CODE", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79SemicolonCode },
			{ "(;CODE)", "(;CODE)", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79ZSemicolonCode },
			{ "CR", "CR", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79CR },
			{ "DECIMAL", "DECIMAL", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Decimal },
			{ "HEX", "HEX", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Hex },
			{ "?TAB", "?TAB", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79QTab },
			{ "NOOP", "NOOP", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79NoOp },
			{ "]", "]", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79RightBracket }, /* Display: -> */
			{ "[", "[", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79LeftBracket }, /* Display: <- */
			{ "COMPILE", "COMPILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Compile },
			{ "IMMEDIATE", "IMMEDIATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Immediate },
			{ "?LOADING", "?LOADING", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79QLoading },
			{ "?CSP", "?CSP", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79QCSP },
			{ "?PAIRS", "?PAIRS", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79QPairs },
			{ "?EXEC", "?EXEC", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79QExec },
			{ "?COMP", "?COMP", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79QComp },
			{ "?ERROR", "?ERROR", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79QError },
			{ "!CSP", "!CSP", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79StoreCSP },
			{ "NOT", "NOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Not },
			{ "PFA", "PFA", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79PFA },
			{ "CFA", "CFA", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79CFA },
			{ "NFA", "NFA", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79NFA },
			{ "LFA", "LFA", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79LFA },
			{ "U<", "U<", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79ULess },
			{ ">", ">", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Greater },
			{ "=", "=", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Equal },
			{ "-", "-", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Minus },
			{ "SMUDGE", "SMUDGE", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Smudge },
			{ "LAST", "LAST", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Last },
			{ "C,", "C,", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79CComma },
			{ ",", ",", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Comma },
			{ "SPACE", "SPACE", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Space },
			{ "ALLOT", "ALLOT", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Allot },
			{ "HERE", "HERE", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Here },
			{ "2-", "2-", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79TwoMinus },
			{ "1-", "1-", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79OneMinus },
			{ "2+", "2+", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79TwoPlus },
			{ "1+", "1+", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79OnePlus },
			{ "HLD", "HLD", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79HLD },
			{ "R#", "R#", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79RNum },
			{ "CSP", "CSP", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79CSP },
			{ "DPL", "DPL", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79DPL },
			{ "BASE", "BASE", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Base },
			{ "STATE", "STATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79State },
			{ "CURRENT", "CURRENT", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Current },
			{ "CONTEXT", "CONTEXT", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Context },
			{ "OFFSET", "OFFSET", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Offset },
			{ "SCR", "SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79SCR },
			{ "OUT", "OUT", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Out },
			{ ">IN", ">IN", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79ToIn },
			{ "BLK", "BLK", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79BLK },
			{ "VOC-LINK", "VOC-LINK", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79VocLink },
			{ "DP", "DP", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79DP },
			{ "FENCE", "FENCE", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Fence },
			{ "WARNING", "WARNING", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Warnung },
			{ "WIDTH", "WIDTH", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Width },
			{ "TIB", "TIB", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79TIB },
			{ "R0", "R0", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79R0 },
			{ "S0", "S0", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79S0 },
			{ "+ORIGIN", "+ORIGIN", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79PlusOrigin },
			{ "B/SCR", "B/SCR", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79BSlashSCR },
			{ "B/BUF", "B/BUF", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79BSlashBUF },
			{ "LIMIT", "LIMIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Limit },
			{ "FIRST", "FIRST", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79First },
			{ "PAD", "PAD", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79PAD },
			{ "C/L", "C/L", TRUE, FALSE, FALSE, 0UL, (forthOperation)CSlashL },
			{ "BL", "BL", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79BL },
			/*
						{ "2", "2", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Two },
						{ "1", "1", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79One },
						{ "0", "0", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Null },
						{ "-1", "-1", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79MinusOne },
						{ "-2", "-2", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79MinusTwo },
			 */
						{ "USER", "USER", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79User },
						{ "VARIABLE", "VARIABLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Variable },
						{ "CONSTANT", "CONSTANT", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Constant },
						{ "R;", "R;", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79RSemicolon },
						{ "R:", "R:", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79RColon },
						{ "TOGGLE", "TOGGLE", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Toggle },
						{ "+!", "+!", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79PlusStore },
						{ "!", "!", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Store },
						{ "C!", "C!", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79CStore },
						{ "@", "@", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Fetch },
						{ "C@", "C@", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79CFetch },
						{ "?FILE", "?FILE", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79QFile },
						{ "HIMEM", "HIMEM", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Himem },
						{ "PAGE", "PAGE", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Page },
						{ "TRAVERSE", "TRAVERSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Traverse },
						{ "ROT", "ROT", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Rot },
						{ "20VER", "20VER", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79TwentyVer },
						{ "OVER", "OVER", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Over },
						{ "2SWAP", "2SWAP", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79TwoSwap },
						{ "SWAP", "SWAP", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Swap },
						{ "2DUP", "2DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79TwoDup },
						{ "?DUP", "?DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79QDup },
						{ "DUP", "DUP", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Dup },
						{ "2DROP", "2DROP", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79TwoDrop },
						{ "DROP", "DROP", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Drop },
						{ "DNEGATE", "DNEGATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79DNegate },
						{ "NEGATE", "NEGATE", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Negate },
			#ifdef DPINTEGER_SUPPORT
						{ "D+", "D+", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79DPlus },
			#endif
						{ "+", "+", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Plus },
			#ifdef DPINTEGER_SUPPORT
						{ "D<", "D<", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79DLess },
			#endif
						{ "<", "<", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Less },
						{ "0<", "0<", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79ZeroLess },
						{ "0=", "0=", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79ZeroEqual },
						{ "LEAVE", "LEAVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Leave },
						{ "><", "><", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79SwapBytes },
						{ "R>", "R>", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79RFrom },
						{ ">R", ">R", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79ToR },
						{ "R@", "R@", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79RFetch },
						{ "EXIT", "EXIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Exit },
						{ "KEY", "KEY", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Key },
						{ "(KEY)", "(KEY)", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79ZKey },
						{ "?KEY", "?KEY", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79QKey },
						{ "XOR", "XOR", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Xor },
						{ "OR", "OR", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Or },
						{ "AND", "AND", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79And },
						{ "U/", "U/", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79USlash },
						{ "U*", "U*", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79UStar },
						{ "CMOVE", "CMOVE", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79CMove },
						{ ">VDU", ">VDU", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79ToVDU },
						{ "EMIT", "EMIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Emit },
						{ "(EMIT)", "(EMIT)", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79ZEmit },
						{ "RP!", "RP!", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79RPStore },
						{ "SP!", "SP!", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79SPStore },
						{ "RP@", "RP@", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79RPFetch },
						{ "SP@", "SP@", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79SPFetch },
						{ "ENCLOSE", "ENCLOSE", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Enclose },
						{ "(FIND)", "(FIND)", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79ZFind },
						{ "DIGIT", "DIGIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Digit },
						{ "MODEADDR", "MODEADDR", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79ModeAddr },
						{ "HIADDR", "HIADDR", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79HIAddr },
						{ "(DO)", "(DO)", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79ZDO },
						{ "I", "I", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79I },
						{ "(ULOOP)", "(ULOOP)", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79ZULoop },
						{ "(+LOOP)", "(+LOOP)", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79ZPlusLoop },
						{ "(LOOP)", "(LOOP)", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79ZLoop },
						{ "0BRANCH", "0BRANCH", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79ZeroBranch },
						{ "BRANCH", "BRANCH", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Branch },
						{ "@EXECUTE", "@EXECUTE", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79FetchExecute },
						{ "EXECUTE", "EXECUTE", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Execute },
						{ "LIT", "LIT", TRUE, FALSE, FALSE, 0UL, (forthOperation)bbc79Lit },
						{ "H2OFORTH", "H2OFORTH", TRUE, FALSE, FALSE, MAX_FORTHWORD_ID, (forthOperation)NULL }
};
#endif
