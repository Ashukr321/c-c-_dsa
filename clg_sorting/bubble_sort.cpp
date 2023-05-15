// here we see the bubble sorting in the cpp 

// preprocessor 
#include<iostream>
using namespace std;

// bubble sort 
void bubbleSort (int arr[],int n){
    // outer loop 
    for (int i = 0; i < n-1; i++)
    {   
        int flag = 0;
        //inner loop 
        for (int j = 0; j < n-1-i; j++)
        {
            //check and compare the value of the array by arr[j]>arr[j+1]
            if (arr[j]>arr[j+1])
            {
                // swap the element of the array 
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

            }
            flag = 1;
            
        }
        if (flag==0)    
        {
            break;
        }
        
        
    }
    
}
// print the  array elments 
void print(int arr[],int n) {

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
};

// main methods start here .. 
int main(){


    // create array 
    int arr[]= {1,54,3,5,64,63,464,4,233,2,2,21,1};
    //get size 
    int n = sizeof(arr)/sizeof(arr[0]);
    // print the array
    cout<<"before bubble sorting the array elements "<<endl;
    print(arr,n);
    bubbleSort(arr,n);
    cout<<endl;
    cout<<"after bubble sorting the array elements  "<<endl;
    print(arr,n);

    return 0 ; 
}

// bubble sort time complexity worst case is o(n*n);
//best case time cmplexity is o(N);

