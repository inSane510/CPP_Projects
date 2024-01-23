#include <iostream>
#include <algorithm>
using namespace std;


int BinaryStringSearch(string stringArr[], int arrSize, string target){
    int low = 0;
    int high = arrSize - 1;
    int mid = (high + low) / 2;

    bool sorted = is_sorted(stringArr, stringArr + arrSize);

    if(sorted == 0){
        cout << "This Array isn't sorted. Must be sorted to work." << endl;
        return -1;
    }


    while(high >= low){
        mid = (high + low) / 2;
        if(stringArr[mid] < target){
            low = mid + 1;
        }
        else if(stringArr[mid] > target){
            high = mid - 1;
        }
        else{
            cout << "Found Target" << endl;
            return mid;
        }
    }


    cout << "Didn't find requested value!" << endl;
    return -1;

}


int main()
{
    string arr[5] = {"A", "B", "C", "D", "E"};

    cout << BinaryStringSearch(arr, 5, "W") << endl;

    return 0;
}
