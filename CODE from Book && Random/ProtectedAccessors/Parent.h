#pragma once
#include <string>

class Parent
{
protected:
	std::string name; 
	std::string getName();
	
public:
	Parent();
	virtual ~Parent();
	std::string getGetName();
	Parent(std::string nm);
	void virtual talk();		// The Polymorphic Function
};

