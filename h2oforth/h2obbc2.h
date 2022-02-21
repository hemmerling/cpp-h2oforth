#ifndef H2OBBC2
#define H2OBBC2

/* The official "Arconsoft BBC Micro" ( FORTH79 ) FORTH */

/* Primitives */

void bbc79DollarMSG(void) {
	DEBUG_WORD("bbc79DollarMSG")
}

void bbc79Plot(void) {
	DEBUG_WORD("bbc79Plot")
}

void bbc79MoveBuffers(void) {
	DEBUG_WORD("bbc79MoveBuffers")
}

void bbc79FromCMove(void) {
	DEBUG_WORD("bbc79FromCMove")
}

void bbc79Where(void) {
	DEBUG_WORD("bbc79Where")
}

void bbc79Line(void) {
	DEBUG_WORD("bbc79Line")
}

void bbc79Text(void) {
	DEBUG_WORD("bbc79Text")
}

void bbc79More(void) {
	DEBUG_WORD("bbc79More")
}

void bbc79Another(void) {
	DEBUG_WORD("bbc79Another")
}

void bbc79Program(void) {
	DEBUG_WORD("bbc79Program")
}

void bbc79ClrScr(void) {
	DEBUG_WORD("bbc79ClrScr")
}

void bbc79Save(void) {
	DEBUG_WORD("bbc79Save")
}

void bbc79Locate(void) {
	DEBUG_WORD("bbc79Locate")
}

void bbc79Editor(void) {
	DEBUG_WORD("bbc79Editor")
}

void bbc79Code(void) {
	DEBUG_WORD("bbc79Code")
}

void bbc79QCurrent(void) {
	DEBUG_WORD("bbc79QCurrent")
}

void bbc79Assembler(void) {
	DEBUG_WORD("bbc79Assembler")
}

void bbc79Triad(void) {
	DEBUG_WORD("bbc79Triad")
}

void bbc79Index(void) {
	DEBUG_WORD("bbc79Index")
}

void bbc79SnineStandard(void) {
	DEBUG_WORD("bbc79SnineStandard")
}

void bbc79List(void) {
	DEBUG_WORD("bbc79List")
}

void bbc79CreateScreens(void) {
	DEBUG_WORD("bbc79CreateScreens")
}

void bbc79Tape(void) {
	DEBUG_WORD("bbc79Tape")
}

void bbc79QRSlashW(void) {
	DEBUG_WORD("bbc79QRSlashW")
}

void bbc79TRSlashW(void) {
	DEBUG_WORD("bbc79TRSlashW")
}

void bbc79TW(void) {
	DEBUG_WORD("bbc79TW")
}

void bbc79TR(void) {
	DEBUG_WORD("bbc79TR")
}

void bbc79FourHEX(void) {
	DEBUG_WORD("bbc79FourHEX")
}

void bbc79SSTo(void) {
	DEBUG_WORD("bbc79SSTo")
}

void bbc79Flush(void) {
	DEBUG_WORD("bbc79Flush")
}

void bbc79SaveBuffers(void) {
	DEBUG_WORD("bbc79SaveBuffers")
}

void bbc79Disk(void) {
	DEBUG_WORD("bbc79Disk")
}

void bbc79ZDisk(void) {
	DEBUG_WORD("bbc79ZDisk")
}

void bbc79Load(void) {
	DEBUG_WORD("bbc79Load")
}

void bbc79Block(void) {
	DEBUG_WORD("bbc79Block")
}

void bbc79Buffer(void) {
	DEBUG_WORD("bbc79Buffer")
}

void bbc79Update(void) {
	DEBUG_WORD("bbc79Update")
}

void bbc79ZUpdate(void) {
	DEBUG_WORD("bbc79ZUpdate")
}

void bbc79PlusBuf(void) {
	DEBUG_WORD("bbc79PlusBuf")
}

void bbc79InitBuf(void) {
	DEBUG_WORD("bbc79InitBuf")
}

void bbc79SetBuf(void) {
	DEBUG_WORD("bbc79SetBuf")
}

void bbc79EmptyBuffers(void) {
	DEBUG_WORD("bbc79EmptyBuffers")
}

void bbc79NumBuf(void) {
	DEBUG_WORD("bbc79NumBuf")
}

void bbc79Prev(void) {
	DEBUG_WORD("bbc79Prev")
}

void bbc79Use(void) {
	DEBUG_WORD("bbc79Use")
}

void bbc79BufSZ(void) {
	DEBUG_WORD("bbc79BufSZ")
}

void bbc79MinBUF(void) {
	DEBUG_WORD("bbc79MinBUF")
}

