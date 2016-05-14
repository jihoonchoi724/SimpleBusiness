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
        Item(std::string name, int id, double producePrice, double buyPrice, double sellPrice)
        {
            this->name = name;
            this->producePrice = producePrice;
            this->buyPrice = buyPrice;
            this->sellPrice = sellPrice;
            this->id = id;
            this->numOwned = 0;
        }

        void setNumOwned(unsigned numOwned)
        {
            this->numOwned = numOwned;
        }

        void setProducePrice(double producePrice)
        {
            this->producePrice = producePrice;
        }

        void setBuyPrice(double buyPrice)
        {
            this->buyPrice = buyPrice;
        }

        void setSellPrice(double sellPrice)
        {
            this->sellPrice = sellPrice;
        }

        std::string getName()
        {
            return name;
        }

        unsigned getID()
        {
            return id;
        }

        double getProducePrice()
        {
            return producePrice;
        }

        double getBuyPrice()
        {
            return buyPrice;
        }

        double getSellPrice()
        {
            return sellPrice;
        }

        int getNumOwned()
        {
            return numOwned;
        }
};



#endif // ITEM
