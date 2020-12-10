#include "pch.h"
#include <iostream>
#include <memory>
#include <vector>

int main()
{
	Parent chrisWelch0;
	// chrisWelch.getName(); //Inaccessible
	chrisWelch0.~Parent();

	Parent chrisWelch1;
	chrisWelch1.getGetName(); // Tight Coupling Functions
	std::cout << "\nYou just had a son!\n";
	Child atticus0;
	atticus0.howMuchCandy();	//getName then How much?
	std::cout << "\n\n";

	chrisWelch1.talk();
	atticus0.talk();	
	////auto aPointer = std::unique_ptr<Parent>(&chrisWelch0) ; // Trying to use Smart Pointers
	Parent* aPointer = &chrisWelch0;	//Polymorphic ptr as chriswelch0
	aPointer->talk();					// using Parent function
	aPointer = &atticus0;				// Move ptr to Child Class
	aPointer->talk();					// using Child function //Without virtual, it would be a Parent function
	aPointer = &chrisWelch1;			//Put it back to Parent for practice
	aPointer->talk();					// using Parent function again

	Child jChun("Jackie Chun", 500, 99);	// Inheritance Constructor Notation
	Child jackieC{ jChun };	//Copy Constructor
	
	jackieC.~Child(); //Kills jackieC
	
	jChun.~Child();	// jChun Destroyed!
	std::vector<std::unique_ptr<Parent>> parentHolder;
	parentHolder.emplace_back(chrisWelch0, chrisWelch1, atticus0);


}