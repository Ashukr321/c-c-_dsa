// here we see the how to create the linked list in the c 
// preprocessor 
#include<stdio.h>
#include<stdlib.h>


// create the struct node which is public to all 
// this is the node structure is ready 

struct  Node 
{
    int data ; 
    struct Node  *next; // self referencing pointer vaiables 
}*first;


// function  declration 
void create(int A[],int n){
    int i ;
    struct Node *t,*last;
    
    first = (struct Node *)malloc(sizeof(struct Node));
    first -> data = A[0];
    first -> next = NULL;


    
}



// dispaly the linked list elements 
void display(struct Node *p){
    
   while (p!=NULL)
   {
        printf("%d \n ",p->data);
        p = p-> next;
   }
    
}


// display  the linked list data by the recursive methods 
// recursion used the stack data structure 

void display2(struct Node *p){
    if (p!=NULL)
    {
        printf("%d \n",p-> data);
        display2(p->next);
    }
    
}

// main methods 
int main(){

    // here we create the array 
    int A[]= {3,5,7,10,15};
    return 0; 
}


