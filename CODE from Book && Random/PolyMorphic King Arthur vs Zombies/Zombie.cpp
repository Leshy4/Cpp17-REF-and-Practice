#include "pch.h"
#include "Zombie.h"
#include <iostream>

Zombie::Zombie(){}
Zombie::~Zombie(){}

Zombie::Zombie(double hPoints, double wSpeed)
	: health{hPoints}, walkingSpeed{wSpeed}
{
	std::cout << "A new Undead has arisen! The Zombie has "
		<< health << " Health & has " << walkingSpeed << " Walking Speed.\n";
	/*++zombieCount;
	std::cout << "There are now " << zombieCount << " hungry zombies coming towards you.\n";*/
}

void Zombie::fallDown()
{ std::cout << "\nThe Slow Zombie Falls Down and can't fight back!! Attack now!!\n"; };

double Zombie::bite()	{	return biteDmg; };