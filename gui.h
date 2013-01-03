///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun 30 2011)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __GUI_H__
#define __GUI_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/tglbtn.h>
#include <wx/sizer.h>
#include <wx/statline.h>
#include <wx/button.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MainDialogBase
///////////////////////////////////////////////////////////////////////////////
class MainDialogBase : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText1;
		wxToggleButton* m_toggleBtn1;
		wxStaticText* m_staticText2;
		wxToggleButton* m_toggleBtn2;
		wxStaticText* m_staticText3;
		wxToggleButton* m_toggleBtn3;
		wxStaticText* m_staticText4;
		wxToggleButton* m_toggleBtn4;
		wxStaticText* m_staticText5;
		wxToggleButton* m_toggleBtn5;
		wxStaticText* m_staticText6;
		wxToggleButton* m_toggleBtn6;
		wxStaticText* m_staticText7;
		wxToggleButton* m_toggleBtn7;
		wxStaticText* m_staticText8;
		wxToggleButton* m_toggleBtn8;
		wxStaticText* m_staticText9;
		wxToggleButton* m_toggleBtn9;
		wxStaticText* m_staticText10;
		wxToggleButton* m_toggleBtn10;
		wxStaticText* m_staticText11;
		wxToggleButton* m_toggleBtn11;
		wxStaticText* m_staticText12;
		wxToggleButton* m_toggleBtn12;
		wxStaticLine* m_staticLine;
		wxButton* m_button1;
		wxStdDialogButtonSizer* m_sdbSizer;
		wxButton* m_sdbSizerOK;
		wxButton* m_sdbSizerCancel;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnCloseDialog( wxCloseEvent& event ) { event.Skip(); }
		virtual void onToggleButton1( wxCommandEvent& event ) { event.Skip(); }
		virtual void onToggleButton2( wxCommandEvent& event ) { event.Skip(); }
		virtual void onToggleButton3( wxCommandEvent& event ) { event.Skip(); }
		virtual void onToggleButton4( wxCommandEvent& event ) { event.Skip(); }
		virtual void onToggleButton5( wxCommandEvent& event ) { event.Skip(); }
		virtual void onToggleButton6( wxCommandEvent& event ) { event.Skip(); }
		virtual void onToggleButton7( wxCommandEvent& event ) { event.Skip(); }
		virtual void onToggleButton8( wxCommandEvent& event ) { event.Skip(); }
		virtual void onToggleButton9( wxCommandEvent& event ) { event.Skip(); }
		virtual void onToggleButton10( wxCommandEvent& event ) { event.Skip(); }
		virtual void onToggleButton11( wxCommandEvent& event ) { event.Skip(); }
		virtual void onToggleButton12( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnCancelClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnOKClick( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		MainDialogBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("wxMiniApp"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 400,551 ), long style = wxCLOSE_BOX|wxDEFAULT_DIALOG_STYLE ); 
		~MainDialogBase();
	
};

#endif //__GUI_H__
