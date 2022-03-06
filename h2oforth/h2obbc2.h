#ifndef H2OBBC2
#define H2OBBC2

/* The official "Arconsoft BBC Micro" ( FORTH79 ) FORTH */

/* Primitives */

void bbc79DollarMSG(void) {
	MESSSAGE_DEBUG("bbc79DollarMSG")
}

void bbc79Plot(void) {
	MESSSAGE_DEBUG("bbc79Plot")
}

void bbc79MoveBuffers(void) {
	MESSSAGE_DEBUG("bbc79MoveBuffers")
}

void bbc79FromCMove(void) {
	MESSSAGE_DEBUG("bbc79FromCMove")
}

void bbc79Where(void) {
	MESSSAGE_DEBUG("bbc79Where")
}

void bbc79Line(void) {
	MESSSAGE_DEBUG("bbc79Line")
}

void bbc79Text(void) {
	MESSSAGE_DEBUG("bbc79Text")
}

void bbc79More(void) {
	MESSSAGE_DEBUG("bbc79More")
}

void bbc79Another(void) {
	MESSSAGE_DEBUG("bbc79Another")
}

void bbc79Program(void) {
	MESSSAGE_DEBUG("bbc79Program")
}

void bbc79ClrScr(void) {
	MESSSAGE_DEBUG("bbc79ClrScr")
}

void bbc79Save(void) {
	MESSSAGE_DEBUG("bbc79Save")
}

void bbc79Locate(void) {
	MESSSAGE_DEBUG("bbc79Locate")
}

void bbc79Editor(void) {
	MESSSAGE_DEBUG("bbc79Editor")
}

void bbc79Code(void) {
	MESSSAGE_DEBUG("bbc79Code")
}

void bbc79QCurrent(void) {
	MESSSAGE_DEBUG("bbc79QCurrent")
}

void bbc79Assembler(void) {
	MESSSAGE_DEBUG("bbc79Assembler")
}

void bbc79Triad(void) {
	MESSSAGE_DEBUG("bbc79Triad")
}

void bbc79Index(void) {
	MESSSAGE_DEBUG("bbc79Index")
}

void bbc79SnineStandard(void) {
	MESSSAGE_DEBUG("bbc79SnineStandard")
}

void bbc79List(void) {
	MESSSAGE_DEBUG("bbc79List")
}

void bbc79CreateScreens(void) {
	MESSSAGE_DEBUG("bbc79CreateScreens")
}

void bbc79Tape(void) {
	MESSSAGE_DEBUG("bbc79Tape")
}

void bbc79QRSlashW(void) {
	MESSSAGE_DEBUG("bbc79QRSlashW")
}

void bbc79TRSlashW(void) {
	MESSSAGE_DEBUG("bbc79TRSlashW")
}

void bbc79TW(void) {
	MESSSAGE_DEBUG("bbc79TW")
}

void bbc79TR(void) {
	MESSSAGE_DEBUG("bbc79TR")
}

void bbc79FourHEX(void) {
	MESSSAGE_DEBUG("bbc79FourHEX")
}

void bbc79SSTo(void) {
	MESSSAGE_DEBUG("bbc79SSTo")
}

void bbc79Flush(void) {
	MESSSAGE_DEBUG("bbc79Flush")
}

void bbc79SaveBuffers(void) {
	MESSSAGE_DEBUG("bbc79SaveBuffers")
}

void bbc79Disk(void) {
	MESSSAGE_DEBUG("bbc79Disk")
}

void bbc79ZDisk(void) {
	MESSSAGE_DEBUG("bbc79ZDisk")
}

void bbc79Load(void) {
	MESSSAGE_DEBUG("bbc79Load")
}

void bbc79Block(void) {
	MESSSAGE_DEBUG("bbc79Block")
}

void bbc79Buffer(void) {
	MESSSAGE_DEBUG("bbc79Buffer")
}

void bbc79Update(void) {
	MESSSAGE_DEBUG("bbc79Update")
}

void bbc79ZUpdate(void) {
	MESSSAGE_DEBUG("bbc79ZUpdate")
}

void bbc79PlusBuf(void) {
	MESSSAGE_DEBUG("bbc79PlusBuf")
}

