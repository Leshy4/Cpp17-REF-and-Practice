/*Exercise 4-3. Create a program that prompts for input of a number (nonintegral numbers
are allowed) between 1 and 100. Use a nested if, first to verify that the number is within
this range and then, if it is, to determine whether it is greater than, less than, or equal to
50. The program should output information about what was found.*/
#include "pch.h"
#include <iostream>

int main()
{
	int a;
	std::cout << "Enter a Number between 1-100\n"
		&& std::cin >> a;

	if (a <= 0 || a > 100)
		std::cout << "You have entered an Invalid Number.\n\n\n";

	if (a > 0 && a <= 100)
	{
		if (a < 50)
			std::cout << a << " is Less than 50\n\n\n";
		if (a == 50)
			std::cout << a << " is Equal to 50\n\n\n";
		if (a > 50)
			std::cout << a << " is Greater than 50\n\n\n";
	}
}