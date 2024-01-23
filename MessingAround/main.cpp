#include <iostream>
#include <unordered_set>

using namespace std;

unordered_set<int> remove_even(unordered_set<int> &s){
    unordered_set<int> evens;
    unordered_set<int>::iterator iter = s.begin();

    int current = *iter;

    while(iter != s.end())
    {
        if(*iter % 2 == 0)
        {
            evens.insert(*iter);

            cout << *iter << endl;
            //s.erase(*iter);
        }

        iter++;
    }

    return evens;
}

int main()
{
    unordered_set<int> nums;
    unordered_set<int>::iterator iter = nums.begin();

    nums.insert(1);
    nums.insert(2);
    nums.insert(3);
    nums.insert(4);
    nums.insert(5);
    nums.insert(6);
    nums.insert(7);
    nums.insert(8);

    unordered_set<int> evens = remove_even(nums);

    /*
    cout << "hi" << endl;

    while(iter != nums.end())
    {
        cout << *iter << ", ";
        iter++;
    }
    */

    return 0;
}
