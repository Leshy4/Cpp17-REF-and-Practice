#include "pch.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

int main()
{	std::string hi{ "Hello World!" };
	std::cout << hi
		<< "\nLength = " << hi.length() << " = Which Counts Spaces\n"
		<< std::endl;

	std::string shortHi{ "Hello World", 5 };
	std::cout << shortHi
		<< std::endl;

	std::string loud(10, '!');
	std::cout << "This was Loud"
		<< loud
		<< std::endl;

	std::string halfLoud{ loud, 0, 5 };
	std::cout << halfLoud << "\tStarts at Position 0 and steals 5 Chars from Loud"
		<< std::endl;

	std::string enterString;
	std::cout << "Enter a String to Print (No Spaces):\t"
		&& std::cin >> enterString
		&& std::cout << enterString
		<< std::endl;
	size_t count{ 1 };
	std::string reTry{ 'y' };
	std::vector<std::string> heroes;
	do {
		std::string firstName;
		std::string lastName;
		std::cout << "Enter your First Name:\t" && std::cin >> firstName
			&& std::cout << "\nEnter your Last Name:\t" && std::cin >> lastName;
		std::string fullName{ firstName + " " + lastName };
		std::cout << "\n\n\tYour First and Last name is:\n\t" << fullName
			<< "\nYour Name is " << fullName.length() - 1 
			<< " Characters Long.";
		heroes[count] = fullName;
		++count;
		std::cout << "\nWould you like to enter another Name? Y or N?\t"
			&& std::cin >> reTry;
		reTry = tolower(reTry[0]);
		if (reTry[0] != 'y' && reTry[0] != 'n') return 0;
	} while (reTry[0] == 'y');
	for (count; count != 0; --count)
	{std::cout << heroes[count] << std::endl;}

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
