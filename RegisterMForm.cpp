//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include "RegisterMForm.h"
#include "RegisterForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzButton"
#pragma link "RzEdit"
#pragma link "RzLabel"
#pragma link "RzPanel"
#pragma resource "*.dfm"
TRegisterMFormClass *RegisterMFormClass;
//---------------------------------------------------------------------------
__fastcall TRegisterMFormClass::TRegisterMFormClass(TComponent* Owner) : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TRegisterMFormClass::ApplyButtonClick(TObject *Sender)
{
	RegMemo->SelectAll();
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
void __fastcall TRegisterMFormClass::TopPanelMouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
	bottonPressed = true;
	prevX = X;
	prevY = Y;
}
//---------------------------------------------------------------------------
void __fastcall TRegisterMFormClass::TopPanelMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
 	if (bottonPressed) {
		Left += X - prevX;
		Top += Y - prevY;
	}
}
//---------------------------------------------------------------------------

void __fastcall TRegisterMFormClass::TopPanelMouseUp(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
	bottonPressed = false;	
}
//---------------------------------------------------------------------------
void __fastcall TRegisterMFormClass::FormCreate(TObject *Sender)
{
	Screen->Cursors[1] = LoadCursor(HInstance,"LINK_CURSOR");
	CloseLabel->Cursor = (TCursor) 1;
	CloseImage->Cursor = (TCursor) 1;
}
//---------------------------------------------------------------------------

