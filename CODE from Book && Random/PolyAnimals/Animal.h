#pragma once
#include <string>

class Animal
{
private:
	std::string name{};
	double weight{};
	double height{};
public:
	Animal();
	Animal(std::string n, double w, double h);
	virtual ~Animal();
	virtual void talk();
};

