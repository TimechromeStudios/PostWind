#include "Dice.h"

Dice::Dice()
{
}
int Dice::d20()
{
	srand(time(0));
	int resultat = rand() % 20;
	++resultat;
	return resultat;
}
int Dice::d100()
{
	srand(time(0));
	int resultat = rand() % 100;
	++resultat;
	return resultat;
}