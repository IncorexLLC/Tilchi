//---------------------------------------------------------------------------
#ifndef RegisterMFormH
#define RegisterMFormH
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
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TRegisterMFormClass : public TForm
{
__published:	// IDE-managed Components
	TRzPanel *RegisterPanel;
	TRzLabel *RzLabel6;
	TRzPanel *TopPanel;
	TRzLabel *RegisterLabel;
	TImage *RegisterImage;
	TImage *CloseImage;
	TRzLabel *CloseLabel;
	TRzButton *ApplyButton;
	TRzButton *HelpButton;
	TRzMemo *RegMemo;
	void __fastcall ApplyButtonClick(TObject *Sender);
	void __fastcall HelpButtonClick(TObject *Sender);
	void __fastcall CloseLabelClick(TObject *Sender);
	void __fastcall TopPanelMouseDown(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
	void __fastcall TopPanelMouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y);
	void __fastcall TopPanelMouseUp(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
	void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
	int prevX, prevY;
	bool bottonPressed;
public:		// User declarations
	__fastcall TRegisterMFormClass(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TRegisterMFormClass *RegisterMFormClass;
//---------------------------------------------------------------------------
#endif
