#ifndef DEF_ENTITY
#define DEF_ENTITY  //Ne pas faire deux définitions de classe
#include <iostream>  //Inclusion de la librairie principale

class Entity  //déclaration de la classe Entity
{
protected:
	int id;  //Id de l'entité
	std::string name;  //Nom de l'entité
	int health;  //Vie de l'entité
public:
	Entity(int p_id, int p_health, std::string p_name);
	/************************************************
    *p_id: ID de l'entité                           *
    *p_health: Points de vie de l'entité            *
    *p_name: Nom de l'entité                        *
    ************************************************/
	int getId(); //Renvoie l'id de l'entité
	std::string getName();  //Renvoie le nom de l'entité
	void setName(std::string p_name);  //Fait une définition du nom de l'entité
	int getHealth();  //Renvoie les points de vie de l'entité
	void setHealth(int p_health);  //Fait une définition des points de vie de l'entité
};
#endif
