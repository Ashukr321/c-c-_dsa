#include<iostream>
using namespace std; 

//create the class of the  node
class Node {
    public:
    // this is the access modifiers 
    int data ; 
    Node* next; 

    // constructor used to set the value of the node 
    Node(int data){
        this->data= data;
        this->next= NULL;
    }
};
// main methods start here 
int main(){

    // here we create the object of the class 
    Node * node1 = new Node(10);
    Node * node2 = new Node(20);
    Node * node3 = new Node(30);
    Node * node4 = new Node(40);


    // cout<<node1->data<<endl;// this will print the 0 
    // cout<<node1->next<<endl;

    // // here we set he value of the data 
    // node1->data = 43; 
    // node1->next = NULL;

    // cout<<"after set the  data into  the node "<<endl;

    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;


    // here we linking the node 1 and other and print the  data 

    node1->next= node2;
    node2->next = node3;
    node3->next = node4;

    // print the data of the node3 by the help of the node 1
    while (node1!=NULL )
    {
        cout<<node1->data<<endl;
        node1 = node1->next;
    }
    
    return 0;
}