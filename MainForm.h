//$$---- Form HDR ----
//---------------------------------------------------------------------------
#ifndef MainFormH
#define MainFormH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Menus.hpp>
#include <ImgList.hpp>
#include "RzButton.hpp"
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
#include "RzPanel.hpp"
#include "RzLstBox.hpp"
#include "RzCommon.hpp"
#include <XPMan.hpp>
#include "RzBorder.hpp"
#include "RzEdit.hpp"
#include <Mask.hpp>
#include <ComCtrls.hpp>
#include "cBlowfish.h"
#include "TCardBox.h"
#include "StoHtmlHelp.hpp"
#include "RzLabel.hpp"
#include "RzBtnEdt.hpp"
#include <ActnList.hpp>
#include <ActnMan.hpp>
#include <XPStyleActnCtrls.hpp>
#include "RzSplit.hpp"
#include <Buttons.hpp>
#include "RzRadChk.hpp"  
#include "DataFile.hpp"
//---------------------------------------------------------------------------
const int KYRGYZ_RUSSIAN = 0;
const int RUSSIAN_KYRGYZ = 1;
const int MIN_FONT_SIZE = 7;
const int DEFAULT_FONT_SIZE = 9;
const int MAX_FONT_SIZE = 20;
const int LESS_THAN = -1;
const int EQUAL = 0;
const int GREATER_THAN = 1;    
const AnsiString KY_RU = "Ky-Ru";
const AnsiString RU_KY = "Ru-Ky";
const AnsiString UNKNOWN = " - ";

