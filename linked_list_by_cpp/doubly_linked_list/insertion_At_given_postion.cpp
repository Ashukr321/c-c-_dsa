// here we see the  insertion in the postion in the dll

// preprocessor
#include <iostream>
using namespace std;

// create class for the Node
class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    // create a constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

// printing the node of the dll
void print(Node *head)
{
    // create a temp node that point the head initally
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
}
// insert at head
void insertAtHead(Node *&head, int data)
{
    // create a newNode for the  new data
    // apply logic carefully this is doubly linked list

    // step1 create a node
    Node *temp = new Node(data);

    // step2
    temp->next = head;
    head->prev = temp;
    head = temp;
}

// insertAtPosition
void insertAtPosition(Node *&head, int pos, int data)
{
    // create a new node of new data
    // which node is going to inserted at the given postion in the dll
    Node *newNode = new Node(data);
    Node *temp = head;

    int cnt = 1;

    while (temp != NULL)
    {

        // here we can apply all the logic of the insertion at  position
        if (cnt < pos)
        {
            cnt++;
            newNode->next = temp->next;
            temp->next->prev= newNode;
            temp->next= newNode;
            newNode->prev= temp;

        }
        temp = temp->next;
    }
}

// delate from head 
// void delateFromhead(Node* &head){
//     Node * temp = head;
//     head = temp->next;
//     temp->next= NULL;
//     temp->next->prev= NULL;
//     free(temp);
// }
// main methods start  here ....
int main()
{

    // create a node
    Node *node1 = new Node(23);
    Node *head = node1;
    insertAtHead(head, 4);
    insertAtHead(head, 3);
    insertAtHead(head, 34);
    insertAtHead(head, 343);
    insertAtHead(head, 32);
    // delateFromhead(head);
    insertAtPosition(head,3,1000);

    print(head);

    return 0;
}