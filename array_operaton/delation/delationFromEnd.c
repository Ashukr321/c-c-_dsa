// delation  from end of the array 

// preprocessor 
#include<stdio.h>
#include<conio.h>

// defined the array size 
#define size 5 

// create the array  of size of size 
int arr[size]; 


// declare the array pointer variables idx 
int idx; 

// function declrations 
int isEmpty(); 
int isFull(); 
int delateFromEnd(); 
void insertAtEnd(int data);

// main methods start here ⭐⭐⭐⭐⭐⭐

int main(){

    // initalise the  value of the idx by -1 ; 
    idx = -1 ; 
    insertAtEnd(2);
    insertAtEnd(2);
    insertAtEnd(24);
    insertAtEnd(25);
    int delateData = delateFromEnd();
    printf(" \n%d delated from end of the array \n",delateData);
    return 0 ;
}


// function initialisation 

// isEmpty
int isEmpty(){
    if (idx ==-1 )
    {
        return 1 ; 
    }else{
        return 0;
    } 
}

// isFull()
int isFull(){
    if (idx == size-1)
    {
        return 1;
    }else{
        return 0;
    }
    
}

// delate from the end 
int delateFromEnd(){
    // check for the empty case 
    if (isEmpty()== 1)
    {
        printf("array is empty \n");
    }
    
    //create the temp variables that store the value of the delate element of the array 
    int temp = arr[idx]; 
    idx --; //  we need to decreased the value of the idx by 1 bec 1 element is delated 
    return temp;
}

//  insert at end of the array 
void insertAtEnd(int data){
    // check for the full case
    if (isFull()==1)
    {
        printf("array is full \n");
    }

    // check for the empty case 
    if (isEmpty()==1){
        arr[idx] = data ;
    }
    
    //normal case 
    idx++; // increment the idx by the 1 
    arr[idx]= data; 
    printf("%d data is inserted succesfull at index of %d \n", data , idx );
}