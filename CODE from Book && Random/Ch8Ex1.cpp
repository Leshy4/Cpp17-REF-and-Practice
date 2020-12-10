/*  Exercise 8-1. Write a function, validate_input(), that accepts two integer arguments
that represent the upper and lower limits for an integer that is to be entered. It should
accept a third argument that is a string describing the input, with the string being used
in the prompt for input to be entered. The function should prompt for input of the value
within the range specified by the first two arguments and include the string identifying the
type of value to be entered. The function should check the input and continue to prompt
for input until the value entered by the user is valid. Use the validate_input() function
in a program that obtains a user’s date of birth and outputs it in the form of this example:
 The program should be implemented so that separate functions, month(), year(),
and day(), manage the input of the corresponding numerical values. Don’t forget leap
years—February 29, 2017, is not allowed!	*/
#include "pch.h"
#include <iostream>
#include <string>

size_t getRange(size_t minRange, size_t maxRange);
size_t validate_input(size_t minRange, size_t maxRange);	// Prompts User & Gets lower/upper limits

int main(size_t minRange, size_t maxRange)
{
	//size_t minRange{}, maxRange{};
	getRange(minRange, maxRange);
	validate_input(minRange, maxRange);
}

size_t getRange(size_t minRange, size_t maxRange)
{	std::string minRangeMsg{ "\t\tPlease Enter a Minimum integer:\t" };
	std::string maxRangeMsg{ "\n\t\tPlease Enter a Maximum integer:\t" };
	std::cout << minRangeMsg && std::cin >> minRange;
	std::cout << maxRangeMsg && std::cin >> maxRange;
	size_t minRangeBuff{};
	if (minRange > maxRange)	//Sort
		minRangeBuff = maxRange , maxRange = minRange, minRange = minRangeBuff; 
	return minRange, maxRange;
}
size_t validate_input(size_t minRange, size_t maxRange)	// Prompts User & Gets lower/upper limits
{	size_t input{};
	std::cout << "\nRange is " << minRange << " - " << maxRange;
	std::cout << "\nPlease enter a Number within the Range: " && std::cin >> input;
	if (input < minRange || input > maxRange){
		std::cout << "\nYou have entered a number outside the Range.\n";
		main(minRange, maxRange);
		}
	return minRange, maxRange;
}