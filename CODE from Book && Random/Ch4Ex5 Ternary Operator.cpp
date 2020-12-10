/*Exercise 4-5. Add some code at the end of the main() function of Ex4_06.cpp to
print an additional message. 
If you have exactly one mouse, output a message of the form 
“It is a brown/white mouse.” Otherwise, if you have multiple mice, compose a
grammatically correct message of the form “Of these mice, N is a/are brown mouse/
mice.” If you have no mice, no new message needs to be printed. Use an appropriate
mixture of conditional operators and if/else statements.*/
#include "pch.h"
#include <iostream>
#include<iomanip>

int main()
{
	int mice{}; // Count of all mice
	int brown{}; // Count of brown mice
	int white{}; // Count of white mice
	std::cout << "How many brown mice do you have? ";
	std::cin >> brown;
	std::cout << "How many white mice do you have? ";
	std::cin >> white;
	mice = brown + white;
	//--------------------------------------------------------------------
	if (mice == 1)
	{
		if (brown == 1 || white == 0)
		{
			std::cout << "It is a Brown " 
				<< (mice == 1 ? " mouse" : " mice")
				<< std::endl;
		}
		if (white == 1 || brown == 0)
		{
			std::cout << "It is a White " << mice
				<< (mice == 1 ? " mouse" : " mice")
				<< std::endl;
		}
	}

	std::cout << "Of these mice, " << brown 
		<< (brown == 1 ? " is a" : " are")
		<< " brown " 
		<< (brown == 1 ? "mouse." : "mice." )
		<< "\nThere can be lots of "
		<< (mice > 4 ? "mousing mousers." : "mice.")
		<< std::endl;
}