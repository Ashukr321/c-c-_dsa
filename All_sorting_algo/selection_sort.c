//  here we see the selection sort int c
// this is the most basic and important sorting algo in the c

// preprocessor
#include <stdio.h>
#include <conio.h>

// declare the selectionsort array
// int arr[]=> this is array
// n -< this is the size of the array

void selectionSort(int arr[], int n);
void swap(int j, int i);
void printArray(int arr[],int n );
// main methods
int main()
{
    // create a array
    int arr[] = {50, 34, 5, 3, 2, 4};
    // get size of the array
    int n = sizeof(arr) / sizeof(int);
    selectionSort(arr, n);
    printArray(arr, n);
     return 0;
}
void selectionSort(int arr[], int n)
{

    // declare the  variables
    int i, j, min_index;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                min_index = j; // here we set the min index is j
            }

            // calling the swap methods
            //  here we pass the address of the array
                swap(arr[min_index], arr[i]); //
        }
    }
}

// swaping methods
void swap(int j, int i)
{
    int temp = i; // value of i is store in temp variables

    i = j; // value of j is store in i

    j = temp; // vlaue of temp is store in j

    // ⭐⭐⭐⭐ number of j is repalce with i postion  elements
}

// print array

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \n ", arr[i]);
    }
}