#pragma hdrstop
#include "cBlowfish.h"
#pragma package(smart_init)

AnsiString cBlowfish::EncodeChypher( const AnsiString MegaText )
{
  unsigned buf_size = MegaText.Length();
  buf_size += (8-(buf_size%8));
  char* buf = new char[ buf_size ];
  for( unsigned i=0; i<buf_size; i++ )
        buf[ i ] = '\0';
  strcpy( buf, MegaText.c_str() );
  Encode( buf, buf, buf_size );
  return AnsiString(buf);
}
//---------------------------------------------------------------------------
AnsiString cBlowfish::DecodeChypher( const AnsiString MegaText )
{
  unsigned buf_size = MegaText.Length();
  buf_size += (8-(buf_size%8));
  char* buf = new char[ buf_size ];
  for( unsigned i=0; i<buf_size; i++ )
		buf[ i ] = '\0';
  strcpy( buf, MegaText.c_str() );
  Decode( buf, buf, buf_size );
  return AnsiString(buf);
}
//---------------------------------------------------------------------------
bool cBlowfish::SaveToFile( const AnsiString &FileName ){
  AnsiString MegaText = Lines->Text;
  unsigned buf_size = MegaText.Length(); buf_size += (8-(buf_size%8));

  char* buf = new char[ buf_size ];
  for( unsigned i=0;i<buf_size;i++ )buf[ i ] = '\0';
  strcpy( buf, MegaText.c_str() );

  FILE *fn = fopen( FileName.c_str(), "wb" );
  if( !fn )return false;

  Encode( buf, buf, buf_size );
  fwrite( buf, buf_size, 1, fn );

  delete []buf;
  return fclose( fn ), true;
}
//---------------------------------------------------------------------------
bool cBlowfish::LoadFromFile( const AnsiString &FileName ){
  const unsigned short buf_size = 1024;
  char buf[ buf_size + 8 ] = { 0 };
  char decode_buf[ buf_size + 8 ] = { 0 };

  FILE *fn = fopen( FileName.c_str(), "rb" );
  if( !fn )return false;

  fseek( fn, SEEK_SET, SEEK_END );
  int len = ftell( fn );
  fseek( fn, SEEK_SET, 0 );

  AnsiString MegaText;
  do{
    int decode_size = buf_size < len ? buf_size : len;
    fread( buf, decode_size, 1, fn );
    Decode( buf, decode_buf, decode_size ); decode_buf[ decode_size ] = '\0';
    MegaText += decode_buf;
  } while( (len-=buf_size) > 0 );
  Lines->Text = MegaText;

  return fclose( fn ), true;
}
//---------------------------------------------------------------------------

 
