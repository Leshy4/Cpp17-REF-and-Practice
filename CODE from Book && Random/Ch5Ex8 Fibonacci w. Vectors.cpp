/*Exercise 5-8. The famous Fibonacci series is a sequence of integers with the first
two values as 1 and the subsequent values as the sum of the two preceding values.
It begins 1, 1, 2, 3, 5, 8, 13, and so on.
Create an array<> container with 93 elements. Store the first 93
numbers in the Fibonacci series in the array and then output them one per line.
Any idea why we’d be asking you to generate 93 Fibonacci numbers and not, say, 100?*/
#include "pch.h"
#include <iostream>
#include <iomanip>
#include <array>

int main()
{
	std::cout << "\t\t\t\t\tThis Program outputs 93 Fibonacci Sequences.\n\n";
	unsigned long long fibNum{1};
	std::array<unsigned long long, 93> fibonacci;
	size_t outputFormat{ 50 };
	for (size_t i{ 0 }; i < fibonacci.size(); ++i)
	{ //It begins 1, 1, 2, 3, 5, 8, 13, and so on.
		fibonacci[i] = fibNum;
		if (i < 1)	fibonacci[i] = fibNum;
		else fibNum += fibonacci[i - 1];		
		std::cout << std::setw(outputFormat)
			<< fibonacci[i] << "\t\t= Fibonacci " << i+1 << std::endl;
	}
}