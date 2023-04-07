//  preprocessor 
#include<stdio.h>
#include<conio.h>


// main methods 
int main(){
    //  creatdd the array 
    int arr[10]= {1,2,3,4,5,7,8,9,10};
    // totla sum we creat  the count 
    int count =0, sum =0, missingNum; 
    for (int  i = 0; i <10 ; i++)
    {
        sum += arr[i];
    }

    for (int  i = 1; i <=10; i++)
    {
        count+=i;
    }
    
    
    missingNum = count-sum; 
    printf("the missing number is %d \n",missingNum);
    return 0; 
}