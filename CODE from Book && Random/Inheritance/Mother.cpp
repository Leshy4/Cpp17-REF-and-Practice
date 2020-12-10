#include "pch.h"
#include "Mother.h"
#include <iostream>

Mother::Mother(int ageInitialized) : age{ ageInitialized } { std::cout << "MoMMy D34R35t was created!\n"; }
Mother::Mother() {age=45; std::cout << "MoMMy D34R35t was created!\n";}
Mother::~Mother() { std::cout << "\nMother's Program Terminating.... Booop"; }
int Mother::setAge(int ageInput){return this->age = ageInput; }
void Mother::getAge() { std::cout << "I am Robot Dearest and I am " 
									<< age << " years old.\n"; }