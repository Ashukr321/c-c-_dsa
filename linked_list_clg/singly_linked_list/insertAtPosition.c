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
struct Node *createNode(int data);
void traverseSinglyLinkedList(struct Node *head);

// main method start here ...😎
int main()
{
    // code start here🤷‍♂️⭐
    struct Node *head, *n1, *n2, *n3;
    n1= createNode(12);
    n2= createNode(2);
    n3= createNode(10);

    // link the  node 
    n1->next = n2; 
    n2->next = n3 ;

    head = n1;
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


//updatation of data at given position singly linked list ⭐⭐

void traverseSinglyLinkedList(struct Node *head){

    struct Node *temp;

    temp = head;

    while(temp!=NULL){
        printf("%d ->", temp->data);
        temp = temp->next;

    }

}

