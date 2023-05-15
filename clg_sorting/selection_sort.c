// selection sorting
// preprocessor

#include <stdio.h>

// selection sort

void selectionSort(int arr[], int n)
{
    // local variables

    // outer loop phase
    for (int i = 0; i < n-1; i++)
    {

        // let set and maan lete hai ki first element is shortest element

        int min_idx = i;

        // inner loop for find out the smallest element of the array
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                // set the new min index is j
                min_idx = j;
            }
           
        }
         // now swap the first element to new samllest elements
             int temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
           
    }
}

// printing the array elements
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// main methods start
int main()
{
    int arr[] = {4, 3, 1, 2, 1, 3, 5, 3, 44, 32, 4};

    int n = sizeof(arr) / sizeof(int);
    printf("before selecton sorting \n");
    print(arr, n);
    selectionSort(arr, n);
    printf("\nafter selecton sorting \n");
    print(arr, n);

    return 0;
}


// time complexity of selection sort is O(n*n);
