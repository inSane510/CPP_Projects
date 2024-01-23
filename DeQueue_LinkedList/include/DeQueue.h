#ifndef DEQUEUE_H
#define DEQUEUE_H

#include "Node.h"

class DeQueue
{
    public:
        DeQueue();
        virtual ~DeQueue();

        void EnQueueBack(int); /// Inserts int at end of the queue;
        int DeQueueBack(); /// Deletes end of the line;
        int PeekBack(); /// Views the node at the end of line.

        void EnQueueFront(int); /// Inserts int at front of the queue;
        int DeQueueFront(); /// Deletes front of the line;
        int PeekFront(); /// Views the node up front.


        bool IsEmpty();
        int GetLength();
        void PrintList();

    private:
        Node* head;
        Node* tail;
        int qSize = 0;
};

#endif // DEQUEUE_H

//////

