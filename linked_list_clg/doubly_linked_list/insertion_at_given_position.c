// here we see the how to insert the node at the given postion in the
// doubly linked list

// preprocessor
#include <stdio.h>
#include <stdlib.h>


// struct the structure of the node
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};



// create methods for the creating the doubly linked list
struct node *createDll(int data)
{
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}




// insertatbegin of the node
struct node *insertAtBegin(struct node *head, int data)
{
    // check for the empty case
    if (head == NULL)
    {
        head = createDll(data);
        return head;
    }

    // create a newNode node and insert at the head and update the head
    // return new head ;

    struct node *newNode = createDll(data);
    newNode->next = head;
    head->prev = newNode;
    head = newNode; // update the newnode of the dll
    return newNode;
}



// traverse the dll
void travers(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
}



// insertAtEnd()
struct node *insertAtEnd(struct node *tail, int data)
{
    // check for the empty case
    if (tail == NULL)
    {
        tail = createDll(data);
        return tail;
    }
    struct node *newNode = createDll(data);
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
    return tail;
}




// insertAtposition(head , pos, data);
struct node *insertAtposition(struct node *head, struct node *tail, int pos, int data)
{

    struct node *newNode = createDll(data);
    struct node *temp = head;

    // end inertion
    if (pos == 1)
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode; // update the newnode of the dll
        return newNode;
    }
    if (temp->next == NULL)
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
        return tail;
    }

    // create a newNode node and insert at the head and update the head
    // return new head ;

    int cnt = 0;

    while (temp != NULL)
    {
        cnt++;
        if (cnt == pos - 1)
        {
            break;
        }
        temp = temp->next;
    }

    // create a new Node of the comming data

    // stablish the connection btw the node
    newNode->next = temp->next;
    temp->next = newNode;
    temp->next->prev = newNode;
    newNode->prev = temp;

    return head;
}



// main methods start here
int main()
{

    struct node *head, *n1, *tail;
    n1 = createDll(34);

    head = n1;
    tail = n1;

    head = insertAtBegin(head, 36);
    tail = insertAtEnd(tail, 90);
    tail = insertAtEnd(tail, 40);
    tail = insertAtEnd(tail, 30);
    tail = insertAtEnd(tail, 70);
    head = insertAtposition(head, tail, 7, 100);
    head = insertAtposition(head, tail, 3, 200);
    head = insertAtposition(head, tail, 2, 300);

    travers(head);

    return 0;
}