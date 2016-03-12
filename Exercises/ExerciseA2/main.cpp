#include <iostream>
using namespace std;

int main()
{
    int foo[10];
    cout << "Enter 10 numbers\n";
    for (int i = 0; i < 10; ++i)
    {
        cin >> foo[i];
    }

    int V;
    cout << "Enter an integer V\n";
    cin >> V;

    for (int i = 0; i < 10; ++i)
    {
        if (foo[i] == V)
        {
            cout << "V is in the array\n";
            return 0;
        }
    }
    cout << "V is not in the array\n";

    return 0;
}
