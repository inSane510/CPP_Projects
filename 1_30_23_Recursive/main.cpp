#include <iostream>

using namespace std;

int RecursiveBinarySearch(int numbers[], int low, int high, int key) {
   if (low > high)
      return -1;

   int mid = (low + high) / 2;

   if (numbers[mid] < key) {
      return RecursiveBinarySearch(numbers, mid + 1, high, key);
   }
   else if (numbers[mid] > key) {
      return RecursiveBinarySearch(numbers, low, mid - 1, key);
   }

   return mid;
}

int NormalBinarySearch(int numbers[], int low, int high, int key) {
    if (low > high){
        return -1;
    }

    int mid = (low + high) / 2;

    while(low < high) {
        if(low < 0 )
        {
            return -1;
        }


        if (numbers[mid] == key){
            return mid;
        } else if(numbers[mid] > key) {
            high = mid;
            mid = (low + high) / 2;

        } else if(numbers[mid] < key) {
            low = mid;
            mid = (low + high) / 2;

        }
    }

}


int main()
{
    int num_array[9] = {0, 2 , 4, 6, 8, 10, 11, 12, 15};
    // Basic Loop Method

    //cout << RecursiveBinarySearch(num_array, 0, 9, 12) << endl;

    cout << NormalBinarySearch(num_array, 0, 9, 12) << endl;


    return 0;
}
