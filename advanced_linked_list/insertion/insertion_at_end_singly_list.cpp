// insert the node at the end of the node
// preporocessor
#include <iostream>
using namespace std;

// create struct node 

struct node
{
    int data;
    node *next;

    // constructor
    node(int d)
    {
        data = d;
        next = NULL;
    }
};


// insertAtend
struct node *insertAtEnd(struct node *root, int data)
{
    struct node *temp = root;
    // check for the empty case
    if (temp == NULL)
    {
        temp = new node(data);
        return root;
    }

    // create a newNode 
    struct node *newNode = new node(data);
    // here we  apply our logic for the insertion at end 
    while (temp->next!= NULL){
        temp = temp ->next ;   
    }
    temp->next = newNode;
    return root;

}
// print the node by the recursive 
void print (struct node * head ){
    struct node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
}
// main method start here  ..
int main()
{
    struct node * head= new node (10);
    head = insertAtEnd(head, 20);
    head = insertAtEnd(head, 100);
    print(head);
    
    return 0;
}


// time complexity  is o(1) > constant time to insert in the end of the node 
// space complexity is o(n) > n is the size of the linked list
