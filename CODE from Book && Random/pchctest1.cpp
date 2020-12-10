#include <iostream>
size_t getMemory();
size_t printMemory(size_t numToss);

size_t main(size_t rNum)
{
	if (rNum) std::cout << rNum << "\n";
	std::cout << "Enter a Number to toss around: ";	
	getMemory();
	printMemory(rNum);
}
size_t getMemory() 
{	size_t keystoneNum{ 5 };
	size_t* numToss{&keystoneNum};
	size_t& rNum{ *numToss };
	//std::cout << "\n\Stop Here?n";
	std::cin >> rNum;
	size_t *pNum{ &rNum };	
	std::cout << "\n" << rNum << "\n";
	return rNum;
}
size_t printMemory(size_t numToss)
{	std::cout << "\n\t\t" << numToss;
	return numToss;
}