#include <iostream>
#include <LinkedList.h>
#include <Node.h>

using namespace std;

int main()
{
    //Create a fresh new Linked List
    LinkedList NEWLIST;

    //Dynamically allocate nodes from Node Class
    Node *newNode1 = new Node(1);
    Node *newNode2 = new Node(2);
    Node *newNode3 = new Node(3);

    //Uses member function "AppendToList" from LinkedList to add new values to the list.
    NEWLIST.AppendToList(newNode1);
    NEWLIST.AppendToList(newNode2);
    NEWLIST.AppendToList(newNode3);

    //We then print out everything in the list using PrintAll();
    NEWLIST.PrintAll();


    return 0;
}
