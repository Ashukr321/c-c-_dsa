#include<iostream>
using namespace std; 

// create a node 
class Node {
    public:// access modifiers 
    int data ; 
    Node *next; 

    // constructor 
    Node(int data ){
        this->data = data; 
        this->next= NULL;
    }
};


void insertAtHead(Node* &head,int d ){
    //new node 
    Node* temp = new Node(d);
    temp->next = head; 
    head = temp; 
    

}
// main methods 

int main(){
    // create the object of the node 
    Node* node1 = new Node(4); // node 1 is pointer 
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;

    return 0; 
}