// here we see the all the traversal of the node in the tree

#include <stdio.h>
#include <stdlib.h>

// create the struct node
struct node
{
    int data;
    struct node *left;
    struct node *rigth;
};

// create treennode
struct node *createNode(int data)
{
    // create a node allocate the memory

    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    // set the data of the node
    newNode->data = data;

    // set the value of the node left and right by null

    newNode->left = NULL;
    newNode->rigth = NULL;

    // return the node
    return newNode;
}

// here apply all the methods of the traversal of the node
struct node *preOrderTraversal(struct node *root)
{

    if (root == NULL)
    {
        return NULL;
    }

    printf("%d ", root->data);

    preOrderTraversal(root->left);
    preOrderTraversal(root->rigth);
}

// inorder traversal of the node
struct node *inOrderTraversal(struct node *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    inOrderTraversal(root->left);
    printf("%d ", root->data);
    inOrderTraversal(root->rigth);
}



//post order traversal in  the node js 
// left right root 
struct node *postOrderTraversal(struct node *root){
    if (root == NULL)
    {
        return NULL;

    }
    // recursive call of the  post order traversal 

    postOrderTraversal(root->left);
    postOrderTraversal(root->rigth);

    printf("%d ", root->data);


}

// main methods start here ..
int main()
{
    // create the root node
    struct node *root = createNode(1);
    // create the left child of the root node
    struct node *left = createNode(2);
    // create the rigth child of the root node
    struct node *rigth = createNode(3);
    // create the left child of the left child of the root node
    struct node *left_left = createNode(4);
    // create the rigth child of the left child of the root node
    struct node *left_rigth = createNode(5);
    // create the left child of the rigth child of the root node
    struct node *rigth_left = createNode(6);
    // create the rigth child of the rigth child of the root node
    struct node *rigth_rigth = createNode(7);
    // create the left child of the rigth child of the root node
    struct node *rigth_rigth_left = createNode(8);
    // create the rigth child of the rigth child of the root node
    struct node *rigth_rigth_rigth = createNode(9);
    // create the left child of the rigth child of the root node
    struct node *rigth_rigth_rigth_left = createNode(10);

    // HERE WE LINKING THE ALL THE NODE OF  THE TREE
    root->left = left;
    root->rigth = rigth;
    left->left = left_left;
    left->rigth = left_rigth;
    rigth->left = rigth_left;
    rigth->rigth = rigth_rigth;
    rigth_left->left = rigth_rigth_left;
    rigth_left->rigth = rigth_rigth_rigth;
    rigth_rigth->left = rigth_rigth_rigth_left;

    printf("preorder traversal of the node \n");
    preOrderTraversal(root);

    printf("\nin order traversal \n");
    inOrderTraversal(root);


     printf("\n\npost  order traversal \n");
    postOrderTraversal(root);
    return 0;
}
