// insertion at begin 

// preprocessor 
#include<stdio.h>
#include<conio.h>

// defined the size of the array 
#define size  5 

// defined the local variables 
int idx; 

// create the array 
int arr[size];


// functions declration 
int isEmpty();
int isFull();
void insertAtBegin(int data );

// main method ⭐⭐⭐⭐⭐

int main(){
    // set the value of the idx ; 
    idx = -1 ; 


    // ⭐⭐⭐ calling the  function 
     insertAtBegin( 4);


    return 0; 
}

// function initlisazation 



// isEmpty 
int isEmpty(){
    if (idx == -1 )
    {
        printf("array is empty\n");
        return 1; 
    } 
}



// isFull
int isFull(){
    if (idx ==size-1)
    {
        printf("array is full\n");
        return 1; 
    }
}


// insertAtBegin(); 
void insertAtBegin(int data){
    // check for the full case 
    if (isFull()==1)
    {
        printf("array is full ");
    }

    // apply logic of  insertion atBegin 
    for (int i = idx; i >=0; i--)
    {
        arr[i+1]= arr[i];
    }
    
    arr[0]= data; 
    printf("%d data is inserted at index of ",data);


    // ⭐⭐⭐⭐
    // printf("%d",idx);// here the idx is -1 ; 
    //we have to increment the idx by 1

    idx++;
    
    // printf("%d",idx);// here the idx is -1 ; 

    
}