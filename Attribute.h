#pragma once
#ifndef ATTRIBUTE_H
#define ATTRIBUTE_H
#include <iostream>
#include<string>
#include "Die.h"
using namespace std;

class Attribute
{
private:
	string name;
	int baseScore;
	int currentScore;
public:
	Attribute();
	Attribute(string name);
	Attribute(string name, int value);
	void setName(string name);
	string getName() const;
	int getScore() const;
	void modifyScore(int mod);
	int getModifier()const;
	void resetCurrentScore();
};
#endif

