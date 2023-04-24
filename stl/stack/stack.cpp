// stack int  stl cpp
#include <iostream>
#include <stack>
using namespace std;

// stack wokr on the lifo algo

// last in first out algoriths in the cpp

// main methods start here ... 
int main()
{
    // creat the stack
    stack<int> a;
    // operations of the stack
    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);
    a.push(5);

    // print the element of the stack by the help of the for of loop
    cout << a.top() << endl;

    // pop
    a.pop();
    cout << a.top() << endl; // this will gives the 4
    // size of the stack
    cout << a.size() << endl;  // 4
    cout << a.empty() << endl; // this give two value
    // 0 for the false
    // 1 for the true value

    return 0;
}
