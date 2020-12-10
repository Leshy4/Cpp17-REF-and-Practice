#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

enum class monthEnum { Jan = 1, Feb, Mar, Apr, May, June, July, Aug, Sept, Oct, Nov, Dec };
void outputEnum(){std::cout << "" << static_cast<size_t>(monthEnum::Jan);};
void menuOutput();
void ageVerification();
void generateRandomNum();

	//** MAIN **//
int main() 
{
	outputEnum();
	menuOutput();
	ageVerification();
	generateRandomNum();
}

void menuOutput() 
{
	size_t selection{};
	enum class itemMenu { Inventory, Health, Magic, Fatigue, Charisma };
	//This might be a neat little trick ->	// system("itemMenu[selection];");	
};

void ageVerification()
{
	size_t ageInput{};
	std::cout << "\nHow old are you?   " && std::cin >> ageInput;
	if (ageInput < 18)	std::cout << "\nYou are not Old enough to watch Deadpool!\n";
	else if (ageInput >= 18 && ageInput < 90) std::cout << "\nMatthew Mcconoughay says Hi ;)\n";
	else if (ageInput >= 90) std::cout << "\nDayum You're OLD!\n";
};

void generateRandomNum() 
{
	srand(time_t(NULL));
	size_t totalNums{ 30 };
	size_t diceRoll{ static_cast<size_t>(rand() % 6) };
	while (totalNums)
	{	std::cout << "\t" << diceRoll + 1;
		--totalNums;
	}
};