// insertion sort in the cpp
// preprocessor
#include <iostream>
using namespace std;

// insertion sort
void insertionSort(int arr[], int n)
{
    // outer loop for the number of the pass
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        int key = arr[i];

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
};

// printing the array
int printArray(int arr[], int n)
{
    int sum = 0 ;
    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
        sum +=arr[i];
    }
    cout << endl;
    return sum;
}

// main methods start here ...
int main()
{
    // create a array
    int arr[] = {2, 45, 3, 43, 4, 3, 433, 3, 4, 6, 547, 566};
    int n = sizeof(arr) / sizeof(int);
    insertionSort(arr, n);
   int sum =  printArray(arr, n);
   cout<<"the sum of the array is :) "<<sum;
    return 0;
}

// time complexity is o(n^2); worst case
// time complexity is o(n); bests case 
//if array is already sorted

// space complexity is o(n);