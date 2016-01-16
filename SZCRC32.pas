{$O+} // Optimization must be ON

unit SZCRC32;

{ Version 1.0.0 }

interface

uses Types, SysUtils, Classes;

function SZCRC32Update(P: Pointer; ByteCount: LongInt; CurCrc : DWORD): DWORD;
function SZCRC32Full  (P: Pointer; ByteCount: LongInt): DWORD;

function SZCRC32UpdateStream(Stream : TStream; CurCrc : DWORD) : DWORD;
function SZCRC32FullStream  (Stream : TStream) : DWORD;

function SZCRC32File(FileName : AnsiString) : DWORD;

function SZCRC32Test: Boolean;

implementation

const
  CRC32BASE: DWORD = $FFFFFFFF;

Var
  CRC32Table: array[0..255] of DWORD;

procedure SZCRC32MakeTable;
// Making the 32-bit CRC table
var
  i,j: integer;
  r: DWORD;
begin
  for i:= 0 to 255 do
  begin
    r := i;
    for j:=1 to 8 do
      if (r and 1) = 1 then
        r := (r shr 1) xor DWORD($EDB88320)
      else
        r := (r shr 1);

      CRC32Table[i] := r
  end;
end;

function SZCRC32Update(P: Pointer; ByteCount: LongInt; CurCrc : DWORD): DWORD;
// Updating existed 32-bit CRC with new calaculated
var
  CRCValue: DWORD;
  i: LongInt;
  b: ^Byte;
begin
  b := p;
  CRCValue := CurCrc;
  for i := 1 to ByteCount do
  begin
    CRCvalue := (CRCvalue shr 8) xor
                CRC32Table[b^ xor byte(CRCvalue and $FF)];
    inc(b);
  end;
  Result := CRCValue;
end;

function SZCRC32Full(P: Pointer; ByteCount: LongInt): DWORD;
// PKzip compatible - results with inverted bits
begin
  Result := not DWORD(SZCRC32Update(P, ByteCount, CRC32BASE));
end;

function SZCRC32UpdateStream(Stream : TStream; CurCrc : DWORD) : DWORD;
// Calculates the 32-bit CRC of a stream
// For PKZip compatibility, result need to be inverted manually only for finally CRC value
const
  CRC32BUFSIZE = 2048;
var
  BufArray : array[0..(CRC32BUFSIZE-1)] of Byte;
  Res   : LongInt;
  CRC32 : DWORD;
begin
  // Initialize 32-bit CRC
  CRC32 := CurCrc;
  repeat
    Res := Stream.Read(BufArray, CRC32BUFSIZE);

    CRC32 := SZCRC32Update(@BufArray, Res, CRC32);

  until (Res <> LongInt(CRC32BUFSIZE));
  Result:=CRC32
end;

function SZCRC32FullStream(Stream : TStream) : DWORD;
// Calculates the 32-bit CRC of a stream
// PKZip compatible, result is inverted
begin
  Result := not DWORD(SZCRC32UpdateStream(Stream, CRC32BASE));
end;

function SZCRC32File(FileName : AnsiString) : DWORD;
// Calculates the 32-bit CRC of a file
// PKZip compatible
var
  FileStream: TFileStream;
begin
  FileStream := TFileStream.Create(FileName, fmOpenRead or fmShareDenyWrite);
  try
    Result := not DWORD(SZCRC32UpdateStream(FileStream, CRC32BASE));
  finally
     FileStream.Free;
  end;
end;

function SZCRC32Test: Boolean;
// Testing the 32-bit CRC algorithm
const
  CRC: DWORD =$29058C73;
var
  TestCRC: DWORD;
  TestData : Pointer;
  i: integer;
begin

  TestData:= GetMemory(256);

  for i:=0 to 255 do
    pbyte(pchar(TestData) +i)^:=i;

  TestCRC := SZCRC32Full(TestData, 256);
  FreeMemory(TestData);

  if (TestCRC<>CRC)
  then
    Result := false
  else
    Result := true;
end;

initialization
  // Making the 32-bit CRC table

  SZCRC32MakeTable;
end.
