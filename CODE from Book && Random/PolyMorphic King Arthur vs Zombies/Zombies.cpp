#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

int main()
{
	double KingArthursAttackPower{100};
	srand(static_cast<size_t>(std::time(NULL)));	//Random Number Seeder
	std::cout << "Hello, Nephilim! You are about to die!!!\nA Big Zombie Wave Spawns!!!\n"; 
	std::vector<Zombie> zombieList;		//Holds the information for the Zombies
	for (int i{}; i < 10; ++i)
	{	Zombie slowZombie(91 + i, 1 + i);
		zombieList.push_back(slowZombie);	// Puts information into the Zombie List
	}	
	std::cout << "\nThe Gods intervene and kill the whole group of Zombies\n";
		
	Zombie slowZombie1(50, 30);
//	slowZombie1.chargeAtHuman();

	NuclearZombie nuclearZombyEnemy(75 , 40, 12);
	Zombie* explosiveNuclearZombie = &nuclearZombyEnemy;

//	explosiveNuclearZombie->chargeAtHuman();
	std::cout << "\nYou dodge and swing your sword as hard as you can for the Zombie's kneecaps!";
	explosiveNuclearZombie->fallDown();

	NuclearZombie boss{ 100,50,120 };
	std::cout << "\nA HUGE GLOWING ZOMBIE COMES FROM THE DIRT!!!\n";
	Zombie* polyNukeBoss = &boss;
//	polyNukeBoss->chargeAtHuman();

	NuclearZombie testNuke(100, 10, 25);

	Knights King_Arthur(1500, KingArthursAttackPower, 4); //4 attackDMG + 10
	std::cout << "\nKing Arthur gets 20 sneak attacks before the Zombies notice him.\n";
	
	//20 SNEAK ATTACKS -> testNuke , slowZombie1 , explosiveNuclearZombie , polyNukeBoss
	int i{ 0 };
	while (testNuke.health && slowZombie1.health 
		&& explosiveNuclearZombie->health && polyNukeBoss->health || i < 20)
	{
		if (testNuke.health > 0) {
			std::cout << "\nTestNuke's Health is " << testNuke.health << "\t\tTestNuke's Health goes to ";
			testNuke.health -= King_Arthur.attack(); std::cout << testNuke.health;
			++i; 
		}
		else if (slowZombie1.health > 0) {
			std::cout << "\nslowZombie1 Health is "<< slowZombie1.health << ".\tslowZombie1's Health goes to ";
			slowZombie1.health -= King_Arthur.attack(); std::cout << slowZombie1.health;
			++i; 
		}
		else if (explosiveNuclearZombie->health > 0) {
			std::cout << "\nexplosiveNuclearZombie is " << explosiveNuclearZombie->health << ".\texplosiveNuclearZombie's health goes to ";
			explosiveNuclearZombie->health -= King_Arthur.attack(); std::cout << explosiveNuclearZombie->health;
			++i; 
		}
		else if (polyNukeBoss->health > 0) {
			std::cout << "\npolyNukeBoss's Health is " << polyNukeBoss->health << ".\tpolyNukeBoss's Health goes to ";
			polyNukeBoss->health -= King_Arthur.attack(); std::cout << polyNukeBoss->health;
			++i; 
		}
		else break;
	} std::cout << std::endl;
	
	NuclearZombie glowingBoss(1000, 1, 100);
	std::cout << "\n\n\n\nKing Arthur begins to fight a YUGE Zombie!\n\n";
	NuclearZombie* GlowingDeath = &glowingBoss; //Zombie named Glowing Death, who is a boss
	std::cout << "King Arthur draws his sword and charges at Glowing Death!\n";
	
	// Glowing Death VS King Arthur
	while (King_Arthur.health > 0 && GlowingDeath->health > 0)
	{ 
		double bufferGD{ GlowingDeath->health };
		double bufferKA{ King_Arthur.health };
		std::cout << "\nGlowing Death's Health is " << bufferGD;
		if (King_Arthur.health > 0)
		{
			std::cout << ".\tKing Arthur Swings his sword at Glowing Death!\n";
			GlowingDeath->health -= King_Arthur.attack();
			std::cout << "He does " << -1 * (GlowingDeath->health - bufferGD)
				<< " Damage to Glowing Death!\n";
		}
		if (GlowingDeath->health > 0)
		{
			std::cout << "Glowing Death opens his glowing mouth widely!\n";
			King_Arthur.health -= GlowingDeath->bite();
			std::cout << "King Arthur's health is now " << King_Arthur.health;
		}
	}
	
	/**/
	NuclearZombie* GlowingDeath2 = &glowingBoss; //Zombie named Glowing Death, who is a boss
	std::cout << "King Arthur draws his sword and charges at Glowing Death!\n";
	
	// Glowing Death2 VS King Arthur
	while (King_Arthur.health > 0 && GlowingDeath2->health > 0)
	{
		double bufferGD{ GlowingDeath2->health };
		double bufferKA{ King_Arthur.health };
		std::cout << "\nGlowing Death 2's Health is " << bufferGD;
		if (King_Arthur.health > 0)
		{
			std::cout << ".\tKing Arthur Swings his sword at Glowing Death 2!\n";
			GlowingDeath2->health -= King_Arthur.attack();
			std::cout << "He does " << -1 * (GlowingDeath2->health - bufferGD)
				<< " Damage to Glowing Death!\n";
		}	else std::cout << "\nKing Arthur is dead!\n";
		if (GlowingDeath2->health > 0)
		{
			std::cout << "Glowing Death opens his glowing mouth widely!\n";
			King_Arthur.health -= GlowingDeath2->bite();
			std::cout << "King Arthur's health is now " << King_Arthur.health;
		}
		else GlowingDeath2->fallDown();
	}

	std::cout << "\nKing Arthur sees Zombies, he casts a healing spell before battle.\n";
	King_Arthur.healingSpell();


	Zombie littleZombie1(500,1); Zombie littleZombie2(500, 1); 
	Zombie littleZombie3(500, 1); Zombie littleZombie4(500, 1);
	
	std::cout << "The littleZombies and King Arthur begin to fight.\n";
	
		while (littleZombie1.health > 0 || littleZombie2.health > 0
			|| littleZombie3.health > 0 || littleZombie4.health > 0
			&& King_Arthur.health > 0)
		{ 
			if (littleZombie1.health && King_Arthur.health){
			littleZombie1.health -= static_cast<int>(King_Arthur.attack());
			std::cout << "\nLittle Zombie 1's health = " << littleZombie1.health;
			King_Arthur.health -= static_cast<int>(littleZombie1.bite());
			std::cout << "\nThe Zombie Bites King Arthur Leaving his HitPoints at ="
				<< King_Arthur.health;
			}
			else { littleZombie1.fallDown(); King_Arthur.healingSpell(); }

			if (littleZombie2.health && King_Arthur.health) {
			littleZombie2.health -= static_cast<int>(King_Arthur.attack());
			std::cout << "\nLittle Zombie 2's health = " << littleZombie2.health;
			King_Arthur.health -= static_cast<int>(littleZombie2.bite());
			std::cout << "\nThe Zombie Bites King Arthur Leaving his HitPoints at ="
				<< King_Arthur.health;
			}
			else { littleZombie2.fallDown(); King_Arthur.healingSpell(); }

			if (littleZombie3.health && King_Arthur.health) {
				littleZombie3.health -= static_cast<int>(King_Arthur.attack());
				std::cout << "\nLittle Zombie 3's health = " << littleZombie3.health;
				King_Arthur.health -= static_cast<int>(littleZombie3.bite());
				std::cout << "\nThe Zombie Bites King Arthur Leaving his HitPoints at ="
					<< King_Arthur.health;
			}	
			else { littleZombie3.fallDown(); King_Arthur.healingSpell(); }

			if (littleZombie4.health && King_Arthur.health) {
				littleZombie4.health -= static_cast<int>(King_Arthur.attack());
				std::cout << "\nLittle Zombie 4's health = " << littleZombie4.health;
				King_Arthur.health -= static_cast<int>(littleZombie4.bite());
				std::cout << "\nThe Zombie Bites King Arthur Leaving his HitPoints at ="
					<< King_Arthur.health;
			}else { littleZombie4.fallDown(); King_Arthur.healingSpell(); }

			if (King_Arthur.health < 0){std::cout << "\nKing Arthur has died!!!\n";}
			
		}


}