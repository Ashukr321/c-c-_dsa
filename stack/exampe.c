#include <stdio.h>

int mergearray(int a[], int b[], int arr1size, int arr2size);
int main()
{
    int idx = -1;
    // elements of first Array
    int arr1[5]= {1,3,5,5,4} ;

    int arr2[5] = {5,3,5,6,5};
  

    int size1 = sizeof(arr1) / sizeof(int);
    int size2 = sizeof(arr1) / sizeof(int);

    mergearray(arr1, arr2, size1, size2);

    return 0;
}

int mergearray(int arr1[], int arr2[], int arr1_size, int arr2_size)
{

    int size3 = arr1_size + arr2_size;
    int arr3[size3] , i ,j;
    for (int i = 0; i < arr1_size; i++)
    {
        arr3[i] = arr1[i];
    }

    // here we start element in  arr3 and increment the j by 1 
    for (i = 0, j = arr1_size; j < size3 && i < arr2_size; i++, j++)
    {
        arr3[j] = arr2[i];
    }

    // Array Elements After Merging
    for (int k = 0; k < size3; k++)
    {
        printf("%d ", arr3[k]);
    }
}

