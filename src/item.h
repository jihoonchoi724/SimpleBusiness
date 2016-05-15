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

#endif // ITEM