void bbc79InitBuf(void) {
	MESSSAGE_DEBUG("bbc79InitBuf")
}

void bbc79SetBuf(void) {
	MESSSAGE_DEBUG("bbc79SetBuf")
}

void bbc79EmptyBuffers(void) {
	MESSSAGE_DEBUG("bbc79EmptyBuffers")
}

void bbc79NumBuf(void) {
	MESSSAGE_DEBUG("bbc79NumBuf")
}

void bbc79Prev(void) {
	MESSSAGE_DEBUG("bbc79Prev")
}

void bbc79Use(void) {
	MESSSAGE_DEBUG("bbc79Use")
}

void bbc79BufSZ(void) {
	MESSSAGE_DEBUG("bbc79BufSZ")
}

void bbc79MinBUF(void) {
	MESSSAGE_DEBUG("bbc79MinBUF")
}

void bbc79RSlashW(void) {
	MESSSAGE_DEBUG("bbc79RSlashW")
}

void bbc79DRSlashW(void) {
	MESSSAGE_DEBUG("bbc79DRSlashW")
}

void bbc79Open(void) {
	MESSSAGE_DEBUG("bbc79Open")
}

void bbc79FName(void) {
	MESSSAGE_DEBUG("bbc79FName")
}

void bbc79Channel(void) {
	MESSSAGE_DEBUG("bbc79Channel")
}

void bbc79MaxFiles(void) {
	MESSSAGE_DEBUG("bbc79MaxFiles")
}

void bbc79SSlashFile(void) {
	MESSSAGE_DEBUG("bbc79SSlashFile")
}

void bbc79ZRSlashW(void) {
	MESSSAGE_DEBUG("bbc79ZRSlashW")
}

void bbc79Close(void) {
	MESSSAGE_DEBUG("bbc79Close")
}

void bbc79ZOpen(void) {
	MESSSAGE_DEBUG("bbc79ZOpen")
}

void bbc79KeyTick(void) {
	MESSSAGE_DEBUG("bbc79KeyTick")
}

void bbc79OSTick(void) {
	MESSSAGE_DEBUG("bbc79OSTick")
}

void bbc79ToCLI(void) {
	MESSSAGE_DEBUG("bbc79ToCLI")
}

void bbc79ZCLI(void) {
	MESSSAGE_DEBUG("bbc79ZCLI")
}

void bbc79ZDollarPlus(void) {
	MESSSAGE_DEBUG("bbc79ZDollarPlus")
}

void bbc79String(void) {
	MESSSAGE_DEBUG("bbc79String")
}

void bbc79OSCLI(void) {
	MESSSAGE_DEBUG("bbc79OSCLI")
}

void bbc79Roll(void) {
	MESSSAGE_DEBUG("bbc79Roll")
}

void bbc79Pick(void) {
	MESSSAGE_DEBUG("bbc79Pick")
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
	MESSSAGE_DEBUG("bbc79DotS")
}

void bbc79Depth(void) {
	MESSSAGE_DEBUG("bbc79Depth")
}

void bbc79Forget(void) {
	MESSSAGE_DEBUG("bbc79Forget")
}

void bbc79Prune(void) {
	MESSSAGE_DEBUG("bbc79Prune")
}

void bbc79InitVecs(void) {
	MESSSAGE_DEBUG("bbc79InitVecs")
}

void bbc79ToDo(void) {
	MESSSAGE_DEBUG("bbc79ToDo")
}

void bbc79DoVec(void) {
	MESSSAGE_DEBUG("bbc79DoVec")
}

void bbc79Assign(void) {
	MESSSAGE_DEBUG("bbc79Assign")
}

void bbc79ExVec(void) {
	MESSSAGE_DEBUG("bbc79ExVec")
}

void bbc79Novec(void) {
	MESSSAGE_DEBUG("bbc79Novec")
}

void bbc79Vlist(void) {
	MESSSAGE_DEBUG("bbc79Vlist")
}

void bbc79Tick(void) {
	MESSSAGE_DEBUG("bbc79Tick")
}

void bbc79Repeat(void) {
	MESSSAGE_DEBUG("bbc79Repeat")
}

void bbc79While(void) {
	MESSSAGE_DEBUG("bbc79While")
}

