// StringsNThings.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <vector>
#include <algorithm>	// std::sort(beginning, end)	//Alphabetical Sorting

int main()
{   std::cout << "Enter a Line of Text:\n"; 
	std::string enteredString;
	std::getline(std::cin, enteredString);
	std::cout << "\nYour String is " << enteredString.size()
		<< " = " << enteredString.length()
		<< "\nWhich Number of Character Would you like to Access?\n";
	size_t charNum{};
	std::cin >> charNum;
	std::cout << "\n" << enteredString[charNum] << " is at location "
		<< charNum
		<< "\nWhat Character Would you like to find?\n";
	char enChar{};
	std::cin >> enChar;
	std::cout << "\nString Scanner: \n";
	int j{}, k{};
	for (auto& i : enteredString)
		{if (i == enChar) std::cout << "\nAt Array Location: " << j; ++k;
			++j;
		}
	std::cout << "\nThere are \"" << k << "\" " << enChar << "'s in\n"
		<< enteredString;
	std::cout << "\n\n\nPrinting backwards now:\n";
	for (size_t i{enteredString.size()}; i != -1 ; --i)
	{	std::cout << enteredString[i];
		if (i % 100 == 0)std::cout << "\n";
	}

	std::cout << "\n\nASCII Codes for Lowercase Values:\n";
	for (size_t i{}; i < enteredString.length(); i++) 
	{ std::cout << std::toupper(enteredString[i]) << "  ,  ";}
	std::cout << "\nA Substring that covers up to 100 characters of Text:\t\n";
	std::cout << enteredString.substr(0, 100) << "\n\n\n";
	std::cout << enteredString.substr(0, 5) << " = First 5 Letters from 0";	
	
	size_t wordCount{0}, wordNum{};
	std::vector<std::string> wordArray;
	std::string word;
	std::cout << "\nHow Many Words do you want to enter?: " 
		&& std::cin >> wordNum;		
	++wordNum;
	while (wordCount < wordNum )
	{	std::cout << "\nEnter Word # " << wordCount << ":\t";
		std::getline(std::cin , word);
		wordArray.push_back(word);
		wordCount++;
	} std::cout << "\n"; 	

	for (size_t i{}; i != wordCount; i++) std::cout << "\t" << wordArray[i];	
	//for (auto& pntWord : wordArray) std::cout << "\n" << pntWord;
	std::sort(wordArray.begin(), wordArray.end());
	std::cout << "\nAlphabetically Sorted Words: ";
	for (auto copy : wordArray) std::cout << copy << "\t";

}
