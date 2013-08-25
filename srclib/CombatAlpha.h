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
	std::string e_name;
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
}
//TODO Now... It's time for the fight!