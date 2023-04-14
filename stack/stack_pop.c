
// preprocessor 

#include<stdio.h>
#include<conio.h>

// defined the stack 
#define size 5 

// create pointer variables 
int top ; 

// create the stack
int stack[size];

// function declration 
int isOverflow();
int isUnderflow();
void peek();
void traverStack();
void push(int data);
void pop();



// main methods start here 
int main(){


    top = -1; 

    //calling the function 
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);

    pop();
    peek();
    traverStack();


    return 0;

}




// function declaration 
int isOverflow(){
    if (top == size-1)
    {
        return 1;   
    }else 
    {
        return 0; 
    }
    
}



// isUnderflow
int isUnderflow(){
    if (top == -1) {
        return 1;
    }else{
        return 0;
    }
    
}


// push methods in the stack 
void push(int data ){
    // check for the full case 
    if (isOverflow()==1)
    {
        printf(" stack is full \n"); 
        return ;
    }

    // check if stack is empty then 
    if(isUnderflow()==1){
        stack[top]=data; 
    }

    // for normal case 
    top++; 
    stack[top ]= data; 

    // print the message succesfully inserted data in to the stack 
    printf("%d inserted into the stack at index of %d \n ", data ,top);
    
}




// pop methods 
void pop(){
    if (isUnderflow()==1)
    {
        printf("stack is underflow \n");
        return;
    }
    
    // check for one element 
    if(top==0){
        int temp = stack[top];
         printf(" %d  is delated \n",temp);
        return;
    }

    int temp = stack[top];
    top--;
     printf(" %d  is delated \n",temp);

}




// peek method of the stack 
void peek(){
    // check for the underflow()
    if (isUnderflow()==1)
    {
        printf(" stack is underflow \n");
        return ;
    }
    
    int temp = stack[top];
    printf(" peek elements is %d \n", temp);

}


// traverse the stack
void traverStack(){
    //check for the empty case
    if (isUnderflow()==1)
    {
        printf(" stack is empty \n"); 
        return ; 

    }
    
    // for loop 
    for (int  i = 0; i <= top; i++)
    {
        printf("%d \n", stack[i]);
    }
    
}


