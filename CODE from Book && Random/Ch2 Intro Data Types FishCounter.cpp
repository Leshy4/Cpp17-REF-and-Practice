#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstdlib>

int main()
{
	const double fishSpace{ 2.0 / 0.5 };
	const int inchPerFoot{ 12 };
	const double pi{  3.14159063589798465498495 };

	//UNSIGNED INT = Ensures User inputs a positive value, ---you can't have negative fish
	unsigned int fishCount{};
	double fishLength{};

	std::cout << "Enter the number of fish you want to keep: ";
	std::wcin >> fishCount;
	std::wcout << "Enter the average fish length in inches ";
	std::wcin >> fishLength;
	fishLength /= inchPerFoot;

	const double pondArea {fishCount * fishLength * fishSpace};
	const double pondDiameter{2.0 * std::sqrt(pondArea/pi)};

	std::cout << "\nPond Diameter required for " << fishCount << " fish is "
		//<< std::fixed            // Makes setprecision use 2 decimal places EX: 4.20 or 1.12
		//Scientific notation EX: Input "7,7" = 4.56e+00
		<< std::scientific       // Makes setprecision use 2 decimal places & scientific notation
		<< std::setprecision(2)  // EX: Number = 1.1 or 2.8 (before fixed)
		<< pondDiameter << " feet.\n";

	/*-------------------------------------------------------------------------*/

	int a{ 16 }, b{ 66 };
	//Makes output use 3 spaces and 2 numbers for a total of 5 field width output
	std::cout << "\n" << std::setw(5) << a << std::setw(5) << b << std::endl;
		//Justifies to the left, so the numbers appear first, then the spaces
	std::cout << std::left << std::setw(5) << a << std::setw(5) << b << std::endl;
		//Sets base to Hexadecimal << field width=6 << Shows "a= 0x10" to show hexadecimal value
	//Use std::showbase when using a different base to show which base is being worked with
	std::cout << " a = " << std::setbase(16) << std::setw(6) << std::showbase << a
		<< " b = " << std::setw(6) << b << std::endl;
		//Sets field width output to 10, rather than 5
	std::cout << std::setw(10) << a << std::setw(10) << b << std::endl;

	
	std::cout << std::setbase(10) << std::endl;  //Changes Bases back to Decimal vs. Hex for other programs
/*-----------------------------------------------------------------------------*/
	//Using static_cast to change Data Types
	double value1{ 10.9 };	double value2{ 15.9 };        //Declare Values as Double(s)
	//change Values to ints with static_cast<int>(value?)
	int whole_number{ static_cast<int>(value1) + static_cast<int>(value2) };
	
/*-------------------------------------------------------------------------------*/
/*		//Using static_cast Correctly
		// Using explicit type conversions
#include <iostream> 
int main(){*/
	const unsigned feet_per_yard{ 3 };
	const unsigned inches_per_foot{ 12 };
	double length{}; // Length as decimal yards
	unsigned int yards{}; // Whole yards
	unsigned int feet{}; // Whole feet
	unsigned int inches{}; // Whole inches
	std::cout << "Enter a length in yards as a decimal: ";
	std::cin >> length;
	// Get the length as yards, feet, and inches
	yards = static_cast<unsigned int>(length);
	feet = static_cast<unsigned int>((length - yards) * feet_per_yard);
	inches = static_cast<unsigned int>
		(length * feet_per_yard * inches_per_foot) % inches_per_foot;
	std::cout << length << " yards converts to "
		<< yards << " yards "
		<< feet << " feet "
		<< inches << " inches." << std::endl;
/*--------------------------------------------------------------------------------------*/
	//This Shows how to find the Minimum & Maximum Values of Data Types
	std::cout << "\n\n\nThe range for type short is from "
		<< std::numeric_limits<short>::min() << " to "
		<< std::numeric_limits<short>::max() << std::endl;
	std::cout << "The range for type int is from "
		<< std::numeric_limits<int>::min() << " to "
		<< std::numeric_limits<int>::max() << std::endl;
	std::cout << "The range for type long is from "
		<< std::numeric_limits<long>::min() << " to "
		<< std::numeric_limits<long>::max() << std::endl;
	std::cout << "The range for type float is from "
		<< std::numeric_limits<float>::min() << " to "
		<< std::numeric_limits<float>::max() << std::endl;
	std::cout << "The positive range for type double is from "
		<< std::numeric_limits<double>::min() << " to "
		<< std::numeric_limits<double>::max() << std::endl;
	std::cout << "The positive range for type long double is from "
		<< std::numeric_limits<long double>::min() << " to "
		<< std::numeric_limits<long double>::max() << std::endl;
	/*--------------------------------------------------------------------------------*/
	//Finding other properties of Fundamental Types
	//To obtain the special floating - point values for infinity and not- anumber(NaN): No Output
	float positive_infinity = std::numeric_limits<float>::infinity();
	double negative_infinity = -std::numeric_limits<double>::infinity();
	long double not_a_number = std::numeric_limits<long double>::quiet_NaN();
	/*----------------------------------------------------------------------------------*/
	// Working with CHARACTER VARIABLES
	char ch{ 'A' };
	char letter{ ch + 5 }; 	// letter is 'F'
	++ch; 			// ch is now 'B'
	ch += 3;		// ch is now 'E'
	//Changing CHARS into INTS (Hex)
	std::cout << "ch is '" << ch << "' which is code " 
		<< std::hex << std::showbase       //Changes to Hex, adds "0x"
		<< static_cast<int>(ch) << std::endl;  //Changes ch to int instead of char
	
		/*---------------------------------------------------------------------------
	// Working with UNICODE
	//Unicode code point for 'Z' (Capital). Which is 		wchar_t wch{ L'Z' };	std::cout << "\n\n" << wch << std::endl;	//Unicode code point for letter of 0x0438	wchar_t wch1{ L'\x0438' };	std::cout << wch1 << std::endl;

	char16_t letter{ u'B' }; // Initialized with UTF-16 code for B
	char16_t cyr{ u'\x0438' }; // Initialized with UTF-16 code for cyrillic и

	char32_t letter{ U'B' }; // Initialized with UTF-32 code for B
	char32_t cyr{ U'\x044f' }; // Initialized with UTF-32 code for cyrillic я

	*/
		/*---------------------------------------------------------------------------*/
	// Working with Auto Keyword, to automatically assign Data types to variables.
	auto m{ 10 }; // m has type int
	auto n{ 200UL }; // n has type unsigned long
	auto pi1{ 3.14159 }; // pi has type double
	auto m2 = 10; // m has type int
	auto n2 = 200UL; // n has type unsigned long
	auto pi2(3.14159); // pi has type double

	system("pause"); //Makes system pause to be able to view outputs
};