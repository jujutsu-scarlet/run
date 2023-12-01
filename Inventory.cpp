// Inventory.cpp
#include "Inventory.h"

void Inventory::addItem(const Item& item) {
    items.push_back(item);
}

std::vector<Item> Inventory::getItems() const {
    return items;
}
