// preprocessor 
#include<stdio.h>
#include<conio.h>
// defined the size of the array 
#define size 5  // don't used the ; colon  else it will gives the error 


 // create the array with the size of size 


 int arr[size];



// declare the global variables 
// idx is the  used for the pointer variables in the array 

int idx ;

// declare the functions

int isEmpty();
int isFull();


// main methods start 
int main(){
    // set the value of the idx is -1 ; 
     idx = -1; 
    
     //call the function 
     isEmpty();
    return 0;
}

// initialisation of the functions start here .. ⭐⭐⭐

int isEmpty(){
    if (idx == -1)
    {
        printf("array is empty \n ");
        return 1;
    }
}

// isFull 
int isFull(){
    if (idx == size-1)
    {
        printf("array is full \n");
        return 1; 
    }
}
