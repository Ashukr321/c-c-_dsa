// here we see the how to create the tree and apply all the methods of the
// tree
// preorder traversal  =>  root left right
// preinorder      =>  left root right
// post inorder  =>   left right root

// preprocessor
#include <stdio.h>
#include <stdlib.h>

// create a struct node that type of the struct type
//  use the typedef
typedef struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

} treenode;
// here complete struct name is refer by the single name  treenode

// create the function that create the tree in the c dsa
// take data a  and return a node of the struct node type
// that contais the data an the left and the  right parts of the node

// here we create a function that create a tree node
treenode *createNode(int data)
{
    // create a tree node pointer and

    // allocation of the memory dynamically in the memory
    treenode *newNode = (treenode *)malloc(sizeof(treenode));
    if (newNode != NULL)
    {
        newNode->data = data;
        newNode->left = NULL;
        newNode->right = NULL;
    }

    return newNode;
}
// traverse the tree node the  inorder

// inorder -> left root rigth
treenode *inOrder(treenode *node)
{
    if (node == NULL)
        return NULL;

    // print the data
    // traverse the left part of the tree
    // use the recurtion concepts to traverse the tree node

    inOrder(node->left);
    printf("%d ", node->data);
    inOrder(node->right);
    return node;
}

// tree preorder traversal
// root left right // use the concepts of the recursion
treenode *preOrder(treenode *node)
{
    if (node == NULL)
    {
        return NULL;
    }

    // ROOT
    printf("%d ", node->data);
    // left recursive call the fuction an
    //  as we know that recersion use the stack
    preOrder(node->left);
    preOrder(node->right);
}



// postorder traversal the tree node 
// post order 
// left rigth root 

treenode * postOrder(treenode* node){
    if (node == NULL)
    return NULL;

    // recursive functon  used  
    // recursrion use the stack  

    postOrder(node->left);
    postOrder(node->right);
    printf("%d ", node->data);


}
// main methods start here
int main()
{
    // create the node
    treenode *n1 = createNode(34);
    treenode *n2 = createNode(4);
    treenode *n3 = createNode(44);
    treenode *n4 = createNode(10);
    treenode *n5 = createNode(55);
    treenode *n6 = createNode(47);

    // here we link the all the  tree node
    n1->left = n2;
    n1->right = n3;
    n2->left = n4;
    n2->right = n5;
    n3->left = n6;

    // calling the function
    printf("all traversal ways take the o(n) lenear⭐⭐\n ");
    printf("inorder traversal the tree node 😎😎\n");
    inOrder(n1); // pass the root node of the tree node
    printf("\n\n"); 

    printf("preorder traversal the tree node 😎😎\n");
    preOrder(n1);
    printf("\n\n");

    printf("preorder traversal the tree node 😎😎\n");
    postOrder(n1);
    printf("\n\n");


    // free the all the allocation of the memory 

    free(n1);
    free(n2);
    free(n3);
    free(n4);
    free(n5);
    free(n6);
    return 0;
}
