// circular linked list  this
// this is the most  important
// here we see the circular sinlgy list

// preprocessor
#include <stdio.h>
#include <stdlib.h>

// create the node
struct Node
{
    int data;
    struct Node *next;
};

// createNode cicular
struct Node *createSinglyCircularList(int data)
{
    // create a pointer variables temp
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));

    // here we aplly the logic of the sinlgy circular linked list

    newNode->data = data;
    newNode->next = newNode;
    return newNode;
}
// main methods start
int main()
{
    struct Node *head, *n1;

    n1 = createSinglyCircularList(34);
    head = n1;

    return 0;
}