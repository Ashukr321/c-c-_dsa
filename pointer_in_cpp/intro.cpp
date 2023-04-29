// here we see the pointer in the cpp 
// what is the pointer in the cpp 
// this is the most important for the linked list 
// tree and graph dsa 



// preprocessor 
#include<iostream>
using  namespace std ;

// main methods start here ... 
int main(){
    //create a variables and print the data 
    // int a = 34; 
    // cout<<a<<endl;

    // cout<<&a<<endl;

    // // here we have a pointer that store the addres of the variables 
    // int * ptr;
    // ptr = &a ; 
    // cout<<ptr<<endl;// this is will print the address of the variables a 

    // int i = 2;
    // int *p= &i ; 
    // cout<<*p<<endl;// * dereferencing operator  * this is used 
    // to find the value of the data 

    // how to copy the pointer in to the another pointer in the cpp 
    int data = 34;
    int * p = &data;
    int * ptr2= p;  // here copy the data of the pointer p into the ptr 
    
    // print the 
    

    // print 
    cout<<*p<<" "<<endl;
    return 0; 

}