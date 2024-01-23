#include <iostream>

#include "BinarySearchTree.h"


using namespace std;





int main()
{
    BinarySearchTree newTree;

    newTree.insert("lol");
    newTree.insert("lol");
    newTree.insert("lol");
    newTree.insert("lollipop");
    newTree.insert("YES");
    newTree.insert("no");

    newTree.search("lol");

    newTree.count("lol");
    newTree.count("YES");
    newTree.count("Apple");

    newTree.print();
    newTree.erase("xd");

    return 0;
}
