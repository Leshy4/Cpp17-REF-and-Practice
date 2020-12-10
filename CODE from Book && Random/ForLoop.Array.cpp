#include "pch.h"
#include <iostream>						// Using a for loop with an array
#include <array> // for std::size()		// Obtaining the number of array elements
#include<iomanip>

int main()
{	//Magic Num / Array Vars
	const unsigned size{ 6 }; // Array size
	unsigned height[size]{ 26, 37, 47, 55, 62, 75 }; // An array of heights
	unsigned total{}; // Sum of heights
	for (size_t i{}; i < size; ++i)
		total += height[i];
	const unsigned average{ total / size }; // Calculate average height
	std::cout << "The average height is " << average << std::endl;
	unsigned count{};
	for (size_t i{}; i < size; ++i)
	{	if (height[i] < average) 
			++count;
		//Could Replace ^ w/ //count += height[i] < average;
	}
	std::cout << count << " people are below average height.\n\n\n" << std::endl;
	
	//----------------------------------------------------------------
		int values[] { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29 };
		std::cout << "There are " << sizeof(values) / sizeof(values[0])
			<< " elements in the array." << std::endl;

		int sum{};
		for (size_t i{}; i < std::size(values); ++i)
			sum += values[i];	

		std::cout << "The sum of the array elements is " << sum << "\n\n\n";

//------------------------------------------------------------------------------

		std::cout << "A Necrotic spell is casted upon you!!!\n\n";

		double damageDOT{ size };					// Dmg = 6	Imagine size = Magic Level
		double life{ 100 };
		for (size_t i{}; i < 10; i++)				// This DOT hits 10 times
		{
			life -= damageDOT;
			std::cout << "The Spell Zaps Life\nLife = " << life << std::endl;
		}

		std::cout << "\n\nYou Cast Healing Aura.\n";

		const double healingAura{ life * .13};

		for (size_t i{}; i < 10; i++){
			life += healingAura;
			std::cout << "You are feeling rejuvenated.\nLife = " << life << std::endl;
		}	
//--------------------------------------------------------------------------------------------------
		unsigned int limit{};
		std::cout << "\n\n\nThis program calculates n! and the sum of the integers"
			<< " up to n for values 1 to limit.\n\n";
		std::cout << "What upper limit for n would you like? ";
		std::cin >> limit;
		std::cout << "\n\n";
		// Output column headings
		std::cout << std::setw(8) << "integer" << std::setw(8) << " sum"
			<< std::setw(20) << " factorial\n" 
			<< "------------------------------------"	<< std::endl;
		for (unsigned long long n{ 1 }, sum{}, factorial{ 1 }; n <= limit; ++n)
		{
			sum += n; // Accumulate sum to current n
			factorial *= n; // Calculate n! for current n
			std::cout << std::setw(8) << n << std::setw(8) << sum
				<< std::setw(20) << factorial << std::endl;
		}

}