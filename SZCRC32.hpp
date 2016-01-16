// Borland C++ Builder
// Copyright (c) 1995, 2005 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Szcrc32.pas' rev: 10.00

#ifndef Szcrc32HPP
#define Szcrc32HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <Sysinit.hpp>	// Pascal unit
#include <Types.hpp>	// Pascal unit
#include <Sysutils.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Szcrc32
{
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
extern PACKAGE unsigned __fastcall SZCRC32Update(void * P, int ByteCount, unsigned CurCrc);
extern PACKAGE unsigned __fastcall SZCRC32Full(void * P, int ByteCount);
extern PACKAGE unsigned __fastcall SZCRC32UpdateStream(Classes::TStream* Stream, unsigned CurCrc);
extern PACKAGE unsigned __fastcall SZCRC32FullStream(Classes::TStream* Stream);
extern PACKAGE unsigned __fastcall SZCRC32File(AnsiString FileName);
extern PACKAGE bool __fastcall SZCRC32Test(void);

}	/* namespace Szcrc32 */
using namespace Szcrc32;
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Szcrc32