void bbc79Again(void) {
	MESSSAGE_DEBUG("bbc79Again")
}

void bbc79Until(void) {
	MESSSAGE_DEBUG("bbc79Until")
}

void bbc79Begin(void) {
	MESSSAGE_DEBUG("bbc79Begin")
}

void bbc79Else(void) {
	MESSSAGE_DEBUG("bbc79Else")
}

void bbc79Then(void) {
	MESSSAGE_DEBUG("bbc79Then")
}

void bbc79If(void) {
	MESSSAGE_DEBUG("bbc79If")
}

void bbc79PlusLoop(void) {
	MESSSAGE_DEBUG("bbc79PlusLoop")
}

void bbc79Loop(void) {
	MESSSAGE_DEBUG("bbc79Loop")
}

void bbc79Do(void) {
	MESSSAGE_DEBUG("bbc79Do")
}

void bbc79Back(void) {
	MESSSAGE_DEBUG("bbc79Back")
}

void bbc79J(void) {
	MESSSAGE_DEBUG("bbc79J")
}

void bbc79TwoSlash(void) {
	MESSSAGE_DEBUG("bbc79TwoSlash")
}

void bbc79TwoStar(void) {
	MESSSAGE_DEBUG("bbc79TwoStar")
}

void bbc79Message(void) {
	MESSSAGE_DEBUG("bbc79Message")
}

void bbc79MSGNum(void) {
	MESSSAGE_DEBUG("bbc79MSGNum")
}

/* Display in hexadecimal base in the format of <.> */
void bbc79HDot(void) {
	commonHexDot();
	MESSSAGE_DEBUG("bbc79HDot")
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
	MESSSAGE_DEBUG("bbc79DecDot")
}

void bbc79Q(void) {
	MESSSAGE_DEBUG("bbc79Q")
}

void bbc79UDot(void) {
	MESSSAGE_DEBUG("bbc79UDot")
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
	MESSSAGE_DEBUG("bbc79Dot")
}

void bbc79DotR(void) {
	MESSSAGE_DEBUG("bbc79DotR")
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
	MESSSAGE_DEBUG("bbc79DDot")
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
	MESSSAGE_DEBUG("bbc79DDotRDot")
}
#endif

void bbc79NumS(void) {
	MESSSAGE_DEBUG("bbc79NumS")
}

void bbc79Num(void) {
	MESSSAGE_DEBUG("bbc79Num")
}

void bbc79Sign(void) {
	MESSSAGE_DEBUG("bbc79Sign")
}

void bbc79NumGreater(void) {
	MESSSAGE_DEBUG("bbc79NumGreater")
}

void bbc79LessNum(void) {
	MESSSAGE_DEBUG("bbc79LessNum")
}

void bbc79Spaces(void) {
	MESSSAGE_DEBUG("bbc79Spaces")
}

void bbc79MSlashMod(void) {
	MESSSAGE_DEBUG("bbc79MSlashMod")
}

void bbc79StarSlash(void) {
	MESSSAGE_DEBUG("bbc79StarSlash")
}

void bbc79StarSlashMod(void) {
	MESSSAGE_DEBUG("bbc79StarSlashMod")
}

void bbc79Mod(void) {
	MESSSAGE_DEBUG("bbc79Mod")
}

void bbc79Slash(void) {
	MESSSAGE_DEBUG("bbc79Slash")
}

void bbc79SlashMod(void) {
	MESSSAGE_DEBUG("bbc79SlashMod")
}

void bbc79Star(void) {
	MESSSAGE_DEBUG("bbc79Star")
}

void bbc79MSlash(void) {
	MESSSAGE_DEBUG("bbc79MSlash")
}

void bbc79MAbs(void) {
	MESSSAGE_DEBUG("bbc79MAbs")
}

#ifdef DPINTEGER_SUPPORT
void bbc79DPlusMinus(void) {
	MESSSAGE_DEBUG("bbc79DPlusMinus")
}
#endif

void bbc79PlusMinus(void) {
	MESSSAGE_DEBUG("bbc79PlusMinus")
}

#ifdef DPINTEGER_SUPPORT
void bbc79SToD(void) {
	MESSSAGE_DEBUG("bbc79SToD")
}
#endif

