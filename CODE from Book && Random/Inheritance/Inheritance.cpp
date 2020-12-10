// #include "Daughter.h"
#include "pch.h"
#include <iostream>

int main()
{
	Mother robotMom1(500);
	robotMom1.getAge();

	Mother robotMom2;
	robotMom2.getAge();

	Mother robotMom3;
	robotMom3.setAge(3000);
	robotMom3.getAge();
	Mother robot;

	DeadlyDog orthus;
	DeadlyDog cerebus;
	cerebus.setAge(350);
	cerebus.getAge();
	for (size_t i{}; i != 10; ++i)
	{	cerebus.bite();
		std::cout << " He Bit you " << i + 1 << " times.";
		if (i == 9) std::cout << "\nYou Swing the Sacred Knife and Kill all the Dogs and the Energy Matrix.";
	}

}