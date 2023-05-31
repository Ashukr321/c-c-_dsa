// here we see the merge sort in the c
// preprocessor
#include <stdio.h>

void merge(int arr1[], int arr2[], int m, int n)
{
    // initalise two variables pointer i and j
    // both pointer are pointing the to each other array

    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j]){
            printf("%d ", arr1[i++]);   
        }
        else
            printf("%d ", arr2[j++]); 
    }

    // now print the  rest of the element of the array 
    while (i<m)
    {
        printf("%d ", arr1[i++]);   
    }
    while (j<n)
    {
        printf("%d ", arr1[i++]);   
    }
    
}

// main method start here
int main()
{
    // create two array

    // array1
    int arr1[] = {10, 15, 20,20, 40,50};

    // array2
    int arr2[] = {5, 6, 6, 10, 15};

    // find the size of the array1 and array2
    int m = sizeof(arr1) / sizeof(int);
    int n = sizeof(arr2) / sizeof(int);
    merge(arr1,arr2,m,n);

    // merge array
}
