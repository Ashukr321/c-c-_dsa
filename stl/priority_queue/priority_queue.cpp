// here we see the priority queue in the cpp
#include <iostream>
#include <queue>
using namespace std;

// main methods
int main()
{
    // max heap
    priority_queue<int> maxi;
    maxi.push(1);
    maxi.push(2);
    maxi.push(4);
    maxi.push(3);

    int size = maxi.size();

    for (int i = 0; i < size; i++)
    {
        cout << maxi.top() << endl;
        maxi.pop();
    }

    return 0;
}