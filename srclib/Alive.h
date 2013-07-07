#ifndef DEF_ALIVE
#define DEF_ALIVE
#include <iostream>
#include <vector>
#include "Entity.h"
#include "Item.h"

class Alive : public Entity
{
protected:
    std::vector<Item> inventory;
    int minDamageBase;
    int maxDamageBase;
public:
    Alive(int p_id, int p_health, std::string p_name, int p_minDB, int p_maxDB);
    Alive(int p_id, int p_health, std::string p_name, int p_minDB, int p_maxDB, std::vector<Item> p_inventory);
    std::vector<Item> getInventory();
    void setInventory(std::vector<Item> p_inventory);
    void addItem(Item p_item);
    int getMinDB();
    int getMaxDB();
    void setMinDB(int p_damage);
    void setMaxDB(int p_damage);
    void lowingHealth(int p_damage);
};
#endif
