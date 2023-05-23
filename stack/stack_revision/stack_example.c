// stack implementatin in the c
// preprocessor
#include <stdio.h>
// defined the size of the stack
#define size 5

// create a pointer variables top
int top;
// create the stack

// stack is implemented by the array
int stack[size];

// functioon declration
int isUnderflow();
int isOverflow();
void push(int data);
int pop();
int peak();
void getSize();

// print the stack element
void printStack();

// main methods start here ...
int main()
{

    // set the value of top = -1;
    top = -1;
    push(23);
    push(2);
    push(2);
    push(3);
    push(30);
    printf("before pop stack are .. ");
    printStack();
    int data = pop();
    printf("popped data is : %d\n", data);

    printf("after pop stack are ... \n");
    printStack();
    int p = peak();
    printf("peak element of the stack is => %d \n", p);
    getSize();
    return 0;
}

// function initialisation
int isUnderflow()
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// isOverflow()
int isOverflow()
{
    if (top == size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// push method in the stack
void push(int data)
{
    // check the  stack is full  or overflow or not
    if (isOverflow() == 1)
    {
        printf("stack is already full sory ! \n");
        return;
    }
    if (isUnderflow() == 1)
    {
        // increment the top
        stack[top] = data;
    }

    // normal case
    top++;
    stack[top] = data;
    printf("%d data is push at index =>  %d \n", data, top);
}

// pop operation
int pop()
{
    // check for the empty case
    if (isUnderflow() == 1)
    {
        printf("stack is in underflow \n");
    }
    // pop the top
    int temp = stack[top];
    // decreament the top
    top--;
    return temp;
}

// printing the stack elements
void printStack()
{
    for (int i = 0; i < top; i++)
    {
        printf("%d ", stack[i]);
    }
    printf("\n\n");
}

// peak() element of the stack 
int peak(){
    int top = stack[top];
    return top;
    
}
// get the size of the stack 
void getSize(){
    int sizeOfStack= top+1;
    printf("size of the stack is  => %d\nmax capacity of stack is %d=>  \n",sizeOfStack,size);
}