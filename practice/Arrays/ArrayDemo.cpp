#include "Array.cpp"

int main() {
    //Insertion Operations
    cout << "INSERTION OPERATIONS" << endl;
    Array<int> myArray;
    cout << "INSERTION AT END " << endl;
    myArray.insert_at_end(2);
    myArray.insert_at_end(6);
    myArray.insert_at_end(1);
    cout << myArray << endl;

    cout << "INSERTION AT BEGINNING " << endl;
    myArray.insert_at_beg(10);
    myArray.insert_at_beg(12);
    myArray.insert_at_beg(14);
    cout << myArray << endl;

    cout << "INSERTION AT POSITION ";
    myArray.insert_at_pos(20, 3);
    myArray.insert_at_pos(30, 4);
    cout << myArray << endl;

    //Searching operations
    cout << "SEARCHING OPERATIONS: " << endl;
    cout << "LINEAR SEARCH " << endl;
    int lin = myArray.linear_search(6);                                  //Linear search called
    cout << "INDEX POSITION :" << lin << endl;
    cout << endl;
    cout << "BINARY SEARCH " << endl;
    int ser = myArray.binary_search(30);                                 //Binary search called
    cout << "INDEX POSITION:" << ser << endl;
    cout << endl;


    //Deletion operations
    cout << "DELETION OPERATIONS: " << endl;
    cout << "DELETION AT BEGINNING " << endl;
    myArray.delete_at_beg();
    cout << myArray << endl;

    cout << "DELETION AT END " << endl;
    myArray.delete_at_end();
    cout << myArray << endl;

    cout << "DELETION AT INDEX " << endl;
    myArray.delete_at_index(3);
    cout << myArray << endl;



    //Sorting operations
    cout << "SORTING OPERATIONS: " << endl;
    myArray.selection_sort();                                         //Selection Sort called
    cout << "AFTER SELECTION SORT: " << myArray << endl;

    myArray.insert_at_beg(23);                                   //made array unsorted

    myArray.bubble_sort();                                            //Bubble sort called
    cout << "AFTER BUBBLE SORT:" << myArray;

    myArray.insert_at_beg(99);                                    //made array unsorted
    cout<<"Unsorted Array: "<<myArray;

    myArray.merge_sort(0, 8);
    cout<<"AFTER MERGE SORT: "<<myArray;


    return 0;
}
