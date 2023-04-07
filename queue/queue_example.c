//  here we see the example of the queue in the c

// preprocessor 
#include<stdio.h>
#include<conio.h>
#define size 5 // don't used ; colon it will gives the error 

// global variables
// create the queue ;
int queue[size];
int rear, front ; 

// function declration 
// int isEmpty();
// int isFull();
void enQueue(int data); 

// main methods 
int main(){

    // initalise the value of the front and rear ;
    front = -1;
    rear = -1;

    // calling the enqueue function 
    enQueue(2);
    enQueue(20);
    enQueue(22);
    enQueue(23);
    enQueue(21);
}


// initlization of the  function 
int isEmpty(){

    if (front== -1 && rear == -1 )
    {
        return 1; 
    }else{
        return 0; 
    }

}



//isFull 
int isFull(){
    if (rear == size-1)
    {
        return 1; 
    }else {
        return 0 ;
    }
    
}


// enQueue operation 

void  enQueue(int data){

    // step1 check for the full case queue 
    if (isFull()==1)
    {
        printf("queue is full \n");
        return;
    }

    // step2 check for empty case 
    if (isEmpty()==1)
    {
        // increment the front and rear by 1 and set the data at index rear 
        front = rear = 0; 
        queue[rear]= data; 
        printf("\n %d is inserted  in queue at index of %d \n", data , rear);
        return;
    }
    

    // step3 normal case 
    // increment the rear by 1 and insert the data at rear index 
    rear++; // postfix increment 
    queue[rear]= data; 
    printf("%d data is inserted at index of  %d \n", data,rear );
}

// dequeue opearation 
