// Battler.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
In a separate project/solution attached to a repository called "Battler", create a Die class and an Attribute class.  Both of these should be split into their .h class specification files and .cpp class implementation files.
Die:  should a constant int SIDES, and an int faceValue.  It should also have a getSides, getFaceValue, roll() and a default constructor that rolls the dice to initialize its faceValue.
Attribute should have a string name, an int baseScore, int currentScore.
It should have functions:
string getName(),
void setName(string name),
int getScore(),
void modifyScore(int mod),  should modify currentScore by adding mod.
int getModifier().  Should return the (currentScore - 10) / 2
void resetCurrentScore()   should return currentScore to baseScore
a default constructor that initializes the baseScore by "rolling" three dice and adding their faceValues.  The currentScore should initially be a copy of the baseScore.
*/

#include <iostream>
#include "Attribute.h"
#include "Die.h"
using namespace std;

int main()
{
    
    Attribute attr;
    attr.resetCurrentScore();
    attr.modifyScore(5);

    cout << "Initial score: " << attr.getScore() << endl;
    cout << "Score after modification: " << attr.getScore() << endl;
    cout << "Modifier: " << attr.getModifier() << endl;
    cout << "Score after reset: " << attr.getScore() << endl;
}


