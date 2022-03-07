#ifndef H2OBBC2
#define H2OBBC2

/* The official "Arconsoft BBC Micro" ( FORTH79 ) FORTH */

/* Primitives */

void bbc79DollarMSG(void) {
	SMSG_DEBUG("bbc79DollarMSG")
}

void bbc79Plot(void) {
	SMSG_DEBUG("bbc79Plot")
}

void bbc79MoveBuffers(void) {
	SMSG_DEBUG("bbc79MoveBuffers")
}

void bbc79FromCMove(void) {
	SMSG_DEBUG("bbc79FromCMove")
}

void bbc79Where(void) {
	SMSG_DEBUG("bbc79Where")
}

void bbc79Line(void) {
	SMSG_DEBUG("bbc79Line")
}

void bbc79Text(void) {
	SMSG_DEBUG("bbc79Text")
}

void bbc79More(void) {
	SMSG_DEBUG("bbc79More")
}

void bbc79Another(void) {
	SMSG_DEBUG("bbc79Another")
}

void bbc79Program(void) {
	SMSG_DEBUG("bbc79Program")
}

void bbc79ClrScr(void) {
	SMSG_DEBUG("bbc79ClrScr")
}

void bbc79Save(void) {
	SMSG_DEBUG("bbc79Save")
}

void bbc79Locate(void) {
	SMSG_DEBUG("bbc79Locate")
}

void bbc79Editor(void) {
	SMSG_DEBUG("bbc79Editor")
}

void bbc79Code(void) {
	SMSG_DEBUG("bbc79Code")
}

void bbc79QCurrent(void) {
	SMSG_DEBUG("bbc79QCurrent")
}

void bbc79Assembler(void) {
	SMSG_DEBUG("bbc79Assembler")
}

void bbc79Triad(void) {
	SMSG_DEBUG("bbc79Triad")
}

void bbc79Index(void) {
	SMSG_DEBUG("bbc79Index")
}

void bbc79SnineStandard(void) {
	SMSG_DEBUG("bbc79SnineStandard")
}

void bbc79List(void) {
	SMSG_DEBUG("bbc79List")
}

void bbc79CreateScreens(void) {
	SMSG_DEBUG("bbc79CreateScreens")
}

void bbc79Tape(void) {
	SMSG_DEBUG("bbc79Tape")
}

void bbc79QRSlashW(void) {
	SMSG_DEBUG("bbc79QRSlashW")
}

void bbc79TRSlashW(void) {
	SMSG_DEBUG("bbc79TRSlashW")
}

void bbc79TW(void) {
	SMSG_DEBUG("bbc79TW")
}

void bbc79TR(void) {
	SMSG_DEBUG("bbc79TR")
}

void bbc79FourHEX(void) {
	SMSG_DEBUG("bbc79FourHEX")
}

void bbc79SSTo(void) {
	SMSG_DEBUG("bbc79SSTo")
}

void bbc79Flush(void) {
	SMSG_DEBUG("bbc79Flush")
}

void bbc79SaveBuffers(void) {
	SMSG_DEBUG("bbc79SaveBuffers")
}

void bbc79Disk(void) {
	SMSG_DEBUG("bbc79Disk")
}

void bbc79ZDisk(void) {
	SMSG_DEBUG("bbc79ZDisk")
}

void bbc79Load(void) {
	SMSG_DEBUG("bbc79Load")
}

void bbc79Block(void) {
	SMSG_DEBUG("bbc79Block")
}

void bbc79Buffer(void) {
	SMSG_DEBUG("bbc79Buffer")
}

void bbc79Update(void) {
	SMSG_DEBUG("bbc79Update")
}

void bbc79ZUpdate(void) {
	SMSG_DEBUG("bbc79ZUpdate")
}

void bbc79PlusBuf(void) {
	SMSG_DEBUG("bbc79PlusBuf")
}

void bbc79InitBuf(void) {
	SMSG_DEBUG("bbc79InitBuf")
}

void bbc79SetBuf(void) {
	SMSG_DEBUG("bbc79SetBuf")
}

void bbc79EmptyBuffers(void) {
	SMSG_DEBUG("bbc79EmptyBuffers")
}

void bbc79NumBuf(void) {
	SMSG_DEBUG("bbc79NumBuf")
}

void bbc79Prev(void) {
	SMSG_DEBUG("bbc79Prev")
}

void bbc79Use(void) {
	SMSG_DEBUG("bbc79Use")
}

void bbc79BufSZ(void) {
	SMSG_DEBUG("bbc79BufSZ")
}

void bbc79MinBUF(void) {
	SMSG_DEBUG("bbc79MinBUF")
}

