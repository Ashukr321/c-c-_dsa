// buuble_sort_c

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
// create a function for the bubblesort
void bubble_sort(int arr[], int n)
{

    // outer loop for the number of pass
    for (int i = 0; i < n - 1; i++)
    {
        int flag = 0; // this is optimized solution of the bubble sort 
        

        // inner pass to sort
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                flag = 1;
            }
        }
        if (flag == 0){
            break;
        }
    }
}
// print the array
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
// main methods
int main()
{
    // create array
    int arr[] = {4, 3, 41, 4, 134, 35, 4, 5, 25, 2, 35, 50, 25, 2, 5, 0};

    // get the size of the array
    int n = sizeof(arr) / sizeof(int);
    // int n = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr, n);
    print(arr, n);
    return 0;
}