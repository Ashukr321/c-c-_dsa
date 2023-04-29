#include<stdio.h>
#define size 5

// create a pointer variables 
int idx ,sum  = 0;

// create a array with size of the size 
int arr[size];
// function declartion 
int isEmpty();
int isFull();

void insertAtEnd(int data );
void traversArray(int arr[]);
// main methods start here
void reverse(int arr[]){
    for (int i = size-1; i >=0; i--)
    {
        printf("%d \n",arr[i]);
        sum+=arr[i];
    }
    
}

int main(){
    //  initiailse idx 
    idx = -1; 

    insertAtEnd(12);
    insertAtEnd(1);
    insertAtEnd(5);
    insertAtEnd(53);
    insertAtEnd(16);
    // insertAtEnd(7);
    traversArray(arr);
    printf("\n\n");
    reverse(arr);
    printf("\n\n");

    printf("sum of the array elements %d ",sum);

    return 0; 
}

// isfull 
int isFull(){
    if (idx ==size-1)
    {
        return 1; 
    }
    else{
        return 0 ;
    }
    
}

// isempty case 
int isEmpty(){
    if (idx==-1)
    {
        return 1; 

    }else{
        return 0; 
    }
    
}

// insertAtEnd(int data);
void insertAtEnd(int data){
    // check full case 
    if (isFull()==1)
    {
        printf("array is full \n");
        return ; 
    }

    // empty case 
    if (isEmpty()==1)
    {
        arr[idx]=data;
    }

    // normal  case 
    idx++;
    arr[idx]= data; 
    
    // message 
    printf(" %d data is inserted successfully at index  of %d \n",data, idx );    
}


void traversArray(int arr[]){
    for (int i = 0; i <size; i++)
    {
        printf("%d \n",arr[i]);
    }
    
}

