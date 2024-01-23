#include "BinarySearchTree.h"

BinarySearchTree::BinarySearchTree()
{
    //ctor
}

void BinarySearchTree::insert(string newElement){
    int currentIndex = 0;

    //cout << "Our Trees Size: " << tree.size() << endl;
    if(tree.empty()){ // No elements, set as root.
        tree.push_back(newElement);
    }
    else{
        while(currentIndex < tree.size() && !((tree.at(currentIndex)).empty())){
            //cout << "Current Index: " << currentIndex << endl;
            if(tree.at(currentIndex) < newElement || tree.at(currentIndex) == newElement){ // Head towards the right;]
                if(currentIndex == 0){
                    currentIndex = 3;
                }
                else{
                    currentIndex = (currentIndex * 2) + 1;
                }
            }
            else if(tree.at(currentIndex) > newElement){ // Head towards the left;
                if(currentIndex == 0){
                    currentIndex = 2;
                }
                else{
                    currentIndex = (currentIndex * 2);
                }
            }
            //cout << "New Index: " << currentIndex << endl;
        }


        if(tree.size() < currentIndex){
            //cout << "Out of bounds, resizing to " << currentIndex << endl;
            tree.resize(currentIndex);
            tree.insert(tree.begin() + currentIndex, newElement);
        }
        else if(tree.at(currentIndex).empty()){
            tree.at(currentIndex) = newElement;
        }
        //cout << "String at Index " << currentIndex << " is empty: " << (tree.at(currentIndex)).empty() << endl;

        cout << "Inserted " << newElement << " to Index: " << currentIndex << endl;
    }
}

int BinarySearchTree::search(string targetString){
    int index = 0; // root is zero
    bool found = false;

    while(index < tree.size() && found == false){
        if(tree.at(index) == targetString){
            found = true;
        }
        else if(tree.at(index) < targetString){ // Head towards the right;
            if(index == 0){
                index = 3;
            }
            else{
                index = (index * 2) + 1;
            }
        }
        else{
            if(index == 0){
                index = 2;
            }
            else{
                index = (index * 2);
            }
        }
    }

    cout << "search(): ";
    if(found){
        cout << "Located \"" << targetString << "\" at Index " << index << endl;
        return index;
    }
    else{
        cout << "The String \"" << targetString << "\" doesn't exist in our tree!" << endl;
        return -1;
    }
}

int BinarySearchTree::count(string targetString) const{
    int currentCount = 0;
    int index = 0; // root is located at 0

    bool stopCounting = false;

    while(index < tree.size() && stopCounting == false){
        if(tree.at(index) == targetString){
            currentCount += 1;

            if(index == 0){
                index = 3;
            }
            else{
                index = (index * 2) + 1; // Duplicates are stored in the right subtree of itself.
            }
        }
        else if(currentCount > 0 && tree.at(index) != targetString){
            stopCounting = true;
        }
        else if(tree.at(index) < targetString){ // Head towards the right;
            if(index == 0){
                index = 3;
            }
            else{
                index = (index * 2) + 1;
            }
        }
        else{
            if(index == 0){
                index = 2;
            }
            else{
                index = (index * 2);
            }
        }
    }

    cout << "count(): " << "Located the string " << "\"" << targetString << "\" " << currentCount << " times in our tree." << endl;

    return currentCount;
}

void BinarySearchTree::print() const {
    for(int i = 0; i < tree.size(); i++){
       if((tree.at(i)).size() > 0){
            cout << "Index [" << i << "] = " <<  tree.at(i) << ", ";
        }
    }

    cout << endl;
}

void BinarySearchTree::erase(string element){
    int targetStringIndex = search(element);

    int startingIndex;

    /*
    if(targetStringIndex % 2 == 0){ // Target found at a Even Index.
        startingIndex = targetStringIndex * 2;
    }
    else{ // Target found at an Odd Index;
        startingIndex = targetStringIndex + 1;
    }

    for(int i = targetStringIndex; i < tree.size(); i++){

    }
    */

    cout << "erase(): wasnt to sure on how to implement this. :(" << endl;



}
