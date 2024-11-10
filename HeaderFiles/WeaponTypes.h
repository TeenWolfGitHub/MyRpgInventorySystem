#pragma once

#include "Item.h"

/*-------------------------------------------------------------------------------------*/
// MELEE WEAPONS
/*-------------------------------------------------------------------------------------*/


class Sword : public Weapon {
public:

    //Constructor
    Sword(string name, float weight, int damage, ItemRarities swordRarity)
    : Weapon(name, weight, damage, swordRarity, Weapon::SLASH, Weapon::MELEE, SWORD) {};
};

class Axe : public Weapon {
public:

    //Constructor
    Axe(string name, float weight, int damage, ItemRarities axeRarity)
    : Weapon(name, weight, damage, axeRarity, Weapon::SLASH, Weapon::MELEE, AXE) {};
};

class Spear : public Weapon {
public:

    //Constructor
    Spear(string name, float weight, int damage, ItemRarities spearRarity)
    : Weapon(name, weight, damage, spearRarity, Weapon::PIERCE, Weapon::MELEE, SPEAR) {};
};

class Mace : public Weapon {
public:

    //Constructor
    Mace(string name, float weight, int damage, ItemRarities maceRarity)
    : Weapon(name, weight, damage, maceRarity, Weapon::BLUNT, Weapon::MELEE, MACE) {};
};

class WarHammer : public Weapon {
public:

    //Constructor
    WarHammer(string name, float weight, int damage, ItemRarities warHammerRarity)
    : Weapon(name, weight, damage, warHammerRarity, Weapon::BLUNT, Weapon::MELEE, WARHAMMER) {};
};

/*-------------------------------------------------------------------------------------*/
// RANGED WEAPONS
/*-------------------------------------------------------------------------------------*/

class ShortBow : public Weapon {
public:
    int range;

    //Constructor
    ShortBow(string name, float weight, int damage, ItemRarities shortBowRarity)
    : Weapon(name, weight, damage, shortBowRarity, Weapon::PIERCE, Weapon::RANGED, SHORT_BOW), range{80} {};
};

class LongBow : public Weapon {
public:
    int range;

    //Constructor
    LongBow(string name, float weight, int damage, ItemRarities longBowRarity)
    : Weapon(name, weight, damage, longBowRarity, Weapon::PIERCE, Weapon::RANGED, LONG_BOW), range{150} {};
};

/*-------------------------------------------------------------------------------------*/
// MAGIC WEAPONS
/*-------------------------------------------------------------------------------------*/

class Wand : public Weapon {
public:
    int magicMight;

    //Constructor
    Wand(string name, float weight, int damage, ItemRarities wandRarity, int magicMight)
    : Weapon(name, weight, damage, wandRarity, Weapon::PIERCE, Weapon::RANGED, WAND), magicMight{magicMight} {};
};

class Staff : public Weapon {
public:
    int magicMight;

    //Constructor
    Staff(string name, float weight, int damage, ItemRarities staffRarity, int magicMight)
    : Weapon(name, weight, damage, staffRarity, Weapon::PIERCE, Weapon::RANGED, STAFF), magicMight{magicMight} {};
};
