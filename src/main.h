// Includes
#include <iostream>
#include <fstream>
#include <time.h>
#include <string>
#include <chrono>
#include <thread>

// Initialize global variables
int seed;
bool runProgram = true;
// Statistic variables
int strength;
int dexterity;
int intelligence;
int wisdom;
int charisma;
int hp;
std::string firstName;
std::string lastName;
std::string _class;
std::string race;

// Initialize functions
void mainMenu();
int roll(int);
void newCharacter();
std::string randomName();
