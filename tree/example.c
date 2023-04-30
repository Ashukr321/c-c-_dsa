// here we see the example of the binary tree how to create and 
// binary tree have two element at each parent node 

// use the typedef keywords 
// typedef :)  The typedef is a keyword used in C programming 
// to provide some meaningful names to the already existing variable in the programe 


// implement the binary tree 

// preprocessor 
#include <stdio.h>
#include<stdlib.h>

// create a binary tree 
typedef struct Node{
    int data ; 
    struct Node *left;
    struct Node *right;
}treenode;
//struct Node is represented by trenode name simple   done by the help of the typedef 

// here we create a function that create a tree node 
treenode* createNode (int data ){
    // create a tree node pointer and 

    // allocation of the memory dynamically in the memory 
    // here we typecast in to the treeNode 
    treenode *newNode = (treenode *) malloc (sizeof(treenode));
    if (newNode!=NULL)
    {
        newNode->data = data;
        newNode->left = NULL;
        newNode->right= NULL;
    }

    return newNode;
    
}

// main methods start here 
void printPreorder(treenode* node)
{
    if (node == NULL)
        return;
    /* first print data of node */
    printf("%d \t", node->data);
 
    /* then recur on left subtree */
    printPreorder(node->left);
 
    /* now recur on right subtree */
    printPreorder(node->right);
}

void printInorder(treenode* node)
{
    if (node == NULL)
        return;
 
    /* first recur on left child */
    printInorder(node->left);
 
    /* then print the data of node */
    printf("%d \t", node->data);
 
    /* now recur on right child */
    printInorder(node->right);
}
int main(){

    // create a node 
    treenode * n1 = createNode(10);
    treenode * n2 = createNode(20);
    treenode * n3 = createNode(30);
    treenode * n4 = createNode(40);
    treenode * n5 = createNode(50);


    // here we try to connect the root of the node 
    // make any node is parent node 
    n1->left= n2;
    n1->right = n3;
    n3->left = n4;
    n3->right = n5;

    printf("here print the node data by the help of the preorder traversal \n");
    printPreorder(n1);
    printf("\n\n");
    printInorder(n1);
    // create a function and just passes out the root node and just printed out 
    // the all the node of the tree 

    // last we have to free the memeory by the help of the using the free methods 
    free(n1);
    free(n2);
    free(n3);
    free(n4);
    free(n5);

    return 0;
}
