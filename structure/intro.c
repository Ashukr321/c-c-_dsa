// prerocessor 
#include<stdio.h>

int main(){
    // struct is just like a class 
    // declaration of the struct
    struct std
    {
        
        int age;
        int enrollment_num;
    };


    // here we create the class of the struct class 
    // initailisation of the struct 
    struct std ashu;
    printf("enter your  age ");
    scanf("%d",&ashu.age);

    ashu.enrollment_num= 013; 

    printf("%d ",ashu.age);
    return 0; 
}