void bbc79RSlashW(void) {
	SMSG_DEBUG("bbc79RSlashW")
}

void bbc79DRSlashW(void) {
	SMSG_DEBUG("bbc79DRSlashW")
}

void bbc79Open(void) {
	SMSG_DEBUG("bbc79Open")
}

void bbc79FName(void) {
	SMSG_DEBUG("bbc79FName")
}

void bbc79Channel(void) {
	SMSG_DEBUG("bbc79Channel")
}

void bbc79MaxFiles(void) {
	SMSG_DEBUG("bbc79MaxFiles")
}

void bbc79SSlashFile(void) {
	SMSG_DEBUG("bbc79SSlashFile")
}

void bbc79ZRSlashW(void) {
	SMSG_DEBUG("bbc79ZRSlashW")
}

void bbc79Close(void) {
	SMSG_DEBUG("bbc79Close")
}

void bbc79ZOpen(void) {
	SMSG_DEBUG("bbc79ZOpen")
}

void bbc79KeyTick(void) {
	SMSG_DEBUG("bbc79KeyTick")
}

void bbc79OSTick(void) {
	SMSG_DEBUG("bbc79OSTick")
}

void bbc79ToCLI(void) {
	SMSG_DEBUG("bbc79ToCLI")
}

void bbc79ZCLI(void) {
	SMSG_DEBUG("bbc79ZCLI")
}

void bbc79ZDollarPlus(void) {
	SMSG_DEBUG("bbc79ZDollarPlus")
}

void bbc79String(void) {
	SMSG_DEBUG("bbc79String")
}

void bbc79OSCLI(void) {
	SMSG_DEBUG("bbc79OSCLI")
}

void bbc79Roll(void) {
	SMSG_DEBUG("bbc79Roll")
}

void bbc79Pick(void) {
	SMSG_DEBUG("bbc79Pick")
}

void bbc79DotS(void) {
	int ii = 0;
	int dataStackIndex = forthTasks[forthState.forthCurrentTask].dataStackIndex;
	int nn; /* < 32 */
	if (dataStackIndex) {
		privateSetBaseFormat();
		nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, "[%d] ", dataStackIndex);
		FPUTS_OUT(forthTasks[forthState.forthCurrentTask].printBuffer);
		for (ii = 0; ii < dataStackIndex; ii++) {
			CELL_INTEGER value = forthTasks[forthState.forthCurrentTask].dataStackSpace[ii];
			char* value2;
			if (forthTasks[forthState.forthCurrentTask].baseFormat == BASE_FORMAT_EMPTY) {
				value2 = privateBaseConversion(forthTasks[forthState.forthCurrentTask].forthBase, value);
				nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer,
					forthTasks[forthState.forthCurrentTask].baseFormat, value2);
				FPUTS_OUT(forthTasks[forthState.forthCurrentTask].printBuffer);
			}
			else {
				nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer,
					forthTasks[forthState.forthCurrentTask].baseFormat, value);
				FPUTS_OUT(forthTasks[forthState.forthCurrentTask].printBuffer);
			};
			PUTCHAR(CHAR_SPACE);
		};
		PUTCHAR(CHAR_CR);
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_EMPTY;
		// forthTasks[forthState.forthCurrentTask].messageNumber = MESSAGE_DATASTACK_EMPTY;
	};
	SMSG_DEBUG("bbc79DotS")
}

void bbc79Depth(void) {
	SMSG_DEBUG("bbc79Depth")
}

void bbc79Forget(void) {
	SMSG_DEBUG("bbc79Forget")
}

void bbc79Prune(void) {
	SMSG_DEBUG("bbc79Prune")
}

void bbc79InitVecs(void) {
	SMSG_DEBUG("bbc79InitVecs")
}

void bbc79ToDo(void) {
	SMSG_DEBUG("bbc79ToDo")
}

void bbc79DoVec(void) {
	SMSG_DEBUG("bbc79DoVec")
}

void bbc79Assign(void) {
	SMSG_DEBUG("bbc79Assign")
}

void bbc79ExVec(void) {
	SMSG_DEBUG("bbc79ExVec")
}

void bbc79Novec(void) {
	SMSG_DEBUG("bbc79Novec")
}

void bbc79Vlist(void) {
	SMSG_DEBUG("bbc79Vlist")
}

void bbc79Tick(void) {
	SMSG_DEBUG("bbc79Tick")
}

void bbc79Repeat(void) {
	SMSG_DEBUG("bbc79Repeat")
}

void bbc79While(void) {
	SMSG_DEBUG("bbc79While")
}

