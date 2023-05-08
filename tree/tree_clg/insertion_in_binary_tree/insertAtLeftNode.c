//  here we see the how  to insert the node at left of the  node
// preprocessor

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

// createNode 
                   
struct node *createNode(int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

// insertNode    
// here node is the source  node 

struct node *insertLeftNode(struct node *node, int data)
{
    //case 1 
    // check for  the null case 
    // if the node is null mean no node in the tree 
    // then create and return it 

    if (node == NULL){
        node = createNode(data);
        return node;
    }
    // case 2
    // if the node is only one node  of the tree then 

    if (node->left ==NULL)  
    {
        node->left = createNode(data);
        return node;
    }

    // case 3 if that node have already a node in the left then 

    else{
        //create node 
        struct node * nn ; 
        nn = (struct node *)malloc(sizeof(struct node));
        nn->left = node->left;
        node->left = nn; 
        return node;
    }


}

// traverse the node 
// preorder traversal 

void preorder(struct node *node)
{
    if (node!= NULL)
    {
        printf("%d ->  ", node->data);
        preorder(node->left);
        preorder(node->right);
    }
}

// main methods start here  ....
int main(){
    //crete the node 
    struct node *root, *n1,*n2 , *n3 , *n4;
    n1 =createNode(10);
    root = n1;  
    n2 =createNode(20);
    n3 =createNode(30);
    n4 =createNode(40);
    n1->left = n2;
    n1->right = n3;

    // here we see the insertion of  the node inleft is completed succesfully 
    n1 = insertLeftNode(n1,100);
    // n3= insertLeftNode(n3,500);
    preorder(root);
    printf("\n");
    return 0 ; 
}
