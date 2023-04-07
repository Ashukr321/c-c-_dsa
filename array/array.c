#include<stdio.h>
#include<conio.h>


int main(){
    int sum = 0; 

    // creating the arrary 
    int arr[] = {23,32,35,235,32,5,325,23,5,32};
    // traverse the array 
    for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
    {
        printf("%d \n",arr[i]);
        sum+=arr[i];
    }
    
    printf("the sum of the array %d",sum);
    return 0; 

}