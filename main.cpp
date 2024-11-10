#include "basics.h"
#include "Item.h"
#include "WeaponTypes.h"
#include "Inventory.h"
#include "lists.h"
#include "colors.hpp"

unique_ptr<Sword> ItemNamed(gameSwordsNames name);
unique_ptr<Axe> ItemNamed(gameAxesNames name);
vector<gameSwordsNames> generateRandomSwords(int numOfSwordsToGenerate);

int main() {
    colors::setColor(colors::red); // Sets the text color to be red
    colors::setBold();             // Sets the text to be bold

    std::srand(static_cast<unsigned int>(std::time(0)));  // Seed the random number generator

    Inventory MyInventory;

    MyInventory.displayInventory();

    for (auto weaponToAdd : generateRandomSwords(8)){
        MyInventory.addItem(std::move(ItemNamed(weaponToAdd)));
    }

    MyInventory.displayInventory();

    MyInventory.sortByName();

    MyInventory.sortByType();

    MyInventory.displayInventory();

    return 0;
}

unique_ptr<Sword> ItemNamed(gameSwordsNames name) {
    return std::make_unique<Sword>(gameSwordsList.at(name));
}

unique_ptr<Axe> ItemNamed(gameAxesNames name) {
    return std::make_unique<Axe>(gameAxesList.at(name));
}

vector<gameSwordsNames> generateRandomSwords(int numOfSwordsToGenerate){

    std::vector<gameSwordsNames> generatedSwordNames;  // To store the indexes of previously generated swords

    for (int i = 0; i < numOfSwordsToGenerate; i++) {
        gameSwordsNames WeaponAtThisIndex;

        // Generate a unique sword index
        bool alreadyGenerated = false;
        while (!alreadyGenerated) {
            WeaponAtThisIndex = static_cast<gameSwordsNames>(rand() % NUM_SWORDS);
            
            // Check if the sword has been generated already
            if (std::find(generatedSwordNames.begin(), generatedSwordNames.end(), WeaponAtThisIndex) == generatedSwordNames.end()) {
                generatedSwordNames.push_back(WeaponAtThisIndex);
                alreadyGenerated = true;
            }
        }
    }

    return generatedSwordNames;
}