// insertion in between 
#include<stdio.h>
#include<stdlib.h>

// create the struct node
struct node{
    int data; 
    struct node * next; 

};


// function declration 
void traverseLinkedList(struct node * ptr);

// main methods start here 
int main(){
    // declare the struct node 
    struct node * head; 
    struct node * one; 
    struct node * two; 
    struct node * three; 
    struct node * fourth;

    // memory allocation  of the struct node 
    // memeory is allocation is done in the  heap memory 

    head = (struct node *)malloc(sizeof(struct node ));
     one= (struct node *)malloc(sizeof(struct node ));
    two = (struct node *)malloc(sizeof(struct node ));
    three = (struct node *)malloc(sizeof(struct node ));
    fourth = (struct node *)malloc(sizeof(struct node ));

    // initialise the data 
    head ->data = 33;
    head ->next = one; 
    

    // linking the one and two 
    one ->data = 45; 
    one -> next = two; 

    three ->data = 40;
    three ->next = fourth;

    // linking the two and fourth 
    two -> data = 55; 
    two -> next = three; 


    //linking the two and fourth 
    fourth ->data = 10; 
    fourth -> next = NULL;

    traverseLinkedList(head );

}
void traverseLinkedList(struct node * ptr){
    while (ptr!=NULL)
    {
        printf("%d \n" , ptr -> data);
        ptr = ptr->next;

    }
    
}