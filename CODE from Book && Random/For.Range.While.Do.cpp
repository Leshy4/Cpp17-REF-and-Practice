
#include "pch.h"
#include <iostream>
#include <cmath>
#include <cctype>

int main()
{
	unsigned int array1[]{ 0,1,2,3,4,5,6,7,8,9 };
	unsigned int emptyArray[10]{};
	int values;

	std::cout << "This is a Ranged-based For Loop that Copies " 
		<< "Array Values to an Empty Array\n";
	for (int values : array1)
	{	emptyArray[values] = array1[values];
		std::cout << emptyArray[values] << " = emptyArray, Value = " << values << std::endl;
		
		if (array1[values] + emptyArray[values] == 6){	
			std::cout << "These Values = 6\n"
			<< values << " & " << values << std::endl; 		
		}
	}
	
	std::cout << "This is a While Loop, adds Arrays[aCount]+Array[aCount]; aCount++";
		long long sum{};
		std::cout << "\nSum = " << sum << "\n\n";
		unsigned long long aCount{ 0 };
		while ( emptyArray[aCount] != emptyArray[10] && array1[aCount] != array1[10])
		{				
			sum += (emptyArray[aCount] + array1[aCount]);
			std::cout << aCount << " Sum = " << sum << std::endl;
			aCount++;			

			/*do {//if ( std::cout == true)
				//	{std::cout << "COUT ANALYZER: You are Talking!!" << std::endl;}
					std::cout << "\nThe Do-While Loop" << std::endl;
				 } while (emptyArray[values] < 10);*/
		}
	return 0;
}