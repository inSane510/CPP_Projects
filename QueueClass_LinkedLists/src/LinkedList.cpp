#include "LinkedList.h"

LinkedList::LinkedList()
{
    HeadNode = nullptr;
    TailNode = nullptr;
}

LinkedList::~LinkedList()
{
    //dtor
}


Node* LinkedList::GetHeadNode(){
    return HeadNode;
}
