#include "Hero.h"

Hero::Hero()
{
	mHealth = 100;
	mPower = rand() % 100 + 1;
	mName = new char[255];
}

void Hero::GetName(const char* name)
{
	mName = name;
}

void Hero::PrintName()
{
	std::cout << mName;
}

void Hero::Fight(Hero* hero)
{
	hero->TakeDamage(mPower);
}

bool Hero::IsAlive()
{
	return mHealth > 0;
}

void Hero::TakeDamage(int amount)
{
	mHealth -= amount;
}

int Hero::GetHealth()
{
	return mHealth;
}

int Hero::GetPower()
{
	return mPower;
}