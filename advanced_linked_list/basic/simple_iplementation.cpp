// basic implementation of  the linked list
// preprocessror
#include <iostream>
using namespace std;

// create the structure to create the node
struct Node
{
    int data;
    struct Node *next;

    // constructor
    Node(int d)
    {
         data = d;
        next = NULL;
    }
};
// print the liked list 
void print (struct Node * head){
    cout << "Linked List : ";
    struct Node *temp1 = head;
    while (temp1!= NULL)
    {
        cout << temp1->data << " ";
        temp1 = temp1->next;
    }
    cout << endl;
}
// main methods
int main()
{
    // CREATE THE node
    struct Node *head = new Node(10);
    struct Node *temp = new Node(20);
    struct Node *temp2 = new Node(30);

    // linking the node
    head->next = temp;
    temp->next = temp2;

    // printing the linked list
    print(head);

    return 0;
}