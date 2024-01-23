#include <iostream>


#include "IntBinaryTree.h"

using namespace std;

int main()
{
    IntBinaryTree newTree;

    newTree.insertNode(50);
    newTree.insertNode(30);
    newTree.insertNode(60);
    newTree.insertNode(55);
    newTree.insertNode(65);
    newTree.insertNode(57);

    newTree.displayInOrder();

    newTree.remove(60);
    cout << "---After Deletion---" << endl;

    newTree.displayInOrder();

    return 0;
}
