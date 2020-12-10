#pragma once

#include "Animal.h"
#include <iostream>
#include <string>

class Squirrel :public Animal
{
private:
	std::string name;
public:
	Squirrel();
	~Squirrel();
	Squirrel(std::string, double, double);
	
	void talk();
	void sayName();
};