void bbc79Warm(void) {
	MESSSAGE_DEBUG("bbc79Warm")
}

void bbc79Cold(void) {
	MESSSAGE_DEBUG("bbc79Cold")
}

void bbc79Start(void) {
	MESSSAGE_DEBUG("bbc79Start")
}

void bbc79Mode(void) {
	MESSSAGE_DEBUG("bbc79Mode")
}

void bbc79OSError(void) {
	MESSSAGE_DEBUG("bbc79OSError")
}

void bbc79Escape(void) {
	MESSSAGE_DEBUG("bbc79Escape")
}

void bbc79Abort(void) {
	MESSSAGE_DEBUG("bbc79Abort")
}

void bbc79ZAbort(void) {
	MESSSAGE_DEBUG("bbc79ZAbort")
}

void bbc79ZWarm(void) {
	MESSSAGE_DEBUG("bbc79ZWarm")
}

void bbc79Definitions(void) {
	MESSSAGE_DEBUG("bbc79Definitions")
}

void bbc79Quit(void) {
	MESSSAGE_DEBUG("bbc79Quit")
}

void bbc79Forth(void) {
	MESSSAGE_DEBUG("bbc79Forth")
}

void bbc79Vocabulary(void) {
	MESSSAGE_DEBUG("bbc79Vocabulary")
}

void bbc79Interpret(void) {
	MESSSAGE_DEBUG("bbc79Interpret")
}

void bbc79NumericInterpret(void) {
	MESSSAGE_DEBUG("bbc79NumericInterpret")
}

void bbc79ZNumericInterpret(void) {
	MESSSAGE_DEBUG("bbc79ZNumericInterpret")
}

void bbc79Paren(void) {
	MESSSAGE_DEBUG("bbc79Paren")
}

void bbc79Number(void) {
	MESSSAGE_DEBUG("bbc79Number")
}

void bbc79Semicolon(void) {
	MESSSAGE_DEBUG("bbc79Semicolon")
}

void bbc79Colon(void) {
	MESSSAGE_DEBUG("bbc79Colon")
}

void bbc79QStack(void) {
	MESSSAGE_DEBUG("bbc79QStack")
}

void bbc79Dliteral(void) {
	MESSSAGE_DEBUG("bbc79Dliteral")
}

void bbc79Literal(void) {
	MESSSAGE_DEBUG("bbc79Literal")
}

void bbc79ZCompile(void) {
	MESSSAGE_DEBUG("bbc79Literal")
}

void bbc79Create(void) {
	MESSSAGE_DEBUG("bbc79Create")
}

void bbc79ZCreate(void) {
	MESSSAGE_DEBUG("bbc79ZCreate")
}

void bbc79IDDot(void) {
	MESSSAGE_DEBUG("bbc79IDDot")
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
	MESSSAGE_DEBUG("bbc79Error")
}

void bbc79Find(void) {
	MESSSAGE_DEBUG("bbc79Find")
}

void bbc79MinusFind(void) {
	MESSSAGE_DEBUG("bbc79MinusFind")
}

void bbc79Convert(void) {
	MESSSAGE_DEBUG("bbc79Convert")
}

void bbc79Word(void) {
	MESSSAGE_DEBUG("bbc79Word")
}

void bbc79OneWord(void) {
	MESSSAGE_DEBUG("bbc79OneWord")
}

void bbc79WBFR(void) {
	MESSSAGE_DEBUG("bbc79WBFR")
}

void bbc79WDSZ(void) {
	MESSSAGE_DEBUG("bbc79WDSZ")
}

void bbc79ZWord(void) {
	MESSSAGE_DEBUG("bbc79ZWord")
}

void bbc79Hold(void) {
	MESSSAGE_DEBUG("bbc79Hold")
}

void bbc79Blanks(void) {
	MESSSAGE_DEBUG("bbc79Blanks")
}

void bbc79Erase(void) {
	MESSSAGE_DEBUG("bbc79Erase")
}

void bbc79Fill(void) {
	MESSSAGE_DEBUG("bbc79Fill")
}

void bbc79Move(void) {
	MESSSAGE_DEBUG("bbc79Move")
}

void bbc79Query(void) {
	MESSSAGE_DEBUG("bbc79Query")
}

