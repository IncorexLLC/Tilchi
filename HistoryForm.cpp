//$$---- Form CPP ----
//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include "HistoryForm.h"
#include "MainForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzButton"
#pragma link "RzPanel"
#pragma link "RzTreeVw"
#pragma link "RzCommon"
#pragma link "RzLabel"
#pragma resource "*.dfm"
THistoryFormClass *HistoryFormClass;
//---------------------------------------------------------------------------
__fastcall THistoryFormClass::THistoryFormClass(TComponent* Owner) : TForm(Owner)
{
	bottonPressed = false;
}
//---------------------------------------------------------------------------
void THistoryFormClass::delete_node_if_exists(TTreeNode* node, const AnsiString& word)
{
	for (int i = 0; i < node->Count; ++i) {
		if (node->Item[i]->Text == word) {
			node->Item[i]->Delete();
			break;
		}
	}
}
//---------------------------------------------------------------------------
void THistoryFormClass::insertWord(const AnsiString& word)
{
	if (!rootNode)
		rootNode = QueryTreeView->Items->Item[0];

	int count = rootNode->Count;

	if (count > 0) {
		if (rootNode->getFirstChild()->Text != word){
			delete_node_if_exists(rootNode, word);
			QueryTreeView->Items->AddChildFirst(rootNode, word);

			if (rootNode->Count == MAX_RESERVED_WORDS)
				rootNode->Item[MAX_RESERVED_WORDS-1]->Delete();
		}
	} else
		QueryTreeView->Items->AddChildFirst(rootNode, word);

	rootNode->getFirstChild()->Selected = true;
	rootNode->Expanded = true;
}
//---------------------------------------------------------------------------
void THistoryFormClass::insertToCardList(const AnsiString& word)
{
	if (!rootNodeCard)
		rootNodeCard = CardTreeView->Items->Item[0];

	int count = rootNodeCard->Count;

	if (count > 0) {
		if (rootNodeCard->getFirstChild()->Text != word){
			delete_node_if_exists(rootNodeCard, word);
			CardTreeView->Items->AddChildFirst(rootNodeCard, word);

			if (count == MAX_RESERVED_WORDS)
				rootNodeCard->Item[MAX_RESERVED_WORDS-1]->Delete();
		}
	} else
		CardTreeView->Items->AddChildFirst(rootNodeCard, word);
	
	rootNodeCard->getFirstChild()->Selected = true;
	rootNodeCard->Expanded = true;
}
//---------------------------------------------------------------------------
void THistoryFormClass::saveHistory(TDataFile *propData)
{
	TMemoryStream *stream = new TMemoryStream();
	QueryTreeView->SaveToStream(stream);
	propData->WriteStream("HistoryFormClass", "HistoryQuery", stream);

	stream->Clear();
	CardTreeView->SaveToStream(stream);
	propData->WriteStream("HistoryFormClass", "HistoryCard", stream);

	propData->WriteBoolean("HistoryFormClass", "HistoryActiveTree", QueryTreeView->Visible);

	propData->WriteInteger("HistoryFormClass", "Left", Left);
	propData->WriteInteger("HistoryFormClass", "Top", Top);
	delete stream;
}
//---------------------------------------------------------------------------
void THistoryFormClass::readHistory(TDataFile *propData)
{
	TMemoryStream *stream = new TMemoryStream();
	propData->ReadStream("HistoryFormClass", "HistoryQuery", stream);
	QueryTreeView->LoadFromStream(stream);

	stream->Clear();
	propData->ReadStream("HistoryFormClass", "HistoryCard", stream);
	CardTreeView->LoadFromStream(stream);

	if (QueryTreeView->Items->Count < 1)
		QueryTreeView->Items->Add(rootNode, "Запросы");
	else
		rootNode = QueryTreeView->Items->Item[0];

	if (CardTreeView->Items->Count < 1)
		CardTreeView->Items->Add(rootNodeCard, "Статьи");
	else
		rootNodeCard = CardTreeView->Items->Item[0];

	QueryTreeView->Visible = propData->ReadBoolean("HistoryFormClass", "HistoryActiveTree", true);
	CardTreeView->Visible = !QueryTreeView->Visible;

	Left = propData->ReadInteger("HistoryFormClass", "Left", 0);
	if (propData->ValueExists("HistoryFormClass", "Top"))
		Top = propData->ReadInteger("HistoryFormClass", "Top", 0);
	else
		Top = Screen->Height / 2;

	delete stream;
}
//---------------------------------------------------------------------------
void __fastcall THistoryFormClass::HelpLabelClick(TObject *Sender)
{
	Application->HelpJump("history");
}
//---------------------------------------------------------------------------
void __fastcall THistoryFormClass::ClearLabelClick(TObject *Sender)
{
	rootNode->DeleteChildren();
	rootNodeCard->DeleteChildren();
}
//---------------------------------------------------------------------------
void THistoryFormClass::changeStyle()
{
	PFont->Style = TFontStyles() << fsUnderline;
}
//---------------------------------------------------------------------------
void __fastcall THistoryFormClass::HelpImageMouseEnter(TObject *Sender)
{
	PFont = HelpLabel->Font;
	changeStyle();
}
//---------------------------------------------------------------------------
void __fastcall THistoryFormClass::HelpLabelMouseLeave(TObject *Sender)
{
	if (PFont != HelpLabel->Font)
		PFont->Style = HelpLabel->Font->Style;
	else
		PFont->Style = ClearLabel->Font->Style;
}
//---------------------------------------------------------------------------
void __fastcall THistoryFormClass::ClearLabelMouseEnter(TObject *Sender)
{
	PFont = ClearLabel->Font;
	changeStyle();
}
//---------------------------------------------------------------------------
void __fastcall THistoryFormClass::ShowLabelMouseEnter(TObject *Sender)
{
	PFont = ShowLabel->Font;
	changeStyle();
}
//---------------------------------------------------------------------------
void __fastcall THistoryFormClass::CloseLabelMouseEnter(TObject *Sender)
{
	PFont = CloseLabel->Font;
	changeStyle();
}
//---------------------------------------------------------------------------
void __fastcall THistoryFormClass::CloseLabelClick(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------
void __fastcall THistoryFormClass::TopPanelMouseMove(TObject *Sender,
	  TShiftState Shift, int X, int Y)
{
	if (bottonPressed) {
		Left += X - prevX;
		Top += Y - prevY;
	}
}
//---------------------------------------------------------------------------
void __fastcall THistoryFormClass::TopPanelMouseDown(TObject *Sender,
	  TMouseButton Button, TShiftState Shift, int X, int Y)
{
	bottonPressed = true;
	prevX = X;
	prevY = Y;
}
//---------------------------------------------------------------------------
void __fastcall THistoryFormClass::TopPanelMouseUp(TObject *Sender,
	  TMouseButton Button, TShiftState Shift, int X, int Y)
{
	bottonPressed = false;
}
//---------------------------------------------------------------------------
void __fastcall THistoryFormClass::FormShow(TObject *Sender)
{
	FormActivate(this);
	SetLinkCursor(CloseImage);
	SetLinkCursor(ShowImage);
	SetLinkCursor(ClearImage);
	SetLinkCursor(HelpImage);
	SetLinkCursor(ShowLabel);
	SetLinkCursor(ClearLabel);
	SetLinkCursor(HelpLabel);
	SetLinkCursor(CloseLabel);
	SetLinkCursor(LabelPanel);
	CardTreeView->Items->Item[0]->Expand(true);
	QueryTreeView->Items->Item[0]->Expand(true);
}
//---------------------------------------------------------------------------
void __fastcall THistoryFormClass::FormActivate(TObject *Sender)
{
	if (MainFormClass->OnTopFixedImage->Visible)
		FormStyle = fsStayOnTop;
	else
		FormStyle = fsNormal;
}
//---------------------------------------------------------------------------
void __fastcall THistoryFormClass::TranslateImageClick(TObject *Sender)
{
	AnsiString str = (QueryTreeView->Visible ? QueryTreeView : CardTreeView)->Selected->Text;

	if (str == rootNode->Text || str == rootNodeCard->Text)
		MessageDlg("Выберите слово!", mtInformation, TMsgDlgButtons() << mbOK, 0);
	else{
		if (str.Pos(UNKNOWN) > 0)
			MessageDlg("Нет перевода для данного слова!", mtInformation, TMsgDlgButtons() << mbOK, 0);
		else{
			 if (str.Pos(KY_RU) > 0)
			{
				if (MainFormClass->currentLanguage != KYRGYZ_RUSSIAN)
					MainFormClass->switchDictionaries();
			} else
			{
				if (MainFormClass->currentLanguage != RUSSIAN_KYRGYZ)
					MainFormClass->switchDictionaries();
			}

			MainFormClass->SearchWordEdit->Text = str.SubString(0, str.Pos(" ") - 1);
			MainFormClass->translate(false);
		}
	}
}
//---------------------------------------------------------------------------
void __fastcall THistoryFormClass::SetLinkCursor(TControl *Control)
{
	Control->Cursor = (TCursor) 1;
}
//---------------------------------------------------------------------------
void __fastcall THistoryFormClass::QueryClearMenuItemClick(TObject *Sender)
{
	if (QueryTreeView->Visible)
		rootNode->DeleteChildren();
	else
		rootNodeCard->DeleteChildren();
}
//---------------------------------------------------------------------------
void __fastcall THistoryFormClass::QuerySaveMenuItemClick(TObject *Sender)
{
	if (QueryTreeView->Visible) {
		if (SaveDialog->Execute())
			QueryTreeView->SaveToFile(SaveDialog->FileName+".txt");
	}
	else{
		if (SaveDialog->Execute())
			CardTreeView->SaveToFile(SaveDialog->FileName+".txt");
	}
}
//---------------------------------------------------------------------------
void __fastcall THistoryFormClass::QueryButtonMouseEnter(TObject *Sender)
{
	PFont = ((TRzToolButton*)Sender)->Font;
	PFont->Style = TFontStyles() << fsUnderline << fsBold;
}
//---------------------------------------------------------------------------
void __fastcall THistoryFormClass::QueryButtonMouseLeave(TObject *Sender)
{
	if (!QueryTreeView->Visible)
		QueryButton->Font->Style = TFontStyles() << fsBold;
	else
		CardButton->Font->Style = TFontStyles() << fsBold;
}
//---------------------------------------------------------------------------
void __fastcall THistoryFormClass::QueryButtonClick(TObject *Sender)
{
	QueryTreeView->Visible = true;
	QueryButton->Font->Style = TFontStyles() << fsUnderline;
	CardButton->Font->Style = TFontStyles() << fsBold;
	CardTreeView->Visible = false;
}
//---------------------------------------------------------------------------
void __fastcall THistoryFormClass::CardButtonClick(TObject *Sender)
{
	QueryTreeView->Visible = false;
	QueryButton->Font->Style = TFontStyles() << fsBold;
	CardButton->Font->Style = TFontStyles() << fsUnderline;
	CardTreeView->Visible = true;
}
//---------------------------------------------------------------------------


