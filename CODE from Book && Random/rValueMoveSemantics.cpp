#include "pch.h"
#include <iostream>

template <typename T>
T& overloadFunction(T);

template <typename T>
T&& overloadFunction(T);	// Rvalue Overload

int main()
{
	int numberToTest{ 10 };
	int* refToTest{ &numberToTest };
	int&& rValueNum{ *refToTest + 50 };
    std::cout << "Hello World!\n";
	std::cout << overloadFunction(int)( rValueNum );
}

template <typename T>
T& overloadFunction(T) {return T + 50;};

template <typename T>	// Rvalue Overload
T&& overloadFunction(T){return T + 100;};