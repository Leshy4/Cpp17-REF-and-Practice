#include "pch.h"
#include "Math.h"

Math::Math(){}
Math::~Math(){}
int Math::setNumbers(int number1, int number2)	{return num1 = number1, num2 = number2;}

int Math::multiplyNums()	{return num1 * num2;}
int Math::divideNums()		{return num1 / num2;}