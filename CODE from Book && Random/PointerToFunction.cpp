#include "pch.h"
#include <iostream>
#include <memory>

void saySomething();
void saySomethingElse();

int main()
{
	void(*funcPointer)(){nullptr};	// Initializing Pointer
	funcPointer = &saySomething;	//	Pointer to a Function
	funcPointer();					//	Use Function

	funcPointer =  &saySomethingElse; // Pointer to Another Function
	funcPointer();					 // Use Other Function
}

void saySomething()  { std::cout << "Say Something" << std::endl; }
void saySomethingElse() { std::cout << "Say Something Else" << std::endl; }