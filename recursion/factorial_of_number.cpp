// factorial of number

#include <iostream>
using namespace std;

int factorial(int n)
{

    // base case for the factorial 

    if (n == 0)
    {
        return 1;
    }

    int value = n * (factorial(n - 1));

    return value;
}
// main method start here....
int main()
{
    int n = 5;
    int result = factorial(n);
    cout << result << endl;
    return 0;
}