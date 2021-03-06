/*********************************************************************
 * Name:      	main.cpp
 * Purpose:   	Implements simple wxWidgets application with GUI
 * 				created using wxFormBuilder.
 * Author:
 * Created:
 * Copyright:
 * License:   	wxWidgets license (www.wxwidgets.org)
 *
 * Notes:		Note that all GUI creation code is implemented in
 * 				gui.cpp source file which is generated by wxFormBuilder.
 *********************************************************************/

#include <tchar.h>
#include "main.h"

// initialize the application
IMPLEMENT_APP(MainApp);

////////////////////////////////////////////////////////////////////////////////
// application class implementation
////////////////////////////////////////////////////////////////////////////////

bool MainApp::OnInit()
{
	SetTopWindow( new MainDialog( NULL ) );
	GetTopWindow()->Show();

	// true = enter the main loop
	return true;
}

////////////////////////////////////////////////////////////////////////////////
// main application frame implementation
////////////////////////////////////////////////////////////////////////////////

MainDialog::MainDialog(wxWindow *parent) : MainDialogBase( parent )
{
	TCHAR key_string[10];
	TCHAR sound_string[MAX_PATH];
	TCHAR filename[MAX_PATH];
	for(int i=0; i<20; i++)
	{
		wsprintf(key_string, TEXT("sound%d"), i+1);
		DWORD len = ::GetCurrentDirectory(MAX_PATH, filename);
		wsprintf(filename+len, TEXT("\\filelist.ini"));
		::GetPrivateProfileString(TEXT("sound"), key_string, TEXT(""),
		                          sound_string, MAX_PATH, filename);
		if(0 == _tcslen(sound_string))
		{
			break;
		}

		TCHAR *token = _tcstok(sound_string, TEXT(","));
		if(NULL != token)
		{
			_tcscpy(lines[i].desc, token);
			token = _tcstok(NULL, TEXT(","));
			if(NULL != token)
			{
				_tcscpy(lines[i].filename, token);
			}
		}

		switch(i)
		{
		case 0:
			m_staticText1->SetLabel(lines[i].desc);
			break;
		case 1:
			m_staticText2->SetLabel(lines[i].desc);
			break;
		case 2:
			m_staticText3->SetLabel(lines[i].desc);
			break;
		case 3:
			m_staticText4->SetLabel(lines[i].desc);
			break;
		case 4:
			m_staticText5->SetLabel(lines[i].desc);
			break;
		case 5:
			m_staticText6->SetLabel(lines[i].desc);
			break;
		case 6:
			m_staticText7->SetLabel(lines[i].desc);
			break;
		case 7:
			m_staticText8->SetLabel(lines[i].desc);
			break;
		case 8:
			m_staticText9->SetLabel(lines[i].desc);
			break;
		case 9:
			m_staticText10->SetLabel(lines[i].desc);
			break;
		case 10:
			m_staticText11->SetLabel(lines[i].desc);
			break;
		case 11:
			m_staticText12->SetLabel(lines[i].desc);
			break;
		default:
			break;
		}
	}
}

MainDialog::~MainDialog()
{
}

void MainDialog::OnCloseDialog(wxCloseEvent& event)
{
	Destroy();
}

void MainDialog::OnOKClick(wxCommandEvent& event)
{
	Destroy();
}

void MainDialog::OnCancelClick(wxCommandEvent& event)
{
	Destroy();
}


void MainDialog::onToggleButton1(wxCommandEvent& event)
{
	TCHAR filename[MAX_PATH];
	DWORD len = ::GetCurrentDirectory(MAX_PATH, filename);
	wsprintf(filename+len, TEXT("\\%s"), lines[0].filename);

	// 播放音频
	::PlaySound(filename, NULL, SND_FILENAME|SND_ASYNC|SND_NODEFAULT);
	m_toggleBtn1->SetValue(false);

	event.Skip();
}


void MainDialog::onToggleButton2(wxCommandEvent& event)
{
	TCHAR filename[MAX_PATH];
	DWORD len = ::GetCurrentDirectory(MAX_PATH, filename);
	wsprintf(filename+len, TEXT("\\%s"), lines[1].filename);

	// 播放音频
	::PlaySound(filename, NULL, SND_FILENAME|SND_ASYNC|SND_NODEFAULT);
	m_toggleBtn2->SetValue(false);

	event.Skip();
}


void MainDialog::onToggleButton3(wxCommandEvent& event)
{
	TCHAR filename[MAX_PATH];
	DWORD len = ::GetCurrentDirectory(MAX_PATH, filename);
	wsprintf(filename+len, TEXT("\\%s"), lines[2].filename);

	// 播放音频
	::PlaySound(filename, NULL, SND_FILENAME|SND_ASYNC|SND_NODEFAULT);
	m_toggleBtn3->SetValue(false);

	event.Skip();
}


