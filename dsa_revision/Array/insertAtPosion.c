// here we  see the  insetion at postion in the array
// preprocessor
#include <stdio.h>

#define size 5

int idx;
int arr[size] = {12, 3, 4, 5};

// function declraion
int isEmpty();
int isFull();

void insertAtPosition(int data, int pos);

// selection sort
void selectionSort(){
    int i, j, min_idx, temp;
    for(i = 0; i < size-1; i++){
        min_idx = i;
        for(j = i+1; j < size; j++){
            if(arr[j] < arr[min_idx])
            min_idx= j;
        }
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}


// display
void display()
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

//  main methods start here ..
int main()
{
    idx = -1;
    insertAtPosition(12, 2);

    display();
    selectionSort();
    printf("\n");
    display();

    return 0;
}

// int isEmpty()
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

void insertAtPosition(int data, int pos)
{
    // check for the full case
    if (isFull() == 1)
    {
        printf("array is already Full\n");
        return;
    }

    for (int i = idx; i >= pos - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    // insert data at postion
    arr[pos - 1] = data;

    printf("%d is inserted at position  %d \n", data, pos);
}
