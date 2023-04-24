// class practicle 
// preprocessor 
#include<stdio.h>
#include<stdlib.h>

// create the sturct 
struct Node
{
    int data ;
    struct Node * next; 
};

// create node 
struct Node * createNode(int data ){
    struct Node *n1; 

    n1 = (struct Node *)malloc(sizeof(struct  Node));
    n1->data = data; 
    n1->next = NULL;
    printf(" node is created of %d \n", n1->data);
    return n1;

}


// main methods 
 int main(){
    struct Node *head , *n1,*n2 ; 
    createNode(13);
    
 }
