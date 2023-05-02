// here we see the insertion at end of the doubly linked list
#include <stdio.h>
#include <stdlib.h>

// create the struct node structure
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

// create function for the creation of the doubly node
struct node *createDll(int data)
{
    struct node *newNode;
    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}
// travese the dll
void traverse(struct node *head)
{
    // create a temp pointer that store  that point the head node
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d ->", temp->data);
        temp = temp->next;
    }
}



//   insertNode at Begin the doubly linke list 
struct node * insertAtBegin(struct node * head  , int data){
    // check for the empty case if the head is null then create a head 
    // and return the head 
    if (head == NULL)
    {
        head = createDll(data);
        return head;
    }
    // create a new NODE AND INSERTAt begin of the head 
    // and update the new head and return it 

    // create the new NODE 
    struct node * newNode = createDll(data);
    newNode ->next = head; 
    head->prev = newNode;
    head  = newNode;
    return head ;

}


//  insertAtEnd of the node 
struct node * insertAtEnd(struct node * tail , int data ){
    // check for the empty case if the tail is null then create a tail
    if (tail==NULL)
    {
        tail = createDll(data);
        return tail;
    }

    // create a new node 
    struct node *temp= tail;
    struct node *newNode= createDll(data);
    temp->next = newNode;
    newNode->prev= temp;
    temp = newNode;
    return temp;
}
// main methods start here ...
int main()
{
    struct node *head, *n1,*tail;
    n1 = createDll(4);
    
    head = n1;
    tail = n1;

    head  = insertAtBegin(head , 5);
    head  = insertAtBegin(head , 50);
    tail = insertAtEnd(tail,70);
    tail = insertAtEnd(tail,50);
    tail = insertAtEnd(tail,60);
    tail = insertAtEnd(tail,90);
    traverse(head);
    return 0;
}