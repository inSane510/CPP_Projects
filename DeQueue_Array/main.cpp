#include <iostream>

#include "DeQueue.h"

using namespace std;

int main()
{
    DeQueue newList;

    newList.EnQueueFront(3);
    newList.EnQueueFront(2);
    newList.EnQueueFront(1);
    newList.EnQueueFront(777);
    newList.EnQueueBack(123);
    newList.EnQueueBack(9031);

    newList.PrintList();

    cout << "PopBack: " << newList.DeQueueBack() << endl;
    cout << "PopBack: " << newList.DeQueueBack() << endl;

    newList.PrintList();

    cout << "PopFront: " << newList.DeQueueFront() << endl;
    cout << "PopFront: " << newList.DeQueueFront() << endl;

    newList.PrintList();

    cout << "PeekFront: " << newList.PeekFront() << endl;
    cout << "PeekBack: " << newList.PeekBack() << endl;

    cout << "ListLength: " << newList.GetLength() << endl;

    return 0;
}
