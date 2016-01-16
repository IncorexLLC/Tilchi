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
	TRzPanel *RzPanel1;
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
private:	// User declarations
public:		// User declarations
	__fastcall TRegisterMFormClass(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TRegisterMFormClass *RegisterMFormClass;
//---------------------------------------------------------------------------
#endif
