// preprocessor 
#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;

};


//creat node fucntion 
struct Node *createNode(int data){
    struct Node *newNode;
     newNode= (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

struct Node *insertAtBegin(struct Node *head ,int data){
    //check for the empty case node 
    if (head == NULL)
    {
        head = createNode(data);
        return head ;
    }
    struct Node *temp= head ;
    struct Node *newNode = createNode(data);
    newNode->next= temp;
    head = newNode;
    return head ; 

}

void traverse(struct Node *head  ){
    struct Node *temp = head;
    while (temp!=NULL)
    {
        printf("%d -> ",temp->data);
        temp = temp->next;
    }
    
}

// main methods start here 
 int main(){
    struct Node *head ,*n1;
    n1= createNode(12);
    head = n1;  

    head = insertAtBegin(head , 3);
    head = insertAtBegin(head , 10);
    head = insertAtBegin(head , 30);
    head = insertAtBegin(head , 45);
    head = insertAtBegin(head , 50);

    traverse(head);
    return 0;
 }