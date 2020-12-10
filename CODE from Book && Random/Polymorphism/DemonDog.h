#pragma once
#include "Demon.h"
class DemonDog :
	public Demon
{
public:
	DemonDog();
	~DemonDog();
	double bite();
	DemonDog(double, double, double);
};

