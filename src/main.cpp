#include <iostream>
#include "game.h"
using namespace std;

int main()
{
    Item* testItem = createItem("Test Item", 0, 9, 10, 15);
    cout << testItem->getName() << endl;
    cout << testItem->getID() << endl;
    cout << testItem->getProducePrice() << endl;
    cout << testItem->getBuyPrice() << endl;
    cout << testItem->getSellPrice() << endl;

    delete testItem;
    return 0;
}
