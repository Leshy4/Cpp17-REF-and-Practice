/*Exercise 4-6. Write a program that determines, using only the conditional operator, 
if an integer that is entered has a value that is 20 or less, is greater than 20 
but not greater than 30, is greater than 30 but not exceeding 100, or is greater than 100.*/
// Messing with Flags / Conditional Operators / Switch & Case Statments
#include "pch.h"
#include <iostream>

int main()
{
	int value;
	int valueFlag;
	std::cout << "Enter an Integer: " && std::cin >> value;

	
	if (value <= 20) valueFlag = 0;
	if (value > 20 && value <= 30) valueFlag = 1;
	if (value > 30 && value <= 100) valueFlag = 2;
	if (value > 100) valueFlag = 3;

	//---------------  ONLY THE Conditional Operator ? :  ----------------------------
	std::cout << (value < 20 ? "LESS THAN 21." :
		(valueFlag == 1 ? "21-30" : (valueFlag ==2? "31-100" : "OVER 100!.") ) );

	
	std::cout <<  ( value <= 20 ? "\tX12X12 LESS THAN 21" :
		(value > 20 && value <= 30 ? "\tX12X12 21-30" :
		(value > 30 && value <= 100 ? "\tX12X12 31-100" : "\tX12X12 Over 100 Conditional Conditions" ) ));

	std::cout << 
		( valueFlag == 0 ? "\nEASY LESS THAN 21" : 
		valueFlag == 1 ? "\nEASY BETWEEN 21-30" :
		 valueFlag == 2 ? "\nEASY BETWEEN 31-100" : 
		 "\nEASY OVER 100 Needs Default for Conditionals" )
		<< std::endl;


//------------- Switch / Case
	

	switch (valueFlag)
	{
	case 0:
		std::cout << "\nValue <= 20";
		break;
	case 1:
		std::cout << "\n20 < Value <= 30";
		break;
	case 2:
		std::cout << "\n30 < Value <= 100";
		break;
	case 3:
		std::cout << "\n100 < Value";
		break;
	default:
		break;
	}
	
	
}