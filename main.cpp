#include <iostream>
using namespace std;

int sum(int a, int b=20)
{
    return a + b;
}

int diff(int a, int b=20)
{
    return a - b;
}

int main ()
{
    // local variable declaration:
    int a = 100;
    int b = 200;
    int result;

    // calling a function to add the values.
    result = sum(a, b);
    cout << "Total value is :" << result << endl;

    // calling a function again as follows.
    result = sum(a);
    cout << "Total value is :" << result << endl;

    // calling a function to subtract the values.
    result = diff(a, b);
    cout << "Total value is :" << result << endl;

    // calling a function again as follows.
    result = diff(a);
    cout << "Total value is :" << result << endl;

    return 0;
}