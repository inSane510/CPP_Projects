#include "Stack.h"
#include "iostream"

using namespace std;
Stack::Stack()
{
    theStack = nullptr;
}

Stack::~Stack()
{
    //dtor
}

void Stack::Push(int newValue){
    if(theStack == nullptr){ /// Stack is empty.
        theStack = new int[1];
        theStack[0] = newValue;

        currentStackSize += 1;

        cout << theStack[0] << endl;
        return;
    }

    int *tempNewStack = new int[currentStackSize + 1];
    *tempNewStack = *theStack;

    //PrintStack();

    tempNewStack[currentStackSize] = newValue;

    for(int i = 0; i < currentStackSize + 1; i++){
        cout << tempNewStack[i] << ", ";
    }

    *theStack = *tempNewStack;

    //PrintStack();

    currentStackSize += 1; // Update Stack size.

    cout << "NewStack: " << *theStack << endl;


}

int Stack::Pop(){

}

int Stack::Peek(){

}

bool Stack::IsEmpty(){

}

int Stack::GetLength(){

}

void Stack::PrintStack(){
    for(int i = 0; i < currentStackSize; i++){
        cout << theStack[i] << ", ";
    }

    cout << endl;
}
