#include<iostream>
using namespace std;


// create the class 
class ashu {
    // declare the private member 
    // access modifier -> dp3 
    // defalut 
    // public 
    // private -> access to the class level 
    // protechted -> access to package 

    private:

    int count = 0; //local variables 


    public:
    // int count = 0;
    // create  the function 
    // function for the count incremtn 
     void set_value (){
        count++; // this increment the value of count by 1 

    }

    // function for the show the count value 
    void show_value(){
        cout<<count<<endl; 
    }


};

int main(){

    
    // here we create the object of the ashu s1 and s2 and s3 
    // all are store in the heap memory 
    // m -> h s c 
    // heap 
    // stack 
    // code section 
    
    // here we call the function by the help of the object 
    // for calling the function we need to create the object of  the class 
    // bec we can't call non-static  the function  without the object 
}