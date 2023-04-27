// here we see the how to  insert node in the head of  the  linked list
// preprocessor
#include <iostream>
using namespace std;

// craete the class of the node
class Node
{
    // access modifiers
public:
    int data;
    Node *next;
    Node *prev;

    // here we create the  constructor  to set the value of the data
    // constructor name must be same as the class name
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

// print the data of the dll
void print(Node *&head)
{
    // create the new Node temp
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout<<endl;
}

// insertion of the node at the head of the linked list
void insertAtHead(Node *&head, int data)
{
    // here we  first have to create the a new node data for the new data
    Node *temp = new Node(data);
    // here we connect the node of the new node to the head node

    temp->next = head;
    head->prev = temp;

    head = temp; // here we upate the head pointer of the node
}

// get the length of the doubly linked list
int getLength(Node *&head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}


// here start the main method
int main()
{
    // create the node
    Node *node1 = new Node(34);
    Node *head = node1;
    insertAtHead(head, 24);
    print(head);
    int l = getLength(head);
    cout << "total number of node in the linked list is " << l << endl;
    return 0;
}
