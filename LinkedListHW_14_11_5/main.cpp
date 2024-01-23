#include <iostream>

#include "LinkedList.h"
#include "Node.h"

using namespace std;


LinkedList Merge(LinkedList list1, LinkedList list2){
    //for loop? or while loop?

    LinkedList tempMergedList;
    Node* tempNode;
    Node* tempNodeIndexL1 = list1.head;
    Node* tempNodeIndexL2 = list2.head;

    tempNode = list1.head;


    tempMergedList.AppendToList(tempNodeIndexL1->GetData()); // Append the first Node value of List1;
    tempMergedList.AppendToList(tempNodeIndexL2->GetData());// Append the first Node value of List2;

    int List1Length = list1.GetLength();
    int List2Length = list2.GetLength();
    int LengthsCombined = List1Length + List2Length;

    // Start loop at 3 since we already appended two values, one from each list above.
    for(int i = 3; i <= LengthsCombined; i++){
        if((i % 2) == 1){ // List1
            tempNode = tempNodeIndexL1->GetNext();
            tempNodeIndexL1 = tempNodeIndexL1->GetNext();
        }
        else{ // List2
            tempNode = tempNodeIndexL2->GetNext();
            tempNodeIndexL2 = tempNodeIndexL2->GetNext();
        }

        if(tempNode){
                cout << "append" << endl;
            tempMergedList.AppendToList(tempNode->GetData());
        }
        else
        {
            cout << "NULL! @Index: " << i << ", ";

            if((i % 2) == 1){ // List1 is empty.
                cout << "List 1" << endl;
                tempNode = tempNodeIndexL2->GetNext();
            }
            else{ // List2 is empty so lets continue adding List1's values.
                cout << "List 2" << endl;
                tempNode = tempNodeIndexL1->GetNext();

            }

            while(tempNode != nullptr){

                tempMergedList.AppendToList(tempNode->GetData());
                tempNode = tempNode->GetNext();
            }
            break;
        }
    }

    return tempMergedList;


}


int main()
{
    LinkedList newList1;
    LinkedList newList2;
    LinkedList mergedList;

    newList1.AppendToList(1);
    newList1.AppendToList(2);
    newList1.AppendToList(3);
    newList1.AppendToList(4);

    cout << "List1 Length: " << newList1.GetLength() << endl;


    newList2.AppendToList(5);
    newList2.AppendToList(6);

    cout << "List3 Length: " << newList2.GetLength() << endl;

    newList1.PrintAll();
    newList2.PrintAll();


    mergedList = Merge(newList1, newList2);

    mergedList.PrintAll();

    cout << "End" << endl;




    return 0;
}