void bbc79Again(void) {
	SMSG_DEBUG("bbc79Again")
}

void bbc79Until(void) {
	SMSG_DEBUG("bbc79Until")
}

void bbc79Begin(void) {
	SMSG_DEBUG("bbc79Begin")
}

void bbc79Else(void) {
	SMSG_DEBUG("bbc79Else")
}

void bbc79Then(void) {
	SMSG_DEBUG("bbc79Then")
}

void bbc79If(void) {
	SMSG_DEBUG("bbc79If")
}

void bbc79PlusLoop(void) {
	SMSG_DEBUG("bbc79PlusLoop")
}

void bbc79Loop(void) {
	SMSG_DEBUG("bbc79Loop")
}

void bbc79Do(void) {
	SMSG_DEBUG("bbc79Do")
}

void bbc79Back(void) {
	SMSG_DEBUG("bbc79Back")
}

void bbc79J(void) {
	SMSG_DEBUG("bbc79J")
}

void bbc79TwoSlash(void) {
	SMSG_DEBUG("bbc79TwoSlash")
}

void bbc79TwoStar(void) {
	SMSG_DEBUG("bbc79TwoStar")
}

void bbc79Message(void) {
	SMSG_DEBUG("bbc79Message")
}

void bbc79MSGNum(void) {
	SMSG_DEBUG("bbc79MSGNum")
}

/* Display in hexadecimal base in the format of <.> */
void bbc79HDot(void) {
	commonHexDot();
	SMSG_DEBUG("bbc79HDot")
}

/* Display in decimal base in the format of <.> */
void bbc79DecDot(void) {
	int nn; /* < 32 */
	if (forthTasks[forthState.forthCurrentTask].dataStackIndex) {
		if (sizeof(CELL_INTEGER) == CELLSIZE8) {
			nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, "%lld ",
				forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex]);
			FPUTS_OUT(forthTasks[forthState.forthCurrentTask].printBuffer);
		}
		else {
			nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, "%d ",
				forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex]);
			FPUTS_OUT(forthTasks[forthState.forthCurrentTask].printBuffer);
		}
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_EMPTY;
	};
	SMSG_DEBUG("bbc79DecDot")
}

void bbc79Q(void) {
	SMSG_DEBUG("bbc79Q")
}

void bbc79UDot(void) {
	SMSG_DEBUG("bbc79UDot")
}

void bbc79Dot(void) {
	int nn; /* < 32 */
	if (forthTasks[forthState.forthCurrentTask].dataStackIndex) {
		CELL_INTEGER value =
			forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex];
		char* value2;
		privateSetBaseFormat();
		if (forthTasks[forthState.forthCurrentTask].baseFormat == BASE_FORMAT_EMPTY) {
			value2 = privateBaseConversion(forthTasks[forthState.forthCurrentTask].forthBase, value);
			nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer,
				forthTasks[forthState.forthCurrentTask].baseFormat, value2);
			FPUTS_OUT(forthTasks[forthState.forthCurrentTask].printBuffer);
		}
		else {
			nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer,
				forthTasks[forthState.forthCurrentTask].baseFormat, value);
			FPUTS_OUT(forthTasks[forthState.forthCurrentTask].printBuffer);
		};
		putchar(CHAR_SPACE);
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_EMPTY;
	};
	SMSG_DEBUG("bbc79Dot")
}

void bbc79DotR(void) {
	SMSG_DEBUG("bbc79DotR")
}

#ifdef DPINTEGER_SUPPORT
void bbc79DDot(void) {
	int nn; /* < 32 */
	if (forthTasks[forthState.forthCurrentTask].dataStackIndex >= 2) {
		LONG_LONG value = 0;
		privateSetBaseLFormat();
		value = (LONG_LONG)(forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex])
			<< (sizeof(forthTasks[forthState.forthCurrentTask].dataStackSpace[0]) * 4);
		nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer,
			forthTasks[forthState.forthCurrentTask].baseFormat, value +
			forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex]);
		FPUTS_OUT(forthTasks[forthState.forthCurrentTask].printBuffer);
		PUTCHAR(CHAR_SPACE);
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_EMPTY;
	};
	SMSG_DEBUG("bbc79DDot")
}
#endif

#ifdef DPINTEGER_SUPPORT
void bbc79DDotRDot(void) {
	int nn; /* < 32 */
	if (forthTasks[forthState.forthCurrentTask].returnStackIndex >= 2) {
		privateSetBaseLFormat();
		nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, forthTasks[forthState.forthCurrentTask].baseFormat,
			((LONG_LONG)(forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex])
				<< sizeof(LONG_LONG)) +
			forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex]);
		FPUTS_OUT(forthTasks[forthState.forthCurrentTask].printBuffer);
		PUTCHAR(CHAR_CR);
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_RETURNSTACK_EMPTY;
	};
	SMSG_DEBUG("bbc79DDotRDot")
}
#endif

