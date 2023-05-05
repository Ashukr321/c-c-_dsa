// circular linked list in the cpp
#include <iostream>
using namespace std;

// here we create the class of the node

class Node
{
public: // this is the access modifiers
    int data;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = data;
        this->next = NULL;
    }

    //
};

// insert node
void insertNode(Node *&tail, int element, int data)
{
    // assuming the elements is present in the list

    // EMPTY LIST LOGICS
    if (tail == NULL)
    {
        Node *newNode = new Node(data);
        tail = newNode;          // set the tail
        newNode->next = newNode; // next point to the self node
    }
    else
    {
        // non empty list
        Node *currentNode = tail;
        while (currentNode->data != element)
        {
            currentNode = currentNode->next;
        }

        // create the node 
        Node * temp = new Node(data);
        temp->next = currentNode->next;
        
    }
}

int main()
{
}