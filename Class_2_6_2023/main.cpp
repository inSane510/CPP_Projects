#include <iostream>

using namespace std;
void recurseBinary(int num){
    if(num == 1){
        return;
    }
    else{
        int newNum = num/2;
        recurseBinary(newNum);
        cout << num % 2;
    }
}



void SelectionSort(int arr[], int arrSize){
    int tempSmallerVal;
    int currSmallest;

    int iterationsDone = 0;

    for(int i = 0; i < arrSize - 1; i++)
    {
        currSmallest = i;

        for(int a = i + 1 ; a < arrSize; a++)
        {
            if(arr[a] < arr[currSmallest])
            {
                currSmallest = a;
            }

            iterationsDone++;
        }

        tempSmallerVal = arr[currSmallest];
        arr[currSmallest] = arr[i];
        arr[i] = tempSmallerVal;

        iterationsDone++;
    }

    cout << "Completed Selection Sort after " << iterationsDone << " Iterations." << endl << endl;
}

void InsertionSort(int arr[], int arrSize)
{
    int i = 0;
    int j = 0;
    int temp = 0;

    int iterationsDone = 0;

    for(i = 0; i < arrSize; i++)
    {
        j = i;

        while(j > 0 && arr[j] < arr[j - 1]){
            temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;

            iterationsDone++;
        }

        iterationsDone++;
    }

    cout << "Completed InsertionSort after " << iterationsDone << " Iterations." <<endl;
}


int addRecursive(int arr[], int arrSize){

    if(arrSize == 0){
        return 0;
    }
    else
    {
        return arr[arrSize - 1] += addRecursive(arr, arrSize - 1);
    }
}


int main()
{
    /*
    int arr[7] = {5, 3, 2, 0, 6, 8, 7};

    cout << "Old Array: ";

    for(int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    cout << "SelectionSorted Array: " << endl;

    SelectionSort(arr, 7);

    for(int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "InsertionSorted Array:" << endl;

    InsertionSort(arr, 7);

    for(int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }

    */

    int newArr[5] = {10, 10, 10, 10, 10};

    cout << addRecursive(newArr, 5) << endl;


    return 0;
}
