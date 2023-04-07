
// preprocessor 
#include<stdio.h>

#include <stdlib.h>
// global variables defined the 
#define size  10

// local variables 
int top  ;
// create the stack 
int stack[10];



// ⭐⭐⭐⭐⭐⭐⭐⭐ methods declration .....
void push (int data);
int isOverflow();
void show();



// ⭐⭐⭐⭐⭐⭐⭐⭐ main methods start here .... 
int main(){

    // set the value of the top by th  -1 

    top = -1 ; 


    push(10);
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    push(8);
    push(9);


    return 0 ; 

}

// defined the push methods 

void push(int data){

    if (isOverflow()==1){
        printf("");
    }
    stack[top] = data ;
    // increment the top by the 1 
    top++;

    // printf(" data is push succecfully %d \n", data);
}




int isOverflow(){
    if (top == size-1)
    {
        printf("stack is overflow \n");
    }
    
}

int isUnderflow(){
    if (top = -1)
    {
        printf(" stack is ");
    }
    
}
//  show the stack elements 
void show()
{
    if (top == -1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nElements present in the stack: \n");
        for (int i = top; i >= 0; --i)
            printf("%d\n", stack[i]);
    }
}