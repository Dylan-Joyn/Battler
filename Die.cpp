#include "Die.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;


Die::Die()
{
	srand(static_cast<unsigned int>(time(0)));
	roll();
}

int Die::getSides() const {
	return SIDES;
}

int Die::getFaceValue() const{
	return faceValue;
}
void Die::roll() {
	faceValue = rand() % SIDES + 1;
}