void bbc79Expect(void) {
	MESSSAGE_DEBUG("bbc79Expect")
}

void bbc79ZExpect(void) {
	MESSSAGE_DEBUG("bbc79ZExpect")
}

void bbc79DotQuote(void) {
	MESSSAGE_DEBUG("bbc79DotQuote")
}

void bbc79ZDotQuote(void) {
	MESSSAGE_DEBUG("bbc79ZDotQuote")
}

void bbc79TextComma(void) {
	MESSSAGE_DEBUG("bbc79TextComma")
}

void bbc79MinusTrailing(void) {
	MESSSAGE_DEBUG("bbc79MinusTrailing")
}

void bbc79Type(void) {
	MESSSAGE_DEBUG("bbc79Type")
}

void bbc79Count(void) {
	MESSSAGE_DEBUG("bbc79Type")
}

void bbc79ZeroGreater(void) {
	MESSSAGE_DEBUG("bbc79ZeroGreater")
}

void bbc79Does(void) {
	MESSSAGE_DEBUG("bbc79Does")
}

void bbc79SemicolonCode(void) {
	MESSSAGE_DEBUG("bbc79SemicolonCode")
}

void bbc79ZSemicolonCode(void) {
	MESSSAGE_DEBUG("bbc79ZSemicolonCode")
}

void bbc79Decimal(void) {
	forthTasks[forthState.forthCurrentTask].forthBase = DECIMAL;
	forthTasks[forthState.forthCurrentTask].baseFormat = (char*)BASE_FORMAT_DECIMAL;
	MESSSAGE_DEBUG("bbc79Decimal")
}

void bbc79CR(void) {
	MESSSAGE_DEBUG("bbc79CR")
}

void bbc79Hex(void) {
	forthTasks[forthState.forthCurrentTask].forthBase = HEX;
	forthTasks[forthState.forthCurrentTask].baseFormat = (char*)BASE_FORMAT_HEX;
	MESSSAGE_DEBUG("bbc79Hex")
}

void bbc79QTab(void) {
	MESSSAGE_DEBUG("bbc79QTab")
}

void bbc79NoOp(void) {
	MESSSAGE_DEBUG("bbc79NoOp")
}

void bbc79RightBracket(void) {
	MESSSAGE_DEBUG("RightBracket")
}

void bbc79LeftBracket(void) {
	MESSSAGE_DEBUG("LeftBracket")
}

void bbc79Compile(void) {
	MESSSAGE_DEBUG("bbc79Compile")
}

void bbc79Immediate(void) {
	MESSSAGE_DEBUG("bbc79Immediate")
}

void bbc79QLoading(void) {
	MESSSAGE_DEBUG("bbc79QLoading")
}

void bbc79QCSP(void) {
	MESSSAGE_DEBUG("bbc79QCSP")
}

void bbc79QPairs(void) {
	MESSSAGE_DEBUG("bbc79QPairs")
}

void bbc79QExec(void) {
	MESSSAGE_DEBUG("bbc79QExec")
}

void bbc79QComp(void) {
	MESSSAGE_DEBUG("bbc79QComp")
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
	MESSSAGE_DEBUG("bbc79QError")
}

void bbc79StoreCSP(void) {
	MESSSAGE_DEBUG("bbc79StoreCSP")
}

void bbc79Not(void) {
	MESSSAGE_DEBUG("bbc79Not")
}

void bbc79PFA(void) {
	MESSSAGE_DEBUG("bbc79PFA")
}

void bbc79CFA(void) {
	MESSSAGE_DEBUG("bbc79CFA")
}

void bbc79NFA(void) {
	MESSSAGE_DEBUG("bbc79NFA")
}

void bbc79LFA(void) {
	MESSSAGE_DEBUG("bbc79LFA")
}

void bbc79ULess(void) {
	MESSSAGE_DEBUG("bbc79ULess")
}

void bbc79Greater(void) {
	MESSSAGE_DEBUG("bbc79Greater")
}

void bbc79Equal(void) {
	MESSSAGE_DEBUG("bbc79Equal")
}

void bbc79Minus(void) {
	MESSSAGE_DEBUG("bbc79Minus")
}

void bbc79Smudge(void) {
	MESSSAGE_DEBUG("bbc79Smudge")
}

