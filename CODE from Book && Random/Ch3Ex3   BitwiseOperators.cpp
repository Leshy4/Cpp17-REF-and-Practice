// Chp3Ex3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>


int main()
{
	/* Note: try to figure out the solution to this exercise without actually running it */
	auto k{ 430u };
	std::cout << k << " = k\n"
		<< (k >> 4) << " = k >> 4\n"
		<< ~0u << " = ~0u\n"
		<< (~0u << 3) << " = ~0u << 3\n"
		<< ~(~0u << 3) << " = ~(~0u << 3)"
		<< "\n\n\n (k >> 4) = " << (k << 4) << "\n~(~0u << 3) = " << (~(~0u << 3)) << "\n\nj = "
		<< std::endl;
	auto j{ (k >> 4) & ~(~0u << 3) };
	std::cout << j << std::endl;

	system("pause");
}