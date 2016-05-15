#include <iostream>
#include <string>
#include "business.h"
#include "item.h"

Business* createBusiness(std::string name, double cashOnHand, double assetsValue, double rating)
{
    Business* b = new Business(name, cashOnHand, assetsValue, rating);
    return b;
}

Item* createItem(std::string name, int id, double producePrice, double buyPrice, double sellPrice)
{
    Item* i = new Item(name, id, producePrice, buyPrice, sellPrice);
    return i;
}
