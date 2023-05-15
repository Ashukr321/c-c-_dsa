// here  we see the bubble sorting in the c

// preprocessor
#include <stdio.h>

// function for the bubble sort
void bubbleSort(int arr[], int n)
{
    // here we sort the array in the accending array

    // outer loop  for number of te phase
    for (int i = 0; i < n - 1; i++)
    {      int flag = 0;
        // inner loop for the comparision of the elements of the array
        for (int j = 0; j < n - 1 - i; j++)
        {
            // here we compare with j and j+1;
            if (arr[j] > arr[j + 1])
            {
                // swap the element if arr[j]>arr[j+1];
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0){
            break;
        }
    }
}

// print the array
void prrintArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
}

// main methods start here ..
int main()
{
    // create arrat
    int arr[7] = {1, 53, 6, 4, 7, 77, 55};
    int size = sizeof(arr) / sizeof(arr[0]);
    // bubble sort
    printf("before sorting by bubble sort \n");
    prrintArray(arr,size);
    bubbleSort(arr, size); 
    printf("\nafter sorting the array by bubble sort \n");
    prrintArray(arr,size);
   

    return 0;
}


// time complexity worst caseis O(n*n);
//best case is O(n);

// average case is also O(n*n);

