#ifndef H2OBBC2
#define H2OBBC2

/* The official "Arconsoft BBC Micro" ( FORTH79 ) FORTH */

/* Primitives */

void bbc79DollarMSG(void) {
	PSMSG_DEBUG("bbc79DollarMSG")
}

void bbc79Plot(void) {
	PSMSG_DEBUG("bbc79Plot")
}

void bbc79MoveBuffers(void) {
	PSMSG_DEBUG("bbc79MoveBuffers")
}

void bbc79FromCMove(void) {
	PSMSG_DEBUG("bbc79FromCMove")
}

void bbc79Where(void) {
	PSMSG_DEBUG("bbc79Where")
}

void bbc79Line(void) {
	PSMSG_DEBUG("bbc79Line")
}

void bbc79Text(void) {
	PSMSG_DEBUG("bbc79Text")
}

void bbc79More(void) {
	PSMSG_DEBUG("bbc79More")
}

void bbc79Another(void) {
	PSMSG_DEBUG("bbc79Another")
}

void bbc79Program(void) {
	PSMSG_DEBUG("bbc79Program")
}

void bbc79ClrScr(void) {
	PSMSG_DEBUG("bbc79ClrScr")
}

void bbc79Save(void) {
	PSMSG_DEBUG("bbc79Save")
}

void bbc79Locate(void) {
	PSMSG_DEBUG("bbc79Locate")
}

void bbc79Editor(void) {
	PSMSG_DEBUG("bbc79Editor")
}

void bbc79Code(void) {
	PSMSG_DEBUG("bbc79Code")
}

void bbc79QCurrent(void) {
	PSMSG_DEBUG("bbc79QCurrent")
}

void bbc79Assembler(void) {
	PSMSG_DEBUG("bbc79Assembler")
}

void bbc79Triad(void) {
	PSMSG_DEBUG("bbc79Triad")
}

void bbc79Index(void) {
	PSMSG_DEBUG("bbc79Index")
}

void bbc79SnineStandard(void) {
	PSMSG_DEBUG("bbc79SnineStandard")
}

void bbc79List(void) {
	PSMSG_DEBUG("bbc79List")
}

void bbc79CreateScreens(void) {
	PSMSG_DEBUG("bbc79CreateScreens")
}

void bbc79Tape(void) {
	PSMSG_DEBUG("bbc79Tape")
}

void bbc79QRSlashW(void) {
	PSMSG_DEBUG("bbc79QRSlashW")
}

void bbc79TRSlashW(void) {
	PSMSG_DEBUG("bbc79TRSlashW")
}

void bbc79TW(void) {
	PSMSG_DEBUG("bbc79TW")
}

void bbc79TR(void) {
	PSMSG_DEBUG("bbc79TR")
}

void bbc79FourHEX(void) {
	PSMSG_DEBUG("bbc79FourHEX")
}

void bbc79SSTo(void) {
	PSMSG_DEBUG("bbc79SSTo")
}

void bbc79Flush(void) {
	PSMSG_DEBUG("bbc79Flush")
}

void bbc79SaveBuffers(void) {
	PSMSG_DEBUG("bbc79SaveBuffers")
}

void bbc79Disk(void) {
	PSMSG_DEBUG("bbc79Disk")
}

void bbc79ZDisk(void) {
	PSMSG_DEBUG("bbc79ZDisk")
}

void bbc79Load(void) {
	PSMSG_DEBUG("bbc79Load")
}

void bbc79Block(void) {
	PSMSG_DEBUG("bbc79Block")
}

void bbc79Buffer(void) {
	PSMSG_DEBUG("bbc79Buffer")
}

void bbc79Update(void) {
	PSMSG_DEBUG("bbc79Update")
}

void bbc79ZUpdate(void) {
	PSMSG_DEBUG("bbc79ZUpdate")
}

void bbc79PlusBuf(void) {
	PSMSG_DEBUG("bbc79PlusBuf")
}

void bbc79InitBuf(void) {
	PSMSG_DEBUG("bbc79InitBuf")
}

void bbc79SetBuf(void) {
	PSMSG_DEBUG("bbc79SetBuf")
}

void bbc79EmptyBuffers(void) {
	PSMSG_DEBUG("bbc79EmptyBuffers")
}

void bbc79NumBuf(void) {
	PSMSG_DEBUG("bbc79NumBuf")
}

void bbc79Prev(void) {
	PSMSG_DEBUG("bbc79Prev")
}

void bbc79Use(void) {
	PSMSG_DEBUG("bbc79Use")
}

void bbc79BufSZ(void) {
	PSMSG_DEBUG("bbc79BufSZ")
}

void bbc79MinBUF(void) {
	PSMSG_DEBUG("bbc79MinBUF")
}

