#include "Array.cpp"

using namespace std;

int main() {
    Array<int> arr;

    arr.insertAtEnd(144);
    arr.insertAtEnd(9);
    arr.insertAtEnd(9999);
    arr.insertAtEnd(5);
    arr.insertAtEnd(18);
    arr.insertAtEnd(100);

    cout << "Original array: ";
    cout << "Array: " << arr << endl;
    int LB = 0;
    int UB = arr.size()-1;
    arr.quickSort(LB,UB);

    cout << "Sorted array: ";
    cout << "Array: " << arr << endl;

    return 0;
}
