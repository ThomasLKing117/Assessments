#pragma once
#include <iostream>
#include <string>
#include <cstdlib> 
#include <ctime> 
#include <string>

class Hero
{
private:
	int mHealth;
	int mPower;
	const char* mName;
public:
	Hero();
	void GetName(const char*);
	void PrintName();
	void Fight(Hero*);
	bool IsAlive();
	void TakeDamage(int);
	int GetHealth();
	int GetPower();
};