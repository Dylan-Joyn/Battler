#include "Die.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;


Die::Die(int sides) : sides(sides) {
    srand(static_cast<unsigned int>(time(0)));
    roll();
}

void Die::roll() {
    faceValue = rand() % sides + 1;
}

int Die::getFaceValue() const {
    return faceValue;
}

int Die::getSides() const {
    return sides;
}