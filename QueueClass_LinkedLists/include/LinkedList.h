#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

class LinkedList
{
    public:
        LinkedList();
        virtual ~LinkedList();

        void DestroyHeadNode();
        Node* GetHeadNode();

    private:
        Node* HeadNode;
        Node* TailNode;



};

#endif // LINKEDLIST_H
