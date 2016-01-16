//$$---- Form HDR ----
//---------------------------------------------------------------------------

#ifndef RegisterFormH
#define RegisterFormH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "RzButton.hpp"
#include "RzEdit.hpp"
#include "RzLabel.hpp"
#include "RzPanel.hpp"
#include <ExtCtrls.hpp>
#include <Mask.hpp>
#include <ImgList.hpp>
#include "RzCommon.hpp"
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TRegisterFormClass : public TForm
{
__published:	// IDE-managed Components
	TRzPanel *RegisterPanel;
	TRzPanel *RzPanel1;
	TRzLabel *RegisterLabel;
	TImage *RegisterImage;
	TImage *CloseImage;
	TRzLabel *CloseLabel;
	TImageList *ImageList16;
	TRzButton *ApplyButton;
	TRzButton *HelpButton;
	TRzToolButton *HIDCopyButton;
	TRzEdit *HIDEdit;
	TRzToolButton *NameCopyButton;
	TRzEdit *NameEdit;
	TRzToolButton *OrgCopyButton;
	TRzEdit *OrgEdit;
	TRzGroupBox *RzGroupBox2;
	TRzLabel *RzLabel5;
	TRzToolButton *KeyCopyButton;
	TRzEdit *KeyEdit;
	TRzGroupBox *RzGroupBox3;
	TRzButton *RegWebButton;
	TRzButton *RegWebHelpButton;
	TRzGroupBox *RzGroupBox4;
	TRzLabel *RzLabel1;
	TRzLabel *RzLabel2;
	TRzLabel *RzLabel4;
	TRzLabel *RzLabel6;
	TRzToolButton *SerialCopyButton;
	TRzEdit *SerialEdit;
	TRzLabel *RzLabel3;
	TRzEdit *LastNameEdit;
	TRzToolButton *LastNameCopyButton;
	TRzButton *RegEmailHelpButton;
	TRzButton *RegEmailButton;
	void __fastcall KeyCopyButtonClick(TObject *Sender);
	void __fastcall NameCopyButtonClick(TObject *Sender);
	void __fastcall HIDCopyButtonClick(TObject *Sender);
	void __fastcall SerialCopyButtonClick(TObject *Sender);
	void __fastcall OrgCopyButtonClick(TObject *Sender);
	void __fastcall ApplyButtonClick(TObject *Sender);
	void __fastcall CloseLabelClick(TObject *Sender);
	void __fastcall TopPanelMouseDown(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
	void __fastcall TopPanelMouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y);
	void __fastcall TopPanelMouseUp(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
	void __fastcall CloseLabelMouseEnter(TObject *Sender);
	void __fastcall CloseLabelMouseLeave(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall SerialEditEnter(TObject *Sender);
	void __fastcall SerialEditExit(TObject *Sender);
	void __fastcall NameEditEnter(TObject *Sender);
	void __fastcall NameEditExit(TObject *Sender);
	void __fastcall OrgEditEnter(TObject *Sender);
	void __fastcall OrgEditExit(TObject *Sender);
	void __fastcall KeyEditEnter(TObject *Sender);
	void __fastcall KeyEditExit(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall LastNameEditEnter(TObject *Sender);
	void __fastcall LastNameEditExit(TObject *Sender);
	void __fastcall RegWebButtonClick(TObject *Sender);
	void __fastcall RegWebHelpButtonClick(TObject *Sender);
	void __fastcall RegEmailHelpButtonClick(TObject *Sender);
	void __fastcall HelpButtonClick(TObject *Sender);
	void __fastcall RegEmailButtonClick(TObject *Sender);
private:	// User declarations
	TFont *PFont;
	HINSTANCE hDLL;
	int prevX, prevY;
	bool bottonPressed;
	void ChangeGUIStyle();
	bool CheckData();
	PChar (__stdcall* GetHardwareID)();
	int (__stdcall * SS_R)(PChar Name, PChar Key);
	AnsiString MD5(const AnsiString in);
	void SetEditColor(TRzEdit *curEdit, bool isActive);
public:		// User declarations
	__fastcall TRegisterFormClass(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TRegisterFormClass *RegisterFormClass;
//---------------------------------------------------------------------------
#endif
