#include "Node.h"

Node::Node(int newData)
{
    this->data = newData;
    this->next = nullptr;
    this->previous = nullptr;
}

Node::~Node()
{
    //dtor
}
