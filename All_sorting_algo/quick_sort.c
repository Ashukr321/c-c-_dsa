// here we see the quick sort in the c

// how to do quick sort in the c
// quick sort

/*
it is devied and conqure algorithms
in each iteration we select a pivot elements

and devied the whole array in to subarray  such that all the
layers element thatn the pivote will be  in the left
subarray

and all the greater element than the pivote element will be in
right subarray

again left subarray and right subarray mannage till the
in same manner till we reach individual



*/
//  preprocessor
#include <stdio.h>

// swap function
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// create the partion function that return the pidx
int partion(int arr[], int l, int r)
{
    int pivote = arr[r]; // last index is let pivote
    int i = l - 1;       // let initially l is l-1

    for (int j = l; j < r; j++)
    {
        if (arr[j] <= pivote)
        {
            j++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[r]);
    return i + 1; // this is the pivote index
}

// quick sort application

void quickSort(int arr[], int l, int r)
{
    /*
         l -> is the first index of the array
         r ->is the last index of the array

    */
    if (l < r)
    {
        // here we get the pivote index
        // by partion function
        int pidx = partion(arr, l, r);

        // calling the function recursive

        quickSort(arr, l, pidx - 1);
        quickSort(arr, pidx + 1, r);
    }
}

// function declration
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

// main method start here ..
int main()
{
    // create array
    int arr[] = {2, 5, 34, 3, 2, 2, 3};
    int n = sizeof(arr) / sizeof(int);
    int l = 0;
    int r = n - 1;

    // print array
    printf("before sorting the array looks like \n");
    printArray(arr, n);
    printf("\n");
    printf("after sorting the array looks like \n");
    quickSort(arr, l, n);
    printArray(arr, n);
    return 0;
}

// time complexitiy is worst case :)  o(n^2);
