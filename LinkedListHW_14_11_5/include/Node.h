#ifndef NODE_H
#define NODE_H


class Node
{
    public:
        Node();
        Node(int);
        int GetData();
        Node* GetNext();

        virtual ~Node();

        friend class LinkedList;

    private:
        Node* next;
        Node* previous;
        int data;
};

#endif // NODE_H