void bbc79Last(void) {
	MESSSAGE_DEBUG("bbc79Last")
}

void bbc79CComma(void) {
	MESSSAGE_DEBUG("bbc79CComma")
}

void bbc79Comma(void) {
	MESSSAGE_DEBUG("bbc79Comma")
}

void bbc79Space(void) {
	MESSSAGE_DEBUG("bbc79Comma")
}

void bbc79Allot(void) {
	MESSSAGE_DEBUG("bbc79Allot")
}

void bbc79Here(void) {
	MESSSAGE_DEBUG("bbc79Here")
}

void bbc79TwoMinus(void) {
	MESSSAGE_DEBUG("bbc79TwoMinus")
}

void bbc79OneMinus(void) {
	MESSSAGE_DEBUG("bbc79OneMinus")
}

void bbc79TwoPlus(void) {
	MESSSAGE_DEBUG("bbc79TwoPlus")
}

void bbc79OnePlus(void) {
	MESSSAGE_DEBUG("bbc79OnePlus")
}

void bbc79HLD(void) {
	MESSSAGE_DEBUG("bbc79HLD")
}

void bbc79RNum(void) {
	MESSSAGE_DEBUG("bbc79RNum")
}

void bbc79CSP(void) {
	MESSSAGE_DEBUG("bbc79CSP")
}

void bbc79DPL(void) {
	MESSSAGE_DEBUG("bbc79DPL")
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
	MESSSAGE_DEBUG("bbc79Base")
}

void bbc79State(void) {
	MESSSAGE_DEBUG("bbc79State")
}

void bbc79Current(void) {
	MESSSAGE_DEBUG("bbc79Current")
}

void bbc79Context(void) {
	MESSSAGE_DEBUG("bbc79Context")
}

void bbc79Offset(void) {
	MESSSAGE_DEBUG("bbc79Offset")
}

void bbc79SCR(void) {
	MESSSAGE_DEBUG("bbc79SCR")
}

void bbc79Out(void) {
	MESSSAGE_DEBUG("bbc79Out")
}

void bbc79ToIn(void) {
	MESSSAGE_DEBUG("bbc79ToIn")
}

void bbc79BLK(void) {
	MESSSAGE_DEBUG("bbc79BLK")
}

void bbc79VocLink(void) {
	MESSSAGE_DEBUG("bbc79VocLink")
}

void bbc79DP(void) {
	MESSSAGE_DEBUG("bbc79DP")
}

void bbc79Fence(void) {
	MESSSAGE_DEBUG("bbc79Fence")
}

void bbc79Warnung(void) {
	MESSSAGE_DEBUG("bbc79Warnung")
}

void bbc79Width(void) {
	MESSSAGE_DEBUG("bbc79Width")
}

void bbc79TIB(void) {
	MESSSAGE_DEBUG("bbc79TIB")
}

void bbc79R0(void) {
	MESSSAGE_DEBUG("bbc79R0")
}

void bbc79S0(void) {
	MESSSAGE_DEBUG("bbc79S0")
}

void bbc79PlusOrigin(void) {
	MESSSAGE_DEBUG("bbc79PlusOrigin")
}

void bbc79BSlashSCR(void) {
	MESSSAGE_DEBUG("bbc79BSlashSCR")
}

void bbc79BSlashBUF(void) {
	MESSSAGE_DEBUG("bbc79BSlashBUF")
}

void bbc79Limit(void) {
	MESSSAGE_DEBUG("bbc79Limit")
}

void bbc79First(void) {
	MESSSAGE_DEBUG("bbc79First")
}

void bbc79PAD(void) {
	MESSSAGE_DEBUG("bbc79PAD")
}

void CSlashL(void) {
	MESSSAGE_DEBUG("CSlashL")
}

void bbc79BL(void) {
	MESSSAGE_DEBUG("bbc79BL")
}

void bbc79Two(void) {
	MESSSAGE_DEBUG("bbc79Two")
}

void bbc79One(void) {
	MESSSAGE_DEBUG("bbc79One")
}

void bbc79Null(void) {
	MESSSAGE_DEBUG("bbc79Null")
}

void bbc79MinusOne(void) {
	MESSSAGE_DEBUG("bbc79MinusOne")
}

