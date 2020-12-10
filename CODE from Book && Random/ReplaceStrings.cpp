#include <iomanip>
#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>
const std::string delimeters{" ,.;:!?*"};

int main()
{   std::cout << "Enter a Sentence to Search and Replace:\n"; 
	std::string sentence;
	std::getline(std::cin, sentence);
//Replacement Index and Length
	std::string replaceWord{};
	std::cout << "What Word do you want to replace?\t"
		&& std::getline(std::cin, replaceWord);
	while (!sentence.find(replaceWord))
		std::cout << "What Word do you want to replace?\t"
		&& std::getline(std::cin, replaceWord);
	size_t replaceLength{}, replaceIndex{ sentence.find(replaceWord) };
//Get Replacement :
	std::string replacementWord;
	std::cout << "\t\tReplace it with :\t";
	std::getline(std::cin, replacementWord);
//VARS: sentence / replacementWord / replaceWord / replaceIndex / replaceLength
// Search & Replace
	size_t replaceEnd{sentence.find_first_of(delimeters, replaceIndex + 1)};
	sentence.replace(replaceIndex, replaceEnd, replacementWord);
	std::cout << "\n\nNew Sentence = \n\n\t" << sentence << "\n\n\n\n";
/*----------------------------------------------------*/
	//Dictionary Sorter
	std::cout << "\t\t\tThis Part of the Program Sorts Words in Dictionary Order\n\n";
	std::vector<std::string> dictionary;
	size_t wordCounter{};
	std::string wordBuffer;
	char another{ 'y' };
	do
	{
		std::cout << "Enter a Word into your Dictionary to be Sorted:\t\t\t"
			&& std::cin >> wordBuffer; 
		dictionary.push_back(wordBuffer);
		++wordCounter;
		std::cout << "Would you like to enter another word? Enter \'y\' for yes:\t"
			&& std::cin >> another;
	} while (tolower(another) == 'y');
	std::cout << "\n\nThe Words You Have Entered Are:\n";
		for (std::string word : dictionary)	
			std::cout << word << " ";	// Print Unsorted Words
	std::cout << "\n\nThe Words in Dictionary Order:\n";
	std::sort(dictionary.begin(), dictionary.end());	//Sort Dictionary
	for (size_t i{}; i < dictionary.size() ; ++i )	//Print Dictionary
		std::cout << dictionary[i] << (i != dictionary.size()-1? " , ":"");
	std::cout << "\n\n\n";
}