void bbc79RSlashW(void) {
	DEBUG_WORD("bbc79RSlashW")
}

void bbc79DRSlashW(void) {
	DEBUG_WORD("bbc79DRSlashW")
}

void bbc79Open(void) {
	DEBUG_WORD("bbc79Open")
}

void bbc79FName(void) {
	DEBUG_WORD("bbc79FName")
}

void bbc79Channel(void) {
	DEBUG_WORD("bbc79Channel")
}

void bbc79MaxFiles(void) {
	DEBUG_WORD("bbc79MaxFiles")
}

void bbc79SSlashFile(void) {
	DEBUG_WORD("bbc79SSlashFile")
}

void bbc79ZRSlashW(void) {
	DEBUG_WORD("bbc79ZRSlashW")
}

void bbc79Close(void) {
	DEBUG_WORD("bbc79Close")
}

void bbc79ZOpen(void) {
	DEBUG_WORD("bbc79ZOpen")
}

void bbc79KeyTick(void) {
	DEBUG_WORD("bbc79KeyTick")
}

void bbc79OSTick(void) {
	DEBUG_WORD("bbc79OSTick")
}

void bbc79ToCLI(void) {
	DEBUG_WORD("bbc79ToCLI")
}

void bbc79ZCLI(void) {
	DEBUG_WORD("bbc79ZCLI")
}

void bbc79ZDollarPlus(void) {
	DEBUG_WORD("bbc79ZDollarPlus")
}

void bbc79String(void) {
	DEBUG_WORD("bbc79String")
}

void bbc79OSCLI(void) {
	DEBUG_WORD("bbc79OSCLI")
}

void bbc79Roll(void) {
	DEBUG_WORD("bbc79Roll")
}

void bbc79Pick(void) {
	DEBUG_WORD("bbc79Pick")
}

void bbc79DotS(void) {
	int ii = 0;
	int dataStackIndex = forthTasks[forthState.forthCurrentTask].dataStackIndex;
	if (dataStackIndex) {
		privateSetBaseFormat();
		printf("[%d] ", dataStackIndex);
		for (ii = 0; ii < dataStackIndex; ii++) {
			CELL_INTEGER value = forthTasks[forthState.forthCurrentTask].dataStackSpace[ii];
			char* value2;
			if (forthTasks[forthState.forthCurrentTask].baseFormat == BASE_FORMAT_EMPTY) {
				value2 = privatBaseConversion(forthTasks[forthState.forthCurrentTask].forthBase, value);
				printf(forthTasks[forthState.forthCurrentTask].baseFormat, value2);
			}
			else {
				printf(forthTasks[forthState.forthCurrentTask].baseFormat, value);
			};
			printf("%s", STRING_SPACE);
		};
		printf("\n");
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_EMPTY;
		// forthTasks[forthState.forthCurrentTask].messageNumber = MESSAGE_DATASTACK_EMPTY;
	};
	DEBUG_WORD("bbc79DotS")
}

void bbc79Depth(void) {
	DEBUG_WORD("bbc79Depth")
}

void bbc79Forget(void) {
	DEBUG_WORD("bbc79Forget")
}

void bbc79Prune(void) {
	DEBUG_WORD("bbc79Prune")
}

void bbc79InitVecs(void) {
	DEBUG_WORD("bbc79InitVecs")
}

void bbc79ToDo(void) {
	DEBUG_WORD("bbc79ToDo")
}

void bbc79DoVec(void) {
	DEBUG_WORD("bbc79DoVec")
}

void bbc79Assign(void) {
	DEBUG_WORD("bbc79Assign")
}

void bbc79ExVec(void) {
	DEBUG_WORD("bbc79ExVec")
}

void bbc79Novec(void) {
	DEBUG_WORD("bbc79Novec")
}

void bbc79Vlist(void) {
	DEBUG_WORD("bbc79Vlist")
}

void bbc79Tick(void) {
	DEBUG_WORD("bbc79Tick")
}

void bbc79Repeat(void) {
	DEBUG_WORD("bbc79Repeat")
}

void bbc79While(void) {
	DEBUG_WORD("bbc79While")
}

void bbc79Again(void) {
	DEBUG_WORD("bbc79Again")
}

void bbc79Until(void) {
	DEBUG_WORD("bbc79Until")
}

void bbc79Begin(void) {
	DEBUG_WORD("bbc79Begin")
}

void bbc79Else(void) {
	DEBUG_WORD("bbc79Else")
}

void bbc79Then(void) {
	DEBUG_WORD("bbc79Then")
}

