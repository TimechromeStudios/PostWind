#include "Entity.h"

Entity::Entity(int p_id, int p_health, string p_name)
{
	id = p_id;
	health = p_health;
	name = p_name;
}

int Entity::getId()
{
	return id;
}

int getHealth()
{
	return health;
}

std::string getName()
{
	return name;
}
void setName(std::string p_name)
{
	name = p_name;
}
void setHealth(int p_health)
{
	health = p_health;
}