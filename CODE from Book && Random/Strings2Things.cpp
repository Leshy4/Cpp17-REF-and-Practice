#include "pch.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <vector>
#include <algorithm>	// std::sort(beginning, end)	//Alphabetical Sorting

const size_t max_sentence_Length{ 100 };

int main()
{
    std::cout << "Enter a Sentence to Parse:\n";
	getSentence();
	return;
}

void getSentence()
{
	char s1[max_sentence_Length]{};
	std::string sentence, s2, s3;
	std::cin.getline->sentence;
	std::cout << "\n" << sentence << "\nEnter sentence ended with *\n";
	std::cin.getline(s1, max_sentence_Length, '*');
}