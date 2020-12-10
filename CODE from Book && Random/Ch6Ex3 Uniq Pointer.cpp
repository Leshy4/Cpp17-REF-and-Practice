/* Exercise 6-3. Write a program that reads an array size from the keyboard and
dynamically allocates an array of that size to hold floating-point values. 
Using pointer notation, initialize all the elements of the array so that the 
value of the element at index position n is 1 / (n + 1)2. Calculate the sum of 
the elements using array notation, multiply the sum by 6, and output 
the square root of that result. */
#include "pch.h"
// Exercise 6-3. Storing numbers in a dynamic array
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <memory>

int main()	{
	size_t n{};
	std::cout << "Number of Elements: "
		&& std::cin >> n;
	std::cout << "\nn Squared = " << std::exp2(n);
	std::vector<double> vElements;
	for (n; n > vElements.size(); --n)
		{vElements.push_back(n);}
	auto* pElements{ std::make_unique<size_t>};

	double conversion{1};
	for (size_t j{vElements.size() - 1} ; !j ; --j)
	{
		std::cout << "\nConversion: " << conversion / exp2(j + conversion)
			<< std::endl;
	}
}
/*
	size_t n{};
	std::cout << "Enter the number of array elements: ";
	std::cin >> n;
	auto* values = new double[n];
	for (size_t i{}; i < n; ++i)
		*(values + i) = 1.0 / ((i + 1)*(i + 1));

	double sum{};
	for (size_t i{}; i < n; ++i)
		sum += values[i];

	std::cout << "The result is " << std::setprecision(15)
		<< std::sqrt(6.0 * sum) << std::endl;

	delete[] values;              // Don't forget to free the memory!
*/