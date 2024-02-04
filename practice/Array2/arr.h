#include <iostream>
using namespace std;

class Array
{
public:
    void printArray(int a[], int n)
    {
        int i;
        for (i = 0; i < n; i++)
        {
            cout << a[i] << ",";
        }
    }
};