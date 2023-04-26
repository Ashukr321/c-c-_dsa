#include <iostream>
using namespace std;

// create the class of the  node
class Node
{
public:
    // this is the access modifiers
    int data;
    Node *next;

    // constructor used to set the value of the node
    Node(int data)
    {
        // this refers to the current class instance variables

        this->data = data;
        this->next = NULL;
    }
};


void insertAtPosition(Node * &head , int postion , int data);

// function create for the insertAthead
void insertAtHead(Node *&head, int data)
{
    // create a new node the  new data which is came
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

// insertAtend or insertAtTail of node 
void insertAtTail(Node * &tail ,int data){

    // here create a node for which data is came in the methods 
    Node * newNode = new Node(data);
    // here create a node  by the help of the constructor 
    tail->next = newNode;
    tail = tail->next;

}

// create the methods for the print the node
void printNode(Node *&head)
{
    // create a new Node temp
    Node *temp = head;
    while (temp!= NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
}




// main methods start here
int main()
{

    Node *node1 = new Node(10);

    // here we see the both head and tail are point to the same node 
    Node *head = node1;
    Node *tail = node1;

    insertAtTail(tail, 20);
    insertAtTail(tail, 10);
    insertAtTail(tail, 30);
    insertAtTail(tail, 50);
    insertAtPosition(head,2,100);
    printNode(head);
    return 0;
}


// insertAtPosition(Node * &head , int position , int data );

void insertAtPosition(Node * &head , int postion , int data){
    // create temp node that point the head node 
    Node * temp = head ;

    int count = 1 ; 

    // traverse  the node and goes to postion 
    while (count<postion-1)
    {
        temp ->next= temp;
        count++;// increment the count 
    }
    
    // create node for the new data 
    Node * newNode = new Node(data);

    // this is the logic of the inserting the node at the 
    // given postion int the sinlgy linked list node 

    newNode ->next = temp->next; 
    temp->next =  newNode; 

}