void MainDialog::onToggleButton4(wxCommandEvent& event)
{
	TCHAR filename[MAX_PATH];
	DWORD len = ::GetCurrentDirectory(MAX_PATH, filename);
	wsprintf(filename+len, TEXT("\\%s"), lines[3].filename);

	// 播放音频
	::PlaySound(filename, NULL, SND_FILENAME|SND_ASYNC|SND_NODEFAULT);
	m_toggleBtn4->SetValue(false);

	event.Skip();
}


void MainDialog::onToggleButton5(wxCommandEvent& event)
{
	TCHAR filename[MAX_PATH];
	DWORD len = ::GetCurrentDirectory(MAX_PATH, filename);
	wsprintf(filename+len, TEXT("\\%s"), lines[4].filename);

	// 播放音频
	::PlaySound(filename, NULL, SND_FILENAME|SND_ASYNC|SND_NODEFAULT);
	m_toggleBtn5->SetValue(false);

	event.Skip();
}


void MainDialog::onToggleButton6(wxCommandEvent& event)
{
	TCHAR filename[MAX_PATH];
	DWORD len = ::GetCurrentDirectory(MAX_PATH, filename);
	wsprintf(filename+len, TEXT("\\%s"), lines[5].filename);

	// 播放音频
	::PlaySound(filename, NULL, SND_FILENAME|SND_ASYNC|SND_NODEFAULT);
	m_toggleBtn6->SetValue(false);

	event.Skip();
}


void MainDialog::onToggleButton7(wxCommandEvent& event)
{
	TCHAR filename[MAX_PATH];
	DWORD len = ::GetCurrentDirectory(MAX_PATH, filename);
	wsprintf(filename+len, TEXT("\\%s"), lines[6].filename);

	// 播放音频
	::PlaySound(filename, NULL, SND_FILENAME|SND_ASYNC|SND_NODEFAULT);
	m_toggleBtn7->SetValue(false);

	event.Skip();
}

void MainDialog::OnButtonClick(wxCommandEvent& event)
{
	::PlaySound(NULL, NULL, 0);
	event.Skip();
}

void MainDialog::onToggleButton8(wxCommandEvent& event)
{
	TCHAR filename[MAX_PATH];
	DWORD len = ::GetCurrentDirectory(MAX_PATH, filename);
	wsprintf(filename+len, TEXT("\\%s"), lines[7].filename);

	// 播放音频
	::PlaySound(filename, NULL, SND_FILENAME|SND_ASYNC|SND_NODEFAULT);
	m_toggleBtn8->SetValue(false);

	event.Skip();
}

void MainDialog::onToggleButton9(wxCommandEvent& event)
{
	TCHAR filename[MAX_PATH];
	DWORD len = ::GetCurrentDirectory(MAX_PATH, filename);
	wsprintf(filename+len, TEXT("\\%s"), lines[8].filename);

	// 播放音频
	::PlaySound(filename, NULL, SND_FILENAME|SND_ASYNC|SND_NODEFAULT);
	m_toggleBtn9->SetValue(false);

	event.Skip();
}
void MainDialog::onToggleButton10(wxCommandEvent& event)
{
	TCHAR filename[MAX_PATH];
	DWORD len = ::GetCurrentDirectory(MAX_PATH, filename);
	wsprintf(filename+len, TEXT("\\%s"), lines[9].filename);

	// 播放音频
	::PlaySound(filename, NULL, SND_FILENAME|SND_ASYNC|SND_NODEFAULT);
	m_toggleBtn10->SetValue(false);

	event.Skip();
}

void MainDialog::onToggleButton11(wxCommandEvent& event)
{
	TCHAR filename[MAX_PATH];
	DWORD len = ::GetCurrentDirectory(MAX_PATH, filename);
	wsprintf(filename+len, TEXT("\\%s"), lines[10].filename);

	// 播放音频
	::PlaySound(filename, NULL, SND_FILENAME|SND_ASYNC|SND_NODEFAULT);
	m_toggleBtn11->SetValue(false);

	event.Skip();
}

void MainDialog::onToggleButton12(wxCommandEvent& event)
{
	TCHAR filename[MAX_PATH];
	DWORD len = ::GetCurrentDirectory(MAX_PATH, filename);
	wsprintf(filename+len, TEXT("\\%s"), lines[11].filename);

	// 播放音频
	::PlaySound(filename, NULL, SND_FILENAME|SND_ASYNC|SND_NODEFAULT);
	m_toggleBtn12->SetValue(false);

	event.Skip();
}

