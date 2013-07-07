#include <string>

class Item
{
protected:
    std::string name;
    int worth;
    int damageBonus;
public:
    Item(std::string p_name, int p_worth, int p_damageBonus);
    std::string getName();
    int getWorth();
    int getDamageBonus();
    void setName(std::string p_name);
    void setWorth(int p_worth);
    void setDamageBonus(int p_damageBonus);
};