void bbc79MinusTwo(void) {
	MESSSAGE_DEBUG("bbc79MinusTwo")
}

void bbc79User(void) {
	MESSSAGE_DEBUG("bbc79User")
}

void bbc79Variable(void) {
	MESSSAGE_DEBUG("bbc79Variable")
}

void bbc79Constant(void) {
	MESSSAGE_DEBUG("bbc79Constant")
}

void bbc79RSemicolon(void) {
	MESSSAGE_DEBUG("bbc79RSemicolon")
}

void bbc79RColon(void) {
	MESSSAGE_DEBUG("bbc79RColon")
}

void bbc79Toggle(void) {
	MESSSAGE_DEBUG("bbc79Toggle")
}

void bbc79PlusStore(void) {
	MESSSAGE_DEBUG("bbc79PlusStore")
}

void bbc79Store(void) {
	if (forthTasks[forthState.forthCurrentTask].dataStackIndex >= 2) {
		CELL_INTEGER* address = (CELL_INTEGER*)forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex];
		*address = (CELL_INTEGER)forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex];
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_EMPTY;
	};
	MESSSAGE_DEBUG("bbc79Store")
}

void bbc79CStore(void) {
	if (forthTasks[forthState.forthCurrentTask].dataStackIndex >= 2) {
		char* address = (char*)forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex];
		*address = (char)forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex];
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_EMPTY;
	};
	MESSSAGE_DEBUG("bbc79CStore")
}

void bbc79Fetch(void) {
	if (forthTasks[forthState.forthCurrentTask].dataStackIndex) {
		CELL_INTEGER* address = (CELL_INTEGER*)forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex];
		forthTasks[forthState.forthCurrentTask].dataStackSpace[forthTasks[forthState.forthCurrentTask].dataStackIndex++] = *address;
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_EMPTY;
	};

	MESSSAGE_DEBUG("bbc79Fetch")
}

void bbc79CFetch(void) {
	if (forthTasks[forthState.forthCurrentTask].dataStackIndex >= 2) {
		char* address = (char*)forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex];
		forthTasks[forthState.forthCurrentTask].dataStackSpace[forthTasks[forthState.forthCurrentTask].dataStackIndex++] = (CELL_INTEGER)*address;
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_EMPTY;
	};
	MESSSAGE_DEBUG("bbc79CFetch")
}

void bbc79QFile(void) {
	MESSSAGE_DEBUG("bbc79QFile")
}

void bbc79Himem(void) {
	MESSSAGE_DEBUG("bbc79Himem")
}

void bbc79Page(void) {
	MESSSAGE_DEBUG("bbc79Page")
}

void bbc79Traverse(void) {
	MESSSAGE_DEBUG("bbc79Traverse")
}

void bbc79Rot(void) {
	MESSSAGE_DEBUG("bbc79Rot")
}

void bbc79TwentyVer(void) {
	MESSSAGE_DEBUG("bbc79TwentyVer")
}

void bbc79Over(void) {
	MESSSAGE_DEBUG("bbc79Over")
}

void bbc79TwoSwap(void) {
	MESSSAGE_DEBUG("bbc79TwoSwap")
}

void bbc79Swap(void) {
	MESSSAGE_DEBUG("bbc79Swap")
}

void bbc79TwoDup(void) {
	MESSSAGE_DEBUG("bbc79TwoDup")
}

void bbc79QDup(void) {
	MESSSAGE_DEBUG("bbc79QDup")
}

void bbc79Dup(void) {
	MESSSAGE_DEBUG("bbc79Dup")
}

void bbc79TwoDrop(void) {
	MESSSAGE_DEBUG("bbc79TwoDrop")
}

void bbc79Drop(void) {
	MESSSAGE_DEBUG("bbc79Drop")
}

void bbc79DNegate(void) {
	MESSSAGE_DEBUG("bbc79DNegate")
}

void bbc79Negate(void) {
	MESSSAGE_DEBUG("bbc79Negate")
}

#ifdef DPINTEGER_SUPPORT
void bbc79DPlus(void) {
	MESSSAGE_DEBUG("bbc79DPlus")
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
	MESSSAGE_DEBUG("bbc79Plus")
}

