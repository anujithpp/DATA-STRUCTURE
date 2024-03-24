#include "Array.h"

template<class T>
Array<T>::Array() {
    LB = 1;
    UB = 0;
}

template<class T>
Array<T>::Array(int LB, int UB, T X[]) {
}

template<class T>
void Array<T>::insertAtBeginning(T key) {
    UB += 1;
    int k = UB - 1;
    while (k >= LB) {
        A[k + 1] = A[k];
        k--;
    }
    A[LB] = key;
}

template<class T>
void Array<T>::insertAtEnd(T key) {
    UB += 1;
    A[UB] = key;
}

template<class T>
void Array<T>::insertAtPosition(T key, int index) {
    UB += 1;
    int k = UB - 1;
    while (k >= index) {
        A[k + 1] = A[k];
        k--;
    }
    A[index] = key;
}

template<class T>
void Array<T>::deleteAtBeginning() {
    LB += 1;
}

template<class T>
void Array<T>::deleteAtEnd() {
    UB -= 1;
}

template<class T>
void Array<T>::deleteAtPosition(int index) {
    if (LB <= index && index <= UB) {
        for (int i = index; i < UB; ++i) {
            A[i] = A[i + 1];
        }
        UB--;
    } else {
        cout << "Out of Bound";
    }
}

//Searching algorithms
template<class T>
T Array<T>::linearSearch(T key) {
    int index = -1;
    int i = LB;
    while (i <= UB) {
        if (A[i] == key) {
            index = i;
            break;
        }
        i++;
    }
    return index;
}

//Sorting algorithms
template<class T>
void Array<T>::quickSort(int LB, int UB) {
    if (LB < UB) {
        int pi = partition(LB, UB);
        quickSort(LB, pi - 1);
        quickSort(pi + 1, UB);
    }
}

template<class T>
void Array<T>::bubbleSort(){
    int n = UB +1;

    for (int i = 0; i < n - 1; ++i){
        for (int j = 0; j < n - i - 1; ++j) {
            if (A[j] > A[j + 1]) {
                swap(A[j], A[j + 1]);
            }
        }
    }
}


//additional methods used inside other methods
template<class T>
int Array<T>::partition(int LB, int UB) {
    T pivot = A[UB];
    int i = LB - 1;
    for (int j = LB; j < UB; ++j) {
        if (A[j] <= pivot) {
            ++i;
            swap(A[i], A[j]);
        }
    }
    swap(A[i + 1], A[UB]);
    return i + 1;
}

template<class T>
int Array<T>::size()  {
    return UB + 1;
}                 //returns the size of array *( size-1 = upperbound)

template<class T>
void Array<T>::swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}



//Operator Overloading of output stream
template<class U>
ostream &operator<<(ostream &os, Array<U> M) {
    int i;
    os << endl;
    for (i = M.LB; i <= M.UB; i++) {
        os << M.A[i] << " ";
    }
    os << endl;
    return os;
}