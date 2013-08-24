#ifndef DEF_DICE
#define DEF_DICE
#include <ctime> // Obligatoire
#include <cstdlib> // Obligatoire

class Dice
{
private:
public:
	Dice();
	static int d20();
	static int d100();
};
#endif