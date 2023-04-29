// delation of the node in the end of the node

#include<iostream> 
using namespace std ;

// create the class of the node
class Node {
    public:
    int data ;
    Node * next;
    Node * prev; 

    // create the constructor 
    // constructor name must be same as the class name 
    Node (int data){
        this->data = data ; 
        this->next= NULL;
        this->prev = NULL;
    }

} ;


// printing the node 
void print(Node * & head ){
    // create a temp  node  that point the head node 
    Node * temp = head ; 

    // use the while loop to print the element 
    // while temp ! = NULL AND increment the node pointer by 1 index 
    while (temp!=NULL)
    {
        cout<<temp->data <<" -> "; 
        temp = temp->next;
    }

}

// insertAtHead of the node in the doubly linked list 
void insertAttail(Node* &tail,int data ){
    // create a new node that is going to be inserted 
    Node * newNode  = new Node(data); 
    Node * temp = tail;

    // here we apply the logic of the insertion at end in the linked list 
    
    temp ->next = newNode; 
    newNode->prev = temp; 
    tail = newNode;
    
}

// main method 
int main(){

    // create the node of the data 
    // we pass the data as argument in the node constructor 
    Node * node1 = new Node(23);

    // create a head node that initially point  to the first node 
    Node * head = node1; 
    Node * tail = node1 ; 
    
    insertAttail(tail,3);
    insertAttail(tail,50);
    
    print(head);
    return 0; 
}

