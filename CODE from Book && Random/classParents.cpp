#include "pch.h"
#include <string>
#include <iostream>
#include <vector>

static size_t humanCount = 0;

class Human
{
private:
	std::string name = "";
	bool isGangster {true};	

public:
	Human(std::string named) 
	{ 	name = named; 
		++humanCount; 
	}

	void sayName() { std::cout << "My name is " + name; }		
	
	bool getGangsterStatus(int input)
	{	if (int input = 0) 
		{ return !isGangster; } 
		return isGangster;
	}	
	
	void displayGangsterStatus()
	{	std::cout << "Yo Maine What it is? "; sayName();
		std::cout << ".  Am I a Gangster? ";
		std::cout << std::boolalpha << isGangster ;
	}
	
	void howManyHumans() 
	{  
		std::cout << "\nNumber of Humans: " << humanCount; 
	}
};
class gangster : public Human
{
public:
	gangster();
	~gangster() { std::cout << "\nAhhh They shot me!\n"; };
	void throwGangSigns() { std::cout << "\nThrows up Blazing fast gang signs\n"; }
};

std::string makeNameList();

int main()
{	
	Human satin(makeNameList() );
	satin.getGangsterStatus(1);
	satin.displayGangsterStatus(); 
		std::cout << "\t";
	
	satin.howManyHumans();	
		std::cout << std::endl;
	
	gangster tuPop;
	tuPop.throwGangSigns();
	
	bool keepGoing{ false };
	std::cout << "\nEnter Number 1 to keep going\t"
		&& std::cin >> keepGoing;
	if (keepGoing) { main(); }
}

std::string makeNameList()
{	
	std::string namePassed = "";
	std::vector<std::string> listOfNames{};
	
	std::cout << "Enter yo name foo!  " 
		&& std::cin >> namePassed;
	listOfNames.emplace_back(namePassed);
	for (size_t iterator{}; iterator < listOfNames.size(); iterator++)
		std::cout << listOfNames[iterator] << std::endl;
	
	return namePassed;
};