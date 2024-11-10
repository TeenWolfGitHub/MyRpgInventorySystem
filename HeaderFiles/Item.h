#pragma once

#include "basics.h"

class Item {
public:

    enum ItemRarities {
        COMMON, UNCOMMON, RARE, EPIC, LEGENDARY, UNIQUE
    };

    enum ItemTypes {
        NONE, MISCELLANEOUS, CONSUMABLE, WEAPON, SHIELD, ARMOR
    };

    string name;
    float weight;
    ItemRarities itemRarity;
    ItemTypes itemType;

    virtual void displayItem() const = 0;
    virtual ItemTypes getItemType() const { return itemType; };
    friend string itemRarityToString(const Item *item);


    //CONSTRUCTOR
    Item(string name = "Dummy", float weight = 0, ItemRarities itemRarity = Item::COMMON, ItemTypes itemType = NONE)
    : name{name}, weight{weight}, itemRarity{itemRarity}, itemType{itemType} {};
};

/*-------------------------------------------------------------------------------------*/
// WEAPON - A 'Weapon' is an Item that can deal damage and is I_equippable
/*-------------------------------------------------------------------------------------*/

class Weapon : public Item {
public:
    enum WeaponTypes {
        INVALID, SWORD, AXE, SPEAR, MACE, WARHAMMER, SHORT_BOW, LONG_BOW, WAND, STAFF
    };
    enum DamageTypes {
        NONE, SLASH, PIERCE, BLUNT, MAGIC
    };

    enum AttackTypes {
        UNARMED, MELEE, RANGED
    };

    WeaponTypes weaponType;
    int damage;
    DamageTypes damageType;
    AttackTypes attackType;

    virtual void displayItem() const override;
    virtual WeaponTypes getWeaponType() const { return weaponType; }

    friend string damageTypeToString(const Weapon *weapon);
    friend string attackTypeToString(const Weapon *weapon);

    //CONSTRUCTOR
    Weapon(string name, float weight, int damage = 0, ItemRarities weaponRarity = COMMON, DamageTypes damageType = Weapon::NONE, AttackTypes attackType = Weapon::UNARMED, WeaponTypes weaponType = INVALID)
    : Item(name, weight, weaponRarity, WEAPON), damage{damage}, damageType{damageType}, attackType{attackType}, weaponType{weaponType} {};
};

/*-------------------------------------------------------------------------------------*/
// ARMOR - An 'Armor' is an Item that has a defense value and is I_Equippable
/*-------------------------------------------------------------------------------------*/

class Armor : public Item {
public:
    ItemTypes is{ARMOR};
    int defenseValue;

    virtual void displayItem() const override;
    virtual ItemTypes getItemType() const override { return is; }

    //CONSTRUCTOR
    Armor(string name, float weight, int defenseValue, ItemRarities armorRarity = COMMON)
    : Item(name, weight, armorRarity, ARMOR), defenseValue{defenseValue} {};

};

/*-------------------------------------------------------------------------------------*/
// POTION - A 'Potion' is an Item that heals an Entity
/*-------------------------------------------------------------------------------------*/

class Potion : public Item {
public:
    ItemTypes is{CONSUMABLE};
    int healingPower;

    virtual void displayItem() const override;
    virtual ItemTypes getItemType() const override { return is; }

    //CONSTRUCTOR
    Potion(string name, float weight, int healingPower = 0, ItemRarities potionRarity = COMMON)
    : Item(name, weight, potionRarity, CONSUMABLE), healingPower{healingPower} {};

};