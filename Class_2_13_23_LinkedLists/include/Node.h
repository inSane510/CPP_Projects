#ifndef NODE_H
#define NODE_H


class Node
{
    public:
        Node* next;
        int data;

        Node();
        Node(int);

        virtual ~Node();

    private:
};

#endif // NODE_H
