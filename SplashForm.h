//$$---- Form HDR ----
//---------------------------------------------------------------------------
#ifndef SplashFormH
#define SplashFormH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include "RzStatus.hpp"
//---------------------------------------------------------------------------
class TThreadClass : public TThread
{
private:
protected:
   void __fastcall Execute();
public:
   __fastcall TThreadClass(bool CreateSuspended);
};

//---------------------------------------------------------------------------
class TSplashFormClass : public TForm
{
__published:	// IDE-managed Components
	TImage *SplashImage;
	TTimer *Timer1;
	TRzProgressStatus *ProgressStatus;
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall FormDestroy(TObject *Sender);
	void __fastcall FormCloseQuery(TObject *Sender, bool &CanClose);
private:	// User declarations
	unsigned int msgRestore;
	TThreadClass* ThreadClass;
public:		// User declarations
	bool SplashClose;
	__fastcall TSplashFormClass(TComponent* Owner);
	void __fastcall OnTerminate(TObject *);
};
//---------------------------------------------------------------------------
extern PACKAGE TSplashFormClass *SplashFormClass;
//---------------------------------------------------------------------------
#endif
