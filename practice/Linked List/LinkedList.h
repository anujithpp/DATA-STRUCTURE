#include <iostream>
#include<ostream>

using namespace std;

template<class T>

class Node {
    T data;
    Node *link;
public:
    Node(T);

    T get_data();

    void set_link(Node *link);

    Node *get_link();

    void set_data(T);

};

template<class T>
class LinkedList {
    Node<T> *head;
public:
    void display();

    void insertAtBeginning(T);

    void insertAtEnd(T);

    void insertAfterKey(T, T);

    void insertBeforeKey(T, T);

    void deleteAtBeginning();

    void deleteAtEnd();

    void deleteAtKey(T);

    void search(T);

    void reverse();

    void sorting();

    template<class U>
    friend ostream &operator<<(ostream &, LinkedList<U>);
};

