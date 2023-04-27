//  dealtion of the  node  in the singly  linked list  
// delation is also happend in the three case of the linked list 

// begining of the linked list 
// this is alos know as delation at head of the  node 


// at the end of the node 
// this is also know as the delation at the tail of the node 


// at the given postion of the linked list 
// head , position of  the  node 
 


#include<iostream> 
using namespace std; 

// create a class for the node 
class  Node 
{
    public:
    int data ; 
    Node * next ;

    // constructor to set the data and next and create the node

    Node(int data){
        this->data = data; 
        this->next = NULL;
    }

};


// insert at head 
void insertAtHead(Node * &head, int data){
    // create a node  for the data 
    // new node and conect to the head of the  node 
    Node *newNode = new Node (data);

    // here we connect with the  newNode with the head node of the linked list
    newNode->next = head; 
    head= newNode;
}


// printing the node of the sinlgy linked list 
void printNode(Node * head){
    // create a temp node 
    Node *temp = head; 
    while(temp!=NULL)
    {
        cout<<temp->data<<"-> ";
        temp= temp->next;
    }
    
}


// delation of the linked list 
void delateHeadNode(Node* &head){
    // create a node  temp ;
    Node  * temp  = head; 
    head = head->next; 
    temp->next = NULL;
    free(temp);
    
}

// main methods 
int main(){
    // create the object of the class
    Node *node1 = new Node(23);
    Node *node2 = new Node(2);

    // here we linked the node1 and node2 
    node1->next= node2;
    Node *head = node1;

    insertAtHead(head,45);
    insertAtHead(head,5);
    insertAtHead(head,4);
    delateHeadNode(head);
    printNode(head);
    

return 0;
}

