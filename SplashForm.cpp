//$$---- Form CPP ----
//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include "MainForm.h"
#include "SplashForm.h"    
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzStatus"
#pragma resource "*.dfm"
TSplashFormClass *SplashFormClass;
//---------------------------------------------------------------------------
__fastcall TSplashFormClass::TSplashFormClass(TComponent* Owner) : TForm(Owner)
{
	SplashClose = false;
}
//---------------------------------------------------------------------------
void __fastcall TSplashFormClass::Timer1Timer(TObject *Sender)
{
	int counter = 5;
	ProgressStatus->Percent += counter;
}
//---------------------------------------------------------------------------
__fastcall TThreadClass::TThreadClass(bool CreateSuspended) : TThread(CreateSuspended){}
//---------------------------------------------------------------------------
void __fastcall TThreadClass::Execute()
{
	MainFormClass->loadBase("Dic\\KR.tdb");

	int temp = SplashFormClass->ProgressStatus->Percent;
	if (temp < 50)
		SplashFormClass->Timer1->Interval /= 3;
	else if (temp > 50)
		SplashFormClass->Timer1->Interval *= 3;

	MainFormClass->loadBase("Dic\\RK.tdb");
	SplashFormClass->ProgressStatus->Percent = 100;
	SplashFormClass->SplashClose = true;
	SplashFormClass->Close();
}
//---------------------------------------------------------------------------
void __fastcall TSplashFormClass::FormShow(TObject *Sender)
{
	ThreadClass = new TThreadClass(true);
	ThreadClass->Resume();
}
//---------------------------------------------------------------------------
void __fastcall TSplashFormClass::FormDestroy(TObject *Sender)
{
	delete ThreadClass;
}
//---------------------------------------------------------------------------
void __fastcall TSplashFormClass::OnTerminate(TObject *) { } // Do not close!
//---------------------------------------------------------------------------
void __fastcall TSplashFormClass::FormCloseQuery(TObject *Sender, bool &CanClose)
{
 	CanClose = SplashClose;
}
//---------------------------------------------------------------------------

