#ifndef DEF_ENTITY
#define DEF_ENTITY
#include <iostream>

class Entity
{
protected:
	int id;
	std::string name;
	int health;
public:
	Entity(int p_id, int p_health, std::string p_name);
	int getId();
	std::string getName();
	void setName(std::string p_name);
	int getHealth();
	void setHealth(int p_health);
};
#endif