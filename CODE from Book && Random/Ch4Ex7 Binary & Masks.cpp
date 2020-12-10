// Exercise 4-3 Outputting the binary code for a letter.
/*
 * Most of the program is fairly simple. The cctype functions make determining upper or
 * lower case easy. Finding out if it's a vowel is also easy with a switch
 * Getting the binary code needs a little thought though.                                                           *
 * Each of the masks selects a different bit of the ch variable.
 * If the bit is '1', the expression will be non-zero, which is converted to Boolean true.
 * If it's '0', the whole expression will be zero, or Boolean false.
 * Ones and zeros are therefore output as appropriate.
 */

#include <iostream>
#include <cctype>

int main()
{
	char ch{};
	std::cout << "Enter a letter: ";
	std::cin >> ch;

	if (!std::isalpha(ch)) {
		std::cout << "That's not a letter!" << std::endl;
		return 1;
	}

	// Determine upper or lower case.
	std::cout << "'" << ch << "' is " << (std::islower(ch) ? "lowercase" : "uppercase") << '.' << std::endl;

	// Determine whether it is a vowel or a consonant.
	std::cout << "'" << ch << "' is a ";
	switch (std::tolower(ch)) {
	case 'a': case 'e': case 'i': case 'o': case 'u':
		std::cout << "vowel";
		break;
	default:
		std::cout << "consonant";
		break;
	}
	std::cout << '.' << std::endl;

	// Output the character code as binary
	std::cout << "The binary code for '" << ch << "' is "
		<< ((ch & 0b10000000) ? 1 : 0)
		<< ((ch & 0b01000000) ? 1 : 0)
		<< ((ch & 0b00100000) ? 1 : 0)
		<< ((ch & 0b00010000) ? 1 : 0)
		<< ((ch & 0b00001000) ? 1 : 0)
		<< ((ch & 0b00000100) ? 1 : 0)
		<< ((ch & 0b00000010) ? 1 : 0)
		<< ((ch & 0b00000001) ? 1 : 0)
		<< std::endl;

	return 0;
}


/*Exercise 4-7. Implement a program that prompts for input of a letter. Use a library
function to determine whether the letter is a vowel and whether it is lowercase or not,
and output the result. Finally, output the lowercase letter together with its character
code as a binary value.
Hint: Even though starting with C++14, C++ supports binary integral literals (of
form 0b11001010; see Chapter 2), C++ standard output functions and streams
do not support outputting integral values in binary format. They mostly do support
hexadecimal and octal formatting—for std::cout, for instance, you can use the std::hex
and std::oct output manipulators defined in <ios>. But to output a character in binary
format, you’ll thus have to write some code yourself. It shouldn’t be too hard, though:
a char normally has only eight bits, remember? You can just stream these bits one by
one. Perhaps these binary integer literals can be helpful as well—why else would we
have mentioned them at the start of this hint?*/

/*#include "pch.h"
#include <iostream>
#include<iomanip>

int main()
{
	char letter;
	auto vowelMsg{ "\nYou have Entered a Vowel\n\n" };
	auto lowerCMsg{ "\nYou have Entered a Lowercase Letter\n\n" };

	std::cout << "Enter a Letter: " && std::cin >> letter;

	switch (tolower(letter))
	{
	case 'a': case 'e': case 'i': case 'o': case 'u':
		std::cout << vowelMsg;
		break;
	default:
		std::cout << "Not a Vowel.";
		break;
	}
	if (letter == tolower(letter))
		std::cout << lowerCMsg;
	else std::cout << "\nNot a Lowercase Letter\n";

	letter = tolower(letter);

	std::cout << std::hex << std::setw(8) << std::showbase << std::setfill('0') << std::right
		<< static_cast<int>(letter);

}
*/