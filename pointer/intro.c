#include<stdio.h>
#include<conio.h>

// main methods 
int main(){

    // here we see the how to store the  address of the normal variables 

    // create the variabels 
    int a = 24 ; // this is static variables so this is created at the compile time 
    // time complexity ->  o (1);
    // create the pointer variables 
    int *ptr; 
    ptr= &a; // & this is address of  opearators 
    // * this is value of opearators 
    int *ptr2; 
    ptr2= &ptr;
 
    // %p -> used for the printing the address of the variabels 
    printf("%p",(*ptr2));// here we see the dereferecing the data 

    return 0; 
}