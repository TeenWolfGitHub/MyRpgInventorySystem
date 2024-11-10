# RPG INVENTORY SYSTEM by RhommelCasabar

## Overview
This is my first project using C++ as a self-taught programmer (still learning the language and its more complex tools and properties).
So, this project is about creating an inventory system, specifically with the intent to combine Videogames and DnD inventory system.
My goal is to structure in a way that makes this system easy to use and understand, easily implementable in an ongoing game project and expandable.
The code will probably be unoptimized and full of 'beginner' errors, but this project will serve as a learning experience too.
Feel free to review, make suggestions or yell at me: all in the sake of learning and grow as a programmer. Thank you and enjoy(?).

## The Inventory Class
The `Inventory` class is the main focus of this code.
It is a very simple class, but that is intended to be expanded on with methods growing in complexity.
It has only one attribute: a `vector<unique_ptr<Item>>` where all the items will be stored.
It also provides method for: adding and removing items from it, sorting and a simple display method to the console (for testing).

## The Item Class
The `Item` class is the root class of a hierarchy of all possible iterations of items we might wanna add.
It provides a simple template from which new item types can expand on.
It has basic attributes all possible item have: a name, weight,  rarity, and item type flag.
It is intended to be used as a class semi-interface as it provides essential virtual functions tha its subclasses can override to fit their needs.
The `Item` class has these subclasses: `Weapon`, `Potion`, `Armor` (!!To be expanded)

### Weapon Class
The `Weapon` class is a subclass of `Item`.
This item type adds a new appropriate attribute in damage and also useful flags such as weapon type, damage type and attack type.
The `Weapon` class has the following subclasses: `Sword`, `Axe`, `Spear`, `Mace`, `Warhammer`, `ShortBow`, `LongBow`, `Wand`, `Staff` (!!Probably to be expanded)

### Potion Class
(In Progress)

### Armor Class
(In Progress)