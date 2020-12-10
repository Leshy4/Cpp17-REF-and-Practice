#pragma once
#include "Zombie.h"
#include <cstdlib>
#include <ctime>
#include "pch.h"

class NuclearZombie : public Zombie
{
	
public:	
	double nuclearBiteDmg{ static_cast<double>((rand() % 20)) };

	NuclearZombie();
	~NuclearZombie();
	NuclearZombie(double hPoints, double wSpeed, double nuclearD);
	void chargeAtHuman();
	void fallDown();
	double bite();
};

