// preprocessor⭐⭐

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// create node
struct Node
{
    int data;
    struct Node *next;
};

// function declration ... 😎
//  create node

struct Node *createNode(int data);
void traverseSinglyLinkedList(struct Node *head);
struct Node * insertAtEnd(struct Node *head, int data);

// main method start here ...😎
int main()
{
    // code start here🤷‍♂️⭐
    struct Node *head, *n1, *n2, *n3;
    n1 = createNode(34);
    n2 = createNode(34);
    n3 = createNode(34);
    head= n1; 
    // insert the node at the end of  the linked list 
    
    n1->next = n2; 
    n2->next = n3;
    head = insertAtEnd(head,3);
   

    traverseSinglyLinkedList(head);
    
    return 0;
}

// function initialisation start here ... 🤷‍♂️🤷‍♂️

struct Node *createNode(int data)
{
    //  create  the struct node temp;
    struct Node *temp;
    // here we must have to allocate the struct temp memory

    temp = (struct Node *)malloc(sizeof(struct Node));
    // malloc fucntion   -> memory allocation in the c
    //  memory is allocate in the heap memory⭐⭐

    temp->data = data;
    temp->next = NULL;

    // print message

    return temp;
}

// traverse the linked list 
//updatation of data at given position singly linked list ⭐⭐

void traverseSinglyLinkedList(struct Node *head){

    struct Node *temp;

    temp = head;

    while(temp!=NULL){
        printf("%d ->", temp->data);
        temp = temp->next;

    }

}

// insert the node at the end   of  the linked list 
// insertAtEnd method 🤷‍♂️🤷‍♂️ 

struct Node * insertAtEnd(struct Node *head, int data){

    //check fo the empty case
    if (head == NULL){

        head = createNode(data);
        return head;
    }

    //create a new struct node temp 

    struct Node *temp;
    temp = head;
    while(temp->next != NULL){
    temp = temp->next;

     }

    temp->next = createNode(data);
    return head;
}