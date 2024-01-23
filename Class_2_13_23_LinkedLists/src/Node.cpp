#include "Node.h"

Node::Node()
{
    this->data = 0;
    this->next = nullptr;
}


Node::Node(int newData)
{
    this->data = newData;
    this->next = nullptr;
}


Node::~Node()
{
    //dtor
}
