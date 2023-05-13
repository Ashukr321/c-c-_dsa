// insertAtPosition

// preprocessor
#include <iostream>
using namespace std;

// create struct node
struct node
{
    int data;
    node *next;

    // constrcutor
    node(int d)
    {
        data = d;
        next = NULL;
    }
};

// insert at given position this is general code 

struct node *insertAtPosition(struct node *root, int pos, int data)
{
    // create a temp pointer
    struct node *temp = root;
    struct node *newNode = new node(data);

    int cnt = 0;

    if (pos<0){
        cout<<"enter valid postion data 😎 "<<endl;
    }
    // check for the empty case
    if (temp == NULL)
    {
        temp = new node(data);
        root = temp;
        return root;
    }


    if (pos==1)
    {
     newNode ->next = temp ; 
     root = newNode; 
     return root;   
    }

    if (temp->next==NULL)
    {
        temp ->next = newNode;
        return root; 
    }
    


    while (temp != NULL)
    {
        cnt++;
        if (cnt == pos - 1)
        {
            break;
        }
        temp = temp->next;
    }

    // create a  newNode  ;
    newNode->next = temp->next;
    temp ->next = newNode;
    return root; 

}
//print the node 
void print (struct node * root ){
    struct node *temp = root;
    while (temp!= NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << endl;
}
// main method
int main()
{
    struct node * head  = new node(10);
    struct node * n1  = new node(20);
    head ->next = n1 ; 

    head = insertAtPosition(head ,-1,100);
    print(head);
    return 0;
}