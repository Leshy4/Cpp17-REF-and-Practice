#pragma once
#include "Mother.h"
#include "pch.h"
class DeadlyDog : public Mother
{
public:
	DeadlyDog();
	~DeadlyDog();
	void bite();
	void getAge();
};