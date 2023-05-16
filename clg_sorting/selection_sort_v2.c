// selection  sort in the c

// preprocessor
#include <stdio.h>

// selection sort methods  n is the size of the array
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selectionSort(int arr[], int n)
{
    // outer loop

    for (int i = 0; i < n - 1; i++)
    {
        // inner loop
        int min_idx = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
            
        } 
       
        

        swap(&arr[min_idx], &arr[i]);
    }
}
// priting the array

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {1, 0, 31, 42, 50, 60, 40, 12, 91.9,8};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    printArray(arr, n);
    return 0;
}
