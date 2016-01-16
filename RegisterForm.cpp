//$$---- Form CPP ----
//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include "RegisterForm.h"
#include "RegisterMForm.h"
#include "ThemidaSDK.h"
#include "md5.h"
#include "DataFile.hpp"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzButton"
#pragma link "RzEdit"
#pragma link "RzLabel"
#pragma link "RzPanel"
#pragma link "RzCommon"
#pragma resource "*.dfm"
TRegisterFormClass *RegisterFormClass;
//---------------------------------------------------------------------------
__fastcall TRegisterFormClass::TRegisterFormClass(TComponent* Owner) : TForm(Owner)
{
	bottonPressed = false;
	// Loading DLL for HID
VM_START_WITHLEVEL(1)
	if(!FileExists("tilsysdrv.dll")) {
		MessageBox(NULL, "Необходимые библиотеки не найдены!", "Внимание!",
			MB_OK | MB_ICONERROR);
		Application->Terminate();
	}
	else {
		hDLL = LoadLibrary("tilsysdrv.dll");

		GetHardwareID = (PChar( __stdcall* )()) GetProcAddress(hDLL, "GetHardwardID");
		SS_R = (int(__stdcall*)(PChar Name, PChar Key)) GetProcAddress(hDLL,"SS_R");
		SS_R("6D36796170616373716B75502B7342502E", "84B7E0A0E2B1AAF3D5F1C995");
	}
VM_END
	RegisterMFormClass = new TRegisterMFormClass(this);
}
//---------------------------------------------------------------------------
AnsiString TRegisterFormClass::MD5(const AnsiString in)
{
	char out_char[32];
	GetMD5(in.c_str(), in.Length(), out_char);
	return AnsiString(out_char);
}
//---------------------------------------------------------------------------
void __fastcall TRegisterFormClass::KeyCopyButtonClick(TObject *Sender)
{
	KeyEdit->PasteFromClipboard();	
}
//---------------------------------------------------------------------------
void __fastcall TRegisterFormClass::NameCopyButtonClick(TObject *Sender)
{
	NameEdit->SelectAll();
	NameEdit->CopyToClipboard();
}
//---------------------------------------------------------------------------
void __fastcall TRegisterFormClass::HIDCopyButtonClick(TObject *Sender)
{
	HIDEdit->SelectAll();
	HIDEdit->CopyToClipboard();
}
//---------------------------------------------------------------------------
void __fastcall TRegisterFormClass::SerialCopyButtonClick(TObject *Sender)
{
	SerialEdit->SelectAll();
	SerialEdit->CopyToClipboard();
}
//---------------------------------------------------------------------------
void __fastcall TRegisterFormClass::OrgCopyButtonClick(TObject *Sender)
{
	OrgEdit->SelectAll();
	OrgEdit->CopyToClipboard();
}
//---------------------------------------------------------------------------
void __fastcall TRegisterFormClass::ApplyButtonClick(TObject *Sender)
{
VM_START_WITHLEVEL(1)
	if (CheckData()) {
		TDataFile *aboutData = new TDataFile("Tilchi.ldf");
		aboutData->WriteString("TilchiLic","US_NAME", NameEdit->Text);
		aboutData->WriteString("TilchiLic","US_LAST_NAME", LastNameEdit->Text);
		aboutData->WriteString("TilchiLic","US_ORG", OrgEdit->Text);
		aboutData->WriteString("TilchiLic","US_SERIAL", SerialEdit->Text);
		aboutData->WriteString("TilchiLic","US_HID", HIDEdit->Text);
		aboutData->WriteString("TilchiLic","US_KEY", KeyEdit->Text);
		delete aboutData;

		MessageDlg("Спасибо за регистрацию! Перезапустите преложение!",
			mtInformation, TMsgDlgButtons() << mbOK, 0);
		Application->Terminate();
	}
VM_END
}
//---------------------------------------------------------------------------
void __fastcall TRegisterFormClass::CloseLabelClick(TObject *Sender)
{
	Application->Terminate();
}
//---------------------------------------------------------------------------
void __fastcall TRegisterFormClass::TopPanelMouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
 	bottonPressed = true;
	prevX = X;
	prevY = Y;
}
//---------------------------------------------------------------------------
void __fastcall TRegisterFormClass::TopPanelMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
 	if (bottonPressed) {
		Left += X - prevX;
		Top += Y - prevY;
	}
}
//---------------------------------------------------------------------------
void __fastcall TRegisterFormClass::TopPanelMouseUp(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
	bottonPressed = false;
}
//---------------------------------------------------------------------------
void TRegisterFormClass::ChangeGUIStyle()
{
	PFont->Style = TFontStyles() << fsUnderline;
}
//---------------------------------------------------------------------------
void __fastcall TRegisterFormClass::CloseLabelMouseEnter(TObject *Sender)
{
   PFont = CloseLabel->Font;
   ChangeGUIStyle();
}
//---------------------------------------------------------------------------
void __fastcall TRegisterFormClass::CloseLabelMouseLeave(TObject *Sender)
{
	if (PFont != CloseLabel->Font)
		PFont->Style = CloseLabel->Font->Style;
	else
		PFont->Style = RegisterLabel->Font->Style;
}
//---------------------------------------------------------------------------
void __fastcall TRegisterFormClass::FormCreate(TObject *Sender)
{
	Screen->Cursors[1] = LoadCursor(HInstance,"LINK_CURSOR");
	CloseLabel->Cursor = (TCursor) 1;
  	CloseImage->Cursor = (TCursor) 1;
}
//---------------------------------------------------------------------------
void __fastcall TRegisterFormClass::SerialEditEnter(TObject *Sender)
{
	SetEditColor(SerialEdit,true);
}
//---------------------------------------------------------------------------
void __fastcall TRegisterFormClass::SerialEditExit(TObject *Sender)
{
	SetEditColor(SerialEdit,false);
}
//---------------------------------------------------------------------------
void __fastcall TRegisterFormClass::NameEditEnter(TObject *Sender)
{
	SetEditColor(NameEdit,true);
}
//---------------------------------------------------------------------------
void __fastcall TRegisterFormClass::NameEditExit(TObject *Sender)
{
	SetEditColor(NameEdit,false);
}
//---------------------------------------------------------------------------
void __fastcall TRegisterFormClass::OrgEditEnter(TObject *Sender)
{
	SetEditColor(OrgEdit,true);
}
//---------------------------------------------------------------------------
void __fastcall TRegisterFormClass::OrgEditExit(TObject *Sender)
{
	SetEditColor(OrgEdit,false);
}
//---------------------------------------------------------------------------
void __fastcall TRegisterFormClass::KeyEditEnter(TObject *Sender)
{
	SetEditColor(KeyEdit,true);
}
//---------------------------------------------------------------------------
void __fastcall TRegisterFormClass::KeyEditExit(TObject *Sender)
{
	SetEditColor(KeyEdit,false);
}
//---------------------------------------------------------------------------
void TRegisterFormClass::SetEditColor(TRzEdit *curEdit, bool isActive)
{
	AnsiString Color = "$00F5F6F7";
	if (isActive)
		curEdit->Color = clWhite;
	else
		curEdit->Color = StringToColor(Color);
}
//---------------------------------------------------------------------------
void __fastcall TRegisterFormClass::FormShow(TObject *Sender)
{
VM_START_WITHLEVEL(1)
	AnsiString HID = MD5(GetHardwareID()).UpperCase();
	HIDEdit->Text = HID.SubString(1, 16) + "-" + HID.SubString(17, 16);
VM_END	
}
//---------------------------------------------------------------------------
void __fastcall TRegisterFormClass::LastNameEditEnter(TObject *Sender)
{
	SetEditColor(LastNameEdit,true);
}
//---------------------------------------------------------------------------
void __fastcall TRegisterFormClass::LastNameEditExit(TObject *Sender)
{
	SetEditColor(LastNameEdit,false);
}
//---------------------------------------------------------------------------
void __fastcall TRegisterFormClass::RegWebButtonClick(TObject *Sender)
{
	if (CheckData()) {
		ShellExecute(Handle, "open", "https://www.incorex.com/register.htm", 0, 0, SW_SHOW);
	}
}
//---------------------------------------------------------------------------
void __fastcall TRegisterFormClass::RegWebHelpButtonClick(TObject *Sender)
{
	Application->HelpJump("register_site");
}
//---------------------------------------------------------------------------
void __fastcall TRegisterFormClass::RegEmailHelpButtonClick(TObject *Sender)
{
	Application->HelpJump("register_email");
}
//---------------------------------------------------------------------------
void __fastcall TRegisterFormClass::HelpButtonClick(TObject *Sender)
{
	Application->HelpJump("register");
}
//---------------------------------------------------------------------------
void __fastcall TRegisterFormClass::RegEmailButtonClick(TObject *Sender)
{
	if (CheckData()) {   
		AnsiString RegData;
		RegData = "--------------------------------------------";
		RegData += "-----------------------------------\r\n";
		RegData += "Имя: " + NameEdit->Text + "\r\n";
		RegData += "Фамилия: " + LastNameEdit->Text + "\r\n";
		RegData += "Организация: " + OrgEdit->Text + "\r\n";
		RegData += "Серийный номер: " + SerialEdit->Text + "\r\n";
		RegData += "Артикульный номер: " + HIDEdit->Text + "\r\n";
		RegData += "--------------------------------------------";
		RegData += "-----------------------------------\r\n";
		RegisterMFormClass->RegMemo->Text = RegData;
		RegisterMFormClass->ShowModal();
	}
}
//---------------------------------------------------------------------------
bool TRegisterFormClass::CheckData()
{
	if (NameEdit->Text.IsEmpty() || LastNameEdit->Text.IsEmpty() ||
		OrgEdit->Text.IsEmpty() || SerialEdit->Text.IsEmpty()) {
			MessageDlg("Значение полей не может быть пустым.",
			mtInformation, TMsgDlgButtons() << mbOK, 0);
			return false;
	}
	return true;
}
//---------------------------------------------------------------------------
