#include <iostream>
#include "arr.h"
using namespace std;

int main()
{
    int arr[4] = {1, 2, 3, 4};
    Array obj1;
    cout << "Array Elements: ";
    obj1.printArray(arr, 4);
    cout << endl;
    cout << "Array after insertion: ";
    obj1.arrayInsertAtEnd(arr, 4, 69);
    return 0;
}