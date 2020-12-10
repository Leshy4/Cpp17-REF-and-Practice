#include "pch.h"
#include "Knights.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>

Knights::Knights(){}
Knights::~Knights(){}
Knights::Knights(double h, double a, double aR)
	: GoodGuys(h, a, aR) 
{std::cout << "\nA Knight has joined the Fight!\n";};
// attack does atleast 10 DMG
double Knights::attack() { return ( rand() % static_cast<int>(attackDamage) + 10); }
double Knights::healingSpell() 
{
	std::cout << "\nThe Knights Health goes from " << this->health
		<< " to " << this->health * 1.5 << ".";
	return health = this->health * 1.5; 
};