// list in the stl
// stl -> structure templets  libarary int  the  cpp

#include <iostream>
#include <list>
using namespace std;

// main methods
int main()
{
    list<int> l; 
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);
    
    l.push_front(9);
    l.push_front(8);
    l.push_front(7);
    l.push_front(6);
    

    // copy the list 
    list <int> a(l);

    // print the list items 
    // this is for of loop in the c
    for(int i :a){
        cout<<i<<endl;
    }

    // some other important opeartion of the list 
    cout<<l.empty()<<endl;// 0 for the false  
    // 1 for  the true 

    
    return 0;       
}
