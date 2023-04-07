// here we see the how to insert the element in the end of the array 


// preprocessor 
#include<stdio.h>
#include<conio.h>

// defined the size of the array 
#define size 5 

// defined the global variables 
int idx; 

// create the array with the size of the size 
int arr[size]; 


// function declartion 
int isEmpty();
int isFull();

void insertAtEnd(int data);



// 🙂🙂🙂🙂🙂🙂🙂🙂
// main methods start here ⭐⭐⭐⭐⭐⭐⭐

int main(){

    // set the  value of the idx = -1 

    idx = -1 ; 

    // ⭐⭐⭐ calling the function 
    insertAtEnd(10);
    insertAtEnd(20);
    insertAtEnd(30);
    insertAtEnd(40);
    insertAtEnd(50);
    insertAtEnd(60); // this will gives you error array is full 

    return 0; 
}

// 🙂🙂🙂🙂🙂🙂🙂🙂
// functions initlisation start here 

int isEmpty(){
    if (idx == -1)
    {
        return 1; 
    }else{
        return 0; 
    }
}


// isFull 
int isFull(){
    if (idx == size-1 )
    {
        return 1; 
    }else {
        return 0; 
    }
    
}



// insertAtEnd()
void insertAtEnd(int data ){
    // check the  array  is full or not 
    // if full then  return a message simple 
    if (isFull()== 1)
    {
        printf("array is full \n");
        return;
    }
    
    // increment the idx and set the vlaue of the data at  the postion of the idx 
    //in the array 🙂🙂🙂🙂
    idx ++; // postfix increment by 1 
    arr[idx]= data;
    printf(" %d data is inserted at index of %d \n", data , idx);

}