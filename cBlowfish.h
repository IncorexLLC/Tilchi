//---------------------------------------------------------------------------
#ifndef cBlowfishH
#define cBlowfishH

#include <vcl.h>
#include <stdio.h>
#include "blowfish.h"

class cBlowfish: public CBlowFish{
  private:
    TStringList            *m_lines;

  public:
   ~cBlowfish(){ delete m_lines; }
    cBlowfish(){ m_lines = new TStringList; }
    cBlowfish( char *key ): CBlowFish( key ){ m_lines = new TStringList; }

	bool SaveToFile(const AnsiString &FileName);
	bool LoadFromFile(const AnsiString &FileName);
	AnsiString EncodeChypher(const AnsiString MegaText);
	AnsiString DecodeChypher(const AnsiString MegaText);

    __property TStringList* Lines = { read = m_lines, write = m_lines };
};

//---------------------------------------------------------------------------
#endif
