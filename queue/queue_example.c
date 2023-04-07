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
int  dequeue();
int frontElement();
int lastElement();

// traverse or linear  search element  or display the queue elemetns 
void traverQueue();


// main methods ⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐ 
int main(){

    // initalise the value of the front and rear ;
    front = -1;
    rear = -1;

    // calling the enqueue function 
    // enQueue(2);
    // enQueue(20);
    // enQueue(22);
    // enQueue(23);
    enQueue(20);
    enQueue(21);
    enQueue(22);
    printf(" \n\n");
    enQueue(23);
    traverQueue();
    int removeData = dequeue();
    printf(" \n%d data is remove \n",removeData);

    int fElement = frontElement();
    printf("%d fornt elements of the queue 🤷‍♂️🤷‍♂️\n ",fElement);
    int lsElement= lastElement();
    printf("%d last element of the queue ⭐⭐ \n\n", lsElement);
    traverQueue();

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
// remove the elements from the queues 
int  dequeue(){
    // check for empty case 
    if (isEmpty()==1)
    {
        printf("queue is empty \n");
    }
    


    // check for the one elements present int he queue

    if (front==rear)
    {
        int temp = queue[rear];
        rear=front=-1;
        return temp;
    }
    
    // normal condition 
    int temp = queue[front]; 
    front++; // increment the front index bu the 1 value 
    return temp;
}



//  getting the front elements 
int frontElement(){
    // we have to get the front element  or peek elements of the queue 

    // check the empty condition 
    if (isEmpty()==1){
        printf("queue is empty 🤷‍♂️\n");
    }
    return queue[front];
}



// last or rear elements of the queue 🤷‍♂️🤷‍♂️🤷‍♂️

int lastElement(){
    // check the empty case 
    if (isEmpty()==1)
    {
        printf("queue is empty \n");
    }
    return queue[rear];
    
}


// traverse the queue 

 void traverQueue(){
    // check for the empty case 
    if (isEmpty()==1)
    {
        printf("queue is empty \n");
    }
    
    // use for loop for the traversing the queue element 
    // this is know as linear search 
    for (int  i = front; i <=rear; i++)
    {
        printf(" %d element  of queue at index of %d \n ",queue[front],i);
    }
    
}