#include<stdio.h>
#include<conio.h>

// defined the size of the stack 
#define size 5 

// create the top  pointer variables 
 int top ; 

 // create the stack 
  int stack[size];

  // function declration 
void push(int data);
int isUnderflow();
int isOverflow();


// main methods start here ...

int main(){

    // initialisation of the top variables by the -1 
    top = -1; 

    // calling the  function push 
    push(3);

    return 0;
}

// isUnderflow();
int isUnderflow(){
    if (top == -1)
    {   
        return 1;
    }
    else{
        return 0;
    }
    
}
// isOverflow()
int isOverflow(){

    if (top == size-1)
    {
        return 1;       
    }
    else{
        return 0; 
    }
}

// push methods in the stack 
void push(int data){
    // check for the overFlow case 
     if (isOverflow()== 1 )
     {
        printf(" stack is overflow \n");
        return ;
     }

    // check for the empty case 
    if (isUnderflow()== 1)
    {
        stack[top ]= data; 
    }

    // normal case 
    top++; 
    stack[top] = data;

    // printing the message 
    printf(" %d element is added succesfully at indexm of  %d \n",data , top); 
      
     
}