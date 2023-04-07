// preprocrssor 

#include<stdio.h>
#include<conio.h>


// function declration 
int sum(int *a , int *b);
// main methods 

// main is function name 

// int -> return type 






int main(){

    int a = 34, b = 44;
    //  call by value
    // int data = sum(a, b);


    // call by refrence 
    // int data = sum(&a,&b);
    // printf("the sum of the two number a and b is => %d",data);


    for ( int  i = 0; i < 10;i++ )
    {

         int data = sum(&a,&b);
         printf("the sum of the two number a and b is => %d \n",data+i);
    }
    

    return 0;

}


// intialization of sum function
int sum(int *a , int *b ){
    return *a+*b;
}