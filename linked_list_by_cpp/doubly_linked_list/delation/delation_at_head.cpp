// here we see the  how to delate the element from the head of the doubly linked list
#include <iostream>
using namespace std;

// create the class of the node
class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // create the constructor of the class
    // costructor name must be same as class name
    Node(int data)
    {
        // use the this keyword to
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

// DELATE NODE FROM HEAD OF THE NODE
void delateNodeHead(Node *& head)
{
    // create a temp that initlly point to the  first node of the doubly linked list
    Node *temp = head ;
    
    // step1 
    temp->next->prev= NULL;
    head = temp->next;
    temp->next= NULL;


    // free the temp node
    free(temp);
}

// printing the node of the doubly linked list
void print(Node *head)
{
    // create a temp node
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
}

// insert at head of the doubly linked list
void insertAtHead(Node *&head, int data)
{
    // create a node for the new data
    Node *temp = new Node(data);
    temp->next =head ;

    head->prev = temp;
    head = temp;
}
// MAIN METHODS START HERE ..
int main()
{

    // create a node
    Node *node1 = new Node(23);
    Node *head = node1;
    insertAtHead(head, 3);
    insertAtHead(head, 4);
    delateNodeHead(head);
    print(head);
    return 0;
}