void bbc79If(void) {
	DEBUG_WORD("bbc79If")
}

void bbc79PlusLoop(void) {
	DEBUG_WORD("bbc79PlusLoop")
}

void bbc79Loop(void) {
	DEBUG_WORD("bbc79Loop")
}

void bbc79Do(void) {
	DEBUG_WORD("bbc79Do")
}

void bbc79Back(void) {
	DEBUG_WORD("bbc79Back")
}

void bbc79J(void) {
	DEBUG_WORD("bbc79J")
}

void bbc79TwoSlash(void) {
	DEBUG_WORD("bbc79TwoSlash")
}

void bbc79TwoStar(void) {
	DEBUG_WORD("bbc79TwoStar")
}

void bbc79Message(void) {
	DEBUG_WORD("bbc79Message")
}

void bbc79MSGNum(void) {
	DEBUG_WORD("bbc79MSGNum")
}

/* Display in hexadecimal base in the format of <.> */
void bbc79HDot(void) {
	commonHexDot();
	DEBUG_WORD("bbc79HDot")
}

/* Display in decimal base in the format of <.> */
void bbc79DecDot(void) {
	if (forthTasks[forthState.forthCurrentTask].dataStackIndex) {
		if (sizeof(CELL_INTEGER) == CELLSIZE8) {
			printf("%lld ", forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex]);
		}
		else {
			printf("%d ", forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex]);
		}
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_EMPTY;
	};
	DEBUG_WORD("bbc79DecDot")
}

void bbc79Q(void) {
	DEBUG_WORD("bbc79Q")
}

void bbc79UDot(void) {
	DEBUG_WORD("bbc79UDot")
}

void bbc79Dot(void) {
	if (forthTasks[forthState.forthCurrentTask].dataStackIndex) {
		CELL_INTEGER value =
			forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex];
		char* value2;
		privateSetBaseFormat();
		if (forthTasks[forthState.forthCurrentTask].baseFormat == BASE_FORMAT_EMPTY) {
			value2 = privatBaseConversion(forthTasks[forthState.forthCurrentTask].forthBase, value);
			printf(forthTasks[forthState.forthCurrentTask].baseFormat, value2);
		}
		else {
			printf(forthTasks[forthState.forthCurrentTask].baseFormat, value);
		};
		putchar(CHAR_SPACE);
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_EMPTY;
	};
	DEBUG_WORD("bbc79Dot")
}

void bbc79DotR(void) {
	DEBUG_WORD("bbc79DotR")
}

#ifdef DPINTEGER_SUPPORT
void bbc79DDot(void) {
	if (forthTasks[forthState.forthCurrentTask].dataStackIndex >= 2) {
		LONG_LONG value = 0;
		privateSetBaseLFormat();
		value = (LONG_LONG)(forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex])
			<< (sizeof(forthTasks[forthState.forthCurrentTask].dataStackSpace[0]) * 4); /* ?? */
		printf(forthTasks[forthState.forthCurrentTask].baseFormat, value +
			forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex]);
		putchar(CHAR_SPACE);
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_EMPTY;
	};
	DEBUG_WORD("bbc79DDot")
}
#endif

#ifdef DPINTEGER_SUPPORT
void bbc79DDotRDot(void) {
	if (forthTasks[forthState.forthCurrentTask].returnStackIndex >= 2) {
		privateSetBaseLFormat();
		printf(forthTasks[forthState.forthCurrentTask].baseFormat,
			((LONG_LONG)(forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex])
				<< sizeof(LONG_LONG)) +
			forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex]);
		printf("%s", STRING_CR);
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_RETURNSTACK_EMPTY;
	};
	DEBUG_WORD("bbc79DDotRDot")
}
#endif

void bbc79NumS(void) {
	DEBUG_WORD("bbc79NumS")
}

void bbc79Num(void) {
	DEBUG_WORD("bbc79Num")
}

void bbc79Sign(void) {
	DEBUG_WORD("bbc79Sign")
}

void bbc79NumGreater(void) {
	DEBUG_WORD("bbc79NumGreater")
}

void bbc79LessNum(void) {
	DEBUG_WORD("bbc79LessNum")
}

void bbc79Spaces(void) {
	DEBUG_WORD("bbc79Spaces")
}

void bbc79MSlashMod(void) {
	DEBUG_WORD("bbc79MSlashMod")
}

void bbc79StarSlash(void) {
	DEBUG_WORD("bbc79StarSlash")
}

void bbc79StarSlashMod(void) {
	DEBUG_WORD("bbc79StarSlashMod")
}