void bbc79NumS(void) {
	SMSG_DEBUG("bbc79NumS")
}

void bbc79Num(void) {
	SMSG_DEBUG("bbc79Num")
}

void bbc79Sign(void) {
	SMSG_DEBUG("bbc79Sign")
}

void bbc79NumGreater(void) {
	SMSG_DEBUG("bbc79NumGreater")
}

void bbc79LessNum(void) {
	SMSG_DEBUG("bbc79LessNum")
}

void bbc79Spaces(void) {
	SMSG_DEBUG("bbc79Spaces")
}

void bbc79MSlashMod(void) {
	SMSG_DEBUG("bbc79MSlashMod")
}

void bbc79StarSlash(void) {
	SMSG_DEBUG("bbc79StarSlash")
}

void bbc79StarSlashMod(void) {
	SMSG_DEBUG("bbc79StarSlashMod")
}

void bbc79Mod(void) {
	SMSG_DEBUG("bbc79Mod")
}

void bbc79Slash(void) {
	SMSG_DEBUG("bbc79Slash")
}

void bbc79SlashMod(void) {
	SMSG_DEBUG("bbc79SlashMod")
}

void bbc79Star(void) {
	SMSG_DEBUG("bbc79Star")
}

void bbc79MSlash(void) {
	SMSG_DEBUG("bbc79MSlash")
}

void bbc79MAbs(void) {
	SMSG_DEBUG("bbc79MAbs")
}

#ifdef DPINTEGER_SUPPORT
void bbc79DPlusMinus(void) {
	SMSG_DEBUG("bbc79DPlusMinus")
}
#endif

void bbc79PlusMinus(void) {
	SMSG_DEBUG("bbc79PlusMinus")
}

#ifdef DPINTEGER_SUPPORT
void bbc79SToD(void) {
	SMSG_DEBUG("bbc79SToD")
}
#endif

void bbc79Warm(void) {
	SMSG_DEBUG("bbc79Warm")
}

void bbc79Cold(void) {
	SMSG_DEBUG("bbc79Cold")
}

void bbc79Start(void) {
	SMSG_DEBUG("bbc79Start")
}

void bbc79Mode(void) {
	SMSG_DEBUG("bbc79Mode")
}

void bbc79OSError(void) {
	SMSG_DEBUG("bbc79OSError")
}

void bbc79Escape(void) {
	SMSG_DEBUG("bbc79Escape")
}

void bbc79Abort(void) {
	SMSG_DEBUG("bbc79Abort")
}

void bbc79ZAbort(void) {
	SMSG_DEBUG("bbc79ZAbort")
}

void bbc79ZWarm(void) {
	SMSG_DEBUG("bbc79ZWarm")
}

void bbc79Definitions(void) {
	SMSG_DEBUG("bbc79Definitions")
}

void bbc79Quit(void) {
	SMSG_DEBUG("bbc79Quit")
}

void bbc79Forth(void) {
	SMSG_DEBUG("bbc79Forth")
}

void bbc79Vocabulary(void) {
	SMSG_DEBUG("bbc79Vocabulary")
}

void bbc79Interpret(void) {
	SMSG_DEBUG("bbc79Interpret")
}

void bbc79NumericInterpret(void) {
	SMSG_DEBUG("bbc79NumericInterpret")
}

void bbc79ZNumericInterpret(void) {
	SMSG_DEBUG("bbc79ZNumericInterpret")
}

void bbc79Paren(void) {
	SMSG_DEBUG("bbc79Paren")
}

void bbc79Number(void) {
	SMSG_DEBUG("bbc79Number")
}

void bbc79Semicolon(void) {
	SMSG_DEBUG("bbc79Semicolon")
}

void bbc79Colon(void) {
	SMSG_DEBUG("bbc79Colon")
}

void bbc79QStack(void) {
	SMSG_DEBUG("bbc79QStack")
}

void bbc79Dliteral(void) {
	SMSG_DEBUG("bbc79Dliteral")
}

void bbc79Literal(void) {
	SMSG_DEBUG("bbc79Literal")
}

void bbc79ZCompile(void) {
	SMSG_DEBUG("bbc79Literal")
}

void bbc79Create(void) {
	SMSG_DEBUG("bbc79Create")
}

void bbc79ZCreate(void) {
	SMSG_DEBUG("bbc79ZCreate")
}