class TMainFormClass : public TForm
{
__published:	// IDE-managed Components
	TRzSpacer *LeftSpacer;
	TRzSpacer *RightSpacer;
	TRzSpacer *BottomSpacer;
	TRzPanel *HeaderTopPanel;
	TRzSpacer *HeaderBottomSpacer;
	TRzSpacer *HeaderRightSpacer;
	TRzSpacer *HeaderTopSpacer;
	TRzSpacer *HeaderLeftSpacer;
	TXPManifest *XPManifest;
	TPopupMenu *MainCardPopupMenu;
	TActionList *ActionList;
	TAction *HistoryShortCut;
	TAction *SettingsShortCut;
	TAction *HelpShortCut;
	TAction *OnTopShortCut;
	TAction *EnterShortCut;
	TAction *EscShortCut;
	TMenuItem *SelAllMenuItem;
	TAction *ChangeLanguageDirection;
	TImageList *ImageList32;
	TRzPanel *MainLeftPanel;
	TRzPanel *WordsTopPanel;
	TRzPanel *WordsListPanel;
	TRzListBox *RusKyrListBox;
	TRzListBox *KyrRusListBox;
	TRzEdit *SearchWordEdit;
	TRzPanel *LanguageTopPanel;
	TImage *LanguageRKImage;
	TImage *LanguageKRImage;
	TRzLabel *LanguageLabel;
	TRzSpacer *RzSpacer1;
	TImageList *ImageList16;
	TRzPanel *HeaderPanel;
	TRzLabel *IncorexLabel;
	TRzLabel *TilchiLabel;
	TImage *HistoryImage;
	TRzLabel *HistoryLabel;
	TImage *SettingsImage;
	TRzLabel *SettingsLabel;
	TImage *HelpImage;
	TRzLabel *HelpLabel;
	TImage *OnTopImage;
	TImage *OnTopFixedImage;
	TRzLabel *OnTopLabel;
	TImage *AboutImage;
	TRzLabel *AboutLabel;
	TPopupMenu *CardDropDownMenu;
	TMenuItem *FindCardMenuItem;
	TMenuItem *ShowValueMenuItem;
	TAction *BigYAction;
	TAction *YAction;
	TAction *BigOAction;
	TAction *OAction;
	TAction *NAction;
	TAction *BigNAction;
	TRzPanel *RightPanel;
	TRzPanel *DefinitionPanel;
	TRzPanel *DefinitionBoxPanel;
	TRzPanel *DefinitionTopPanel;
	TRzToolButton *DefinitionButton;
	TRzPanel *FindMainPanel;
	TRzSpacer *DefinitionBottomSpacer;
	TRzPanel *FindTopPanel;
	TImage *LoupeImage;
	TRzLabel *FindLabel;
	TRzPanel *FindPanel;
	TRzGroupBox *DirectionGroupBox;
	TRzRadioButton *UpRadioButton;
	TRzRadioButton *DownRadioButton;
	TRzCheckBox *CaseCheckBox;
	TRzPanel *FindButtonPanel;
	TRzPanel *RzPanel1;
	TRzEdit *FindWordEdit;
	TMenuItem *TranslateMenuItem;
	TRzPanel *ServicesMainPanel;
	TRzSpacer *WordsMiddleSpacer;
	TRzPanel *ServiceTopPanel;
	TImage *GlobeImage;
	TRzLabel *ServiceLabel;
	TRzPanel *ServicePanel;
	TRzToolButton *DownButton;
	TRzToolButton *PasteButton;
	TRzToolButton *CopyButton;
	TRzToolButton *CutButton;
	TRzToolButton *UpButton;
	TRzPanel *WordsBottomPanel;
	TRzSpacer *WordsBottomSpacer;
	TRzPanel *InformationPanel;
	TRzLabel *TipsLabel;
	TRzMemo *TipsMemo;
	TRzPanel *InformationTopPanel;
	TImage *InformationImage;
	TRzLabel *InformationLabel;
	TRzToolButton *NextTipButton;
	TAction *MaximizeAction;
	TAction *FindPanelAction;
	TAction *ShowValueAction;
	TAction *SearchArticleAction;
	TMenuItem *CopyMenuItem;
	TMenuItem *N2;
	TRzToolButton *PrevTipButton;
	TAction *CopyAction;
	void __fastcall FormDestroy(TObject *Sender);
	void __fastcall ServiceTopPanelClick(TObject *Sender);
	void __fastcall FindTopPanelClick(TObject *Sender);
	void __fastcall InformationTopPanelMouseEnter(TObject *Sender);
	void __fastcall InformationTopPanelClick(TObject *Sender);
	void __fastcall ServiceTopPanelMouseEnter(TObject *Sender);
	void __fastcall LanguageTopPanelMouseLeave(TObject *Sender);
	void __fastcall LanguageTopPanelMouseEnter(TObject *Sender);
	void __fastcall LanguageTopPanelClick(TObject *Sender);
	void __fastcall FindTopPanelMouseEnter(TObject *Sender);
	void __fastcall DefinitionTopPanelMouseEnter(TObject *Sender);
	void __fastcall SearchWordEditChange(TObject *Sender);
	void __fastcall HistoryLabelClick(TObject *Sender);
	void __fastcall OnTopImageMouseEnter(TObject *Sender);
	void __fastcall HelpLabelMouseEnter(TObject *Sender);
	void __fastcall SettingsLabelMouseEnter(TObject *Sender);
	void __fastcall HistoryLabelMouseEnter(TObject *Sender);
	void __fastcall HistoryLabelMouseLeave(TObject *Sender);
	void __fastcall HelpLabelClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall MainCardBoxKeyPress(TObject *Sender, char &Key);
	void __fastcall FindButtonPanelClick(TObject *Sender);
	void __fastcall KyrRusListBoxClick(TObject *Sender);
	void __fastcall OnTopLabelClick(TObject *Sender);
	void __fastcall EscShortCutExecute(TObject *Sender);
	void __fastcall EnterShortCutExecute(TObject *Sender);
	void __fastcall MainCardPopupMenuPopup(TObject *Sender);
	void __fastcall SelAllMenuItemClick(TObject *Sender);
	void __fastcall UpButtonClick(TObject *Sender);
	void __fastcall DownButtonClick(TObject *Sender);
	void __fastcall SearchWordEditKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
	void __fastcall KyrRusListBoxKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
	void __fastcall AboutLabelClick(TObject *Sender);
	void __fastcall AboutLabelMouseEnter(TObject *Sender);
	void __fastcall NextTipButtonClick(TObject *Sender);
	void __fastcall SettingsLabelClick(TObject *Sender);
	void __fastcall TipsMemoClick(TObject *Sender);
	void __fastcall FindCardMenuItemClick(TObject *Sender);
	void __fastcall BigYActionExecute(TObject *Sender);
	void __fastcall YActionExecute(TObject *Sender);
	void __fastcall BigOActionExecute(TObject *Sender);
	void __fastcall OActionExecute(TObject *Sender);
	void __fastcall BigNActionExecute(TObject *Sender);
	void __fastcall NActionExecute(TObject *Sender);
	void __fastcall TranslateMenuItemClick(TObject *Sender);
	void __fastcall ShowValueMenuItemClick(TObject *Sender);
	void __fastcall MaximizeActionExecute(TObject *Sender);
	void __fastcall FindPanelActionExecute(TObject *Sender);
	void __fastcall ShowValueActionExecute(TObject *Sender);
	void __fastcall SearchArticleActionExecute(TObject *Sender);
	void __fastcall CopyMenuItemClick(TObject *Sender);
	void __fastcall DefinitionButtonMouseEnter(TObject *Sender);
	void __fastcall PrevTipButtonClick(TObject *Sender);
	void __fastcall CopyButtonClick(TObject *Sender);
	void __fastcall CutButtonClick(TObject *Sender);
	void __fastcall PasteButtonClick(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
	// Current Loaded Tip
	bool set_to_list_box;
	int CurrentTip, list_ix;
	AnsiString name, lname, org, ryj, haydi, KyrLangID, RusLangID;
	unsigned int msgRestore;
	TDataFile *TipsData;
	TRzListBox *pWordsListBox;
	TFont *PFont, *curListFont, *curEditFont;
	TCardBox *MainCardBox, *ValueCardBox;
	void setFontSize(int);
	int does_match(char*, int, int);
	void ChangeGUIStyle(bool isMenu);
	bool change_keyboard_layout(const AnsiString&, const AnsiString&);
	void __fastcall InsertLetter(AnsiString Input);
	void __fastcall ShowFindDialog(AnsiString msg);
	void __fastcall SetLinkCursor(TControl *Control);
public:		// User declarations
	// Blowfish
	cBlowfish *KRblowfish, *RKblowfish, *pblowfish;
	// Cursor
	int currentLanguage;
	TDataFile *propData;
	TFont *curCardFont;
	AnsiString text, kyluch;
	void loadSettings();
	void translate(bool);
	void loadBase(const AnsiString&);  
	void __fastcall switchDictionaries();
	__fastcall TMainFormClass(TComponent* Owner);
	bool __fastcall MessageHandler(TMessage &Message);
};
//---------------------------------------------------------------------------
extern PACKAGE TMainFormClass *MainFormClass;
//---------------------------------------------------------------------------
#endif
