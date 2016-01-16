//$$---- Form HDR ----
//---------------------------------------------------------------------------
#ifndef SettingsFormH
#define SettingsFormH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "RzLabel.hpp"
#include "RzPanel.hpp"
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
#include "RzTreeVw.hpp"
#include <ComCtrls.hpp>
#include "RzButton.hpp"
#include "RzRadChk.hpp"
#include "RzCmboBx.hpp"
#include <Dialogs.hpp>
//---------------------------------------------------------------------------
class TSettingsFormClass : public TForm
{
__published:	// IDE-managed Components
	TRzPanel *SettingsPanel;
	TRzSpacer *HeaderTopSpacer;
	TRzSpacer *MiddleSpacer;
	TRzSpacer *HeaderBottomSpacer;
	TRzSpacer *LeftSpacer;
	TRzSpacer *RightSpacer;
	TRzSpacer *HeaderMiddleSpacer;
	TRzPanel *TopPanel;
	TRzLabel *SettingsLabel;
	TImage *SettingsImage;
	TRzPanel *RightPanel;
	TRzPanel *RightTopPanel;
	TRzLabel *CaptionLabel;
	TRzPanel *GeneralPanel;
	TRzPanel *BottomPanel;
	TRzSpacer *BottomLeftSpacer;
	TRzPanel *ButtonsPanel;
	TRzSpacer *RzSpacer1;
	TRzButton *DefaultsButton;
	TRzButton *ApplyButton;
	TRzButton *OkButton;
	TRzButton *CancelButton;
	TRzButton *HelpButton;
	TFontDialog *FontDialog;
	TRzLabel *CloseLabel;
	TImage *CloseImage;
	TRzPanel *LeftPanel;
	TRzPanel *DesignPanel;
	TRzPanel *HotKeyPanel;
	TRzGroupBox *RzGroupBox5;
	TRzCheckBox *AltCheckBox;
	TRzCheckBox *ShiftCheckBox;
	TRzGroupBox *RzGroupBox6;
	TRzCheckBox *ServicePanelCheckBox;
	TRzCheckBox *InformationPanelCheckBox;
	TRzCheckBox *FindPanelCheckBox;
	TRzGroupBox *RzGroupBox2;
	TRzGroupBox *RzGroupBox1;
	TRzLabel *ListFontLabel;
	TRzPanel *HeaderPanel;
	TImage *GeneralMenuImage;
	TRzLabel *GeneralLabel;
	TRzSpacer *RzSpacer2;
	TImage *HotKeyMenuImage;
	TRzLabel *HotKeyLabel;
	TRzSpacer *RzSpacer3;
	TImage *DesignMenuImage;
	TRzLabel *DesignLabel;
	TImage *CaptionImage;
	TRzPanel *ListFontPanel;
	TRzLabel *ListSizeLabel;
	TRzLabel *RzLabel7;
	TRzPanel *ListColorPanel;
	TRzLabel *RzLabel3;
	TRzPanel *DefaultListFontPanel;
	TRzGroupBox *RzGroupBox3;
	TRzLabel *EditSizeLabel;
	TRzLabel *RzLabel5;
	TRzLabel *RzLabel6;
	TRzGroupBox *RzGroupBox4;
	TRzLabel *EditFontLabel;
	TRzPanel *EditFontPanel;
	TRzPanel *EditColorPanel;
	TRzPanel *DefaultEditFontPanel;
	TRzGroupBox *RzGroupBox7;
	TRzLabel *CardSizeLabel;
	TRzLabel *RzLabel11;
	TRzGroupBox *RzGroupBox8;
	TRzLabel *CardFontLabel;
	TRzPanel *CardFontPanel;
	TRzPanel *DefaultCardFontPanel;
	TRzGroupBox *RzGroupBox9;
	TRzCheckBox *UseAltCheckBox;
	void __fastcall CloseLabelClick(TObject *Sender);
	void __fastcall TopPanelMouseDown(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
	void __fastcall TopPanelMouseUp(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
	void __fastcall TopPanelMouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall GeneralMenuImageClick(TObject *Sender);
	void __fastcall HotKeyMenuImageClick(TObject *Sender);
	void __fastcall DesignMenuImageClick(TObject *Sender);
	void __fastcall ListFontPanelClick(TObject *Sender);
	void __fastcall ListColorPanelClick(TObject *Sender);
	void __fastcall DefaultListFontPanelClick(TObject *Sender);
	void __fastcall EditFontPanelClick(TObject *Sender);
	void __fastcall EditColorPanelClick(TObject *Sender);
	void __fastcall DefaultEditFontPanelClick(TObject *Sender);
	void __fastcall CardFontPanelClick(TObject *Sender);
	void __fastcall DefaultCardFontPanelClick(TObject *Sender);
	void __fastcall DefaultsButtonClick(TObject *Sender);
	void __fastcall HelpButtonClick(TObject *Sender);
	void __fastcall OkButtonClick(TObject *Sender);
	void __fastcall ApplyButtonClick(TObject *Sender);
	void __fastcall LayoutCheckBoxClick(TObject *Sender);
	void __fastcall GeneralMenuImageMouseEnter(TObject *Sender);
	void __fastcall HotKeyMenuImageMouseEnter(TObject *Sender);
	void __fastcall DesignMenuImageMouseEnter(TObject *Sender);
	void __fastcall GeneralMenuImageMouseLeave(TObject *Sender);
	void __fastcall CloseLabelMouseEnter(TObject *Sender);
	void __fastcall FormDestroy(TObject *Sender);
private:	// User declarations
	TFont *PFont;     
	bool bottonPressed;
	int prevX, prevY;
	TColor List1Color, Edit1Color;
	TFont *ListFont, *EditFont, *CardFont;
	void ChangeGUIStyle();
	void SetLinkCursor(TControl *Control);
	void SetActivePanel(int PanelID);
	void SaveSettings(bool Close);
	
public:		// User declarations
	__fastcall TSettingsFormClass(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TSettingsFormClass *SettingsFormClass;
//---------------------------------------------------------------------------
#endif
