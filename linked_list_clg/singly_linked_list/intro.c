// here we see the singly linked list the c
//  how to create the node and memory allocation of the node
// memory allocation by the help of  the dynamic
// by the help of the malloc function which is in the
// malloc function is aviable in the stdlib libarary

// preprocessor⭐⭐

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// create node
struct Node
{
    int data;
    struct Node *next;
};

// function declration ... 😎

struct Node *createNode(int data);

// main method start here ...😎
int main()
{
    // code start here🤷‍♂️⭐
    struct Node *head, *n1,*n2 ,*n3 ;
    n1= createNode(10);
    n2= createNode(20);
    n3= createNode(30);
    head= n1;

    // here we link the node 
    printf("after linking the all node \n"); 
    n1->next= n2; 
    n2->next= n3 ;

    printf("printing the all node by the help of the while loop \n");

    // here we  traversal the all the element of the linked list by the help of the 
    // single node  that is n1  
    // n1 is point to the head node 
    
    printf("%d-> %d-> %d ",n1->data,n1->next->data,n1->next->next->data);
    
    
    return 0;
}



// function initialisation start here ... 🤷‍♂️🤷‍♂️ 

struct Node *createNode(int data){
     //  create  the struct node temp; 
     struct Node *temp;
    //here we must have to allocate the struct temp memory

    temp= (struct Node *)malloc(sizeof(struct Node));
    //malloc fucntion   -> memory allocation in the c
    // memory is allocate in the heap memory⭐⭐ 

    temp->data= data; 
    temp->next= NULL;

    // print message 
    printf("node is created %d \n",data);
    return temp;
}



