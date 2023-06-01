// here we see the how to sum the number n by the help of the recursion

#include <iostream>
using namespace std;

// sum recursion function
int sum(int n)
{
    // ths is base case 
    if (n == 0)
    {
        return 0;
    }

    // calling the  function
    int prevSum = sum(n - 1);
    return n + prevSum;
}
// main methods start here ..
int main()
{
    // cout << "enter you number " << endl;
    // int n;
    // cin >> n;
    // calling the recursion function
    int tSum = sum(20);
    cout<<tSum<<endl;
    return 0;
}
