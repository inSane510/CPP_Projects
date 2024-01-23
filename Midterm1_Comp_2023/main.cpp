#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Example Number: 12345678

// With Separators: 12,345,678
void printWithSeperators(int num, int &numbersChopped)
{
    //++traversed;
    ++numbersChopped;
    int choppedNumber = ((num % 10) * numbersChopped);

    if((num / 10) <= 0){
        cout << "xd";
    }
    else{
        printWithSeperators((num / 10), numbersChopped);
        cout << (num -= choppedNumber) << endl;
    }

}


int main()
{
    int chosenNumber;
    int numbersTraversed = 0;
    int numbersChopped = 0;

    string numButString;

    cout << "Enter a number: ";
    cin >> chosenNumber;


    numButString = to_string(chosenNumber);

    if(chosenNumber / 1000 >= 1)
    {
        printWithSeperators(chosenNumber, numbersChopped);
        //cout << "Traversed: " << numbersTraversed << endl;
    }
    else
    {
        cout << chosenNumber << endl;
    }

    return 0;
}
