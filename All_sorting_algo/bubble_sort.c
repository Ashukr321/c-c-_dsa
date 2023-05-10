// bubble sort
#include <stdio.h>


// here we  by the  help of the double referencing we ge the value of the array 
// and swap it 

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// buble sort

// a is the array and n is  the size of the array
void buble_sort(int arr[], int n)
{
    int i, j;
    // this is the for pass interation

    for (i = 0; i < n - 1; i++)
    {
        // this  is for comparision

        for (j = 0; j < n - i - 1; j++)
        {

            // check  condition and swap it
            if (arr[j] > arr[j + 1])
            {
                // int temp  = arr[j];
                // arr[j]= arr[j+1];
                // arr[j+1]= temp;
                swap(&arr[j],&arr[j+1]);

            }
        }
    }
}

// print the array

void print_array(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

// main methods start her
int main()
{
    int arr[] = {3,5,7,5,3};
    // take all the data from the users

   
    // size of the array
    int n = sizeof(arr) / sizeof(int);
    buble_sort(arr, n);
    // print the array 
    print_array(arr, n);

    return 0;
}