#include "pch.h"
#include "DeadlyDog.h"
#include <iostream>


DeadlyDog::DeadlyDog() { std::cout << "\nA Demonic Dog comes up from the ground, out of Flames. Growling at you..."; }
DeadlyDog::~DeadlyDog() { std::cout << "\nThe Dog goes to Hell, to return some other day... Whooosh\n"; }
void DeadlyDog::bite() { std::cout << "\nDemon Dog Bites you!"; }
void DeadlyDog::getAge() { std::cout << "\nThe Eternal Dog has always been alive\n"; };