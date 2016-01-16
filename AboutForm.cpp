//$$---- Form CPP ----
//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include "AboutForm.h"
#include "DataFile.hpp"
#include "ThemidaSDK.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzLabel"
#pragma link "RzPanel"
#pragma link "RzButton"
#pragma link "RzTabs"
#pragma link "RzEdit"
#pragma resource "*.dfm"
TAboutFormClass *AboutFormClass;
//---------------------------------------------------------------------------
__fastcall TAboutFormClass::TAboutFormClass(TComponent* Owner) : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TAboutFormClass::UniWebLabelClick(TObject *Sender)
{
	ShellExecute(Handle, "open", "http://www.incorex.com", 0, 0, SW_SHOW);
}
//---------------------------------------------------------------------------
void __fastcall TAboutFormClass::CloseLabelClick(TObject *Sender)
{
 	Close();
}
//---------------------------------------------------------------------------
void __fastcall TAboutFormClass::TopPanelMouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
 	bottonPressed = true;
	prevX = X;
	prevY = Y;
}
//---------------------------------------------------------------------------
void __fastcall TAboutFormClass::TopPanelMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
 	if (bottonPressed) {
		Left += X - prevX;
		Top += Y - prevY;
	}	
}
//---------------------------------------------------------------------------
void __fastcall TAboutFormClass::TopPanelMouseUp(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
	bottonPressed = false;
}
//---------------------------------------------------------------------------
void __fastcall TAboutFormClass::AboutImageClick(TObject *Sender)
{
	InfoPanel->Visible = True;
 	LicPanel->Visible = False;
}
//---------------------------------------------------------------------------
void __fastcall TAboutFormClass::LicImageClick(TObject *Sender)
{
	InfoPanel->Visible = False;
	LicPanel->Visible = True;
 	LicenseMemo->SetFocus();
}
//---------------------------------------------------------------------------
void __fastcall TAboutFormClass::SetLinkCursor(TControl *Control)
{
	Control->Cursor = (TCursor) 1;
}
//---------------------------------------------------------------------------
void TAboutFormClass::ChangeGUIStyle()
{
	PFont->Style = TFontStyles() << fsUnderline;
}
//---------------------------------------------------------------------------
void __fastcall TAboutFormClass::AboutLabelMouseEnter(TObject *Sender)
{
	PFont = AboutLabel->Font;
	ChangeGUIStyle();
}
//---------------------------------------------------------------------------
void __fastcall TAboutFormClass::LicLabelMouseEnter(TObject *Sender)
{
	PFont = LicLabel->Font;
	ChangeGUIStyle();
}
//---------------------------------------------------------------------------
void __fastcall TAboutFormClass::AboutImageMouseLeave(TObject *Sender)
{
	if (PFont != AboutLabel->Font)
		PFont->Style = AboutLabel->Font->Style;
	else
		PFont->Style = LicLabel->Font->Style;
}
//---------------------------------------------------------------------------
void __fastcall TAboutFormClass::CloseLabelMouseEnter(TObject *Sender)
{
	PFont = CloseLabel->Font;
	ChangeGUIStyle();
}
//---------------------------------------------------------------------------
void __fastcall TAboutFormClass::LicenseMemoClick(TObject *Sender)
{
	HideCaret(LicenseMemo->Handle);
}
//---------------------------------------------------------------------------
void __fastcall TAboutFormClass::FormShow(TObject *Sender)
{
	VM_START
	TDataFile *lData = new TDataFile("Tilchi.ldf");
	NameLabel->Caption = lData->ReadString("TilchiLic", "US_NAME", "");
	LastNameLabel->Caption = lData->ReadString("TilchiLic", "US_LAST_NAME", "");
	OrgLabel->Caption = lData->ReadString("TilchiLic", "US_ORG", "");
	SerialLabel->Caption = lData->ReadString("TilchiLic", "US_SERIAL", "");
	KeyLabel->Caption = lData->ReadString("TilchiLic", "US_KEY", "");
	delete lData;
	VM_END

	SetLinkCursor(AboutImage);
	SetLinkCursor(LicImage);
	SetLinkCursor(AboutLabel);
	SetLinkCursor(LicLabel);
	SetLinkCursor(CloseImage);
	SetLinkCursor(CloseLabel);
	SetLinkCursor(UniWebLabel);
}
//---------------------------------------------------------------------------

