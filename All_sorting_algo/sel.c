#include <stdio.h>

// void swap(int *x, int *y)
// {
//     int temp = *x;
//     *x = *y;
//     *y = temp;
// }

void selectionSort(int arr[], int n )
{

    int i, j, k;

    for (i = 0; i < n - 1; i++)
    {
        k = i;
        // inner loop 
        for ( j =i+1; j < n; j++)
        {

            if (arr[j]<arr[k])
            {
                k= j;
            }
            
        }
        // swap function 
        int temp = arr[k];
        arr[k] = arr[i];
        arr[i]= temp;
    
    }
}


// create selction sort 

// printarray

int main()
{
    int arr[]   = {3,8,2,1,34,4,3,2,32,30};
    int n = sizeof(arr)/sizeof(int);
    selectionSort(arr,n);

    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;

}


