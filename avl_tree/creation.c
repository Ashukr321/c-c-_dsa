// // here we see the how to create the avl tree in the

// // preprocssor
// #include <stdio.h>
// #include <stdlib.h>


// // create the struct node
// struct node
// {
//     int data;
//     struct node *left;
//     struct node *right;
//     int height;
// }*root = NULL;


// // finding the height of the node 
// int nodeHeight(struct node * node){
//     if (node == NULL)
//         return -1;
//     else
//         return node->height;
// }
// //create  function for the right insertion 
// struct node *insert(struct node * node,int key){


//     // create a temp node  that intially it will null value 
//     struct node *temp = NULL;


//     // if node is null then create a node and store the key 
//     if (node ==NULL)
//     {
//         temp = (struct node *)malloc(sizeof(struct node));
//         temp->data = key;
//         temp->left = NULL;
//         temp->right = NULL;
//         temp->height = 1;
//         return temp;
//     }
    


//     if (key<node->data)
//     {
//         node->left = insert(node->left,key);
       
//     }else if(key>node->data){
//         node->right = insert(node->right,key);
//     }
//     node->height= nodeHeight(node);

// }


// // main methods start here ..
// int main()
// {

//     return 0;
// }