void bbc79RSlashW(void) {
	PSMSG_DEBUG("bbc79RSlashW")
}

void bbc79DRSlashW(void) {
	PSMSG_DEBUG("bbc79DRSlashW")
}

void bbc79Open(void) {
	PSMSG_DEBUG("bbc79Open")
}

void bbc79FName(void) {
	PSMSG_DEBUG("bbc79FName")
}

void bbc79Channel(void) {
	PSMSG_DEBUG("bbc79Channel")
}

void bbc79MaxFiles(void) {
	PSMSG_DEBUG("bbc79MaxFiles")
}

void bbc79SSlashFile(void) {
	PSMSG_DEBUG("bbc79SSlashFile")
}

void bbc79ZRSlashW(void) {
	PSMSG_DEBUG("bbc79ZRSlashW")
}

void bbc79Close(void) {
	PSMSG_DEBUG("bbc79Close")
}

void bbc79ZOpen(void) {
	PSMSG_DEBUG("bbc79ZOpen")
}

void bbc79KeyTick(void) {
	PSMSG_DEBUG("bbc79KeyTick")
}

void bbc79OSTick(void) {
	PSMSG_DEBUG("bbc79OSTick")
}

void bbc79ToCLI(void) {
	PSMSG_DEBUG("bbc79ToCLI")
}

void bbc79ZCLI(void) {
	PSMSG_DEBUG("bbc79ZCLI")
}

void bbc79ZDollarPlus(void) {
	PSMSG_DEBUG("bbc79ZDollarPlus")
}

void bbc79String(void) {
	PSMSG_DEBUG("bbc79String")
}

void bbc79OSCLI(void) {
	PSMSG_DEBUG("bbc79OSCLI")
}

void bbc79Roll(void) {
	PSMSG_DEBUG("bbc79Roll")
}

void bbc79Pick(void) {
	PSMSG_DEBUG("bbc79Pick")
}

void bbc79DotS(void) {
	int ii = 0;
	int dataStackIndex = forthTasks[forthState.forthCurrentTask].dataStackIndex;
	int nn; /* < 32 */
	if (dataStackIndex) {
		privateSetBaseFormat();
		nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, "[%d] ", dataStackIndex);
		SMSG_SUCCESS(forthTasks[forthState.forthCurrentTask].printBuffer);
		for (ii = 0; ii < dataStackIndex; ii++) {
			CELL_INTEGER value = forthTasks[forthState.forthCurrentTask].dataStackSpace[ii];
			char* value2;
			if (forthTasks[forthState.forthCurrentTask].baseFormat == BASE_FORMAT_EMPTY) {
				value2 = privateBaseConversion(forthTasks[forthState.forthCurrentTask].forthBase, value);
				nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer,
					forthTasks[forthState.forthCurrentTask].baseFormat, value2);
				SMSG_SUCCESS(forthTasks[forthState.forthCurrentTask].printBuffer);
			}
			else {
				nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer,
					forthTasks[forthState.forthCurrentTask].baseFormat, value);
				SMSG_SUCCESS(forthTasks[forthState.forthCurrentTask].printBuffer);
			};
			CMSG_SUCCESS(CHAR_SPACE);
		};
		CMSG_SUCCESS(CHAR_CR);
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_EMPTY;
		// forthTasks[forthState.forthCurrentTask].messageNumber = MESSAGE_DATASTACK_EMPTY;
	};
	PSMSG_DEBUG("bbc79DotS")
}

void bbc79Depth(void) {
	PSMSG_DEBUG("bbc79Depth")
}

void bbc79Forget(void) {
	PSMSG_DEBUG("bbc79Forget")
}

void bbc79Prune(void) {
	PSMSG_DEBUG("bbc79Prune")
}

void bbc79InitVecs(void) {
	PSMSG_DEBUG("bbc79InitVecs")
}

void bbc79ToDo(void) {
	PSMSG_DEBUG("bbc79ToDo")
}

void bbc79DoVec(void) {
	PSMSG_DEBUG("bbc79DoVec")
}

void bbc79Assign(void) {
	PSMSG_DEBUG("bbc79Assign")
}

void bbc79ExVec(void) {
	PSMSG_DEBUG("bbc79ExVec")
}

void bbc79Novec(void) {
	PSMSG_DEBUG("bbc79Novec")
}

