// here we see the how to inser the new node in the begin in the
// doubly linked list

#include <stdio.h>
#include <stdlib.h>

// create the structure of the doubly linked list
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

// traverse the node 
void  traverseNode( struct node * head ){
    // create a temp var node pointer 
    struct node *temp = head;
    while (temp!=NULL)
    {
        printf("%d -> ",temp->data);
        temp= temp->next;
    }
    
}
// create the function for the doubly linked list 
struct node * createNodeDll(int data){
    struct node *newNode;
    // memory allocation  of the newNode 
    newNode  = (struct node *)malloc(sizeof(struct node));
    newNode ->data =data;
    newNode ->next = NULL;
    newNode->prev = NULL;
    return newNode;

}

//   insertNode at Begin the doubly linke list 
struct node * insertAtBegin(struct node * head  , int data){
    // check for the empty case if the head is null then create a head 
    // and return the head 
    if (head == NULL)
    {
        head = createNodeDll(data);
        return head;
    }
    // create a new NODE AND INSERTAt begin of the head 
    // and update the new head and return it 

    // create the new NODE 
    struct node * newNode = createNodeDll(data);
    newNode ->next = head; 
    head->prev = newNode;
    head  = newNode;
    return head ;

}


// main methods start here 
int main(){
    // create the node 
    struct node *head ,*n1  ;
    n1= createNodeDll(34);
    head = n1;
    head = insertAtBegin(head ,45);
    head = insertAtBegin(head ,4);
    head = insertAtBegin(head ,46);
    head = insertAtBegin(head ,5);

    traverseNode(head);

    return 0;
}