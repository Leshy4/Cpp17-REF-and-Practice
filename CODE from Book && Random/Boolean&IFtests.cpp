#include "pch.h"
#include <iostream>
#include<iomanip>
#include <string>
void makeCharacter()
{	size_t maxNameLength{25};
	std::string characterName{};
	std::cout << "\nEnter your Character's name\n";
	std::cin.getline(characterName, maxNameLength);

};

int main()
{	char first{}; // Stores the first character
	int second{}; // Stores the second character
	std::cout << "Enter a character: Push 'h' for Hexadecimal Converter: ";
	std::cin >> first;
	std::cout << "Enter a second character: ";
	std::cin >> second;
	std::cout << "The value of the expression " << first << '<' << second
		<< " is: " << (first < second) << std::endl;
	std::cout << "The value of the expression " << first << "==" << second
		<< " is: " << (first == second) << std::endl;
	int level5{ 5 };
	int level10{ 10 };
	std::cout << (level5 == level10) << " = Boolean Flag of False\n";
	std::cout << std::boolalpha << (level5 == level10) << " = Boolean False with std::cout << std::boolaplha << ....\n\n\n";

	if ( first == 'h' || second < '256')				//   "|| second < '256'"  is just there to show an OR Statement in an If Statment
	{ //^ Add Space for CONVENTION PURPOSES
	std::cout << "Hexadecimal Value of 2nd Value of " << second << " is: "
		<< std::setbase(16) << std::setw(6) << std::showbase << std::setfill('0') << std::right   //Nice Hexadecimal Look
		<< second << "\n\n\nTRIGGERED: PRINT HEXADECIMAL CALC TEST STRING\n\n";
	}

	std::cout << "Enter an integer between 50 and 100: " << std::setbase(10);
	int value{};
	std::cin >> value;
	if (value)
		std::cout << "You have entered a value that is different from zero." << std::endl;
	if (value < 50)
		std::cout << "The value is invalid - it is less than 50." << std::endl;
	if (value > 100) 
		std::cout << "The value is invalid - it is greater than 100." << std::endl;

	std::cout << "You entered " << value << std::endl;

	


}
