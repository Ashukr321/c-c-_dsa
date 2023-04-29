// pointer in the cpp 

// preprocrssor 
#include<iostream>
using namespace std; 

// main methods star 
int main(){
    // int arr[3] = {3,5,50};

    // print the adress of the arr and arr[0];

    // cout<<&arr<<" "<<endl;
    // cout<<&arr[1]<<endl;

    // here we see the arr is store the  address of the first element  of the array 
    // array name is own itself  behaves like a pointer 

    // & this is alos know  as address of operator 
    // * this value of operators in the cpp 
    


    // just played with the * 
    // * this is value of operator 
    // arr // bydefalut hold the address of the first element of the array 

    // cout<<*arr+1<<endl;// dereferencing the array 

    // cout<<*(arr+2)<<endl;
    // cout<<*arr+1<<endl;
    //  int i = 1; 
    // cout<<i[arr]<<endx;


     int temp [10];
     cout<<sizeof(temp)<<endl;
    int* ptr= &temp[0]; 
    
     cout<<sizeof(*ptr)<<endl;
    return 0 ;
}