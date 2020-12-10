#include "pch.h"
#include "GermanShepherd.h"
#include <iostream>

GermanShepherd::GermanShepherd(){}
GermanShepherd::~GermanShepherd(){}

GermanShepherd::GermanShepherd(std::string n = "German Boyodawg", double w = 150, double h = 35)
	: Dog(n,w,h)
{
	std::cout << "\nA German Shepherd is Born!!\n";
}

void GermanShepherd::talk() 
{ 
	std::cout << "\nI will eat your snitzel\n"; 
}