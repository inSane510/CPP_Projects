#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <Node.h>

class LinkedList
{
    public:

        LinkedList();
        void AppendToList(Node* newNode);
        void PrependToList(Node* newNode);
        void InsertAfterNode(int, Node*);
        void PrintAll();

        virtual ~LinkedList();

    private:
        Node* head;
        Node* tail;
};

#endif // LINKEDLIST_H
