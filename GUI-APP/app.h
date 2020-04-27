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

class App : public wxApp
{
    public:
        App();
        bool OnInit();
        ~App();
};

DECLARE_APP(App);