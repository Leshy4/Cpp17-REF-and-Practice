////********** A Small Text-Based Game of PLAY BATTLESHIPS ***********************************
// Each Player enters their location of 5 battleships, 
// in the range of 0-25, and then the players take shoot at each others battleships.
// The shooter gets to shoot until they miss and then it's the next players turn.
// Player who destroys all the other players battleships, win!!! =)
//
// NOTE: Entering Letters Break the Game. Buggy Code Line 47-53

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <cctype>

int main()
{	unsigned int battleShipsP1[5], battleShipsP2[5];
	int battleShipsLocation{};
	int ShipCountP1{ 5 };
	int ShipCountP2{ 5 };
	int countBuffer{};
/////////INITIAL SCREEN------------------------------------------------------------------------------------------
	std::cout << "\t\t\t\t\tPLAY BATTLESHIPS\n\t\t\tBattleships will be placed at the Location numbers you assign\n\n\tPLAYER ONE:\n\tEnter 5 Battleship Locations between 0 - 25\n";
////////////////////GETS P1 BATTLESHIPS------------------------------------------------------------------------------------------
	for (size_t i{ 0 }; i < 5; i++)
	{
		std::cin >> battleShipsLocation;
		countBuffer++;

		//Prevents Numbers Outside of range 0-25
		if (battleShipsLocation < 0 || battleShipsLocation > 25)
		{
			do {
				std::cout << "\nInvalid Number! ReEnter your Battleship place between 0 - 25.\n"
					&& std::cin >> battleShipsLocation;
			} 
			while (battleShipsLocation < 0 || battleShipsLocation > 25);
		}
		//Prevents Duplicate values
				if (battleShipsLocation == battleShipsP1[!i] )
				{	
					do
					{
						std::cout << "ReEnter a Different Battleship place between 0 - 25.\n"
							&& std::cin >> battleShipsLocation;
					}
					while (battleShipsLocation == battleShipsP1[!countBuffer]);						
				}
		/*
		if (battleShipsLocation != int (battleShipsLocation >= 0 && battleShipsLocation <= 25)  )
		{			
			std::cout << "\nNot a Number! ReEnter your Battleship place between 0 - 25.\n"
				&& std::cin >> battleShipsLocation;
		}
		*/
		battleShipsP1[i] = battleShipsLocation;
		//SHOWS OUTPUT
		std::cout << "Battleship # " << i+1  << " has been placed at Location #" << battleShipsLocation << std::endl;
	}

/////////////////////NEW SCREEN------------------------------------------------------------------------------------------
	std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	std::cout << "\t\t\t\t\tPLAY BATTLESHIPS\n\t\t\tBattleships will be placed at the Location numbers you assign\n\n\tPLAYER TWO:\n\tEnter 5 Battleship Locations between 0 - 25\n\n\n\n\n\n\n\n\n\n\n\n";
//////////////GETS P2 BATTLESHIPS---------------------------------------------------------------------------
	for (size_t i{ 0 }; i < 5; i++)
	{
		std::cin >> battleShipsLocation;
		// Prevents Numbers Outside of range 0-25
		if (battleShipsLocation < 0 || battleShipsLocation > 25)
		{
			do {
				std::cout << "\nInvalid Number! ReEnter your Battleship place between 0 - 25.\n"
					&& std::cin >> battleShipsLocation;
			} 
			while (battleShipsLocation < 0 || battleShipsLocation > 25);
		}
		// Prevents Duplicate values
		if (battleShipsLocation == battleShipsP2[!countBuffer])
		{
			do
			{
				std::cout << "ReEnter a Different Battleship place between 0 - 25.\n"
					&& std::cin >> battleShipsLocation;
			} 
			while (battleShipsLocation == battleShipsP1[!countBuffer]);
		}
		battleShipsP2[i] = battleShipsLocation;
		// SHOWS OUTPUT
		std::cout << "Battleship # " << i + 1 << " has been placed at Location #" << battleShipsLocation << std::endl;
	}

//*************ATTACK PHASE. Take Turns Shooting Each Others Ships.*************************************/
//----------------------------------------------------------------------------------------
/////////////////////NEW SCREEN------------------------------------------------------------------------------------------
	std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	std::cout << "\t\t\t\t\tTime to ATTACK!!!\n\t\t\tEnter A Battleship Locations between 0 - 25\n";
/////////////////////Take Turns Shooting Ships------------------------------------------------------------------------------------------	
	auto p1Msg = "\n\n\t\t\tPLAYER 1: Enter a Location to shoot a missle 0-25: ";
	auto p2Msg = "\n\n\t\t\tPLAYER 2: Enter a Location to shoot a missle 0-25: ";
	auto missedMsg = "\n\n\t\t\tYOU MISSED!!!\n\t\t\tLOSE YOUR TURN!!!\n"; //\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n
	auto hitMsg = "\n\t\t\tYOU HIT!!! Enemy Ship Down at Location: ";
	auto winnerMsg = "YOU HAVE SANK ALL OF THE OPPONENTS BATTLESHIPS!!!\nCONGRATULATIONS!!!\nYOU WIN!!!";
	int pTurn{ 1 };
	
	size_t guessC1{}, guessC2{}, guessCbuffer{};
	size_t guessInd1[1000], guessInd2[1000];

//ALL TURNS*******************************************************************************
	do {
//PLAYER 1 TURN*************************************************************************
		do
		{	
			if (guessC1 != 0)
				std::cout << "\nPLAYER 1:\nPrevious " <<  ( guessC1 == 1 ? "Guess: " : "Guesses: ");			
			if (guessC1 != 0)
			{
				guessCbuffer = guessC1;
				while (guessCbuffer > 0)
				{
					std::cout << guessInd1[guessCbuffer] << ( guessCbuffer == 1 ? "":",") << " ";
					guessCbuffer--;
				}				
				std::cout << std::endl;
			}
			std::cout << p1Msg;
			guessC1++;
			std::cin >> battleShipsLocation;
			guessInd1[guessC1] = battleShipsLocation;
			std::cout << std::endl;

			if (battleShipsLocation == battleShipsP2[0])
			{
				battleShipsP2[0] = 0;
				--ShipCountP2;
				std::cout << hitMsg << battleShipsLocation << std::endl;
				std::cout << "Player 2 has " << ShipCountP2 << " Battleships left.\n";
				if (ShipCountP2 == 0)
				{
					std::cout << std::setw(30) << std::setfill('*') << "PLAYER 1 WINS\n\n\n" << winnerMsg;
					return 0;
				}
				std::cout << p1Msg;
				std::cout << std::endl;
				std::cin >> battleShipsLocation;
				++guessC1;
				guessInd1[guessC1] = battleShipsLocation;
			}
			if (battleShipsLocation == battleShipsP2[1])
			{
				battleShipsP2[1] = 0;
				--ShipCountP2;
				std::cout << hitMsg << battleShipsLocation << std::endl;
				std::cout << "Player 2 has " << ShipCountP2 << " Battleships left.\n";
				if (ShipCountP2 == 0)
				{
					std::cout << std::setw(30) << std::setfill('*') << "PLAYER 1 WINS\n\n\n" << winnerMsg;
					return 0;
				}
				std::cout << p1Msg;
				std::cin >> battleShipsLocation;
				++guessC1;
				guessInd1[guessC1] = battleShipsLocation;
			}
			if (battleShipsLocation == battleShipsP2[2])
			{
				battleShipsP2[2] = 0;
				--ShipCountP2;
				std::cout << hitMsg << battleShipsLocation << std::endl;
				std::cout << "Player 2 has " << ShipCountP2 << " Battleships left.\n";
				if (ShipCountP2 == 0)
				{
					std::cout << std::setw(30) << std::setfill('*') << "PLAYER 1 WINS\n\n\n" << winnerMsg;
					return 0;
				}
				std::cout << p1Msg;
				std::cin >> battleShipsLocation;
				++guessC1;
				guessInd1[guessC1] = battleShipsLocation;
			}
			if (battleShipsLocation == battleShipsP2[3])
			{
				battleShipsP2[3] = 0;
				--ShipCountP2;
				std::cout << hitMsg << battleShipsLocation << std::endl;
				std::cout << "Player 2 has " << ShipCountP2 << " Battleships left.\n";
				if (ShipCountP2 == 0)
				{
					std::cout << std::setw(30) << std::setfill('*') << "PLAYER 1 WINS\n\n\n" << winnerMsg;
					return 0;
				}
				std::cout << p1Msg;
				std::cin >> battleShipsLocation;
				++guessC1;
				guessInd1[guessC1] = battleShipsLocation;
			}
			if (battleShipsLocation == battleShipsP2[4])
			{
				battleShipsP2[4] = 0;
				--ShipCountP2;
				std::cout << hitMsg << battleShipsLocation << std::endl;
				std::cout << "Player 2 has " << ShipCountP2 << " Battleships left.\n";
				
				if (ShipCountP2 == 0)
				{
					std::cout << std::setw(30) << std::setfill('*') << "PLAYER 1 WINS\n\n\n" << winnerMsg;
					return 0;
				}

				std::cout << p1Msg;
				std::cin >> battleShipsLocation;
				++guessC1;
				guessInd1[guessC1] = battleShipsLocation;
			}
			std::cout << missedMsg;
			pTurn += 1;
		} 
		while (pTurn == 1 && ShipCountP2 > 0);

//PLAYER 2 TURN****************************************
		do
		{	
			if (guessC2 != 0)
				std::cout << "\nPLAYER 2:\nPrevious " << (guessC2 == 1 ? "Guess: " : "Guesses: ");
			if (guessC2 != 0)
			{
				guessCbuffer = guessC2;
				while (guessCbuffer > 0)
				{
					std::cout << guessInd2[guessCbuffer] << (guessCbuffer == 1 ? "" : ",") << " ";
					guessCbuffer--;
				}
				std::cout << std::endl;
			}
			std::cout << p2Msg;
			guessC2++;
			std::cin >> battleShipsLocation;
			guessInd2[guessC2] = battleShipsLocation;
			std::cout << std::endl;

			if (battleShipsLocation == battleShipsP1[0])
			{
				battleShipsP1[0] = 0;
				--ShipCountP1;
				std::cout << hitMsg << battleShipsLocation << std::endl;
				std::cout << "Player 1 has " << ShipCountP1 << " Battleships left.\n";	
				if (ShipCountP1 == 0)
				{
					std::cout << std::setw(30) << std::setfill('*') << "PLAYER 2 WINS\n\n\n" << winnerMsg;
					return 0;
				}
				std::cout << p2Msg;
				std::cout << std::endl;
				std::cin >> battleShipsLocation;
				++guessC2;
				guessInd2[guessC2] = battleShipsLocation;
			}
			if (battleShipsLocation == battleShipsP1[1])
			{
				battleShipsP1[1] = 0;
				--ShipCountP1;
				std::cout << hitMsg << battleShipsLocation << std::endl;
				std::cout << "Player 1 has " << ShipCountP1 << " Battleships left.\n";
				if (ShipCountP1 == 0)
				{
					std::cout << std::setw(30) << std::setfill('*') << "PLAYER 2 WINS\n\n\n" << winnerMsg;
					return 0;
				}
				std::cout << p2Msg;
				std::cout << std::endl;
				std::cin >> battleShipsLocation;
				++guessC2;
				guessInd2[guessC2] = battleShipsLocation;
			}
			if (battleShipsLocation == battleShipsP1[2])
			{
				battleShipsP1[2] = 0;
				--ShipCountP1;
				std::cout << hitMsg << battleShipsLocation << std::endl;
				std::cout << "Player 1 has " << ShipCountP1 << " Battleships left.\n";
				if (ShipCountP1 == 0)
				{
					std::cout << std::setw(30) << std::setfill('*') << "PLAYER 2 WINS\n\n\n" << winnerMsg;
					return 0;
				}
				std::cout << p2Msg;
				std::cout << std::endl;
				std::cin >> battleShipsLocation;
				++guessC2;
				guessInd2[guessC2] = battleShipsLocation;
			}
			if (battleShipsLocation == battleShipsP1[3])			{
				battleShipsP1[3] = 0;
				--ShipCountP1;
				std::cout << hitMsg << battleShipsLocation << std::endl;
				std::cout << "Player 1 has " << ShipCountP1 << " Battleships left.\n";				
				if (ShipCountP1 == 0)
				{
					std::cout << std::setw(30) << std::setfill('*') << "PLAYER 2 WINS\n\n\n" << winnerMsg;
					return 0;
				}
				std::cout << p2Msg;
				std::cout << std::endl;
				std::cin >> battleShipsLocation;
				++guessC2;
				guessInd2[guessC2] = battleShipsLocation;
			}
			if (battleShipsLocation == battleShipsP1[4])
			{
				battleShipsP1[4] = 0;
				--ShipCountP1;
				std::cout << hitMsg << battleShipsLocation << std::endl;
				std::cout << "Player 1 has " << ShipCountP1 << " Battleships left.\n";
				if (ShipCountP1 == 0)
				{
					std::cout << std::setw(30) << std::setfill('*') << "PLAYER 2 WINS\n\n\n" << winnerMsg;
					return 0;
				}
				std::cout << p2Msg;
				std::cout << std::endl;
				std::cin >> battleShipsLocation;
				++guessC2;
				guessInd2[guessC2] = battleShipsLocation;
			}
			std::cout << missedMsg;
			pTurn -= 1;
		} while (pTurn == 2 && ShipCountP1 > 0);
	} while (ShipCountP1 > 0 || ShipCountP2 > 0);

}