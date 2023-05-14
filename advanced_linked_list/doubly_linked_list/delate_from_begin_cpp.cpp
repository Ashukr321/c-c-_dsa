// delate from begin in the doubly linked list

// preprocessor
#include <iostream>
using namespace std;

// create strcut fordoubly linked list
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

// unsert the node at begin of the doubly linked list
struct node *insert_begin(struct node *head, int data)
{
    struct node *temp = head;
    // check ofr the empty case
    if (temp == NULL)
    {
        temp = new node(data);
        head = temp;
        return head;
    }

    // create a newNode
    struct node *newNode = new node(data);

    newNode->next = temp;
    head->prev = newNode;
    head = newNode;
    return head;
}

// delate from begin
struct node *delateFromBegin(struct node * root){
    struct node *temp = root;
    if (temp==NULL)
    {
       return NULL;
    }

    root = temp ->next;
    temp->next->prev= NULL;
    temp ->next = NULL;
    free(temp);
    return root;

}
// print the LINKED list by
void print(struct node *root)
{

    while (root != NULL)
    {
        cout << root->data << " -> ";
        root = root->next;
    }
    cout << endl;
}

// main methods start here ..
int main()
{

    struct node *head = new node(10);
    head = insert_begin(head, 40);
    head = insert_begin(head, 30);
    head = delateFromBegin(head);
    print(head);


    return 0;
}