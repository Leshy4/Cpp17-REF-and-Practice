/*Exercise 2-5. Your body mass index 
(BMI) is your weight, w, in kilograms 
divided by the square of your height, h, in meters 
(w/(h*h)). Write a program to calculate the BMI
from a weight entered in pounds and a height entered in feet and inches. A kilogram is
2.2 pounds, and a foot is 0.3048 meters.*/

#include<iostream>
#include<cmath>
#include<cstdlib>

int main()
{
	//Get Weight & Convert to Kilograms
	double lbsW;				//LbsWeight
	std::cout << "Enter Your Weight in Lbs:\n" && std::cin >> lbsW;
	double w{ lbsW / 2.2 };	//Convert Weight to Kilograms (2.2lbs)


	//Get Height in Feet ONLY
	double heightF;	//HeightFeet
	double heightI;	//HeightInches
	std::cout << "Enter Your Height in Feet / Inches:\n"
		&& std::cin >> heightF
		&& std::cin >> heightI;
	double heightTF{ (heightI / 12) + heightF };

	//Height (H) into Meters	//foot is 0.3048 meters.
	double h{ heightTF*0.3048 };

	//BMI Calc (w/(h*h)).
	double BMI{ w / (h*h) };

	//OUTPUT Height / Weight / BMI
	std::cout << "Your Height in Meters: " << h << " m"
		<< "\nYour Weight in Kilograms: " << w << " kg"
		<< "\nYour BMI Index is: " << BMI << std::endl;

	system("pause");
}