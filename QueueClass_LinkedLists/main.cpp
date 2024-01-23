#include <iostream>
#include "Queue.h"


using namespace std;

int main()
{
    Queue newQList;

    newQList.EnQueue(5);

    cout << "Head Data: " << newQList.Peek() << endl;
    newQList.DeQueue();
    cout << "Head Data: " << newQList.Peek() << endl;

    newQList.EnQueue(8);
    newQList.EnQueue(7);
    cout << "Our Queue currently has " << newQList.GetLength() << " items." << endl;

    cout << "Head Data: " << newQList.Peek() << endl;

    newQList.DeQueue();

    cout << "Head Data: " << newQList.Peek() << endl;

    newQList.DeQueue();

    cout << "Our Queue currently has " << newQList.GetLength() << " items." << endl;



    return 0;
}