void bbc79Vlist(void) {
	unsigned int ii = 0;
	unsigned int jj = 0;
	int nn = 0;
	int result = FALSE;
	unsigned int lenForthWordLists = sizeof(forthWordLists) / sizeof(forthWordLists[0]);
	for (ii = 0; ii < lenForthWordLists; ii++) {
		for (jj = 0; jj < ( unsigned int)*forthTasks[forthState.forthCurrentTask].forthWordLists[ii].size; jj++) {
#ifdef ARDUINO
		nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, "%s ",
			 pgm_read_ptr(&forthTasks[forthState.forthCurrentTask].forthWordLists[ii].forthWords[jj].forthWordName));
#else
		nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, "%s ",
			 forthTasks[forthState.forthCurrentTask].forthWordLists[ii].forthWords[jj].forthWordName);
#endif
		 SMSG_SUCCESS(forthTasks[forthState.forthCurrentTask].printBuffer);
#ifdef __DEBUG2__
#ifdef ARDUINO
		nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, "%d\n",
			 pgm_read_ptr(&forthTasks[forthState.forthCurrentTask].forthWordLists[ii].forthWords[jj].forthWordID);
#else
		nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, "%d\n",
			 forthTasks[forthState.forthCurrentTask].forthWordLists[ii].forthWords[jj].forthWordID);
#endif
		 SMSG_SUCCESS(forthTasks[forthState.forthCurrentTask].printBuffer);
#endif

		};
	};
	CMSG_SUCCESS(CHAR_CR);
	PSMSG_DEBUG("bbc79Vlist")
}

void bbc79Tick(void) {
	PSMSG_DEBUG("bbc79Tick")
}

void bbc79Repeat(void) {
	PSMSG_DEBUG("bbc79Repeat")
}

void bbc79While(void) {
	PSMSG_DEBUG("bbc79While")
}

void bbc79Again(void) {
	PSMSG_DEBUG("bbc79Again")
}

void bbc79Until(void) {
	PSMSG_DEBUG("bbc79Until")
}

void bbc79Begin(void) {
	PSMSG_DEBUG("bbc79Begin")
}

void bbc79Else(void) {
	PSMSG_DEBUG("bbc79Else")
}

void bbc79Then(void) {
	PSMSG_DEBUG("bbc79Then")
}

void bbc79If(void) {
	PSMSG_DEBUG("bbc79If")
}

void bbc79PlusLoop(void) {
	PSMSG_DEBUG("bbc79PlusLoop")
}

void bbc79Loop(void) {
	PSMSG_DEBUG("bbc79Loop")
}

void bbc79Do(void) {
	PSMSG_DEBUG("bbc79Do")
}

void bbc79Back(void) {
	PSMSG_DEBUG("bbc79Back")
}

void bbc79J(void) {
	PSMSG_DEBUG("bbc79J")
}

void bbc79TwoSlash(void) {
	PSMSG_DEBUG("bbc79TwoSlash")
}

void bbc79TwoStar(void) {
	PSMSG_DEBUG("bbc79TwoStar")
}

void bbc79Message(void) {
	PSMSG_DEBUG("bbc79Message")
}

void bbc79MSGNum(void) {
	PSMSG_DEBUG("bbc79MSGNum")
}

/* Display in hexadecimal base in the format of <.> */
void bbc79HDot(void) {
	commonHexDot();
	PSMSG_DEBUG("bbc79HDot")
}

/* Display in decimal base in the format of <.> */
void bbc79DecDot(void) {
	int nn; /* < 32 */
	if (forthTasks[forthState.forthCurrentTask].dataStackIndex) {
		if (sizeof(CELL_INTEGER) == CELLSIZE8) {
			nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, "%lld ",
				forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex]);
			SMSG_SUCCESS(forthTasks[forthState.forthCurrentTask].printBuffer);
		}
		else {
			nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, "%d ",
				forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex]);
			SMSG_SUCCESS(forthTasks[forthState.forthCurrentTask].printBuffer);
		}
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_EMPTY;
	};
	PSMSG_DEBUG("bbc79DecDot")
}

void bbc79Q(void) {
	PSMSG_DEBUG("bbc79Q")
}

void bbc79UDot(void) {
	PSMSG_DEBUG("bbc79UDot")
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
			SMSG_SUCCESS(forthTasks[forthState.forthCurrentTask].printBuffer);
		}
		else {
			nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer,
				forthTasks[forthState.forthCurrentTask].baseFormat, value);
			SMSG_SUCCESS(forthTasks[forthState.forthCurrentTask].printBuffer);
		};
		CMSG_SUCCESS(CHAR_SPACE);
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_EMPTY;
	};
	PSMSG_DEBUG("bbc79Dot")
}

void bbc79DotR(void) {
	PSMSG_DEBUG("bbc79DotR")
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
		SMSG_SUCCESS(forthTasks[forthState.forthCurrentTask].printBuffer);
		CMSG_SUCCESS(CHAR_SPACE);
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_EMPTY;
	};
	PSMSG_DEBUG("bbc79DDot")
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
		SMSG_SUCCESS(forthTasks[forthState.forthCurrentTask].printBuffer);
		CMSG_SUCCESS(CHAR_CR);
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_RETURNSTACK_EMPTY;
	};
	PSMSG_DEBUG("bbc79DDotRDot")
}
#endif

