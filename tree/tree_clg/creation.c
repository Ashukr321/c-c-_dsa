// here we see the how to create the tree in the c
// #preprocessor
#include <stdio.h>
#include <stdlib.h>

// create a struct node

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

// create a node
struct node *createTreeNode(int data)
{
    // CREATE A NEWnODE AND ALLOCATE THE MEMORY
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));

    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// main methods start

// preorderTraversal root left right :)   node print
struct node *preorderTraversal(struct node *root)
{
    if (root == NULL)
    {
        return NULL;
    }

    printf("%d ", root->data);

    // here we use the recursion to traverse the node of the tree

    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

int main()
{
    struct node *n1 = createTreeNode(2);
    struct node *n2 = createTreeNode(3);
    struct node *n3 = createTreeNode(4);
    struct node *n4 = createTreeNode(5);
    struct node *n5 = createTreeNode(6);
    struct node *n6 = createTreeNode(7);
    struct node *n7 = createTreeNode(8);

    // here linking the all node
    n1->left = n2;
    n1->right = n3;
    n2->left = n4;
    n2->right = n5;
    n3->left = n6;
    n3->right = n7;

    preorderTraversal(n1);

    return 0;
}