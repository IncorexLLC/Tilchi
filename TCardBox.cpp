// TCardBox.cpp
//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include "TCardBox.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
//---------------------------------------------------------------------------
__fastcall TCardBox::TCardBox(TComponent* AOwner) : TRichEdit(AOwner)
{
}
//---------------------------------------------------------------------------
__fastcall TCardBox::~TCardBox(void)
{
}
//---------------------------------------------------------------------------
// WinAPI callback
//
DWORD CALLBACK TCardBox::StreamInCallback(DWORD dwCookie, LPBYTE pbBuff,
	LONG cb, LONG FAR *pcb)
{
	TStream* stream = reinterpret_cast<TStream*>(dwCookie);
	bool result = 0;
	*pcb = 0;
	try {
		*pcb = stream->Read(pbBuff, cb);
		}
	catch (EReadError& e) {
		result = 1;
		}
	return result;
}
//---------------------------------------------------------------------------
// WinAPI callback
//
DWORD CALLBACK TCardBox::StreamOutCallback(DWORD dwCookie, LPBYTE pbBuff,
	LONG cb, LONG FAR *pcb)
{
	TStream* stream = reinterpret_cast<TStream*>(dwCookie);
	bool result = 0;
	*pcb = 0;
	try {
		*pcb = stream->Write(pbBuff, cb);
		}
	catch (EWriteError& e) {
		result = 1;
		}
	return result;
}
//---------------------------------------------------------------------------
// copy to a stream
//
//   stream - existing TStream (usually a TMemoryStream)
//   selectionOnly - copy only selected text
//   plainText - convert to plain text
//   noObjects - insert spaces in place of OLE objects; note that OLE object
//     embedding is not supported by TRichEdit controls -- you can add support
//     using examples available at the site
//   plainRtf - ignore language-specific RTF codes
//
// note: text is appended to the string at the current stream position
//
void __fastcall TCardBox::CopyToStream(TStream* stream,
	bool selectionOnly, bool plainText, bool noObjects, bool plainRtf)
{
	TEditStream editStream;
	WPARAM format = 0;

	if (selectionOnly) format |= SFF_SELECTION;
	if (plainRtf) format |= SFF_PLAINRTF;
	if (plainText) format |= (noObjects) ? SF_TEXT : SF_TEXTIZED;
	else format |= (noObjects) ? SF_RTFNOOBJS : SF_RTF;

	editStream.dwCookie = (DWORD) stream;
	editStream.dwError = 0;
	editStream.pfnCallback = StreamOutCallback;

	::SendMessage(Handle, EM_STREAMOUT, format, (LPARAM) &editStream);

	if (editStream.dwError) throw EOutOfResources("Failed to save stream.");
}
//---------------------------------------------------------------------------
// copy from a stream
//
//   stream - exisiting stream; note that stream is not rewound prior to
//     inserting the text into the control
//   selectionOnly - replace current selection (if selection empty, inserts
//      text; if false, replaces entire contents of control)
//   plainText - convert to plain text
//   plainRtf - ignore language-specific RTF codes
//
// note: if you CopyToStream(..., plainText = true...) and then paste back
//   from the stream with PasteFromStream(..., plainText = false...), the
//   WinAPI will return an error condition -- that is, you must paste valid
//   RTF when calling this function with plainText = false.
//
void __fastcall TCardBox::PasteFromStream(TStream* stream,
	bool selectionOnly, bool plainText, bool plainRtf)
{
	TEditStream editStream;
	WPARAM format = 0;

	if (selectionOnly) format |= SFF_SELECTION;
	if (plainRtf) format |= SFF_PLAINRTF;
	format |= (plainText) ? SF_TEXT : SF_RTF;

	editStream.dwCookie = (DWORD) stream;
	editStream.dwError = 0;
	editStream.pfnCallback = StreamInCallback;

	::SendMessage(Handle, EM_STREAMIN, format, (LPARAM) &editStream);

	//if (editStream.dwError) throw EOutOfResources("Failed to load stream.");
}
//---------------------------------------------------------------------------
// copy RTF from one RE control to another
//
//   toRichEdit - TRichEditRawRtf into which to insert the text
//   selectionOnly - copy only selected text from source
//   replaceSelection - replace selected text in destination (if selection
//   empty, inserts text; if false, replaces entire contents of control)
//
void __fastcall TCardBox::CopyRtfTo(TCardBox& toRichEdit,
	bool selectionOnly, bool replaceSelection)
{
	TMemoryStream* memStream = new TMemoryStream();

	CopyToStream(memStream, selectionOnly);

	memStream->Seek(0, soFromBeginning);
	toRichEdit.PasteFromStream(memStream, replaceSelection);

	delete memStream;
}
//---------------------------------------------------------------------------
// copy RTF encoded text into an AnsiString. note that this function is not
// particularly efficient, but I do not know of any way to determine in
// advance how large a buffer to allocate, so I have to use a stream as
// an intermediate buffer.  I would suggest that you not use this to get
// large blocks of text; there may be size limitations in AnsiString, also.
//
//   selectionOnly - copy only selected text into string; if false, copy
//     entire contents of control into string
//
AnsiString __fastcall TCardBox::GetRtf(bool selectionOnly)
{
	// create a memory stream and get the text
	TMemoryStream* memStream = new TMemoryStream();
	CopyToStream(memStream, selectionOnly);
	memStream->Seek(0, soFromBeginning);

	// allocate a buffer of sufficient size and copy the rtf into it
	char* buf = new char[memStream->Size];
	memStream->ReadBuffer(buf, memStream->Size);

	// discard stream
	delete memStream;

	// insert text into an AnsiString, free buffer, and return
	AnsiString s(buf);
	delete[] buf;
	return s;
}
//---------------------------------------------------------------------------
// copy RTF encoded text from an AnsiString into the control. note that this
// function is not particularly efficient -- it could be made more efficient
// by writing a version of StreamInCallback() modified to work directly with
// a buffer.  if you are using this for large blocks of text, consider
// writing such a version yourself.
//
//   replaceSelection - replace selected text (if selection empty, inserts
//     text; if false, replaces entire contents of control)
//
// note: inserting invalid RTF codes may not raise an exception -- my tests
// indicate that the control simply interprets the RTF as best it can....
//
void __fastcall TCardBox::PutRtf(AnsiString rtfText, bool replaceSelection)
{
	// create a memory stream and put the text into it
	TMemoryStream* memStream = new TMemoryStream();
	memStream->WriteBuffer(rtfText.c_str(), rtfText.Length() + 1);

	// rewind stream and insert into control
	memStream->Seek(0, soFromBeginning);
	PasteFromStream(memStream, replaceSelection);

	// discard stream
	delete memStream;
}
//---------------------------------------------------------------------------
// end TCardBox.cpp
//---------------------------------------------------------------------------