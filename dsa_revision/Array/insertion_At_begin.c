// insertion at begin in the array
#include <stdio.h>
#define size 5

int idx;
int arr[size] = {2, 4, 3, 4};
// function declration
int isEmpty();
int isFull();
void insertAtBegin(int data);

// main method start here ..

// bubble sort  time complexity is o(n^2);

void bubbleSort()
{
    // outer loop for the number of pass
    for (int i = 0; i < size - 1; i++)
    {
        int flag = 0;
        // inner loop
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
}

// print the element
void display()
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    idx = -1;
    insertAtBegin(34);
    bubbleSort();
    display();
    return 0;
}

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

//  insertAtBegin
void insertAtBegin(int data)
{
    // check for full case
    if (isFull() == 1)
    {
        printf("Array is full already \n");
        return;
    }

    // check for empty case
    if (isEmpty() == 1)
    {
        arr[0] = data;
        idx++;
    }
    // normal case

    for (int i = idx; i >= 0; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[0] = data;
    printf("data is inserted at %d at inedx %d \n", data, idx);
    idx++;
}