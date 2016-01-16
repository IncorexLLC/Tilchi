// Borland C++ Builder
// Copyright (c) 1995, 2005 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Stohtmlhelp.pas' rev: 10.00

#ifndef StohtmlhelpHPP
#define StohtmlhelpHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <Sysinit.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Helpintfs.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Stohtmlhelp
{
//-- type declarations -------------------------------------------------------
typedef HWND __stdcall (*THtmlHelpA)(HWND hwndCaller, char * pszFile, unsigned uCommand, unsigned dwData);

class DELPHICLASS TStoHtmlHelpViewer;
class PASCALIMPLEMENTATION TStoHtmlHelpViewer : public System::TInterfacedObject 
{
	typedef System::TInterfacedObject inherited;
	
private:
	int FViewerID;
	AnsiString FViewerName;
	THtmlHelpA FHtmlHelpFunction;
	
protected:
	unsigned FHHCtrlHandle;
	Helpintfs::_di_IHelpManager FHelpManager;
	AnsiString FHtmlExt;
	AnsiString __fastcall GetHelpFileName();
	bool __fastcall IsChmFile(const AnsiString FileName);
	void __fastcall InternalShutdown(void);
	void __fastcall CallHtmlHelp(const AnsiString HelpFile, unsigned uCommand, unsigned dwData);
	AnsiString __fastcall GetViewerName();
	int __fastcall UnderstandsKeyword(const AnsiString HelpString);
	Classes::TStringList* __fastcall GetHelpStrings(const AnsiString HelpString);
	bool __fastcall CanShowTableOfContents(void);
	void __fastcall ShowTableOfContents(void);
	void __fastcall ShowHelp(const AnsiString HelpString);
	void __fastcall NotifyID(const int ViewerID);
	void __fastcall SoftShutDown(void);
	void __fastcall ShutDown(void);
	bool __fastcall UnderstandsTopic(const AnsiString Topic);
	void __fastcall DisplayTopic(const AnsiString Topic);
	bool __fastcall UnderstandsContext(const int ContextID, const AnsiString HelpFileName);
	void __fastcall DisplayHelpByContext(const int ContextID, const AnsiString HelpFileName);
	int __fastcall SelectKeyword(Classes::TStrings* Keywords);
	int __fastcall TableOfContents(Classes::TStrings* Contents);
	
public:
	__fastcall virtual TStoHtmlHelpViewer(void);
	__fastcall virtual ~TStoHtmlHelpViewer(void);
	__property AnsiString HtmlExt = {read=FHtmlExt, write=FHtmlExt};
private:
	void *__IExtendedHelpViewer;	/* Helpintfs::IExtendedHelpViewer */
	void *__IHelpSelector;	/* Helpintfs::IHelpSelector */
	
public:
	operator IHelpSelector*(void) { return (IHelpSelector*)&__IHelpSelector; }
	operator IExtendedHelpViewer*(void) { return (IExtendedHelpViewer*)&__IExtendedHelpViewer; }
	operator ICustomHelpViewer*(void) { return (ICustomHelpViewer*)&__IExtendedHelpViewer; }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TStoHtmlHelpViewer* StoHelpViewer;

}	/* namespace Stohtmlhelp */
using namespace Stohtmlhelp;
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Stohtmlhelp
