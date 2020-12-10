#include "pch.h"
#include <iostream>
#include <iomanip>
#include <vector>

int main()
{	size_t inputNum{};
	std::cout << "Using Vectors to number-- to 0."
		<< "Enter a number to Increment to by 1, then Decrement from by 1:\n"
		&& std::cin >> inputNum; 	
	std::vector<size_t> decreValue;
	std::cout << "Your number is : " << inputNum << std::endl;
	size_t outputFormat{ 10 }, outputAnswers{ 10 };
	do {	for (size_t i{ 1 }; i <= inputNum; ++i)
			decreValue.push_back(i);		
		for (auto copyValue : decreValue)
		{	std::cout << std::setw(outputFormat) << copyValue;
			if (copyValue % outputAnswers == 0)		std::cout << std::endl;
		}
		for (decreValue.back() > 0; decreValue.back()--;)
		{	if (decreValue.back() % outputAnswers == 0) std::cout << std::endl;
			std::cout << std::setw(outputFormat) << decreValue.back();
		}
		if (decreValue[0] != '0') decreValue.clear(); //Clears decreValue Vector before new command		
		std::cout << "\nEnter Another Number, if you would like\nIf not, Enter '0':\n"
			&& std::cin >> inputNum;
	} while (inputNum != 0);
	
	double microsec; 
	std::cout << "\nThis Program Converts Microseconds into several types.\n";
	std::cout << "How Many Microseconds do you want to use?\t"
		&& std::cin >> microsec;
	double miliSec{ microsec / 1000. };
	double sec{miliSec / 1000.};
	double minute{sec / 60.};
	double hour{ minute / 60. };
	std::cout << "That's:\n" << std::fixed << std::setprecision(3)
		<< hour << " Hours\n"
		<< minute << " Minutes\n"
		<< sec << " Seconds\n"
		<< miliSec << " Miliseconds\n";
	std::cout << std::setprecision(0) << "This is Real Time Calculations:\n";
	for (microsec > 0; --microsec;)
	{
		std::cout << microsec << " ";
		if (static_cast<size_t>(microsec) % 20 == 0) std::cout << std::endl;
	}
}
/*
int main() {---------
std::cout << "\t\t\tProgram Prints out Numbers not multiples of 7 or 13\nWhat is the largest number I should check? ";		unsigned inputNum{};		std::cin >> inputNum;

std::vector<unsigned> values;		// Add element values 1 to inputNum
for (unsigned i{ 1 }; i <= inputNum; ++i)
	values.push_back(i);

size_t count{};                              // Number of output values
size_t perline{ 10 };                          // Number output perline
for (auto value : values)
{	if (value % 7 == 0 || value % 13 == 0) continue;
	std::cout << std::setw(6) << value;
	if (++count % perline == 0) std::cout << "\n";
}
std::cout << std::endl;

*/