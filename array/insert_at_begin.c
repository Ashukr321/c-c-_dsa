
// ⭐⭐⭐⭐ insertion of data at begin of the  array

// preprocessor
// preprocessor⭐⭐

#include <stdio.h>
#define size 5

int idx;

int arr[size] = {};

// function declration ... 😎
int isEmpty();
void traverse(int arr[]);
int isFull();
void insertAtBegin(int arr[], int data);
void insertAtEnd(int arr[], int data);

// main method start here ...😎
int main()
{
    // code start here🤷‍♂️⭐

    // initialize the value of the idx
    idx = -1;
    // insertAtEnd(arr,34);
    // insertAtEnd(arr,3);
    insertAtBegin(arr,4);
    insertAtBegin(arr,40);
    insertAtBegin(arr,3);
    insertAtBegin(arr,5);
    insertAtBegin(arr,7);
    traverse(arr);
     

    return 0;
}

// function initialisation
int isEmpty()
{
    if (idx == -1)
    {
        return 1;
    }
    else

    {
        return 0;
    }
}

// if Full case
int isFull()
{
    if (idx == size - 1)
    {
        return 1;
    }
    else

    {
        return 0;
    }
}

// insert at endof the array logic function initialisation

void insertAtEnd(int arr[], int data){
    // check for the full case
    if (isFull() == 1)
    {
        printf("array is already full \n");
        return;
    }

    // empty case
    if (isEmpty() == -1)
    {
        arr[idx] = data;
    }

    // normal case
    idx++;
    arr[idx] = data;
    printf("%d data is inserted succesfully at index of %d \n ",data, idx);
}


// insertAtBegin of the data 
void insertAtBegin(int arr[],int data){
    //check for full case 
    if (isFull()==1)
    {
        printf("array is already full  \n");
        return ;
    }


    // check for the empty case 
     if (isEmpty()==1)
     {
        idx++;
        arr[idx]= data;
        return ;
     }
     
     // normal case 
     for (int i = idx; i >=0; i--)
     {
        arr[i+1]= arr[i];
     }
     arr[0]= data;
     idx++;
     printf(" %d data is inserted at  index of %d \n",data, idx);

}

// traverse the array 
void traverse(int arr[]){
for (int  i = 0; i < 5; i++)
{
    printf("%d   ",arr[i]);
}

}
