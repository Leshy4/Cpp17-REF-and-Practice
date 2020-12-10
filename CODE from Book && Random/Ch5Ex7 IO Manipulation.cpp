/*Exercise 5-7. Write a program that will read and store an arbitrary sequence of records
relating to products. Each record includes three items of data—an integer product
number, a quantity, and a unit price. For product number 1001, the quantity is 25,
and the unit price is $9.95. Because you do not know yet how to create compound
types, simply use three different array-like sequences to represent these records.
The program should output each product on a separate line and include the total cost.
The last line should output the total cost for all products. Columns should align, so the
output should be something like this:
 Product  Quantity  Unit Price   Cost
  1001       25       $9.95	   $248.75
   9         10		   12		  9
*/
#include "pch.h"
#include <iostream>
#include <iomanip>
#include <vector>

int main()
{
	std::cout << "This Program allows the User to create a Product with a Code / Quantity / Price.\nIt sums up the costs and prints out the total cost\n\n";

	size_t codeInput{}, input{}; double inputPrice{}; size_t entryCount{};
	std::vector<size_t> productCodes, quantities;
	std::vector<double> unitPrices, priceTotal;
	char productEntry{'y'};
	
	while (productEntry == 'y')
	{
		std::cout << "\nPlease Enter a Product Code:\t"
			&& std::cin >> codeInput;
		productCodes.push_back(codeInput);

		std::cout << "\nPlease Enter a Quantity:\t"
			&& std::cin >> input;
		quantities.push_back(input);

		std::cout << "\nPlease Enter a Unit Price:\t"
			&& std::cin >> inputPrice;
		unitPrices.push_back(inputPrice);

		double cost { quantities[entryCount] * unitPrices[entryCount] };
		priceTotal.push_back(cost);
		
		std::cout << std::setw(9) << "\n\nProduct" 
			<< std::setw(10) << "Quantity"
			<< std::setw(12) << "Unit Price"
			<< std::setw(9) << "Cost" << std::endl;

		for (int i{ 0 }; i < productCodes.size(); i++)
		{
			std::cout << std::setw(6) << productCodes[i]
				<< std::setw(10) << quantities[i]				
				<< std::setw(11) << std::fixed << std::setprecision(2) 
				<< unitPrices[i];				
			std::cout << std::right << std::setw(8)
				<< "$" << unitPrices[i] * quantities[i] << std::endl;							
		}

		double totalCost{};
		for (size_t i{}; i < priceTotal.size(); i++)
		{
			totalCost += priceTotal[i];
		}
		std::cout << std::setw(35)
			<< "$" << totalCost << std::endl;

		std::cout << "\n\nWould you like to Enter an additional Product?\tEnter: Y or N\n";
		std::cin >> productEntry;
		entryCount++;
	}

	std::cout << "\n\n\t\t\tThank you for using the Accounting Calculator!\n\n\n\n\n";
}