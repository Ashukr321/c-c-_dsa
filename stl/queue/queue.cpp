// queue -> fifo first in first out 

#include<iostream> 
// include the queue 
#include<queue>
using namespace std;

// main methods 
 int main (){
    //create the queue 
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;

    //delate the elements 
    cout<<"after pop >> "<<endl;
    q.pop();
    cout<<"fornt elements of the queue -> "<<q.front()<<endl; // 2


    return 0; 
 }