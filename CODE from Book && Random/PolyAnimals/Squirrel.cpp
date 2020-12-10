#include "pch.h"
#include "Squirrel.h"

Squirrel::Squirrel(){}

Squirrel::~Squirrel(){}

Squirrel::Squirrel(std::string n = "Little Fucker", double w = 10, double h = 12)
	: Animal(n, w, h)
{	
	std::cout << "\nA Tree Rat is born\n";
}

void Squirrel::talk() 
{
	std::cout << "\nI may be cute, but I want your nuts!\n"; 
}

void Squirrel::sayName() 
{
	std::cout << "\nImma Squirrel and my name is " << this->name;
}