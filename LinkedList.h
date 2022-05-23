#ifndef _LINKEDLIST_H
#define _LINKEDLIST_H

#include "Node.h"

class LinkedList

{
    private:
    Node* head;

    public:
    LinkedList();
    LinkedList(int[], int);
    void addFront(int);
    void addEnd(int);
    void addAtPosition(int, int);
    int search(int);
    void deleteFront();
    void deleteEnd();
    void deletePosition(int);
    int getItem(int);
    void printItems();
    ~LinkedList();
};

#endif