void bbc79Mod(void) {
	DEBUG_WORD("bbc79Mod")
}

void bbc79Slash(void) {
	DEBUG_WORD("bbc79Slash")
}

void bbc79SlashMod(void) {
	DEBUG_WORD("bbc79SlashMod")
}

void bbc79Star(void) {
	DEBUG_WORD("bbc79Star")
}

void bbc79MSlash(void) {
	DEBUG_WORD("bbc79MSlash")
}

void bbc79MAbs(void) {
	DEBUG_WORD("bbc79MAbs")
}

#ifdef DPINTEGER_SUPPORT
void bbc79DPlusMinus(void) {
	DEBUG_WORD("bbc79DPlusMinus")
}
#endif

void bbc79PlusMinus(void) {
	DEBUG_WORD("bbc79PlusMinus")
}

#ifdef DPINTEGER_SUPPORT
void bbc79SToD(void) {
	DEBUG_WORD("bbc79SToD")
}
#endif

void bbc79Warm(void) {
	DEBUG_WORD("bbc79Warm")
}

void bbc79Cold(void) {
	DEBUG_WORD("bbc79Cold")
}

void bbc79Start(void) {
	DEBUG_WORD("bbc79Start")
}

void bbc79Mode(void) {
	DEBUG_WORD("bbc79Mode")
}

void bbc79OSError(void) {
	DEBUG_WORD("bbc79OSError")
}

void bbc79Escape(void) {
	DEBUG_WORD("bbc79Escape")
}

void bbc79Abort(void) {
	DEBUG_WORD("bbc79Abort")
}

void bbc79ZAbort(void) {
	DEBUG_WORD("bbc79ZAbort")
}

void bbc79ZWarm(void) {
	DEBUG_WORD("bbc79ZWarm")
}

void bbc79Definitions(void) {
	DEBUG_WORD("bbc79Definitions")
}

void bbc79Quit(void) {
	DEBUG_WORD("bbc79Quit")
}

void bbc79Forth(void) {
	DEBUG_WORD("bbc79Forth")
}

void bbc79Vocabulary(void) {
	DEBUG_WORD("bbc79Vocabulary")
}

void bbc79Interpret(void) {
	DEBUG_WORD("bbc79Interpret")
}

void bbc79NumericInterpret(void) {
	DEBUG_WORD("bbc79NumericInterpret")
}

void bbc79ZNumericInterpret(void) {
	DEBUG_WORD("bbc79ZNumericInterpret")
}

void bbc79Paren(void) {
	DEBUG_WORD("bbc79Paren")
}

void bbc79Number(void) {
	DEBUG_WORD("bbc79Number")
}

void bbc79Semicolon(void) {
	DEBUG_WORD("bbc79Semicolon")
}

void bbc79Colon(void) {
	DEBUG_WORD("bbc79Colon")
}

void bbc79QStack(void) {
	DEBUG_WORD("bbc79QStack")
}

void bbc79Dliteral(void) {
	DEBUG_WORD("bbc79Dliteral")
}

void bbc79Literal(void) {
	DEBUG_WORD("bbc79Literal")
}

void bbc79ZCompile(void) {
	DEBUG_WORD("bbc79Literal")
}

void bbc79Create(void) {
	DEBUG_WORD("bbc79Create")
}

void bbc79ZCreate(void) {
	DEBUG_WORD("bbc79ZCreate")
}

void bbc79IDDot(void) {
	DEBUG_WORD("bbc79IDDot")
}

void bbc79Error(void) {
	if (forthTasks[forthState.forthCurrentTask].dataStackIndex) {
		int errorNumber = forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex];
		/* Originally, two spaces between "ERROR" and "?" */
		printf("ERROR  ? %s\n",
			forthTasks[forthState.forthCurrentTask].forthErrors[errorNumber].messageText);
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_EMPTY;
	};
	DEBUG_WORD("bbc79Error")
}

void bbc79Find(void) {
	DEBUG_WORD("bbc79Find")
}

void bbc79MinusFind(void) {
	DEBUG_WORD("bbc79MinusFind")
}

void bbc79Convert(void) {
	DEBUG_WORD("bbc79Convert")
}

void bbc79Word(void) {
	DEBUG_WORD("bbc79Word")
}

void bbc79OneWord(void) {
	DEBUG_WORD("bbc79OneWord")
}

void bbc79WBFR(void) {
	DEBUG_WORD("bbc79WBFR")
}

void bbc79WDSZ(void) {
	DEBUG_WORD("bbc79WDSZ")
}

void bbc79ZWord(void) {
	DEBUG_WORD("bbc79ZWord")
}