void bbc79NumS(void) {
	PSMSG_DEBUG("bbc79NumS")
}

void bbc79Num(void) {
	PSMSG_DEBUG("bbc79Num")
}

void bbc79Sign(void) {
	PSMSG_DEBUG("bbc79Sign")
}

void bbc79NumGreater(void) {
	PSMSG_DEBUG("bbc79NumGreater")
}

void bbc79LessNum(void) {
	PSMSG_DEBUG("bbc79LessNum")
}

void bbc79Spaces(void) {
	PSMSG_DEBUG("bbc79Spaces")
}

void bbc79MSlashMod(void) {
	PSMSG_DEBUG("bbc79MSlashMod")
}

void bbc79StarSlash(void) {
	PSMSG_DEBUG("bbc79StarSlash")
}

void bbc79StarSlashMod(void) {
	PSMSG_DEBUG("bbc79StarSlashMod")
}

void bbc79Mod(void) {
	PSMSG_DEBUG("bbc79Mod")
}

void bbc79Slash(void) {
	PSMSG_DEBUG("bbc79Slash")
}

void bbc79SlashMod(void) {
	PSMSG_DEBUG("bbc79SlashMod")
}

void bbc79Star(void) {
	PSMSG_DEBUG("bbc79Star")
}

void bbc79MSlash(void) {
	PSMSG_DEBUG("bbc79MSlash")
}

void bbc79MAbs(void) {
	PSMSG_DEBUG("bbc79MAbs")
}

#ifdef DPINTEGER_SUPPORT
void bbc79DPlusMinus(void) {
	PSMSG_DEBUG("bbc79DPlusMinus")
}
#endif

void bbc79PlusMinus(void) {
	PSMSG_DEBUG("bbc79PlusMinus")
}

#ifdef DPINTEGER_SUPPORT
void bbc79SToD(void) {
	PSMSG_DEBUG("bbc79SToD")
}
#endif

void bbc79Warm(void) {
	PSMSG_DEBUG("bbc79Warm")
}

void bbc79Cold(void) {
	PSMSG_DEBUG("bbc79Cold")
}

void bbc79Start(void) {
	PSMSG_DEBUG("bbc79Start")
}

void bbc79Mode(void) {
	PSMSG_DEBUG("bbc79Mode")
}

void bbc79OSError(void) {
	PSMSG_DEBUG("bbc79OSError")
}

void bbc79Escape(void) {
	PSMSG_DEBUG("bbc79Escape")
}

void bbc79Abort(void) {
	PSMSG_DEBUG("bbc79Abort")
}

void bbc79ZAbort(void) {
	PSMSG_DEBUG("bbc79ZAbort")
}

void bbc79ZWarm(void) {
	PSMSG_DEBUG("bbc79ZWarm")
}

void bbc79Definitions(void) {
	PSMSG_DEBUG("bbc79Definitions")
}

void bbc79Quit(void) {
	PSMSG_DEBUG("bbc79Quit")
}

void bbc79Forth(void) {
	PSMSG_DEBUG("bbc79Forth")
}

void bbc79Vocabulary(void) {
	PSMSG_DEBUG("bbc79Vocabulary")
}

void bbc79Interpret(void) {
	PSMSG_DEBUG("bbc79Interpret")
}

void bbc79NumericInterpret(void) {
	PSMSG_DEBUG("bbc79NumericInterpret")
}

void bbc79ZNumericInterpret(void) {
	PSMSG_DEBUG("bbc79ZNumericInterpret")
}

void bbc79Paren(void) {
	PSMSG_DEBUG("bbc79Paren")
}

void bbc79Number(void) {
	PSMSG_DEBUG("bbc79Number")
}

void bbc79Semicolon(void) {
	forthTasks[forthState.forthCurrentTask].forthMode = MODE_INTERPRET;
	PSMSG_DEBUG("bbc79Semicolon")
}

void bbc79Colon(void) {
	forthTasks[forthState.forthCurrentTask].forthMode = MODE_COMPILE;
	PSMSG_DEBUG("bbc79Colon")
}

void bbc79QStack(void) {
	PSMSG_DEBUG("bbc79QStack")
}

void bbc79Dliteral(void) {
	PSMSG_DEBUG("bbc79Dliteral")
}

void bbc79Literal(void) {
	PSMSG_DEBUG("bbc79Literal")
}

void bbc79ZCompile(void) {
	PSMSG_DEBUG("bbc79Literal")
}

void bbc79Create(void) {
	PSMSG_DEBUG("bbc79Create")
}

void bbc79ZCreate(void) {
	PSMSG_DEBUG("bbc79ZCreate")
}

void bbc79IDDot(void) {
	PSMSG_DEBUG("bbc79IDDot")
}

