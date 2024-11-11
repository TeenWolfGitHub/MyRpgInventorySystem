#include "basics.h"
#include "Item.h"
#include "Inventory.h"
#include "lists.h"

unique_ptr<Sword> ItemNamed(gameSwordsNames name);
unique_ptr<Axe> ItemNamed(gameAxesNames name);
vector<gameSwordsNames> generateRandomSwords(int numOfSwordsToGenerate);

int main() {

    std::srand(static_cast<unsigned int>(std::time(0)));  // Seed the random number generator

    // Initialize Test Inventory
    Inventory MyInventory;

    MyInventory.displayInventory();

    for (auto weaponToAdd : generateRandomSwords(10)){
        MyInventory.addItem(std::move(ItemNamed(weaponToAdd)));
    }

    MyInventory.displayInventory();

    MyInventory.sortByName();

    MyInventory.sortByType();

    MyInventory.displayInventory();

    return 0;
}

unique_ptr<Sword> ItemNamed(gameSwordsNames name) {
    return std::make_unique<Sword>(SwordsList.at(name));
}

unique_ptr<Axe> ItemNamed(gameAxesNames name) {
    return std::make_unique<Axe>(AxesList.at(name));
}

vector<gameSwordsNames> generateRandomSwords(int numOfSwordsToGenerate){

    std::vector<gameSwordsNames> generatedSwordNames;

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