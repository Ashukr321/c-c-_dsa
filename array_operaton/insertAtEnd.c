// preprocessor 

#include<stdio.h>

// function declaration 
void insertArrayElementAtEnd(int arr[],int data);
void showArrayData(int arr[]);

    //declare gobal variables 
    int arr[5]= {1,24,34,5,23}; 
    int size = sizeof(arr)/sizeof(int);



// main methods
int main(){
    insertArrayElementAtEnd(arr,45);

    // calling the function for the printing the array 
    showArrayData(arr);
}

// intializing the array 
void insertArrayElementAtEnd(int arr[],int data){
    
    // check the condition for the array is full 
    if ((arr[size-1]==0))
    {   
        arr[size-1]=data;
    }
    else{
        printf("already full \n");

    }
}


// here we create the function for the traverse the array by the  help of the for loop 
void showArrayData(int arr[]){
    for (int i = 0; i <size; i++)
    {
        printf("%d\n",arr[i]);
    }
    
}

