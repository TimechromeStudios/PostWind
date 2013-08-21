#include <iostream>
#include <vector>
#include "Item.h"
#include "Alive.h"
#include "Competences.h"
#include "Caracs.h"

Alive::Alive(int p_id, int p_health, std::string p_name, int p_minDB, int p_maxDB, Caracs p_caracs,Competences p_competences) : Entity(p_id, p_health, p_name)
{
	minDamageBase = p_minDB;
	maxDamageBase = p_maxDB;
}
Alive::Alive(int p_id, int p_health, std::string p_name, int p_minDB, int p_maxDB, Caracs p_caracs,Competences p_competences, std::vector<Item> p_inventory) : Entity(p_id, p_health, p_name)
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

void Alive::attackEntity(Entity &cible, int p_damage)
{
    cible.lowingHealth(p_damage);
}

Caracs Alive::getCaracs()
{
    return caracs;
}

Competences  Alive::getCompetences()
{
    return competences;
}

void Alive::setCaracs(Caracs p_caracs)
{
    caracs = p_caracs;
}

void Alive::setCompetences(Competences p_competences)
{
    competences = p_competences;
}