void bbc79Error(void) {
	int nn; /* < 32 */
	if (forthTasks[forthState.forthCurrentTask].dataStackIndex) {
		int errorNumber = forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex];
		/* Originally, two spaces between "ERROR" and "?" */
		nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer, "ERROR  ? %s",
			forthTasks[forthState.forthCurrentTask].forthErrors[errorNumber].messageText);
		SMSG_SUCCESS(forthTasks[forthState.forthCurrentTask].printBuffer);
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_EMPTY;
	};
	PSMSG_DEBUG("bbc79Error")
}

void bbc79Find(void) {
	PSMSG_DEBUG("bbc79Find")
}

void bbc79MinusFind(void) {
	PSMSG_DEBUG("bbc79MinusFind")
}

void bbc79Convert(void) {
	PSMSG_DEBUG("bbc79Convert")
}

void bbc79Word(void) {
	PSMSG_DEBUG("bbc79Word")
}

void bbc79OneWord(void) {
	PSMSG_DEBUG("bbc79OneWord")
}

void bbc79WBFR(void) {
	PSMSG_DEBUG("bbc79WBFR")
}

void bbc79WDSZ(void) {
	PSMSG_DEBUG("bbc79WDSZ")
}

void bbc79ZWord(void) {
	PSMSG_DEBUG("bbc79ZWord")
}

void bbc79Hold(void) {
	PSMSG_DEBUG("bbc79Hold")
}

void bbc79Blanks(void) {
	PSMSG_DEBUG("bbc79Blanks")
}

void bbc79Erase(void) {
	PSMSG_DEBUG("bbc79Erase")
}

void bbc79Fill(void) {
	PSMSG_DEBUG("bbc79Fill")
}

void bbc79Move(void) {
	PSMSG_DEBUG("bbc79Move")
}

void bbc79Query(void) {
	PSMSG_DEBUG("bbc79Query")
}

void bbc79Expect(void) {
	PSMSG_DEBUG("bbc79Expect")
}

void bbc79ZExpect(void) {
	PSMSG_DEBUG("bbc79ZExpect")
}

void bbc79DotQuote(void) {
	PSMSG_DEBUG("bbc79DotQuote")
}

void bbc79ZDotQuote(void) {
	PSMSG_DEBUG("bbc79ZDotQuote")
}

void bbc79TextComma(void) {
	PSMSG_DEBUG("bbc79TextComma")
}

void bbc79MinusTrailing(void) {
	PSMSG_DEBUG("bbc79MinusTrailing")
}

void bbc79Type(void) {
	PSMSG_DEBUG("bbc79Type")
}

void bbc79Count(void) {
	PSMSG_DEBUG("bbc79Type")
}

void bbc79ZeroGreater(void) {
	PSMSG_DEBUG("bbc79ZeroGreater")
}

void bbc79Does(void) {
	PSMSG_DEBUG("bbc79Does")
}

void bbc79SemicolonCode(void) {
	PSMSG_DEBUG("bbc79SemicolonCode")
}

void bbc79ZSemicolonCode(void) {
	PSMSG_DEBUG("bbc79ZSemicolonCode")
}

void bbc79Decimal(void) {
	forthTasks[forthState.forthCurrentTask].forthBase = DECIMAL;
	forthTasks[forthState.forthCurrentTask].baseFormat = (char*)BASE_FORMAT_DECIMAL;
	PSMSG_DEBUG("bbc79Decimal")
}

void bbc79CR(void) {
	PSMSG_DEBUG("bbc79CR")
}

void bbc79Hex(void) {
	forthTasks[forthState.forthCurrentTask].forthBase = HEX;
	forthTasks[forthState.forthCurrentTask].baseFormat = (char*)BASE_FORMAT_HEX;
	PSMSG_DEBUG("bbc79Hex")
}

void bbc79QTab(void) {
	PSMSG_DEBUG("bbc79QTab")
}

void bbc79NoOp(void) {
	PSMSG_DEBUG("bbc79NoOp")
}

void bbc79RightBracket(void) {
	PSMSG_DEBUG("RightBracket")
}

void bbc79LeftBracket(void) {
	PSMSG_DEBUG("LeftBracket")
}

void bbc79Compile(void) {
	PSMSG_DEBUG("bbc79Compile")
}

void bbc79Immediate(void) {
	PSMSG_DEBUG("bbc79Immediate")
}

void bbc79QLoading(void) {
	PSMSG_DEBUG("bbc79QLoading")
}

void bbc79QCSP(void) {
	PSMSG_DEBUG("bbc79QCSP")
}

void bbc79QPairs(void) {
	PSMSG_DEBUG("bbc79QPairs")
}

void bbc79QExec(void) {
	PSMSG_DEBUG("bbc79QExec")
}

