#include<stdio.h>
#include<conio.h>

// print the 

// main methods 
 int main(){
    // 2d array 
    // declare the 2d array 
    int i ,j , sum = 0 ; 
    
    int arr[2][3]= {
        {1,2,345},
        {4,5,3},
    };


    // access the elements of the array by the index 
    // printf("%d",arr[1][2]);


    // printing the 

    // outer loop 
     for (int  i = 2-1; i >= 0; i--)
     {
        //inner loop 
        for (int j = 3-1; j >= 0; j--)
        {
            printf("%d ",arr[i][j]);   
            sum += arr[i][j]; 
        }
        printf("\n");
        
     }

    printf(" the sum of the all the elements of the array is = > %d",sum);
    return 0; 

 }