#ifndef NODE_H
#define NODE_H


class Node
{
    public:
        Node();
        virtual ~Node();

    private:
        int value;

        Node* left;
        Node* right;
};

#endif // NODE_H
