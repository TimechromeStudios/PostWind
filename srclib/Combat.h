#ifndef DEF_COMBAT
#define DEF_COMBAT

#include <iostream>
#include "Dice.h"
#include "Alive.h"

class Combat
{
protected:

	Alive &p_personnage;
	Alive &p_ennemi;
	Alive &attaquant;
	Alive &cible;

public:
	Combat(Alive &personnage, Alive &ennemi);
	void tourDeCombat();
	void fight();
	void setFighters(Alive &personnage, Alive &ennemi);
};

#endif