void bbc79IDDot(void) {
	SMSG_DEBUG("bbc79IDDot")
}

void bbc79Error(void) {
	int nn; /* < 32 */
	if (forthTasks[forthState.forthCurrentTask].dataStackIndex) {
		int errorNumber = forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex];
		/* Originally, two spaces between "ERROR" and "?" */
		nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, "ERROR  ? %s",
			forthTasks[forthState.forthCurrentTask].forthErrors[errorNumber].messageText);
		FPUTS_OUT(forthTasks[forthState.forthCurrentTask].printBuffer);
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_EMPTY;
	};
	SMSG_DEBUG("bbc79Error")
}

void bbc79Find(void) {
	SMSG_DEBUG("bbc79Find")
}

void bbc79MinusFind(void) {
	SMSG_DEBUG("bbc79MinusFind")
}

void bbc79Convert(void) {
	SMSG_DEBUG("bbc79Convert")
}

void bbc79Word(void) {
	SMSG_DEBUG("bbc79Word")
}

void bbc79OneWord(void) {
	SMSG_DEBUG("bbc79OneWord")
}

void bbc79WBFR(void) {
	SMSG_DEBUG("bbc79WBFR")
}

void bbc79WDSZ(void) {
	SMSG_DEBUG("bbc79WDSZ")
}

void bbc79ZWord(void) {
	SMSG_DEBUG("bbc79ZWord")
}

void bbc79Hold(void) {
	SMSG_DEBUG("bbc79Hold")
}

void bbc79Blanks(void) {
	SMSG_DEBUG("bbc79Blanks")
}

void bbc79Erase(void) {
	SMSG_DEBUG("bbc79Erase")
}

void bbc79Fill(void) {
	SMSG_DEBUG("bbc79Fill")
}

void bbc79Move(void) {
	SMSG_DEBUG("bbc79Move")
}

void bbc79Query(void) {
	SMSG_DEBUG("bbc79Query")
}

void bbc79Expect(void) {
	SMSG_DEBUG("bbc79Expect")
}

void bbc79ZExpect(void) {
	SMSG_DEBUG("bbc79ZExpect")
}

void bbc79DotQuote(void) {
	SMSG_DEBUG("bbc79DotQuote")
}

void bbc79ZDotQuote(void) {
	SMSG_DEBUG("bbc79ZDotQuote")
}

void bbc79TextComma(void) {
	SMSG_DEBUG("bbc79TextComma")
}

void bbc79MinusTrailing(void) {
	SMSG_DEBUG("bbc79MinusTrailing")
}

void bbc79Type(void) {
	SMSG_DEBUG("bbc79Type")
}

void bbc79Count(void) {
	SMSG_DEBUG("bbc79Type")
}

void bbc79ZeroGreater(void) {
	SMSG_DEBUG("bbc79ZeroGreater")
}

void bbc79Does(void) {
	SMSG_DEBUG("bbc79Does")
}

void bbc79SemicolonCode(void) {
	SMSG_DEBUG("bbc79SemicolonCode")
}

void bbc79ZSemicolonCode(void) {
	SMSG_DEBUG("bbc79ZSemicolonCode")
}

void bbc79Decimal(void) {
	forthTasks[forthState.forthCurrentTask].forthBase = DECIMAL;
	forthTasks[forthState.forthCurrentTask].baseFormat = (char*)BASE_FORMAT_DECIMAL;
	SMSG_DEBUG("bbc79Decimal")
}

void bbc79CR(void) {
	SMSG_DEBUG("bbc79CR")
}

void bbc79Hex(void) {
	forthTasks[forthState.forthCurrentTask].forthBase = HEX;
	forthTasks[forthState.forthCurrentTask].baseFormat = (char*)BASE_FORMAT_HEX;
	SMSG_DEBUG("bbc79Hex")
}

void bbc79QTab(void) {
	SMSG_DEBUG("bbc79QTab")
}

void bbc79NoOp(void) {
	SMSG_DEBUG("bbc79NoOp")
}

void bbc79RightBracket(void) {
	SMSG_DEBUG("RightBracket")
}

void bbc79LeftBracket(void) {
	SMSG_DEBUG("LeftBracket")
}

void bbc79Compile(void) {
	SMSG_DEBUG("bbc79Compile")
}

void bbc79Immediate(void) {
	SMSG_DEBUG("bbc79Immediate")
}

void bbc79QLoading(void) {
	SMSG_DEBUG("bbc79QLoading")
}

void bbc79QCSP(void) {
	SMSG_DEBUG("bbc79QCSP")
}

void bbc79QPairs(void) {
	SMSG_DEBUG("bbc79QPairs")
}

