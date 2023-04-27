// here we see the how to insert the node at the end of the  node

// preprocessor
#include <iostream>
using namespace std;

// create the class
class Node
{
public: //
    // defined the accessibility of the data
    int data;
    Node *next;
    Node *prev;

    // create the constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

// PRINTING THE NODE OF TH DLL
void print(Node *&head)
{
    // create a temp node that point the head
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> " ;
        temp = temp->next;
    }
}

// insertatEnd of dll node 
void insertAtEnd(Node * &tail,int data ){
    // step1 
    // create a new Node for the 
    Node * temp = new Node(data);

    tail->next = temp;
    temp->prev= tail;
    tail= temp;
}
// main methods start here
int main()
{

    // here we create the node
    Node *node1 = new Node(23);
    Node * head = node1;
    Node *tail = node1;

    insertAtEnd(tail,3);
    print(head);
    return 0;
}