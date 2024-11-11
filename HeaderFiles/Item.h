#pragma once

#include "basics.h"
#include "ItemList.h"

class Item {
public:
    // Lists of categorization flags - Can be expanded
    enum ItemRarities { COMMON, UNCOMMON, RARE, EPIC, LEGENDARY, UNIQUE };
    enum ItemTypes { NONE, MISCELLANEOUS, CONSUMABLE, WEAPON, SHIELD, ARMOR };

    // Item basic attributes
    string name;
    string description;
    float weight;
    float goldValue;
    ItemRarities itemRarity;
    ItemTypes itemType;

    // Polymorphic pure virtual function(s)
    virtual void displayItem() const = 0;

    // Getter and Setters
    ItemTypes getItemTypeByValue() const { return itemType; }
    string getItemTypeAsString() const;
    ItemRarities getItemRarityByValue() const { return itemRarity; }
    string getItemRarityAsString() const;

    //Constructor
    Item(string name = "Dummy", float weight = 0, ItemRarities itemRarity = Item::COMMON, ItemTypes itemType = NONE)
    : name{name}, weight{weight}, goldValue{0}, itemRarity{itemRarity}, itemType{itemType} {
        static ItemList AllItems;
        // Assigns the corresponding descrpition stored in the ItemList Class
        description = AllItems.getDescription(name);
    };
};

/*-------------------------------------------------------------------------------------*/
// MISCELLANEOUS - A 'Miscellaneous' is an Item that can be 'used' in various ways
/*-------------------------------------------------------------------------------------*/

class Miscellaneous : public Item {
private:
    // hiding Item Rarity inherited attribute (Miscellaneous will not have a rarity)
    using Item::itemRarity;
public:
    // List(s) of categorization flags - can be expanded
    enum MiscellaneousTypes { INVALID_MISCELLANEOUS_TYPE, TRASH, VALUABLE, RESOURCE, KEY_ITEM};

    // Weapon specialized attribute(s)
    MiscellaneousTypes miscellaneousType;

    // Polymorphic pure virtual function(s)
    virtual void use() const = 0;

    // Polymorphic function(s) override
    virtual void displayItem() const override;

    // Getter(s) and Setter(s)
    MiscellaneousTypes getMiscellaneousTypeByValue() const { return miscellaneousType; }
    string getMiscellaneousTypeAsString() const;

    //CONSTRUCTOR
    Miscellaneous(string name, float weight, MiscellaneousTypes miscellaneousType = INVALID_MISCELLANEOUS_TYPE)
    : Item(name, weight, Item::COMMON, Item::MISCELLANEOUS), miscellaneousType{miscellaneousType} {
        goldValue = 0.0;
    };

};


/*-------------------------------------------------------------------------------------*/
// WEAPON - A 'Weapon' is an Item that can deal damage and is I_equippable
/*-------------------------------------------------------------------------------------*/

class Weapon : public Item {
public:
    // List(s) of categorization flags - can be expanded
    enum WeaponTypes {
        INVALID_WEAPON_TYPE, SWORD, AXE, SPEAR, MACE, WARHAMMER, SHORT_BOW, LONG_BOW, WAND, STAFF
    };
    enum DamageTypes { INVALID_DAMAGE_TYPE, SLASH, PIERCE, IMPACT, MAGIC_DAMAGE };

    enum AttackTypes { INVALID_ATTACK_TYPE, UNARMED, MELEE, RANGED };

    // Weapon specialized attribute(s)
    int damage;
    WeaponTypes weaponType;
    DamageTypes damageType;
    AttackTypes attackType;

    // Polymorphic pure virtual function(s)
    virtual void equip() const = 0;
    virtual void attack() const = 0;

    // Polymorphic function(s) override
    virtual void displayItem() const override;

    // Getter and Setters
    WeaponTypes getWeaponTypeByValue() const { return weaponType; }
    string getWeaponTypeAsString() const;
    DamageTypes getDamageTypeByValue() const { return damageType; }
    string getDamageTypeAsString() const;
    AttackTypes getAttackTypeByValue() const { return attackType; }
    string getAttackTypeAsString() const;

    //CONSTRUCTOR
    Weapon(string name, float weight, int damage = 0, ItemRarities weaponRarity = COMMON, DamageTypes damageType = INVALID_DAMAGE_TYPE,
            AttackTypes attackType = INVALID_ATTACK_TYPE, WeaponTypes weaponType = INVALID_WEAPON_TYPE);
};

/*-------------------------------------------------------------------------------------*/
// ARMOR - An 'Armor' is an Item that has a defense value and is I_Equippable
/*-------------------------------------------------------------------------------------*/

class Armor : public Item {
public:
    // List(s) of categorization flags - can be expanded
    enum ArmorTypes { INVALID_ARMOR_TYPE, CLOTHING, ROBE, LIGHT_ARMOR, MEDIUM_ARMOR, HEAVY_ARMOR}; 

    // Armor specialized attribute(s)
    int physicalDefense;
    int magicalDefense;
    ArmorTypes armorType;

    // Polymorphic pure virtual function(s)
    virtual void equip() const = 0;

    // Polymorphic function(s) override
    virtual void displayItem() const override;

    // Getter(s) and Setter(s)
    ArmorTypes getArmorTypeByValue() const { return armorType; }
    string getArmorTypeAsString() const;

    //CONSTRUCTOR
    Armor(string name, float weight, int physicalDefense = 0, int magicalDefense = 0,
    ItemRarities armorRarity = COMMON, ArmorTypes armorType = INVALID_ARMOR_TYPE);
};
/*-------------------------------------------------------------------------------------*/
// CONSUMBALE - A 'Consumable' is an Item that can be consumed
/*-------------------------------------------------------------------------------------*/

class Consumable : public Item {
public:
    // List(s) of categorization flags - can be expanded
    enum ConsumableTypes { INVALID_CONSUMABLE_TYPE, INGREDIENT, FOOD, POTION };
    // Consumable specialized Attribute(s)
    ConsumableTypes consumableType;

    // Polymorphic pure virtual function(s)
    virtual void consume() const = 0;

    // Polymorphic function(s) override
    virtual void displayItem() const override;

    // Getter(s) and Setter(s)
    ConsumableTypes getConsumableTypeByValue() const { return consumableType; }
    string getConsumableTypeAsString() const;

    //CONSTRUCTOR
    Consumable(string name, float weight, ItemRarities consumableRarity = COMMON)
    : Item(name, weight, consumableRarity, CONSUMABLE) {
        goldValue = 0.0;
    };

};