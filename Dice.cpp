#include <iostream>
#include "Dice.h"
#include <ctime>
#include <cstdlib>
using namespace std;

Dice::Dice(int Sides)
{
	sides = Sides;
	srand(time(NULL));
}

int Dice::Roll()
{
	roll = rand() % sides +1;
	static int rollsCounter = 0;
	rollsCounter++;
	rolls = rollsCounter;
	return roll;
}

int Dice::getRolls()
{
	return rolls;
}

int Dice::getSides()
{
	return sides;
}
