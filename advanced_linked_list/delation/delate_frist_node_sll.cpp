// delate the node  from begin

// preprocessor
#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    // constructor
    node(int d)
    {
        data = d;
        next = NULL;
    }
};
// insert at begin of the node

struct node * insertAtBegin(struct node *root, int data)
{
    struct node *temp = root;

    if (temp == NULL)
    {
        temp = new node(20);
        return root; 
    }
    //create a new Node 
    struct node *newNode = new node(data);
    newNode->next = temp;
    root = newNode;
    return root; 
}

//delate node from begin 
struct node * delateAtBegin(struct node * root){
    struct node *temp = root;
    root = temp ->next ; 
    temp ->next = NULL;
    free(temp);
    return root;
}

// updateatbegin of the node data 
void updateAtBegin(struct node * root,int d){
    struct node *temp = root;
    temp ->data = d ; 
}


//print node 
void print(struct node * root){
    while(root!=NULL){
        cout<<root->data<<" -> ";
        root=root->next;
    }
    cout<<endl;
}
// main methods
int main()
{
    struct node * head  = new node (29);
    head = insertAtBegin(head, 10);
    head = insertAtBegin(head, 2);
    head = insertAtBegin(head, 200);
    head = insertAtBegin(head, 40);
    head = insertAtBegin(head, 60);
    head = delateAtBegin(head);
   updateAtBegin(head,3000);

    print(head);
    return 0;
}