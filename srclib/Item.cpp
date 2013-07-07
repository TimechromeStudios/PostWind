#include <iostream>
#include <string>
#include "Item.h"

Item::Item(std::string p_name, int p_worth, int p_damageBonus)
{
    name = p_name;
    worth = p_worth;
    damageBonus = p_damageBonus;
}
std::string Item::getName()
{
    return name;
}
int Item::getWorth()
{
    return worth;
}
int Item::getDamageBonus()
{
    return damageBonus;
}
void Item::setName(std::string p_name)
{
    name = p_name;
}
void Item::setWorth(int p_worth)
{
    worth = p_worth;
}
void Item::setDamageBonus(int p_damageBonus)
{
    damageBonus = p_damageBonus;
}
