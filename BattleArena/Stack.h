#pragma once
#include "Hero.h"
class Stack
{
private:
	Hero mData[6];
	int mCount = 0;
public:
	Hero Top();
	bool pop();
	bool push(Hero*);
	bool isEmpty();
	bool isFull();
};