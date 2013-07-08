#ifndef DEF_ENTITY
#define DEF_ENTITY  //Ne pas faire deux d�finitions de classe
#include <iostream>  //Inclusion de la librairie principale

class Entity  //d�claration de la classe Entity
{
protected:
	int id;  //Id de l'entit�
	std::string name;  //Nom de l'entit�
	int health;  //Vie de l'entit�
public:
	Entity(int p_id, int p_health, std::string p_name);
	/************************************************
    *p_id: ID de l'entit�                           *
    *p_health: Points de vie de l'entit�            *
    *p_name: Nom de l'entit�                        *
    ************************************************/
	int getId(); //Renvoie l'id de l'entit�
	std::string getName();  //Renvoie le nom de l'entit�
	void setName(std::string p_name);  //Fait une d�finition du nom de l'entit�
	int getHealth();  //Renvoie les points de vie de l'entit�
	void setHealth(int p_health);  //Fait une d�finition des points de vie de l'entit�
};
#endif
