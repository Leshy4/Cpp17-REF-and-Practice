#pragma once
class Enemy
{
protected:
	double health = 0;
	double attackPower = 0;
public:
	Enemy();
	~Enemy();
	Enemy(double hth, double attk);
	void talk();
};

