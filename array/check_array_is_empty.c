#include<stdio.h>
#include<conio.h>

// create the methods that check the array is empty or not 
void checkArrayEmpty(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==0)
        {
            printf("arr[%d] is empty\n",i);
        }else { 
        printf("arr[%d] is not empty\n", i); 
        } 
    }  
   
}
// main methods 
int main(){

    // array declration 
    int arr[5]= {1,2,3,4};
    int size = sizeof(arr)/sizeof(int);
    checkArrayEmpty(arr,size);


    return 0;
}


//   here we check the array is empty or not 
//for the checking the array is empty or not we have to check the size of the array is 
// if  size === -1 ; 

// or another ways or checking the array is empty or not 



