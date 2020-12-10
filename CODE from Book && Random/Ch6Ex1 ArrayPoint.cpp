#include "pch.h"
/*Exercise 6-1. Write a program that declares and initializes an array with the first 
50 odd numbers. Output the numbers from the array ten to a line using pointer notation 
and then output them in reverse order, also using pointer notation.*/
#include <iostream>
#include <iomanip>
#include <vector>
#include <array>

double add2Numbers(double*, double*);
int main()
{
	const size_t perLine{ 10 }, arraySize{50};
	std::array<size_t, arraySize> values; //Array: Values
	for (size_t i{}; i < arraySize; ++i) // Add 1-50 into Values
	{	values[i] = i;
		if (values[i] % 2 == 0)// && i != 1)
		{	std::cout << std::setw(5)
				<< values.at(i) + 1 ;
			if (values[i] % (perLine * 2) == 0) std::cout << std::endl;
		}
	}
	std::cout << "\n\nReverse Odd 50\n\n";
	for (int i{arraySize-1}; i != 0; --i)
	{	if (values.at(i) % 2 == 0) std::cout << std::setw(5) << values.at(i) + 1;
		if (values.at(i) % (perLine * 2) == 0) std::cout << "\n";
	}
	///////////////////////////////////////////////////////////////
	std::cout << "\n\n\n\nThis starts some Pass By Exercises\n";
	double x{ 5 }, y{ 10 };
	double* xPoint{ &x };
	double* yPoint{ &y };
	double addedNums{ add2Numbers(xPoint, yPoint) };
	std::cout << add2Numbers(xPoint, xPoint) + addedNums;
}

double add2Numbers(double* num1, double* num2)
{	return (*num1 + *num2);}

double add2NumbersByRef(double& num1R, double& num2R)
{	return (num1R + num2R); }

/*	int arrayPointer(std::array<int, arrayPassed.size()>* arrayPassed[]){
		for (int x{}; x < arrayPassed.size(); x++) std::cout << arrayPassed[x];	
	}
*/