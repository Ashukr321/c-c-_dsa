// static memory allocation in the c 
// preprocessor 
#include<stdio.h>
#include<stdlib.h>


// defined the structure 
// struct is the user defined data type 
//  struct is used in linked list creation 

struct Node {
    int data ; 
    struct Node *next; 

};

// main methods 
int main(){
    // create the static struct 
    struct Node n1; 
    n1.data = 13; 
    n1.next = NULL; 

    // print the data of the struct node 
    printf("%d \n",n1.data);
    printf("%p",n1.next ); //0000000000000000 16 bit null value 
    return 0 ;

}