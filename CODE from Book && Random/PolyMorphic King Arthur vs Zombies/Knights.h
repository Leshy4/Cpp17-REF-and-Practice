#pragma once
#include "GoodGuys.h"
class Knights :	public GoodGuys
{
public:
	Knights();
	~Knights();
	Knights(double h, double a, double aR);
	double attack();
	double healingSpell();
};