// here we see the  delation of the doubly linked list
// from the end of the node

// preprocessor
#include <stdio.h>
#include <stdlib.h>

// create the struct node templets
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

// create node methods
struct Node *createNode(int data)
{
    // create a new Node
    struct Node *newNode;
    //  memory allocation of the newNode
    newNode = (struct Node *)malloc(sizeof(struct Node));

    // set the data of the newNode and also se the data of the next and prev

    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;

    // return the newNode that we create the node

    return newNode;
}


// traverse the node by the while node
void traverse(struct Node *head)
{
    // create the temp variables
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
}


// main methods start here ...
int main()
{
    // create the node
    struct Node *head, *n1;
     n1= createNode(3);
     head  = n1;
    traverse(head);
    return 0;
}