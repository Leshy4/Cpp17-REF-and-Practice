#include "pch.h"
#include <iostream>
#define DEFINE_PRINT_FUNCTION(NAME, COUNT, VALUE) \
void NAME##COUNT() { std::cout << #VALUE << std::endl; }
DEFINE_PRINT_FUNCTION(fun, 123, Test 1 "2" 3)
int main()
{
	fun123();
	std::vector<std::string> string{"Here are words"};
	string.resize(10);
}
