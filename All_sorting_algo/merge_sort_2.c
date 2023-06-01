// merge sort in the c
// preprocessor

#include <stdio.h>

void mergeSort(int arr1[], int arr2[], int m, int n)
{
    // create two varibles pointer i and j
    int i = 0, j = 0;
    while (i < m && j < n)
    {

        if (arr1[i] < arr2[j])
        {
            printf("%d ", arr1[i++]);
        }
        else
        {
            printf("%d ", arr2[j++]);
        }
    }
    while (i < m)
    {
        printf("%d ", arr1[i++]);
    }
    while (j < n)
    {
        printf("%d ", arr2[j++]);
    }
}

// main method start here ...
int main()
{
    // create array
    int arr1[] = {1, 3, 4, 23, 45, 56, 67};
    int arr2[] = {3, 4, 65, 77, 88, 99};

    // find the size of the array
    int m = sizeof(arr1) / sizeof(int);
    int n = sizeof(arr2) / sizeof(int);

    // print the array
    mergeSort(arr1, arr2, m, n);
    return 0;
}