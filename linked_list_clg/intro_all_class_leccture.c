// ⭐⭐⭐⭐    lecture 1     ⭐⭐⭐⭐


//  linked list lecture 1 


// what is linked list  
// it is collection of node 
// connected in linear manner 

// node is single block  :) 

// node having two things
// data and link 

// data -> data is used to store the data 
// link -> to store the address location of next node 

// first node -> head 
// last node -> always null 

// structre of the user defined struct  node 

// struct Node {
//     int data ; 
//     struct   Node *ptr; 
// };

// memrory  allocatoin can be done in two ways

// compile time memory allocation 
// 2 runtime memory allocation in the c 

// in c dynamic memory alloation is done in the 4 ways 
// malloc  -> memmory allocation 
// free -> free the memory 
// calloc ()-> call the alloation 
// realloc()-> re allocation of  the memory 


// some basic operation  which is perform on the linked list 

// malloc ()
// calloc()
// realloc()
// free()



// 1  function 1 

// malloc() -> memory allocation 

// struct Node *n;
// n = (struct Node *)malloc(sizeof(struct Node)); 
// ⭐⭐ dynamic memory allocation  during the runtime of the programme 





// ⭐⭐⭐⭐    lecture 2     ⭐⭐⭐⭐

// how to create a node 
// this is the most important in the linkedlist 


// we can create a function that take a data and create a node of that data 

//struct Node* return 
// struct Node* createNode(int data){
//     // create a  struct pointer  that help in to create a node 
//     struct  Node * n ; 

//     // here we allocate the dynamic memory allocation 
//     // memory allocation is in the heap memory 
//     // n = (struct Node*)malloc(sizeof(struct Node));

//     //malloc(sizeof(struct Node)); -> this malloc function return a void pointer 
//     //so we have to type cast it 

//     // now set the data 
//     // n->data = data; 
//     // n->next= NULL; 

//     return n; 
    
// }

// in main methods we have to  all the function 
// struct node *n1;  
//if we want to store the pointer fuction or pointer data 
// we must have to create the pointer variables data type 

// n1= createNode(pass the data );  // create a node 

// createNode(pass the data ) ; -> this gives the  address of the that node 
// which is created during the calling 

// address store the n1 


// ⭐⭐⭐⭐⭐ pointer field is access by the arrow -> symbol 









