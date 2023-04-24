#include<iostream>
#include<deque>
using namespace std;
// main method start here ...
int main(){
    deque<int > d; 
    d.push_back(10);
    d.push_front(12);

    // print the deque data 
    for(int i:d){
        cout<<i<<endl ;
    }


    // pop_front-> remove the element from the front of the deque 

    d.pop_front();

    // this remove the first element of the deque

    cout<<d.front()<<endl;


    d.push_back(20);
    // check the deque is empty or not 
    cout<<d.empty()<<endl;
    
    return 0; 
}