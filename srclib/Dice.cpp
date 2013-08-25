#include "Dice.h"

Dice::Dice()
{
}
int Dice::d4()
{
	srand(time(0));
	int resultat = rand() % 4;
	++resultat;
	return resultat;
}
int Dice::d6()
{
	srand(time(0));
	int resultat = rand() % 6;
	++resultat;
	return resultat;
}
int Dice::d8()
{
	srand(time(0));
	int resultat = rand() % 8;
	++resultat;
	return resultat;
}
int Dice::d10()
{
	srand(time(0));
	int resultat = rand() % 10;
	++resultat;
	return resultat;
}
int Dice::d12()
{
	srand(time(0));
	int resultat = rand() % 12;
	++resultat;
	return resultat;
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