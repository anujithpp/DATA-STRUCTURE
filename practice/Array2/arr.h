#include <iostream>
using namespace std;

class Array
{
public:
    // Function to print every element in an array (Array Traversal).
    void printArray(int a[], int UB)
    {
        int i;
        for (i = 0; i < UB; i++)
        {
            cout << a[i] << ",";
        }
    }

    // Method for inserting an element in an array.

    void arrayInsertAtEnd(int a[], int UB, int key)
    {
        a[UB++] = key;

        // printing new array
        int i = 0;
        for (i = 0; i < UB; i++)
        {
            cout << a[i] << ",";
        }
    }
};