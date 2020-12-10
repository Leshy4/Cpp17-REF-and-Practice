//In Theory: Stores a Blueprint inside vector sizesBlue
//3d Printer:12,6,6 Prints out 12,6,5 and then pulls up printer head from output. 
#include "pch.h"
#include <iostream>
#include <iomanip>
#include <vector>

int main()
{	
	size_t inputsL, inputsW, inputsH;	//x,y,z for 3D ///legoBlock == 12L,6W,6H  
	std::cout << "Enter 12L,6W,7H for 3D Legoblock of 12L x 6W x 6H:\nEnter Length:"
		&& std::cin >> inputsL;
	std::cout << "\nEnter Width:"
		&& std::cin >> inputsW;
	std::cout << "\nEnter heighth:"
		&& std::cin >> inputsH;
	std::vector<size_t> sizesBlue;		//Holds Blueprint
	
	size_t inputLoader{};
		for (size_t h{0}; h < inputsH + 1; ++h) //1 Level of Printing up to the Top Height
		{		sizesBlue.push_back(inputsL);
				sizesBlue.push_back(inputsW);
				if (h != inputsH ) sizesBlue.push_back(h);	
				std::cout << "\nLength = " << inputsL
					<< "\nWidth = " << inputsW
					<< "\nHeight = " << h;
		}
		std::cout << "\n\t\t\t\t\tSizes in Blueprint in Inches: \n";

		for (int i{}; i < sizesBlue.size(); ++i)
		{
			std::cout << "Sizes = " << std::setw(9) << std::left << sizesBlue[i];
			if (i % 3 == 0) std::cout << "\n";
		}

		int pntrShow[3]{0,1,2};
		std::cout << "\n\n\nSizes in Blueprint: 0 = " << sizesBlue[0]
			<< "\nUsing Pointer Notation: " << *(pntrShow + 2)
			<< "\n2 * (2+5) = 14\n"
			<< *(pntrShow + 2) << " * "
			<< *(pntrShow + 2) + 5 << " = "
			<< *(pntrShow + 2) * (*(pntrShow + 2) + 5) << "\n\n";
}
/*
const char* pstars[]{ "Fatty Arbuckle", "Clara Bow",
   "Lassie", "Slim Pickens",   "Boris Karloff", "Mae West",
   "Oliver Hardy", "Greta Garbo"};
std::cout << "Pick a lucky star! Enter a number between 1 and "
		<< std::size(pstars) << ": ";
size_t choice{};
std::cin >> choice;
if (choice >= 1 && choice <= std::size(pstars))
	std::cout << "Your lucky star is " << pstars[choice - 1] << std::endl;
else
	std::cout << "Sorry, you haven't got a lucky star." << std::endl;

	
	size_t input{};
	const char* heros[]{"Iron Man", "Iron Man 2" , "Iron Man 3" };
		std::cout << "Enter a Number between 0-2:\n"
		&& std::cin >> input;
		std::cout << heros[input];

	size_t input1{5};
	size_t* num[]{ &input1 };
	std::cout << "\nInput Address = "
		<< num
		<< "\nSize of heros: " << sizeof(heros) << " Bytes";
	
	*/


