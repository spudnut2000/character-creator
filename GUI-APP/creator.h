////////////////////////////////////
////////////////////////////////////
//// Name: Character Creator
//// Creator: Hex Studios
//// Website: https://hexstudios.co
//// Date: 4/26/2020
////////////////////////////////////
////////////////////////////////////
// Includes
#include <iostream>
#include <fstream>
#include <time.h>
#include <string>
#include <chrono>
#include <thread>

// Initialize global variables
int seed;
// Statistic variables
int strength;
int dexterity;
int intelligence;
int wisdom;
int charisma;
int hp;
std::string firstName;
std::string lastName;
std::string fullName;
std::string primaryClass;
std::string secondaryClass;
std::string race;
std::string allignment;

std::string firstNamesList[] = 
{
    "Christopher", "Alexandria", "Trevor", "Cameron", "CaSondra", "Joshua", "Ezekiel", "Isaac", "Colby", "Beth", "Brittany", "Brian", "Bethsheba", "Bob", "Robert", "Jack", "Daniel", "Volkhar", "Liam", "Seth", "Gandalf", "Bilbo", "Frodo", "Harry", "Ron", "Kim", "Nicholas", "Nick", "Chris", "Alex", "Rick", "Glenn", "Maggie", "Anastasia", "Tiabot", "Fangtia", "Orlound", "Tialaf", "Reed", "Drizata", "Ablareed", "Malegriffin", "Shtorres", "Daviephim", "Rusalyne"
};

std::string lastNamesList[] = 
{
    "Stonesmoke", "Rhaelstone", "Cunstomp", "Thudlong", "Blackstone", "Blackwater", "The Tiny", "The Brave", "The Fearless", "The Fighter", "The Wise", "Stoneborn", "Battleborn", "Bourne", "Kila", "Phleph"
};

std::string classList[] = 
{
    "Druid", "Barbarian", "Bard", "Monk", "Fighter", "Cleric", "Paladin", "Rouge", "Wizard", "Warlock", "Sorcerer", "Ranger"
};

std::string raceList[] = 
{
    "Half-Orc", "Teifling", "Human", "Elf", "Half-Elf", "Dragonborn", "Gnome", "Halfling", "Dwarf", "Knoll", "Wood Elf", "Drow", "High Elf"
};

std::string allignmentList[] =
{
    "Lawful Good", "Lawful Evil", "Chaotic Good", "Chaotic Evil", "Neutral Good", "Neutral Evil", "True Neutral"
};

int firstNamesList_size = *(&firstNamesList + 1) - firstNamesList;
int lastNamesList_size = *(&lastNamesList + 1) - lastNamesList;
int classList_size = *(&classList + 1) - classList;
int raceList_size = *(&raceList + 1) - raceList;
int allignmentList_size = *(&allignmentList + 1) - allignmentList;


// Initialize functions
void mainMenu();
int roll(int);
void newCharacter();
void randomName();
void randomClass();
void randomRace();
void randomStats();
void randomAllignment();
int makeModifier(int);
