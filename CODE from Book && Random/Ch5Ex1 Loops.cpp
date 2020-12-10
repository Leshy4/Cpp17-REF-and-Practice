/*Exercise 5-1. Write a program that outputs the squares of the odd integers from 1 up to
a limit that is entered by the user.*/

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <cctype>
#include <cmath>


int main()
{
	unsigned int value;
	char moreTables{ 'y' };		//'y' for yes

	std::cout << "Enter an Odd Integer: " && std::cin >> value;
	//Checks if Value is Valid
	if (value != 1 && (value % 2) == 0)
	{
		std::cout << "That value was invalid";
		return 1;
	}

	unsigned long long numberOfIterations{ 1 };
	do 
	{	//Does the math
		while (numberOfIterations <= value)
		{
			std::cout << numberOfIterations << "   Squared =   "
				<< numberOfIterations * numberOfIterations
				<< std::endl;
			
			//Prints Format.. Spaces - Value - Sqr Root
			std::cout << "------------------------------------------------------------" << std::endl;

			numberOfIterations = numberOfIterations + 2;
		}

		std::cout << "\nDo you want to make another Table? ";
			std::cin >> moreTables;
			moreTables = tolower(moreTables);
	} while (moreTables == 'y');

}