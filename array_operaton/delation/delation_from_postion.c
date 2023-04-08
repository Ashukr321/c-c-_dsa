// here we see the how to delat  the elements from the ppostion 

// preprocessor 
#include<stdio.h>
#include<conio.h>

// defined the size of the array 
#define size 5


// declare the idx variables
int idx ; 

// create the array 
int arr[size]= {1,2,3,4,5}; 

// function declaration 
int isEmpty();
int isFull(); 
void delateFromPosition(int position);
void insertAtEnd(int data );

// main methods start here ... ⭐⭐⭐ 
int main(){

    // set  the value of the idx -1; 
     idx = -1; 
    // calling the function 
    // delateFromPosition(1);
    insertAtEnd(1);
    insertAtEnd(2);
    insertAtEnd(3);
    delateFromPosition(1);
    return 0; 
}

// function  initlaisation 

int isEmpty(){
    if (idx ==-1)
    {
        return 1; 
    }else{
        return 0;
    } 
}


// full case 
int isFull(){
    if (idx == size-1)
    {
        return 1; 
    }else{
        return 0;
    }
}


// delate the element at given postion and  print the delated element 
// just think about it how you solve this problems 


// step1 check for the empty case bec if the array is empty then delation  is not happend 
// we already create  the empty case function  just callit 

// create a temp variables and store the the pos-1 value 
// here we do pos-1 bec pos-1 = index 

// bec array index sart from the 0 index 


// shift the all element left from pos-1 to idex 
//  in last decrease the idx -- // by 1; 

void delateFromPosition(int position){
    // step1 check for the empty case 
    if (isEmpty()==1)
    {
        printf("array is empty \n");
        return;
    }


    // create the temp variables  step 2
    int temp = arr[position-1];// store the delated element in the temp vairiables 

    // step3 
    for (int i = position-1; i >=idx; i++)
    {
        arr[i]= arr[i+1];
    }
    
    idx--;

    printf("%d data is delated from index 🙂 %d " ,temp,position);

    
}


void insertAtEnd(int data ){
    // check the  array  is full or not 
    // if full then  return a message simple 
    if (isFull()== 1)
    {
        printf("array is full \n");
        return;
    }
    
    // increment the idx and set the vlaue of the data at  the postion of the idx 
    //in the array 🙂🙂🙂🙂
    idx ++; // postfix increment by 1 
    arr[idx]= data;
    printf(" %d data is inserted at index of %d \n", data , idx);

}