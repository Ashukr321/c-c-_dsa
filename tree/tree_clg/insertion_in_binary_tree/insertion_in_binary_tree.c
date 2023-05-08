// here we see the how to insert the node in the tree

// preprocessor c

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

// here we se the how to  create the newNode in the tree 

struct node *createNode(int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;

}

// traverse the tree node by preorder 

void preorder(struct node *root)
{
    if (root!= NULL)
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

// traverse the tree node by inorder

void inorder(struct node *root)
{
    if (root!= NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

// traverse the tree node by postorder

void postorder(struct node *root)
{
    if (root!= NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}


// insertion in the binary tree

//main methods start here 
int main(){
    // create the root node 
    
    struct node *root ,*n1 ,*n2 ,*n3 , *n4 , *n5, *n6;
    
    n1  = createNode(10);
    n2  = createNode(20);
    n3  = createNode(30);
    n4  = createNode(40);
    n5  = createNode(50);
    n6  = createNode(60);
    
    // here we assign the n1 in to the root 

    root = n1;

    // linking the  all the node 
    
    n1->left = n2;
    n1->right = n3;
    n2->left = n4;
    n2->right = n5;
    n3->left = n6;
    
    // calling the function for  thr traverse the tree node 
    printf("preorder traversal of the tree node \n");
    preorder(root);
    printf("\n\n");

    printf("inorder traversal of the tree node \n");
    
    inorder(root);
    printf("\n\n");

    printf("postorder traversal of the tree node \n");
    postorder(root);
    printf("\n");
    


    // insertion of the node in the tree 
    // here see the how to insert the node in the binary tree 

   
    return 0;
}