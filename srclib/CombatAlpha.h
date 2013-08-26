#include <iostream>
#include "Dice.h"

void preparation(Alive &p_personnage, Alive &p_ennemi)
{
	std::string name;
	int intel;
	int cha;
	int fo;
	int adr;
	int cou;
	int con;
	int degatsMin;
	int degatsMax;
	std::cout << "Creation du personnage" << std::endl;
	std::cout << "Nom: ";
	std::cin >> name;
	std::cout << "Caracteristique d'intelligence: ";
	std::cin >> intel;
	std::cout << "Caracteristique de charisme: ";
	std::cin >> cha;
	std::cout << "Caracteristique de force: ";
	std::cin >> fo;
	std::cout << "Caracteristique d'adresse: ";
	std::cin >> adr;
	std::cout << "Caracteristique de courage: ";
	std::cin >> cou;
	std::cout << "Caracteristique de constitution: ";
	std::cin >> con;
	std::cout << "Degats minimaux: ";
	std::cin >> degatsMin;
	std::cout << "Degats maximaux: ";
	std::cin >> degatsMax;
	Caracs caracteristiquesPerso(intel, cha, fo, adr, cou, con);
	p_personnage.setCaracs(caracteristiquesPerso);
	p_personnage.setName(name);
	p_personnage.setMinDB(degatsMin);
	p_personnage.setMaxDB(degatsMax);
	std::string e_name;
	std::cout << "Nom de votre ennemi: ";
	std::cin >> e_name;
	int e_intel = Dice::d20();
	int e_cha = Dice::d20();
	int e_fo = Dice::d20();
	int e_adr = Dice::d20();
	int e_cou = Dice::d20();
	int e_con = Dice::d20();
	int e_degatsMin = 1;
	int e_degatsMax = Dice::d100();
	Caracs caracteristiquesEnnemi(e_intel, e_cha, e_fo, e_adr, e_cou, e_con);
	p_ennemi.setCaracs(caracteristiquesEnnemi);
	p_ennemi.setName(e_name);
	p_ennemi.setMinDB(e_degatsMin);
	p_ennemi.setMaxDB(e_degatsMax);
}
void tourDeCombat(Alive &attaquant, Alive &cible)//TODO Rajouter les échecs et réussites critiques
{
    if(attaquant.getHealth() > 0)
    {
        std::cout << attaquant.getName() << " tente d'attaquer" << std::endl;
        if(Dice::d20() <= attaquant.getCaracs().getAdr())
        {
            int degats = Dice::range(attaquant.getMinDB(), attaquant.getMaxDB());
            std::cout << "L'attaque de " << attaquant.getName() << " est reussie et inflige " << degats << " degats." << std::endl;
            cible.lowingHealth(degats);
        }
        else
        {
            std::cout << "L'attaque de " << attaquant.getName() << " a echouee" << std::endl;
        }
    }
}
//TODO Coder tourDeCombat(Alive &attaquant, Alive &cible)
void fight(Alive &p_personnage, Alive &p_ennemi)
{
	std::string buffer;
	std::cout << std::endl << "Le combat entre " << p_personnage.getName() << " et " << p_ennemi.getName() << " va commencer." << std::endl;
	std::cout << "Vous avez chacun un sabre laser, faisant plus ou moins de degats" << std::endl;
	while(p_personnage.getHealth() > 0 && p_ennemi.getHealth() > 0)
	{
		if(p_personnage.getCaracs().getCou() > p_ennemi.getCaracs().getCou())
		{
			tourDeCombat(p_personnage, p_ennemi);
			tourDeCombat(p_ennemi, p_personnage);
		}
		else
		{
			tourDeCombat(p_ennemi, p_personnage);
			tourDeCombat(p_personnage, p_ennemi);
		}
		//std::cout << "Il vous reste " << p_personnage.getHealth() << " points de vie." << std::endl;
		std::cout << p_personnage.getName() << ": " << p_personnage.getHealth() << std::endl << p_ennemi.getName() << ": " << p_ennemi.getHealth() << std::endl;
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
