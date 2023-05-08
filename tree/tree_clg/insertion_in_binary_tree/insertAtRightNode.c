// insertion of  the node in the right of the node

// preprocessor
#include <stdio.h>
#include <stdlib.h>

// struct node

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

// create node

struct node *createNode(int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

// preorder

void preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d -> ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

// inorder

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

// postorder

void postorder(struct node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

// insertAtRight of the node

// here node is the source node where we are going to insert the node
struct node *insertAtRight(struct node *node, int data)
{
    // case 1 check for the emptu case if the
    // tree have no node of the element then the  we create a node and return it
    if (node == NULL)
    {
        node = createNode(data);
        return node;
    }

    // check 2  if the only 1 node in the tree then
    if (node->right == NULL)
    {
        node->right = createNode(data);
        return node;
    }

    // case3 if their is already node is present then

    // create a node
    struct node *temp = createNode(data);

    temp->right = node->right;
    node->right = temp;
    return node;
}
int main()
{
    struct node *root, *n1, *n2, *n3;

    n1 = createNode(23);
    // root = n1;

    // n2 = createNode(10);
    // n3 = createNode(400);

    // linking the node

    // n1->left = n2;
    // n1->right = n3;
    n1= insertAtRight(n1,100);

    root = n1;
    preorder(root);
    printf("\n");
    return 0;
}