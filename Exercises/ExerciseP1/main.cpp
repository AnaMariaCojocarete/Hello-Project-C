#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers a and b\n";
    cin >> a >> b;

    int *ptrA = &a;
    int *ptrB = &b;

    cout << "The value of ptrA is " << *ptrA << "\n";
    cout << "The value of ptrB is " << *ptrB << "\n";

    return 0;
}
