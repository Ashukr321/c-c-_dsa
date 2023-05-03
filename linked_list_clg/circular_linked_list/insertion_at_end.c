

// preprocessor
#include <stdio.h>
#include <stdlib.h>

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

// insertion At Begin of the node
struct Node *insertAtBegin(struct Node *head, int data)
{
    // check for the empty case

    if (head == NULL)
    {
        head = createSinglyCircularList(data);
        return head;
    }

    // create a newNode of the data that commin in the function
    struct Node *temp = head;

    struct Node *newNode;
    newNode = createSinglyCircularList(data);
    while (temp->next != head)
    {
        temp = temp->next;
    }
    newNode->next = head;
    head = newNode;
    temp->next = newNode;
    return head;
}

// insert at end of the circular linked list
struct Node *insertAtEnd(struct Node *head,int data)
{

    // check for the empty case
    if (head == NULL)
    {
        head = createSinglyCircularList(data);
        return head;
    }

    // create a temp node
    struct Node *temp = head;
    // create a newNode
    struct Node *newNode = createSinglyCircularList(data);

    while (temp->next != head)
    {
        temp = temp->next;
    }

    // here we apply our logic
    temp->next = newNode;
    newNode->next = head;
    return head;

}

// traverse the circular sinlgy  linked list
void traverseCircularSll(struct Node *head)
{
    struct Node *temp = head;
    while (temp->next != head)
    {
        printf("%d ->", temp->data);
        temp = temp->next;
    }
}


// main methods start
int main()
{
    struct Node *head, *n1;

    n1 = createSinglyCircularList(34);
    head = n1;

    head = insertAtBegin(head, 40);
    head = insertAtBegin(head, 10);
    head = insertAtBegin(head, 50);
    head = insertAtBegin(head, 20);
    head = insertAtBegin(head, 2000);
    head = insertAtBegin(head, 20);
    head = insertAtBegin(head, 10);
    head= insertAtEnd(head,300);

    traverseCircularSll(head);
    return 0;
}