void bbc79QComp(void) {
	PSMSG_DEBUG("bbc79QComp")
}

void bbc79QError(void) {
	int nn; /* < 32 */
	if (forthTasks[forthState.forthCurrentTask].dataStackIndex >= 2) {
		CELL_INTEGER errorNumber = forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex];
		if (forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex]) {
			forthTasks[forthState.forthCurrentTask].dataStackSpace[forthTasks[forthState.forthCurrentTask].dataStackIndex++] = errorNumber;
#if defined (__DEBUG__) && defined (__DEBUG2__)
			nn = sprintf(forthTasks[forthState.forthCurrentTask].printBuffer,
				"Error %d %d\n", forthTasks[forthState.forthCurrentTask].dataStackIndex, errorNumber);
			SMSG_DEBUG(forthTasks[forthState.forthCurrentTask].printBuffer);
#endif
			/* Call another FORTH word */
			bbc79Error();
		};
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_EMPTY;
	};
	PSMSG_DEBUG("bbc79QError")
}

void bbc79StoreCSP(void) {
	PSMSG_DEBUG("bbc79StoreCSP")
}

void bbc79Not(void) {
	PSMSG_DEBUG("bbc79Not")
}

void bbc79PFA(void) {
	PSMSG_DEBUG("bbc79PFA")
}

void bbc79CFA(void) {
	PSMSG_DEBUG("bbc79CFA")
}

void bbc79NFA(void) {
	PSMSG_DEBUG("bbc79NFA")
}

void bbc79LFA(void) {
	PSMSG_DEBUG("bbc79LFA")
}

void bbc79ULess(void) {
	PSMSG_DEBUG("bbc79ULess")
}

void bbc79Greater(void) {
	PSMSG_DEBUG("bbc79Greater")
}

void bbc79Equal(void) {
	PSMSG_DEBUG("bbc79Equal")
}

void bbc79Minus(void) {
	PSMSG_DEBUG("bbc79Minus")
}

void bbc79Smudge(void) {
	PSMSG_DEBUG("bbc79Smudge")
}

void bbc79Last(void) {
	PSMSG_DEBUG("bbc79Last")
}

void bbc79CComma(void) {
	PSMSG_DEBUG("bbc79CComma")
}

void bbc79Comma(void) {
	PSMSG_DEBUG("bbc79Comma")
}

void bbc79Space(void) {
	PSMSG_DEBUG("bbc79Comma")
}

void bbc79Allot(void) {
	PSMSG_DEBUG("bbc79Allot")
}

void bbc79Here(void) {
	PSMSG_DEBUG("bbc79Here")
}

void bbc79TwoMinus(void) {
	PSMSG_DEBUG("bbc79TwoMinus")
}

void bbc79OneMinus(void) {
	PSMSG_DEBUG("bbc79OneMinus")
}

void bbc79TwoPlus(void) {
	PSMSG_DEBUG("bbc79TwoPlus")
}

void bbc79OnePlus(void) {
	PSMSG_DEBUG("bbc79OnePlus")
}

void bbc79HLD(void) {
	PSMSG_DEBUG("bbc79HLD")
}

void bbc79RNum(void) {
	PSMSG_DEBUG("bbc79RNum")
}

void bbc79CSP(void) {
	PSMSG_DEBUG("bbc79CSP")
}

void bbc79DPL(void) {
	PSMSG_DEBUG("bbc79DPL")
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
	PSMSG_DEBUG("bbc79Base")
}

void bbc79State(void) {
	PSMSG_DEBUG("bbc79State")
}

void bbc79Current(void) {
	PSMSG_DEBUG("bbc79Current")
}

void bbc79Context(void) {
	PSMSG_DEBUG("bbc79Context")
}

void bbc79Offset(void) {
	PSMSG_DEBUG("bbc79Offset")
}

void bbc79SCR(void) {
	PSMSG_DEBUG("bbc79SCR")
}

void bbc79Out(void) {
	PSMSG_DEBUG("bbc79Out")
}

void bbc79ToIn(void) {
	PSMSG_DEBUG("bbc79ToIn")
}

void bbc79BLK(void) {
	PSMSG_DEBUG("bbc79BLK")
}

void bbc79VocLink(void) {
	PSMSG_DEBUG("bbc79VocLink")
}

void bbc79DP(void) {
	PSMSG_DEBUG("bbc79DP")
}

void bbc79Fence(void) {
	PSMSG_DEBUG("bbc79Fence")
}

void bbc79Warnung(void) {
	PSMSG_DEBUG("bbc79Warnung")
}

void bbc79Width(void) {
	PSMSG_DEBUG("bbc79Width")
}

void bbc79TIB(void) {
	PSMSG_DEBUG("bbc79TIB")
}

void bbc79R0(void) {
	PSMSG_DEBUG("bbc79R0")
}

