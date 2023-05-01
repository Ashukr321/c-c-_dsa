//doubly linked list 
// this is the type of the linked list  

// in this node have three things 
// data and next and previous 

#include<stdio.h>
#include<stdlib.h>

// create the node structure 
 struct  node       {
    int data; 
    struct node * next ; 
    struct node * prev; 

    
};

// create the node function 
struct node *creatDllNode(int data){
    // create a newNode ;
    struct  node  *node;
    // memory allocation of the node that we created 
    node = (struct node*)malloc(sizeof(struct node));

    node->data = data; 
    node->next = NULL;
    node ->prev = NULL;
    return node;

}




// main method start here 
int main(){

    // create the head node 
    struct node *head ,*n1;
    n1=creatDllNode(23);
    head = n1; // here n1 is pointed by the head pointer node 

    printf("%d ",n1->data);

    return 0 ; 
}
