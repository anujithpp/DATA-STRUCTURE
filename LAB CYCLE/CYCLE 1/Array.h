#include <iostream>
#include <ostream>

using namespace std;

template<class T>
class Array {
    int LB;
    int UB;
    T A[100];

public:
    Array();

    Array(int, int, T[]);

    //insertion Operations
    void insertAtBeginning(T);

    void insertAtEnd(T);

    void insertAtPosition(T, int);

    //deletion Operations
    void deleteAtBeginning();

    void deleteAtEnd();

    void deleteAtPosition(int);

    //Searching Algorithms
    T linearSearch(T);


    //Sorting algorithms
    void quickSort(int LB, int UB);
    void bubbleSort();



    //additional methods used inside other methods
    int partition(int,int);
    int size();
    void swap(T &a, T &b);




    template<class U>
    friend ostream &operator<<(ostream &, Array<U>);


};