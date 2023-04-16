// preprocessor
#include<stdio.h>
#include<stdlib.h>


// creating the structure  of node 
struct  node
{
    int data ;
    struct node *next; 
};


// main methods start here ;

 int main(){
    // declare the struct  node 
    struct  node * head ; 
    struct  node * second  ; 
    struct  node * third; 

    // dynamic memory allocation of the struct node 
    // this all node is allocated in the heap memory by the help of the malloc function 
    head = (struct node *)malloc(sizeof(struct  node ));
     second= (struct node *)malloc(sizeof(struct  node ));
    third = (struct node *)malloc(sizeof(struct  node ));

    // linking the head node and second node  😀😀
    head -> data = 1;
    head ->next = second; 

    // linking the second node and 3rd node 
    second ->data = 2;
    second ->next= third; 


    // linking the 3rd node 
    third->data= 3; 
    third->next = NULL; 
    // null value terminate the linked list 

    printf("%d \n", head->data);
    printf("%d \n", second->data);
    printf("%d \n", third->data);



   
    
 }
