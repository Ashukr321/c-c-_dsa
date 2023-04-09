// updatation at given postion in the array 

// preprocessor 
#include<stdio.h>
#include<conio.h>

// defined the size of the array 
#define size 5

// declare the golobal variables 
int idx ; 

// create the array with size of size 
int arr[size];

// function declaration 
int isEmpty();
int isFull();
void insertAtEnd(int data);
void updateAtPosition(int data, int position);

void dispalyArray(); 
// main methods start here 🤷‍♂️🤷‍♂️🤷‍♂️

int main(){
    // set the value of the idx -1; 
    idx = -1; 
    //calling the function 
    insertAtEnd(1);
    insertAtEnd(2);
    insertAtEnd(3);
    updateAtPosition(10,2);

    dispalyArray();
    return 0;
}

// isEmpty()
int isEmpty(){
    if (idx == -1)
    {
        return 1; 
    }else{
        return 0;
    } 
}


// isFull()
int isFull(){
    if (idx == size -1);
    {
        return 1; 
    }else{
        return 0;
    }
    
}

// update data at the given postion 
void updateAtPosition(int data , int position){

    if (position-1>size-1)
    {
       
        printf("  you enter worng  postion plz enter valid postion 🤷‍♂️ less or equal to  %d \n", size-1);
        return ;
    }
    
    // check for empty case 
    if (isEmpty()==1)
    {
        printf("arrays is empty \n");
        return ; 
    }
    
    arr[position-1]= data; 
    printf("%d data is updated at inex of %d \n", data, position);

}


//insertAtEnd
void insertAtEnd(int data){
    // check for the full case 
    if (isFull()==1)
    {
        printf("array  is full \n");
        return ; 
    }
    
    // check for the empty case 
    if (isEmpty()==1)
    {
        arr[idx]= data; 

    }
    // normal case 
    ++idx; 
    arr[idx]= data; 
    printf(" %d data is inserted at index of the %d \n", data , idx);
    
}


// traverse linear serach array 
void dispalyArray(){
    for (int i = 0; i <=idx; i++)
    {
        printf("%d\n",arr[i]);
    }
    
}