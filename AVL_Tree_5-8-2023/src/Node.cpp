#include "Node.h"

Node::Node(int nodeValue)
{
    key = nodeValue;
    parent = nullptr;
    left = nullptr;
    right = nullptr;
    height = 0;
}

int Node::GetBalance(){
    // Get current height of left subtree, or -1 if null
    int leftHeight = -1;
    if (left) {
    leftHeight = left->height;
    }

    // Get current height of right subtree, or -1 if null
    int rightHeight = -1;
    if (right) {
    rightHeight = right->height;
    }

    // Calculate the balance factor.
    return leftHeight - rightHeight;
}

void Node::UpdateHeight(){
    // Get current height of left subtree, or -1 if null
    int leftHeight = -1;
    if (left) {
    leftHeight = left->height;
    }

    // Get current height of right subtree, or -1 if null
    int rightHeight = -1;
    if (right) {
    rightHeight = right->height;
    }

    // Assign height with calculated node height.
    height = ((leftHeight > rightHeight) ? leftHeight : rightHeight) + 1;
}


bool Node::SetChild(Child whichChild, Node* child){
    // Assign the left or right data member.
    if (whichChild == LEFTCHILD) {
    left = child;
    }
    else {
    right = child;
    }

    // Assign the parent data member of the new child,
    // if the child is not null.
    if (child) {
    child->parent = this;
    }

    // Update the node's height, since the subtree's structure
    // may have changed.
    UpdateHeight();
    return true;
}

bool Node::ReplaceChild(Node* currentChild, Node* newChild){
    if (left == currentChild) {
        return SetChild(LEFTCHILD, newChild);
    }
    else if (right == currentChild) {
        return SetChild(RIGHTCHILD, newChild);
    }

    // If neither of the above cases applied, then the new child
    // could not be attached to this node.
    return false;
}
