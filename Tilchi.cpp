//$$---- EXE CPP ----
//---------------------------------------------------------------------------
#include <vcl.h>
#include "ThemidaSDK.h"
#include "SZCRC32.hpp"
#include "DataFile.hpp"
#include "md5.h"
#pragma hdrstop
//---------------------------------------------------------------------------
USEFORM("AboutForm.cpp", AboutFormClass);
USEFORM("HistoryForm.cpp", HistoryFormClass);
USEFORM("MainForm.cpp", MainFormClass);
USEFORM("RegisterForm.cpp", RegisterFormClass);
USEFORM("SettingsForm.cpp", SettingsFormClass);
USEFORM("SplashForm.cpp", SplashFormClass);
//---------------------------------------------------------------------------
AnsiString GetHash(const AnsiString& str)
{
	char out_char[32];
VM_START_WITHLEVEL(1)
	GetMD5(str.c_str(), str.Length(), out_char);
VM_END
	return AnsiString(out_char);
}
//---------------------------------------------------------------------------
AnsiString __fastcall PrepSer(const AnsiString& Str)
{
	AnsiString temp;
ENCODE_START
	for (int i = 1; i <= Str.Length(); i++) {
		temp += Str[i];
		if (i%4 == 0 && i!=Str.Length())
			temp += "-";
	}
ENCODE_END
	return temp;
}
//---------------------------------------------------------------------------
bool __fastcall StrVal(const AnsiString& str1, const AnsiString& str2)
{
	int n = str1.Length();
VM_START
	if (n++ != str2.Length())
		return false;

	for (int i = 1; i < n; ++i){
		if (str1[i] != str2[i])
			return false;
	}
VM_END
	return true;
}
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	try
	{
	  // check for the existence of the mutex.
	  ENCODE_START
		AnsiString dllname = "tilsysdrv.dll";
		FILE *fn = fopen("Data.dat", "rb");
		HANDLE Mutex = OpenMutex(MUTEX_ALL_ACCESS, false, "Tilchi_Instance_Mutex");
	  ENCODE_END
		if (Mutex == NULL) { // this is the only instance
			//create the mutex...
		VM_START
			Mutex = CreateMutex(NULL, true, "Tilchi_Instance_Mutex");
			Application->Initialize();
			Application->Title = "Incorex Tilchi 1.0";
			Application->HelpFile = "Tilchi_help.chm";
            fclose(fn); 
		VM_END
			// Loading DLL for HID
			if(!FileExists(dllname)) {
				 VM_START
					MessageBox(NULL, "Необходимые библиотеки не найдены!", "Внимание!",
						MB_OK | MB_ICONERROR);
				 VM_END
			}
			else {
			VM_START_WITHLEVEL(3)
				HINSTANCE hDLL = LoadLibrary(dllname.c_str());
				PChar (__stdcall* GetHardwareID)();
				int (__stdcall * SS_R)(PChar Name, PChar Key);

				GetHardwareID = (PChar( __stdcall* )()) GetProcAddress(hDLL, "GetHardwardID");
				SS_R = (int(__stdcall*)(PChar Name, PChar Key)) GetProcAddress(hDLL,"SS_R");
				SS_R("6D36796170616373716B75502B7342502E", "84B7E0A0E2B1AAF3D5F1C995");
			VM_END
				if(FileExists("Tilchi.ldf"))
				{
					// reading LDF file
					TDataFile *aboutData = new TDataFile("Tilchi.ldf");
				VM_START_WITHLEVEL(3)
                    AnsiString temp = GetHash(GetHardwareID()).UpperCase(),
						HID = temp.SubString(0, 16) + "-" + temp.SubString(17, 16), // Dividing HID = xxxxxxxxxxxxxxxx-xxxxxxxxxxxxxxxx
						US_HID = aboutData->ReadString("TilchiLic","US_HID", "0"),
						name = aboutData->ReadString("TilchiLic", "US_NAME", "0"),
						lname = aboutData->ReadString("TilchiLic", "US_LAST_NAME", "0"),
						org = aboutData->ReadString("TilchiLic", "US_ORG", "0"),
						ser = aboutData->ReadString("TilchiLic", "US_SERIAL", "0"),
						key = aboutData->ReadString("TilchiLic", "US_KEY", "0");
                 VM_END
					// Checking if HID is ok
					if (StrVal(HID, US_HID) && ser.Length() == 23 && key.Length() == 39)
					{
						/*
						N	:name, LN	:last name, ORG	:organization
						S	:serial         S3(TIL) + S41 + S42 + S43 + S44
						HID	: hardward ID   HID161 + HID162
						FINAL = # + S3 + LN + % + S41 + HID162 + ORG + S42 + N + & + S43 + HID161 + S44 + $
						*/
						VM_START_WITHLEVEL(6)
							AnsiString text = PrepSer(GetHash("#" + ser.SubString(1, 3) + lname + "%" +
											ser.SubString(5, 4) + HID.SubString(18, 16) +
											org + ser.SubString(10, 4) + name + "&" +
											ser.SubString(15, 4) + HID.SubString(1, 16) +
											ser.SubString(20, 4) + "$").UpperCase());
						VM_END
						if (StrVal(text, key)) { // if Key is ok
							// LDF is ok... checking dicts
						VM_START
							if (FileExists("Dic\\KR.tdb") && FileExists("Dic\\RK.tdb"))
							{
								if (AnsiString(SZCRC32File("Dic\\KR.tdb")) == "1741273116"
									&& AnsiString(SZCRC32File("Dic\\RK.tdb")) == "3960847320")
								{
									Application->CreateForm(__classid(TMainFormClass), &MainFormClass);
								} else {
									  MessageBox(NULL, "Файлы словарей повреждены!", "Внимание!",
										MB_OK | MB_ICONERROR);
									  Application->Terminate();
								}
							} else {
								MessageBox(NULL, "Файлы словарей не найдены!", "Внимание!",
									MB_OK | MB_ICONERROR);
								Application->Terminate();
							}
						VM_END
						} else {
							ENCODE_START
							   Application->CreateForm(__classid(TRegisterFormClass), &RegisterFormClass);
							ENCODE_END
                        }
					} else {
						ENCODE_START
						   Application->CreateForm(__classid(TRegisterFormClass), &RegisterFormClass);
						ENCODE_END
					}
					delete aboutData;
				} else {
					ENCODE_START
					   Application->CreateForm(__classid(TRegisterFormClass), &RegisterFormClass);
					ENCODE_END
                }
				ENCODE_START
				   Application->Run();
				ENCODE_END
			}
		}
		else { // this is not the only instance
			// Send a message to the previous instance of the application, asking
			// it to restore and front itself.
			SendMessage(HWND_BROADCAST, RegisterWindowMessage("WM_Tilchi_Instance"), 0, 0);
			return 0;
		}
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
		
	return 0;
}
//---------------------------------------------------------------------------

