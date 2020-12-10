/*Exercise 4-1. Write a program that prompts for two integers to be entered and then uses an
if-else statement to output a message that states whether the integers are the same.*/

#include "pch.h"
#include <iostream>

int main()
{
	int a; int b;
	std::cout << "Enter 2 integers:\n" 
		&& std::cin >> a && "\n" && std::cin >> b;

	if (a == b)
		std::cout << "\nThe Integers are the Same.\n\n\n";
	else
		std::cout << "\nThe Integers are Different\n\n\n";

   system("pause");
}