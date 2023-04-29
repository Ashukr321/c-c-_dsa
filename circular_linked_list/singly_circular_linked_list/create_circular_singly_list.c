#include <stdio.h>
#include <stdlib.h>

// create a struct node
struct Node
{
    int data;
    struct Node *next;
};

// function declration
struct Node *createSinlgyCircularLl(int data);
struct Node *insertAtHead(struct Node *head, int data);


int main()
{

    // create a tial  struct pointer
    struct Node *head, *node1;

    node1 = createSinlgyCircularLl(34);
    head = node1;
    head = insertAtHead(head, 3);
    head = insertAtHead(head, 40);
    head = insertAtHead(head, 50);
    head = insertAtHead(head, 20);

}

// create a singly circular linked list

struct Node *createSinlgyCircularLl(int data)
{
    // create a node  + memoru allocation
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = temp;
    return temp;
}

struct Node *insertAtHead(struct Node *head, int data)
{

    if (head == NULL)
    {
        head = createSinlgyCircularLl(data);
        return head;
    }
    // store the head in the temp variables
    // struct Node * temp = head ;
    // create a new node and store the data in it
    // struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    // or
    struct Node *temp = head;
    struct Node *newNode = createSinlgyCircularLl(data);
    newNode->next = temp;
    temp->next = newNode;
    temp = newNode;
    printf("node is created at head successfully \n");
    // printf("%d ",temp->data );
    return temp;
}
