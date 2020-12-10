#include <cstdlib>
#include <random>
#include <ctime>
#include "pch.h"
#include <iostream>

void make42Randoms();
void createDemons();

int main()	
{
	(srand(static_cast<int>(time_t(0))));
	make42Randoms();
	createDemons();
}


void make42Randoms()
{	// Very Basic Random Number Generator Practice.
	
	for (size_t i{}; i < 42; ++i)
	{	std::cout << rand() % 10 << (i == 41 ? " \t\tEnd of Program\n" : " ");
		if (i == 20) std::cout << std::endl;
	}
}

void createDemons() 
{	Enemy godDamn(100, 25);
	Demon DTrump(1, 1, 2);
	Enemy* DonaldPointer = &DTrump;
	DTrump.talk();
	DonaldPointer->talk();
	DTrump.talk();
	DemonDog hellhound(150,25,1.1);
	std::cout << "A Hellhound can do " << hellhound.bite() << " damage. 10 Bites =\n";
	
	double biteSum{};
	srand(time_t(0));
	for (int i{0}; i < 11; ++i) 
	{		
		double biteAmount{ static_cast<double>(rand() % static_cast<int>(hellhound.bite())) };
		std::cout << (biteAmount) << " ";
		biteSum += biteAmount;
		if (i == 10) std::cout << "\nThe Bite Damage Done is = " << biteSum;
	}
	std::cout << std::endl;
};