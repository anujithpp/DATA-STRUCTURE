#include <iostream>

using namespace std;

template<class T>

void bubbleSort(T Arr[], int LB, int UB) {
    for (int i = LB; i <= (UB - 1); i++) {
        for (int j = LB; j <= UB + (LB - i - 1); j++){                     //Complexity O(n²) because of 2 loops (one inside another)
            if (Arr[i]>Arr[j+1]){
                swap(Arr,j,j+1);
            }
        }
    }
}