#ifndef BUSINESS
#define BUSINESS

#include <iostream>
#include <vector>
#include "item.h"

class Business
{
    private:
        std::string name;
        double cashOnHand;
        double assetsValue;
        double rating;
        double income;
        double expenses;
        double wages;
        double execSalary;
        int month;
        int numStores;
        int numBuildings;
        int numEmployees;
        std::vector<Item*> items;

    public:
        Business(std::string name, double cashOnHand, double assetsValue, double rating);
        void setName();
        void setCashOnHand(double cashOnHand);
        void setAssetsValue(double assetsValue);
        void setRating(double rating);
        void setMonth(int month);
        void setIncome(double income);
        void setExpenses(double expenses);
        void setWages(double wages);
        void setExecSalary(double execSalary);
        void setStores(int numStores);
        void setBuildings(int numBuildings);
        void setEmployees(int numEmployees);
        void incrementMonth();

        std::string getName();
        double getCashOnHand();
        double getAssetsValue();
        double getRating();
        int getMonth();
        double getIncome();
        double getExpenses();
        double getWages();
        double getExecSalary();
        int getStores();
        int getBuildings();
};

#endif // BUSINESS
