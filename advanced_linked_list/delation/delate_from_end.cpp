// delate from end of the linked list

// preprocessor
#include <iostream >
using namespace std;

// create struct
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

// insert node at end of the node
struct node *insertAtEnd(struct node *root, int d)
{
    struct node *temp = root;

    // check for the empty case
    if (temp == NULL)
    {
        temp = new node(d);
        root = temp;
        return root;
    }
    // create newNode
    struct node *newNode = new node(d);
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    return root;
}

// delate from end of the node
void delateFromEnd(struct node *root)
{
    struct node *temp = root;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = NULL;
    free(temp->next);
}

// update from end data
void updateFromEnd(struct node *root, int data)
{
    struct node *temp = root;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->data = data;
}

// print the node
void print(struct node *root)
{
    struct node *temp = root;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << endl;
}

// serch the node key -> data ;
int search(struct node *root, int x)
{
    struct node *temp = root;
    int pos = 1;
    while (temp != NULL)
    {
        if (temp->data == x)
        {
            return pos;
        }
        pos++;
        temp = temp->next;
    }

    return -1;
}


// recursive search 
int rSearch(struct node * root , int x){
    if (root ==NULL)
    {
        return -1;
    } else if (root->data ==x){
       return 1;
    }

    else {
        int res = rSearch(root->next, x);

        if (res==-1)
        {
            return -1;
        }else{
            return  (res+1);
        }
        
    }
    
}
// main method start here ...
int main()
{
    struct node *head = new node(20);
    head = insertAtEnd(head, 200);
    head = insertAtEnd(head, 300);
    head = insertAtEnd(head, 500);
    // delateFromEnd(head); // 500
    // delateFromEnd(head); // 300
    // delateFromEnd(head); // 200
    // updateFromEnd(head,7000);
    print(head);
    int data = rSearch(head , 300);
    cout << data << endl;
    return 0;
}
