#pragma once

#include "WeaponTypes.h"

class Inventory {
    vector<unique_ptr<Item>> itemsInInventory;
public:
    // Methods
    void addItem(unique_ptr<Item> newItem);
    void tossItem(const string &itemToToss);
    void sortByName();
    void sortByRarity();
    void sortByType();
    void displayInventory() const;
};
