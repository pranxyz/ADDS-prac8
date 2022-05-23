#ifndef _NODE_H
#define _NODE_H

class Node
{
    private:
    int data;
    Node* next;

    public:
    Node(int);
    int getdata();
    void setdata(int);
    Node* getnext();
    void setnext(Node*);

};


#endif