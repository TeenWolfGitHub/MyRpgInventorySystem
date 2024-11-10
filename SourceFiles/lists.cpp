#include "lists.h"

const vector<Sword> gameSwordsList = {
    // Common swords
    Sword{"Rusty Iron Sword", 5.0, 10, Item::COMMON},
    Sword{"Old Short Sword", 3.5, 12, Item::COMMON},
    Sword{"Traveler's Sword", 2.0, 8, Item::COMMON},
    Sword{"Broken Long Sword", 4.8, 9, Item::COMMON},
    Sword{"Worn Out Scimitar", 4.2, 11, Item::COMMON},
    Sword{"Simple Bronze Blade", 4.5, 10, Item::COMMON},
    Sword{"Blunt Training Sword", 3.0, 7, Item::COMMON},

    // Uncommon swords
    Sword{"Steel Long Sword", 6.5, 18, Item::UNCOMMON},
    Sword{"Hunter's Blade", 4.0, 16, Item::UNCOMMON},
    Sword{"Gladiator's Short Sword", 4.2, 14, Item::UNCOMMON},
    Sword{"Orcish Cleaver", 6.8, 20, Item::UNCOMMON},
    Sword{"Jagged Edge Saber", 5.3, 19, Item::UNCOMMON},
    Sword{"Serrated Sword", 3.7, 15, Item::UNCOMMON},
    Sword{"Knight's Iron Sword", 6.2, 17, Item::UNCOMMON},

    // Rare swords
    Sword{"Elven Silver Sword", 5.0, 25, Item::RARE},
    Sword{"Enchanted Steel Sword", 6.0, 30, Item::RARE},
    Sword{"Darkwood Blade", 5.5, 22, Item::RARE},
    Sword{"Dwarven Battle Gladius", 7.8, 28, Item::RARE},
    Sword{"Searing Flame Saber", 6.2, 27, Item::RARE},
    Sword{"Moonlit Blade", 5.4, 26, Item::RARE},
    Sword{"Sword of the Fallen", 5.8, 29, Item::RARE},

    // Epic swords
    Sword{"Dragon Slayer", 8.0, 45, Item::EPIC},
    Sword{"Sword of the Phoenix", 7.5, 42, Item::EPIC},
    Sword{"Shadowfang", 6.8, 38, Item::EPIC},
    Sword{"Thunderstrike", 7.6, 44, Item::EPIC},
    Sword{"Stormbringer", 6.9, 40, Item::EPIC},
    Sword{"Blood Oath", 7.3, 43, Item::EPIC},
    Sword{"Blade of the Ancients", 8.2, 46, Item::EPIC},

    // Legendary swords
    Sword{"Blade of Eternity", 7.0, 55, Item::LEGENDARY},
    Sword{"Celestial Edge", 6.5, 52, Item::LEGENDARY},
    Sword{"Frost Reaver", 7.2, 50, Item::LEGENDARY},
    Sword{"Inferno’s Wrath", 7.7, 54, Item::LEGENDARY},
    Sword{"Wraith Blade", 6.8, 53, Item::LEGENDARY},
    Sword{"Soulrender", 8.0, 56, Item::LEGENDARY},
    Sword{"Wrath of the Gods", 7.4, 57, Item::LEGENDARY},

    // Unique sword
    Sword{"Excalibur", 10.0, 70, Item::UNIQUE},
    Sword{"Sword of the Forgotten King", 9.8, 68, Item::UNIQUE},
    Sword{"Shadow of Aetherius", 8.5, 66, Item::UNIQUE},
    Sword{"The Final Breath", 8.3, 65, Item::UNIQUE},
    Sword{"Eclipse Blade", 9.0, 67, Item::UNIQUE}
};

const vector<Axe> gameAxesList = {
    // Common axes
    Axe{"Rusty Hatchet", 4.5, 10, Item::COMMON},
    Axe{"Splintered Woodcutter's Axe", 6.0, 12, Item::COMMON},
    Axe{"Basic War Axe", 7.5, 15, Item::COMMON},
    Axe{"Chipped Iron Axe", 5.8, 11, Item::COMMON},
    Axe{"Dull Lumberjack's Axe", 6.2, 13, Item::COMMON},

    // Uncommon axes
    Axe{"Steel Battle Axe", 8.0, 20, Item::UNCOMMON},
    Axe{"Hunter’s Hatchet", 5.5, 18, Item::UNCOMMON},
    Axe{"Orcish Hatchet", 9.0, 22, Item::UNCOMMON},
    Axe{"Sharp Bone Axe", 6.8, 19, Item::UNCOMMON},
    Axe{"Twinblade Axe", 7.0, 21, Item::UNCOMMON},

    // Rare axes
    Axe{"Elven War Axe", 6.8, 28, Item::RARE},
    Axe{"Dwarven Forge Hammer", 8.5, 30, Item::RARE},
    Axe{"Darkwood Cleaver", 7.5, 26, Item::RARE},
    Axe{"Flameforged Battle Axe", 8.0, 32, Item::RARE},
    Axe{"Frostbound Axe", 7.8, 29, Item::RARE},

    // Epic axes
    Axe{"Dragon's Maw", 10.0, 40, Item::EPIC},
    Axe{"Inferno's Edge", 9.5, 42, Item::EPIC},
    Axe{"Thunderstrike Axe", 9.2, 39, Item::EPIC},
    Axe{"Axe of the Fallen", 8.5, 38, Item::EPIC},
    Axe{"Stormcaller", 9.3, 41, Item::EPIC},

    // Legendary axes
    Axe{"Godslayer", 10.5, 50, Item::LEGENDARY},
    Axe{"Celestial Reaver", 9.8, 48, Item::LEGENDARY},
    Axe{"Eternal Flame Axe", 10.2, 49, Item::LEGENDARY},
    Axe{"Axe of the Ancients", 9.6, 47, Item::LEGENDARY},
    Axe{"Frostmourne", 10.0, 52, Item::LEGENDARY},

    // Unique axes
    Axe{"Axe of Ragnarok", 12.0, 60, Item::UNIQUE},
    Axe{"Worldbreaker", 11.5, 58, Item::UNIQUE},
    Axe{"Eclipse Axe", 11.0, 55, Item::UNIQUE},
    Axe{"Soul Cleaver", 10.8, 57, Item::UNIQUE},
    Axe{"The Endbringer", 12.5, 62, Item::UNIQUE}
};