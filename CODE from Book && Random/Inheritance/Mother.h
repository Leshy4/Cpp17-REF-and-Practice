#include "pch.h"
#pragma once
class Mother
{
private:
	int age;
public:
	Mother();
	Mother(int ageInitialized);
	~Mother();
	int setAge(int ageInput);
	void getAge();
};