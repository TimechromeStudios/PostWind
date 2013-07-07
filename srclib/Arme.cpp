#include "Arme.h"

Arme::Arme(std::string p_name, int p_worth, int p_damageBonus, int p_minDamage, int p_maxDamage) : Item(p_name, p_worth, p_damageBonus)
{
    minDamage = p_minDamage;
    maxDamage = p_maxDamage;
}
int Arme::getMinDamage()
{
    return minDamage;
}
int Arme::getMaxDamage()
{
    return maxDamage;
}
void Arme::setMinDamage(int p_damage)
{
    minDamage = p_damage;
}
void Arme::setMaxDamage(int p_damage)
{
    maxDamage = p_damage;
}
