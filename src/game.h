#include <iostream>
#include <string>
#include "business.h"
#include "item.h"

Business* createBusiness(std::string name, double cashOnHand, double assetsValue, double rating);
Item* createItem(std::string name, int id, double producePrice, double buyPrice, double sellPrice);
void menu(std::string name);
