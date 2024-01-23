#include <iostream>

#include "NumberList.h"

using namespace std;

void driverFoundSearchResponse(NumberList numList, double targetValue){
    int foundValueIndex = numList.searchList(targetValue);

    if(foundValueIndex != -1)
    {
        cout << "Awesome! We found your target value[" << targetValue << "] @index: " << foundValueIndex << endl;
    }
    else{
        cout << "Sorry buddy didn't find the value[" << targetValue << "] you're looking for!" << endl;
    }

}


int main()
{
    NumberList freshList;

    freshList.appendNode(2.0);
    freshList.appendNode(2.5);
    freshList.appendNode(3.0);
    freshList.appendNode(3.5);
    freshList.appendNode(4.0);

    freshList.displayList();

    driverFoundSearchResponse(freshList, 99.9);

    driverFoundSearchResponse(freshList, 2.5);
    cout << "done" << endl;

    return 0;
}
