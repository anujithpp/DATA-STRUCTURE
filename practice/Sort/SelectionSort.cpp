#include <iostream>
#include <algorithm>

using namespace std;


void selectionSort(int arr[], int n) {
    int i, j, min;
    for (i = 0; i < n; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }

        }
        if (min != i) {
            int x = arr[i];
            arr[i] = arr[min];
            arr[min] = x;
        }
    }
    for (i = 0; i < n; i++) {
        cout << arr[i] << ",";
    }
}

int main() {
    int arr[] = {2, 5, 6, 3, 2, 7, 99, 11, 55, 3, 1,};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Sorted array: ";
    //calling function
    selectionSort(arr, n);

    return 0;
}