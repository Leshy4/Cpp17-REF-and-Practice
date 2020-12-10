/*Exercise 4-2. Write another program that prompts for two integers to be entered.
This time, any negative number or zero is to be rejected. 
Next, check whether one of the (strictly positive) numbers is an exact multiple of the other. 
For example, 63 is a multiple of 1, 3, 7, 9, 21, or 63. 
Note that the user should be allowed to enter the numbers in any order. 
That is, it does not matter whether the user enters the largest
number first or the smaller one; both should work correctly!*/
#include "pch.h"
#include <iostream>

int main()
{
	int a, b;
	std::cout << "This Program is to Let the User Enter 2 Numbers and\nsee if their numbers are Multiples of each other.\n";
	std::cout << "Enter 2 Integers:\n"
		&& std::cin >> a && std::cin >> b;
	
	if (a <= 0 || b <= 0)
	{
		std::cout << "You Entered a Value of 0 or less!";
			return 0;
	}

	if ((a % b == 0) || (b % a == false))
	{
		if (a % b == 0)
		{
			std::cout << "You Have A Multiple!\n"
				<< a << " / " << b << " = " << a / b;
			return 0;
		}

		if (b % a == 0)
		{
			std::cout << "You Have A Multiple!\n"
				<< b << " / " << a << " = " << b / a;
			return 0;
		}
	}
	else
		std::cout << "\n" << a << " &  " << b << "\tDo not have Multiples of each other.\n\n";
}