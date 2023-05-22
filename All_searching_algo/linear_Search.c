// here we we the  linear search in the c

// preprocessor
#include <stdio.h>

// here we apply the linear search logic
// findout the key from the given array
// return the key value

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
// main methods
int main()
{
    // create a array
    int arr[] = {334, 34, 3, 43, 3, 3, 32, 3, 43, 4, 34, 4, -4};
    int n = sizeof(arr) / sizeof(int);
    // set the key value

    int key = 43;
    // call the linear search method that return the key_index of  key valye 
    int key_index = linearSearch(arr, n, key);

    printf("%d", key_index);
    return 0;
}