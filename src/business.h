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

Business::Business(std::string name, double cashOnHand, double assetsValue, double rating)
{
    this->name = name;
    this->cashOnHand = cashOnHand;
    this->assetsValue = assetsValue;
    this->rating = rating;
    month = 1;
    income = 0;
    expenses = 0;
    wages = 0;
    execSalary = 0;
    numStores = 0;
    numBuildings = 0;
    numEmployees = 0;
}

void Business::setCashOnHand(double cashOnHand)
{
    this->cashOnHand = cashOnHand;
}

void Business::setAssetsValue(double assetsValue)
{
    this->assetsValue = assetsValue;
}

void Business::setRating(double rating)
{
    this->rating = rating;
}

void Business::setMonth(int month)
{
    this->month = month;
}

void Business::setIncome(double income)
{
    this->income = income;
}

void Business::setExpenses(double expenses)
{
    this->expenses = expenses;
}

void Business::setWages(double wages)
{
    this->wages = wages;
}

void Business::setExecSalary(double execSalary)
{
    this->execSalary = execSalary;
}

void Business::setStores(int numStores)
{
    this->numStores = numStores;
}

void Business::setBuildings(int numBuildings)
{
    this->numBuildings = numBuildings;
}

void Business::setEmployees(int numEmployees)
{
    this->numEmployees = numEmployees;
}

void Business::incrementMonth()
{
    if (month < 12)
    {
        ++month;
    }
    else if (month >= 12)
    {
        month = 1;
    }
}

std::string Business::getName()
{
    return name;
}

double Business::getCashOnHand()
{
    return cashOnHand;
}

double Business::getAssetsValue()
{
    return assetsValue;
}

double Business::getRating()
{
    return rating;
}

int Business::getMonth()
{
    return month;
}

double Business::getIncome()
{
    return income;
}

double Business::getExpenses()
{
    return expenses;
}

double Business::getWages()
{
    return wages;
}

double Business::getExecSalary()
{
    return execSalary;
}

int Business::getStores()
{
    return numStores;
}

int Business::getBuildings()
{
    return numBuildings;
}
#endif // BUSINESS
