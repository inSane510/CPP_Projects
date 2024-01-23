#include <iostream>

#include "AVLTree.h"

using namespace std;

int main()
{
    AVLTree NewBalancedTree;
    Node* newNode1 = new Node(40);
    Node* newNode2 = new Node(20);
    Node* newNode3 = new Node(50);

    NewBalancedTree.Insert(newNode1);
    NewBalancedTree.Insert(newNode2);
    NewBalancedTree.Insert(newNode3);

    NewBalancedTree.PrintInOrderRecursive(NewBalancedTree.GetRoot());

    NewBalancedTree.RemoveKey(50);
    cout << endl << "After Removal" << endl;

    NewBalancedTree.PrintInOrderRecursive(NewBalancedTree.GetRoot());

    if(NewBalancedTree.Search(20) != nullptr){
        cout << "Found value" << endl;
    }

    return 0;
}