void bbc79Hold(void) {
	DEBUG_WORD("bbc79Hold")
}

void bbc79Blanks(void) {
	DEBUG_WORD("bbc79Blanks")
}

void bbc79Erase(void) {
	DEBUG_WORD("bbc79Erase")
}

void bbc79Fill(void) {
	DEBUG_WORD("bbc79Fill")
}

void bbc79Move(void) {
	DEBUG_WORD("bbc79Move")
}

void bbc79Query(void) {
	DEBUG_WORD("bbc79Query")
}

void bbc79Expect(void) {
	DEBUG_WORD("bbc79Expect")
}

void bbc79ZExpect(void) {
	DEBUG_WORD("bbc79ZExpect")
}

void bbc79DotQuote(void) {
	DEBUG_WORD("bbc79DotQuote")
}

void bbc79ZDotQuote(void) {
	DEBUG_WORD("bbc79ZDotQuote")
}

void bbc79TextComma(void) {
	DEBUG_WORD("bbc79TextComma")
}

void bbc79MinusTrailing(void) {
	DEBUG_WORD("bbc79MinusTrailing")
}

void bbc79Type(void) {
	DEBUG_WORD("bbc79Type")
}

void bbc79Count(void) {
	DEBUG_WORD("bbc79Type")
}

void bbc79ZeroGreater(void) {
	DEBUG_WORD("bbc79ZeroGreater")
}

void bbc79Does(void) {
	DEBUG_WORD("bbc79Does")
}

void bbc79SemicolonCode(void) {
	DEBUG_WORD("bbc79SemicolonCode")
}

void bbc79ZSemicolonCode(void) {
	DEBUG_WORD("bbc79ZSemicolonCode")
}

void bbc79Decimal(void) {
	forthTasks[forthState.forthCurrentTask].forthBase = DECIMAL;
	forthTasks[forthState.forthCurrentTask].baseFormat = (char*)BASE_FORMAT_DECIMAL;
	DEBUG_WORD("bbc79Decimal")
}

void bbc79CR(void) {
	DEBUG_WORD("bbc79CR")
}

void bbc79Hex(void) {
	forthTasks[forthState.forthCurrentTask].forthBase = HEX;
	forthTasks[forthState.forthCurrentTask].baseFormat = (char*)BASE_FORMAT_HEX;
	DEBUG_WORD("bbc79Hex")
}

void bbc79QTab(void) {
	DEBUG_WORD("bbc79QTab")
}

void bbc79NoOp(void) {
	DEBUG_WORD("bbc79NoOp")
}

void bbc79RightBracket(void) {
	DEBUG_WORD("RightBracket")
}

void bbc79LeftBracket(void) {
	DEBUG_WORD("LeftBracket")
}

void bbc79Compile(void) {
	DEBUG_WORD("bbc79Compile")
}

void bbc79Immediate(void) {
	DEBUG_WORD("bbc79Immediate")
}

void bbc79QLoading(void) {
	DEBUG_WORD("bbc79QLoading")
}

void bbc79QCSP(void) {
	DEBUG_WORD("bbc79QCSP")
}

void bbc79QPairs(void) {
	DEBUG_WORD("bbc79QPairs")
}

void bbc79QExec(void) {
	DEBUG_WORD("bbc79QExec")
}

void bbc79QComp(void) {
	DEBUG_WORD("bbc79QComp")
}

void bbc79QError(void) {
	if (forthTasks[forthState.forthCurrentTask].dataStackIndex >= 2) {
		CELL_INTEGER errorNumber = forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex];
		if (forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex]) {
			forthTasks[forthState.forthCurrentTask].dataStackSpace[forthTasks[forthState.forthCurrentTask].dataStackIndex++] = errorNumber;
			printf("test %d %d\n", forthTasks[forthState.forthCurrentTask].dataStackIndex, errorNumber);
			/* Call another FORTH word */
			bbc79Error();
		};
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_EMPTY;
	};
	DEBUG_WORD("bbc79QError")
}

void bbc79StoreCSP(void) {
	DEBUG_WORD("bbc79StoreCSP")
}

void bbc79Not(void) {
	DEBUG_WORD("bbc79Not")
}

void bbc79PFA(void) {
	DEBUG_WORD("bbc79PFA")
}

void bbc79CFA(void) {
	DEBUG_WORD("bbc79CFA")
}

void bbc79NFA(void) {
	DEBUG_WORD("bbc79NFA")
}

void bbc79LFA(void) {
	DEBUG_WORD("bbc79LFA")
}

void bbc79ULess(void) {
	DEBUG_WORD("bbc79ULess")
}

