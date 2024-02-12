#include <iostream>

using namespace std;

void merge(int arr[], int p, int q, int r) {

    int a1 = q - p + 1;
    int a2 = r - q;

    int L[a1], M[a2];                        //initializing the size of the two sub arrays

    for (int i = 0; i < a1; i++) {
        L[i] = arr[p + i];
    }
    for (int j = 0; j < a2; j++) {
        M[j] = arr[q + 1 + j];
    }

    int i, j, k;
    i = 0;
    j = 0;
    k = p;

    while (i < a1 && j < a2) {
        if (L[i] <= M[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = M[j];
            j++;
        }
        k++;
    }

    while (i < a1) {
        arr[k] = L[i];
        i++;
        k++;
    }
}

void mergesort(int arr[], int l, int r) {
    if (l < r) {
        int m = (l + r) / 2;
        mergesort(arr, l, m);
        mergesort(arr, m + 1, r);

        merge(arr, l, m, r);

    }
}

void display(int arr[], int size) {                          //display function to print array
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << ",";
    }
}

int main() {
    int arr[] = {2, 66, 82, 14, 2, 3, 1, 4, 6, 9, 22};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Unsorted Array:" << endl;
    display(arr, size);
    cout << endl;

    mergesort(arr, 0, size - 1);

    cout << "Sorted Array: " << endl;
    display(arr, size);

    return 0;
}