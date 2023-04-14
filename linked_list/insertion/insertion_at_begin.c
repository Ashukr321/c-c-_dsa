// insertion at begin 
#include<stdio.h>
#include<stdlib.h>

//create the struct node 
struct  node
{
    int data ; 
    struct node * next; 
};

//function declration 
void traverseLinkedList(struct node *ptr);

//  main methods start 
int main(){
    // declare the struct node 
    struct node *head ; 
    struct node *second ; 
    struct node *third; 
    struct node *fourth; 

    // memory allocation of the struct node dynmaically 
    // allocation in the heap memory 

    head = (struct node *) malloc(sizeof(struct node));
    second= (struct node *) malloc(sizeof(struct node));
    third = (struct node *) malloc(sizeof(struct node));
    fourth = (struct node *) malloc(sizeof(struct node));


    // insertion at first of the linked list 

    fourth ->data = 10;
    fourth ->next =head;

    // linking the head and second 

    head ->data = 12; 
    head -> next = second; 

    // linking the second and 3rd 
    second -> data = 34;
    second -> next = third; 

    // linking the 3rd 
    third ->data = 34;
    third->next = NULL;

    traverseLinkedList(fourth);
   

}

// initialisation of the traverseLinkedList method 
void traverseLinkedList(struct node *ptr){
    while (ptr!=NULL)
    {
       printf("%d \n", ptr-> data);
       ptr = ptr->next;
    }
    
}


