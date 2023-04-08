// here we see the updation of the element from the last of the array 

// preprocessor 
#include<stdio.h>
#include<conio.h>

// defined the size  
#define size 5

// declare the global array pointer variables
int idx ; 

// create the arrayy with the size of the array 
int arr[size];

// function declaration  🤷‍♂️🤷‍♂️🤷‍♂️

int isEmpty();
int isFull();
void updateAtEnd(int d);
void insertAtEnd(int data);
// main methods start here ...🤷‍♂️🤷‍♂️🤷‍♂️🤷‍♂️🤷‍♂️

int main(){

    //initialisation of the idx by the -1 
    idx = -1; 

    // calling the fucntion 

    insertAtEnd(1);
    insertAtEnd(2);
    insertAtEnd(3);
    updateAtEnd(10);
    return 0; 


}


//  function  function declaration here 🤷‍♂️🤷‍♂️🤷‍♂️🤷‍♂️

int isEmpty(){
    if (idx == -1)
    {
        return 1; 
    }
    else{
        return 0;
    }
    
}

// isFull
int isFull(){
    if (idx == size-1)
    {
        return 1; 
    }
    else{
        return 0;
    }
    
}


// updateAtEnd();

void updateAtEnd(int d){
    // check the empty case 
    if (isEmpty()== 1)
    {
        printf("array is empty \n");
        return ; 
    }
    
    arr[idx]= d; 
    printf("%d data is inserted at  index of  %d ", d , idx);
}

// insertAtEnd(int data)
void insertAtEnd(int data ){
    // check for the full case 
    if (isFull()==1)
    {
        printf("array is full \n");
        return ;
    }
    // for empty case 
    if (isEmpty()==1)
    {
        idx++; 
        arr[idx]= data;
    }
    // normal vase 
    idx++; 
    arr[idx]= data; 

    printf(" %d data is inserted at index of %d \n", data , idx);
    

}