////////////////////////////////////
////////////////////////////////////
//// Name: Character Creator
//// Creator: Hex Studios
//// Website: https://hexstudios.co
//// Date: 4/26/2020
////////////////////////////////////
////////////////////////////////////

#include "creator.h"

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
  // Roll stats
  strength = roll(20);
  //std::this_thread::sleep_for(0.7s);
  dexterity = roll(20);
  //std::this_thread::sleep_for(0.7s);
  intelligence = roll(20);
  //std::this_thread::sleep_for(0.7s);
  wisdom = roll(20);
  //std::this_thread::sleep_for(0.7s);
  charisma = roll(20);
  //std::this_thread::sleep_for(0.7s);
  // Display stats
//   cout << endl;
//   cout << "name: " << firstName << " " << lastName << endl;
//   cout << "strength: " << strength << endl;
//   cout << "dexterity: " << dexterity << endl;
//   cout << "intelligence: " << intelligence << endl;
//   cout << "wisdom: " << wisdom << endl;
//   cout << "charisma: " << charisma << endl;
}

//-----------------------------------------
void randomName() // Generate a random name
{
  std::string names[] = {"Bokhi", "Kheli", "Deadbash", "Runewing", "Narsk", "Glekrusk", "Cliffbringer", "Commonwhirl", "Jazdehrihd", "Hiprak", "Merumevzu", "Vebiki", "Shiang", "Tie", "Cohergis", "Furese", "Eideid", "Abur", "Tivum", "Gee", "Bebrim", "Fim", "Blannor", "Tuth", "Jod-kumu", "Bun-daz", "Vlomvinric", "Koomzik", "Tiu", "Mo", "Grusceldon", "Chelbo"};

  int name_size = *(&names + 1) - names;
  firstName = names[roll(name_size)-1];
  //std::this_thread::sleep_for(0.7s);
  lastName = names[roll(name_size)-1];

  return;
}
