#ifndef ITEM
#define ITEM

#include <iostream>
#include <string>

class Item
{
    private:
        std::string name;
        double producePrice;
        double buyPrice;
        double sellPrice;
        int numOwned;
        unsigned id;

    public:
        Item(std::string name, int id, double producePrice, double buyPrice, double sellPrice);
        void setNumOwned(unsigned numOwned);
        void setProducePrice(double producePrice);
        void setBuyPrice(double buyPrice);
        void setSellPrice(double sellPrice);
        std::string getName();
        unsigned getID();
        double getProducePrice();
        double getBuyPrice();
        double getSellPrice();
        int getNumOwned();

};

Item::Item(std::string name, int id, double producePrice, double buyPrice, double sellPrice)
{
    this->name = name;
    this->producePrice = producePrice;
    this->buyPrice = buyPrice;
    this->sellPrice = sellPrice;
    this->id = id;
    this->numOwned = 0;
}

void Item::setNumOwned(unsigned numOwned)
{
    this->numOwned = numOwned;
}

void Item::setProducePrice(double producePrice)
{
    this->producePrice = producePrice;
}

void Item::setBuyPrice(double buyPrice)
{
    this->buyPrice = buyPrice;
}

void Item::setSellPrice(double sellPrice)
{
    this->sellPrice = sellPrice;
}

std::string Item::getName()
{
    return name;
}

unsigned Item::getID()
{
    return id;
}

double Item::getProducePrice()
{
    return producePrice;
}

double Item::getBuyPrice()
{
    return buyPrice;
}

double Item::getSellPrice()
{
    return sellPrice;
}

int Item::getNumOwned()
{
    return numOwned;
}
#endif // ITEM
