// how to reverse the array 

// preprosessor
#include<stdio.h>
// #include<conio.h>

#define size 5

// create the  global pointer variables index idx  
int idx ; 

// create the array 
int arr[size];

//function declration 
int isEmpty();
int isFull();
void reverseArray();
void traversArray();
void insertAtEnd(int data);


// main methods
int main(){
    // set the value of the idx 
    idx = -1; 
    insertAtEnd(1);
    insertAtEnd(2);
    insertAtEnd(3);
    insertAtEnd(4);
    insertAtEnd(5);
    printf("\n\n");
    traversArray();
    reverseArray();
    printf("\n\n");

    traversArray();


    return 0; 

}

//  function initialisation 
int isEmpty(){
    if (idx == -1 )
    {  
        return 1; 

    }
    else{
        return 0; 
    }
}


//  isFull
int isFull(){
    if (idx ==size-1 )
    {
       return 1; 

    }else{
        return 0;
    }
    
}


// reverseArray 
void reverseArray(){
    // check for the  empty case 
    if (isEmpty()==1)
    {
       printf("array is empty \n");
       return;
    }
    for (int i = 0, j = idx ; i<j;i++, j--)
    {
        // swap the  element of the array by using the third variables 
        int temp = arr[i];
        arr[i]= arr[j];
        arr[j]= temp; 
    }

}



// insert the array at end 
void insertAtEnd(int data ){
    // check for the full case 
    if (isFull()==1){

        printf("array is  full \n");
        return;
    }
    // if array is empty then 
    if (isEmpty()==1)
    {
        arr[idx]= data;
    }

    // normal case 
    ++idx; 
    arr[idx]= data; 
    printf("%d data is inserted at index of %d \n", data , idx);
    
    
}

// traverse the array 
void traversArray(){
    for (int i = 0; i < size ; i++)
    {
        printf("%d \n",arr[i]);
    }
    
}
