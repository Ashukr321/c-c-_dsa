// here we see the how to insert the node in the end of the node 

// preprocessor 
#include<iostream>
using namespace std ; 

// strcut node creation for the doubly linked list 
struct node {
    int data ; 
    struct  node * next ; 
    struct  node * prev ; 
    // constructor 
    
    node(int x){
        data = x ; 
        next = NULL ; 
        prev = NULL ; 
    }
};


// printing the doubly linked list 

void print( struct node * head)
{
    node * temp = head ; 
    while(temp!= NULL)
    {
        cout << temp->data << " -> " ; 
        temp = temp->next ; 
    }
    cout << endl ; 
}

// update end of the doubly linked list node 
void updateEnd(struct node *root , int data){
    node * temp = root ; 

    if(root == NULL){
        return ; 
    }
    while(temp->next!= NULL){
        temp = temp->next ; 

    }
    temp ->data = data;

  
}
// insert the node at end of the doubly linked list 
struct node * insertEnd(struct node* head , int data ){
    // create a temp pointer that store the head 
    
    struct node * temp = head ;

    // check for the empty case 
    if  (temp ==NULL){
        temp = new node(data) ; 
        head = temp ; 
        return head ;
    }
    // create  A NEWnode 
    node * newNode = new node(data) ;
    // we have to use  the temp ->next else it goes into the outside the 
    //node 

    while (temp->next!=NULL)
    {
        temp = temp ->next ; 
    }
    temp->next = newNode ;
    newNode->prev = temp ;
    return head ;

}

// main methods start 
int main(){

    struct node * head = new node(10);
    head = insertEnd(head,20);
    head = insertEnd(head,50);
    head = insertEnd(head,1000);
    updateEnd(head,3);
    print(head);
    return 0 ; 
}