//$$---- Form HDR ----
//---------------------------------------------------------------------------
#ifndef HistoryFormH
#define HistoryFormH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "RzButton.hpp"
#include "RzPanel.hpp"
#include "RzTreeVw.hpp"
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
#include "RzCommon.hpp"          
#include "DataFile.hpp"
#include <ImgList.hpp>
#include "RzLabel.hpp"
#include <Graphics.hpp>
#include <Menus.hpp>
#include <Dialogs.hpp>   
//---------------------------------------------------------------------------
const int MAX_RESERVED_WORDS = 30;

class THistoryFormClass : public TForm
{
__published:	// IDE-managed Components
	TRzPanel *HistoryPanel;
	TRzSpacer *TopSpacer;
	TRzSpacer *MiddleSpacer;
	TRzSpacer *LeftSpacer;
	TRzSpacer *RightSpacer;
	TRzPanel *HeaderPanel;
	TRzPanel *TopPanel;
	TRzLabel *CloseLabel;
	TRzLabel *HistoryLabel;
	TImage *HistoryImage;
	TRzSpacer *BottomSpacer;
	TImage *CloseImage;
	TRzPanel *LeftPanel;
	TRzLabel *ClearLabel;
	TRzLabel *HelpLabel;
	TImage *HelpImage;
	TImage *ClearImage;
	TImage *ShowImage;
	TRzLabel *ShowLabel;
	TRzSpacer *RzSpacer4;
	TRzSpacer *RzSpacer5;
	TRzSpacer *RzSpacer6;
	TRzPanel *TreePanel;
	TRzTreeView *CardTreeView;
	TRzTreeView *QueryTreeView;
	TPopupMenu *QueryMenu;
	TMenuItem *QuerySaveMenuItem;
	TMenuItem *QueryClearMenuItem;
	TSaveDialog *SaveDialog;
	TRzPanel *LabelPanel;
	TRzToolButton *QueryButton;
	TRzToolButton *CardButton;
	void __fastcall HelpImageMouseEnter(TObject *Sender);
	void __fastcall HelpLabelClick(TObject *Sender);
	void __fastcall ClearLabelClick(TObject *Sender);
	void __fastcall HelpLabelMouseLeave(TObject *Sender);
	void __fastcall ClearLabelMouseEnter(TObject *Sender);
	void __fastcall ShowLabelMouseEnter(TObject *Sender);
	void __fastcall CloseLabelMouseEnter(TObject *Sender);
	void __fastcall CloseLabelClick(TObject *Sender);
	void __fastcall TopPanelMouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y);
	void __fastcall TopPanelMouseDown(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
	void __fastcall TopPanelMouseUp(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall TranslateImageClick(TObject *Sender);
	void __fastcall QueryClearMenuItemClick(TObject *Sender);
	void __fastcall QuerySaveMenuItemClick(TObject *Sender);
	void __fastcall QueryButtonMouseEnter(TObject *Sender);
	void __fastcall QueryButtonMouseLeave(TObject *Sender);
	void __fastcall QueryButtonClick(TObject *Sender);
	void __fastcall CardButtonClick(TObject *Sender);
private:	// User declarations           
	TTreeNode *rootNode, *rootNodeCard;
	TFont *PFont;
	bool bottonPressed;
	int prevX, prevY;
	void changeStyle();
	void delete_node_if_exists(TTreeNode*, const AnsiString&);
	void __fastcall SetLinkCursor(TControl *Control);
public:		// User declarations    
	__fastcall THistoryFormClass(TComponent* Owner);
	void insertWord(const AnsiString&);
	void insertToCardList(const AnsiString&);
	void saveHistory(TDataFile*);
	void readHistory(TDataFile*);
};
//---------------------------------------------------------------------------
extern PACKAGE THistoryFormClass *HistoryFormClass;
//---------------------------------------------------------------------------
#endif
