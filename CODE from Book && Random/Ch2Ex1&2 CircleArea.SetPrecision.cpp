/*Exercise 2-1. Write a program that will compute the area of a circle. The program
should prompt for the radius of the circle to be entered from the keyboard, calculate the
area using the formula area = pi * radius * radius, and then display the result.*/

#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstdlib>

int main()
{
	//EX 2-1
	double pi{ 3.141592653589793238 };
	double cRadius;
	std::cout << "Enter the Radius of the Circle" << std::endl;
	std::cin >> cRadius;
	double Cdiameter = {cRadius * cRadius};
	double Carea = (pi * Cdiameter);
	std::cout << "\nThe Area of the Circle is " 
		<< std::fixed << std::setprecision(16) << Carea << std::endl;
	
	//EX 2-2

	system("pause");
}