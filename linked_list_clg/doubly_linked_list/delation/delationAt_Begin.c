// here we see the how to delate the node from begin of the doubly linked list

// preprocesseor
#include <stdio.h>
#include <stdlib.h>

// create the sttucture of the node
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

// create a node

struct node *create_node(int data)
{

    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    new_node->prev = NULL;

    return new_node;
}

// traverse the dll
void traverse(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
}

// insertion of the node at the begin of  the node
struct node * insertAtBegin(struct node *head, int data)
{
    if (head == NULL)
    {
        head = create_node(data);
        head->next = head;
    }

    struct node *temp= head;
    struct node *new_node = create_node(data);


    new_node->next= temp; 
    temp->prev= new_node;
    temp =new_node ;
    return temp ;
}


// delation of the code at begin of the doubly linked list 

struct node * delatAtBegin(struct node *head ){
    struct node *temp = head;
    temp->next ->prev = NULL;
    //shifting the head pointer by one place 
    head = temp->next;
    temp->next= NULL;
    return head;
    free(temp);
}

// main methods start her
int main()
{
    struct node *head, *n1;

    n1 = create_node(34);
    head = n1;
    head = insertAtBegin(head, 56);
    head = insertAtBegin(head, 6);

    head = insertAtBegin(head, 5);
    head = insertAtBegin(head, 4);
    // head =  delatAtBegin(head);
    head = delatAtBegin(head);

    traverse(head);

    return 0;
}