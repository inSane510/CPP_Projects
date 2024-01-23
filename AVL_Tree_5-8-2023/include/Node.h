#ifndef NODE_H
#define NODE_H


class Node {
public:
   enum Child { LEFTCHILD, RIGHTCHILD };

   int key;
   Node* parent;
   Node* left;
   Node* right;
   int height;

   // Constructor with a key parameter creates the Node object.
   Node(int);

   // Calculate this nodes' balance factor, defined as
   // height(left subtree) - height(right subtree)
   int GetBalance();

   // Recalculate the current height of the subtree rooted at
   // the node, usually called after a subtree has been
   // modified.
   void UpdateHeight();

   // Assign either the left or right data member with a new
   // child. Returns true if the new child is successfully
   // assigned to this node, false otherwise.
   bool SetChild(Child, Node*);
   // Replace a current child with a new child. Determines if
   // the current child is on the left or right, and calls
   // setChild() with the new node appropriately.
   // Returns true if the new child is assigned, false otherwise.
   bool ReplaceChild(Node*, Node*);
};

#endif // NODE_H
