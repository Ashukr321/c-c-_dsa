#include<stdio.h>
#include<conio.h>
    int arr[]= {1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(int);
//  function direclaration 
void backprint(int arr[]);

// main methods 

 int main(){

    // array declration 

    // calling the function by  value 
    backprint(arr);
    return 0; 
 }


// function intialisation 
void backprint(int arr[]){
    for ( int  i =size-1 ; i >0; i--)
    {
        printf("%d\n",arr[i]);

    }
    

}