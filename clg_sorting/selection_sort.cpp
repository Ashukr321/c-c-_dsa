// selection sort in the cpp

// preprocessor
#include <iostream>
using namespace std;

// selection sort
void selectionSort(int arr[], int n)
{
    // outer loop for the number of pass
    for (int i = 0; i < n - 1; i++)
    {

        // let min index is i
        int min_index = i;
        // inner loop  to get the new min_index and swap the element to the min_index
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
            // swap
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }
}

// display the array elements
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
// main method start
int main()
{
    //create a array 
    int arr[]= {33,3,5,555,44,34,3,5,5,66,7,24,54,4,5,4,5,345,43,4,3,22,34,32,};
    int n = sizeof(arr)/sizeof(int);

    cout<<"before selection sort "<<endl;
    display(arr,n);
    cout<<endl;
    cout<<"after selection sort "<<endl;

    // call the selection sort function
    selectionSort(arr,n);// call the selection sort function
    // display the array elements
    display(arr,n);

    return 0;
}

// time complexity of selection sort is o(n*n);
