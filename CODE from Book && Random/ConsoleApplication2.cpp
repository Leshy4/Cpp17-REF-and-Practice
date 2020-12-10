// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{	auto num{ 100 };
	auto num1{ 100 };

std::cout << "Multiply by Powers of 2\n";
	std::cout << (num << 2) << " = 100 << 2\nMove 2 Bits left\n";
	std::cout << (num << 1) << " = 100 << 1\nMove 1 Bit left\n";
	std::cout << (num << 0) << " = 100 << 0\n\n";

std::cout << "Divide by Powers of 2\n";
	std::cout << (num >> 0) << " = 100 >> 0\n";
	std::cout << (num >> 1) << " = 100 >> 1\n";
	std::cout << (num >> 2) << " = 100 >> 2\n\n";
		
std::cout << "Using & , OR , Complement\n";
		std::cout << ( num ^ num) << " = 100 ^ 100\n";
		std::cout << (num ^ 1) << " = 100 ^ 1\n";
		std::cout << (num ^ 2) << " = 100 ^ 2\n";
	std::cout << (num & 1) << " = 100 & 1\n";
	std::cout << (num | 1) << " = 100 | 1\n";
	std::cout << (~num) << " = ~100\n";
	std::cout << (~- num) << " = ~-100\n";
	std::cout << (~(~num)) << " = ~(~100)\n\n";
	
	std::cout << "Random Numbers\n";
	std::cout << (700 ^ 1 | num) << " = 700 ^ 1 | 100\n";
	std::cout << (num & num1 & 1) << " = 100 & 100 & 1\n";
	std::cout << (num & num1 | 1) << " = 100 & 100 | 1\n";
	std::cout << (num | num1 & 1) << " = 100 | 100 & 1\n";
	std::cout << (num | num1 | 1) << " = 100 | 100 | 1\n";

	system("pause");
}