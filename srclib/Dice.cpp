#include "Dice.h"

Dice::Dice()
{
}
void Dice::init()
{
    srand(time(0));
}
int Dice::d4()
{
	int resultat = rand() % 4;
	++resultat;
	return resultat;
}
int Dice::d6()
{
	int resultat = rand() % 6;
	++resultat;
	return resultat;
}
int Dice::d8()
{
	int resultat = rand() % 8;
	++resultat;
	return resultat;
}
int Dice::d10()
{
	int resultat = rand() % 10;
	++resultat;
	return resultat;
}
int Dice::d12()
{
	int resultat = rand() % 12;
	++resultat;
	return resultat;
}
int Dice::d20()
{
	int resultat = rand() % 20;
	++resultat;
	return resultat;
}
int Dice::d100()
{
	int resultat = rand() % 100;
	++resultat;
	return resultat;
}
