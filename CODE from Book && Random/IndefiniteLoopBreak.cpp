#include "pch.h"
#include <iostream>
#include <iomanip>
#include <cctype>

int main()
{
	size_t table{}; // Table size
	const size_t table_min{ 2 }; // Minimum table size - at least up to the 2-times
	const size_t table_max{ 12 }; // Maximum table size
	char reply{}; // Response to prompt

	const size_t max_tries{ 3 }; // Max. number of times a user can try entering a table size
	do
	{
		for (size_t count{ 1 }; ; ++count) // Indefinite loop
		{
			std::cout << "What size table would you like ("
				<< table_min << " to " << table_max << ")? ";
			std::cin >> table; // Get the table size
			// Make sure table size is within the limits
			if (table >= table_min && table <= table_max)
			{
				break; // Exit the input loop
			}
			else if (count < max_tries)
			{
				std::cout << "Invalid input - try again.\n";
			}
			else
			{
				std::cout << "Invalid table size entered - yet again! \nSorry, only "
					<< max_tries << " allowed - program terminated." << std::endl;
				return 1;
			}
		}
	} while {true};
}