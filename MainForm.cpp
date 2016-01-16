//$$---- Form CPP ----
//---------------------------------------------------------------------------
#include <vcl.h>
#include <string>
#include <clipbrd.hpp>
#pragma hdrstop
//---------------------------------------------------------------------------
#include "ThemidaSDK.h"
#include "MainForm.h"      
#include "AboutForm.h"
#include "SplashForm.h"        
#include "SettingsForm.h"
#include "HistoryForm.h"
#include "RegExpr.hpp"
#include "md5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzButton"
#pragma link "RzPanel"
#pragma link "RzLstBox"
#pragma link "RzCommon"
#pragma link "RzBorder"
#pragma link "RzEdit"
#pragma link "RzLabel"
#pragma link "RzBtnEdt"
#pragma link "RzSplit"
#pragma link "RzRadChk"
#pragma resource "*.dfm"

AnsiString header;
TMainFormClass *MainFormClass;
//---------------------------------------------------------------------------
__fastcall TMainFormClass::TMainFormClass(TComponent* Owner) : TForm(Owner)
{
	msgRestore = RegisterWindowMessage("WM_Tilchi_Instance");
	Application->HookMainWindow(MessageHandler);
	TDataFile *history_data = new TDataFile("Tilchi.ldf");
	ENCODE_START
	haydi = history_data->ReadString("TilchiLic","US_HID", ""); // reading HID info
	ENCODE_END
	// Initializing MainCardBox
	MainCardBox = new TCardBox(this);
	MainCardBox->Parent = DefinitionBoxPanel;
	MainCardBox->Align = alClient;
	MainCardBox->ReadOnly = true;
	ENCODE_START
	org = history_data->ReadString("TilchiLic","US_ORG", ""); // reading organization info
	ENCODE_END
	MainCardBox->ScrollBars = ssVertical;
	MainCardBox->HideSelection = false;
	MainCardBox->HideScrollBars = false;
	ENCODE_START
	kyluch = history_data->ReadString("TilchiLic","US_KEY", ""); // reading key info
	ENCODE_END
	MainCardBox->BorderStyle = Forms::bsNone;
	MainCardBox->ShowHint = true;
	MainCardBox->OnKeyPress = MainCardBoxKeyPress;
	MainCardBox->PopupMenu = MainCardPopupMenu;
	ENCODE_START
	name = history_data->ReadString("TilchiLic","US_NAME", ""); // reading name info
	ENCODE_END
	// Initializing ValuesCardBox
	ValueCardBox = new TCardBox(this);
	ValueCardBox->Parent = DefinitionBoxPanel;
	ValueCardBox->Visible = false;
	ValueCardBox->Align = alClient;
	ValueCardBox->ReadOnly = true;
	ValueCardBox->ScrollBars = ssVertical;
	ENCODE_START
	lname = history_data->ReadString("TilchiLic","US_LAST_NAME", ""); // reading last name info
	ENCODE_END
	ValueCardBox->HideSelection = false;
	ValueCardBox->HideScrollBars = false;
	ValueCardBox->BorderStyle = Forms::bsNone;
	ValueCardBox->ShowHint = true;
	ENCODE_START
	ryj = history_data->ReadString("TilchiLic","US_SERIAL", ""); // reading serial info
	ENCODE_END
	delete history_data;
	// Initializing fonts
	curListFont = new TFont();
	curListFont->Name = "Tahoma";
	curListFont->Size = 9;
	curEditFont = new TFont();
	curEditFont->Name = "Tahoma";
	curEditFont->Size = 9;
	curCardFont = new TFont();
	curCardFont->Name = "Arial";
	curCardFont->Size = 10;
	// Showing SplashScreen
	SplashFormClass = new TSplashFormClass(this);
	SplashFormClass->ShowModal();

	KyrLangID = IntToHex(MAKELANGID(LANG_KYRGYZ, SUBLANG_DEFAULT), 8);
	RusLangID = IntToHex(MAKELANGID(LANG_RUSSIAN, SUBLANG_DEFAULT), 8);
}
//---------------------------------------------------------------------------
bool __fastcall TMainFormClass::MessageHandler(TMessage &Message)
{
	if (Message.Msg == msgRestore) {
		Application->Restore();
		Application->BringToFront();
		return true;
	}
	else
		return false;
}
//---------------------------------------------------------------------------
void TMainFormClass::loadSettings()
{
	bool pVisible, pOpened;
	propData = new TDataFile("Tilchi.dat");
	if (propData->ReadBoolean("MainFormClass", "WindowStateMaximized", 0))
		WindowState = wsMaximized;
	else{
		if (propData->ValueExists("MainFormClass", "Left") ) {
			Left = propData->ReadInteger("MainFormClass", "Left", 0);
			Top = propData->ReadInteger("MainFormClass", "Top", 0);
			Height = propData->ReadInteger("MainFormClass", "Height", 0);
			Width = propData->ReadInteger("MainFormClass", "Width", 0);
		}
		else{
			Left = Screen->WorkAreaWidth - Width;
			Top = Screen->WorkAreaHeight - Height;
		}
	}

	// FindPanel
	pVisible = propData->ReadBoolean("MainFormClass", "FindPanelVisible", true);
	pOpened = propData->ReadBoolean("MainFormClass", "FindPanelOpened", true);
	DefinitionBottomSpacer->Visible = pVisible;
	FindTopPanel->Visible = pVisible;
	FindPanel->Visible = pOpened;
	
	// Service Panel
	pVisible = propData->ReadBoolean("MainFormClass","ServicePanelVisible", true);
    ServicePanel->Visible = propData->ReadBoolean("MainFormClass","ServicePanelOpened", true);
	WordsMiddleSpacer->Visible = pVisible;
	ServiceTopPanel->Visible = pVisible;

	// Information Panel
	pVisible = propData->ReadBoolean("MainFormClass", "InformationPanelVisible", true);
	InformationPanel->Visible = propData->ReadBoolean("MainFormClass", "InformationPanelOpened", true);
	WordsBottomSpacer->Visible = pVisible;
	InformationTopPanel->Visible = pVisible;

	if (propData->ReadBoolean("MainFormClass","OnTopFixedImage",true))
		OnTopLabelClick(this);

	currentLanguage = propData->ReadInteger("MainFormClass", "ActiveLanguage", 0);
	// Reading KyrRusListBox->ItemIndex
	KyrRusListBox->ItemIndex = propData->ReadInteger("MainFormClass", "KyrRusListBox", 0);
	// Reading RusKyrListBox->ItemIndex
	RusKyrListBox->ItemIndex = propData->ReadInteger("MainFormClass", "RusKyrListBox", 0);

	currentLanguage = (currentLanguage == KYRGYZ_RUSSIAN ? RUSSIAN_KYRGYZ : KYRGYZ_RUSSIAN);
	pWordsListBox = (currentLanguage == KYRGYZ_RUSSIAN ? KyrRusListBox : RusKyrListBox);

	HistoryFormClass->readHistory(propData);

	// Design Settings
	propData->ReadFont("Design", "ListFont", curListFont);
	KyrRusListBox->Font = curListFont;
	RusKyrListBox->Font = curListFont;
	propData->ReadFont("Design", "EditFont", curEditFont);
	SearchWordEdit->Font = curEditFont;
	propData->ReadFont("Design", "CardFont", curCardFont);
}
//---------------------------------------------------------------------------
void TMainFormClass::loadBase(const AnsiString& file_name)
{
VM_START_WITHLEVEL(2)
	cBlowfish* temp = new cBlowfish("погов. то было, (да) это было, десять верблюдов Эшкары пало (что ни говори, а это факт).");
	temp->LoadFromFile(file_name);

	if (file_name == "Dic\\KR.tdb") {
		// header
		header = temp->Lines->Text.SubString(0, temp->Lines->Text.Pos("\\fs20") + 4);
		KRblowfish = temp;
	}
	else if (file_name == "Dic\\RK.tdb")
		RKblowfish = temp;

	temp->Lines->Delete(0);
	temp->Lines->Delete(0);
	temp->Lines->Delete(0);
VM_END
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::LanguageTopPanelClick(TObject *Sender)
{
	switchDictionaries();
	KyrRusListBoxClick(this);
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::KyrRusListBoxClick(TObject *Sender)
{
	SearchWordEdit->Text = pWordsListBox->SelectedItem();
	translate(false);
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::switchDictionaries()
{
    // do not switch line order in this code
	pWordsListBox->Visible = false;

	currentLanguage = (currentLanguage == KYRGYZ_RUSSIAN ?
		RUSSIAN_KYRGYZ : KYRGYZ_RUSSIAN);

	int margin_size = 4;
	if (currentLanguage == RUSSIAN_KYRGYZ) {
		LanguageRKImage->Align = alLeft;
		LanguageRKImage->Margins->Right = 0;
		LanguageRKImage->Margins->Left = margin_size;
		LanguageKRImage->Align = alRight;
		LanguageKRImage->Margins->Right = margin_size;
		LanguageKRImage->Margins->Left = 0;
		LanguageLabel->Caption = "Русско-Кыргызский";
		pWordsListBox = RusKyrListBox;
		pblowfish = RKblowfish;
		ActivateKeyboardLayout(LoadKeyboardLayout(RusLangID.c_str(), 0), 0);
	}
	else {
		LanguageRKImage->Align = alRight;
		LanguageRKImage->Margins->Right = margin_size;
		LanguageRKImage->Margins->Left = 0;
		LanguageKRImage->Align = alLeft;
		LanguageKRImage->Margins->Right = 0;
		LanguageKRImage->Margins->Left = margin_size;
		LanguageLabel->Caption = "Кыргызско-Русский";
		pWordsListBox = KyrRusListBox;
		pblowfish = KRblowfish;
		ActivateKeyboardLayout(LoadKeyboardLayout(KyrLangID.c_str(), 0), 0);
	}

	pWordsListBox->Visible = true;
}                                                      
//---------------------------------------------------------------------------
int TMainFormClass::does_match(char *word, int len, int ix)
{
	double asc, asc_ix;
	char *ix_str = pWordsListBox->Items->Strings[ix].c_str();
	int ix_len = pWordsListBox->Items->Strings[ix].Length();

	for (int i = 0; i < len && i < ix_len; ++i) {
		switch ((int)ix_str[i]) {
			case -72: asc_ix = -26.5;       // ё
					break;
			case -94: asc_ix = -18.5;
					break;
			case -70: asc_ix = -17.5;
					break;
			case -65: asc_ix = -12.5;
					break;
			default: asc_ix = (int)ix_str[i];
		}

		switch ((int)word[i]) {
			case -72: asc = -26.5;       // ё
					break;
			case -94: asc = -18.5;
					break;
			case -70: asc = -17.5;
					break;
			case -65: asc = -12.5;
					break;
			default: asc = (int)word[i];
		}

		if (asc > asc_ix)
			return GREATER_THAN;
		else if (asc < asc_ix)
			return LESS_THAN;
	}

	if (len > ix_len)
		return GREATER_THAN;

	return EQUAL;
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::SearchWordEditChange(TObject *Sender)
{
	AnsiString searchedWord = SearchWordEdit->Text.Trim().LowerCase();

	if (searchedWord == "")
		return;

	AnsiString temp;
	int max = pWordsListBox->Count, ix = pWordsListBox->ItemIndex,
		len = searchedWord.Length(), answer;

	do {
		if (ix > 0 && pWordsListBox->Items->Strings[ix-1].SubString(0, len).LowerCase()
			== searchedWord)
			ix--;
		else if (pWordsListBox->Items->Strings[ix].SubString(0, len).LowerCase()
			== searchedWord)
			break;
		else if ((answer = does_match(searchedWord.c_str(), len, ix)) == GREATER_THAN)
			ix += (max - ix) / 2;
		else if (answer == LESS_THAN){
			max = ix;
			ix /= 2;
		}
	} while (ix > 0 && ix < max - 1);

	if (set_to_list_box)
		pWordsListBox->ItemIndex = ix;

	list_ix = ix;
}
//---------------------------------------------------------------------------
void TMainFormClass::translate(bool addToHistory)
{
	// Убираем ValueCardBox, если активный
	if (ValueCardBox->Visible) {
		ValueCardBox->Visible = false;
		MainCardBox->Visible = true;
		ShowValueMenuItem->Checked = false;
	}

	AnsiString word = SearchWordEdit->Text.Trim().LowerCase(), lang;
	MainCardBox->Clear();
	// Replacing Font
	AnsiString header_font, header_size;
	TRegExpr *RegExpr = new TRegExpr();
	RegExpr->Expression = "Arial";
	header_font = RegExpr->Replace(header, curCardFont->Name,false);

	RegExpr->Expression = "fs20";
	header_size = RegExpr->Replace(header_font, "fs"+ AnsiString(curCardFont->Size*2), false);

	MainCardBox->PutRtf(header_size + pblowfish->Lines->Strings[pWordsListBox->ItemIndex] + "}");
	SearchWordEdit->SelectAll();
	MainCardBox->SelStart = 0;

    lang = " (" + (currentLanguage == KYRGYZ_RUSSIAN ? KY_RU : RU_KY) + ")";

	if (pWordsListBox->SelectedItem().SubString(0, SearchWordEdit->Text.Length()).LowerCase() != word)
		ShowFindDialog("Нет перевода для данного слова!");

	if (addToHistory)	// Saving Word to History
		HistoryFormClass->insertWord(word + lang);

	HistoryFormClass->insertToCardList(pWordsListBox->SelectedItem() + lang);
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::FormDestroy(TObject *Sender)
{
	// Remove Mutex
	Application->UnhookMainWindow(MessageHandler);
    // Saving Panel States
	if (WindowState == wsMaximized)
		propData->WriteBoolean("MainFormClass","WindowStateMaximized",true);
	else {
		propData->WriteBoolean("MainFormClass","WindowStateMaximized",false);
		propData->WriteInteger("MainFormClass","Left",Left);
		propData->WriteInteger("MainFormClass","Top",Top);
		propData->WriteInteger("MainFormClass","Height",Height);
		propData->WriteInteger("MainFormClass","Width",Width);
	}

	// Panels
	propData->WriteBoolean("MainFormClass","FindPanelOpened",FindPanel->Visible);

	propData->WriteBoolean("MainFormClass","ServicePanelOpened",ServicePanel->Visible);

	propData->WriteBoolean("MainFormClass","InformationPanelOpened",InformationPanel->Visible);

	propData->WriteBoolean("MainFormClass","OnTopFixedImage",OnTopFixedImage->Visible);

	// Saving Active Language
	propData->WriteInteger("MainFormClass","ActiveLanguage",currentLanguage);
	// Saving KyrRusListBox->ItemIndex
	propData->WriteInteger("MainFormClass","KyrRusListBox",KyrRusListBox->ItemIndex);
	// Saving RusKyrListBox->ItemIndex
	propData->WriteInteger("MainFormClass","RusKyrListBox",RusKyrListBox->ItemIndex);

	HistoryFormClass->saveHistory(propData);
	                        
	delete TipsData, propData, KRblowfish, RKblowfish, MainCardBox,
		ValueCardBox, curListFont, curEditFont, curCardFont,
		SplashFormClass, HistoryFormClass, SettingsFormClass;
}
//---------------------------------------------------------------------------
void TMainFormClass::ChangeGUIStyle(bool isMenu)
{
	if (isMenu)
	 	PFont->Style = TFontStyles() << fsUnderline;
	else
	 	PFont->Style = TFontStyles() << fsBold << fsUnderline;
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::ServiceTopPanelClick(TObject *Sender)
{
	if (!ServicePanel->Visible) {         
		InformationPanel->Visible = true;
		ServicePanel->Visible = true;
		InformationPanel->Visible = false;
	}
	else
		ServicePanel->Visible = false;
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::FindTopPanelClick(TObject *Sender)
{
	if (FindPanel->Visible) {
		FindPanel->Visible = false;
		SearchWordEdit->SetFocus();
	} else {
		FindPanel->Visible = true;
		FindWordEdit->SetFocus();
	}
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::InformationTopPanelClick(TObject *Sender)
{
	if (!InformationPanel->Visible) {
		ServicePanel->Visible = false;
		InformationPanel->Visible = true;
	}
	else
		InformationPanel->Visible = false;
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::InformationTopPanelMouseEnter(TObject *Sender)
{
	PFont = InformationLabel->Font;
	ChangeGUIStyle(false);
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::ServiceTopPanelMouseEnter(TObject *Sender)
{
	PFont = ServiceLabel->Font;
	ChangeGUIStyle(false);
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::LanguageTopPanelMouseLeave(TObject *Sender)
{
	if (PFont != LanguageLabel->Font)
		PFont->Style = LanguageLabel->Font->Style;
	else
		PFont->Style = ServiceLabel->Font->Style;
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::LanguageTopPanelMouseEnter(TObject *Sender)
{
	PFont = LanguageLabel->Font;
	ChangeGUIStyle(false);
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::FindTopPanelMouseEnter(TObject *Sender)
{
	PFont = FindLabel->Font;
	ChangeGUIStyle(false);
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::DefinitionTopPanelMouseEnter(TObject *Sender)
{
	PFont = DefinitionButton->Font;
	ChangeGUIStyle(false);
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::HistoryLabelClick(TObject *Sender)
{
VM_START_WITHLEVEL(3)
	AnsiString v7 = "#" + ryj.SubString(1, 3) + lname + "%" + ryj.SubString(5, 4) +
	haydi.SubString(18, 16) + org + ryj.SubString(10, 4) + name + "&"
	+ ryj.SubString(15, 4) + haydi.SubString(1, 16) + ryj.SubString(20, 4) + "$";

    char out_char[32];
	int len = v7.Length();
	GetMD5(v7.c_str(), len++, out_char);
	v7 = AnsiString(out_char).UpperCase();
	v7.Insert("-", 5);
	v7.Insert("-", 10);
	v7.Insert("-", 15);
	v7.Insert("-", 20);
	v7.Insert("-", 25);
	v7.Insert("-", 30);
	v7.Insert("-", 35);

	if (text != kyluch) {
		ShowMessage("Ошибка лицензии!");
		exit(EXIT_SUCCESS);
	}
VM_END

	HistoryFormClass->Show();
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::OnTopImageMouseEnter(TObject *Sender)
{
	PFont = OnTopLabel->Font;
	ChangeGUIStyle(true);
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::HelpLabelMouseEnter(TObject *Sender)
{
	PFont = HelpLabel->Font;
	ChangeGUIStyle(true);
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::SettingsLabelMouseEnter(TObject *Sender)
{
	PFont = SettingsLabel->Font;
	ChangeGUIStyle(true);
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::HistoryLabelMouseEnter(TObject *Sender)
{
	PFont = HistoryLabel->Font;
	ChangeGUIStyle(true);
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::HistoryLabelMouseLeave(TObject *Sender)
{
	if (PFont != HistoryLabel->Font)
		PFont->Style = HistoryLabel->Font->Style;
	else
		PFont->Style = HelpLabel->Font->Style;
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::HelpLabelClick(TObject *Sender)
{
	Application->HelpJump("index");
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::FormShow(TObject *Sender)
{
	AboutFormClass = new TAboutFormClass(this);
	HistoryFormClass = new THistoryFormClass(this);
	SettingsFormClass = new TSettingsFormClass(this);
	// Initialising tips
	TipsData = new TDataFile("Tilchi.tps");

	set_to_list_box = true;
	loadSettings();
	LanguageTopPanelClick(this);

	// Randomising Tips
	randomize();
	CurrentTip = rand() % 19 + 1;
	TipsMemo->Text = TipsData->ReadString("TilchiTips", "Tip" + AnsiString(CurrentTip), "");

	// Loading Link Cursor
	Screen->Cursors[1] = LoadCursor(HInstance,"LINK_CURSOR");
	// Lic operations
VM_START
	text = "#" + ryj.SubString(1, 3) + lname + "%" +
			ryj.SubString(5, 4) + haydi.SubString(18, 16) +
			org + ryj.SubString(10, 4) + name + "&" + text;

	char out_char[32];
	int len = text.Length();
	GetMD5(text.c_str(), len++, out_char);
	text = AnsiString(out_char).UpperCase();
	text.Insert("-", 5);
	text.Insert("-", 10);
	text.Insert("-", 15);
	text.Insert("-", 20);
	text.Insert("-", 25);
	text.Insert("-", 30);
	text.Insert("-", 35);
	// end lic operations
VM_END	
	SetLinkCursor(OnTopImage);
	SetLinkCursor(OnTopFixedImage);
	SetLinkCursor(HistoryImage);
	SetLinkCursor(SettingsImage);
	SetLinkCursor(HelpImage);
	SetLinkCursor(AboutImage);
	SetLinkCursor(OnTopLabel);
	SetLinkCursor(HistoryLabel);
	SetLinkCursor(SettingsLabel);
	SetLinkCursor(HelpLabel);
	SetLinkCursor(LanguageTopPanel);
	SetLinkCursor(ServiceTopPanel);
	SetLinkCursor(InformationTopPanel);
	SetLinkCursor(RightPanel);
	SetLinkCursor(DefinitionTopPanel);
	SetLinkCursor(FindButtonPanel);
	SetLinkCursor(FindTopPanel);
	SetLinkCursor(AboutLabel);
	SetLinkCursor(InformationLabel);
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::FindButtonPanelClick(TObject *Sender)
{
	AnsiString qstr = FindWordEdit->Text;
	TCardBox *curCardBox;
	if (qstr == "")
		return;

	bool changed = change_keyboard_layout(RusLangID, RusLangID);

	// Определяем какой CardBox активен (для поиска в ValueCardBox)
	curCardBox = (ValueCardBox->Visible ? ValueCardBox : MainCardBox);

	int startAt = curCardBox->SelStart, foundAt;
	if (curCardBox->SelLength > 0)
		startAt += (DownRadioButton->Checked ? curCardBox->SelLength :
			-curCardBox->SelLength);

	if (DownRadioButton->Checked){
		foundAt = curCardBox->FindText(qstr, startAt,
			curCardBox->Text.Length() - startAt,
			(CaseCheckBox->Checked ? TSearchTypes() << stMatchCase : TSearchTypes()));

		if (foundAt == -1) {
			foundAt = curCardBox->FindText(qstr, 0, startAt - qstr.Length(),
				(CaseCheckBox->Checked ? TSearchTypes() << stMatchCase : TSearchTypes()));
		}
	}
	else {
		using std::string;
		string text = curCardBox->Text.c_str(),
			str = (CaseCheckBox->Checked ? qstr.c_str() :
							qstr.LowerCase().c_str());
		foundAt = text.rfind(str, (startAt == 0 ? text.length() : startAt));
	}

	if (changed)
		change_keyboard_layout(KyrLangID, KyrLangID);

	if (foundAt != -1) {
		curCardBox->SelStart = foundAt;
		curCardBox->SelLength = qstr.Length();
	}
	else
		ShowFindDialog("Искомое слово не найдено!");
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::OnTopLabelClick(TObject *Sender)
{
	OnTopImage->Visible = !OnTopImage->Visible;
	OnTopFixedImage->Visible = !OnTopFixedImage->Visible;
	SetWindowPos(MainFormClass->Handle,
		(OnTopFixedImage->Visible ? HWND_TOPMOST : HWND_NOTOPMOST)
		,0,0,MainFormClass->Width, MainFormClass->Height,SWP_NOMOVE);
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::EscShortCutExecute(TObject *Sender)
{
	if (HistoryFormClass->Active)
		HistoryFormClass->Close();
	//else if (SettingsFormClass->Active)
	//	SettingsFormClass->Close();
	else if (AboutFormClass->Active)
		AboutFormClass->Close();
	else
		Application->Minimize();  
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::EnterShortCutExecute(TObject *Sender)
{
	if (SearchWordEdit->Focused())
		translate(true);
	else if (FindWordEdit->Focused()) {
		FindButtonPanelClick(this);
	}	
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::MainCardPopupMenuPopup(TObject *Sender)
{
	if (MainCardBox->SelLength > 0){
		CopyMenuItem->Enabled = true;
		TranslateMenuItem->Enabled = true;
	} else {
		CopyMenuItem->Enabled = false;
		TranslateMenuItem->Enabled = false;
    }
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::SelAllMenuItemClick(TObject *Sender)
{
	MainCardBox->SelectAll();
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::UpButtonClick(TObject *Sender)
{
	if (pWordsListBox->ItemIndex > 0){
		pWordsListBox->ItemIndex--;
		KyrRusListBoxClick(this);
	}
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::DownButtonClick(TObject *Sender)
{
	if (pWordsListBox->ItemIndex < pWordsListBox->Count - 1) {
		pWordsListBox->ItemIndex++;
		KyrRusListBoxClick(this);
	}
}
//---------------------------------------------------------------------------
void TMainFormClass::setFontSize(int value)
{
	pWordsListBox->Font->Size = value;
	pWordsListBox->Repaint();
	SearchWordEdit->Font->Size = value;
	FindWordEdit->Font->Size = value;
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::SearchWordEditKeyDown(TObject *Sender,
	  WORD &Key, TShiftState Shift)
{
	if (Shift.ToInt() == 4){
		if (Key == 35)
			pWordsListBox->ItemIndex = pWordsListBox->Count-1;
		else if (Key == 36)
			pWordsListBox->ItemIndex = 0;
	}
	else if (Key == 38){
		pWordsListBox->SetFocus();
		if (pWordsListBox->ItemIndex > 0){
			pWordsListBox->ItemIndex--;
			SearchWordEdit->Text = pWordsListBox->Items->Strings[pWordsListBox->ItemIndex];
			translate(false);
		}
		Key = 0;
		SearchWordEdit->SelectAll();
	}
	else if (Key == 40){
		pWordsListBox->SetFocus();
		if (pWordsListBox->ItemIndex < pWordsListBox->Count - 1){
			pWordsListBox->ItemIndex++;
			SearchWordEdit->Text = pWordsListBox->Items->Strings[pWordsListBox->ItemIndex];
			translate(false);
		}
		Key = 0;
		SearchWordEdit->SelectAll();
	}
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::KyrRusListBoxKeyDown(TObject *Sender, WORD &Key,
	  TShiftState Shift)
{
	if (Shift.ToInt() == 0) {
		if (Key == 37 || Key == 36){
			SearchWordEdit->SetFocus();
			Key = 0;
			SearchWordEdit->SelStart = 0;
		}
		else if (Key == 39 || Key == 35){
			SearchWordEdit->SetFocus();
			Key = 0;
			SearchWordEdit->SelStart = SearchWordEdit->Text.Length();
		}
	}
}        
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::MainCardBoxKeyPress(TObject *Sender,
	  char &Key)
{
	if ((VkKeyScan(Key) > 31 && VkKeyScan(Key) < 256)) {
		SearchWordEdit->SetFocus();
		SearchWordEdit->Text = Key;
		SearchWordEdit->SelStart = SearchWordEdit->Text.Length();
		Key = 0;
	}
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::AboutLabelClick(TObject *Sender)
{
VM_START_WITHLEVEL(2)
	if (text != kyluch) {
		ShowMessage("Ошибка лицензии!");
		exit(EXIT_SUCCESS);
	}
VM_END
	AboutFormClass->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::AboutLabelMouseEnter(TObject *Sender)
{
	PFont = AboutLabel->Font;
	ChangeGUIStyle(true);
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::PrevTipButtonClick(TObject *Sender)
{
	if (CurrentTip == 1)
		CurrentTip = 20;
	CurrentTip--;
	TipsMemo->Text = TipsData->ReadString("TilchiTips", "Tip" + AnsiString(CurrentTip),"");
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::NextTipButtonClick(TObject *Sender)
{
	if (CurrentTip == 20)
		CurrentTip = 0;
	CurrentTip++;
	TipsMemo->Text = TipsData->ReadString("TilchiTips", "Tip" + AnsiString(CurrentTip),"");
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::SettingsLabelClick(TObject *Sender)
{
VM_START_WITHLEVEL(2)
	if (text != kyluch) {
		ShowMessage("Ошибка лицензии!");
		exit(EXIT_SUCCESS);
	}
VM_END
	SettingsFormClass->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::SetLinkCursor(TControl *Control)
{
	Control->Cursor = (TCursor) 1;
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::TipsMemoClick(TObject *Sender)
{
	HideCaret(TipsMemo->Handle);
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::FindCardMenuItemClick(TObject *Sender)
{
	FindPanelActionExecute(this);
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::InsertLetter(AnsiString Input)
{
	TRzEdit *edit;
	if (SearchWordEdit->Focused())
		edit = SearchWordEdit;
	else
		edit = FindWordEdit;

	edit->Text = edit->Text + Input;
	edit->SelStart = edit->GetTextLen();
	edit->SetFocus();
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::BigYActionExecute(TObject *Sender)
{
	if (propData->ReadBoolean("Settings", "UseAltHotKey", true))
		InsertLetter("Ї");
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::YActionExecute(TObject *Sender)
{
	if (propData->ReadBoolean("Settings", "UseAltHotKey", true))
		InsertLetter("ї");
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::BigOActionExecute(TObject *Sender)
{
	if (propData->ReadBoolean("Settings","UseAltHotKey",true))
		InsertLetter("Є");
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::OActionExecute(TObject *Sender)
{
	if (propData->ReadBoolean("Settings","UseAltHotKey",true))
		InsertLetter("є");
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::BigNActionExecute(TObject *Sender)
{
	if (propData->ReadBoolean("Settings","UseAltHotKey",true))
		InsertLetter("Ў");
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::NActionExecute(TObject *Sender)
{
	if (propData->ReadBoolean("Settings","UseAltHotKey",true))
		InsertLetter("ў");
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::TranslateMenuItemClick(TObject *Sender)
{
	set_to_list_box = false;
	TRzListBox *t = pWordsListBox;
	SearchWordEdit->Text = MainCardBox->SelText.Trim().LowerCase();

	if (SearchWordEdit->Text ==
		pWordsListBox->Items->Strings[list_ix].Trim().
			LowerCase().SubString(0, SearchWordEdit->Text.Length())){
		pWordsListBox->ItemIndex = list_ix;
		translate(true);
	}
	else {
		TRzListBox *temp = pWordsListBox;
		pWordsListBox = (currentLanguage == KYRGYZ_RUSSIAN ? RusKyrListBox : KyrRusListBox);
		SearchWordEditChange(this);

		if (SearchWordEdit->Text == pWordsListBox->Items->Strings[list_ix].Trim().LowerCase()){
			pWordsListBox = temp;
			switchDictionaries();
			pWordsListBox->ItemIndex = list_ix;
			translate(true);
		}
		else{
			ShowFindDialog("Нет перевода для данного слова!");
			pWordsListBox = t;
		}
	}               
	set_to_list_box = true;
}
//---------------------------------------------------------------------------
bool TMainFormClass::change_keyboard_layout(const AnsiString& from_keyb, const AnsiString& to_keyb)
{
	char keyboard[8];
	GetKeyboardLayoutNameA(keyboard);
	AnsiString cur_keyb(keyboard);

	if (cur_keyb != from_keyb.SubString(0, 8) && cur_keyb != from_keyb.SubString(9, 8)){
		ActivateKeyboardLayout(LoadKeyboardLayout(to_keyb.c_str(), 0), 0);
		return true;
	}
	
	return false;
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::CopyMenuItemClick(TObject *Sender)
{
	change_keyboard_layout(KyrLangID + RusLangID, KyrLangID);
	Clipboard()->AsText = MainCardBox->SelText.TrimRight();
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::ShowFindDialog(AnsiString msg)
{
	MessageDlg(msg, mtInformation, TMsgDlgButtons() << mbOK, 0);
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::ShowValueMenuItemClick(TObject *Sender)
{
	AnsiString values;
	AnsiString error_text =
		"Один из компонентов системы поврежден! Рекомендуется переустановить приложение!";

	values = TipsData->ReadString("TilchiValues",
		(currentLanguage == RUSSIAN_KYRGYZ ? "RK" : "KR"), error_text);

	if (ValueCardBox->Visible){
		ValueCardBox->Visible = false;
		MainCardBox->Visible = true;
	}
	else {
		MainCardBox->Visible = false;
		ValueCardBox->Visible = true;
		ValueCardBox->Clear();
		ValueCardBox->PutRtf(values);
		ValueCardBox->SelStart = 0;
	}
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::MaximizeActionExecute(TObject *Sender)
{
	if (MainFormClass->WindowState == wsMaximized)
		MainFormClass->WindowState = wsNormal;
	else
		MainFormClass->WindowState = wsMaximized;
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::FindPanelActionExecute(TObject *Sender)
{
	if (FindPanel->Visible)
    	FindWordEdit->SetFocus();
	else
		FindTopPanelClick(this);
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::ShowValueActionExecute(TObject *Sender)
{
	ShowValueMenuItemClick(this);
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::SearchArticleActionExecute(TObject *Sender)
{
	FindPanelActionExecute(this);
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::DefinitionButtonMouseEnter(TObject *Sender)
{
	PFont = DefinitionButton->Font;
	ChangeGUIStyle(false);
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::CopyButtonClick(TObject *Sender)
{
 	SearchWordEdit->CopyToClipboard();
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::CutButtonClick(TObject *Sender)
{
	SearchWordEdit->CutToClipboard();
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::PasteButtonClick(TObject *Sender)
{
	SearchWordEdit->PasteFromClipboard();
}
//---------------------------------------------------------------------------
void __fastcall TMainFormClass::FormCreate(TObject *Sender)
{
VM_START
	text = ryj.SubString(15, 4) + haydi.SubString(1, 16) +
		ryj.SubString(20, 4) + "$";
VM_END		
}
//---------------------------------------------------------------------------