void bbc79S0(void) {
	PSMSG_DEBUG("bbc79S0")
}

void bbc79PlusOrigin(void) {
	PSMSG_DEBUG("bbc79PlusOrigin")
}

void bbc79BSlashSCR(void) {
	PSMSG_DEBUG("bbc79BSlashSCR")
}

void bbc79BSlashBUF(void) {
	PSMSG_DEBUG("bbc79BSlashBUF")
}

void bbc79Limit(void) {
	PSMSG_DEBUG("bbc79Limit")
}

void bbc79First(void) {
	PSMSG_DEBUG("bbc79First")
}

void bbc79PAD(void) {
	PSMSG_DEBUG("bbc79PAD")
}

void CSlashL(void) {
	PSMSG_DEBUG("CSlashL")
}

void bbc79BL(void) {
	PSMSG_DEBUG("bbc79BL")
}

void bbc79Two(void) {
	PSMSG_DEBUG("bbc79Two")
}

void bbc79One(void) {
	PSMSG_DEBUG("bbc79One")
}

void bbc79Null(void) {
	PSMSG_DEBUG("bbc79Null")
}

void bbc79MinusOne(void) {
	PSMSG_DEBUG("bbc79MinusOne")
}

void bbc79MinusTwo(void) {
	PSMSG_DEBUG("bbc79MinusTwo")
}

void bbc79User(void) {
	PSMSG_DEBUG("bbc79User")
}

void bbc79Variable(void) {
	PSMSG_DEBUG("bbc79Variable")
}

void bbc79Constant(void) {
	PSMSG_DEBUG("bbc79Constant")
}

void bbc79RSemicolon(void) {
	PSMSG_DEBUG("bbc79RSemicolon")
}

void bbc79RColon(void) {
	PSMSG_DEBUG("bbc79RColon")
}

void bbc79Toggle(void) {
	PSMSG_DEBUG("bbc79Toggle")
}

void bbc79PlusStore(void) {
	PSMSG_DEBUG("bbc79PlusStore")
}

void bbc79Store(void) {
	if (forthTasks[forthState.forthCurrentTask].dataStackIndex >= 2) {
		CELL_INTEGER* address = (CELL_INTEGER*)forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex];
		*address = (CELL_INTEGER)forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex];
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_EMPTY;
	};
	PSMSG_DEBUG("bbc79Store")
}

void bbc79CStore(void) {
	if (forthTasks[forthState.forthCurrentTask].dataStackIndex >= 2) {
		char* address = (char*)forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex];
		*address = (char)forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex];
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_EMPTY;
	};
	PSMSG_DEBUG("bbc79CStore")
}

void bbc79Fetch(void) {
	if (forthTasks[forthState.forthCurrentTask].dataStackIndex) {
		CELL_INTEGER* address = (CELL_INTEGER*)forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex];
		forthTasks[forthState.forthCurrentTask].dataStackSpace[forthTasks[forthState.forthCurrentTask].dataStackIndex++] = *address;
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_EMPTY;
	};

	PSMSG_DEBUG("bbc79Fetch")
}

void bbc79CFetch(void) {
	if (forthTasks[forthState.forthCurrentTask].dataStackIndex >= 2) {
		char* address = (char*)forthTasks[forthState.forthCurrentTask].dataStackSpace[--forthTasks[forthState.forthCurrentTask].dataStackIndex];
		forthTasks[forthState.forthCurrentTask].dataStackSpace[forthTasks[forthState.forthCurrentTask].dataStackIndex++] = (CELL_INTEGER)*address;
	}
	else {
		forthTasks[forthState.forthCurrentTask].errorNumber = ERROR_DATASTACK_EMPTY;
	};
	PSMSG_DEBUG("bbc79CFetch")
}

void bbc79QFile(void) {
	PSMSG_DEBUG("bbc79QFile")
}

void bbc79Himem(void) {
	PSMSG_DEBUG("bbc79Himem")
}

void bbc79Page(void) {
	PSMSG_DEBUG("bbc79Page")
}

void bbc79Traverse(void) {
	PSMSG_DEBUG("bbc79Traverse")
}

void bbc79Rot(void) {
	PSMSG_DEBUG("bbc79Rot")
}

void bbc79TwentyVer(void) {
	PSMSG_DEBUG("bbc79TwentyVer")
}

void bbc79Over(void) {
	PSMSG_DEBUG("bbc79Over")
}

void bbc79TwoSwap(void) {
	PSMSG_DEBUG("bbc79TwoSwap")
}

void bbc79Swap(void) {
	PSMSG_DEBUG("bbc79Swap")
}

void bbc79TwoDup(void) {
	PSMSG_DEBUG("bbc79TwoDup")
}

void bbc79QDup(void) {
	PSMSG_DEBUG("bbc79QDup")
}

