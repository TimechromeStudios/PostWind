#include "Item.h"

class Arme : public Item
{
protected:
    int minDamage;
    int maxDamage;
public:
    Arme(std::string p_name, int p_worth, int p_damageBonus, int p_minDamage, int p_maxDamage);
    int getMinDamage();
    int getMaxDamage();
    void setMinDamage(int p_damage);
    void setMaxDamage(int p_damage);
};
