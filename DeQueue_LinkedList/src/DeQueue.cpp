#include "DeQueue.h"
#include <iostream>

using namespace std;

DeQueue::DeQueue()
{
    head = nullptr;
    tail = nullptr;
}

DeQueue::~DeQueue()
{
    //dtor
}

void DeQueue::EnQueueBack(int newData){ /// Adds new node to end
    cout << "EnQueuing end..." << endl;

    if(head == nullptr){
        cout << "Head Null, creating new head." << endl;
        head = new Node(newData);
        tail = head;
    }
    else{
        Node* newNode = new Node(newData);
        tail->next = newNode;
        newNode->previous = tail;

        tail = newNode;
    }

    cout << "Added to End: " << newData << endl;

    qSize++;
}

void DeQueue::EnQueueFront(int newData){ /// Adds new node to the front
    cout << "EnQueuing Front..." << endl;
    if(head == nullptr){
        cout << "Head Null, creating new head." << endl;
        head = new Node(newData);
        tail = head;

    }
    else{
        Node* newNode = new Node(newData);
        newNode->next = head;
        head->previous = newNode;

        head = newNode;

        if(this->GetLength() == 1){
            tail->previous = head;
        }
    }

    cout << "Added to Front: " << newData << endl;

    qSize++;
}

int DeQueue::DeQueueFront(){ /// Deletes Head Node
    Node* nextNode = head->next;
    int nodeData = head->data;

    delete head;
    head = nextNode;;

    qSize--;

    cout << "Deleted Head Data..." << endl;

    return nodeData;

}

int DeQueue::DeQueueBack(){ /// Deletes Tail Node
    cout << "Back DEQUEUE!" << endl;
    Node* previousNode = tail->previous;
    int nodeData = tail->data;

    delete tail;
    cout << "PREVIOUS: " << previousNode->data << endl;
    tail = previousNode;;
    tail->next = nullptr;

    qSize--;

    cout << "Deleted Tail Data..." << endl;

    return nodeData;
}

int DeQueue::PeekFront(){
    if(IsEmpty()){
        cout << "Tried Peeking.. But Queue is empty... Will return -1." << endl;
        return -1;
    }

    return head->data;
}

int DeQueue::PeekBack(){
    if(IsEmpty()){
        cout << "Tried Peeking.. But Queue is empty... Will return -1." << endl;
        return -1;
    }

    return tail->data;
}

bool DeQueue::IsEmpty(){
    if(qSize == 0){
        cout << "Our Queue Is Empty!" << endl;
    }
    return (qSize == 0);
}

int DeQueue::GetLength(){
    return qSize;
}

void DeQueue::PrintList(){
    Node* tempNode = head;

    while(tempNode){
        cout << tempNode->data << ", ";
        tempNode = tempNode->next;
    }
    cout << endl;
}
