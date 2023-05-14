// delate from end of the doubly linked list

// preprocessor
#include <iostream>
using namespace std;

// create struct node
struct node
{
    int data;
    node *next;
    node *prev;

    // constructor
    node(int x)
    {
        data = x;
        next = NULL;
        prev = NULL;
    }
};


// delate from end of the dll 
void delate_end(node *&head){
    node *temp = head;
     
    //check for empty case 
    if (temp==NULL){
        return;
    }

    while (temp->next->next!=NULL){
        temp = temp->next;
    }
    temp->next->prev = NULL;
    temp->next = NULL;
    free(temp->next);

}
// insert node at end of the dll

struct node *insert_end(node * head, int data)
{
    struct node *temp = head;

    if (temp == NULL)
    {
        temp = new node(data);
        head = temp;
        return head;
    }

    // create a newNode
    struct node *newNode = new node(data);
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
    return head;
}

// print the node
void print(struct node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << endl;
}

// main method start ...
int main()
{
   struct  node * head = new node(10);
    head = insert_end(head,30);
    head = insert_end(head,20);
    delate_end(head);
    print(head);
    return 0;
}