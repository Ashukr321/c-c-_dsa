// binary search by recrusive ways

#include <stdio.h>

// function delcration

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}


int binarySearch(int arr[], int l ,int r, int key){
   
    
    if (l<r)
    {
        int mid = (l+r)/2;
        if (arr[mid]==key)  
        {
            return mid ;
        }
        else if(arr[mid]>key){
            return binarySearch(arr,l,mid-1,key);
        }else{
            return binarySearch(arr,mid+1,r,key);
        }

    }
    return -1;
    
}
// main methods
int main()
{

    // create the array
    int arr[] = {1,2,3,4,56};

    int n = sizeof(arr) / sizeof(int);
    int l = 0; 
    int r = n-1;
    printArray(arr, n);;
    int key = 4;
    int index = binarySearch(arr, l , r , key);
    printf("\n\n\n");
    printf("%d ", index);
    return 0;
}