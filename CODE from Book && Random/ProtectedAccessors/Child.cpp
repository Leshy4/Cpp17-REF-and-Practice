#include "pch.h"
#include "Child.h"
#include <iostream>

Child::Child(){}
Child::~Child(){}

Child::Child(std::string nam, int ca, int kl)
	:Parent(nam), candyAmount{ ca }, kungFuLevel{ kl }
{
	std::cout << "\nA Child was born with the name " << name
	<< ". They have " << candyAmount << " pieces of candy. Their Kung Fu Level is "
	<< kungFuLevel; 
};

int Child::howMuchCandy()
{
	std::cout << "\nHow many pieces of Candy do you have?\n"
		&& std::cin >> candyAmount
		&& std::cout << this->getName() << " has " << this->candyAmount << " pieces of Candy!";
	return candyAmount;
}

void Child::talk(){std::cout << "\nWhile I'm out, I'll take the world in\n";};