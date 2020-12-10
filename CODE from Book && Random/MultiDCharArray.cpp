#include "pch.h"
// Ex5_11.cpp
// Working with strings in an array
#include <iostream>
#include <array> // for std::size()
int main(){
	const size_t max_length{ 80 }; // Maximum string length (including \0)
	char stars[][max_length]{
	 "Fatty Arbuckle", "Clara Bow",
	 "Lassie", "Slim Pickens",
	 "Boris Karloff", "Mae West",
	 "Oliver Hardy", "Greta Garbo"
	};
	size_t choice{};
	std::cout << "Pick a lucky star! Enter a number between 1 and "
		<< std::size(stars) << ": ";
	std::cin >> choice;
	if (choice >= 1 && choice <= std::size(stars)){
		std::cout << "Your lucky star is " << stars[choice - 1] << std::endl;
	}
	else{
		std::cout << "Sorry, you haven't got a lucky star." << std::endl;
	}

	char heroArray[][max_length]{
		"Deadpool", "Wolverine", "Aquaman",
		"Superman", "Iron Man", "Wrothgar"
	};
	std::cout << "\n\n\nPick a Hero to Protect you: Choose between 1-6\n"
		&& std::cin >> choice;
	if (choice >= 1 && choice <= std::size(heroArray) )
	std::cout << "\nThe Hero that is going to protect you is: \n\n"
		<< heroArray[choice - 1] << std::endl;
	else std::cout << "You have no Hero to protect you! Good Luck!\n\n";
}