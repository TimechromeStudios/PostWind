#include "Dice.h"

Dice::Dice()
{
}
void Dice::init()
{
    srand(time(NULL));
}
int Dice::d4()
{
	int resultat = rand() % 4 + 1;
	++resultat;
	return resultat;
}
int Dice::d6()
{
	int resultat = rand() % 6 + 1;
	++resultat;
	return resultat;
}
int Dice::d8()
{
	int resultat = rand() % 8 + 1;
	++resultat;
	return resultat;
}
int Dice::d10()
{
	int resultat = rand() % 10 + 1;
	++resultat;
	return resultat;
}
int Dice::d12()
{
	int resultat = rand() % 12 + 1;
	++resultat;
	return resultat;
}
int Dice::d20()
{
	int resultat = rand() % 20 + 1;
	++resultat;
	return resultat;
}
int Dice::d100()
{
	int resultat = rand() % 100;
	++resultat;
	return resultat;
}
int Dice::range(int min, int max)
{
	if (min == max)
	{
		return min;
	}
	//std::cout << max << std::endl;
	int resultat = rand() % (max - min) + min;
	return resultat;
}
