#ifndef QUEUE_H
#define QUEUE_H

#include "Node.h"

class Queue
{
    public:
        Queue();
        virtual ~Queue();

        void EnQueue(int); /// Inserts x at end of the queue
        int DeQueue();
        int Peek();
        bool IsEmpty();
        int GetLength();
    private:
        Node* head;
        Node* tail;
        int qSize = 0;
};

#endif // QUEUE_H
