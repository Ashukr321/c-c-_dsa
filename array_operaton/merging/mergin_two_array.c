// preprocessor 
#include<stdio.h>
#include<stdlib.h>

// algorithms 
// create 2 array 
// arr1 and arr2  with size of size1 and size2  


// create 3rd array with size of size1+size2 

// create two pointer variables array to insert the element in the array 

// int m , n  this pointer variables 

// insertAtend of the array in both array  one by one and insert the 
// both array element in the arr3 

// print the element of the array3 




// defined the variables 
#define size1 5
#define  size2 5 

// create the two  pointer variables
int idx1,idx2;

// create the arr1 and arr2 of size of size1 and size2 
//  int size3 = (sizeof(arr1)/sizeof(int)) +(sizeof(arr2)/sizeof(int));

int arr1[size1]; 
int arr2 [size2]; 


// int arr3[size3];
//get the size for the arr3 by the help of the sizeof operator  
// sizeOf(); 
// int size3 = size1+size2;



// ⭐⭐⭐⭐⭐
// function declartion 
void insertAtEnd(int data );
int isEmpty();
int isFull();


int main(){

    // initialisation of the  pointer variables m and n by -1 
    idx1 =-1;

    

    // int size3 = (sizeof(arr1)/sizeof(int)) +(sizeof(arr2)/sizeof(int));
    // int arr3 [size3];

    printf("%d",size3);
    return 0;
}


// function initialisation 
// isEmpty()
int isEmpty(){
    if (idx1==-1 || idx2== -1)
    {
        return 1;
    } 
}
