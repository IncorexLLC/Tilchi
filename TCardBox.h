// TCardBox.h
//---------------------------------------------------------------------------
#ifndef TCardBoxH
#define TCardBoxH

#include <comctrls.hpp>
//---------------------------------------------------------------------------
class TCardBox : public TRichEdit
{
protected:
	static DWORD CALLBACK StreamInCallback(DWORD dwCookie, LPBYTE pbBuff,
		LONG cb, LONG FAR *pcb);
	static DWORD CALLBACK StreamOutCallback(DWORD dwCookie, LPBYTE pbBuff,
		LONG cb, LONG FAR *pcb);

public:
	__fastcall virtual TCardBox(TComponent* AOwner);
	__fastcall virtual ~TCardBox(void);

	// the following two functions copy/paste the current selection to/from
	// a stream (similar to CopyToClipboard/PasteFromClipboard)
	void __fastcall CopyToStream(TStream* stream, bool selectionOnly = true,
		bool plainText = false, bool noObjects = false, bool plainRtf = false);
	void __fastcall PasteFromStream(TStream* stream, bool selectionOnly = true,
		bool plainText = false, bool plainRtf = false);

	// the following function copies RTF formatted text from the control
	// to another TRichEdit control
	void __fastcall CopyRtfTo(TCardBox& toRichEdit, bool selectionOnly = true,
		bool replaceSelection = true);

	// the following two functions fetch RTF formatted text into an AnsiString
	// and insert formatted text from an AnsiString into the control
	AnsiString __fastcall GetRtf(bool selectionOnly = true);
	void __fastcall PutRtf(AnsiString rtfText, bool replaceSelection = true);
};
//---------------------------------------------------------------------------
#endif

