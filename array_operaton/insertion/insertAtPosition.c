// insertAtPosition

// preprocessor
#include <stdio.h>
#include <conio.h>

// defined the  array size
#define size 5

// declare  the global variables
int idx;

// create  the array with the size of size
// global array access to the every fucntion

int arr[size];

// function declration
int isEmpty();
int isFull();
void insertAtPosition(int data, int position);

// main methods start here ⭐⭐⭐⭐
int main()
{

    // set the value of the idx = -1
    idx = -1;
    
    // ⭐ calling the function ⭐
    insertAtPosition(4, 4);
    return 0;
}

// function initalisation

// isEmpty
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

// isFull

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

// insertedAtPosition

void insertAtPosition(int data, int position)
{
    // check for the full case
    if (isFull() == 1)
    {
        // print the full case message
        printf("array is full \n");
    }

    // here we move right shift from idx to idx+1; right shift till we get postion-1
    for (int i = idx; i >= position - 1; i--)
    {
        arr[i + 1] = arr[i];
    }

    // ⭐⭐⭐⭐  here we take the postion not index of the array
    // as we know that array index is start from the 0 so we have to
    // subtaract by 1 in  postion

    arr[position - 1] = data;
    printf(" %d data is inserted at postion %d \n ", data, position);
}