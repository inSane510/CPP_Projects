#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H

#include <vector>
#include <string>
#include <iostream>

using namespace std;

class BinarySearchTree
{
    public:

        BinarySearchTree();
        void insert (string); // adds new string to tree. Duplicates are added to the right sub-tree of previous duplicate;
        int count(string) const; // returns number of times seen target
        void erase(string); // erases a target
        void print() const; // Prints out tree

        int search(string); // returns index of targetString

    private:
        vector<string> tree;
};

#endif // BINARYSEARCHTREE_H