void bbc79Dup(void) {
	PSMSG_DEBUG("bbc79Dup")
}

void bbc79TwoDrop(void) {
	PSMSG_DEBUG("bbc79TwoDrop")
}

void bbc79Drop(void) {
	PSMSG_DEBUG("bbc79Drop")
}

void bbc79DNegate(void) {
	PSMSG_DEBUG("bbc79DNegate")
}

void bbc79Negate(void) {
	PSMSG_DEBUG("bbc79Negate")
}

#ifdef DPINTEGER_SUPPORT
void bbc79DPlus(void) {
	PSMSG_DEBUG("bbc79DPlus")
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
	PSMSG_DEBUG("bbc79Plus")
}

#ifdef DPINTEGER_SUPPORT
void bbc79DLess(void) {
	PSMSG_DEBUG("bbc79DLess")
}
#endif

void bbc79Less(void) {
	PSMSG_DEBUG("bbc79Less")
}

void bbc79ZeroLess(void) {
	PSMSG_DEBUG("bbc79ZeroLess")
}

void bbc79ZeroEqual(void) {
	PSMSG_DEBUG("bbc79ZeroEqual")
}

void bbc79Leave(void) {
	PSMSG_DEBUG("bbc79Leave")
}

void bbc79SwapBytes(void) {
	PSMSG_DEBUG("bbc79SwapBytes")
}

void bbc79RFrom(void) {
	PSMSG_DEBUG("bbc79RFrom")
}

void bbc79ToR(void) {
	PSMSG_DEBUG("bbc79ToR")
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

	PSMSG_DEBUG("bbc79RFetch")
}

void bbc79Exit(void) {
	PSMSG_DEBUG("bbc79Exit")
}

void bbc79Key(void) {
	PSMSG_DEBUG("bbc79Key")
}

void bbc79ZKey(void) {
	PSMSG_DEBUG("bbc79ZKey")
}

void bbc79QKey(void) {
	PSMSG_DEBUG("bbc79QKey")
}

void bbc79Xor(void) {
	PSMSG_DEBUG("bbc79Xor")
}

void bbc79Or(void) {
	PSMSG_DEBUG("bbc79Or")
}

void bbc79And(void) {
	PSMSG_DEBUG("bbc79And")
}

void bbc79USlash(void) {
	PSMSG_DEBUG("bbc79USlash")
}

void bbc79UStar(void) {
	PSMSG_DEBUG("bbc79UStar")
}

void bbc79CMove(void) {
	PSMSG_DEBUG("bbc79CMove")
}

void bbc79ToVDU(void) {
	PSMSG_DEBUG("bbc79ToVDU")
}

void bbc79Emit(void) {
	PSMSG_DEBUG("bbc79Emit")
}

void bbc79ZEmit(void) {
	PSMSG_DEBUG("bbc79ZEmit")
}

void bbc79RPStore(void) {
	PSMSG_DEBUG("bbc79RPStore")
}

void bbc79SPStore(void) {
	PSMSG_DEBUG("bbc79SPStore")
}

void bbc79RPFetch(void) {
	PSMSG_DEBUG("bbc79RPFetch")
}

void bbc79SPFetch(void) {
	PSMSG_DEBUG("bbc79SPFetch")
}

void bbc79Enclose(void) {
	PSMSG_DEBUG("bbc79Enclose")
}

void bbc79ZFind(void) {
	PSMSG_DEBUG("bbc79ZFind")
}

void bbc79Digit(void) {
	PSMSG_DEBUG("bbc79Digit")
}

void bbc79ModeAddr(void) {
	PSMSG_DEBUG("bbc79ModeAddr")
}

void bbc79HIAddr(void) {
	PSMSG_DEBUG("bbc79HIAddr")
}

void bbc79ZDO(void) {
	PSMSG_DEBUG("bbc79ZDO")
}

void bbc79I(void) {
	PSMSG_DEBUG("bbc79I")
}

void bbc79ZULoop(void) {
	PSMSG_DEBUG("bbc79ZULoop")
}

void bbc79ZPlusLoop(void) {
	PSMSG_DEBUG("bbc79ZPlusLoop")
}

void bbc79ZLoop(void) {
	PSMSG_DEBUG("bbc79ZLoop")
}

void bbc79ZeroBranch(void) {
	PSMSG_DEBUG("bbc79ZeroBranch")
}

void bbc79Branch(void) {
	PSMSG_DEBUG("bbc79Branch")
}

void bbc79FetchExecute(void) {
	PSMSG_DEBUG("bbc79FetchExecute")
}

void bbc79Execute(void) {
	PSMSG_DEBUG("bbc79Execute")
}

void bbc79Lit(void) {
	PSMSG_DEBUG("bbc79Lit")
}

#endif
