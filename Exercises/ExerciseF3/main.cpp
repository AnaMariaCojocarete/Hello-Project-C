#include <iostream>
using namespace std;

int max_two(int a, int b)
{
    int max;
    if (a > b)
        max = a;
    else
        max = b;
    return max;
}
int main()
{
    int e;
    int f;
    cout << "Enter two numbers\n";
    cin >> e >> f;
    int maximum = max_two(e, f);
    cout << "The maximum of e and f is " << maximum << "\n";

    return 0;
}
