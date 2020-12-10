#include "pch.h"
#include <iostream>
#include <memory>

void AnimalsBeingsDogsBeingThings();

int main() 
{ 
	AnimalsBeingsDogsBeingThings(); 
}

void AnimalsBeingsDogsBeingThings()
{	
	Animal atticusAnimal("Atticus", 16, 25);
	atticusAnimal.talk();
	
	Dog atticusDog("Doggo", 20, 303);
	atticusDog.talk();
	
	Animal* atticusPtr = &atticusAnimal;
	atticusPtr->talk();
	atticusPtr = &atticusDog;
	atticusPtr->talk();
	
	GermanShepherd atticusShepherd; // Default Constructor Values
	atticusShepherd.talk();
	atticusPtr = &atticusAnimal;
	atticusPtr->talk();

	Mocha MochaTheGermanDog;
	MochaTheGermanDog.talk();
	atticusPtr = &MochaTheGermanDog;
	atticusPtr->talk();

	Squirrel normalSquirrel;
	normalSquirrel.sayName();
	normalSquirrel.talk();
	
	static_cast<Animal*>(atticusPtr);
	dynamic_cast<Squirrel*>(atticusPtr);//Should be Squirrel Function, but
	atticusPtr->talk();					//Says Mocha's stuff for some reason?
};