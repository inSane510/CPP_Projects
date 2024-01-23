#include <string>
#include <iostream>
#include "list.h"

using namespace std;

Node::Node(string element){
    data = element;
    previous = nullptr;
    next = nullptr;
}

List::List(){
    first = nullptr;
}

void List::push_back(string element){
    Node* new_node = new Node(element);

    if (this->first == nullptr) // List is empty
    {
        this->first = new_node;
        this->first->previous = new_node;
        this->first->next = new_node;
        printf("Empty, added new node.\n");
    }
    else
    {
        new_node->next = first;
        new_node->previous = first->previous;

        first->previous->next = new_node;
        first->previous = new_node;

        printf("Added to the end.\n");
    }


}

void List::insert(Iterator iter, string element){
    if (iter.position == first->previous){
        push_back(element);
        return;
    }

    Node* before = iter.position->previous;

    Node* new_node = new Node(element);

    /*Ignore below, will delete.
    new_node->previous = before;
    new_node->next = after;
    after->previous = new_node;
    */

    if (iter.position == first) // Insert at beginning
    {
        new_node->next = first;
        new_node->previous = first->previous;

        first->previous = new_node;
        first = new_node;

    }
    else{
        new_node->previous = before;
        new_node->next = iter.position;
        iter.position->previous = new_node;
    }
}

Iterator List::erase(Iterator iter){
    /*
    cout << "Target: " << iter.position->data << endl;
    cout << "Prev: " << iter.position->previous->data << endl;
    cout << "Next: " << iter.position->next->data << endl;
    */

    Node* remove = iter.position;
    Node* before = remove->previous;
    Node* after = remove->next;

    if (remove == first){
        after->previous = first->previous; /// Update new firsts previous to tail.

        first->previous->next = after; /// Change tail's next to be new first.

        first = after; /// Set first to our new first.
    }
    else if (remove == first->previous){
        before->next = first;
        first->previous = before;
    }
    else{
        after->previous = before;
        before->next = after;
    }

    cout << "Erasing..: " << iter.position->data << endl;
    delete remove;

    Iterator r;
    r.position = after;
    r.container = this;

    return r;
}

Iterator List::begin(){
    Iterator iter;
    iter.position = this->first;
    iter.container = this;

    return iter;
}

Iterator List::end(){
    Iterator iter;
    iter.position = nullptr;
    iter.container = this;

    return iter;
}
Iterator::Iterator(){
    position = nullptr;
    container = nullptr;
}

string Iterator::get() const{
    return position->data;
}

void Iterator::next(){
    if(position == container->first->previous){
        char chosen;
        printf("Would you like to go through the list again? Y/N: ");
        cin >> chosen;

        if(chosen == 'Y' || chosen == 'y'){
            position = position->next;
        }
        else
        {
            position = nullptr;
            printf("Ended Circular List.\n");
        }
    }
    else
    {
        position = position->next;
    }
}

void Iterator::previous(){
    if (position == nullptr)
    {
        position = container->first->previous;
    }
    else
    {
        position = position->previous;
    }
}

bool Iterator::equals(Iterator other) const{
    return position == other.position;
}
