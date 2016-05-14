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
        Business(std::string name, double cashOnHand, double assetsValue, double rating, int month)
        {
            this->name = name;
            this->cashOnHand = cashOnHand;
            this->assetsValue = assetsValue;
            this->rating = rating;
            this->month = month;
            income = 0;
            expenses = 0;
            wages = 0;
            execSalary = 0;
            numStores = 0;
            numBuildings = 0;
            numEmployees = 0;
        }

        void setCashOnHand(double cashOnHand)
        {
            this->cashOnHand = cashOnHand;
        }

        void setAssetsValue(double assetsValue)
        {
            this->assetsValue = assetsValue;
        }

        void setRating(double rating)
        {
            this->rating = rating;
        }

        void setMonth(int month)
        {
            this->month = month;
        }

        void setIncome(double income)
        {
            this->income = income;
        }

        void setExpenses(double expenses)
        {
            this->expenses = expenses;
        }

        void setWages(double wages)
        {
            this->wages = wages;
        }

        void setExecSalary(double execSalary)
        {
            this->execSalary = execSalary;
        }

        void setStores(int numStores)
        {
            this->numStores = numStores;
        }

        void setBuildings(int numBuildings)
        {
            this->numBuildings = numBuildings;
        }

        void setEmployees(int numEmployees)
        {
            this->numEmployees = numEmployees;
        }

        std::string getName()
        {
            return name;
        }

        double getCashOnHand()
        {
            return cashOnHand;
        }

        double getAssetsValue()
        {
            return assetsValue;
        }

        double getRating()
        {
            return rating;
        }

        int getMonth()
        {
            return month;
        }

        double getIncome()
        {
            return income;
        }

        double getExpenses()
        {
            return expenses;
        }

        double getWages()
        {
            return wages;
        }

        double getExecSalary()
        {
            return execSalary;
        }

        int getStores()
        {
            return numStores;
        }

        int getBuildings()
        {
            return numBuildings;
        }

};

#endif // BUSINESS