void bbc79QExec(void) {
	SMSG_DEBUG("bbc79QExec")
}

void bbc79QComp(void) {
	SMSG_DEBUG("bbc79QComp")
}

void bbc79QError(void) {
	int nn; /* < 32 */
	if (forthTasks[forthState.forthCurrentTask].dataStackIndex >= 2) {
		CELL_INTEGER errorNumber = forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex];
		if (forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex]) {
			forthTasks[forthState.forthCurrentTask].dataStackSpace[forthTasks[forthState.forthCurrentTask].dataStackIndex++] = errorNumber;
#if defined (__DEBUG2__)
			nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer,
				"Error %d %d\n", forthTasks[forthState.forthCurrentTask].dataStackIndex, errorNumber);
			FPUTS_OUT(forthTasks[forthState.forthCurrentTask].printBuffer);
#endif
			/* Call another FORTH word */
			bbc79Error();
		};
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_EMPTY;
	};
	SMSG_DEBUG("bbc79QError")
}

void bbc79StoreCSP(void) {
	SMSG_DEBUG("bbc79StoreCSP")
}

void bbc79Not(void) {
	SMSG_DEBUG("bbc79Not")
}

void bbc79PFA(void) {
	SMSG_DEBUG("bbc79PFA")
}

void bbc79CFA(void) {
	SMSG_DEBUG("bbc79CFA")
}

void bbc79NFA(void) {
	SMSG_DEBUG("bbc79NFA")
}

void bbc79LFA(void) {
	SMSG_DEBUG("bbc79LFA")
}

void bbc79ULess(void) {
	SMSG_DEBUG("bbc79ULess")
}

void bbc79Greater(void) {
	SMSG_DEBUG("bbc79Greater")
}

void bbc79Equal(void) {
	SMSG_DEBUG("bbc79Equal")
}

void bbc79Minus(void) {
	SMSG_DEBUG("bbc79Minus")
}

void bbc79Smudge(void) {
	SMSG_DEBUG("bbc79Smudge")
}

void bbc79Last(void) {
	SMSG_DEBUG("bbc79Last")
}

void bbc79CComma(void) {
	SMSG_DEBUG("bbc79CComma")
}

void bbc79Comma(void) {
	SMSG_DEBUG("bbc79Comma")
}

void bbc79Space(void) {
	SMSG_DEBUG("bbc79Comma")
}

void bbc79Allot(void) {
	SMSG_DEBUG("bbc79Allot")
}

void bbc79Here(void) {
	SMSG_DEBUG("bbc79Here")
}

void bbc79TwoMinus(void) {
	SMSG_DEBUG("bbc79TwoMinus")
}

void bbc79OneMinus(void) {
	SMSG_DEBUG("bbc79OneMinus")
}

void bbc79TwoPlus(void) {
	SMSG_DEBUG("bbc79TwoPlus")
}

void bbc79OnePlus(void) {
	SMSG_DEBUG("bbc79OnePlus")
}

void bbc79HLD(void) {
	SMSG_DEBUG("bbc79HLD")
}

void bbc79RNum(void) {
	SMSG_DEBUG("bbc79RNum")
}

void bbc79CSP(void) {
	SMSG_DEBUG("bbc79CSP")
}

void bbc79DPL(void) {
	SMSG_DEBUG("bbc79DPL")
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
	SMSG_DEBUG("bbc79Base")
}

void bbc79State(void) {
	SMSG_DEBUG("bbc79State")
}

void bbc79Current(void) {
	SMSG_DEBUG("bbc79Current")
}

void bbc79Context(void) {
	SMSG_DEBUG("bbc79Context")
}

void bbc79Offset(void) {
	SMSG_DEBUG("bbc79Offset")
}

void bbc79SCR(void) {
	SMSG_DEBUG("bbc79SCR")
}

void bbc79Out(void) {
	SMSG_DEBUG("bbc79Out")
}

void bbc79ToIn(void) {
	SMSG_DEBUG("bbc79ToIn")
}

void bbc79BLK(void) {
	SMSG_DEBUG("bbc79BLK")
}

void bbc79VocLink(void) {
	SMSG_DEBUG("bbc79VocLink")
}

void bbc79DP(void) {
	SMSG_DEBUG("bbc79DP")
}

void bbc79Fence(void) {
	SMSG_DEBUG("bbc79Fence")
}

void bbc79Warnung(void) {
	SMSG_DEBUG("bbc79Warnung")
}

void bbc79Width(void) {
	SMSG_DEBUG("bbc79Width")
}

void bbc79TIB(void) {
	SMSG_DEBUG("bbc79TIB")
}

