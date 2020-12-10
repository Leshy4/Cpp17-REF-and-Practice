#include "pch.h"
#include "Mocha.h"

Mocha::Mocha(){}
Mocha::~Mocha(){}
Mocha::Mocha(std::string n = "Mocha", double w = 75, double h = 64)
	: GermanShepherd(n,w,h)
{ 
	std::cout << "\nThey Call me the Mokes!\n"; 
}

void Mocha::talk() 
{ 
	std::cout << "\nI'm not just a house watcher, I'm an ass-kicka!\n"; 
}