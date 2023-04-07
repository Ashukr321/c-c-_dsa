// preprocessor 
#include <stdio.h>

//  defined the  size globaly 
#define size 10

//   declare the  global variables ⭐⭐⭐⭐⭐
int top ;
int stack[10];

// function declration in  here 🤷‍♂️🤷‍♂️🤷‍♂️🤷‍♂️🤷‍♂️image.png

void push(int data);
void  pop();
// void show();

// main methods start  here  ⭐⭐⭐⭐⭐⭐⭐⭐⭐

int main()
{
    int top = -1 ; 

    push(12); 
    push(1); 
    push(2); 
    push(2); 
    pop();
    // here we 
}

// 🤷‍♂️🤷‍♂️🤷‍♂️🤷‍♂️🤷‍♂️ push methods here ...

void push(int x )
{
    if (top == size - 1)
    {
        printf("\nOverflow!!");
    }

    else
    {
        stack[top] = x;
        printf("data is push successfully %d \n", x);
        top = top + 1;
    }
}


// ⭐⭐⭐⭐ pop methods 

void pop()
{
    if (top == -1 )
    {
        printf("stack is underflow \n");
    }
    int temp = stack[top];
    top= top-1; 

        printf(" delate elemetns %d ", stack[top]);
    
}
    


   
    

