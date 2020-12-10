#include "pch.h"
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <cstring>
#include <vector>

int generateRandom();
void randomLogger();
void getPrimeNumbers();


int main()
{	
	srand(static_cast<unsigned int>(std::time(0)));  // Seed Random Numbers
	randomLogger();									//Uncomment when finished
	//getPrimeNumbers();
}


int generateRandom(){return (rand() % 10) + 1;}; // Random Number 1-10

void randomLogger()
{	int numberOfRandoms{1000};
	std::vector<int> randomNumList{};
	int lowHits{}, goodHits{}, crits{};
	for (int i{}; i < numberOfRandoms; ++i)
	{
		int randomNum{ generateRandom() };
		randomNumList.push_back(randomNum);
		std::cout << std::setw(2) << randomNum;
		switch (randomNum)
		{
		case 1: case 2: case 3: case 4:
			std::cout << "-Low Hit\n";
			++lowHits;
			break;
		case 5: case 6: case 7:
			std::cout << "-Good Hit\n";
			++goodHits;
			break;
		case 8: case 9: case 10:
			std::cout << "-Critical Hit!!\n";
			++crits;
			break;
		default:
			break;
		}
	}
	double critPercentage{ static_cast<double>(crits) / (randomNumList.size() / 100) };
	std::cout << "\n\nLow Hits = " << lowHits << "\nGood Hits = " << goodHits
		<< "\nCrits = " << crits;
	std::cout << "\n" << critPercentage << "% Critical Hits\nThe Deviation from perfect statistics: "
		<< (critPercentage > 30 ? (critPercentage - 30) : (30 - critPercentage) )
		<< "%\n";

	for (auto x : randomNumList) {
		std::cout << std::setw(3) << x << "-"; if (x % 20 == 0) std::cout << std::endl;
	}
};

void getPrimeNumbers()
{	size_t selection{};
	std::cout << "\n\nHow many Prime Numbers do you want? "
		&& std::cin >> selection;
	std::vector<size_t> primeList;
	size_t numberOfPrimes{};		
	bool isPrime{};

	for (size_t primeTry{1}; numberOfPrimes < selection;)
	{	if (static_cast<double>(primeTry % 2) > 0)		// if Not Divisible by 2 // try the list
		{
			std::cout << "\n" << primeTry << " isn't divisible by 2.\n";
			for (size_t j{}; j != primeList.size(); j++)	// Iterate primeList
			{
				if (static_cast<double>(primeTry % primeList[j]) > 0) isPrime=false;
				else isPrime = true ;
			};
			if (isPrime == true) { primeList.push_back(primeTry); numberOfPrimes++; }
		}	
	
	else primeTry + 2;	//Try Another 

	};

	std::cout << "\n\n";
	for (int x : primeList) {std::cout << primeList[x] << " "; if (primeList[x] % 20 == 0)std::cout << std::endl;}
};