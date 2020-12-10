#pragma once
#include "Animal.h"
#include <string>

class Dog :
	public Animal
{
public:
	Dog();
	virtual ~Dog();
	Dog(std::string, double, double);
	virtual void talk();
};

