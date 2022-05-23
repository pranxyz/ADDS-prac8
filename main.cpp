#include "Node.cpp"
#include "LinkedList.cpp"
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int values[100];
    string input;
    int size = 0, arg1, arg2;
    cout << "Enter the input: ";
    while (cin >> input)
    {
        if (isdigit(input[0]))
        {
            values[size] = atoi(input.c_str());
            size++;
        }
        else
        {
            break;
        }
    }
    LinkedList linkedlist(values, size);
    if (input == "AF")
    {
        cin >> arg1;
        linkedlist.addFront(arg1);
        linkedlist.printItems();
    }
    else if (input == "AE")
    {
        cin >> arg1;
        linkedlist.addFront(arg1);
        linkedlist.printItems();
    }
    else if (input == "AP")
    {
        cin >> arg1;
        cin >> arg2;
        linkedlist.addAtPosition(arg1, arg2);
        linkedlist.printItems();
    }
    else if (input == "S")
    {
        cin >> arg1;
        linkedlist.search(arg1);
        linkedlist.printItems();
    }
    else if (input == "DF")
    {
        linkedlist.deleteFront();
        linkedlist.printItems();
    }
    else if (input == "DE")
    {
        linkedlist.deleteEnd();
        linkedlist.printItems();
    }
    else if (input == "DP")
    {
        cin >> arg1;
        linkedlist.deletePosition(arg1);
        linkedlist.printItems();
    }
    else if (input == "GI")
    {
        cin >> arg1;
        linkedlist.getItem(arg1);
        linkedlist.printItems();
    }
    else
    {
        cout << "invalid function "<< endl;
    }
    return 0;
}