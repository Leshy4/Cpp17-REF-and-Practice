#include "pch.h"
#include "Dog.h"
#include <iostream>

Dog::Dog(){}
Dog::~Dog(){}

Dog::Dog(std::string n, double w, double h)
	: Animal(n, w, h)
	{std::cout << "\nA Dog is Born!!!!\n";}

void Dog::talk() {std::cout << "\nI am a Dog on a Log. Woof woof!\n";};