//#include "pch.c"
#include <iostream>

int main()
{
	std::cout << "\nThis is  Binary Shifting to the LEFT\n";
	int num1{ 2 };
	int* num{ &num1 };
	int** PPnum{ &num };
	int &rNum{ **PPnum };
	int& newRNum{ **PPnum };
	std::cout << (*num << 4) << " = " << rNum << " << 4\t2 * 2 * 2 * 2 = \t2^4 = " << 2 * 2 * 2 * 2 << "\t2^4 * " << rNum << "\n";
	std::cout << (*num << 3) << " = " << rNum << " << 3\n";
	std::cout << (*num << 2) << " = " << rNum << " << 2\n";
	std::cout << (*num << 1) << " = " << rNum << " << 1\n";
	std::cout << (*num << 0) << " = " << rNum << " << 0\n";

	std::cout << (**PPnum << 0) << " = " << rNum << " << 0\n";
	std::cout << (rNum << 0) << " = " << rNum << " << 0\n";

	int*** newNum = {&PPnum};
	for (long long counter{ 32 }, i{}; i < counter; ++i)
		std::cout << ((***newNum) << i) << " = " << **PPnum << " << 2^" << i << (i % 5 == 0? "\n" : "\t");
	system("pause");
}