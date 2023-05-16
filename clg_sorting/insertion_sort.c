// insertion sort in the c

// preprocessor 
#include<stdio.h>

// insertion sort
void insertionSort(int arr[], int n) {
    // outer loop 
    for (int i = 1; i <n; i++)
    {
        int key = arr[i];
        // inner loop 
        int j = i-1;
        while (j >=0&&arr[j]>key)
        {
           
            arr[j+1]= arr[j];
            j = j-1;
        }
        
        arr[j+1]=key;
        
    }
    
}
// printing the array 

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    //create a array 
    int arr[]= {2,4,3,1,34,2};
    int n = sizeof(arr)/sizeof(int);
    insertionSort(arr,n);
    // printing the array
    printArray(arr,n);
    return 0;
}