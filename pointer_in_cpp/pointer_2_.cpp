//pointer in the cpp 

#include<iostream> 
using namespace std; 

int main(){
    // create a array 
    int arr[10]= {2,4,5};

    // address of first memeory block is 
    cout<<"address of first memory block is : "<<arr<<endl;

    cout<<arr[0]<<endl;
    cout<<"address of first memory location is :"<<&arr[0]<<endl;
    cout<<(*arr)+1<<endl;
    int i = 2;
    cout<<i[arr]<<endl;
    return 0;
}