// updatation  operation in the c 
// this is updation first 
// preprocressor
#include<stdio.h>
#include<conio.h>

// defined the size of the array 
#define size 5 
// declare a global variables idx 
int idx ; 


// create the arr  of size of size 
int arr[size];

// functon declaration 

int isEmpty();
int isFull();
void updateData(int data );
void insertAtEnd(int data);


// main methods starts here .. 🙂🙂🙂🙂
int main(){

    // set the value of  the idx 
    idx = -1; 

    // calling the function 
    insertAtEnd(1);
    insertAtEnd(2);
    updateData(10);
    return 0;
}

//  function declartion 🙂🙂🙂

int isEmpty(){
    if (idx == -1)
    {
        return 1; 
    }
    else{
        return 0;
    }
    
}

// isFull case
 
int isFull(){

    if (idx == size -1)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}

// update data ; 
void updateData(int data){

    // check for the empty case 
    if (isEmpty()==1)
    {
        printf("array is empty \n");
        return ; 
    }

    arr[0]= data; 
    printf("%d data is updated at first index 0 \n", data);



}



// insert the element at the end of the array 

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
        idx ++; 
        arr[idx]= data; 
    }
    // normal case 
    idx++; 
    arr[idx]= data; 
    printf("%d data is inserted at index of the %d \n", data , idx);
    
}
