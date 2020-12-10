#include "pch.h"
#include <iostream>
#include <memory>
#include <vector>
int main()
{	size_t vectorSize{ };
	std::cout << "Vector size = " 
		&& std::cin >> vectorSize;
	size_t vecCount{};
	size_t vecPointee{};
	size_t perLine{ 10 };
	std::vector<size_t> values;
	auto vecPoint{ std::make_shared<size_t>(vecPointee) };
	for (size_t i{}; vecCount < vectorSize; ++i)
	{	if (i % 2 != 0)
		{	values.push_back(i);
	   		std::cout << values[vecCount] << (vecCount == vectorSize - 1? "" : ", ");
			++vecCount;
			if (vecCount % perLine == 0) std::cout << "\n";
		}			
	}//////////	
	std::cout << "\n\t\t\t\t\tThe Double Counter\n\n\n";
	for (*vecPoint; *vecPoint < vecCount; ++*vecPoint)
	{	std::cout << values[*vecPoint] << (*vecPoint == vecCount? " " : ", ");
		if (*vecPoint % perLine == 9) std::cout << std::endl;
	}
	////////////////////////////////////////////
	size_t rando{ 15 };
	auto* numPoint{ &rando };
	size_t& refPoint = *numPoint;
	std::cout << "\n" << numPoint 
		<< "\n" << *numPoint
		<< "\nrefPoint = " << refPoint
		<< "\nrefPoint + (*numPoint) = " << refPoint + *numPoint
		<< "\n&rando = " << &rando << "\n";		///////////////////////////
	for (size_t counter{ values.size() - 1 }; counter != -1; --counter)
	{	std::cout << values[counter] << (!counter? "" : ", ");
		if (counter % perLine == 0) std::cout << "\n";
	}
}