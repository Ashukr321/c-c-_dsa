//  dyanamic memory allocation in the cpp
// dynamic mmemory allocation is done at the runtime 
// pointer is used for the 

// in the c 4 type of the function is used for the dm 

// malloc () -> memory allocation 

// free() -> free the memory 
 // calloc() -> 
// realloc()



// for the memory allocation we  used the malloc()
// pointer  return -> store the address of the another variables 
// memory is allocaed by the help of the new keywords 
//deallocation by the help of the delate 

// preprocessor 
#include<iostream> 
using namespace std;

int main()
{
    // local variables declare 
    // int *name = new int();
    // //  here we update the dm 
    // // by the help of the pointer 

    // *name = 12;
    // *name = 23;

    int *p = NULL; // intially  creating the pointer variables 

    p = new int(); // memory allocation 
    *p = 23; 
    printf("%d",p);

    //  before ma we have to must check the  memory space is free or not 
    
    return 0;
}


