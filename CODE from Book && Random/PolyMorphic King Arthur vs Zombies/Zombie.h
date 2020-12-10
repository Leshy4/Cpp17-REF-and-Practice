#pragma once

class Zombie
{
public:
	double health{};
	double walkingSpeed{};
	double biteDmg{ 5 };

	Zombie();
	virtual ~Zombie();
	Zombie(double hPoints, double wSpeed);
//	virtual void chargeAtHuman();
	virtual void fallDown();
	virtual double bite();
};

