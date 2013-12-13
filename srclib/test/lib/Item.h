#ifndef DEF_ITEM
#define DEF_ITEM //Ne pas faire deux définitions de classe
#include <string> //Inclusion de la librairie string

class Item //déclaration de la classe Item
{
protected:
    std::string name; //Nom de l'item
    int worth; //Prix de l'item
    int damageBonus; //dégâts bonus conférés par l'item
public:
    Item(std::string p_name, int p_worth, int p_damageBonus);
    /*************************************************
    *p_name: Nom de l'item                           *
    *p_worth: Prix de l'item                         *
    *p_damageBonus: dégâts bonus conférés par l'item *
    *************************************************/
    std::string getName(); //Renvoie le nom de l'item
    int getWorth(); //Renvoie le prix de l'item
    int getDamageBonus(); //Renvoie les dégâts bonus conférés par l'item
    void setName(std::string p_name); //Fait une définition du nom de l'item
    void setWorth(int p_worth); //Fait une définition du prix de l'item
    void setDamageBonus(int p_damageBonus); //Fait une définition des dégâts bonus conférés par l'item
};
#endif
