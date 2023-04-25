// set in the cpp 
#include<iostream> 

// include set
#include<set> 
using namespace std; 
// main methods 
int main(){
    // create the set
    set<int> s; 

    // operation on set 
    // bydefalut set is in the  sorted order element store 

    s.insert(12);
    // s.insert(12);
    // s.insert(12);
    // s.insert(12);

    s.insert(2);
    s.insert(0);
    s.insert(3);
    s.insert(4);
    // for of loop
    for(int i:s){
        cout<<i<<endl;
    }
    cout<<s.size()<<endl; 
    return 0;
}