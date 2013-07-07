#include <iostream>
#include <vector>
#include "Item.h"
#include "Alive.h"

Alive::Alive(int p_id, int p_health, std::string p_name, int p_minDB, int p_maxDB) : Entity(p_id, p_health, p_name)
{
	minDamageBase = p_minDB;
	maxDamageBase = p_maxDB;
}
Alive::Alive(int p_id, int p_health, std::string p_name, int p_minDB, int p_maxDB, std::vector<Item> p_inventory) : Entity(p_id, p_health, p_name)
{
	minDamageBase = p_minDB;
	maxDamageBase = p_maxDB;
	inventory = p_inventory;
}
std::vector<Item> Alive::getInventory()
{
    return inventory;
}
void Alive::setInventory(std::vector<Item> p_inventory)
{
    inventory = p_inventory;
}
void Alive::addItem(Item p_item)
{
    inventory.push_back(p_item);
}
int Alive::getMinDB()
{
    return minDamageBase;
}
int Alive::getMaxDB()
{
    return maxDamageBase;
}
void Alive::setMinDB(int p_damage)
{
    minDamageBase = p_damage;
}
void Alive::setMaxDB(int p_damage)
{
    maxDamageBase = p_damage;
}
void Alive::lowingHealth(int p_damage)
{
    health -= p_damage;
}
