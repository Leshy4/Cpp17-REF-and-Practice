/*Exercise 5-3. Create a program that uses a do-while loop to count the number of
nonwhitespace characters entered on a line. The count should end when the first
"~" character is found.*/
#include "pch.h"
#include <iostream>

int main()
{	
	unsigned count{};
	char ch;
	std::cout << "\t\t\tEnter as many Characters as you want: Use \"~\" to Terminate the Program.\n";
	do 
	{	std::cin >> ch;
		count++;
	}	while (ch != '~');

	--count;
	std::cout << "\n\t\t\tThere are " << count << " # of Characters, not including Spaces or '~'\n\n\n";
}