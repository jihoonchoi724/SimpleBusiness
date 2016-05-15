#include <iostream>
#include <string>
#include "business.h"
#include "item.h"

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

void Business::setName()
{
    std::cout << "What do you want to rename your business to? ";
    getline(std::cin, name);
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
