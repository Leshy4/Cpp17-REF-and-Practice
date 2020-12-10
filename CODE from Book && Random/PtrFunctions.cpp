#include "pch.h"
#include <iostream>
#include <memory>
double catchThis(int DOT)
{	int magicLevel{ 40 };
	double health{ 2000 };
	double weaponBonus{ 1 };
	double* damagedHealth{ &health };
	double dragonStaff{ 2.1 }; //* .2
	weaponBonus += dragonStaff;
	double feralPoison{ weaponBonus + .005 };
	int count{};
	for (DOT > 0; --DOT;)
	{	std::cout << "Feral Poison Damage = " << feralPoison << "\tHealth = " << *damagedHealth;
		++count;
		*damagedHealth -= feralPoison;
		if (count % 2 == 1) std::cout << "\t\t";
		if (count % 2 == 0) std::cout << std::endl;
	}
	return 0;
}
int pntMather(int number)
{	int buffNum{ number };
	int count{};
	while (number > (buffNum / buffNum))
	{	++count;
		std::cout << number << "\t";
		if (count % 20 == 0) std::cout << std::endl;
		number -= 5;
	}
	std::cout << "\nCount = " << count;
	count = { count >> 3 };
	std::cout << "\nCount >> 3 = " << count << std::endl;
	catchThis(count);
	return 0;
}
int main() //Throw Health from catchThis
{
	int a{ 50 };
	int* pntA{ &a };
	std::cout << *pntA; 
	--*pntA;
	std::cout << "\n" << *pntA << "\n" << a;
	++a;
	std::cout << "\n" << a;
	a *= *pntA;
	std::cout << "\n" << a << "\n";
	pntMather(*pntA);

}