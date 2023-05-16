// bubble sort is simplest sorting algorithsm that work by repeatedly
//  swaping the adjacent elements if  they are in wrong order

// preprocessor
#include <stdio.h>

// create  bubble sort methods
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {   
        int flag = 0;
        // inner loop
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag= 1;
            }
        }
        if (flag==0)
        {
            break;
        }
        
    }
}

// printing the array 

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
// main methods start here ....
int main()
{
    int arr[]= {4,3,2,1,34,32,12};
    int n = sizeof(arr)/sizeof(int);

    bubbleSort(arr,n);
    printArray(arr,n);
    return 0;
}