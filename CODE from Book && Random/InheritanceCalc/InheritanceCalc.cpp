#include "pch.h"
#include <iostream>

int main()
{
	Math divideCalculator;
	divideCalculator.setNumbers(35, 7);
	std::cout << divideCalculator.divideNums() << std::endl;
	
	Math multiplyCalculator;
	multiplyCalculator.setNumbers(7, 5);
	std::cout << multiplyCalculator.multiplyNums() << std::endl;

	Addition calcWithAddition;
	std::cout << calcWithAddition.addThem(14, 9) << std::endl;

	Subtraction calcWithSubtraction;
	std::cout << calcWithSubtraction.subtractThem(14, 9) << std::endl;

	std::cout << calcWithAddition.multiplyNums() << std::endl;

	std::cout << calcWithSubtraction.divideNums() << std::endl;

}