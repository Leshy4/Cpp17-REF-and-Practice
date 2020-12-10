#pragma once
#include "Enemy.h"
class Demon : public Enemy
{
	
public:
	Demon();
	~Demon();	
	Demon(double hth, double attkP, double wepMultiplier);
	double weaponMultiplier;
	void talk();
};

