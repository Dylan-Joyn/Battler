#pragma once
#ifndef DIE_H
#define DIE_H
#include <iostream>
using namespace std;

class Die
{
private:
	int faceValue;
	int sides;
public:
	Die(int sides =6);
	void roll();
	int getFaceValue() const;
	int getSides() const;
};

#endif

