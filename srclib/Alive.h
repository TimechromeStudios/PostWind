#ifndef DEF_ALIVE
#define DEF_ALIVE //Ne pas faire deux définitions de classe
#include <iostream> //Inclusion de la librairie principale
#include <vector> //Inlclusion de la librairie pour les tableaux dynamiques
#include "Entity.h" //Inclusion de la librairie mère
#include "Item.h" //Inclusion de la classe Item

class Alive : public Entity //La classe Alive définit toutes les entités vivantes, et pouvant faire des dégâts
{
protected:
    std::vector<Item> inventory; //L'inventaire de l'entité
    int minDamageBase; //Les dégâts minimaux de l'entité
    int maxDamageBase; //Les dégâts maximaux de l'entité
public:
    Alive(int p_id, int p_health, std::string p_name, int p_minDB, int p_maxDB); //Premier constructeur
    Alive(int p_id, int p_health, std::string p_name, int p_minDB, int p_maxDB, std::vector<Item> p_inventory); //Deuxième constructeur
    /************************************************
    *p_id: ID de l'entité                           *
    *p_health: Points de vie de l'entité            *
    *p_name: Nom de l'entité                        *
    *p_minDB: Dégâts minimaux infligés par l'entité *
    *p_maxDB: Dégâts maximaux infligés par l'entité *
    *p_inventory: Inventaire de l'entité            *
    ************************************************/
    std::vector<Item> getInventory(); //Renvoie l'inventaire
    void setInventory(std::vector<Item> p_inventory); //Fait une définition de l'inventaire
    void addItem(Item p_item); //Ajoute un objet Item à l'inventaire
    int getMinDB(); //Renvoie les dégâts minimaux infligés par l'entité
    int getMaxDB(); //Renvoie les dégâts maximaux infligés par l'entité
    void setMinDB(int p_damage); //Fait une définition des dégâts minimaux infligés par l'entité
    void setMaxDB(int p_damage); //Fait une définition des dégâts maximaux infligés par l'entité
    void lowingHealth(int p_damage); //Fait perdre des points de vie à l'entité
};
#endif
