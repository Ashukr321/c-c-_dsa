// here we see the how to create the dll in the cpp

#include <iostream>

using namespace std;

// create the class of dll
class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

// print the dll
void print(Node *head)
{
    // create the a node temp that point the temp
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next; // move the temp to next node by temp ->next;
    }
}

// how to get the length of the linked list
int getLength(Node *head)
{
    Node *temp = head;
    int cout = 0;
    while (temp != NULL)
    {
        cout++;
        temp = temp->next;
    }
    return cout;
}

//  insertion of node in the head of  dll
void insertAthead(Node *&head, int data)
{
    // step1 create a node
    Node *temp = new Node(data);
    temp->next = head;
    head-> prev = temp;
    head = temp;
}

// insertedTail in the doubly linked list

void insertAtTail(Node * &tail, int data)
{
    // step1
    Node* temp = new Node(data);
    // step2

    tail->next = temp;
    // step3
    temp->prev = tail;
    // step4
    tail = temp; // update the tail
}
// main method start here ...

int main()
{
    // create the node
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1; 
    insertAthead(head,3);
    insertAtTail(tail,34);
    print(head);
}