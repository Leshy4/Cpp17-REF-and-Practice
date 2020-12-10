#include "pch.h"
#include "NuclearZombie.h"
#include <iostream>

NuclearZombie::NuclearZombie(){}
NuclearZombie::~NuclearZombie(){}
NuclearZombie::NuclearZombie(double hPoints, double wSpeed, double nuclearD )
	: Zombie(hPoints, wSpeed), nuclearBiteDmg{nuclearD}
{
	std::cout << "A Nuclear zombie is coming out of the Ground. It does "
		<< nuclearBiteDmg << " Nuclear Damage through biting\n" ;
}; 

/*void NuclearZombie::chargeAtHuman()
{
	std::cout << "The Zombie begins to glow. Nuclear Damage of "
		<< nuclearBiteDmg;
	nuclearBiteDmg *= 1.5;
	std::cout << ".  The Charging Speed is =" << nuclearBiteDmg;
	nuclearBiteDmg /= 1.5;
	std::cout << ".  The Zombie goes back to " << nuclearBiteDmg << " Waking Speed.";
}*/

void NuclearZombie::fallDown()
{ std::cout << "\nThe Nuclear Zombie falls down and begins to glow Brightly! BOOOOMMM!!!\n"; }

double NuclearZombie::bite() {	return (rand() % static_cast<int>(nuclearBiteDmg) + 7); }