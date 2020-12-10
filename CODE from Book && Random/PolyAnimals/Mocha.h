#pragma once
#include "GermanShepherd.h"
#include<string>
#include <iostream>

class Mocha :	public GermanShepherd
{
public:
	Mocha();
	~Mocha();
	Mocha(std::string, double, double);
	void talk() final;
};