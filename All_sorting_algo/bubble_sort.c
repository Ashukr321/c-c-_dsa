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
    int i, j, flag;

    // this is the for pass interation

    // outer loop for the number of phase 

    for (i = 0; i < n - 1; i++)
    {
        flag = 0;
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                flag = 1;
            }
        }
        if (flag == 0)
            break;
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
    //  create a array of number of the elements 
    
    int arr[] = {3, 5, 7, 5, 3,45,4,4,45,34,524,5,2};
    // take all the data from the users

    // size of the array
    int n = sizeof(arr) / sizeof(int);
    buble_sort(arr, n);
    // print the array
    print_array(arr, n);

    return 0;
}