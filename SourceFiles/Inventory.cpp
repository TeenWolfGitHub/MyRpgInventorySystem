#include "Inventory.h"

void Inventory::addItem(unique_ptr<Item> newItem){
    itemsInInventory.push_back(std::move(newItem));
}

void Inventory::tossItem(const string &nameOfItem){
    for (size_t i = 0; i < itemsInInventory.size(); i++){
        if (nameOfItem == itemsInInventory.at(i)->name){
            cout << "\nTossing " << nameOfItem << "...\n\n";
            itemsInInventory.erase(itemsInInventory.begin() + i);
            return;
        }
    }
    cout << nameOfItem << " not found in the inventory!\n";
}

void Inventory::sortByName(){
    for (size_t i = 0; i < itemsInInventory.size(); i++){
        for (size_t j = 0; j < itemsInInventory.size(); j++){
            if (itemsInInventory.at(i)->name < itemsInInventory.at(j)->name){
                itemsInInventory.at(i).swap(itemsInInventory.at(j));
            }
            else continue;
        }
    }
}

void Inventory::sortByRarity() {
    for (size_t i = 0; i < itemsInInventory.size(); i++){
        for (size_t j = 0; j < itemsInInventory.size(); j++){
            if (itemsInInventory.at(i)->itemRarity < itemsInInventory.at(j)->itemRarity){
                itemsInInventory.at(i).swap(itemsInInventory.at(j));
            }
            else continue;
        }
    }
}

void Inventory::sortByType() {
    std::sort(itemsInInventory.begin(), itemsInInventory.end(),
              [](const std::unique_ptr<Item>& a, const std::unique_ptr<Item>& b) {
                  // First, compare by item type
                  if (a->getItemTypeByValue() != b->getItemTypeByValue()) {
                      return a->getItemTypeByValue() < b->getItemTypeByValue();
                  }
                  
                  // If item types are the same, compare further if needed (e.g., by weapon type, rarity, etc.)
                  if (a->getItemTypeByValue() == Item::WEAPON) {
                      const auto* weaponA = dynamic_cast<const Weapon*>(a.get());
                      const auto* weaponB = dynamic_cast<const Weapon*>(b.get());
                      return weaponA->getWeaponTypeByValue() < weaponB->getWeaponTypeByValue();
                  }
                  return false; // No further sorting for non-weapon items
              });
}

void Inventory::displayInventory() const{
    
    if (itemsInInventory.empty()){
        cout << "Inventory is empty...\n\n";
        return;
    }

    cout << "\n---------------------------------------------------------------------------------\n";
    cout << "DISPLAYING INVENTORY\n";
    cout << "---------------------------------------------------------------------------------\n";
    for (const auto &item : itemsInInventory){
        item->displayItem();
    }
}