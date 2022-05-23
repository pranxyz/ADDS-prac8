#include "LinkedList.h"
#include <iostream>
#include <limits>
using namespace std;

LinkedList::LinkedList()

{
    head = nullptr;
}

LinkedList::LinkedList(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        addEnd(arr[i]);
    }
}

void LinkedList::addFront(int newItem)
{
    if (head == nullptr)
    {
        head = new Node(newItem);
    }
    else
    {
        Node* newNode = new Node(newItem);
        newNode->setnext(head);
        head = newNode;
    }
}

void LinkedList::addEnd(int newItem)
{
    if (head == nullptr)
    {
        head = new Node(newItem);
    }
    else
    {
        Node* newNode = new Node(newItem);
        Node* temp = head;
        while(temp->getnext() != nullptr)
        {
            temp = temp->getnext();
        }
        temp->setnext(newNode);
    }
}

void LinkedList::addAtPosition(int position, int newItem)
{
    if (position < 1)
    {
        addFront(newItem);
    }
    else
    {
        Node* temp = head;
        int i = 1;
        while (temp->getnext() != nullptr && i < position - 1)
        {
            temp = temp -> getnext();
            i++;
        }
        if (temp -> getnext() == nullptr)
        {
            addEnd(newItem);
        }
        else
        {
            Node* newNode = new Node(newItem);
            newNode->setnext(temp->getnext());
            temp -> setnext(newNode);
        }
    }
}

int LinkedList::search(int item)
{
    int pos = 1;
    Node* temp = head;
    while (temp != nullptr)
    {
        if (temp->getdata() == item)
        {
            cout << pos << " ";
            return pos;
        }
        pos++;
        temp = temp->getnext();
    }
    cout << "0 ";
    return 0;
}

void LinkedList::deleteFront()
{
    if (head != nullptr)
    {
        Node* temp = head;
        head = head->getnext();
        delete temp;
    }
}

void LinkedList::deleteEnd()
{
    if (head != nullptr)
    {
        Node* prev = head, *curr = head;
        while (curr -> getnext() != nullptr)
        {
            prev = curr;
            curr = curr->getnext();
        }
        prev -> setnext(nullptr);
        delete curr;
    }
}

void LinkedList::deletePosition(int position)
{
    if (head != nullptr)
    {
        if (position == 1)
        {
            deleteFront();
            return;
        }
        int i = 1;
        Node* prev = head, *curr = head;
        while (curr != nullptr && i < position)
        {
            prev = curr;
            curr = curr -> getnext();
            i++;
        }
        if (position < 1 || curr == nullptr)
        {
            cout << "outside range ";
        }
        else
        {
            prev -> setnext(curr->getnext());
            delete curr;
        }
    }
}

int LinkedList::getItem(int position)
{
    int i = 1;
    Node* temp = head;
    while (temp != nullptr && i < position)
    {
        temp = temp -> getnext();
        i++;
    }
    if (temp == nullptr)
    {
        cout << numeric_limits<int>::max() << " ";
        return numeric_limits<int>::max();
    }
    else
    {
        cout << temp->getdata() << " ";
        return temp->getdata();
    }
}

void LinkedList::printItems()
{
    if (head != nullptr)
    {
        Node* temp = head;
        while (temp != nullptr)
        {
            cout << temp -> getdata() << " ";
            temp = temp -> getnext();
        }
    }
}

LinkedList::~LinkedList()
{
    if (head != nullptr)
    {
        Node* temp = head;
        Node* next = head;
        while (temp != nullptr)
        {
            next = temp -> getnext();
            delete temp;
            temp = next;
        }
    }
}
