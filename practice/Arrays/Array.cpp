#include"Array.h"

template<class T>
Array<T>::Array() {
    LB = 1;
    UB = 0;
}

template<class T>
Array<T>::Array(int LB, int UB, T x[]) {
}

template<class T>
void Array<T>::insert_at_end(T key) {
    UB = UB + 1;
    A[UB] = key;
}

int k;

template<class T>
void Array<T>::insert_at_beg(T key) {
    UB += 1;
    k = UB - 1;
    while (k >= LB) {
        A[k + 1] = A[k];
        k -= 1;
    }
    A[LB] = key;
}

template<class T>
void Array<T>::insert_at_pos(T key, int pos) {

    UB += 1;
    k = UB - 1;
    while (k >= pos) {
        A[k + 1] = A[k];
        k -= 1;
    }
    A[pos] = key;
}

template<class T>
void Array<T>::delete_at_beg() {
    LB += 1;

}

template<class T>
void Array<T>::delete_at_end() {
    UB -= 1;

}

template<class T>
void Array<T>::delete_at_index(int pos) {
    if (LB <= pos and UB >= pos) {
        k = pos + 1;
        while (k <= UB) {
            A[k - 1] = A[k];
            k += 1;
        }
        UB -= 1;
    } else {
        cout << "OUT OF BOUND";
    }

}

template<class T>
T Array<T>::linear_search(T key) {
    int index = NULL;
    int i = LB;
    while (i <= UB) {
        if (A[i] == key) {
            index = i;
            break;
        }
        i = i + 1;
    }
    return index;
}

template<class T>
void Array<T>::swap(int p, int q) {
    T t = A[p];
    A[p] = A[q];
    A[q] = t;
}

template<class T>
void Array<T>::selection_sort() {
    for (int i = LB; i < UB; i++) {
        int min = i;
        for (int j = i + 1; j <= UB; j++) {
            if (A[j] < A[min]) {
                min = j;
            }
        }
        if (min != i) {
            swap(i, min);
        }
    }
}

template<class T>
T Array<T>::binary_search(T key) {
    int p = LB;
    int q = UB;
    while (p <= q) {
        int mid = (p + q) / 2;
        if (A[mid] > key) {
            q = mid - 1;
        } else if (A[mid] < key) {
            p = mid + 1;
        } else {
            return mid;
        }
    }
    return NULL;
}

template<class T>
void Array<T>::bubble_sort() {
    for (int i = LB; i < UB; i++) {
        for (int j = LB; j < UB + LB - i; j++) {
            if (A[j] > A[j + 1]) {
                swap(j, j + 1);
            }
        }
    }
}

template<class T>
void Array<T>::merge(int LB, int mid, int UB) {
    int n1 = mid - LB + 1;  // Size of left subarray
    int n2 = UB - mid;      // Size of right subarray

    // Create temporary arrays to store the left and right subarrays
    T L[n1], R[n2];

    // Copy data to temporary arrays
    for (int i = 0; i < n1; i++) {
        L[i] = A[LB + i];
    }
    for (int j = 0; j < n2; j++) {
        R[j] = A[mid + 1 + j];
    }

    // Merge the temporary arrays back into A[LB..UB]
    int i = 0;  // Initial index of left subarray
    int j = 0;  // Initial index of right subarray
    int k = LB; // Initial index of merged subarray

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            A[k] = L[i];
            i++;
        } else {
            A[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if any
    while (i < n1) {
        A[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if any
    while (j < n2) {
        A[k] = R[j];
        j++;
        k++;
    }
}


template<class T>
void Array<T>::merge_sort(int LB, int UB) {
    if (LB < UB) {
        int m = (LB + UB) / 2;
        merge_sort(LB, m);          // Sort the left subarray
        merge_sort(m + 1, UB);      // Sort the right subarray
        merge(LB, m, UB);           // Merge the sorted subarrays
    }
}

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
