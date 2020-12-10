#include "pch.h"
#include "Enemy.h"
#include <iostream>

Enemy::Enemy(){}
Enemy::~Enemy(){}
Enemy::Enemy(double hth, double attk) 
	: health {hth}, attackPower{attk}{/*std::cout << "\nEnemy Created with "<< health << " Health & "	<< attackPower <<" Attack Power";*/};

void Enemy::talk() { std::cout << "\nI am an Enemy of all Humans!!"; };