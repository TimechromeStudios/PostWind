#ifndef DEF_DICE
#define DEF_DICE
#include <ctime> // Obligatoire
#include <cstdlib> // Obligatoire

class Dice
{
private:
public:
	Dice();
	static int d4();
	static int d6();
	static int d8();
	static int d10();
	static int d12();
	static int d20();
	static int d100();
};
#endif