#ifndef H2OHEC1
#define H2OHEC1

/* The "Micronique Hector" ( figFORTH ) FORTH, called "Forth Pamuk" */

/* Definitions */
void hectorForth(void);
void hectorEditor(void);
void hectorList(void);
void hectorTape(void);
void hectorName(void);
void hectorFlush(void);
void hectorDotName(void);
void hectorBlock(void);
void hectorZText(void);
void hectorOpen(void);
void hectorBuffer(void);
void hectorNextBlock(void);
void hectorLoad(void);
void hectorUpdate(void);
void hectorPlusBuf(void);
void hectorPass(void);
void hectorVlist(void);
void hectorRND(void);
void hectorRandom(void);
void hectorImage(void);
void hectorMask(void);
void hectorEndcase(void);
void hectorEndof(void);
void hectorOf(void);
void hectorZOf(void);
void hectorCase(void);
void hectorUDot(void);
void hectorQ(void);
void hectorDot(void);
void hectorDDot(void);
void hectorDotR(void);
void hectorDDOtR(void);
void hectorNums(void);
void hectorNum(void);
void hectorSign(void);
void hectorNumFrom(void);
void hectorToNum(void);
void hectorSpaces(void);
void hectorPlusLoop(void);
void hectorLoop(void);
void hectorDo(void);
void hectorForget(void);
void hectorTick(void);
void hectorWhile(void);
void hectorRepeat(void);
void hectorAgain(void);
void hectorEnd(void);
void hectorUntil(void);
void hectorBegin(void);
void hectorElse(void);
void hectorIf(void);
void hectorThen(void);
void hectorEndIf(void);
void hectorBack(void);
void hectorBStack(void);
void hectorDraw(void);
void hectorBInit(void);
void hectorBPush(void);
void hectorBPop(void);
void hectorBDrop(void);
void hectorBClear(void);
void hectorCLS(void);
void hectorPage(void);
void hectorHome(void);
void hectorWindow(void);
void hectorAt(void);
void hectorScale(void);
void hectorPaper(void);
void hectorPen(void);
void hectorStandard(void);
void hectorSpecial(void);
void hectorDelay(void);
void hectorCursor(void);
void hectorLInit(void);
void hectorMode(void);
void hectorLemit(void);
void hectorRectify(void);
void hectorTone(void);
void hectorTo(void);
void hectorSound(void);
void hectorRink(void);
void hectorPot(void);
void hectorPoint(void);
void hectorPlot(void);
void hectorPaint(void);
void hectorLittle(void);
void hectorLine(void);
void hectorJoy(void);
void hectorInk(void);
void hectorHush(void);
void hectorFrom(void);
void hectorFire(void);
void hectorColor(void);
void hectorBright(void);
void hectorBox(void);
void hectorBig(void);
void hectorBar(void);
void hectorRSlashWQ(void);
void hectorRSlashW(void);
void hectorLSlashSCR(void);
void hectorUse(void);
void hectorExpect(void);
void hectorCR(void);
void hectorEmit(void);
void hectorCapital(void);
void hectorRewind(void);
void hectorMotor(void);
void hectorMSGQuote(void);
void hectorZMSG(void);
void hectorMessage(void);
void hectorMSlashMOD(void);
void hectorStarSlash(void);
void hectorStarSlashMOD(void);
void hectorMOD(void);
void hectorSlash(void);
void hectorSlashMOD(void);
void hectorStar(void);
void hectorMSlash(void);
void hectorMStar(void);
void hectorWipe(void);
void hectorMax(void);
void hectorMin(void);
void hectorDAbs(void);
void hectorAbs(void);
void hectorDPlusMinus(void);
void hectorPlusMinus(void);
void hectorSToD(void);
void hectorEmptyBuffers(void);
void hectorCold(void);
void hectorAbort(void);
void hectorQuit(void);
void hectorEmptySpace(void);
void hectorParen(void);
void hectorDefinitions(void);
void hectorVFill(void);
void hectorVFromCMode(void);
void hectorVCMode(void);
void hectorVCStore(void);
void hectorVStore(void);
void hectorVCFetch(void);
void hectorVFetch(void);
void hectorQTerminal(void);
void hectorKey(void);
void hectorGet(void);
void hectorSlow(void);
void hectorFast(void);
void hector256RND(void);
void hectorCStar(void);
void hectorVocabulary(void);
void hectorImmediate(void);
void hectorInterpret(void);
void hectorQStack(void);
void hectorDLiteral(void);
void hectorLiteral(void);
void hectorXCompile(void);
void hectorCreate(void);
void hectorIDDot(void);
void hectorError(void);
void hectorMinusFind(void);
void hectorNumber(void);
void hectorZNumber(void);
void hectorWord(void);
void hectorPad(void);
void hectorHold(void);
void hectorBlanks(void);
void hectorErase(void);
void hectorFill(void);
void hectorQuery(void);
void hectorDotQuote(void);
void hectorZDotQuote(void);
void hectorMinusTrailing(void);
void hectorType(void);
void hectorCount(void);
void hectorDoes(void);
void hectorBuilds(void);
void hectorSemicolonCode(void);
void hectorZSemicolonCode(void);
void hectorDecimal(void);
void hectorHex(void);
void hectorSmudge(void);
void hectorRightBracket(void);
void hectorLeftBracket(void);
void hectorCompile(void);
void hectorQCSP(void);
void hectorQPairs(void);
void hectorQExec(void);
void hectorQComp(void);
void hectorQError(void);
void hectorStoreCSP(void);
void hectorPFA(void);
void hectorNFA(void);
void hectorLFA(void);
void hectorCFA(void);
void hectorLatest(void);
void hectorTraverse(void);
void hectorMinusDUP(void);
void hectorSpace(void);
void hectorUGreater(void);
void hectorCComma(void);
void hectorComma(void);
void hectorAllot(void);
void hectorHere(void);
void hectorPrev(void);
void hectorOffset(void);
void hectorHLD(void);
void hectorRNum(void);
void hectorCSP(void);
void hectorDPL(void);
void hectorBase(void);
void hectorState(void);
void hectorCurrent(void);
void hectorContext(void);
void hectorSCR(void);
void hectorIN(void);
void hectorBLK(void);
void hectorVocMinusLink(void);
void hectorDP(void);
void hectorFence(void);
void hectorWidth(void);
void hectorTIB(void);
void hectorRO(void);
void hectorSO(void);
void hectorCSlashName(void);
void hectorBSlashBuf(void);
void hectorLimit(void);
void hectorFirst(void);
void hectorCSlashL(void);
void hectorBL(void);
void hectorThree(void);
void hectorTwo(void);
void hectorOne(void);
void hectorZero(void);
void hectorVariable(void);
void hectorConstant(void);
void hectorSemicolon(void);
void hectorColon(void);
void hectorFromCMove(void);
void hectorDMinussign(void);
void hectorTwoRot(void);
void hectorTwoDrop(void);
void hectorTwoOver(void);
void hectorTwoSwap(void);
void hectorTwoSlash(void);
void hectorTwoStar(void);
void hectorTwoMinus(void);
void hectorOneMinus(void);
void hectorZeroGreater(void);
void hectorJ(void);
void hectorITick(void);
void hectorSDrop(void);
void hectorNot(void);
void hectorExit(void);
void hectorRoll(void);
void hectorPick(void);
void hectorRot(void);
void hectorGreater(void);
void hectorSmaller(void);
void hectorEqual(void);
void hectorMinussign(void);
void hectorTwoPlus(void);
void hectorOnePlus(void);
void hectorTwoStore(void);
void hectorCStore(void);
void hectorStore(void);
void hectorTwoFetch(void);
void hectorCFetch(void);
void hectorFetch(void);
void hectorToggle(void);
void hectorPlusStore(void);
void hectorTwoDup(void);
void hectorDup(void);
void hectorSwap(void);
void hectorDrop(void);
void hectorOver(void);
void hectorDMinus(void);
void hectorMinus(void);
void hectorDPlus(void);
void hectorPlus(void);
void hectorZeroLess(void);
void hectorZeroEqual(void);
void hectorR(void);
void hectorRFrom(void);
void hectorToR(void);
void hectorLeave(void);
void hectorSemicolonS(void);
void hectorRPStore(void);
void hectorRPFetch(void);
void hectorSPStore(void);
void hectorSPFetch(void);
void hectorXor(void);
void hectorOr(void);
void hectorAnd(void);
void hectorUSlash(void);
void hectorUStar(void);
void hectorCMove(void);
void hectorEnclose(void);
void hectorZFind(void);
void hectorDigit(void);
void hectorI(void);
void hectorZDo(void);
void hectorZPlusLoop(void);
void hectorZLoop(void);
void hectorBranch(void);
void hectorOBranch(void);
void hectorExecute(void);
void hectorLit(void);

