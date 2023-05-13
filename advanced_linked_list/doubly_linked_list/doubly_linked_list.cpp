// what is doubly linked list
// time complexity of the doubly linked is  o(1);

// preprocessor
#include <iostream>
using namespace std;

// create struct node
struct node
{
    int data;
    struct node *next;
    struct node *prev;
    // constructor
    node(int x)
    {
        data = x;
        next = NULL;
        prev = NULL;
    }
};

// insert node at the begin of the doubly linked list

struct node *insertAtBegin(struct node *root, int data)
{
    struct node *temp = root;

    // check for the empty case
    if (temp == NULL)
    {
        temp = new node(data);
        return root;
    }

    // create a new node
    struct node *newNode = new node(data);
    newNode->next = temp;
    temp->prev = newNode;
    root = newNode;
    return root;
}


// updatefrom Begin 
void updateDataBegin(struct node * head , int data){
    struct node *temp = head ; 
    if (temp ==NULL)
    {   
        return;
    }
    temp ->data= data ;   
}

// update end data 
void updateDataEnd(struct node * head , int data){
    struct node *temp = head ; 
    if (temp ==NULL)
    {   
        return;
    }
    while(temp->next !=NULL){
        temp=temp->next;
    }

    temp ->data= data ;   
}
// print  the node  by recursive ways
void print(struct node *root)
{
    while (root != NULL)
    {
        cout << root->data << " -> ";
        root = root->next;
    }
    cout << endl;
}

// main methods start here
int main()
{
    struct node *head = new node(20);
    head = insertAtBegin(head, 400);
    head = insertAtBegin(head, 40);
    head = insertAtBegin(head, 30);
    
    updateDataBegin(head, 5000);
    updateDataEnd(head, 400);

    print(head);



    return 0;
}
