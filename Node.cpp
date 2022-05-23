#include "Node.h"

Node::Node(int val)

{
    data = val;
    next = nullptr;
}

int Node::getdata()

{
    return data;
}

void Node::setdata(int newdata)

{
    data = newdata;
}

Node* Node::getnext()

{
    return next;
}

void Node::setnext(Node *new_next)
{
    next = new_next;
}