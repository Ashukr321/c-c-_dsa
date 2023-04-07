#include<stdio.h>
#include<conio.h>
// main methods 
int main(){
    // here we see the pointer to array 

    // creating the array  
    // store in the stack in the memeory 
    int arr[10];// defined array with the size of 10 

    // here we see the value of data in to the array 
    for (int i = 0; i < sizeof(arr); i++)
    {
        arr[i] = i;
    }
    

    // here we  print the all data of the array 
    for (int i = 0; i <sizeof(arr); i++)
    {
        printf("%d \n",arr[i]);
    }
    
    return 0;
}