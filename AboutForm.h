//$$---- Form HDR ----
//---------------------------------------------------------------------------
#ifndef AboutFormH
#define AboutFormH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "RzLabel.hpp"
#include "RzPanel.hpp"
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include "RzButton.hpp"
#include <Graphics.hpp>
#include "RzTabs.hpp"
#include "RzEdit.hpp"
//---------------------------------------------------------------------------
class TAboutFormClass : public TForm
{
__published:	// IDE-managed Components
	TRzPanel *AboutPanel;
	TRzSpacer *TopSpacer;
	TRzSpacer *MiddleSpacer;
	TRzSpacer *LeftSpacer;
	TRzSpacer *RightSpacer;
	TRzSpacer *BottomSpacer;
	TRzPanel *HeaderPanel;
	TRzLabel *AboutLabel;
	TImage *AboutImage;
	TImage *LicImage;
	TRzLabel *LicLabel;
	TRzSpacer *RzSpacer1;
	TRzSpacer *RzSpacer2;
	TRzPanel *TopPanel;
	TRzLabel *HistoryLabel;
	TImage *HistoryImage;
	TRzPanel *InfoPanel;
	TRzLabel *CopyRightLabel;
	TRzLabel *LtdLabel;
	TRzGroupBox *RzGroupBox1;
	TRzLabel *RzLabel1;
	TRzLabel *NameLabel;
	TRzLabel *RzLabel3;
	TRzLabel *OrgLabel;
	TRzLabel *KeyLabel;
	TRzLabel *RzLabel6;
	TRzLabel *RzLabel7;
	TRzLabel *SerialLabel;
	TRzLabel *SystemLabel;
	TRzLabel *IncoreXLabel;
	TRzLabel *UniWebLabel;
	TRzLabel *VersionLabel;
	TRzPanel *LicPanel;
	TRzGroupBox *RzGroupBox2;
	TRzMemo *LicenseMemo;
	TRzLabel *RzLabel9;
	TRzLabel *LastNameLabel;
	TRzLabel *RzLabel11;
	TRzLabel *CloseLabel;
	TImage *CloseImage;
	void __fastcall UniWebLabelClick(TObject *Sender);
	void __fastcall CloseLabelClick(TObject *Sender);
	void __fastcall TopPanelMouseDown(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
	void __fastcall TopPanelMouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y);
	void __fastcall TopPanelMouseUp(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
	void __fastcall AboutImageClick(TObject *Sender);
	void __fastcall LicImageClick(TObject *Sender);
	void __fastcall AboutLabelMouseEnter(TObject *Sender);
	void __fastcall LicLabelMouseEnter(TObject *Sender);
	void __fastcall AboutImageMouseLeave(TObject *Sender);
	void __fastcall CloseLabelMouseEnter(TObject *Sender);
	void __fastcall LicenseMemoClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
private:	// User declarations
    TFont *PFont;
	bool bottonPressed;
	int prevX, prevY;
	void ChangeGUIStyle();
	void __fastcall SetLinkCursor(TControl *Control);
public:		// User declarations
	__fastcall TAboutFormClass(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAboutFormClass *AboutFormClass;
//---------------------------------------------------------------------------
#endif
