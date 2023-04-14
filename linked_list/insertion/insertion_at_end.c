// insertion at end of the linked list 

#include<stdio.h>
#include<stdlib.h>

// create the struct node 
struct  node
{
    int data; 
    struct node * next; 
};


// function declaration  
// traverse linked list 
void traverseLinkedList(struct node *ptr);

int main(){


    struct node* head; 
    struct node* second;
    struct node* third; 
    struct node* fourth; 
    struct node* fifth; 


    //  memory allocation of the struct node 

    head   = (struct node *)malloc(sizeof(struct node ));
    second = (struct node *)malloc(sizeof(struct node ));
    third  = (struct node *)malloc(sizeof(struct node ));
    fourth = (struct node *)malloc(sizeof(struct node ));
    fifth  = (struct node *)malloc(sizeof(struct node ));


    // linking the head to second
    head-> data = 12; 
    head -> next = second; 

    // linking the second to third  
    second ->data = 43;
    second -> next = third; 

    // linking the third to fourth 
    third -> data = 34;
    third -> next = fifth;


    fifth -> data  = 50;
    fifth ->next = NULL;
    traverseLinkedList(head);

    return 0; 
}

//  initialisation of the function 

void traverseLinkedList(struct node *ptr){
    while (ptr!=NULL)
    {
        printf("%d \n ",ptr-> data);
        ptr =ptr -> next;
    }
    
}