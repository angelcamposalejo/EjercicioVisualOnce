#include "stdafx.h"  //________________________________________ EjercicioVisualOncePrinc.cpp
#include "EjercicioVisualOncePrinc.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	EjercicioVisualOncePrinc app;
	return app.BeginDialog(IDI_EjercicioVisualOncePrinc, hInstance);
}

void EjercicioVisualOncePrinc::Window_Open(Win::Event& e)
{
}

void EjercicioVisualOncePrinc::btJavier_Click(Win::Event& e)
{
	JavierDlg objDlg;
	objDlg.BeginDialog(hWnd);
}

void EjercicioVisualOncePrinc::btAdri_Click(Win::Event& e)
{
}

void EjercicioVisualOncePrinc::btFabi_Click(Win::Event& e)
{
}

void EjercicioVisualOncePrinc::btJesu_Click(Win::Event& e)
{
}

void EjercicioVisualOncePrinc::btAngel_Click(Win::Event& e)
{
}

