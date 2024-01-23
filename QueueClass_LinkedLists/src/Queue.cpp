#include "Queue.h"
#include <iostream>

using namespace std;

Queue::Queue()
{
    head = nullptr;
    tail = nullptr;
}

Queue::~Queue()
{
    //dtor
}

void Queue::EnQueue(int newData){ /// Adds new node to end
    cout << "EnQueuing..." << endl;
    if(head == nullptr){
        head = new Node(newData);
        tail = head;
    }
    else{
        Node* newNode = new Node(newData);
        tail->next = newNode;
        newNode->previous = tail;
    }

    cout << "Added: " << newData << endl;

    qSize++;
}

int Queue::DeQueue(){ /// Deletes Head Node
    Node* nextNode = head->next;

    delete head;
    head = nextNode;;

    qSize--;

    cout << "Deleted Head Data..." << endl;
}

int Queue::Peek(){
    if(IsEmpty()){
        cout << "Tried Peeking.. But Queue is empty... Will return -1." << endl;
        return -1;
    }

    return head->data;
}

bool Queue::IsEmpty(){
    if(qSize == 0){
        cout << "Our Queue Is Empty!" << endl;
    }
    return (qSize == 0);
}

int Queue::GetLength(){
    return qSize;
}
