#include <iostream>
#include "unsortedtype.h"

using namespace std;

int main()
{
    UnsortedType<int> intList;
    intList.InsertItem(1);
    intList.InsertItem(2);
    intList.InsertItem(3);
    intList.InsertItem(4);
    intList.InsertItem(4);
    intList.InsertItem(5);

    int value;
    cout << "List with duplicates is: ";
    while (intList.GetNextItem(value))
    {
        cout << value<<" ";
    }
    cout << endl;
    return 1;
}