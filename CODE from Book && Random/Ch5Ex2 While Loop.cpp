/*Exercise 5-2. Write a program that uses a
while loop to accumulate the sum of an arbitrary number
of integers entered by the user.
After every iteration, ask the user whether he or she is done entering numbers.
The program should output the total of all
the values and the overall average as a floating-point value.*/
#include "pch.h"

#include <iostream>
#include<iomanip>
#include<cctype>

int main()
{
	unsigned long long count{ 2 };
	float value, valueBuffer;		
	
	std::cout << "Enter at least 2 Integers\n";
	std::cin >> value;
	std::cin >> valueBuffer;

	float valueSum{ value + valueBuffer };
	float averageOfSumsBuffer{ valueSum / count };
	
	std::cout << value << " = Value " << count - 1
		<< "\n" << valueBuffer << " = Value " << count
		<< "\n" << valueSum << " = Sum of " << count << " Values\n"
		<< averageOfSumsBuffer << " = Average of " << count << " Values\n";

	float averageOfSums{};
	char moreIntegers{ 'y' };
	do
	{
		std::cout << "\n\nDo you want to Enter another Integer?			y = Yes		n = No \n"
			&& std::cin >> moreIntegers;
		if (tolower(moreIntegers) != 'y')
		{
			std::cout << "\t\t\t\t\tThank You for buying my Newbie Program! Have a Good Day!!\n\n\n\n";
			return 40;
		}
		std::cout << "Enter an Integer: " 
			&& std::cin >> value;
		
		++count;
		valueSum += value;
		averageOfSums = valueSum / count;

		std::cout << value << " = Value " << count
			<< "\n" << valueSum << " = Running Sum\n"
			<< averageOfSums << " = Running Average = " << valueSum << " / " << count << "\n";
	} while (tolower(moreIntegers) == 'y');
}