#include "Item.h"

void Weapon::displayItem() const {

    cout << name << " (" << itemRarityToString(this) << ") : Damage = " << damage << ", Weight = " << weight;
    cout << ", Type: " << damageTypeToString(this) << " (" << attackTypeToString(this) << ")\n";  
}

void Potion::displayItem() const {
    cout << name << " (" << itemRarityToString(this) << ") : Healing Power = " << healingPower << ", Weigth = " << weight << "\n";
}

void Armor::displayItem() const {
    cout << name << " (" << itemRarityToString(this) << ") : Defense Value = " << defenseValue << ", Weigth = " << weight << "\n"; 
}

string damageTypeToString(const Weapon *weapon) {
    string damageTypeString;
    switch (weapon->damageType){
        case Weapon::SLASH: return damageTypeString += "Slashing"; break;
        case Weapon::PIERCE: return damageTypeString += "Piercing"; break;
        case Weapon::BLUNT: return damageTypeString += "Blunt"; break;
        default: return damageTypeString += "None";
    }
}

string attackTypeToString(const Weapon *weapon) {
    string attackTypeString;
    switch (weapon->attackType){
        case Weapon::MELEE: return attackTypeString += "Melee"; break;
        case Weapon::RANGED: return attackTypeString += "Ranged"; break;
        default: return attackTypeString += "Unarmed";
    }
}

string itemRarityToString(const Item *item) {
    string itemRarityString;
    switch (item->itemRarity){
        case Item::COMMON: return itemRarityString += "Common"; break;
        case Item::UNCOMMON: return itemRarityString += "Uncommon"; break;
        case Item::RARE: return itemRarityString += "Rare"; break;
        case Item::EPIC: return itemRarityString += "Epic"; break;
        case Item::LEGENDARY: return itemRarityString += "Legendary"; break;
        case Item::UNIQUE: return itemRarityString += "Unique"; break;
        default: return itemRarityString += "None";
    }
}