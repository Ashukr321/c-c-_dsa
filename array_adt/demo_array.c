#include <stdio.h>
#include <stdlib.h>

// create the structure
struct Array
{
    int *A;
    int size;
    int length;
};

// display all the elements of the array
void Dispaly(struct Array arr)
{
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }
}

// main method
int main()
{
    int n, i;
    // create the arr
    struct Array arr;
    // take the size of the array from the user and allocate the memory in the heap memory
    // at dynamically

    printf("Enter size of the an array \n");

    scanf("%d", &arr.size);

    arr.A = (int *)malloc(arr.size * sizeof(int));
    //  (int *) type casting

    arr.length = 0;

    printf("enter number of numbers \n");
    scanf("%d", &n);
    // message
    printf("enter all elements");

    for (int i = 0; i < n; i++)
    {

        scanf("%d", &arr.A[i]);
        arr.length = n;
    }

    Dispaly(arr);
    return 0;
}
