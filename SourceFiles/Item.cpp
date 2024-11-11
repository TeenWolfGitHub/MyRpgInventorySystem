#include "Item.h"

string Item::getItemRarityAsString() const {
    string flagAsString;
    switch (this->getItemRarityByValue()){
        case Item::COMMON: return flagAsString += "Common"; break;
        case Item::UNCOMMON: return flagAsString += "Uncommon"; break;
        case Item::RARE: return flagAsString += "Rare"; break;
        case Item::EPIC: return flagAsString += "Epic"; break;
        case Item::LEGENDARY: return flagAsString += "Legendary"; break;
        case Item::UNIQUE: return flagAsString += "Unique"; break;
        default: return flagAsString += "Invalid";
    }
}

string Item::getItemTypeAsString() const {
    string flagAsString;
    switch (this->getItemTypeByValue()){
        case Item::MISCELLANEOUS: return flagAsString += "Miscellaneous"; break;
        case Item::CONSUMABLE: return flagAsString += "Consumable"; break;
        case Item::WEAPON: return flagAsString += "Weapon"; break;
        case Item::ARMOR: return flagAsString += "Armor"; break;
        default: return flagAsString += "Invalid";
    }
}

/*-------------------------------------------------------------------------------------*/
// MISCELLANEOUS CLASS - Implementations
/*-------------------------------------------------------------------------------------*/

void Miscellaneous::displayItem() const {
    cout << "\n" << name << " (" << getItemRarityAsString() << ") : Weight = " << weight;
    cout << ", Type: " << getMiscellaneousTypeAsString() << ", Value = " << goldValue << "\n";  
    cout << "\"" << description << "\"\n";
}

string Miscellaneous::getMiscellaneousTypeAsString() const {
    string flagAsString;
    switch (this->getMiscellaneousTypeByValue()){
        case MiscellaneousTypes::TRASH: return flagAsString += "Trash"; break;
        case MiscellaneousTypes::VALUABLE: return flagAsString += "Valuable"; break;
        case MiscellaneousTypes::RESOURCE: return flagAsString += "Resource"; break;
        case MiscellaneousTypes::KEY_ITEM: return flagAsString += "Key Item"; break;
        default: return flagAsString += "Invalid";
    }
}

/*-------------------------------------------------------------------------------------*/
// WEAPON CLASS - Implementations
/*-------------------------------------------------------------------------------------*/

// Constructor
Weapon::Weapon(string name, float weight, int damage, Item::ItemRarities weaponRarity, Weapon::DamageTypes damageType, Weapon::AttackTypes attackType, Weapon::WeaponTypes weaponType)
: Item(name, weight, weaponRarity, WEAPON), damage{damage}, damageType{damageType}, attackType{attackType}, weaponType{weaponType} {
    switch (getItemRarityByValue()){
        case COMMON: goldValue = damage * 5.0; break;
        case UNCOMMON: goldValue = (damage * 5) * 1.2; break;
        case RARE: goldValue = (damage * 5) * 1.5; break;
        case EPIC: goldValue = (damage * 5) *2.0; break;
        case LEGENDARY: goldValue = (damage * 5) * 3.0; break;
        case UNIQUE: goldValue = (damage * 5) * 10.0; break;
    }
};

void Weapon::displayItem() const {

    cout << "\n" << name << " (" << getItemRarityAsString() << ") : Damage = " << damage << ", Weight = " << weight;
    cout << ", Type: " << getDamageTypeAsString() << " (" << getAttackTypeAsString() << "), Value = " << goldValue << "\n";  
    cout << "\"" << description << "\"\n";
}

string Weapon::getDamageTypeAsString() const {
    string flagAsString;
    switch (this->getDamageTypeByValue()){
        case Weapon::DamageTypes::SLASH: return flagAsString += "Slashing"; break;
        case Weapon::DamageTypes::PIERCE: return flagAsString += "Piercing"; break;
        case Weapon::DamageTypes::IMPACT: return flagAsString += "Blunt"; break;
        default: return flagAsString += "Invalid";
    }
}

