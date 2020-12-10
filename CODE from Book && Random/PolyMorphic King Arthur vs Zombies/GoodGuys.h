#pragma once
class GoodGuys
{
public:
	double health{ 0 };
	double attackDamage{ 0 };
	double armorRating{ 0 };

	GoodGuys();
	GoodGuys(double health, double attackDamage, double armorRating);
	virtual ~GoodGuys();
	virtual double attack();	
};

