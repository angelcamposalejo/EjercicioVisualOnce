#pragma once   //_____________________________________________ AdriDlg.h  
#include "resource.h"


class AdriDlg: public Win::Dialog
{
public:
	AdriDlg()
	{
	}
	~AdriDlg()
	{
	}
private:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Textbox tbxNombre;
	Win::Button btAceptar;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx=Sys::Convert::CentimetersToDlgUnitX(4.23333);
		dlgTemplate.cy=Sys::Convert::CentimetersToDlgUnitY(2.19604);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		tbxNombre.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 0.47625, 0.50271, 3.57187, 0.60854, hWnd, 1000);
		btAceptar.CreateX(NULL, L"Aceptar", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 0.76729, 1.32292, 2.22250, 0.68792, hWnd, 1001);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		tbxNombre.Font = fontArial009A;
		btAceptar.Font = fontArial009A;
	}
	//_________________________________________________
	void btAceptar_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btAceptar.IsEvent(e, BN_CLICKED)) {btAceptar_Click(e); return true;}
		return false;
	}
};
