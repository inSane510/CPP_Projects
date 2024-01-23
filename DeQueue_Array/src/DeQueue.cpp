#include "DeQueue.h"
#include <iostream>

using namespace std;

int* CreateNewArray(int newSize){
    return new int[newSize];
}

DeQueue::DeQueue()
{
    qArray = new int[5];
    qMaxItems = 5;
}

DeQueue::~DeQueue()
{
    //dtor
}

void DeQueue::EnQueueBack(int newData){ /// Adds new item to end.
    if(qAmountItems == qMaxItems){
        qMaxItems += 10;
        int* newArray = CreateNewArray(qMaxItems);/// ReSize

        for(int i = 0; i < qAmountItems; i++){ /// ReAdd all of our items to our new list.
            newArray[i] = qArray[i];
        }

        delete qArray;

        qArray = newArray;
    }

    qArray[qAmountItems] = newData;

    qAmountItems++;
}

void DeQueue::EnQueueFront(int newData){ /// Adds new item to the front
    if(qAmountItems == qMaxItems){
        qMaxItems += 10;
    }

    int* newArray = CreateNewArray(qMaxItems);/// ReSize

    newArray[0] = newData; /// Add newData to front of our newList;

    for(int i = 1; i < qAmountItems + 1; i++){ /// ReAdd all of our items to our new list.
        newArray[i] = qArray[i - 1];
    }

    delete qArray;

    qArray = newArray;
    qAmountItems++;
}

int DeQueue::DeQueueFront(){ /// Deletes front item
    int returnValue = qArray[0];

    int* newList = CreateNewArray(qAmountItems - 1);

    for(int i = 0; i < qAmountItems - 1; i++){
        newList[i] = qArray[i + 1];
    }

    delete qArray;

    qArray = newList;

    qAmountItems--;

    return returnValue;
}

int DeQueue::DeQueueBack(){ /// Deletes back item
    int returnValue = qArray[qAmountItems - 1];

    int* newList = CreateNewArray(qAmountItems - 1);

    for(int i = 0; i < qAmountItems - 1; i++){
        newList[i] = qArray[i];
    }

    delete qArray;

    qArray = newList;

    qAmountItems--;

    return returnValue;
}

int DeQueue::PeekFront(){ /// views front item.
    return qArray[0];
}

int DeQueue::PeekBack(){
    return qArray[qAmountItems - 1];
}

bool DeQueue::IsEmpty(){
    if(qAmountItems == 0){
        cout << "Our Queue Is Empty!" << endl;
    }
    return (qAmountItems == 0);
}

int DeQueue::GetLength(){
    return qAmountItems;
}

void DeQueue::PrintList(){
    for(int i = 0; i < qAmountItems; i++){
        cout << qArray[i] << ", ";

    }

    cout << endl;
}