void bbc79Greater(void) {
	DEBUG_WORD("bbc79Greater")
}

void bbc79Equal(void) {
	DEBUG_WORD("bbc79Equal")
}

void bbc79Minus(void) {
	DEBUG_WORD("bbc79Minus")
}

void bbc79Smudge(void) {
	DEBUG_WORD("bbc79Smudge")
}

void bbc79Last(void) {
	DEBUG_WORD("bbc79Last")
}

void bbc79CComma(void) {
	DEBUG_WORD("bbc79CComma")
}

void bbc79Comma(void) {
	DEBUG_WORD("bbc79Comma")
}

void bbc79Space(void) {
	DEBUG_WORD("bbc79Comma")
}

void bbc79Allot(void) {
	DEBUG_WORD("bbc79Allot")
}

void bbc79Here(void) {
	DEBUG_WORD("bbc79Here")
}

void bbc79TwoMinus(void) {
	DEBUG_WORD("bbc79TwoMinus")
}

void bbc79OneMinus(void) {
	DEBUG_WORD("bbc79OneMinus")
}

void bbc79TwoPlus(void) {
	DEBUG_WORD("bbc79TwoPlus")
}

void bbc79OnePlus(void) {
	DEBUG_WORD("bbc79OnePlus")
}

void bbc79HLD(void) {
	DEBUG_WORD("bbc79HLD")
}

void bbc79RNum(void) {
	DEBUG_WORD("bbc79RNum")
}

void bbc79CSP(void) {
	DEBUG_WORD("bbc79CSP")
}

void bbc79DPL(void) {
	DEBUG_WORD("bbc79DPL")
}

/* ": HEX 16 BASE ! ; ( MAKE HEX THE IN-OUT BASE *)" */
/* ": DECIMAL 0A BASE ! ; ( MAKE DECIMAL THE IN-OUT BASE *)" */
/* "BASE @ DEC. ( Display the value of BASE )" */
void bbc79Base(void) {
	if (forthTasks[forthState.forthCurrentTask].dataStackIndex < MAX_DATASTACK - 1) {
		forthTasks[forthState.forthCurrentTask].dataStackSpace[forthTasks[forthState.forthCurrentTask].dataStackIndex++] =
			(CELL_INTEGER) & (forthTasks[forthState.forthCurrentTask].forthBase);
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_FULL;
	};
	DEBUG_WORD("bbc79Base")
}

void bbc79State(void) {
	DEBUG_WORD("bbc79State")
}

void bbc79Current(void) {
	DEBUG_WORD("bbc79Current")
}

void bbc79Context(void) {
	DEBUG_WORD("bbc79Context")
}

void bbc79Offset(void) {
	DEBUG_WORD("bbc79Offset")
}

void bbc79SCR(void) {
	DEBUG_WORD("bbc79SCR")
}

void bbc79Out(void) {
	DEBUG_WORD("bbc79Out")
}

void bbc79ToIn(void) {
	DEBUG_WORD("bbc79ToIn")
}

void bbc79BLK(void) {
	DEBUG_WORD("bbc79BLK")
}

void bbc79VocLink(void) {
	DEBUG_WORD("bbc79VocLink")
}

void bbc79DP(void) {
	DEBUG_WORD("bbc79DP")
}

void bbc79Fence(void) {
	DEBUG_WORD("bbc79Fence")
}

void bbc79Warnung(void) {
	DEBUG_WORD("bbc79Warnung")
}

void bbc79Width(void) {
	DEBUG_WORD("bbc79Width")
}

void bbc79TIB(void) {
	DEBUG_WORD("bbc79TIB")
}

void bbc79R0(void) {
	DEBUG_WORD("bbc79R0")
}

void bbc79S0(void) {
	DEBUG_WORD("bbc79S0")
}

void bbc79PlusOrigin(void) {
	DEBUG_WORD("bbc79PlusOrigin")
}

void bbc79BSlashSCR(void) {
	DEBUG_WORD("bbc79BSlashSCR")
}

void bbc79BSlashBUF(void) {
	DEBUG_WORD("bbc79BSlashBUF")
}

void bbc79Limit(void) {
	DEBUG_WORD("bbc79Limit")
}

void bbc79First(void) {
	DEBUG_WORD("bbc79First")
}

void bbc79PAD(void) {
	DEBUG_WORD("bbc79PAD")
}

void CSlashL(void) {
	DEBUG_WORD("CSlashL")
}

void bbc79BL(void) {
	DEBUG_WORD("bbc79BL")
}

void bbc79Two(void) {
	DEBUG_WORD("bbc79Two")
}

