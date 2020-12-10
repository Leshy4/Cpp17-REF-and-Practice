/*
Exercise 5-4. Use std::cin.getline(…) to obtain a C-style string of maximum 1,000
characters from the user. Count the number of characters the user entered using an
appropriate loop. Next, write a second loop that prints out all characters, one by one,
but in a reverse order.*
*/
#include "pch.h"

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	size_t charCount{}, vowelCount{}, consonantCount{}, digitCount{};
	const size_t maxLength{ 1'000 };
	char sentence[maxLength]{};
	cout << "Please Enter a sentence up to 1,000 characters.\n";	
	cin.getline(sentence, maxLength);
	for (charCount; sentence[charCount] != '\0'; charCount++)
	{//while character is a letter: ++vowelCount || ++consonantCount
		if (isalpha(sentence[charCount]))
		{
			switch (tolower(sentence[charCount]))
			{
			case 'a':case 'e':case 'i':case 'o':case 'u':
				++vowelCount;
				break;
			default:
				++consonantCount;
				break;
			}
		}
			//while character is a Digit: ++Digitcount
		if (isdigit(sentence[charCount])) { ++digitCount; }
	}	// OUTPUT Counts of Everything
	cout << "\n\n\nInput Count = " << charCount << endl;
	cout << "Vowel Count = " << vowelCount << endl;
	cout << "Consonant Count = " << consonantCount << endl;
	cout << "Digit Count = " << digitCount << endl;
	cout << "Space Count = " << (charCount - vowelCount - consonantCount - digitCount) << endl;

	size_t sentenceBufferChars{};
	char sentenceBuffer[maxLength]{};
	size_t sCount{};
	for (size_t sentenceBufferChars : sentence)
	{
		sentenceBuffer[sCount] += sentenceBufferChars;
		sCount++;
	}
	
	cout << "\n\n\nSentence Buffer = \n";
	for (int i{}; i < sCount; i++)
		cout << sentenceBuffer[i];
		
	cout << "\n\n\nReverse Sentence Buffer = " << endl;
	for (sCount; sCount + 1 > 0; sCount--)
		cout << sentenceBuffer[sCount];

	cout << "\n\n\n";
}