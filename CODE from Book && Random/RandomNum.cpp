#include "pch.h"	
#include <iostream>
#include <stdlib.h> //Random Numbers
#include <time.h>	//Random Numbers

size_t diceRoll(); // Generates 0-5 if 

int main() 
{	size_t goblinLife{ 50 };
	std::cout << "Goblin Life = " + goblinLife, "\n";
	do 
	{	size_t swordSwing = diceRoll();
		std::cout << "You Swing The Sword and do " + swordSwing << " Dmg!\nGoblin Life = " + goblinLife << "\n";
		if (goblinLife < 0 || goblinLife > 50) break;
		goblinLife -= swordSwing;
	} while (goblinLife && goblinLife < 50);
}

size_t diceRoll() // Generates 0-5 if 
{
	size_t maxNumber{ 6 }; //MaxNumber=0-5 MaxNumber=1-6->std::cout << rand() % maxNumber + 1; 
	srand( static_cast<size_t>(time(NULL)));	// Function that somehow Seeds a Random Number based on 1970s time
	std::cout << rand() % maxNumber; //RandomNumber % maxNumber		= 1-6
	size_t damage = rand() % maxNumber;
	return damage;
}