string Weapon::getAttackTypeAsString() const {
    string flagAsString;
    switch (this->getAttackTypeByValue()){
        case Weapon::AttackTypes::UNARMED: return flagAsString += "Unarmed"; break;
        case Weapon::AttackTypes::MELEE: return flagAsString += "Melee"; break;
        case Weapon::AttackTypes::RANGED: return flagAsString += "Ranged"; break;
        default: return flagAsString += "Invalid";
    }
}

string Weapon::getWeaponTypeAsString() const {
string flagAsString;
    switch (this->getWeaponTypeByValue()){
        case Weapon::WeaponTypes::SWORD: return flagAsString += "Sword"; break;
        case Weapon::WeaponTypes::AXE: return flagAsString += "Axe"; break;
        case Weapon::WeaponTypes::SPEAR: return flagAsString += "Spear"; break;
        case Weapon::WeaponTypes::MACE: return flagAsString += "Mace"; break;
        case Weapon::WeaponTypes::WARHAMMER: return flagAsString += "Warhammer"; break;
        case Weapon::WeaponTypes::SHORT_BOW: return flagAsString += "Short Bow"; break;
        case Weapon::WeaponTypes::LONG_BOW: return flagAsString += "Long Bow"; break;
        case Weapon::WeaponTypes::WAND: return flagAsString += "Wand"; break;
        case Weapon::WeaponTypes::STAFF: return flagAsString += "Staff"; break;
        default: return flagAsString += "Invalid";
    }
}

/*-------------------------------------------------------------------------------------*/
// ARMOR CLASS - Implementations
/*-------------------------------------------------------------------------------------*/

Armor::Armor(string name, float weight, int physicalDefense, int magicalDefense, ItemRarities armorRarity, Armor::ArmorTypes armorType)
: Item(name, weight, armorRarity, ARMOR), physicalDefense{physicalDefense}, magicalDefense{magicalDefense}, armorType{armorType} {
    switch (getItemRarityByValue()){
        case COMMON: goldValue = (physicalDefense + magicalDefense) * 3; break;
        case UNCOMMON: goldValue = ((physicalDefense + magicalDefense) * 3) * 1.2; break;
        case RARE: goldValue = ((physicalDefense + magicalDefense) * 3) * 1.5; break;
        case EPIC: goldValue = ((physicalDefense + magicalDefense) * 3) *2.0; break;
        case LEGENDARY: goldValue = ((physicalDefense + magicalDefense) * 3) * 3.0; break;
        case UNIQUE: goldValue = ((physicalDefense + magicalDefense) * 3) * 10.0; break;
    }
}

void Armor::displayItem() const {
    cout << "\n" << name << " (" << getItemTypeAsString() << ") : Defense Values = " << physicalDefense << "(physical) - " << magicalDefense;
    cout << "(magical), Weigth = " << weight << ", Type: " << getArmorTypeAsString() << ", value: " << goldValue << "\n"; 
    cout << "\"" << description << "\"\n";
}

string Armor::getArmorTypeAsString() const {
    string flagAsString;
    switch (this->getArmorTypeByValue()){
        case Armor::ArmorTypes::CLOTHING: return flagAsString += "Clothing"; break;
        case Armor::ArmorTypes::LIGHT_ARMOR: return flagAsString += "Light Armor"; break;
        case Armor::ArmorTypes::MEDIUM_ARMOR: return flagAsString += "Medium Armor"; break;
        case Armor::ArmorTypes::HEAVY_ARMOR: return flagAsString += "Heavy Armor"; break;
        default: return flagAsString += "Invalid";
    }
}

/*-------------------------------------------------------------------------------------*/
// CONSUMABLE CLASS - Implementations
/*-------------------------------------------------------------------------------------*/

void Consumable::displayItem() const {
    cout << "\n" << name << " (" << getItemTypeAsString() << ") : Weigth = " << weight << "\n";  
    cout << "\"" << description << "\"\n";
}

string Consumable::getConsumableTypeAsString() const {
    string flagAsString;
    switch (this->getConsumableTypeByValue()){
        case Consumable::ConsumableTypes::INGREDIENT: return flagAsString += "Ingredient"; break;
        case Consumable::ConsumableTypes::FOOD: return flagAsString += "Food"; break;
        case Consumable::ConsumableTypes::POTION: return flagAsString += "Potion"; break;
        default: return flagAsString += "Invalid";
    }
}