#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <Node.h>

class LinkedList
{
    public:

        LinkedList();
        void AppendToList(int);
        void PrependToList(Node* newNode);
        void InsertAfterNode(int, Node*);
        void PrintAll();
        void Pop(); // Removes the last node.
        int GetLength();

        void RemoveAfter(int);

        Node* Search(int);

        virtual ~LinkedList();

        // Made these public for now...
        int length = 0;
        Node* head;
        Node* tail;

    private:
        //int length = 0;
        //Node* head;
        //Node* tail;
};

#endif // LINKEDLIST_H
