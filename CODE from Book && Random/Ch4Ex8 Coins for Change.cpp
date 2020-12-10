/*Exercise 4-8. Create a program that prompts the user to enter an amount of money
between $0 and $10 (decimal places allowed). Any other value is to be rejected politely.
Determine how many quarters (25c), dimes (10c), nickels (5c), and pennies (1c) are
needed to make up that amount. For our non-American readers, one dollar ($) equals
100 cents (c). Output this information to the screen and ensure that the output makes
grammatical sense (for example, if you need only one dime, then the output should be
“1 dime” and not “1 dimes”).*/

#include "pch.h"
#include <iostream>
#include <iomanip>

int main()
{
	int dollar{ 1 };
	double quarter{ 0.25 };
	double dime{ 0.10 };
	double nickel{ 0.05 };
	double penny{ 0.01 };
	double amount;
	
	std::cout << "Enter a Money amount between $0.00 - $10.00: $"
		&& std::cin >> amount;

			//Checks to make sure it's a Number between 0-10
	if (amount < 0 || amount > 10 || amount == isalpha(amount))
		std::cout << "\n\nI'm sorry, that is an Invalid Amount.\n\n";
	else 
	{		//Computes Denominations to make Amount
		dollar = amount / dollar;											//3	
		quarter = (amount - dollar) / quarter;								//1
		dime = ((quarter - static_cast<int>(quarter)) * 0.25) / dime;		//1
		nickel = ((dime - static_cast<int>(dime)) * 0.10) / nickel;			//0
		penny = ((nickel - static_cast<int>(nickel)) * 0.05) / 0.01;		//3
		
			//OUTPUT
		std::cout << "\nTo Make $" << amount << "\nIt Takes:\n"
			<< dollar << (dollar >= 2 ? " Dollars\n" : " Dollar\n")
			<< static_cast<int>(quarter) << (quarter >= 2 ? " Quarters\n" : " Quarter\n")
			<< static_cast<int>(dime) << (dime >= 2 ? " Dimes\n" : " Dime\n")
			<< static_cast<int>(nickel) << (nickel >= 2 ? " Nickels\n" : " Nickel\n")
			<< (penny) << (penny >= 2 ? " Pennies" : " Penny")
			<< "\n\n\n\t\t\t\tNow Can I Please Borrow? $" 
			<< std::fixed << std::setprecision(2)
			<< (amount / 2) + 0.01 << "???\n\n\n\n\n";
	}
}