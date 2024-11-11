#include "ItemList.h"

ItemList::ItemList(){
    
    itemDescriptions["Rusty Iron Sword"] = "A rusty iron sword. Not very effective but still functional.";
    itemDescriptions["Old Short Sword"] = "An old short sword, showing signs of wear.";
    itemDescriptions["Traveler's Sword"] = "A basic sword, favored by travelers for its lightweight and simplicity.";
    itemDescriptions["Broken Long Sword"] = "A long sword with a broken blade. It can still be used, though unreliably.";
    itemDescriptions["Worn Out Scimitar"] = "A curved blade that's seen better days.";
    itemDescriptions["Simple Bronze Blade"] = "A simple blade made of bronze, offering minimal protection.";
    itemDescriptions["Blunt Training Sword"] = "Used for training, it has a blunt edge.";

    itemDescriptions["Steel Long Sword"] = "A sturdy steel long sword favored by many fighters.";
    itemDescriptions["Hunter's Blade"] = "A blade suited for hunting both animals and enemies alike.";
    itemDescriptions["Gladiator's Short Sword"] = "A short sword used by gladiators in the arena.";
    itemDescriptions["Orcish Cleaver"] = "A brutal cleaver with a heavy edge, used by orcish warriors.";
    itemDescriptions["Jagged Edge Saber"] = "A saber with a jagged edge, delivering painful wounds.";
    itemDescriptions["Serrated Sword"] = "This sword has serrations along the edge to cause extra damage.";
    itemDescriptions["Knight's Iron Sword"] = "A reliable iron sword often wielded by knights.";

    itemDescriptions["Elven Silver Sword"] = "A finely crafted silver sword from elven smiths.";
    itemDescriptions["Enchanted Steel Sword"] = "A steel sword enchanted with protective magic.";
    itemDescriptions["Darkwood Blade"] = "A rare blade made from darkwood, light yet durable.";
    itemDescriptions["Dwarven Battle Gladius"] = "A heavy gladius forged by dwarves for battle.";
    itemDescriptions["Searing Flame Saber"] = "A saber imbued with the essence of fire, leaving burns.";
    itemDescriptions["Moonlit Blade"] = "Shimmers under moonlight, with a sharp and deadly edge.";
    itemDescriptions["Sword of the Fallen"] = "Once wielded by a fallen hero, it carries a somber aura.";

    itemDescriptions["Dragon Slayer"] = "A legendary sword said to have slain many dragons.";
    itemDescriptions["Sword of the Phoenix"] = "Has powers of rebirth, regenerating its edge after each strike.";
    itemDescriptions["Shadowfang"] = "A dark sword that absorbs the essence of defeated enemies.";
    itemDescriptions["Thunderstrike"] = "A sword that calls forth thunder with each swing.";
    itemDescriptions["Stormbringer"] = "A sword that brings storms wherever it goes.";
    itemDescriptions["Blood Oath"] = "Bound by an oath of blood, it thirsts for battle.";
    itemDescriptions["Blade of the Ancients"] = "Forged by the ancients, it holds untold power.";

    itemDescriptions["Blade of Eternity"] = "A timeless blade that never dulls.";
    itemDescriptions["Celestial Edge"] = "A sword with an edge as sharp as starlight.";
    itemDescriptions["Frost Reaver"] = "A freezing sword that chills foes to the bone.";
    itemDescriptions["Inferno’s Wrath"] = "Burns with the fury of an inferno, scorching enemies.";
    itemDescriptions["Wraith Blade"] = "A spectral blade, able to pass through armor.";
    itemDescriptions["Soulrender"] = "Takes not only life but the very soul of its victims.";
    itemDescriptions["Wrath of the Gods"] = "Carries the wrath of divine beings, feared by all.";

    itemDescriptions["Excalibur"] = "The legendary sword of kings, bestowed with magic.";
    itemDescriptions["Sword of the Forgotten King"] = "A relic from a bygone era, lost to time.";
    itemDescriptions["Shadow of Aetherius"] = "A blade cast in darkness, from a mysterious realm.";
    itemDescriptions["The Final Breath"] = "The last weapon of a warrior, holding their dying wish.";
    itemDescriptions["Eclipse Blade"] = "Forged in darkness, shining like a rare eclipse.";
}

string ItemList::getDescription(const string &itemName) const {
    auto it = itemDescriptions.find(itemName);
    return it != itemDescriptions.end() ? it->second : "Description not found";
}