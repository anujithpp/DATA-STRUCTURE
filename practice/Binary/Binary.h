#include <iostream>
using namespace std;

class Binary
{
public:
    // Itrative function to convert Decimal to Binary
    void toBinary(int n)
    {
        int b[100];
        int i = n;
        int c = 0;
        while (i > 0)
        {
            int r = i % 2;
            b[c] = r;
            i = i / 2;
            c = c + 1;
        }
        cout << "Binary equivalent: ";
        for (int j = c - 1; j >= 0; j--)
        {
            cout << b[j];
        }
        cout << endl;
    }

    // Recursive function to convert Decimal to Binary
    int toBinaryRecursive(int n)
    {
        if (n == 0)
        {
            return 0;
        }
        else
            return toBinaryRecursive(n / 2) * 10 + (n % 2);
    }
};
