// binary search example :)
//  condition
//  monotonic condition -> increasing or decreasing order

// preprocessor
#include <iostream>
using namespace std;

// create the binary search function

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    // int mid = (start + end) / 2;

    // optimisation code 
    
    int mid = start+( end-start) / 2;

    while (start <= end)
    {
        // check the condition
        if (arr[mid] == key)
        {
            return mid;
        }
        // go to the right wala parts of the array

        if (key > mid)
        {
            // update the start 
            start = mid + 1;
        }
        else//key <arr[i]
        {
            // update the end 
            end = mid - 1;
        }
        // find the new mid value 
        mid =start+( end-start) / 2;
    }

    //no exits then return -1 
    return -1;
}
// main methods
int main()
{
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 11, 14, 16};

    int index = binarySearch(even, 6, 18);
    cout << " index of 18 is %d " << index << endl;

    int data = binarySearch(odd, 5, 11);
    cout << " index of 11 is %d " << data << endl;
    return 0;
}