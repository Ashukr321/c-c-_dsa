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
    struct Node* n1; 
    n1= createNode(10);
    n1= createNode(20);
    n1= createNode(30);
    n1= createNode(40);
    return 0;
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
}
