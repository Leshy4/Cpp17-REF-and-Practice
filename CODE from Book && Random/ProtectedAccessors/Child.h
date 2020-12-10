#pragma once
#include "Parent.h"
class Child :	public Parent
{
	int candyAmount;
	int kungFuLevel;
public:
	Child();
	~Child();
	int howMuchCandy();
	Child(std::string nam, int ca, int kl);
	void talk();


};