void bbc79R0(void) {
	SMSG_DEBUG("bbc79R0")
}

void bbc79S0(void) {
	SMSG_DEBUG("bbc79S0")
}

void bbc79PlusOrigin(void) {
	SMSG_DEBUG("bbc79PlusOrigin")
}

void bbc79BSlashSCR(void) {
	SMSG_DEBUG("bbc79BSlashSCR")
}

void bbc79BSlashBUF(void) {
	SMSG_DEBUG("bbc79BSlashBUF")
}

void bbc79Limit(void) {
	SMSG_DEBUG("bbc79Limit")
}

void bbc79First(void) {
	SMSG_DEBUG("bbc79First")
}

void bbc79PAD(void) {
	SMSG_DEBUG("bbc79PAD")
}

void CSlashL(void) {
	SMSG_DEBUG("CSlashL")
}

void bbc79BL(void) {
	SMSG_DEBUG("bbc79BL")
}

void bbc79Two(void) {
	SMSG_DEBUG("bbc79Two")
}

void bbc79One(void) {
	SMSG_DEBUG("bbc79One")
}

void bbc79Null(void) {
	SMSG_DEBUG("bbc79Null")
}

void bbc79MinusOne(void) {
	SMSG_DEBUG("bbc79MinusOne")
}

void bbc79MinusTwo(void) {
	SMSG_DEBUG("bbc79MinusTwo")
}

void bbc79User(void) {
	SMSG_DEBUG("bbc79User")
}

void bbc79Variable(void) {
	SMSG_DEBUG("bbc79Variable")
}

void bbc79Constant(void) {
	SMSG_DEBUG("bbc79Constant")
}

void bbc79RSemicolon(void) {
	SMSG_DEBUG("bbc79RSemicolon")
}

void bbc79RColon(void) {
	SMSG_DEBUG("bbc79RColon")
}

void bbc79Toggle(void) {
	SMSG_DEBUG("bbc79Toggle")
}

void bbc79PlusStore(void) {
	SMSG_DEBUG("bbc79PlusStore")
}

void bbc79Store(void) {
	if (forthTasks[forthState.forthCurrentTask].dataStackIndex >= 2) {
		CELL_INTEGER* address = (CELL_INTEGER*)forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex];
		*address = (CELL_INTEGER)forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex];
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_EMPTY;
	};
	SMSG_DEBUG("bbc79Store")
}

void bbc79CStore(void) {
	if (forthTasks[forthState.forthCurrentTask].dataStackIndex >= 2) {
		char* address = (char*)forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex];
		*address = (char)forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex];
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_EMPTY;
	};
	SMSG_DEBUG("bbc79CStore")
}

void bbc79Fetch(void) {
	if (forthTasks[forthState.forthCurrentTask].dataStackIndex) {
		CELL_INTEGER* address = (CELL_INTEGER*)forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex];
		forthTasks[forthState.forthCurrentTask].dataStackSpace[forthTasks[forthState.forthCurrentTask].dataStackIndex++] = *address;
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_EMPTY;
	};

	SMSG_DEBUG("bbc79Fetch")
}

void bbc79CFetch(void) {
	if (forthTasks[forthState.forthCurrentTask].dataStackIndex >= 2) {
		char* address = (char*)forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex];
		forthTasks[forthState.forthCurrentTask].dataStackSpace[forthTasks[forthState.forthCurrentTask].dataStackIndex++] = (CELL_INTEGER)*address;
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_EMPTY;
	};
	SMSG_DEBUG("bbc79CFetch")
}

void bbc79QFile(void) {
	SMSG_DEBUG("bbc79QFile")
}

void bbc79Himem(void) {
	SMSG_DEBUG("bbc79Himem")
}

void bbc79Page(void) {
	SMSG_DEBUG("bbc79Page")
}

void bbc79Traverse(void) {
	SMSG_DEBUG("bbc79Traverse")
}

void bbc79Rot(void) {
	SMSG_DEBUG("bbc79Rot")
}

void bbc79TwentyVer(void) {
	SMSG_DEBUG("bbc79TwentyVer")
}

void bbc79Over(void) {
	SMSG_DEBUG("bbc79Over")
}

void bbc79TwoSwap(void) {
	SMSG_DEBUG("bbc79TwoSwap")
}

void bbc79Swap(void) {
	SMSG_DEBUG("bbc79Swap")
}

void bbc79TwoDup(void) {
	SMSG_DEBUG("bbc79TwoDup")
}

void bbc79QDup(void) {
	SMSG_DEBUG("bbc79QDup")
}

