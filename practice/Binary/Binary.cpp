#include "Binary.h"
#include <iostream>
using namespace std;

int main() {
	Binary obj1;
	int n;

	cout << "Enter a number to convert to binary: ";
	cin >> n;

	obj1.toBinary(n);
	int x = obj1.toBinaryRecursive(n);
	cout<<"Binary equalent using recursive function: ";
	cout << x;
	return 0;
}