// insertion at end in the of the array

#include <stdio.h>

// defined the size of the array
#define size 5

// create idx pointer
int idx;

// create array
int arr[size];

// function declration
int isEmpty();
int isFull();
void insertAtEnd( int data);
//display the array element by linear search and index 
void display(){
    for (int i = 0; i < size; i++)
    {
        printf("%d At index : %d \n",arr[i],i);
    }
}

// main methods start here ...
int main()
{
    idx = -1;
    // inserting elements in the array
    insertAtEnd(2);
    insertAtEnd(1);
    insertAtEnd(10);
    insertAtEnd(13);
    insertAtEnd(12);
    display();
    return 0;
}

// isEmpty ()
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
// isFull ()
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

void insertAtEnd( int data)
{
    // check for the full case 
    if (isFull()==1)
    {   
        printf("array is fulll \n");
        return; 
    }
    if (isEmpty()==1)
    {
        arr[idx]= data;
    }
    
    //normal case 
    idx++; 
    arr[idx]= data; 
    printf("data is inserted %d at index of %d \n",data, idx);
    
}