#include<stdio.h>
#include<conio.h>


// declration of the function 
void printArray(int arr[]);
// main methods 
 int main(){
    int arr[] = {1,2,4,51,13,513,5,13,51,35,1};   

     int sum  = 0; 

    // traverse the array 
    for ( int  i = 0; i < sizeof(arr)/sizeof(int); i++)
    {
        printf("%d\n",arr[i]);
        sum+= arr[i];
    }
    
    // decalration of  the array 
    //  printArray(arr);
    printf("the sum of the elements of the array  is %d \n", sum);
    return 0; 
}

// printing the array in the forward direction 
// void printArray(int arr[]){
//     for (int  i = 0; i < sizeof(arr)/sizeof(int); i++)
//     {
//         printf("%d\n",arr[i]);
//     }
    
// }
