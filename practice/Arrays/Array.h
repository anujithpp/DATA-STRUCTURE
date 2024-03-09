#include<iostream>
#include<ostream>

using namespace std;

template<class T>
class Array {
    int LB{}, UB{};
    T A[100];
public:
    Array();

    [[maybe_unused]] Array(int, int, T[]);

    void insert_at_end(T);

    void insert_at_beg(T);

    void insert_at_pos(T, int);

    void delete_at_beg();

    void delete_at_end();

    void delete_at_index(int);

    T linear_search(T);

    T binary_search(T);

    void swap(int, int);

    void merge(int LB,int mid, int UB);

    void selection_sort();

    void bubble_sort();

    void merge_sort(int LB, int UB);

    /*
     void insertion_sort();
     int partition(int,int);
     void quick_sort(int,int);
     void rotate_clockwise(int);
     void rotate_anticlockwise(int);
     void distinct();
     void frequency();
     void replace(T,T);
     int length();
     void reverse(int);
     */

    template<class U>
    friend ostream &operator<<(ostream &, Array<U>);
};

