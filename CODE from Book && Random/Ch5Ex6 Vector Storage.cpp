/*
Exercise 5-6. Create a vector<> container with elements containing the integers from
1 to an arbitrary upper bound values by the user. Output the elements from the vector
that contain values that are not multiples of 7 or 13. Output them 10 on a line, aligned
in columns.
*/
#include "pch.h"
#include <iostream>
#include<iomanip>
#include <vector>
using namespace std;

int main()
{
	std::vector<int> values;
	size_t inputNum{};
	std::cout << "This Program prints out numbers that aren't multiples of 7 or 13.\n"
		<< "What is the Biggest Number you want?:\n"
		&& cin >> inputNum;
	size_t nMultiple7{ 7 }, nMultiple13{ 13 };
	size_t oPerline{ 10 }, count{};
	values.push_back(inputNum);
	cout << "Values[] = " << values[0] << endl;
	cout << "14 % 7 = " << 14 % 7 << "\n19 % 7 = " << 19 % 7;
	
	if (values[inputNum] % 7 == '0'
		&& values[inputNum] % 13 != '0')
	{
		cout << "\nA multiple of 7 or 13";
	}
	/*
	for (size_t i{1}; values[i] <= values[inputNum]; inputNum--)
	{		
		if (values[inputNum] % nMultiple7 != 0 
			&& values[inputNum] % nMultiple13 != 0)
		{
			cout << inputNum << (i == inputNum? "":",");
			count++;
			if (count % oPerline == 0)
				cout << endl;
		}
	}
	*/
}
/*
// Exercise 5-6. Working with a vector container
#include <iostream>
#include <iomanip>
#include <vector>

int main()
{
  std::cout << "What is the largest number I should check? ";
  unsigned bound {};
  std::cin >> bound;

  std::vector<unsigned> values;
  // Add element values 1 to bound
  for (unsigned i {1}; i <= bound; ++i)
	values.push_back(i);

  size_t count {};                              // Number of output values
  size_t perline {10};                          // Number output perline
  for (auto value : values)
  {
	if (value % 7 == 0 || value % 13 == 0) continue;
	std::cout << std::setw(6) << value;
	if (++count % perline == 0) std::cout << "\n";
  }
  std::cout << std::endl;
}
*/