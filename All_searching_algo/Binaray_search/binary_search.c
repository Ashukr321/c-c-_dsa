// here we see the binary search in the c
// preprocessor
#include <stdio.h>

// two ways of the searching int he c
// linear search
// recursive serach

// function declration start here ...
int binarySearch(int arr[], int n, int key)
{
    // let l and r 
    int l = 0 ; 
    int r = n-1; 
    while (l<=r)
    {
        int mid= (l+r)/2;
        if (arr[mid] == key){
            return mid;
        }
        else if (arr[mid] > key){
            r= mid-1;
        }else{
            l = mid+1;
        }
    }
    
}

// print the array

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

//  main methods start here ...
int main()
{
    // create the array
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = sizeof(arr) / sizeof(int);
    int key = 8;

    //call the function binarySearch 
   int index  = binarySearch(arr, n , key);
    printf("%d ",index);
    return 0;
}


//  in binary search array is in the sorted fassion 