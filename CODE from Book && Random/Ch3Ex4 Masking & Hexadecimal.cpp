/*Exercise 3-4. Write a program to
--Display the value of this variable as hexadecimal.
--Unpack the four bytes of the variable and output them in reverse order, with the loworder byte first.*/
#include <iostream>
#include<iomanip>

void myMain()
{
	unsigned int packedIntVar{};
	unsigned char wordP{};
	auto alert{ "Enter an Integer:\n" };
	//--read four characters from the keyboard and
	
	std::cout << alert;
		std::cin >> wordP;
		packedIntVar |= wordP;
				
	std::cout << alert;
		std::cin >> wordP;		
		packedIntVar <<= 8;
		wordP |= packedIntVar;

	std::cout << packedIntVar;
	
	unsigned int mask{ 0x000000FF };              // Keep low order byte
	ch = mask & packedIntVar;                          // Low order byte
	std::cout << std::setw(4) << ch;
	ch = mask & (packedIntVar >> 8);                   // 2nd byte
	std::cout << std::setw(4) << ch;
	
	std::cout << "\n\n\n\n\n\n\n\n";
	system("pause");
}