void bbc79One(void) {
	DEBUG_WORD("bbc79One")
}

void bbc79Null(void) {
	DEBUG_WORD("bbc79Null")
}

void bbc79MinusOne(void) {
	DEBUG_WORD("bbc79MinusOne")
}

void bbc79MinusTwo(void) {
	DEBUG_WORD("bbc79MinusTwo")
}

void bbc79User(void) {
	DEBUG_WORD("bbc79User")
}

void bbc79Variable(void) {
	DEBUG_WORD("bbc79Variable")
}

void bbc79Constant(void) {
	DEBUG_WORD("bbc79Constant")
}

void bbc79RSemicolon(void) {
	DEBUG_WORD("bbc79RSemicolon")
}

void bbc79RColon(void) {
	DEBUG_WORD("bbc79RColon")
}

void bbc79Toggle(void) {
	DEBUG_WORD("bbc79Toggle")
}

void bbc79PlusStore(void) {
	DEBUG_WORD("bbc79PlusStore")
}

void bbc79Store(void) {
	if (forthTasks[forthState.forthCurrentTask].dataStackIndex >= 2) {
		CELL_INTEGER* address = (CELL_INTEGER*)forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex];
		*address = (CELL_INTEGER)forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex];
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_EMPTY;
	};
	DEBUG_WORD("bbc79Store")
}

void bbc79CStore(void) {
	if (forthTasks[forthState.forthCurrentTask].dataStackIndex >= 2) {
		char* address = (char*)forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex];
		*address = (char)forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex];
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_EMPTY;
	};
	DEBUG_WORD("bbc79CStore")
}

void bbc79Fetch(void) {
	if (forthTasks[forthState.forthCurrentTask].dataStackIndex) {
		CELL_INTEGER* address = (CELL_INTEGER*)forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex];
		forthTasks[forthState.forthCurrentTask].dataStackSpace[forthTasks[forthState.forthCurrentTask].dataStackIndex++] = *address;
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_EMPTY;
	};

	DEBUG_WORD("bbc79Fetch")
}

void bbc79CFetch(void) {
	if (forthTasks[forthState.forthCurrentTask].dataStackIndex >= 2) {
		char* address = (char*)forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex];
		forthTasks[forthState.forthCurrentTask].dataStackSpace[forthTasks[forthState.forthCurrentTask].dataStackIndex++] = (CELL_INTEGER)*address;
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_EMPTY;
	};
	DEBUG_WORD("bbc79CFetch")
}

void bbc79QFile(void) {
	DEBUG_WORD("bbc79QFile")
}

void bbc79Himem(void) {
	DEBUG_WORD("bbc79Himem")
}

void bbc79Page(void) {
	DEBUG_WORD("bbc79Page")
}

void bbc79Traverse(void) {
	DEBUG_WORD("bbc79Traverse")
}

void bbc79Rot(void) {
	DEBUG_WORD("bbc79Rot")
}

void bbc79TwentyVer(void) {
	DEBUG_WORD("bbc79TwentyVer")
}

void bbc79Over(void) {
	DEBUG_WORD("bbc79Over")
}

void bbc79TwoSwap(void) {
	DEBUG_WORD("bbc79TwoSwap")
}

void bbc79Swap(void) {
	DEBUG_WORD("bbc79Swap")
}

void bbc79TwoDup(void) {
	DEBUG_WORD("bbc79TwoDup")
}

void bbc79QDup(void) {
	DEBUG_WORD("bbc79QDup")
}

void bbc79Dup(void) {
	DEBUG_WORD("bbc79Dup")
}

void bbc79TwoDrop(void) {
	DEBUG_WORD("bbc79TwoDrop")
}

void bbc79Drop(void) {
	DEBUG_WORD("bbc79Drop")
}

void bbc79DNegate(void) {
	DEBUG_WORD("bbc79DNegate")
}

void bbc79Negate(void) {
	DEBUG_WORD("bbc79Negate")
}

#ifdef DPINTEGER_SUPPORT
void bbc79DPlus(void) {
	DEBUG_WORD("bbc79DPlus")
}
#endif

void bbc79Plus(void) {
	if (forthTasks[forthState.forthCurrentTask].dataStackIndex >= 2) {
		CELL_INTEGER value =
			forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex] +
			forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex];
		forthTasks[forthState.forthCurrentTask].dataStackSpace[forthTasks[forthState.forthCurrentTask].dataStackIndex++] = value;
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_EMPTY;
	};
	DEBUG_WORD("bbc79Plus")
}

