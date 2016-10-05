#pragma once

using namespace std;

class Dice 
{
private:
	int sides;
	int roll;
	int rolls;
public:
	Dice(int Sides);

	int Roll();

	int getRolls();

	int getSides();

};