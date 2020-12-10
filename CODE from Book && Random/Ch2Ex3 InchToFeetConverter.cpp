/*Exercise 2-3. Create a program that converts inches to feet and inches. In case
you’re unfamiliar with imperial units: 1 foot equals 12 inches. An input of 77 inches,
for instance, should thus produce an output of 6 feet and 5 inches. Prompt the user
to enter an integer value corresponding to the number of inches and then make the
conversion and output the result.*/

#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstdlib>

int main()
{
	int inches; 
	std::cout << "Enter an Number of Inches" << std::endl;
	std::cin >> inches;
	std::cout << inches << " Inches = " << std::setprecision(6) << (inches / 12) << " Feet, "
		<< (inches % 12) << " Inches" 
		<< std::endl;


	system("pause");
}