//$$---- Form CPP ----
//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include "SettingsForm.h"            
#include "MainForm.h"
#include "pendlg.hpp"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzLabel"
#pragma link "RzPanel"
#pragma link "RzTreeVw"
#pragma link "RzButton"
#pragma link "RzRadChk"
#pragma link "RzCmboBx"
#pragma resource "*.dfm"
TSettingsFormClass *SettingsFormClass;
//---------------------------------------------------------------------------
__fastcall TSettingsFormClass::TSettingsFormClass(TComponent* Owner) : TForm(Owner)
{                
	bottonPressed = false;
	// Initializing fonts
	ListFont = new TFont();
	ListFont->Name = "Tahoma";
	ListFont->Size = 9;
	EditFont = new TFont();
	EditFont->Name = "Tahoma";
	EditFont->Size = 9;
	CardFont = new TFont();
	CardFont->Name = "Arial";
	CardFont->Size = 10;
}
//---------------------------------------------------------------------------
void __fastcall TSettingsFormClass::CloseLabelClick(TObject *Sender)
{
	Close();	
}
//---------------------------------------------------------------------------
void __fastcall TSettingsFormClass::TopPanelMouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
	bottonPressed = true;
	prevX = X;
	prevY = Y;		
}
//---------------------------------------------------------------------------
void __fastcall TSettingsFormClass::TopPanelMouseUp(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
	bottonPressed = false;	
}
//---------------------------------------------------------------------------
void __fastcall TSettingsFormClass::TopPanelMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
	if (bottonPressed) {
		Left += X - prevX;
		Top += Y - prevY;
	}	
}
//---------------------------------------------------------------------------
void __fastcall TSettingsFormClass::FormShow(TObject *Sender)
{
	//FormActivate(this);
	SetLinkCursor(CloseImage);
	SetLinkCursor(GeneralMenuImage);
	SetLinkCursor(HotKeyMenuImage);
	SetLinkCursor(DesignMenuImage);
	SetLinkCursor(GeneralLabel);
	SetLinkCursor(HotKeyLabel);
	SetLinkCursor(DesignLabel);
	SetLinkCursor(CloseLabel);
	SetLinkCursor(ListFontPanel);
	SetLinkCursor(DefaultListFontPanel);
	SetLinkCursor(EditFontPanel);
	SetLinkCursor(DefaultEditFontPanel);
	SetLinkCursor(CardFontPanel);
	SetLinkCursor(DefaultCardFontPanel);
	SetLinkCursor(ListColorPanel);
	SetLinkCursor(EditColorPanel);

    // LOADING SETTINGS
	FindPanelCheckBox->Checked = MainFormClass->propData->ReadBoolean("MainFormClass",
		"FindPanelVisible",true);
	ServicePanelCheckBox->Checked = MainFormClass->propData->ReadBoolean("MainFormClass",
		"ServicePanelVisible",true);
	InformationPanelCheckBox->Checked = MainFormClass->propData->ReadBoolean("MainFormClass",
		"InformationPanelVisible",true);
	
	// Loading HotKey Settings
	AltCheckBox->Checked =
	MainFormClass->propData->ReadBoolean("Settings","AltHotKey",true);
	ShiftCheckBox->Checked =
	MainFormClass->propData->ReadBoolean("Settings","ShiftHotKey",true);
	UseAltCheckBox->Checked =
	MainFormClass->propData->ReadBoolean("Settings","UseAltHotKey",true);

	// Loading Design Settings
	MainFormClass->propData->ReadFont("Design","ListFont",ListFont);
	ListFontLabel->Caption = ListFont->Name;
	ListFontLabel->Font = ListFont;
	ListSizeLabel->Caption = ListFont->Size;
	ListColorPanel->Color = ListFont->Color;
	MainFormClass->propData->ReadFont("Design","EditFont",EditFont);
	EditFontLabel->Caption = EditFont->Name;
	EditFontLabel->Font = EditFont;
	EditSizeLabel->Caption = EditFont->Size;
	EditColorPanel->Color = EditFont->Color;
	MainFormClass->propData->ReadFont("Design","CardFont",CardFont);
	CardFontLabel->Caption = CardFont->Name;
	CardFontLabel->Font = CardFont;
	CardSizeLabel->Caption = CardFont->Size;
}
//---------------------------------------------------------------------------
void __fastcall TSettingsFormClass::GeneralMenuImageClick(TObject *Sender)
{
	SetActivePanel(1);
}
//---------------------------------------------------------------------------
void __fastcall TSettingsFormClass::HotKeyMenuImageClick(TObject *Sender)
{
	SetActivePanel(2);
}
//---------------------------------------------------------------------------
void __fastcall TSettingsFormClass::DesignMenuImageClick(TObject *Sender)
{
	SetActivePanel(3);
}
//---------------------------------------------------------------------------
void TSettingsFormClass::SetActivePanel(int PanelID)
{
	if (PanelID==1) {
		GeneralPanel->Visible = true;
		HotKeyPanel->Visible = false;
		DesignPanel->Visible = false;
		CaptionImage->Picture = GeneralMenuImage->Picture;
		CaptionLabel->Caption = "Общие";
	}
	else if (PanelID==2) {
		GeneralPanel->Visible = false;
		HotKeyPanel->Visible = true;
		DesignPanel->Visible = false;
		CaptionImage->Picture = HotKeyMenuImage->Picture;
		CaptionLabel->Caption = "Горячие клавиши";
	}
	else {
		GeneralPanel->Visible = false;
		HotKeyPanel->Visible = false;
		DesignPanel->Visible = true;
		CaptionImage->Picture = DesignMenuImage->Picture;
		CaptionLabel->Caption = "Оформление";
 	}
}
//---------------------------------------------------------------------------
void __fastcall TSettingsFormClass::ListFontPanelClick(TObject *Sender)
{
	FontDialog->Font = ListFont;
	if (FontDialog->Execute()) {
		ListFont = FontDialog->Font;

		if (ListFont->Size > 20)
			ListFont->Size = 20;
		else if (ListFont->Size < 7)
			ListFont->Size = 7;

		ListFontLabel->Font = ListFont;
		ListFontLabel->Caption = ListFont->Name;
		ListSizeLabel->Caption = AnsiString(ListFont->Size);
		ListColorPanel->Color = ListFont->Color;
		ApplyButton->Enabled = true;
	}
}
//---------------------------------------------------------------------------
void __fastcall TSettingsFormClass::ListColorPanelClick(TObject *Sender)
{
	List1Color = EditColor(this, List1Color);
	ListColorPanel->Color = List1Color;
	ListFontLabel->Font->Color = List1Color;
	ApplyButton->Enabled = true;
}
//---------------------------------------------------------------------------
void __fastcall TSettingsFormClass::DefaultListFontPanelClick(TObject *Sender)
{
	ListFont->Name = "Tahoma";
	ListFont->Size = 9;
	ListFont->Color = clBlack;
	ListFontLabel->Font->Name = "Tahoma";
	ListFontLabel->Caption = "Tahoma";
	ListFontLabel->Font->Size = 9;
	ListSizeLabel->Caption = "9";
	ListFontLabel->Font->Color = clBlack;
	ListColorPanel->Color = clBlack;
	ListFontLabel->Font->Style = TFontStyles();
	ApplyButton->Enabled = true;
}
//---------------------------------------------------------------------------
void __fastcall TSettingsFormClass::EditFontPanelClick(TObject *Sender)
{
	FontDialog->Font = EditFont;

	if (FontDialog->Execute()) {
		EditFont = FontDialog->Font;

		if (EditFont->Size > 20)
			EditFont->Size = 20;
		else if (EditFont->Size < 7)
			EditFont->Size = 7;

		EditFontLabel->Font = EditFont;
		EditFontLabel->Caption = EditFont->Name;
		EditSizeLabel->Caption = AnsiString(EditFont->Size);
		EditColorPanel->Color = EditFont->Color;
		ApplyButton->Enabled = true;
 	}
}
//---------------------------------------------------------------------------
void __fastcall TSettingsFormClass::EditColorPanelClick(TObject *Sender)
{
	Edit1Color = EditColor(this,Edit1Color);
	EditColorPanel->Color = Edit1Color;
	EditFontLabel->Font->Color = Edit1Color;
	ApplyButton->Enabled = true;
}
//---------------------------------------------------------------------------
void __fastcall TSettingsFormClass::DefaultEditFontPanelClick(TObject *Sender)
{
	EditFont->Name = "Tahoma";
	EditFont->Size = 9;
	EditFont->Color = clBlack;
	EditFontLabel->Font->Name = "Tahoma";
	EditFontLabel->Caption = "Tahoma";
	EditFontLabel->Font->Size = 9;
	EditSizeLabel->Caption = "9";
	EditFontLabel->Font->Color = clBlack;
	EditColorPanel->Color = clBlack;
	EditFontLabel->Font->Style = TFontStyles();
	ApplyButton->Enabled = true;
}
//---------------------------------------------------------------------------
void __fastcall TSettingsFormClass::CardFontPanelClick(TObject *Sender)
{
	FontDialog->Font = CardFont;
	if (FontDialog->Execute()) {
		CardFont = FontDialog->Font;
		if (CardFont->Size > 20)
			CardFont->Size = 20;
		else if (CardFont->Size < 7)
			CardFont->Size = 7;

		CardFontLabel->Font = CardFont;
		CardFontLabel->Caption = CardFont->Name;
		CardSizeLabel->Caption = AnsiString(CardFont->Size);
		ApplyButton->Enabled = true;
	}
}
//---------------------------------------------------------------------------
void __fastcall TSettingsFormClass::DefaultCardFontPanelClick(TObject *Sender)
{
	CardFont->Name = "Arial";
	CardFont->Size = 10;
	CardFont->Color = clBlack;
	CardFontLabel->Font->Name = "Arial";
	CardFontLabel->Caption = "Arial";
	CardFontLabel->Font->Size = 10;
	CardSizeLabel->Caption = "10";
	CardFontLabel->Font->Color = clBlack;
	CardFontLabel->Font->Style = TFontStyles();
	ApplyButton->Enabled = true;
}
//---------------------------------------------------------------------------
void TSettingsFormClass::SaveSettings(bool close)
{
	bool state, temp, temps;
	// Service Panel
	temps = MainFormClass->ServiceTopPanel->Visible;
	MainFormClass->ServiceTopPanel->Visible = false;
	MainFormClass->ServicePanel->Visible = false;
	MainFormClass->WordsMiddleSpacer->Visible = false;

	// Information Panel (Tips)
	state = InformationPanelCheckBox->Checked;
	MainFormClass->propData->WriteBoolean("MainFormClass","InformationPanelVisible", state);
	temp = MainFormClass->InformationTopPanel->Visible;
	if (MainFormClass->InformationPanel->Visible)
		MainFormClass->InformationPanel->Visible = state;
	MainFormClass->InformationTopPanel->Visible = state;
	MainFormClass->WordsBottomSpacer->Visible = state;

	if (state && !temp && temps && ServicePanelCheckBox->Checked) {
		MainFormClass->WordsMiddleSpacer->Visible = true;
		MainFormClass->ServiceTopPanel->Visible = true;
	}
	else if (ServicePanelCheckBox->Checked) {
		state = ServicePanelCheckBox->Checked;
		MainFormClass->ServiceTopPanel->Visible = state;
		MainFormClass->WordsMiddleSpacer->Visible = state;
	}
	MainFormClass->propData->WriteBoolean("MainFormClass","ServicePanelVisible", state);
	
	// Find Panel
	state = FindPanelCheckBox->Checked;
	if (MainFormClass->FindPanel->Visible)
		MainFormClass->FindPanel->Visible = state;
	MainFormClass->FindTopPanel->Visible = state;
	MainFormClass->DefinitionBottomSpacer->Visible = state;
	MainFormClass->propData->WriteBoolean("MainFormClass","FindPanelVisible", state);

	// HotKey Settings
	MainFormClass->propData->WriteBoolean("Settings","AltHotKey",AltCheckBox->Checked);
	MainFormClass->propData->WriteBoolean("Settings","ShiftHotKey",ShiftCheckBox->Checked);
	MainFormClass->propData->WriteBoolean("Settings","UseAltHotKey",UseAltCheckBox->Checked);

	// Design Settings
	ListFont = ListFontLabel->Font;
	MainFormClass->propData->WriteFont("Design","ListFont",ListFont);
    MainFormClass->KyrRusListBox->Font = ListFont;
	MainFormClass->RusKyrListBox->Font = ListFont;

	EditFont = EditFontLabel->Font;
	MainFormClass->propData->WriteFont("Design","EditFont",EditFont);
    MainFormClass->SearchWordEdit->Font = EditFont;

	CardFont = CardFontLabel->Font;
	MainFormClass->propData->WriteFont("Design","CardFont",CardFont);
	MainFormClass->curCardFont = CardFont;
	MainFormClass->translate(false);

	if (close)
	 	Close();
}
//---------------------------------------------------------------------------
void __fastcall TSettingsFormClass::DefaultsButtonClick(TObject *Sender)
{
	AnsiString Msg = "Вы уверены, что хотите восстановить значения по-умолчанию?";
	if (MessageBox(NULL, Msg.c_str(), "Настройки", MB_YESNO | MB_ICONWARNING) == IDYES)
	{
		ServicePanelCheckBox->Checked = true;
		FindPanelCheckBox->Checked = true;
		InformationPanelCheckBox->Checked = true;
		AltCheckBox->Checked = true;
		ShiftCheckBox->Checked = true;
		UseAltCheckBox->Checked = true;
		// Design settings
		DefaultListFontPanelClick(this);
		DefaultEditFontPanelClick(this);
		DefaultCardFontPanelClick(this);
		ApplyButton->Enabled = true;
	}   
}
//---------------------------------------------------------------------------
void __fastcall TSettingsFormClass::HelpButtonClick(TObject *Sender)
{
	if (GeneralPanel->Visible)
		Application->HelpJump("settings_general");
	else if (HotKeyPanel->Visible)
		Application->HelpJump("settings_hotkeys");
	else
		Application->HelpJump("settings_design");
}
//---------------------------------------------------------------------------
void __fastcall TSettingsFormClass::OkButtonClick(TObject *Sender)
{
	SaveSettings(true);
}
//---------------------------------------------------------------------------
void __fastcall TSettingsFormClass::ApplyButtonClick(TObject *Sender)
{
	SaveSettings(false);
	ApplyButton->Enabled = false;
}
//---------------------------------------------------------------------------
void __fastcall TSettingsFormClass::LayoutCheckBoxClick(TObject *Sender)
{
	ApplyButton->Enabled = true;
}
//---------------------------------------------------------------------------
void TSettingsFormClass::ChangeGUIStyle()
{
	PFont->Style = TFontStyles() << fsUnderline;
}
//---------------------------------------------------------------------------
void __fastcall TSettingsFormClass::GeneralMenuImageMouseEnter(TObject *Sender)
{
	PFont = GeneralLabel->Font;
	ChangeGUIStyle();
}
//---------------------------------------------------------------------------
void __fastcall TSettingsFormClass::HotKeyMenuImageMouseEnter(TObject *Sender)
{
	PFont = HotKeyLabel->Font;
	ChangeGUIStyle();
}
//---------------------------------------------------------------------------
void __fastcall TSettingsFormClass::DesignMenuImageMouseEnter(TObject *Sender)
{
	PFont = DesignLabel->Font;
	ChangeGUIStyle();
}
//---------------------------------------------------------------------------
void __fastcall TSettingsFormClass::GeneralMenuImageMouseLeave(TObject *Sender)
{
	if (PFont != GeneralLabel->Font)
		PFont->Style = GeneralLabel->Font->Style;
	else
		PFont->Style = HotKeyLabel->Font->Style;
}
//---------------------------------------------------------------------------
void TSettingsFormClass::SetLinkCursor(TControl *Control)
{
	Control->Cursor = (TCursor) 1;
}
//---------------------------------------------------------------------------
void __fastcall TSettingsFormClass::CloseLabelMouseEnter(TObject *Sender)
{
	PFont = CloseLabel->Font;
	ChangeGUIStyle();
}
//---------------------------------------------------------------------------
void __fastcall TSettingsFormClass::FormDestroy(TObject *Sender)
{
	delete 	ListFont, EditFont, CardFont;
}
//---------------------------------------------------------------------------

