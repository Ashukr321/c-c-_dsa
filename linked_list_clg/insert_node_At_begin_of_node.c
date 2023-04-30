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
struct Node *insertAtBegin(struct Node *head, int data);

int main()
{
    struct Node *head;
    insertAtBegin(head, 20);
    insertAtBegin(head, 10);
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

    return n;
}

struct Node *insertAtBegin(struct Node *head, int data)
{
    // check for empty case
    if (head == NULL)
    {
        head = createNode(data);
    }

    // create a struct node
    struct Node *newNode;

    newNode = createNode(data);
    newNode->next = head;
    head = newNode;
    printf(" %d -> ", newNode->data);

    return head;
}
