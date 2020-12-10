#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include <random>

class makeHero
{
public:
	makeHero();
	makeHero(std::string heroName, size_t lifePoints, size_t strengthLvl);
	~makeHero();
private:
	std::string heroName{}, warCry{"maaaayyyyyyhhhhaaaaaaaa"};
	size_t lifePoints, strengthLvl;
	void scream(int howMany) { for (howMany; howMany > 0; --howMany) std::cout << warCry;}
};

void makeHero() {std::cout << "\t\t\tA Hero was Born!\n";}
makeHero::makeHero(std::string heroName, size_t lifePoints, size_t strengthLvl)
{	std::cout << "\t\t\tEnter Your Hero's Name: " && std::cin >> this->makeHero::heroName;
	std::cout << "\n\t\t\tEnter Your Hero's Life Points: " && std::cin >> this->makeHero::lifePoints;
	std::cout << "\n\t\t\tEnter Your Hero's Strength Level: " && std::cin >> this->makeHero::strengthLvl;
	std::cout << "\t\t\tKamayha";
	makeHero::scream(40);
	std::cout << "\t\t\t";
	system("pause");
}
makeHero::~makeHero() { std::cout << "Your hero is old and now dead!\n"; }

int main()
{
	makeHero();
	makeHero::makeHero("Thor", 100, 50);
	// ~makeHero();
	//makeHero.scream();
}