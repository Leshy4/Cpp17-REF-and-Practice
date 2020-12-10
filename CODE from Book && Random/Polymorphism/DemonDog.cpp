#include "pch.h"
#include "DemonDog.h"
#include <iostream>


DemonDog::DemonDog(){}
DemonDog::~DemonDog(){}

DemonDog::DemonDog(double hth, double attk, double wepMult)
	: Demon(hth, attk, wepMult)
{	std::cout << "Flames arise from the ground and a Demon Dog is born from it!\n";}

double DemonDog::bite() {return this->attackPower;}