void bbc79Dup(void) {
	SMSG_DEBUG("bbc79Dup")
}

void bbc79TwoDrop(void) {
	SMSG_DEBUG("bbc79TwoDrop")
}

void bbc79Drop(void) {
	SMSG_DEBUG("bbc79Drop")
}

void bbc79DNegate(void) {
	SMSG_DEBUG("bbc79DNegate")
}

void bbc79Negate(void) {
	SMSG_DEBUG("bbc79Negate")
}

#ifdef DPINTEGER_SUPPORT
void bbc79DPlus(void) {
	SMSG_DEBUG("bbc79DPlus")
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
	SMSG_DEBUG("bbc79Plus")
}

#ifdef DPINTEGER_SUPPORT
void bbc79DLess(void) {
	SMSG_DEBUG("bbc79DLess")
}
#endif

void bbc79Less(void) {
	SMSG_DEBUG("bbc79Less")
}

void bbc79ZeroLess(void) {
	SMSG_DEBUG("bbc79ZeroLess")
}

void bbc79ZeroEqual(void) {
	SMSG_DEBUG("bbc79ZeroEqual")
}

void bbc79Leave(void) {
	SMSG_DEBUG("bbc79Leave")
}

void bbc79SwapBytes(void) {
	SMSG_DEBUG("bbc79SwapBytes")
}

void bbc79RFrom(void) {
	SMSG_DEBUG("bbc79RFrom")
}

void bbc79ToR(void) {
	SMSG_DEBUG("bbc79ToR")
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

	SMSG_DEBUG("bbc79RFetch")
}

void bbc79Exit(void) {
	SMSG_DEBUG("bbc79Exit")
}

void bbc79Key(void) {
	SMSG_DEBUG("bbc79Key")
}

void bbc79ZKey(void) {
	SMSG_DEBUG("bbc79ZKey")
}

void bbc79QKey(void) {
	SMSG_DEBUG("bbc79QKey")
}

void bbc79Xor(void) {
	SMSG_DEBUG("bbc79Xor")
}

void bbc79Or(void) {
	SMSG_DEBUG("bbc79Or")
}

void bbc79And(void) {
	SMSG_DEBUG("bbc79And")
}

void bbc79USlash(void) {
	SMSG_DEBUG("bbc79USlash")
}

void bbc79UStar(void) {
	SMSG_DEBUG("bbc79UStar")
}

void bbc79CMove(void) {
	SMSG_DEBUG("bbc79CMove")
}

void bbc79ToVDU(void) {
	SMSG_DEBUG("bbc79ToVDU")
}

void bbc79Emit(void) {
	SMSG_DEBUG("bbc79Emit")
}

void bbc79ZEmit(void) {
	SMSG_DEBUG("bbc79ZEmit")
}

void bbc79RPStore(void) {
	SMSG_DEBUG("bbc79RPStore")
}

void bbc79SPStore(void) {
	SMSG_DEBUG("bbc79SPStore")
}

void bbc79RPFetch(void) {
	SMSG_DEBUG("bbc79RPFetch")
}

void bbc79SPFetch(void) {
	SMSG_DEBUG("bbc79SPFetch")
}

void bbc79Enclose(void) {
	SMSG_DEBUG("bbc79Enclose")
}

void bbc79ZFind(void) {
	SMSG_DEBUG("bbc79ZFind")
}

void bbc79Digit(void) {
	SMSG_DEBUG("bbc79Digit")
}

void bbc79ModeAddr(void) {
	SMSG_DEBUG("bbc79ModeAddr")
}

void bbc79HIAddr(void) {
	SMSG_DEBUG("bbc79HIAddr")
}

void bbc79ZDO(void) {
	SMSG_DEBUG("bbc79ZDO")
}

void bbc79I(void) {
	SMSG_DEBUG("bbc79I")
}

void bbc79ZULoop(void) {
	SMSG_DEBUG("bbc79ZULoop")
}

void bbc79ZPlusLoop(void) {
	SMSG_DEBUG("bbc79ZPlusLoop")
}

void bbc79ZLoop(void) {
	SMSG_DEBUG("bbc79ZLoop")
}

void bbc79ZeroBranch(void) {
	SMSG_DEBUG("bbc79ZeroBranch")
}

void bbc79Branch(void) {
	SMSG_DEBUG("bbc79Branch")
}

void bbc79FetchExecute(void) {
	SMSG_DEBUG("bbc79FetchExecute")
}

void bbc79Execute(void) {
	SMSG_DEBUG("bbc79Execute")
}

void bbc79Lit(void) {
	SMSG_DEBUG("bbc79Lit")
}

#endif
