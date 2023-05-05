// here we create the binary tree using the cpp 

// preprocessor 

#include<iostream> 
using namespace std ;

// create a node class 
class node {
    public:
    int data ; 
    node *left ;
    node * right; 

    // constructor 
    // cosntructor name must be same as the class name 

    node(int data){
        this->data = data; 
        this->left = NULL;
        this->right = NULL;
    }

};
node * buildTree(){
}
// main metods start here 
int main(){
    node *root =NULL ;
    root = buildTree();
    


    return 0; 
}




