#include <iostream>

using namespace std;

class LinkedList {
private:
    struct Node {
        int data;
        Node *link;

        Node(int value) : data(value), link(nullptr) {}
    };

    Node *head;

public:
    LinkedList();

    void display();

    void insertAtBeginning(int key);

    void insertAtEnd(int key);

    void insertAtIndex(int index, int key);

    void deleteAtBeginning();

    void deleteAtEnd();

    void deleteAtIndex(int index);

};
