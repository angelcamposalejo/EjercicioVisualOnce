#pragma once  //______________________________________ EjercicioVisualOncePrinc.h  
#include "Resource.h"
#include "FabiDlg.h"
class EjercicioVisualOncePrinc: public Win::Dialog
{
public:
	EjercicioVisualOncePrinc()
	{
	}
	~EjercicioVisualOncePrinc()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Button btJavier;
	Win::Button btAdri;
	Win::Button btFabi;
	Win::Button btJesu;
	Win::Button btAngel;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx=Sys::Convert::CentimetersToDlgUnitX(13.89063);
		dlgTemplate.cy=Sys::Convert::CentimetersToDlgUnitY(1.37583);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"EjercicioVisualOncePrinc";
		btJavier.CreateX(NULL, L"Javier", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 0.44979, 0.50271, 2.69875, 0.68792, hWnd, 1000);
		btAdri.CreateX(NULL, L"Adri", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 3.28083, 0.50271, 2.72521, 0.68792, hWnd, 1001);
		btFabi.CreateX(NULL, L"Fabi", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 6.11188, 0.50271, 2.38125, 0.68792, hWnd, 1002);
		btJesu.CreateX(NULL, L"Jesu", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 8.73125, 0.50271, 2.30187, 0.68792, hWnd, 1003);
		btAngel.CreateX(NULL, L"Angel", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 11.37708, 0.50271, 2.32833, 0.68792, hWnd, 1004);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		btJavier.Font = fontArial009A;
		btAdri.Font = fontArial009A;
		btFabi.Font = fontArial009A;
		btJesu.Font = fontArial009A;
		btAngel.Font = fontArial009A;
	}
	//_________________________________________________
	void btJavier_Click(Win::Event& e);
	void btAdri_Click(Win::Event& e);
	void btFabi_Click(Win::Event& e);
	void btJesu_Click(Win::Event& e);
	void btAngel_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btJavier.IsEvent(e, BN_CLICKED)) {btJavier_Click(e); return true;}
		if (btAdri.IsEvent(e, BN_CLICKED)) {btAdri_Click(e); return true;}
		if (btFabi.IsEvent(e, BN_CLICKED)) {btFabi_Click(e); return true;}
		if (btJesu.IsEvent(e, BN_CLICKED)) {btJesu_Click(e); return true;}
		if (btAngel.IsEvent(e, BN_CLICKED)) {btAngel_Click(e); return true;}
		return false;
	}
};
