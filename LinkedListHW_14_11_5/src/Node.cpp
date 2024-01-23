#include "Node.h"

Node::Node()
{
    this->data = 0;
    this->next = nullptr;
    this->previous = nullptr;
}


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

int Node::GetData(){
    return data;
}

Node* Node::GetNext(){
    return next;
}
