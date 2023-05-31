
// preprocessor
#include <stdio.h>
#include <stdlib.h>

// create a struct node
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

// createNode
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// traversal of the node in the bst
struct Node *preOrder(struct Node *root)
{
    if (root == NULL)
        return NULL;
    printf("%d ", root->data);
    preOrder(root->left);
    preOrder(root->right);
}

//search  key 
struct Node *search(struct Node *root,int key){
    if(root == NULL)
    {
        return NULL;
    }
    if (root->data==key)
    {
        printf("\nyes key is present in bst %d",key) ;
    }

    else if (key>root->data)
    {
        search(root->right,key);
    }
    else
    {
        search(root->left,key);
    }


}
// main method start here...
int main()
{
    struct Node *root, *n1,*n2,*n3,*n4,*n5,*n6,*n7;
    n1 = createNode(15);
    root = n1;
    //creating the all the node of  the binary search tree 
    int key = 9;
    n2= createNode(8);
    n3=createNode(20);
    n4= createNode(7);
    n5= createNode(9);
    n6=createNode(16);
    n7=createNode(25);

    //linking the linking the node 
    n1->left = n2;
    n1->right = n3;
    n2->left = n4;
    n2->right = n5;
    n3->left = n6;
    n3->right = n7;

    preOrder(root);
    
    search(root,key);
    return 0;   
}

