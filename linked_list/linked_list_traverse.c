// linked list traverse + creation 

// preprocessor 
#include<stdio.h>
#include<stdlib.h>

// creating the struct node 
struct  node
{
    int data ; 
    struct  node * next ; // self refrencing structure 
    
};

// create the fucntion for  traverse the linked list 
void traverseLinedList(struct node*ptr);


// main methods start here 
int main(){
    // declartion of the linked list 
    struct  node * head;
    struct  node * second;
    struct  node * third;
    

    // dynamic memory allocation in the heap memory by the malloc function 
    head = (struct node * )malloc(sizeof(struct node));
    second = (struct node * )malloc(sizeof(struct node));
    third = (struct node * )malloc(sizeof(struct node));

    // linking the head and second 
    head ->data = 12;
    head -> next = second; 

    // linking the second and third 
    second -> data = 13;
    second ->next = third; 

    // linking the third node
    third ->data = 14;
    third ->next = NULL;
    traverseLinedList(head);
    
    return 0; 
}


// initialisation of the function 
void traverseLinedList(struct node* ptr){
    

    while (ptr!=NULL)
    {
        printf("%d \n", ptr->data);
        ptr = ptr->next;
    }
    
}