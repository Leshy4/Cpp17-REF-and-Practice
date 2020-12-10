#pragma once
#include "Dog.h"
#include <string>

class GermanShepherd :	public Dog
{
public:
	GermanShepherd();
	virtual ~GermanShepherd();
	GermanShepherd(std::string, double, double);
	virtual void talk();
};