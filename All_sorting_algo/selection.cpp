// here we see the selection sort in the cpp 

// preprocessor 
#include<iostream>

using namespace std; 

// main methodss start 

// print the array 
void print(int arr[], int n ){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";

    } 
}


// create function that take the array and size of the array 

void selctionSort(int arr[], int n ){


    // for the pass we iterate the pass <n-1
    for (int i = 0; i <n-1; i++)
    {
        int min_index= i; 
        // find out the min element and shift in to the first position
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<arr[min_index])
            {
                min_index = j;
            }
            int temp = arr[i];
            arr[i]= arr[min_index];
            arr[min_index]= temp;
        }
             
    }


    
}
int main(){

    int arr[]= {12,4,2,1,43,54,0,3,200,300,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    selctionSort(arr,n);
    print(arr,n);
    return 0 ; 
}

