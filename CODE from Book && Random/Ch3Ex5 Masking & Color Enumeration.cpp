/*		Exercise 3-5. Write a program that 
defines an enumeration of type Color where the enumerators are: 
Red, Green, Yellow, Purple, Blue, Black, and White. Define the type
for enumerators as an unsigned integer type and 
arrange for the integer value of each enumerator to be the RGB combination for the color it represents 
(you can easily find the hexadecimal RGB encoding of any color online). 
Create variables of type Color initialized with enumerators for 
yellow, purple, and green. 
Access the enumerator value and extract and output the RGB components as separate values.		*/

#include <iostream>
#include <iomanip>

int main()
	{
	const unsigned R{ 0x00FF0000 };
	const unsigned G{ 0x0000FF00 };
	const unsigned B{ 0x000000FF };


	enum class Color : unsigned
	{
		Red = R,
		Green = G,
		Yellow = R | G,
		Purple = R | B,
		Blue = B,
		Black = 0,
		White = R | G | B
	};

	const Color color1{ Color::Yellow };
	const Color color2{ Color::Purple };
	const Color color3{ Color::Green };

	auto color{ static_cast<unsigned>(color1) };                        // Get the enumerator value
	std::cout << std::setw(38) << "The components of color1 (yellow) are:"
		<< "  Red:" << std::setw(3) << ((color & R) >> 16)		
		<< "  Green:" << std::setw(3) << ((color & G) >> 8)
		<< "  Blue:" << std::setw(3) << (color & B) << std::endl;

	color = static_cast<unsigned int>(color2);
	std::cout << std::setw(38) << "The components of color2 (purple) are:"
		<< "  Red:" << std::setw(3) << ((color & R) >> 16)
		<< "  Green:" << std::setw(3) << ((color & G) >> 8)
		<< "  Blue:" << std::setw(3) << (color & B) << std::endl;

	color = static_cast<unsigned int>(color3);
	std::cout << std::setw(38) << "The components of color3 (green) are:"
		<< "  Red:" << std::setw(3) << ((color & R) >> 16)
		<< "  Green:" << std::setw(3) << ((color & G) >> 8)
		<< "  Blue:" << std::setw(3) << (color & B) << std::endl;
}