#ifdef DPINTEGER_SUPPORT
void bbc79DLess(void) {
	MESSSAGE_DEBUG("bbc79DLess")
}
#endif

void bbc79Less(void) {
	MESSSAGE_DEBUG("bbc79Less")
}

void bbc79ZeroLess(void) {
	MESSSAGE_DEBUG("bbc79ZeroLess")
}

void bbc79ZeroEqual(void) {
	MESSSAGE_DEBUG("bbc79ZeroEqual")
}

void bbc79Leave(void) {
	MESSSAGE_DEBUG("bbc79Leave")
}

void bbc79SwapBytes(void) {
	MESSSAGE_DEBUG("bbc79SwapBytes")
}

void bbc79RFrom(void) {
	MESSSAGE_DEBUG("bbc79RFrom")
}

void bbc79ToR(void) {
	MESSSAGE_DEBUG("bbc79ToR")
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

	MESSSAGE_DEBUG("bbc79RFetch")
}

void bbc79Exit(void) {
	MESSSAGE_DEBUG("bbc79Exit")
}

void bbc79Key(void) {
	MESSSAGE_DEBUG("bbc79Key")
}

void bbc79ZKey(void) {
	MESSSAGE_DEBUG("bbc79ZKey")
}

void bbc79QKey(void) {
	MESSSAGE_DEBUG("bbc79QKey")
}

void bbc79Xor(void) {
	MESSSAGE_DEBUG("bbc79Xor")
}

void bbc79Or(void) {
	MESSSAGE_DEBUG("bbc79Or")
}

void bbc79And(void) {
	MESSSAGE_DEBUG("bbc79And")
}

void bbc79USlash(void) {
	MESSSAGE_DEBUG("bbc79USlash")
}

void bbc79UStar(void) {
	MESSSAGE_DEBUG("bbc79UStar")
}

void bbc79CMove(void) {
	MESSSAGE_DEBUG("bbc79CMove")
}

void bbc79ToVDU(void) {
	MESSSAGE_DEBUG("bbc79ToVDU")
}

void bbc79Emit(void) {
	MESSSAGE_DEBUG("bbc79Emit")
}

void bbc79ZEmit(void) {
	MESSSAGE_DEBUG("bbc79ZEmit")
}

void bbc79RPStore(void) {
	MESSSAGE_DEBUG("bbc79RPStore")
}

void bbc79SPStore(void) {
	MESSSAGE_DEBUG("bbc79SPStore")
}

void bbc79RPFetch(void) {
	MESSSAGE_DEBUG("bbc79RPFetch")
}

void bbc79SPFetch(void) {
	MESSSAGE_DEBUG("bbc79SPFetch")
}

void bbc79Enclose(void) {
	MESSSAGE_DEBUG("bbc79Enclose")
}

void bbc79ZFind(void) {
	MESSSAGE_DEBUG("bbc79ZFind")
}

void bbc79Digit(void) {
	MESSSAGE_DEBUG("bbc79Digit")
}

void bbc79ModeAddr(void) {
	MESSSAGE_DEBUG("bbc79ModeAddr")
}

void bbc79HIAddr(void) {
	MESSSAGE_DEBUG("bbc79HIAddr")
}

void bbc79ZDO(void) {
	MESSSAGE_DEBUG("bbc79ZDO")
}

void bbc79I(void) {
	MESSSAGE_DEBUG("bbc79I")
}

void bbc79ZULoop(void) {
	MESSSAGE_DEBUG("bbc79ZULoop")
}

void bbc79ZPlusLoop(void) {
	MESSSAGE_DEBUG("bbc79ZPlusLoop")
}

void bbc79ZLoop(void) {
	MESSSAGE_DEBUG("bbc79ZLoop")
}

void bbc79ZeroBranch(void) {
	MESSSAGE_DEBUG("bbc79ZeroBranch")
}

void bbc79Branch(void) {
	MESSSAGE_DEBUG("bbc79Branch")
}

void bbc79FetchExecute(void) {
	MESSSAGE_DEBUG("bbc79FetchExecute")
}

void bbc79Execute(void) {
	MESSSAGE_DEBUG("bbc79Execute")
}

void bbc79Lit(void) {
	MESSSAGE_DEBUG("bbc79Lit")
}

#endif
