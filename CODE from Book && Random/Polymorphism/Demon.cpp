#include "pch.h"
#include "Demon.h"
#include <iostream>

Demon::Demon(){}
Demon::~Demon(){}

Demon::Demon(double hth, double attkP, double wepEquip)
	: Enemy(hth, attkP), weaponMultiplier{wepEquip}
{	std::cout << "\nDemon Created with " << health << " Health & "
<< attackPower << " Attack Power & " << weaponMultiplier << " Weapon Multiplier\n" ; };

void Demon::talk() { std::cout << "\nMake America Great Again\n"; }

