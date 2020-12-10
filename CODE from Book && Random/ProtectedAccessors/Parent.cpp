#include "pch.h"
#include "Parent.h"
#include <iostream>

Parent::Parent(){}
Parent::~Parent(){}

Parent::Parent(std::string nm) {name = nm;};

std::string Parent::getName() 
{	std::string nm;
	std::cout << "\nWhat is your name?\n"
		&& std::cin >> nm;
	std::cout << "Your name is " << nm << "\n";
	return this->name = nm;	
};

std::string Parent::getGetName()	//Use Public to access Protected
{	return getName();	};

void Parent::talk() { std::cout << "\nI brought you in this world I\'ll take you out!\n"; };