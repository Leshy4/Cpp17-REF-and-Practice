#include "pch.h"
#include <iostream>
#include <iomanip>
#include <vector>
#include <memory>
#include <string>

std::string getSentence(std::string sentence) 
{	std::getline(std::cin, sentence);
	return sentence;
}
double multiplyNums(double number1, double number2)
{	double result{number1 * number2};
	return result;
}
double divideMultiples(double result)
{	result /= 2;
	return result;
}
double checkDecrement(double result)
{	if (result) --result;
	return result;
}

int main()
{	std::string sentenceString{};
	std::cout << "The Sentence Passed from getSentence():\n"; 
	 std::cout << getSentence(sentenceString);
	double num1, num2{};
	std::cout << "\nEnter 2 Numbers to Multiply:\n";
	std::cin >> num1;
	std::cout << "*\n";
	std::cin >> num2;
	
	while (num2 != -1) 
	{	std::cout << "\nThis is Multiples:" << num1 << " * " << num2 << " = " << multiplyNums(num1, num2);
		std::cout << "\nDivided by 2: " << divideMultiples(multiplyNums(num1, num2));
		--num2;
		std::cout << "\nThis is the Decremented Value:\n";
		double decremNum = divideMultiples(multiplyNums(num1, num2));
		if (decremNum != 0)
		{ 	std::cout << decremNum << " ";
			checkDecrement(decremNum);
		}
	}
}