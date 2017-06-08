#pragma once   //_____________________________________________ EjercicioOnceDlg.h  
#include "resource.h"

class EjercicioOnceDlg: public Win::Dialog
{
public:
	EjercicioOnceDlg()
	{
	}
	~EjercicioOnceDlg()
	{
	}
private:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Button btClick;
	Win::Textbox tbxTexto;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx=Sys::Convert::CentimetersToDlgUnitX(11.45646);
		dlgTemplate.cy=Sys::Convert::CentimetersToDlgUnitY(4.20688);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		btClick.CreateX(NULL, L"Click", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 8.20208, 3.33375, 2.96333, 0.68792, hWnd, 1000);
		tbxTexto.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 8.22854, 2.35479, 3.04271, 0.60854, hWnd, 1001);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		btClick.Font = fontArial009A;
		tbxTexto.Font = fontArial009A;
	}
	//_________________________________________________
	void btClick_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btClick.IsEvent(e, BN_CLICKED)) {btClick_Click(e); return true;}
		return false;
	}
};
