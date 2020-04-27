////////////////////////////////////
////////////////////////////////////
//// Name: Character Creator
//// Creator: Hex Studios
//// Website: https://hexstudios.co
//// Date: 4/26/2020
////////////////////////////////////
////////////////////////////////////
#include "MainWindow.h"
#include "creator.h"

wxBEGIN_EVENT_TABLE(MainWindow, wxFrame)
    EVT_BUTTON(10001, MainWindow::On_btn_newCharacter_Clicked)
wxEND_EVENT_TABLE()

MainWindow::MainWindow(wxWindow *parent,
               wxWindowID id,
               const wxString& title,
               const wxPoint& pos,
               const wxSize& size,
               long style,
               const wxString& name) : wxFrame(parent, id, title, pos, size, style, name)
{

    btn_newCharacter = new wxButton(this, 10001, "Roll", wxPoint(10, 10), wxSize(200, 30));
    //namelabel1 = new wxStaticText(this, wxID_ANY, "Label", wxPoint(10, 50), wxSize(50, 50));
    list_statBox = new wxListBox(this, wxID_ANY, wxPoint(10, 70), wxSize(500, 500));

    srand(time(0));

}

MainWindow::~MainWindow(){}

void MainWindow::On_btn_newCharacter_Clicked(wxCommandEvent &evt)
{
  newCharacter();
  list_statBox->AppendString("Name: " + fullName);
  list_statBox->AppendString("Strength: " + std::to_string(strength));
  list_statBox->AppendString("Dexterity: " + std::to_string(dexterity));
  list_statBox->AppendString("Intelligence: " + std::to_string(intelligence));
  list_statBox->AppendString("Wisdom: " + std::to_string(wisdom));
  list_statBox->AppendString("Charisma: " + std::to_string(charisma));
  list_statBox->AppendString("Race: " + race);
  list_statBox->AppendString("Primary class: " + primaryClass);
  list_statBox->AppendString("Allignment: " + allignment);
  list_statBox->AppendString("");
}

/////////////////////////////
// Main program definitions//
/////////////////////////////
//--------------------------------
int roll (int number) // Dice roll
{
  int result = rand() % number + 1;
  return result;
}

//-------------------------------------------
void newCharacter() // Create a new character
{
  randomStats();
  randomName();
  randomClass();
  randomRace();
  randomAllignment();
}

//-----------------------------------------
void randomName() // Generate a random name
{
  firstName = firstNamesList[roll(firstNamesList_size)-1];
  lastName = lastNamesList[roll(lastNamesList_size)-1];
  fullName = firstName + " " + lastName;
}

void randomClass()
{
  primaryClass = classList[roll(classList_size)-1];
}

void randomRace()
{
  race = raceList[roll(raceList_size)-1];
}

void randomStats()
{
  strength = roll(20);
  dexterity = roll(20);
  intelligence = roll(20);
  wisdom = roll(20);
  charisma = roll(20);
}

void randomAllignment()
{
    allignment = allignmentList[roll(allignmentList_size)-1];

}