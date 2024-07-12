#include "Attribute.h"
#include "Die.h"

Attribute::Attribute() {
	Die die1, die2, die3;
	baseScore = die1.getFaceValue() + die2.getFaceValue() + die3.getFaceValue();
	currentScore = baseScore;
}
Attribute::Attribute(string name) : name(name) {
	Die die1, die2, die3;
	baseScore = die1.getFaceValue() + die2.getFaceValue() + die3.getFaceValue();
	currentScore = baseScore;
}



string Attribute::getName() const {
		return name;
}
void Attribute::setName(string name) {
		this->name = name;
}
int Attribute::getScore()const {
	return currentScore;
}
void Attribute::modifyScore(int mod) {
	currentScore += mod;
}
int Attribute::getModifier()const {
	return (currentScore - 10) / 2;
}
void Attribute::resetCurrentScore() {
	currentScore = baseScore;
}
