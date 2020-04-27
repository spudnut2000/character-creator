#include "main.h"
using namespace std;

int main() // Main
{
  cout << "Character Creator, made by Hex Studios \n\n";
  cout << "Seed: " << seed << endl;
  while (runProgram) // Main program loop
  {
    mainMenu();
  }
  return 0;
}

/*
|----------------|
|    Functions   |
|----------------|
*/

//--------------------------
void mainMenu() // Main menu
{
  int choice;

  cout << "\n-------------------------";
  cout << "\n[1] Create new character\n[2] View character\n[3] Settings\n[4] Exit";
  cout << "\n-------------------------";
  cout << "\n\nPlease choose an option: ";
  cin >> choice;
  switch (choice) {
    case 1:
      newCharacter();
      break;
    case 2:
      cout << "\nView character\n";
      break;
    case 3:
      cout << "\nSettings\n";
      break;
    case 4:
      runProgram = false;
      break;
    default:
      cout << "\nInvalid option, try again...\n";
      mainMenu();
  }
}

//--------------------------------
int roll (int number) // Dice roll
{
  srand(time(NULL));
  int result = rand() % number + 1;
  return result;
}

//-------------------------------------------
void newCharacter() // Create a new character
{
  int choice;
  cout << "\n\n---New Character---\n";
  // Name
  cout << "[1] Random name\n[2] Custom name\n";
  cout << "Please choose an option: ";
  cin >> choice;
  if (choice == 1)
  {
    randomName();
  } else if (choice == 2)
  {
    cout << "\nPlease enter your first name: ";
    cin >> firstName;
  } else
  {
    cout << "\nInvalid option.";
    newCharacter();
  }

  // Roll stats
  cout << "\n\n Rolling stats...\n\n";
  strength = roll(20);
  std::this_thread::sleep_for(0.7s);
  dexterity = roll(20);
  std::this_thread::sleep_for(0.7s);
  intelligence = roll(20);
  std::this_thread::sleep_for(0.7s);
  wisdom = roll(20);
  std::this_thread::sleep_for(0.7s);
  charisma = roll(20);
  std::this_thread::sleep_for(0.7s);
  // Display stats
  cout << endl;
  cout << "name: " << firstName << " " << lastName << endl;
  cout << "strength: " << strength << endl;
  cout << "dexterity: " << dexterity << endl;
  cout << "intelligence: " << intelligence << endl;
  cout << "wisdom: " << wisdom << endl;
  cout << "charisma: " << charisma << endl;
}

//-----------------------------------------
void randomName() // Generate a random name
{
  string names[] = {"Bokhi", "Kheli", "Deadbash", "Runewing", "Narsk", "Glekrusk", "Cliffbringer", "Commonwhirl", "Jazdehrihd", "Hiprak", "Merumevzu", "Vebiki", "Shiang", "Tie", "Cohergis", "Furese", "Eideid", "Abur", "Tivum", "Gee", "Bebrim", "Fim", "Blannor", "Tuth", "Jod-kumu", "Bun-daz", "Vlomvinric", "Koomzik", "Tiu", "Mo", "Grusceldon", "Chelbo"};

  int name_size = *(&names + 1) - names;
  firstName = names[roll(name_size)-1];
  std::this_thread::sleep_for(0.7s);
  lastName = names[roll(name_size)-1];

  return;
}
