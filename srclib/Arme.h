#ifndef DEF_ARME
#define DEF_ARME  //Ne pas faire deux d�finitions de classe
#include "Item.h" //Inclusion de la classe Item

class Arme : public Item  //d�claration de la classe Arme h�rit�e de la classe Item
{
protected:
    int minDamage;  //d�gats minimum de l'arme
    int maxDamage;  //d�gats maximum de l'arme
public:
    Arme(std::string p_name, int p_worth, int p_damageBonus, int p_minDamage, int p_maxDamage);
    /***************************************************
    *p_name: Nom de l'arme                             *
    *p_worth: Prix de l'arme                           *
    *p_damageBonus: Bonus de d�g�ts conf�r� par l'arme *
    *p_minDamage: D�g�ts minimaux inflig�s par l'arme  *
    *p_maxDamage: D�g�ts maximaux inflig�s par l'arme  *
    ***************************************************/
    int getMinDamage(); //renvoie les d�gats minimaux inflig�s par l'arme
    int getMaxDamage(); //renvoie les d�gats maximaux inflig�s par l'arme
    void setMinDamage(int p_damage); //Fait une d�finition des d�g�ts minimaux inflig�s par l'arme
    void setMaxDamage(int p_damage); //Fait une d�finition des d�g�ts maximaux inflig�s par l'arme
};

#endif