typedef void (*forthOperation)(void);

typedef  struct _forthWord {
	const char* forthWordName;
	const char* forthAlternativeName;
	const short int interpreted;
	const short int immediate;
	const short int implemented;
	const unsigned long forthWordNumber;
	const forthOperation forthOpt; // function pointer 
} typedef_forthWord;

/* Variables */

static const PROGMEM typedef_forthWord forthWords[] = {
			{ "FORTH", "FORTH", TRUE, FALSE, FALSE, 0UL, (forthOperation)hectorForth },
			{ "EDITOR", "EDITOR", TRUE, FALSE, FALSE, 1UL, (forthOperation)hectorEditor },
			{ "LIST", "LIST", TRUE, FALSE, FALSE, 2UL, (forthOperation)hectorList },
			{ "TAPE", "TAPE", TRUE, FALSE, FALSE, 3UL, (forthOperation)hectorTape },
			{ "NAME\"", "NAME\"", TRUE, FALSE, FALSE, 4UL, (forthOperation)hectorName },
			{ "FLUSH", "FLUSH", TRUE, FALSE, FALSE, 5UL, (forthOperation)hectorFlush },
			{ ".NAME", ".NAME", TRUE, FALSE, FALSE, 6UL, (forthOperation)hectorDotName },
			{ "BLOCK", "BLOCK", TRUE, FALSE, FALSE, 7UL, (forthOperation)hectorBlock },
			{ "(TEXT)", "(TEXT)", TRUE, FALSE, FALSE, 8UL, (forthOperation)hectorZText },
			{ "OPEN", "OPEN", TRUE, FALSE, FALSE, 9UL, (forthOperation)hectorOpen },
			{ "BUFFER", "BUFFER", TRUE, FALSE, FALSE, 10UL, (forthOperation)hectorBuffer },
			{ "-->", "-->", TRUE, FALSE, FALSE, 11UL, (forthOperation)hectorNextBlock },
			{ "LOAD", "LOAD", TRUE, FALSE, FALSE, 12UL, (forthOperation)hectorLoad },
			{ "UPDATE", "UPDATE", TRUE, FALSE, FALSE, 13UL, (forthOperation)hectorUpdate },
			{ "+BUF", "+BUF", TRUE, FALSE, FALSE, 14UL, (forthOperation)hectorPlusBuf },
			{ "PASS", "PASS", TRUE, FALSE, FALSE, 15UL, (forthOperation)hectorPass },
			{ "VLIST", "VLIST", TRUE, FALSE, FALSE, 16UL, (forthOperation)hectorVlist },
			{ "RND", "RND", TRUE, FALSE, FALSE, 17UL, (forthOperation)hectorRND },
			{ "RANDOM", "RANDOM", TRUE, FALSE, FALSE, 18UL, (forthOperation)hectorRandom },
			{ "IMAGE", "IMAGE", TRUE, FALSE, FALSE, 19UL, (forthOperation)hectorImage },
			{ "MASK", "MASK", TRUE, FALSE, FALSE, 20UL, (forthOperation)hectorMask },
			{ "ENDCASE", "ENDCASE", TRUE, FALSE, FALSE, 21UL, (forthOperation)hectorEndcase },
			{ "ENDOF", "ENDOF", TRUE, FALSE, FALSE, 22UL, (forthOperation)hectorEndof },
			{ "OF", "OF", TRUE, FALSE, FALSE, 23UL, (forthOperation)hectorOf },
			{ "(OF)", "(OF)", TRUE, FALSE, FALSE, 24UL, (forthOperation)hectorZOf },
			{ "CASE", "CASE", TRUE, FALSE, FALSE, 25UL, (forthOperation)hectorCase },
			{ "U.", "U.", TRUE, FALSE, FALSE, 26UL, (forthOperation)hectorUDot },
			{ "?", "?", TRUE, FALSE, FALSE, 27UL, (forthOperation)hectorQ },
			{ ".", ".", TRUE, FALSE, FALSE, 28UL, (forthOperation)hectorDot },
			{ "D.", "D.", TRUE, FALSE, FALSE, 29UL, (forthOperation)hectorDDot },
			{ ".R", ".R", TRUE, FALSE, FALSE, 30UL, (forthOperation)hectorDotR },
			{ "D.R", "D.R", TRUE, FALSE, FALSE, 31UL, (forthOperation)hectorDDOtR },
			{ "#S", "#S", TRUE, FALSE, FALSE, 32UL, (forthOperation)hectorNums },
			{ "#", "#", TRUE, FALSE, FALSE, 33UL, (forthOperation)hectorNum },
			{ "SIGN", "SIGN", TRUE, FALSE, FALSE, 34UL, (forthOperation)hectorSign },
			{ "#>", "#>", TRUE, FALSE, FALSE, 35UL, (forthOperation)hectorNumFrom },
			{ "<#", "<#", TRUE, FALSE, FALSE, 36UL, (forthOperation)hectorToNum },
			{ "SPACES", "SPACES", TRUE, FALSE, FALSE, 37UL, (forthOperation)hectorSpaces },
			{ "+LOOP", "+LOOP", TRUE, FALSE, FALSE, 38UL, (forthOperation)hectorPlusLoop },
			{ "LOOP", "LOOP", TRUE, FALSE, FALSE, 39UL, (forthOperation)hectorLoop },
			{ "DO", "DO", TRUE, FALSE, FALSE, 40UL, (forthOperation)hectorDo },
			{ "FORGET", "FORGET", TRUE, FALSE, FALSE, 41UL, (forthOperation)hectorForget },
			{ "'", "'", TRUE, FALSE, FALSE, 42UL, (forthOperation)hectorTick },
			{ "WHILE", "WHILE", TRUE, FALSE, FALSE, 43UL, (forthOperation)hectorWhile },
			{ "REPEAT", "REPEAT", TRUE, FALSE, FALSE, 44UL, (forthOperation)hectorRepeat },
			{ "AGAIN", "AGAIN", TRUE, FALSE, FALSE, 45UL, (forthOperation)hectorAgain },
			{ "END", "END", TRUE, FALSE, FALSE, 46UL, (forthOperation)hectorEnd },
			{ "UNTIL", "UNTIL", TRUE, FALSE, FALSE, 47UL, (forthOperation)hectorUntil },
			{ "BEGIN", "BEGIN", TRUE, FALSE, FALSE, 48UL, (forthOperation)hectorBegin },
			{ "ELSE", "ELSE", TRUE, FALSE, FALSE, 49UL, (forthOperation)hectorElse },
			{ "IF", "IF", TRUE, FALSE, FALSE, 50UL, (forthOperation)hectorIf },
			{ "THEN", "THEN", TRUE, FALSE, FALSE, 51UL, (forthOperation)hectorThen },
			{ "ENDIF", "ENDIF", TRUE, FALSE, FALSE, 52UL, (forthOperation)hectorEndIf },
			{ "BACK", "BACK", TRUE, FALSE, FALSE, 53UL, (forthOperation)hectorBack },
			{ "BSTACK", "BSTACK", TRUE, FALSE, FALSE, 54UL, (forthOperation)hectorBStack },
			{ "DRAW", "DRAW", TRUE, FALSE, FALSE, 55UL, (forthOperation)hectorDraw },
			{ "BINIT", "BINIT", TRUE, FALSE, FALSE, 56UL, (forthOperation)hectorBInit },
			{ "BPUSH", "BPUSH", TRUE, FALSE, FALSE, 57UL, (forthOperation)hectorBPush },
			{ "BPOP", "BPOP", TRUE, FALSE, FALSE, 58UL, (forthOperation)hectorBPop },
			{ "BDROP", "BDROP", TRUE, FALSE, FALSE, 59UL, (forthOperation)hectorBDrop },
			{ "BCLEAR", "BCLEAR", TRUE, FALSE, FALSE, 60UL, (forthOperation)hectorBClear },
			{ "CLS", "CLS", TRUE, FALSE, FALSE, 61UL, (forthOperation)hectorCLS },
			{ "PAGE", "PAGE", TRUE, FALSE, FALSE, 62UL, (forthOperation)hectorPage },
			{ "HOME", "HOME", TRUE, FALSE, FALSE, 63UL, (forthOperation)hectorHome },
			{ "WINDOW", "WINDOW", TRUE, FALSE, FALSE, 64UL, (forthOperation)hectorWindow },
			{ "AT", "AT", TRUE, FALSE, FALSE, 65UL, (forthOperation)hectorAt },
			{ "SCALE", "SCALE", TRUE, FALSE, FALSE, 66UL, (forthOperation)hectorScale },
			{ "PAPER", "PAPER", TRUE, FALSE, FALSE, 67UL, (forthOperation)hectorPaper },
			{ "PEN", "PEN", TRUE, FALSE, FALSE, 68UL, (forthOperation)hectorPen },
			{ "STANDARD", "STANDARD", TRUE, FALSE, FALSE, 69UL, (forthOperation)hectorStandard },
			{ "SPECIAL", "SPECIAL", TRUE, FALSE, FALSE, 70UL, (forthOperation)hectorSpecial },
			{ "DELAY", "DELAY", TRUE, FALSE, FALSE, 71UL, (forthOperation)hectorDelay },
			{ "CURSOR", "CURSOR", TRUE, FALSE, FALSE, 72UL, (forthOperation)hectorCursor },
			{ "LINIT", "LINIT", TRUE, FALSE, FALSE, 73UL, (forthOperation)hectorLInit },
			{ "MODE", "MODE", TRUE, FALSE, FALSE, 74UL, (forthOperation)hectorMode },
			{ "LEMIT", "LEMIT", TRUE, FALSE, FALSE, 75UL, (forthOperation)hectorLemit },
			{ "RECTIFY", "RECTIFY", TRUE, FALSE, FALSE, 76UL, (forthOperation)hectorRectify },
			{ "TONE", "TONE", TRUE, FALSE, FALSE, 77UL, (forthOperation)hectorTone},
			{ "TO", "TO", TRUE, FALSE, FALSE, 78UL, (forthOperation)hectorTo },
			{ "SOUND", "SOUND", TRUE, FALSE, FALSE, 79UL, (forthOperation)hectorSound },
			{ "RINK", "RINK", TRUE, FALSE, FALSE, 80UL, (forthOperation)hectorRink },
			{ "POT", "POT", TRUE, FALSE, FALSE, 81UL, (forthOperation)hectorPot },
			{ "POINT", "POINT", TRUE, FALSE, FALSE, 82UL, (forthOperation)hectorPoint },
			{ "PLOT", "PLOT", TRUE, FALSE, FALSE, 83UL, (forthOperation)hectorPlot },
			{ "PAINT", "PAINT", TRUE, FALSE, FALSE, 84UL, (forthOperation)hectorPaint },
			{ "LITTLE", "LITTLE", TRUE, FALSE, FALSE, 85UL, (forthOperation)hectorLittle },
			{ "LINE", "LINE", TRUE, FALSE, FALSE, 86UL, (forthOperation)hectorLine },
			{ "JOY", "JOY", TRUE, FALSE, FALSE, 87UL, (forthOperation)hectorJoy },
			{ "INK", "INK", TRUE, FALSE, FALSE, 88UL, (forthOperation)hectorInk },
			{ "HUSH", "HUSH", TRUE, FALSE, FALSE, 89UL, (forthOperation)hectorHush },
			{ "FROM", "FROM", TRUE, FALSE, FALSE, 90UL, (forthOperation)hectorFrom },
			{ "FIRE", "FIRE", TRUE, FALSE, FALSE, 91UL, (forthOperation)hectorFire },
			{ "COLOR", "COLOR", TRUE, FALSE, FALSE, 92UL, (forthOperation)hectorColor },
			{ "BRIGHT", "BRIGHT", TRUE, FALSE, FALSE, 93UL, (forthOperation)hectorBright },
			{ "BOX", "BOX", TRUE, FALSE, FALSE, 94UL, (forthOperation)hectorBox },
			{ "BIG", "BIG", TRUE, FALSE, FALSE, 95UL, (forthOperation)hectorBig },
			{ "BAR", "BAR", TRUE, FALSE, FALSE, 96UL, (forthOperation)hectorBar },
			{ "R/W?", "R/W?", TRUE, FALSE, FALSE, 97UL, (forthOperation)hectorRSlashWQ },
			{ "R/W", "R/W", TRUE, FALSE, FALSE, 98UL, (forthOperation)hectorRSlashW },
			{ "L/SCR", "L/SCR", TRUE, FALSE, FALSE, 99UL, (forthOperation)hectorLSlashSCR },
			{ "USE", "USE", TRUE, FALSE, FALSE, 100UL, (forthOperation)hectorUse },
			{ "EXPECT", "EXPECT", TRUE, FALSE, FALSE, 101UL, (forthOperation)hectorExpect },
			{ "CR", "CR", TRUE, FALSE, FALSE, 102UL, (forthOperation)hectorCR },
			{ "EMIT", "EMIT", TRUE, FALSE, FALSE, 103UL, (forthOperation)hectorEmit },
			{ "CAPITAL", "CAPITAL", TRUE, FALSE, FALSE, 104UL, (forthOperation)hectorCapital },
			{ "REWIND", "REWIND", TRUE, FALSE, FALSE, 105UL, (forthOperation)hectorRewind },
			{ "MOTOR", "MOTOR", TRUE, FALSE, FALSE, 106UL, (forthOperation)hectorMotor },
			{ "MSG\"", "MSG\"", TRUE, FALSE, FALSE, 107UL, (forthOperation)hectorMSGQuote },
			{ "(MSG)", "(MSG)", TRUE, FALSE, FALSE, 108UL, (forthOperation)hectorZMSG },
			{ "MESSAGE", "MESSAGE", TRUE, FALSE, FALSE, 109UL, (forthOperation)hectorMessage },
			{ "M/MOD", "M/MOD", TRUE, FALSE, FALSE, 110UL, (forthOperation)hectorMSlashMOD },
			{ "*/", "*/", TRUE, FALSE, FALSE, 111UL, (forthOperation)hectorStarSlash },
			{ "*/MOD", "*/MOD", TRUE, FALSE, FALSE, 112UL, (forthOperation)hectorStarSlashMOD },
			{ "MOD", "MOD", TRUE, FALSE, FALSE, 113UL, (forthOperation)hectorMOD },
			{ "/", "/", TRUE, FALSE, FALSE, 114UL, (forthOperation)hectorSlash },
			{ "/MOD", "/MOD", TRUE, FALSE, FALSE, 115UL, (forthOperation)hectorSlashMOD },
			{ "*", "*", TRUE, FALSE, FALSE, 116UL, (forthOperation)hectorStar },
			{ "M/", "M/", TRUE, FALSE, FALSE, 117UL, (forthOperation)hectorMSlash },
			{ "M*", "M*", TRUE, FALSE, FALSE, 118UL, (forthOperation)hectorMStar },
			{ "WIPE", "WIPE", TRUE, FALSE, FALSE, 119UL, (forthOperation)hectorWipe },
			{ "MAX", "MAX", TRUE, FALSE, FALSE, 120UL, (forthOperation)hectorMax },
			{ "MIN", "MIN", TRUE, FALSE, FALSE, 121UL, (forthOperation)hectorMin },
			{ "DABS", "DABS", TRUE, FALSE, FALSE, 122UL, (forthOperation)hectorDAbs },
			{ "ABS", "ABS", TRUE, FALSE, FALSE, 123UL, (forthOperation)hectorAbs },
			{ "D+-", "D+-", TRUE, FALSE, FALSE, 124UL, (forthOperation)hectorDPlusMinus },
			{ "+-", "+-", TRUE, FALSE, FALSE, 125UL, (forthOperation)hectorPlusMinus },
			{ "S->D", "S->D", TRUE, FALSE, FALSE, 126UL, (forthOperation)hectorSToD },
			{ "EMPTY-BUFFERS", "EMPTY-BUFFERS", TRUE, FALSE, FALSE, 127UL, (forthOperation)hectorEmptyBuffers },
			{ "COLD", "COLD", TRUE, FALSE, FALSE, 128UL, (forthOperation)hectorCold },
			{ "ABORT", "ABORT", TRUE, FALSE, FALSE, 129UL, (forthOperation)hectorAbort },
			{ "QUIT", "QUIT", TRUE, FALSE, FALSE, 130UL, (forthOperation)hectorQuit },
			{ " ", " ", TRUE, FALSE, FALSE, 131UL, (forthOperation)hectorEmptySpace },
			{ "(", "(", TRUE, FALSE, FALSE, 132UL, (forthOperation)hectorParen },
			{ "DEFINITIONS", "DEFINITIONS", TRUE, FALSE, FALSE, 133UL, (forthOperation)hectorDefinitions },
			{ "VFILL", "VFILL", TRUE, FALSE, FALSE, 134UL, (forthOperation)hectorVFill },
			{ "V<CMODE", "V<CMODE", TRUE, FALSE, FALSE, 135UL, (forthOperation)hectorVFromCMode },
			{ "VCMOVE", "VCMOVE", TRUE, FALSE, FALSE, 136UL, (forthOperation)hectorVCMode },
			{ "VC!", "VC!", TRUE, FALSE, FALSE, 137UL, (forthOperation)hectorVCStore },
			{ "V!", "V!", TRUE, FALSE, FALSE, 138UL, (forthOperation)hectorVStore },
			{ "VC@", "VC@", TRUE, FALSE, FALSE, 139UL, (forthOperation)hectorVCFetch },
			{ "V@", "V@", TRUE, FALSE, FALSE, 140UL, (forthOperation)hectorVFetch },
			{ "?TERMINAL", "?TERMINAL", TRUE, FALSE, FALSE, 141UL, (forthOperation)hectorQTerminal },
			{ "KEY", "KEY", TRUE, FALSE, FALSE, 142UL, (forthOperation)hectorKey },
			{ "GET", "GET", TRUE, FALSE, FALSE, 143UL, (forthOperation)hectorGet },
			{ "SLOW", "SLOW", TRUE, FALSE, FALSE, 144UL, (forthOperation)hectorSlow },
			{ "FAST", "FAST", TRUE, FALSE, FALSE, 145UL, (forthOperation)hectorFast },
			{ "256RND", "256RND", TRUE, FALSE, FALSE, 146UL, (forthOperation)hector256RND },
			{ "C*", "C*", TRUE, FALSE, FALSE, 147UL, (forthOperation)hectorCStar },
			{ "VOCABULARY", "VOCABULARY", TRUE, FALSE, FALSE, 148UL, (forthOperation)hectorVocabulary },
			{ "IMMEDIATE", "IMMEDIATE", TRUE, FALSE, FALSE, 149UL, (forthOperation)hectorImmediate },
			{ "INTERPRET", "INTERPRET", TRUE, FALSE, FALSE, 150UL, (forthOperation)hectorInterpret },
			{ "?STACK", "?STACK", TRUE, FALSE, FALSE, 151UL, (forthOperation)hectorQStack },
			{ "DLITERAL", "DLITERAL", TRUE, FALSE, FALSE, 152UL, (forthOperation)hectorDLiteral },
			{ "LITERAL", "LITERAL", TRUE, FALSE, FALSE, 153UL, (forthOperation)hectorLiteral },
			{ "[COMPILE]", "[COMPILE]", TRUE, FALSE, FALSE, 154UL, (forthOperation)hectorXCompile },
			{ "CREATE", "CREATE", TRUE, FALSE, FALSE, 155UL, (forthOperation)hectorCreate },
			{ "ID.", "ID.", TRUE, FALSE, FALSE, 156UL, (forthOperation)hectorIDDot },
			{ "ERROR", "ERROR", TRUE, FALSE, FALSE, 157UL, (forthOperation)hectorError },
			{ "-FIND", "-FIND", TRUE, FALSE, FALSE, 158UL, (forthOperation)hectorMinusFind },
			{ "NUMBER", "NUMBER", TRUE, FALSE, FALSE, 159UL, (forthOperation)hectorNumber },
			{ "(NUMBER)", "(NUMBER)", TRUE, FALSE, FALSE, 160UL, (forthOperation)hectorZNumber },
			{ "WORD", "WORD", TRUE, FALSE, FALSE, 161UL, (forthOperation)hectorWord },
			{ "PAD", "PAD", TRUE, FALSE, FALSE, 162UL, (forthOperation)hectorPad },
			{ "HOLD", "HOLD", TRUE, FALSE, FALSE, 163UL, (forthOperation)hectorHold },
			{ "BLANKS", "BLANKS", TRUE, FALSE, FALSE, 164UL, (forthOperation)hectorBlanks },
			{ "ERASE", "ERASE", TRUE, FALSE, FALSE, 165UL, (forthOperation)hectorErase },
			{ "FILL", "FILL", TRUE, FALSE, FALSE, 166UL, (forthOperation)hectorFill },
			{ "QUERY", "QUERY", TRUE, FALSE, FALSE, 167UL, (forthOperation)hectorQuery },
			{ ".\"", ".\"", TRUE, FALSE, FALSE, 168UL, (forthOperation)hectorDotQuote },
			{ "(.\")", "(.\")", TRUE, FALSE, FALSE, 169UL, (forthOperation)hectorZDotQuote },
			{ "-TRAILING", "-TRAILING", TRUE, FALSE, FALSE, 170UL, (forthOperation)hectorMinusTrailing },
			{ "TYPE", "TYPE", TRUE, FALSE, FALSE, 171UL, (forthOperation)hectorType },
			{ "COUNT", "COUNT", TRUE, FALSE, FALSE, 172UL, (forthOperation)hectorCount },
			{ "DOES>", "DOES>", TRUE, FALSE, FALSE, 173UL, (forthOperation)hectorDoes },
			{ "<BUILDS", "<BUILDS", TRUE, FALSE, FALSE, 174UL, (forthOperation)hectorBuilds },
			{ ";CODE", ";CODE", TRUE, FALSE, FALSE, 175UL, (forthOperation)hectorSemicolonCode },
			{ "(;CODE)", "(;CODE)", TRUE, FALSE, FALSE, 176UL, (forthOperation)hectorZSemicolonCode },
			{ "DECIMAL", "DECIMAL", TRUE, FALSE, FALSE, 177UL, (forthOperation)hectorDecimal },
			{ "HEX", "HEX", TRUE, FALSE, FALSE, 178UL, (forthOperation)hectorHex },
			{ "SMUDGE", "SMUDGE", TRUE, FALSE, FALSE, 179UL, (forthOperation)hectorSmudge },
			{ "]", "]", TRUE, FALSE, FALSE, 180UL, (forthOperation)hectorRightBracket },
			{ "[", "[", TRUE, FALSE, FALSE, 181UL, (forthOperation)hectorLeftBracket },
			{ "COMPILE", "COMPILE", TRUE, FALSE, FALSE, 182UL, (forthOperation)hectorCompile },
			{ "?CSP", "?CSP", TRUE, FALSE, FALSE, 183UL, (forthOperation)hectorQCSP },
			{ "?PAIRS", "?PAIRS", TRUE, FALSE, FALSE, 184UL, (forthOperation)hectorQPairs },
			{ "?EXEX", "?EXEX", TRUE, FALSE, FALSE, 185UL, (forthOperation)hectorQExec },
			{ "?COMP", "?COMP", TRUE, FALSE, FALSE, 186UL, (forthOperation)hectorQComp },
			{ "?ERROR", "?ERROR", TRUE, FALSE, FALSE, 187UL, (forthOperation)hectorQError },
			{ "!CSP", "!CSP", TRUE, FALSE, FALSE, 188UL, (forthOperation)hectorStoreCSP },
			{ "PFA", "PFA", TRUE, FALSE, FALSE, 189UL, (forthOperation)hectorPFA },
			{ "NFA", "NFA", TRUE, FALSE, FALSE, 190UL, (forthOperation)hectorNFA },
			{ "LFA", "LFA", TRUE, FALSE, FALSE, 191UL, (forthOperation)hectorLFA },
			{ "CFA", "CFA", TRUE, FALSE, FALSE, 192UL, (forthOperation)hectorCFA },
			{ "LATEST", "LATEST", TRUE, FALSE, FALSE, 193UL, (forthOperation)hectorLatest },
			{ "TRAVERSE", "TRAVERSE", TRUE, FALSE, FALSE, 194UL, (forthOperation)hectorTraverse },
			{ "-DUP", "-DUP", TRUE, FALSE, FALSE, 195UL, (forthOperation)hectorMinusDUP },
			{ "SPACE", "SPACE", TRUE, FALSE, FALSE, 196UL, (forthOperation)hectorSpace },
			{ "U<", "U<", TRUE, FALSE, FALSE, 197UL, (forthOperation)hectorUGreater },
			{ "C,", "C,", TRUE, FALSE, FALSE, 198UL, (forthOperation)hectorCComma },
			{ ",", ",", TRUE, FALSE, FALSE, 199UL, (forthOperation)hectorComma },
			{ "ALLOT", "ALLOT", TRUE, FALSE, FALSE, 200UL, (forthOperation)hectorAllot },
			{ "HERE", "HERE", TRUE, FALSE, FALSE, 201UL, (forthOperation)hectorHere },
			{ "PREV", "PREV", TRUE, FALSE, FALSE, 202UL, (forthOperation)hectorPrev },
			{ "OFFSET", "OFFSET", TRUE, FALSE, FALSE, 203UL, (forthOperation)hectorOffset },
			{ "HLD", "HLD", TRUE, FALSE, FALSE, 204UL, (forthOperation)hectorHLD },
			{ "R#", "R#", TRUE, FALSE, FALSE, 205UL, (forthOperation)hectorRNum },
			{ "CSP", "CSP", TRUE, FALSE, FALSE, 206UL, (forthOperation)hectorCSP },
			{ "DPL", "DPL", TRUE, FALSE, FALSE, 207UL, (forthOperation)hectorDPL },
			{ "BASE", "BASE", TRUE, FALSE, FALSE, 208UL, (forthOperation)hectorBase },
			{ "STATE", "STATE", TRUE, FALSE, FALSE, 209UL, (forthOperation)hectorState },
			{ "CURRENT", "CURRENT", TRUE, FALSE, FALSE, 210UL, (forthOperation)hectorCurrent },
			{ "CONTEXT", "CONTEXT", TRUE, FALSE, FALSE, 211UL, (forthOperation)hectorContext },
			{ "SCR", "SCR", TRUE, FALSE, FALSE, 212UL, (forthOperation)hectorSCR },
			{ "IN", "IN", TRUE, FALSE, FALSE, 213UL, (forthOperation)hectorIN },
			{ "BLK", "BLK", TRUE, FALSE, FALSE, 214UL, (forthOperation)hectorBLK },
			{ "VOC-LINK", "VOC-LINK", TRUE, FALSE, FALSE, 215UL, (forthOperation)hectorVocMinusLink },
			{ "DP", "DP", TRUE, FALSE, FALSE, 216UL, (forthOperation)hectorDP },
			{ "FENCE", "FENCE", TRUE, FALSE, FALSE, 217UL, (forthOperation)hectorFence },
			{ "WIDTH", "WIDTH", TRUE, FALSE, FALSE, 218UL, (forthOperation)hectorWidth },
			{ "TIB", "TIB", TRUE, FALSE, FALSE, 219UL, (forthOperation)hectorTIB },
			{ "RO", "RO", TRUE, FALSE, FALSE, 220UL, (forthOperation)hectorRO },
			{ "SO", "SO", TRUE, FALSE, FALSE, 221UL, (forthOperation)hectorSO },
			{ "C/NAME", "C/NAME", TRUE, FALSE, FALSE, 222UL, (forthOperation)hectorCSlashName },
			{ "B/BUF", "B/BUF", TRUE, FALSE, FALSE, 223UL, (forthOperation)hectorBSlashBuf },
			{ "LIMIT", "LIMIT", TRUE, FALSE, FALSE, 224UL, (forthOperation)hectorLimit },
			{ "FIRST", "FIRST", TRUE, FALSE, FALSE, 225UL, (forthOperation)hectorFirst },
			{ "C/L", "C/L", TRUE, FALSE, FALSE, 226UL, (forthOperation)hectorCSlashL },
			{ "BL", "BL", TRUE, FALSE, FALSE, 227UL, (forthOperation)hectorBL },
			{ "3", "3", TRUE, FALSE, FALSE, 228UL, (forthOperation)hectorThree },
			{ "2", "2", TRUE, FALSE, FALSE, 229UL, (forthOperation)hectorTwo },
			{ "1", "1", TRUE, FALSE, FALSE, 230UL, (forthOperation)hectorOne },
			{ "0", "0", TRUE, FALSE, FALSE, 231UL, (forthOperation)hectorZero },
			{ "VARIABLE", "VARIABLE", TRUE, FALSE, FALSE, 232UL, (forthOperation)hectorVariable },
			{ "CONSTANT", "CONSTANT", TRUE, FALSE, FALSE, 233UL, (forthOperation)hectorConstant },
			{ ";", ";", TRUE, FALSE, FALSE, 234UL, (forthOperation)hectorSemicolon },
			{ ":", ":", TRUE, FALSE, FALSE, 235UL, (forthOperation)hectorColon },
			{ "<CMOVE", "<CMOVE", TRUE, FALSE, FALSE, 236UL, (forthOperation)hectorFromCMove },
			{ "D-", "D-", TRUE, FALSE, FALSE, 237UL, (forthOperation)hectorDMinussign },
			{ "2ROT", "2ROT", TRUE, FALSE, FALSE, 238UL, (forthOperation)hectorTwoRot },
			{ "2DROP", "2DROP", TRUE, FALSE, FALSE, 239UL, (forthOperation)hectorTwoDrop },
			{ "2OVER", "2OVER", TRUE, FALSE, FALSE, 240UL, (forthOperation)hectorTwoOver },
			{ "2SWAP", "2SWAP", TRUE, FALSE, FALSE, 241UL, (forthOperation)hectorTwoSwap },
			{ "2/", "2/", TRUE, FALSE, FALSE, 242UL, (forthOperation)hectorTwoSlash },
			{ "2*", "2*", TRUE, FALSE, FALSE, 243UL, (forthOperation)hectorTwoStar },
			{ "2-", "2-", TRUE, FALSE, FALSE, 244UL, (forthOperation)hectorTwoMinus },
			{ "1-", "1-", TRUE, FALSE, FALSE, 245UL, (forthOperation)hectorOneMinus },
			{ "0>", "0>", TRUE, FALSE, FALSE, 246UL, (forthOperation)hectorZeroGreater },
			{ "J", "J", TRUE, FALSE, FALSE, 247UL, (forthOperation)hectorJ },
			{ "I'", "I'", TRUE, FALSE, FALSE, 248UL, (forthOperation)hectorITick },
			{ "SDROP", "SDROP", TRUE, FALSE, FALSE, 249UL, (forthOperation)hectorSDrop },
			{ "NOT", "NOT", TRUE, FALSE, FALSE, 250UL, (forthOperation)hectorNot },
			{ "EXIT", "EXIT", TRUE, FALSE, FALSE, 251UL, (forthOperation)hectorExit },
			{ "ROLL", "ROLL", TRUE, FALSE, FALSE, 252UL, (forthOperation)hectorRoll },
			{ "PICK", "PICK", TRUE, FALSE, FALSE, 253UL, (forthOperation)hectorPick },
			{ "ROT", "ROT", TRUE, FALSE, FALSE, 254UL, (forthOperation)hectorRot },
			{ ">", ">", TRUE, FALSE, FALSE, 255UL, (forthOperation)hectorGreater },
			{ "<", "<", TRUE, FALSE, FALSE, 256UL, (forthOperation)hectorSmaller },
			{ "=", "=", TRUE, FALSE, FALSE, 257UL, (forthOperation)hectorEqual },
			{ "-", "-", TRUE, FALSE, FALSE, 258UL, (forthOperation)hectorMinussign },
			{ "2+", "2+", TRUE, FALSE, FALSE, 259UL, (forthOperation)hectorTwoPlus },
			{ "1+", "1+", TRUE, FALSE, FALSE, 260UL, (forthOperation)hectorOnePlus },
			{ "2!", "2!", TRUE, FALSE, FALSE, 261UL, (forthOperation)hectorTwoStore },
			{ "C!", "C!", TRUE, FALSE, FALSE, 262UL, (forthOperation)hectorCStore },
			{ "!", "!", TRUE, FALSE, FALSE, 263UL, (forthOperation)hectorStore },
			{ "2@", "2@", TRUE, FALSE, FALSE, 264UL, (forthOperation)hectorTwoFetch },
			{ "C@", "C@", TRUE, FALSE, FALSE, 265UL, (forthOperation)hectorCFetch },
			{ "@", "@", TRUE, FALSE, FALSE, 266UL, (forthOperation)hectorFetch },
			{ "TOGGLE", "TOGGLE", TRUE, FALSE, FALSE, 267UL, (forthOperation)hectorToggle },
			{ "+!", "+!", TRUE, FALSE, FALSE, 268UL, (forthOperation)hectorPlusStore },
			{ "2DUP", "2DUP", TRUE, FALSE, FALSE, 269UL, (forthOperation)hectorTwoDup },
			{ "DUP", "DUP", TRUE, FALSE, FALSE, 270UL, (forthOperation)hectorDup },
			{ "SWAP", "SWAP", TRUE, FALSE, FALSE, 271UL, (forthOperation)hectorSwap },
			{ "DROP", "DROP", TRUE, FALSE, FALSE, 272UL, (forthOperation)hectorDrop },
			{ "OVER", "OVER", TRUE, FALSE, FALSE, 273UL, (forthOperation)hectorOver },
			{ "DMINUS", "DMINUS", TRUE, FALSE, FALSE, 274UL, (forthOperation)hectorDMinus },
			{ "MINUS", "MINUS", TRUE, FALSE, FALSE, 275UL, (forthOperation)hectorMinus },
			{ "D+", "D+", TRUE, FALSE, FALSE, 276UL, (forthOperation)hectorDPlus },
			{ "+", "+", TRUE, FALSE, FALSE, 277UL, (forthOperation)hectorPlus },
			{ "0<", "0<", TRUE, FALSE, FALSE, 278UL, (forthOperation)hectorZeroLess },
			{ "0=", "0=", TRUE, FALSE, FALSE, 279UL, (forthOperation)hectorZeroEqual },
			{ "R", "R", TRUE, FALSE, FALSE, 280UL, (forthOperation)hectorR },
			{ "R>", "R>", TRUE, FALSE, FALSE, 281UL, (forthOperation)hectorRFrom },
			{ ">R", ">R", TRUE, FALSE, FALSE, 282UL, (forthOperation)hectorToR },
			{ "LEAVE", "LEAVE", TRUE, FALSE, FALSE, 283UL, (forthOperation)hectorLeave },
			{ ";S", ";S", TRUE, FALSE, FALSE, 284UL, (forthOperation)hectorSemicolonS },
			{ "RP!", "RP!", TRUE, FALSE, FALSE, 285UL, (forthOperation)hectorRPStore },
			{ "RP@", "RP@", TRUE, FALSE, FALSE, 286UL, (forthOperation)hectorRPFetch },
			{ "SP!", "SP!", TRUE, FALSE, FALSE, 287UL, (forthOperation)hectorSPStore },
			{ "SP@", "SP@", TRUE, FALSE, FALSE, 288UL, (forthOperation)hectorSPFetch },
			{ "XOR", "XOR", TRUE, FALSE, FALSE, 289UL, (forthOperation)hectorXor },
			{ "OR", "OR", TRUE, FALSE, FALSE, 290UL, (forthOperation)hectorOr },
			{ "AND", "AND", TRUE, FALSE, FALSE, 291UL, (forthOperation)hectorAnd },
			{ "U/", "U/", TRUE, FALSE, FALSE, 292UL, (forthOperation)hectorUSlash },
			{ "U*", "U*", TRUE, FALSE, FALSE, 293UL, (forthOperation)hectorUStar },
			{ "CMOVE", "CMOVE", TRUE, FALSE, FALSE, 294UL, (forthOperation)hectorCMove },
			{ "ENCLOSE", "ENCLOSE", TRUE, FALSE, FALSE, 295UL, (forthOperation)hectorEnclose },
			{ "(FIND)", "(FIND)", TRUE, FALSE, FALSE, 296UL, (forthOperation)hectorZFind },
			{ "DIGIT", "DIGIT", TRUE, FALSE, FALSE, 297UL, (forthOperation)hectorDigit },
			{ "I", "I", TRUE, FALSE, FALSE, 298UL, (forthOperation)hectorI },
			{ "(DO)", "(DO)", TRUE, FALSE, FALSE, 299UL, (forthOperation)hectorZDo },
			{ "(+LOOP)", "(+LOOP)", TRUE, FALSE, FALSE, 300UL, (forthOperation)hectorZPlusLoop },
			{ "(LOOP)", "(LOOP)", TRUE, FALSE, FALSE, 301UL, (forthOperation)hectorZLoop },
			{ "BRANCH", "BRANCH", TRUE, FALSE, FALSE, 302UL, (forthOperation)hectorBranch },
			{ "OBRANCH", "OBRANCH", TRUE, FALSE, FALSE, 303UL, (forthOperation)hectorOBranch },
			{ "EXECUTE", "EXECUTE", TRUE, FALSE, FALSE, 304UL, (forthOperation)hectorExecute },
			{ "LIT", "LIT", TRUE, FALSE, FALSE, 305UL, (forthOperation)hectorLit },
			{ "H2OFORTH", "H2OFORTH", TRUE, FALSE, FALSE, MAX_FORTHWORD_ID, (forthOperation)NULL }
};

#endif
