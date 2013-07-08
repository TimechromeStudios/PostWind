#ifndef DEF_ITEM
#define DEF_ITEM //Ne pas faire deux d�finitions de classe
#include <string> //Inclusion de la librairie string

class Item //d�claration de la classe Item
{
protected:
    std::string name; //Nom de l'item
    int worth; //Prix de l'item
    int damageBonus; //d�g�ts bonus conf�r�s par l'item
public:
    Item(std::string p_name, int p_worth, int p_damageBonus);
    /*************************************************
    *p_name: Nom de l'item                           *
    *p_worth: Prix de l'item                         *
    *p_damageBonus: d�g�ts bonus conf�r�s par l'item *
    *************************************************/
    std::string getName(); //Renvoie le nom de l'item
    int getWorth(); //Renvoie le prix de l'item
    int getDamageBonus(); //Renvoie les d�g�ts bonus conf�r�s par l'item
    void setName(std::string p_name); //Fait une d�finition du nom de l'item
    void setWorth(int p_worth); //Fait une d�finition du prix de l'item
    void setDamageBonus(int p_damageBonus); //Fait une d�finition des d�g�ts bonus conf�r�s par l'item
};
#endif
