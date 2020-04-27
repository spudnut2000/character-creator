////////////////////////////////////
////////////////////////////////////
//// Name: Character Creator
//// Creator: Hex Studios
//// Website: https://hexstudios.co
//// Date: 4/26/2020
////////////////////////////////////
////////////////////////////////////
#pragma once

#include <wx-3.1/wx/wxprec.h>

#ifndef WX_PRECOMP
    #include <wx-3.1/wx/wx.h>
#endif

class MainWindow : public wxFrame
{
    public: 
        MainWindow(wxWindow *parent,
               wxWindowID id,
               const wxString& title,
               const wxPoint& pos = wxDefaultPosition,
               const wxSize& size = wxDefaultSize,
               long style = wxDEFAULT_FRAME_STYLE,
               const wxString& name = wxFrameNameStr);
        ~MainWindow();

    public:
        

        void On_btn_newCharacter_Clicked(wxCommandEvent &evt);
        wxButton *btn_newCharacter = nullptr;
        wxStaticText *namelabel1 = nullptr;

        wxListBox *list_statBox = nullptr;

        wxDECLARE_EVENT_TABLE();
};