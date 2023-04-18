// how to create  a node in the c
// preprocessor
#include <stdio.h>
#include <stdlib.h>

// create a sturct node
struct Node
{
    int data;
    struct Node *next;
};

// create a function
struct Node *createNode(int data);

int main()
{
    struct Node *n1,*n2,*n3;
    n1 = createNode(10);
    n2 = createNode(20);
    n3 = createNode(30);


    // how to link the node of the linked list 
    n1-> next = n2; 
    n2->next= n3;
    printf("%d \n",n1->data);
    printf("%d\n",n1->next->data);
    printf("%d\n",n1->next->next->data);
}



// initiaisations  the function

struct Node *createNode(int data)
{
    // create a struct node pointer
    struct Node *n;

    // memory allocation
    n = (struct Node *)malloc(sizeof(struct Node));

    n->data = data;
    n->next = NULL;

    printf("node is created of %d \n", n->data);
    return n;
}
