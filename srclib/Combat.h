#ifndef DEF_COMBAT
#define DEF_COMBAT

#include <iostream>
#include "Dice.h"

class Combat
{
protected:

	Alive &p_personnage;
	Alive &p_ennemi;
	Alive &attaquant;
	Alive &cible;

	void tourDeCombat()
	{
		if(attaquant.getHealth() > 0)
 	   {
    	    std::cout << attaquant.getName() << " tente d'attaquer" << std::endl;
        	if(Dice::d20() <= attaquant.getCaracs().getAdr())
	        {
    	        int degats = Dice::range(attaquant.getMinDB(), attaquant.getMaxDB());
        	    if(degats == 42)
            	{
            		std::cout << "Un eclair tombe sur " << cible.getName() << "! Il perd alors 84 points de vie!" << std::endl;
	            	degats = 84;
    	        }
        	    else
            	{
          			std::cout << "L'attaque de " << attaquant.getName() << " est reussie et inflige " << degats << " degats." << std::endl;
            		cible.lowingHealth(degats);
            	}
        	}
        	else
        	{
            	std::cout << "L'attaque de " << attaquant.getName() << " a echouee" << std::endl;
        	}
    	}
    }

public:

	void fight()
	{
		std::string buffer;
		std::cout << std::endl << "Le combat entre " << p_personnage.getName() << " et " << p_ennemi.getName() << " va commencer." << std::endl;
		std::cout << "Vous avez chacun un sabre laser, faisant plus ou moins de degats" << std::endl;
		std::cout << p_ennemi.getMinDB() << " " << p_ennemi.getMaxDB() << std::endl;
		while(p_personnage.getHealth() > 0 && p_ennemi.getHealth() > 0)
		{
			if(p_personnage.getCaracs().getCou() > p_ennemi.getCaracs().getCou())
			{
				attaquant = p_personnage;
				cible = p_ennemi;
				tourDeCombat();
				attaquant = p_ennemi;
				cible = p_personnage;
				tourDeCombat();
			}
			else
			{
				attaquant = p_ennemi;
				cible = p_personnage;
				tourDeCombat();
				attaquant = p_personnage;
				cible = p_ennemi;
				tourDeCombat();
			}
			std::cout << "Il vous reste " << p_personnage.getHealth() << " points de vie." << std::endl;
			//std::cout << p_personnage.getName() << ": " << p_personnage.getHealth() << std::endl << p_ennemi.getName() << ": " << p_ennemi.getHealth() << std::endl;
			//std::cin >> buffer;
		}
		if(p_personnage.getHealth() > 0)
		{
		    std::cout << p_ennemi.getName() << " est mort." << std::endl;
	    	std::cout << "Le vainqueur est " << p_personnage.getName() << " avec " << p_personnage.getHealth() << " points de vie."<< std::endl;
		}
		else
		{
    	    std::cout << p_personnage.getName() << " est mort." << std::endl;
	    	std::cout << "Le vainqueur est " << p_ennemi.getName() << " avec " << p_ennemi.getHealth() << " points de vie." << std::endl;
		}
	}
};

#endif
