#ifndef DEF_ALIVE
#define DEF_ALIVE //Ne pas faire deux d�finitions de classe
#include <iostream> //Inclusion de la librairie principale
#include <vector> //Inlclusion de la librairie pour les tableaux dynamiques
#include "Entity.h" //Inclusion de la librairie m�re
#include "Item.h" //Inclusion de la classe Item

class Alive : public Entity //La classe Alive d�finit toutes les entit�s vivantes, et pouvant faire des d�g�ts
{
protected:
    std::vector<Item> inventory; //L'inventaire de l'entit�
    int minDamageBase; //Les d�g�ts minimaux de l'entit�
    int maxDamageBase; //Les d�g�ts maximaux de l'entit�
public:
    Alive(int p_id, int p_health, std::string p_name, int p_minDB, int p_maxDB); //Premier constructeur
    Alive(int p_id, int p_health, std::string p_name, int p_minDB, int p_maxDB, std::vector<Item> p_inventory); //Deuxi�me constructeur
    /************************************************
    *p_id: ID de l'entit�                           *
    *p_health: Points de vie de l'entit�            *
    *p_name: Nom de l'entit�                        *
    *p_minDB: D�g�ts minimaux inflig�s par l'entit� *
    *p_maxDB: D�g�ts maximaux inflig�s par l'entit� *
    *p_inventory: Inventaire de l'entit�            *
    ************************************************/
    std::vector<Item> getInventory(); //Renvoie l'inventaire
    void setInventory(std::vector<Item> p_inventory); //Fait une d�finition de l'inventaire
    void addItem(Item p_item); //Ajoute un objet Item � l'inventaire
    int getMinDB(); //Renvoie les d�g�ts minimaux inflig�s par l'entit�
    int getMaxDB(); //Renvoie les d�g�ts maximaux inflig�s par l'entit�
    void setMinDB(int p_damage); //Fait une d�finition des d�g�ts minimaux inflig�s par l'entit�
    void setMaxDB(int p_damage); //Fait une d�finition des d�g�ts maximaux inflig�s par l'entit�
    void lowingHealth(int p_damage); //Fait perdre des points de vie � l'entit�
};
#endif
