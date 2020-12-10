#include "pch.h"
#include <iostream>

int intGetter(int num, int num2);
int multiplier(int* num, int* num2);
int main()
{	int num{}, num2{};
	intGetter(num, num2);	
}
int intGetter(int num, int num2)
{	std::cout << "Enter an Integer:\t" && std::cin >> num;
	std::cout << "\nEnter another Integer:\t" && std::cin >> num2;
	int* numP{ &num };
	int *num2P{ &num2 };
	std::cout << "\nInt 1 : " << *numP << "\nInt 2: " << *num2P;
	multiplier(numP, num2P);
	return 0;
}
int multiplier(int* num, int* num2)
{
	int multiplied{ *num * *num2 };
	std::cout << "\nMultiplied: " << multiplied;
	return 0;
}