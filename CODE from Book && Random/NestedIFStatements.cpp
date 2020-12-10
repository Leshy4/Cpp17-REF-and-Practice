#include "pch.h"
#include <iostream>
#include<iomanip>

int main()
{
	int ifNum{};
	std::cout << "Enter a Number between 1 - 100 = " << std::endl; std::cin >> ifNum;
	std::cout << "\nYou Entered a Number =) and the number is = " << ifNum << std::endl;
	double insaneAttack{ static_cast<double>(ifNum) * 1.2 };
	if (ifNum < 0)
	{
		std::cout << "\nYou Accidently Hurt Yourself!!!\t\t\tYou Take : " << ifNum * -1 << " DMG.....Ouch!!\n";
	}

	if (ifNum > 0 && ifNum <= 49)
	{
		std::cout << "You hit!\nYou did " << ifNum << " Damage!!!\n\n\n";
	}

	if (ifNum >= 50)
	{
		if (ifNum == 100)
		{
			double insaneAttack{ static_cast<double>(ifNum) * 1.2 };
			std::cout << "INSANE ATTACK!!!\nYou Did " << insaneAttack << " Damage!!!\n\n";
			return 0;
		}
		if (ifNum >= 85)
		{
			std::cout << "Critical Hit!!!\nYou Did " << insaneAttack << " Damage!!!\n\n";
			return 0;
		}
		if (ifNum >= 70 && ifNum <= 84)
		{
			std::cout << "Hard Hit!!!\nYou Did " << ifNum << " Damage!!!\n\n";
			return 0;
		}
		std::cout << "Good Hit!!!\nYou Did " << ifNum << " Damage!!!\n\n";		
	}
}



/*
int main()
{
 char letter {}; // Store input here
 std::cout << "Enter a letter: "; // Prompt for the input
 std::cin >> letter;
 if (letter >= 'A')
 { // letter is 'A' or larger
 if (letter <= 'Z')
 { // letter is 'Z' or smaller
 std::cout << "You entered an uppercase letter." << std::endl;
 return 0;
 }
 }
 if (letter >= 'a') // Test for 'a' or larger
 if (letter <= 'z')
 { // letter is >= 'a' and <= 'z'
 std::cout << "You entered a lowercase letter." << std::endl;
 return 0;
 }
 std::cout << "You did not enter a letter." << std::endl;
}*/