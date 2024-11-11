#pragma once

#include <unordered_map>
#include <string>

using std::string;
using std::unordered_map;

class ItemList {
public:

    friend class Item;

    string getDescription(const string &itemName) const;

    //Constructor
    ItemList();

private:    
    unordered_map<string, string> itemDescriptions;
};