#ifdef DPINTEGER_SUPPORT
void bbc79DLess(void) {
	DEBUG_WORD("bbc79DLess")
}
#endif

void bbc79Less(void) {
	DEBUG_WORD("bbc79Less")
}

void bbc79ZeroLess(void) {
	DEBUG_WORD("bbc79ZeroLess")
}

void bbc79ZeroEqual(void) {
	DEBUG_WORD("bbc79ZeroEqual")
}

void bbc79Leave(void) {
	DEBUG_WORD("bbc79Leave")
}

void bbc79SwapBytes(void) {
	DEBUG_WORD("bbc79SwapBytes")
}

void bbc79RFrom(void) {
	DEBUG_WORD("bbc79RFrom")
}

void bbc79ToR(void) {
	DEBUG_WORD("bbc79ToR")
}

void bbc79RFetch(void) {
	int returnStackIndex = forthTasks[forthState.forthCurrentTask].returnStackIndex;
	int dataStackIndex = forthTasks[forthState.forthCurrentTask].dataStackIndex;

	if (returnStackIndex && (dataStackIndex < MAX_DATASTACK - 1)) {
		forthTasks[forthState.forthCurrentTask].dataStackSpace[dataStackIndex] = (CELL_INTEGER)
			forthTasks[forthState.forthCurrentTask].returnStackSpace[returnStackIndex];
	}
	else {
		/* ERROR_DATASTACK_FULL is not handled :-( */
		/* TBD: Error handler should be able to handle more than 1 error */
		//forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_FULL;
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_RETURNSTACK_EMPTY;
	};

	DEBUG_WORD("bbc79RFetch")
}

void bbc79Exit(void) {
	DEBUG_WORD("bbc79Exit")
}

void bbc79Key(void) {
	DEBUG_WORD("bbc79Key")
}

void bbc79ZKey(void) {
	DEBUG_WORD("bbc79ZKey")
}

void bbc79QKey(void) {
	DEBUG_WORD("bbc79QKey")
}

void bbc79Xor(void) {
	DEBUG_WORD("bbc79Xor")
}

void bbc79Or(void) {
	DEBUG_WORD("bbc79Or")
}

void bbc79And(void) {
	DEBUG_WORD("bbc79And")
}

void bbc79USlash(void) {
	DEBUG_WORD("bbc79USlash")
}

void bbc79UStar(void) {
	DEBUG_WORD("bbc79UStar")
}

void bbc79CMove(void) {
	DEBUG_WORD("bbc79CMove")
}

void bbc79ToVDU(void) {
	DEBUG_WORD("bbc79ToVDU")
}

void bbc79Emit(void) {
	DEBUG_WORD("bbc79Emit")
}

void bbc79ZEmit(void) {
	DEBUG_WORD("bbc79ZEmit")
}

void bbc79RPStore(void) {
	DEBUG_WORD("bbc79RPStore")
}

void bbc79SPStore(void) {
	DEBUG_WORD("bbc79SPStore")
}

void bbc79RPFetch(void) {
	DEBUG_WORD("bbc79RPFetch")
}

void bbc79SPFetch(void) {
	DEBUG_WORD("bbc79SPFetch")
}

void bbc79Enclose(void) {
	DEBUG_WORD("bbc79Enclose")
}

void bbc79ZFind(void) {
	DEBUG_WORD("bbc79ZFind")
}

void bbc79Digit(void) {
	DEBUG_WORD("bbc79Digit")
}

void bbc79ModeAddr(void) {
	DEBUG_WORD("bbc79ModeAddr")
}

void bbc79HIAddr(void) {
	DEBUG_WORD("bbc79HIAddr")
}

void bbc79ZDO(void) {
	DEBUG_WORD("bbc79ZDO")
}

void bbc79I(void) {
	DEBUG_WORD("bbc79I")
}

void bbc79ZULoop(void) {
	DEBUG_WORD("bbc79ZULoop")
}

void bbc79ZPlusLoop(void) {
	DEBUG_WORD("bbc79ZPlusLoop")
}

void bbc79ZLoop(void) {
	DEBUG_WORD("bbc79ZLoop")
}

void bbc79ZeroBranch(void) {
	DEBUG_WORD("bbc79ZeroBranch")
}

void bbc79Branch(void) {
	DEBUG_WORD("bbc79Branch")
}

void bbc79FetchExecute(void) {
	DEBUG_WORD("bbc79FetchExecute")
}

void bbc79Execute(void) {
	DEBUG_WORD("bbc79Execute")
}

void bbc79Lit(void) {
	DEBUG_WORD("bbc79Lit")
}

#endif
