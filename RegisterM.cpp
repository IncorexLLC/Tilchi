//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include "RegisterMForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzButton"
#pragma link "RzEdit"
#pragma link "RzLabel"
#pragma link "RzPanel"
#pragma resource "*.dfm"
TRegisterMForm *RegisterMForm;
//---------------------------------------------------------------------------
__fastcall TRegisterMFormClass::TRegisterMFormClass(TComponent* Owner) : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TRegisterMFormClass::ApplyButtonClick(TObject *Sender)
{
 	RegMemo->CopyToClipboard();	
}
//---------------------------------------------------------------------------
void __fastcall TRegisterMFormClass::HelpButtonClick(TObject *Sender)
{
 	Application->HelpJump("register_email");	
}
//---------------------------------------------------------------------------
void __fastcall TRegisterMFormClass::CloseLabelClick(TObject *Sender)
{
	Close();	
}
//---------------------------------------------------------------------------
