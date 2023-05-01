
//  here we see the preorder traversal in the tree
#include <stdio.h>
#include <stdlib.h>

// create the node
typedef struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

} treenode;

// create the tree node
treenode *createTreeNode(int data)
{
    // create newNode and allocate the memory dynamically in the memory
    treenode *newNode = (treenode *)malloc(sizeof(treenode));
    // check for the null case
    // when newNode is not null then we create a node and set the
    // left and right value by null

    if (newNode != NULL)
    {
        newNode->data = data;
        newNode->left = NULL;
        newNode->right = NULL;
    }
    return newNode;
}

treenode * preorderTraversal(treenode * node)
{
    if (node == NULL)
    {
        return NULL;
    }

    printf(" %d ", node->data);
    // left recursive call the fuction an
    //  as we know that recersion use the stack
    preorderTraversal(node->left);

    preorderTraversal(node->right);
}

// main methods start here
int main()
{
    // creat the node
    treenode *n1 = createTreeNode(10);
    treenode *n2 = createTreeNode(45);
    treenode *n3 = createTreeNode(43);
    treenode *n4 = createTreeNode(418);
    treenode *n5 = createTreeNode(46);
    treenode *n6 = createTreeNode(455);

    // here we linking the all the node
    n1->left = n2;
    n1->right = n3;
    n2->left = n4;
    n2->right = n5;
    n3->left = n6;

    // traverse the tree node by the help of the preorder traversal algo
    // preorder
    preorderTraversal(n1);

    // free the all the treenode by the help of the free methods
    // free(n1);
    // free(n2);
    // free(n2);
    // free(n3);
    // free(n4);
    // free(n5);
    // free(n6);
    return 0;
}