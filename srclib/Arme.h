#ifndef DEF_ARME
#define DEF_ARME  //Ne pas faire deux définitions de classe
#include "Item.h" //Inclusion de la classe Item

class Arme : public Item  //déclaration de la classe Arme héritée de la classe Item
{
protected:
    int minDamage;  //dégats minimum de l'arme
    int maxDamage;  //dégats maximum de l'arme
public:
    Arme(std::string p_name, int p_worth, int p_damageBonus, int p_minDamage, int p_maxDamage);
    /***************************************************
    *p_name: Nom de l'arme                             *
    *p_worth: Prix de l'arme                           *
    *p_damageBonus: Bonus de dégâts conféré par l'arme *
    *p_minDamage: Dégâts minimaux infligés par l'arme  *
    *p_maxDamage: Dégâts maximaux infligés par l'arme  *
    ***************************************************/
    int getMinDamage(); //renvoie les dégats minimaux infligés par l'arme
    int getMaxDamage(); //renvoie les dégats maximaux infligés par l'arme
    void setMinDamage(int p_damage); //Fait une définition des dégâts minimaux infligés par l'arme
    void setMaxDamage(int p_damage); //Fait une définition des dégâts maximaux infligés par l'arme
};

#endif
