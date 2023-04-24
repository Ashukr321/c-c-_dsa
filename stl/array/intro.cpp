// stl array 
// array is the  same type of the data is store in the memory 
// in the contigous fassion 

// here we see the example of the array 

#include<iostream>
#include<array>
using  namespace std; 
int main(){

    // this is the normal array 
    // int arr[]= {12,3,4,3};
    // int size = sizeof(arr)/sizeof(int);
    // for (int  i = 0; i <size ; i++)
    // {
    //     printf("%d \n",arr[i]);
    // }

    // here we see the example of the stl array  

    array<int,4>a = {1,2,4,4};
        int size = a.size();// size methods is inbuilt in the stl array 

        for (int i = 0; i < size; i++)
        {
            // here we print the element of the array in the cpp 
            
            cout<<a[i]<<endl;
        }

        // at()-< take the index and gives the data at that index we pass 
        // into it 

        cout<<"element at 2nd index is ->  "<<a.at(2)<<endl;
        // here we check the array is empty or not 
        cout<< "array is empty or not -> 0 for the false  "<<a.empty()<<endl;
        

        // fornt and back 
        cout<< "first element of the array is -> "<<a.front()<<endl;
        cout<< "last element of the array is -> "<<a.back()<<endl;
    return 0; 
}