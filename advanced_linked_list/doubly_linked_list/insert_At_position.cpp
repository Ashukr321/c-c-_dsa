// doubly linked list insertion_at_given postion 

// preprocessor 

#include <iostream> 
using namespace std; 

struct node 
{ 
    int data; 
    node *next; 
    node *prev; 

    //constructor 
    node(int x){
        data = x; 
        next = NULL; 
        prev = NULL;
    }
};

// print the node 


//insertNode at given postion 
struct node * insertAtPosition(struct node *head, int pos , int data){
    struct node *newNode = new node(data);
    struct  node * temp = head ; 
    int cnt = 0 ; 
   

   // check for empty case 
   if (temp == NULL)
   {
        temp = new node(data);
        head = temp;
        return head; 

   }

   //traverse the node 
   while (temp->next!= NULL ){
        cnt++;
        if (cnt==pos-1)
        {
            break;
        }
        
        temp = temp ->next;
   }

   //insert the node 
   newNode->next = temp->next ;
   temp->next = newNode ;
   temp->next->prev= newNode;
   newNode ->prev = temp;
   return head;

}

void print(node *head) 
{ 
    node *temp = head; 
    while (temp!= NULL) 
    { 
        cout << temp->data << " ->  "; 
        temp = temp->next; 
    } 
    cout << endl; 
}

// main methods start here 
int main(){ 
    struct node * head  = new node(9);
    head = insertAtPosition(head, 2,30);
    print(head);
    return 0 ; 

}