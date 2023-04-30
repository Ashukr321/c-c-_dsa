
//insert the element at the begin of the array 
#include<stdio.h>

// defined the size of the array 
#define size 5 

// create a idx index 
int idx ;

// create a array with the size of the size 
int arr[size];

// declare the function 
int isEmpty();
int isFull();
void insertAtBegin ( int arr[], int data);
int Display(int arr[size]);


int main(){
    idx = -1;
    insertAtBegin(arr,40);
    insertAtBegin(arr,442);
    insertAtBegin(arr,44);
    insertAtBegin(arr,4);
    insertAtBegin(arr,50);
    insertAtBegin(arr,50);

    return 0;
}

// isEmpty
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
    if (idx ==size-1)
    {
        return   1; 
    }
    return 0;
    
}
 

// insertAtBegin 
void insertAtBegin ( int arr[], int data){

    // check for full case 
    if (isFull()==1)
    {
        printf("array is already full 😎\n");
        return;
    }

    // check for the empty case
    if (isEmpty()==1)
    {
        idx++;
        arr[0]=data;
        return;
    }
    
    // normal case here we shift the data arr[i+1] = arr[i];

    for (int i = idx; i>=0; i--)
    {
        // shift the data arr[i] in to the arr[i+1];
        arr[i+1]= arr[i];
    }
    arr[0]= data;

    printf("%d data is inserted at index %d \n",data,idx);
    idx++;// increment the idx bec idx value is -1 
    
    
}