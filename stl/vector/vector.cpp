// here we see the example of the vector in the cpp 
// this is the most important in the cpp 
// vector is similar to the array 
// this is dynamic data structure 
// ones it reach thier size this is increase their size by double 


#include<iostream>
#include<vector> 
using namespace std; 

int main(){

    vector<int>v; 
    vector <int> a(5,1);// 5 is the size of the vector // 1 is value to assign 
    // used  for of loop 
    cout<<"print a :) "<<endl;
    for ( int i :a)
    {
        cout<<i<<endl;
    }
    
    cout<<"copy vector "<<endl;
    vector <int> last(a);

    // print the  vector copy data 
    for (int i :a) 
    {
        cout<<i<<endl;
    }
    


    
    v.push_back(3);
    v.push_back(10);
    v.push_back(20);

    cout<<"current capacity of vector is "<<v.capacity()<<endl;

    return 0; 
}