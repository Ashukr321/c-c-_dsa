#include<iostream>
using namespace std; 

// fnc create 
int power(int n ,int p){
   
    if (p==0)
    {
        return 1;
    }
    int value = n*power(n,p-1);
    return value;
}

int main(){
    int n = 2,p = 23;
    // we have to  calculate n^p 

    int result = power(n,p);
    cout<<result<<endl;
    return 0 ;
}