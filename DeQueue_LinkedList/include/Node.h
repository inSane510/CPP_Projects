#ifndef NODE_H
#define NODE_H


class Node
{
    public:
        Node(int);
        virtual ~Node();

        friend class DeQueue;
    private:
        int data;
        Node* next;
        Node* previous;
};

#endif // NODE_H
