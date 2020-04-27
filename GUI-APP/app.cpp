////////////////////////////////////
////////////////////////////////////
//// Name: Character Creator
//// Creator: Hex Studios
//// Website: https://hexstudios.co
//// Date: 4/26/2020
////////////////////////////////////
////////////////////////////////////


#include "app.h"
#include "id.h"
#include "MainWindow.h"


IMPLEMENT_APP(App); //Main

App::App()
{

}


bool App::OnInit()
{
    if (!wxApp::OnInit())
    {
        return false;
    }

    MainWindow *main = new MainWindow(nullptr, window::id::MAINWINDOW, _("Character Creator"), wxPoint(500, 300), wxSize(600, 600));
    main->Show();
    return true;
}

App::~App(){

}