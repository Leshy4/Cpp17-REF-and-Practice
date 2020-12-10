#include "pch.h"
#include "Animal.h"
#include <iostream>


Animal::Animal(){}
Animal::~Animal(){}

Animal::Animal(std::string n, double w,double h)
{	this->name = n;
	this->weight = w;
	this->height = h;
}

void Animal::talk() { std::cout << "\nI'm still an Animal, ya know...\n"; };