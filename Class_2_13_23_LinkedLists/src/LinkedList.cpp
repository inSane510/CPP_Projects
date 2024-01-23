#include "LinkedList.h"
#include <string>

#include <iostream>

using namespace std;

LinkedList::LinkedList()
{
    this->head = nullptr;
    this->tail = nullptr;
}

LinkedList::~LinkedList()
{
    //Loop through list and delete every node within list.
}


void LinkedList::AppendToList(Node* newNode){
    if(this->head == nullptr){
        this->head = newNode;
        this->tail = newNode;
    }
    else{
        this->tail->next = newNode;
        this->tail = newNode;

    }
}
void LinkedList::PrependToList(Node* newNode){
    if(this->head == nullptr){
        this->head = newNode;
        this->tail = newNode;
    }
    else{
        newNode->next = this->head;
        this->head = newNode;
    }
}

// Loops through every node and prints out the data stored within that node.

void LinkedList::PrintAll(){
    string separator = ", ";
  Node* node = head;
  if (node) {
      // Head node is not preceded by separator
      cout << node->data;
      node = node->next;
  }
  while (node) {
     cout << separator << node->data;
     node = node->next;
  }
  cout << endl;
}

void LinkedList::RemoveAfter(int targetData){
    Node* currNode;
    currNode = this->head;

    while(currNode != nullptr){
        if(currNode->data == targetData){
            if(currNode->next != nullptr){
                delete currNode->next;
                cout << "Success! Deleted Node containing data: " << targetData << endl;
            }else{
                cout << "ERROR: The target Node doesn't have a Node After it! Probably reached the end?" << endl;
            }
            break;
        }
    }
}

Node LinkedList::Search(int targetData){
    Node* currNode;
    currNode = this->head;

    while(currNode != nullptr){
        if(currNode->data == targetData){
            return currNode;
        }
        currNode = currNode->next;
    }
}

void LinkedList::InsertAfterNode(int targetData, Node* newNode){

}
