#include <iostream>

void bubbleSort(int pInt[5], int i, int i1);

using namespace std;

void swap(int * arr[], int i, int j) {
    int *temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

template<class T>
void bubbleSort(int* Arr[], int LB, int UB) {
    for (int i = LB; i <= (UB - 1); i++) {
        for (int j = LB; j <= UB + (LB - i -
                                    1); j++) {          //Complexity O(n²) because of 2 loops (one inside another)
            if (Arr[i] > Arr[j + 1]) {
                swap(Arr, j, j + 1);
            }
        }
    }
    for (int i = 0; i < UB; i++) {
        cout << Arr[i] << " ";
    }
}

int main() {
    int arr[] = {5, 1, 4, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array before sorting: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Array after sorting: ";
    bubbleSort(arr, 0, n - 1); // Sort the entire array
    cout << endl;

    return 0;
}
