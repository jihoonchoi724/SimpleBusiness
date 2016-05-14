#include <iostream>
#include "item.h"
#include "business.h"
using namespace std;

int main()
{
    Item i("Sample Item", 0, 9, 10, 12);
    cout << "Name: " << i.getName() << endl;
    cout << "ID: " << i.getID() << endl;
    cout << "Production Price: $" << i.getProducePrice() << endl;
    cout << "Buying Price: $" << i.getBuyPrice() << endl;
    cout << "Selling Price: $" << i.getSellPrice() << endl;


    return 0;
}
