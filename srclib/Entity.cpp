#include "Entity.h"

Entity::Entity(int p_id, int p_health, std::string p_name)
{
	id = p_id;
	health = p_health;
	name = p_name;
}

int Entity::getId()
{
	return id;
}

int Entity::getHealth()
{
	return health;
}

std::string Entity::getName()
{
	return name;
}
void Entity::setName(std::string p_name)
{
	name = p_name;
}
void Entity::setHealth(int p_health)
{
	health = p_health;
}
int Entity::getX()
{
	return x;
}
int Entity::getY()
{
    return y;
}
int Entity::getZ()
{
    return z;
}
void Entity::setX(int p_x)
{
    x = p_x;
}
void Entity::setY(int p_y)
{
    y = p_y;
}
void Entity::setZ(int p_z)
{
    z = p_z;
}

void Entity::lowingHealth(int p_damage)
{
    health -= p_damage;
}
