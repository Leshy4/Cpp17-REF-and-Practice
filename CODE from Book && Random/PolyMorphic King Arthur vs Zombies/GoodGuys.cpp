#include "pch.h"
#include "GoodGuys.h"

GoodGuys::GoodGuys(){}
GoodGuys::~GoodGuys(){}
GoodGuys::GoodGuys(double h, double a, double aR)
	: health{ h }, attackDamage{ a }, armorRating{ aR }{};

double GoodGuys::attack() { return attackDamage; };