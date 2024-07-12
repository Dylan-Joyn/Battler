#pragma once
#ifndef DIE_H
#define DIE_H
#include <iostream>
using namespace std;

class Die
{
private:
	int faceValue;
	const int SIDES =6;
public:
	Die();
	void roll();
	int getFaceValue() const;
	int getSides() const;
};

#endif

