#ifndef AVLTREE_H
#define AVLTREE_H

#include "Node.h"
#include <iostream>

using namespace std;

class AVLTree {
public:

    // Performs a left rotation at the given node. Returns the
    // subtree's new root.

    AVLTree();

    Node* RotateLeft(Node*);

    /// Performs a right rotation at the given node. Returns the
    /// subtree's new root.
    Node* RotateRight(Node*);

    /// Updates the given node's height and rebalances the subtree if
    /// the balancing factor is now -2 or +2. Rebalancing is done by
    /// performing a rotation. Returns the subtree's new root if
    /// a rotation occurred, or the node if no rebalancing was required.
    Node* Rebalance(Node*);

    void Insert(Node*);
    bool RemoveNode(Node*);

    /// Searches for a node with a matching key. Does a regular
    /// binary search tree search operation. Returns the node with the
    /// matching key, or nullptr if no matching key exists in the tree.
    Node* Search(int);

    /// Attempts to remove a node with a matching key. If no node has a matching
    /// key then nothing is done and false is returned; otherwise the node is
    /// removed and true is returned.
    bool RemoveKey(int);

    void PrintInOrderRecursive(Node*);

    Node* GetRoot();

private:
     Node* root;

};

#endif // AVLTREE_H
