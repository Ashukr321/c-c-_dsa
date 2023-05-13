// delate from end of the linked list

// preprocessor
#include <iostream >
using namespace std;

// create struct
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

// insert node at end of the node
struct node *insertAtEnd(struct node *root, int d)
{
    struct node *temp = root;

    // check for the empty case
    if (temp == NULL)
    {
        temp = new node(d);
        root = temp;
        return root;
    }
    //create newNode 
    struct node *newNode = new node(d);
    while(temp->next!=NULL){
        temp = temp ->next ; 

    }
    temp->next = newNode;
    return root;
}


// delate from end of the node 
void delateFromEnd(struct node * root ){
    struct node * temp  = root; 
    while (temp->next->next!=NULL)
    {
        temp = temp ->next; 
    }
    temp ->next = NULL;
    free(temp->next);

}

// update from end data 
void updateFromEnd(struct node *root,int data){
    struct node * temp  = root; 
    while (temp->next!=NULL)
    {
        temp = temp ->next; 
    }
    temp->data = data;
}

//print the node 
void print(struct node * root ){
    struct node *temp = root;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<endl;
}

// main method start here ...
int main()
{
    struct node * head = new node(20);
    head = insertAtEnd(head , 200);
    head = insertAtEnd(head , 300);
    head = insertAtEnd(head , 500);
    delateFromEnd(head); //500
    delateFromEnd(head); // 300
    delateFromEnd(head); //200
    // updateFromEnd(head,7000);
    print(head);



    return 0;
}
