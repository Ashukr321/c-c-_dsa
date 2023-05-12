// here we the how to insert the node at the begin of the
// linked list
// preporcessor
#include <iostream>
using namespace std;

// create the structure
struct node
{
    int data;
    struct node *next;

    // constructor
    // constrctor name must be same as the class name
    node(int d)
    {
        data = d;
        next = NULL;
    }
};

// create a function that insert the node at the begin of the node
struct node *insertAtBegin(struct node *head, int data)
{
    struct node *temp = head;

    // check for the empty case
    if (temp == NULL)
    {
        temp = new node(data);
        return head;
    }

    // if not null then we create a new node
    struct node *newNode = new node(data);
    // now we have to go to insert the newNode to the
    // temp node that is point to the head node

    newNode->next = temp;
    head = newNode;
    return head;
}

// print the linked by recursion
void print(struct node *root)
{
    if (root == NULL)
        return;
    // printing the linked list data from starting

    cout << root->data << " ";
    print(root->next);
}

// main methods start here
int main()
{
    // create the head pointer
    struct node *head = new node(10);
    head = insertAtBegin(head, 40);
    head = insertAtBegin(head, 50);
    print(head);
    return 0;
}