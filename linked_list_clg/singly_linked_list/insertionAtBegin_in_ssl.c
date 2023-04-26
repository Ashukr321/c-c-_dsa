//preprocessor⭐⭐

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//create node 
struct Node 
{
    int data;
    struct Node *next ;
};

//function declration ... 😎
void traverseSinglyLinkedList(struct Node *head);
struct Node *createNode(int data);
struct Node *insertAtBegin(struct Node *head, int data);



//main method start here ...😎
int main ()
{
    // code start here🤷‍♂️⭐ 
    struct Node *head ,*n1,*n2,*n3;
    n1= createNode(23);
    n2 = createNode(10);
    n3 = createNode(30);
    // link the n1 and n2  
    n1->next = n2;
    n2->next= n3;
    head=n1 ;
    // here we point the n1 to in to the head 
    head= insertAtBegin(head,34);
    head= insertAtBegin(head,4);
    head= insertAtBegin(head,43);
    head= insertAtBegin(head,44);
    traverseSinglyLinkedList(head);
    return 0;
}

// function initialisation start here ... 🤷‍♂️🤷‍♂️ 

struct Node *createNode(int data){
     //  create  the struct node temp; 
     struct Node *temp;
    //here we must have to allocate the struct temp memory

    temp= (struct Node *)malloc(sizeof(struct Node));
    //malloc fucntion   -> memory allocation in the c
    // memory is allocate in the heap memory⭐⭐ 

    temp->data= data; 
    temp->next= NULL;

    // print message 
    
    return temp;
}

//updatation of data at given position singly linked list ⭐⭐

void traverseSinglyLinkedList(struct Node *head){

    struct Node *temp;

    temp = head;

    while(temp!=NULL){
        printf("%d->", temp->data);
        temp = temp->next;

    }

}


// insertAtBegin method 🤷‍♂️🤷‍♂️ 

struct Node *insertAtBegin(struct Node *head, int data){

    // check fo the empty case
    if (head == NULL){

    // if the  linked is empty then here we create a node
    //pass the data as a argument
        head = createNode(data);
        return head;
    }

    //create a new struct node that⭐⭐ 

    struct Node *newNode;
    newNode = createNode(data);

    newNode->next = head;

    // print the message

    head = newNode;
    
    return head;

}